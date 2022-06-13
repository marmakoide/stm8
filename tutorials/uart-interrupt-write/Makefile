MCU=stm8s207k8
SERIAL_PORT=/dev/ttyACM0


.PHONY: clean upload

all: main.hex

%.hex: %.c
	sdcc -lstm8 -mstm8 --out-fmt-ihx --std-sdcc11 -o $@ $<

clean:
	rm -f *.asm *.hex *.lk *.lst *.map *.rel *.rst *.sym *.cdb

upload: main.hex
	stm8flash -c stlinkv21 -p $(MCU) -d $(SERIAL_PORT) -w $<
