ELF_NAME := main

export CC ?= gcc
export CXX ?= g++
export PATH ?= /opt/verilator-5.034/bin:$(PATH)
export VALGRIND ?= valgrind

CLASS ?= 4
INDEX ?= 9

PROJECTBASE = $(PWD)
override PROJECTBASE    := $(abspath $(PROJECTBASE))
TOP_DIR = $(PROJECTBASE)

OBJ_DIR := obj
LOG_DIR := log
MASSIF_OUTPUT_DIR:= massif_out

HW_DIR := $(TOP_DIR)/../../simulation/hardware
SRC_DIR := $(TOP_DIR)/../../simulation/software/src
INCLUDE_DIR := $(TOP_DIR)/../../simulation/software/include
CODEGEN_DIR := $(TOP_DIR)/../../output/Ccodegen
CSOURCE_DIR := $(TOP_DIR)/../../Csource

#######################################
# CFLAGS
#######################################
CFLAGS :=
LDFLAGS := -pthread -L$(HW_DIR) $(addprefix -l:,$(notdir $(wildcard $(HW_DIR)/*.a)))

# macros for gcc
# AS defines
AS_DEFS =
# C defines
C_DEFS =

QUIET = @

ifeq ($(QUIET),0)
	QUIET =
endif

PERLOG :=
ifeq ($(DLA_INFO),1)
	PERLOG += "======== DLA_INFO ========\n"
	C_DEFS += -DDLA_INFO
endif

ifeq ($(DEBUG),1)
	PERLOG += "======== DEBUG ========\n"
	C_DEFS += -DDEBUG
endif

ifeq ($(USE_VCD), 1)
	PERLOG += "======== USE_VCD ========\n"
	C_DEFS +=  -DUSE_VCD
endif

# AS includes
AS_INCLUDES =

# C includes
C_INCLUDES = \
        -I /opt/verilator-5.030/share/verilator/include \
        -I $(INCLUDE_DIR)/eyeriss \
        -I $(INCLUDE_DIR)/hal \
        -I $(HW_DIR)/ \
		-I $(CODEGEN_DIR)/ \
		-I $(CSOURCE_DIR)/ \
        -I $(TOP_DIR)/

######################################
# source
######################################
# C sources
SRC_CPP := $(wildcard $(TOP_DIR)/*.cpp) \
		$(wildcard $(CODEGEN_DIR)/*.cpp) \
		$(wildcard $(CSOURCE_DIR)/*.cpp) \
		$(wildcard $(SRC_DIR)/hal/*.cpp) \
        ${wildcard $(SRC_DIR)/eyeriss/dla/*.cpp} \
        ${wildcard $(SRC_DIR)/eyeriss/cpu/original/*.cpp}

SRC_C := $(wildcard $(TOP_DIR)/*.c) \
		$(wildcard $(CODEGEN_DIR)/*.c) \
		$(wildcard $(CSOURCE_DIR)/*.c) \
		$(wildcard $(SRC_DIR)/hal/*.c) \
        ${wildcard $(SRC_DIR)/eyeriss/dla/*.c} \
        ${wildcard $(SRC_DIR)/eyeriss/cpu/original/*.c}

OBJ_CPP := $(addprefix $(OBJ_DIR)/,$(notdir $(SRC_CPP:.cpp=.o)))
OBJ_C := $(addprefix $(OBJ_DIR)/,$(notdir $(SRC_C:.c=.o)))

vpath %.cpp $(sort $(dir $(SRC_CPP)))
vpath %.c $(sort $(dir $(SRC_C)))

SRC := $(SRC_C) $(SRC_CPP)
OBJ := $(OBJ_C) $(OBJ_CPP)

.SUFFIXES: .o .S .cpp

.PHONY: all clean pre test usage

usage:
	@echo "Usage: make [target]"
	@echo ""
	@echo "Available targets:"
	@echo "  all  [DEBUG=?][DLA_INFO=?][USE_VCD=?]      - Build the project (default target)"
	@echo "  test [CLASS=<num>][INDEX=<num>]            - Run the compiled executable with test input"
	@echo "  clean      - Remove all generated files"
	@echo "  nWave      - Launch nWave with logs"
	@echo ""
	@echo "Environment Variables:"
	@echo "  DEBUG=1       - Enable debug mode"
	@echo "  DLA_INFO=1    - Enable DLA info logs"
	@echo "  USE_VCD=1     - Enable VCD dumping"
	@echo "  CLASS=<num>   - Set class index for testing (default: $(CLASS))"
	@echo "  INDEX=<num>   - Set test index (default: $(INDEX))"

all: pre $(ELF_NAME)

pre:
	$(QUIET)echo $(PERLOG)

$(ELF_NAME): $(OBJ) | $(OBJ_DIR)
	$(QUIET)echo LD $(ELF_NAME)
	$(QUIET)cd $(OBJ_DIR) && \
	$(CXX) $(notdir $^) $(LDFLAGS) -o ../$(ELF_NAME)

# Rule for compiling C++ files
$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(QUIET)echo CXX $(notdir $@)
	$(QUIET)$(CXX) -c $(CFLAGS) $(C_DEFS) $(C_INCLUDES) $^ -o $@

# Rule for compiling C files
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(QUIET)echo CC $(notdir $@)
	$(QUIET)$(CC) -c $(CFLAGS) $(C_DEFS) $(C_INCLUDES) $^ -o $@

$(OBJ_DIR):
	$(QUIET)mkdir -p $@

clean:
	$(QUIET)rm -rf $(OBJ_DIR)
	$(QUIET)rm -rf $(MASSIF_OUTPUT_DIR)
	$(QUIET)rm -rf $(LOG_DIR)
	$(QUIET)rm -rf $(ELF_NAME) *.o *.vcd *.fsdb *.log nWave_log *.rc *.csv

nWave:
	$(QUIET)echo "Run nWave"
	$(QUIET)mkdir -p nWave_log
	$(QUIET)cd nWave_log && nWave &

test: $(ELF_NAME) | $(LOG_DIR)
	$(QUIET)echo "Run test"
	$(QUIET)bash -c "./$(ELF_NAME) -i ../../output/bin/input.bin -w ../../output/bin/weight.bin -c $(CLASS) -n $(INDEX) 1> >(tee $(LOG_DIR)/out.log) 2> >(tee $(LOG_DIR)/err.log >&2)"

$(LOG_DIR):
	mkdir -p $@
