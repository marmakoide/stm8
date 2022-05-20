CC=sdcc
AR=sdar

F_CPU=2400000UL
INCLUDES=./include
CFLAGS=--std-sdcc11 --opt-code-size -DF_CPU=$(F_CPU) -I$(INCLUDES)

include autogen_files.mk

TARGET = stm8kit.lib

SOURCES = \
	$(GENERATED_SOURCES) \
	./src/delays/delay_ms.c
	
OBJECTS=$(SOURCES:%.c=%.rel)

.PHONY: all clean

all: $(TARGET)

include autogen_rules.mk

$(TARGET): $(OBJECTS)
	$(AR) -rc $@ $^

%.rel: %.c
	$(CC) -mstm8 $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(GENERATED_SOURCES) $(OBJECTS) $(SOURCES:%.c=%.asm) $(SOURCES:%.c=%.sym) $(SOURCES:%.c=%.lst) $(SOURCES:%.c=%.rst)
