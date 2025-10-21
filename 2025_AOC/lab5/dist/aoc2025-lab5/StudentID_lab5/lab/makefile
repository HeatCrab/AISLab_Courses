CC = gcc
CFLAGS = -g -Wall
TARGET = massif_test
SRC = massif_test.c
OUTPUT = massif.out.$(TARGET)

.PHONY: all clean massif ms_print

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET) massif.out.* *.txt *.log

$(OUTPUT): massif
	@echo "Massif output file: $(OUTPUT)"

massif: $(TARGET)
	valgrind --tool=massif \
	--heap=yes \
	--stacks=yes \
	--time-unit=i \
	--detailed-freq=1 \
	--max-snapshots=1000 \
	--massif-out-file=$(OUTPUT) ./$(TARGET)

ms_print: $(OUTPUT)
	ms_print $(OUTPUT) > massif_output.txt
