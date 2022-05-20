./src/GPIO/gpio_pin_C0__is_high.c: ./src/GPIO/gpio_pin_XX__is_high.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/0/' > $@

./src/GPIO/gpio_pin_C1__is_high.c: ./src/GPIO/gpio_pin_XX__is_high.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/1/' > $@

./src/GPIO/gpio_pin_C2__is_high.c: ./src/GPIO/gpio_pin_XX__is_high.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/2/' > $@

./src/GPIO/gpio_pin_C3__is_high.c: ./src/GPIO/gpio_pin_XX__is_high.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/3/' > $@

./src/GPIO/gpio_pin_C4__is_high.c: ./src/GPIO/gpio_pin_XX__is_high.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/4/' > $@

./src/GPIO/gpio_pin_C5__is_high.c: ./src/GPIO/gpio_pin_XX__is_high.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/5/' > $@

./src/GPIO/gpio_pin_C6__is_high.c: ./src/GPIO/gpio_pin_XX__is_high.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/6/' > $@

./src/GPIO/gpio_pin_C7__is_high.c: ./src/GPIO/gpio_pin_XX__is_high.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/7/' > $@


./src/GPIO/gpio_pin_C0__set_as_output.c: ./src/GPIO/gpio_pin_XX__set_as_output.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/0/' > $@

./src/GPIO/gpio_pin_C1__set_as_output.c: ./src/GPIO/gpio_pin_XX__set_as_output.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/1/' > $@

./src/GPIO/gpio_pin_C2__set_as_output.c: ./src/GPIO/gpio_pin_XX__set_as_output.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/2/' > $@

./src/GPIO/gpio_pin_C3__set_as_output.c: ./src/GPIO/gpio_pin_XX__set_as_output.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/3/' > $@

./src/GPIO/gpio_pin_C4__set_as_output.c: ./src/GPIO/gpio_pin_XX__set_as_output.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/4/' > $@

./src/GPIO/gpio_pin_C5__set_as_output.c: ./src/GPIO/gpio_pin_XX__set_as_output.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/5/' > $@

./src/GPIO/gpio_pin_C6__set_as_output.c: ./src/GPIO/gpio_pin_XX__set_as_output.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/6/' > $@

./src/GPIO/gpio_pin_C7__set_as_output.c: ./src/GPIO/gpio_pin_XX__set_as_output.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/7/' > $@


./src/GPIO/gpio_pin_C0__enable_pullup.c: ./src/GPIO/gpio_pin_XX__enable_pullup.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/0/' > $@

./src/GPIO/gpio_pin_C1__enable_pullup.c: ./src/GPIO/gpio_pin_XX__enable_pullup.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/1/' > $@

./src/GPIO/gpio_pin_C2__enable_pullup.c: ./src/GPIO/gpio_pin_XX__enable_pullup.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/2/' > $@

./src/GPIO/gpio_pin_C3__enable_pullup.c: ./src/GPIO/gpio_pin_XX__enable_pullup.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/3/' > $@

./src/GPIO/gpio_pin_C4__enable_pullup.c: ./src/GPIO/gpio_pin_XX__enable_pullup.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/4/' > $@

./src/GPIO/gpio_pin_C5__enable_pullup.c: ./src/GPIO/gpio_pin_XX__enable_pullup.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/5/' > $@

./src/GPIO/gpio_pin_C6__enable_pullup.c: ./src/GPIO/gpio_pin_XX__enable_pullup.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/6/' > $@

./src/GPIO/gpio_pin_C7__enable_pullup.c: ./src/GPIO/gpio_pin_XX__enable_pullup.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/7/' > $@


./src/GPIO/gpio_pin_C0__toggle.c: ./src/GPIO/gpio_pin_XX__toggle.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/0/' > $@

./src/GPIO/gpio_pin_C1__toggle.c: ./src/GPIO/gpio_pin_XX__toggle.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/1/' > $@

./src/GPIO/gpio_pin_C2__toggle.c: ./src/GPIO/gpio_pin_XX__toggle.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/2/' > $@

./src/GPIO/gpio_pin_C3__toggle.c: ./src/GPIO/gpio_pin_XX__toggle.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/3/' > $@

./src/GPIO/gpio_pin_C4__toggle.c: ./src/GPIO/gpio_pin_XX__toggle.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/4/' > $@

./src/GPIO/gpio_pin_C5__toggle.c: ./src/GPIO/gpio_pin_XX__toggle.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/5/' > $@

./src/GPIO/gpio_pin_C6__toggle.c: ./src/GPIO/gpio_pin_XX__toggle.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/6/' > $@

./src/GPIO/gpio_pin_C7__toggle.c: ./src/GPIO/gpio_pin_XX__toggle.c.template ./include/stm8kit/GPIO.h 
	cat $< | sed -e 's/PORT_ID/C/' -e 's/PIN_ID/7/' > $@
