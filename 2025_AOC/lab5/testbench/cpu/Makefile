ELF_NAME := main
ELF_FLAGS := -i ../../output/bin/input.bin -w ../../output/bin/weight.bin

export CC ?= gcc
export CXX ?= g++
export VALGRIND ?= valgrind

CLASS ?= 4
INDEX ?= 9

PROJECTBASE = $(PWD)
override PROJECTBASE    := $(abspath $(PROJECTBASE))
TOP_DIR = $(PROJECTBASE)

OBJ_DIR := obj
LOG_DIR := log
MASSIF_OUTPUT_DIR:= massif_out

SRC_DIR := $(TOP_DIR)/../../simulation/software/src
INCLUDE_DIR := $(TOP_DIR)/../../simulation/software/include
CODEGEN_DIR := $(TOP_DIR)/../../output/Ccodegen
CSOURCE_DIR := $(TOP_DIR)/../../Csource

#######################################
# CFLAGS
#######################################
CFLAGS :=
LDFLAGS := -pthread -lm

# macros for gcc
# AS defines
AS_DEFS =
# C defines
C_DEFS = -DCPU_ONLY

QUIET = @

ifeq ($(QUIET),0)
	QUIET =
endif

PERLOG :=

# AS includes
AS_INCLUDES =

# C includes
C_INCLUDES = \
        -I $(INCLUDE_DIR)/eyeriss \
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
        ${wildcard $(SRC_DIR)/eyeriss/cpu/improve/*.cpp}

SRC_C := $(wildcard $(TOP_DIR)/*.c) \
		$(wildcard $(CODEGEN_DIR)/*.c) \
		$(wildcard $(CSOURCE_DIR)/*.c) \
        ${wildcard $(SRC_DIR)/eyeriss/cpu/improve/*.c}

OBJ_CPP := $(addprefix $(OBJ_DIR)/,$(notdir $(SRC_CPP:.cpp=.o)))
OBJ_C := $(addprefix $(OBJ_DIR)/,$(notdir $(SRC_C:.c=.o)))

vpath %.cpp $(sort $(dir $(SRC_CPP)))
vpath %.c $(sort $(dir $(SRC_C)))

SRC := $(SRC_C) $(SRC_CPP)
OBJ := $(OBJ_C) $(OBJ_CPP)

.SUFFIXES: .o .S .cpp

.PHONY: all clean pre test valgrind usage %_full

usage:
	@echo "Usage: make [target]"
	@echo ""
	@echo "Available targets:"
	@echo "  all                      - Build the project (default target)"
	@echo "  test     [CLASS][INDEX]  - Run the compiled executable with test input"
	@echo "  valgrind [CLASS][INDEX]  - Run Valgrind Massif to analyze memory usage"
	@echo "  test_full                - Run with 100 test input"
	@echo "  valgrind_full            - Run Valgrind Massifwith 100 test input"
	@echo "  clean                    - Remove all generated files"
	@echo ""
	@echo "Environment Variables:"
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
	$(QUIET)bash -c "./$(ELF_NAME) $(ELF_FLAGS) -c $(CLASS) -n $(INDEX) \
	1> >(tee $(LOG_DIR)/out.log) 2> >(tee $(LOG_DIR)/err.log >&2)"

valgrind: $(ELF_NAME) | $(LOG_DIR) $(MASSIF_OUTPUT_DIR)
	@echo ""
	@echo "Running valgrind massif"

	@$(VALGRIND) --tool=massif \
	--log-file=$(LOG_DIR)/$(ELF_NAME)_massif.log \
	--heap=yes \
	--stacks=yes \
	--time-unit=i \
	--detailed-freq=1 \
	--max-snapshots=1000 \
	--ignore-fn=fopen --ignore-fn=fread --ignore-fn=fwrite --ignore-fn=load_bin_data --ignore-fn=load_weight \
	--massif-out-file=$(MASSIF_OUTPUT_DIR)/massif.out.%p_$(ELF_NAME) \
	./$(ELF_NAME) $(ELF_FLAGS) -c $(CLASS) -n $(INDEX)

%_full:
	make $* CLASS=-1 INDEX=-1

$(MASSIF_OUTPUT_DIR):
	mkdir -p $@

$(LOG_DIR):
	mkdir -p $@
