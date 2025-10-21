#include "hal.hpp"

#include "axi.hpp"

/* ========================= VCD handler ========================= */
#ifdef USE_VCD
void HardwareAbstractionLayer::vcd_init() {
    /* VCD */
    Verilated::traceEverOn(true);
    this->VCD_FP = new VerilatedVcdC();
    device->trace(VCD_FP, 1);
    VCD_FP->dumpvars(1, "TOP.asic_wrapper.asic_0.asic_controller_0");
    VCD_FP->dumpvars(1, "TOP.asic_wrapper.GLB_0");
    VCD_FP->dumpvars(1, "TOP.asic_wrapper.asic_0.PPU.post_quant_0");
    fprintf(stdout, "[HAL create] VCD trace\n");
}

void HardwareAbstractionLayer::vcd_final() { delete VCD_FP; }
#endif

/* ========================= HAL ========================= */
/* HAL Constructor */
HardwareAbstractionLayer::HardwareAbstractionLayer(uint32_t baseaddr,
                                                   uint32_t mmio_size) {
    this->vm_addr_h = ((uint64_t)(this) & 0xffffffff00000000);
    this->baseaddr = baseaddr;
    this->mmio_size = mmio_size;
#ifdef DEBUG
    fprintf(stderr, "[HAL create] vm_addr_h = %lx \n", vm_addr_h);
#endif

#ifdef USE_VCD
    vcd_task_id = 0;
#endif
    device = new Vasic_wrapper("TOP");
}

/* HAL Destructor */
HardwareAbstractionLayer::~HardwareAbstractionLayer() {
    if (device != NULL) {
        delete device;
    }
#ifdef DEBUG
    fprintf(stderr, "[HAL is destroyed]\n");
#endif
}

void HardwareAbstractionLayer::init() {
#ifdef USE_VCD
    vcd_init();
#endif

#ifdef DEBUG
    fprintf(stderr, "[HAL init]\n");
#endif
    /* reset stats */
    reset_runtime_info();

    /* reset hardware */
    device->ARESETn = 0;
    for (int i = 0; i < RESET_CYCLE; i++) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    }
    device->ARESETn = 1;
    device->eval();
}

void HardwareAbstractionLayer::final() {
#ifdef USE_VCD
    vcd_final();
#endif
}

/**
 * @brief Writes data to a specific MMIO address.
 */
bool HardwareAbstractionLayer::memory_set(uint32_t addr, uint32_t data) {
    if (device == NULL) {
        fprintf(stderr, "[HAL] device is not init yet.\n");
    }

#ifdef DEBUG
    fprintf(stderr, "[HAL memory_set] (0x%08x) 0x%08x \n", addr, data);
#endif
    if (addr < baseaddr || addr > baseaddr + mmio_size) {
#ifdef DEBUG
        fprintf(stderr,
                "[HAL ERROR] address 0x%08x is not in device MMIO range.\n",
                addr);
#endif
        return false;
    }

    // send write address
    //! hint>>
    device->AWID_S = 0;
    device->AWADDR_S = addr;
    device->AWLEN_S = 0;    // unused
    device->AWSIZE_S = 0;   // unused
    device->AWBURST_S = 0;  // unused
    device->AWVALID_S = 1;  // valid
    device->eval();
    //! hint<<

    // wait for ready (address)
    //! hint>>
    while (!device->AWREADY_S) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    }
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    device->AWVALID_S = 0;
    //! hint<<

    // send write data
    //! hint>>
    device->WDATA_S = data;
    device->WSTRB_S = 0;   // unused
    device->WLAST_S = 1;   // single shot, always the last one
    device->WVALID_S = 1;  // valid
    device->eval();
    //! hint<<

    // wait for ready (data)
    //! hint>>
    while (!device->WREADY_S) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    }
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    device->WVALID_S = 0;
    //! hint<<

    // wait for write response
    //! hint>>
    device->BREADY_S = 1;
    device->eval();
    while (!device->BVALID_S) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    }
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    device->BREADY_S = 0;
    //! hint<<

    int resp = device->BRESP_S;
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    return resp == AXI_RESP_OKAY;
}

/**
 * @brief Reads data from a specific MMIO address.
 */
bool HardwareAbstractionLayer::memory_get(uint32_t addr, uint32_t &data) {
    if (device == NULL) {
        fprintf(stderr, "[HAL] device is not init yet.\n");
    }
#ifdef DEBUG
    fprintf(stderr, "[HAL memory_get] (0x%08x) \n", addr);
#endif
    if (addr < baseaddr || addr > baseaddr + mmio_size) {
#ifdef DEBUG
        fprintf(stderr,
                "[HAL ERROR] address 0x%08x is not in device MMIO range.\n",
                addr);
#endif
        return false;
    }

    // send read address
    //! hint>>
    device->ARID_S = 0;
    device->ARADDR_S = addr;
    device->ARLEN_S = 0;    // unused
    device->ARSIZE_S = 0;   // unused
    device->ARBURST_S = 0;  // unused
    device->ARVALID_S = 1;  // valid
    //! hint<<

    // wait for ready (address)
    //! hint>>
    do {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    } while (!device->ARREADY_S);
    device->ARVALID_S = 0;
    //! hint<<

    // wait for valid (data)
    //! hint>>
    device->RREADY_S = 1;
    do {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    } while (!device->RVALID_S);
    device->RREADY_S = 0;
    //! hint<<

    // get read data
    data = device->RDATA_S;
    int resp = device->RRESP_S;
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    return resp == AXI_RESP_OKAY;
}

/**
 * @brief Waits for an interrupt request (IRQ) from the hardware.
 */
void HardwareAbstractionLayer::wait_for_irq() {
    if (device == NULL) {
        fprintf(stderr, "[HAL] device is not init yet.\n");
    }
#ifdef DEBUG
    fprintf(stderr, "[HAL wait_for_irq] \n");
#endif
#ifdef USE_VCD
    char filename[50];
    sprintf(filename, "asic_%d.vcd", vcd_task_id);
    VCD_FP->open(filename);
#endif
    /* loop until interrupt */
    while (!device->ASIC_interrupt) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
        /* handle DMA read/write */
        if (device->ARVALID_M) handle_dma_read();
        if (device->AWVALID_M) handle_dma_write();
    }
#ifdef USE_VCD
    VCD_FP->close();
    vcd_task_id++;
#endif
}

/**
 * @brief Handles DMA read operations.
 */
void HardwareAbstractionLayer::handle_dma_read() {
    // get read address
    uint32_t *addr;
    addr = (uint32_t *)(vm_addr_h | device->ARADDR_M);
    uint32_t len = device->ARLEN_M;
    device->ARREADY_M = 1;
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    device->ARREADY_M = 0;
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);

#ifdef DEBUG
    fprintf(stderr, "[HAL handle_dma_read] addr = %p, len = %d \n", addr,
            len + 1);
#endif

    // send read data (increase mode, burst_size 32bits)
    //! hint>>
    device->RID_M = 0;  // default
    device->RRESP_M = AXI_RESP_OKAY;

    for (int i = 0; i <= len; i++) {
        device->RDATA_M = *(addr + i);           // send read data
        info.elapsed_cycle += MEM_ACCESS_CYCLE;  // simulate memory access delay
        info.elapsed_time += MEM_ACCESS_CYCLE * CYCLE_TIME;

#ifdef DEBUG
        fprintf(stdout, "[HAL handle_dma_read] addr = %p, data = %08x \n",
                addr + i, *(addr + i));
#endif
        device->RLAST_M = i == len;  // the last one
        device->RVALID_M = 1;
        device->eval();

        // wait DMA ready for next data
        while (!device->RREADY_M) {
            clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
        }
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
        device->RVALID_M = 0;
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    }
    device->eval();
    //! hint<<

    // count memory access
    info.memory_read += sizeof(uint32_t) * (len + 1);
}

/**
 * @brief Handles DMA write operations.
 */
void HardwareAbstractionLayer::handle_dma_write() {
    // get address
    uint32_t *addr;
    addr = (uint32_t *)(vm_addr_h | device->AWADDR_M);
    uint32_t len = device->AWLEN_M;
    device->AWREADY_M = 1;
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    device->AWREADY_M = 0;
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);

#ifdef DEBUG
    fprintf(stderr, "[HAL handle_dma_write] addr = %p, len = %d \n", addr,
            len + 1);
#endif

    // recv write data (increase mode, burst_size 32bits)
    //! hint>>
    device->RID_M = 0;  // default

    for (int i = 0; i <= len; i++) {
        *(addr + i) = (uint32_t)device->WDATA_M;  // recv write data
        info.elapsed_cycle += MEM_ACCESS_CYCLE;  // simulate memory access delay
        info.elapsed_time += MEM_ACCESS_CYCLE * CYCLE_TIME;

#ifdef DEBUG
        fprintf(stdout, "[HAL handle_dma_write] addr = %p, data = %08x \n",
                addr + i, *(addr + i));
#endif
        device->WREADY_M = 1;
        device->eval();

        // wait DMA valid for next data
        while (!device->WVALID_M) {
            clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
        }
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
        device->WREADY_M = 0;
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    }
    device->eval();
    //! hint<<

    // recv write response
    //! hint>>
    device->BID_M = 0;
    device->BRESP_M = AXI_RESP_OKAY;
    device->BVALID_M = 1;
    device->eval();
    while (!device->BREADY_M) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    };
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    device->BVALID_M = 0;
    device->eval();
    //! hint<<

    // count memory access
    info.memory_write += sizeof(uint32_t) * (len + 1);
}

struct runtime_info HardwareAbstractionLayer::get_runtime_info() {
    return info;
}

void HardwareAbstractionLayer::reset_runtime_info() {
    info.elapsed_cycle = 0;
    info.elapsed_time = 0;
    info.memory_read = 0;
    info.memory_write = 0;
}
