MCU=stm8s207k8
SERIAL_PORT=/dev/ttyACM0

INCLUDES=../../include
LD_PATH=../..

CC=sdcc
CFLAGS=-DF_CPU=200000UL --std-sdcc11 --opt-code-size -I$(INCLUDES)
LDFLAGS=-lstm8kit

SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.rel)

TARGET=blinker.ihx

.PHONY: clean upload

all: $(TARGET)

%.rel: %.c
	$(CC) -mstm8 $(CFLAGS) -c $<

$(TARGET): $(OBJECTS)
	$(CC) -mstm8 -L$(realpath $(LD_PATH)) $(LDFLAGS) --out-fmt-ihx -o $@ $^

clean:
	rm -f $(TARGET) *.asm *.lk *.lst *.map *.rel *.rst *.sym *.mem

upload: $(TARGET)
	stm8flash -c stlinkv21 -p $(MCU) -d $(SERIAL_PORT) -w $<
