#include <stdint.h>


#define F_CPU 2000000UL
#define _SFR_(mem_addr)     (*(volatile uint8_t *)(mem_addr))


// GPIO port C
#define PC_ODR       _SFR_(0x500a) // Port C data output latch register
#define PC_IDR       _SFR_(0x500b) // Port C input pin value register
#define PC_DDR       _SFR_(0x500c) // Port C data direction register
#define PC_CR1       _SFR_(0x500d) // Port C control register 1
#define PC_CR2       _SFR_(0x500e) // Port C control register 2

#define LED_PIN     5


static inline void
delay_ms(uint16_t ms) {
    for (uint32_t i = ((F_CPU / 18000UL) * ms); i != 0; --i)
        __asm__("nop");
}


void
main() {
	// Port C, pin 5 setup
    PC_DDR |= (1 << LED_PIN); // Configure PC15 as output
    PC_CR1 |= (1 << LED_PIN); // Push-pull mode

	// Main loop    
    while (1) {
        PC_ODR ^= (1 << LED_PIN);
        delay_ms(1000);
    }
}
