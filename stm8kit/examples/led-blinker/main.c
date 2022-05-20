#define F_CPU 2400000UL

#include <stm8kit/GPIO.h>
#include <stm8kit/delays.h>


void
main() {
	gpio_pin_C5__set_as_output();
	gpio_pin_C5__enable_pullup();
    
    while(1) {
    	gpio_pin_C5__toggle();
        delay_ms(1000);
    }
}
