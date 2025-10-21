MODEL=./model/alexnetbn_v2-power2.onnx
OUTPUT_DIR = ./output
LOG_DIR = $(OUTPUT_DIR)/relay
C_CODEGEN_DIR = $(OUTPUT_DIR)/Ccodegen
BIN_SOURCE_DIR = $(OUTPUT_DIR)/bin
CACHE_DIR = ./Python/utils/__pycache__
BUILD_SCRIPT = ./Python/build_model.py
TEST_DIR = ./testbench
DATASET = ./data
VISUTAM = Python/VisuTVM/main.py

QUIET = @


.DEFAULT_GOAL = all

.PHONY = build_model test_dla all clean vizuTVM

all: build_model test_cpu test_dla vizuTVM

build_model:
	$(QUIET)echo "Building model..."
	$(QUIET)mkdir -p $(OUTPUT_DIR)
	$(QUIET)mkdir -p $(LOG_DIR)
	$(QUIET)python $(BUILD_SCRIPT) -m $(MODEL) -o $(OUTPUT_DIR) -l $(LOG_DIR) -d $(DATASET)

	$(QUIET)echo "Extracting tar..."
	$(QUIET)mkdir -p $(OUTPUT_DIR)/model_c
	$(QUIET)tar xvf $(OUTPUT_DIR)/model_c.tar -C $(OUTPUT_DIR)/model_c
	$(QUIET)echo "Moving source files..."
	$(QUIET)mkdir -p $(C_CODEGEN_DIR)
	$(QUIET)mv $(OUTPUT_DIR)/model_c/lib2.c $(C_CODEGEN_DIR)/model.cpp
	$(QUIET)mv $(OUTPUT_DIR)/*.c $(C_CODEGEN_DIR)
	$(QUIET)mv $(OUTPUT_DIR)/*.h $(C_CODEGEN_DIR)
	$(QUIET)echo "Moving binary files..."
	$(QUIET)mkdir -p $(BIN_SOURCE_DIR)
	$(QUIET)mv $(OUTPUT_DIR)/*.bin $(BIN_SOURCE_DIR)

test_%:
	$(QUIET)echo "Cleaning runtime..."
	$(QUIET)cd $(TEST_DIR)/$* && make clean && cd -
	$(QUIET)echo "Compiling runtime..."
	$(QUIET)cd $(TEST_DIR)/$* && make all && cd -
	$(QUIET)echo "Running program..."
	$(QUIET)cd $(TEST_DIR)/$* && make test && cd -

visuTVM:
	python $(VISUTAM) \
	-bp $(LOG_DIR)/relay_mc_origin_model.txt \
	-ap $(LOG_DIR)/relay_mc_MergeComposite_model.txt \
	-pn AllPass  \
	-sn VGG8 \
	-wi

clean:
	$(QUIET)echo "Cleaning up..."
	$(QUIET)cd $(TEST_DIR)/dla && make clean && cd -
	$(QUIET)cd $(TEST_DIR)/cpu && make clean && cd -
	$(QUIET)rm -rf $(OUTPUT_DIR) $(CACHE_DIR) $(BIN_SOURCE_DIR) $(LOG_DIR) $(C_CODEGEN_DIR)

clean_data:
	$(QUIET)echo "Cleaning up dataset..."
	$(QUIET)rm -rf $(DATASET)
