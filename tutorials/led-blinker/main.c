#include <stdint.h>


#define F_CPU 2400000UL
#define _SFR_(mem_addr)     (*(volatile uint8_t *)(0x5000 + (mem_addr)))


// PORT C
#define PC_ODR      _SFR_(0x0A)
#define PC_IDR      _SFR_(0x0B)
#define PC_DDR      _SFR_(0x0C)
#define PC_CR1      _SFR_(0x0D)
#define PC_CR2      _SFR_(0x0E)

#define LED_PIN     5


static inline
void delay_ms(uint16_t ms) {
    uint32_t i;
    for (i = 0; i < ((F_CPU / 18000UL) * ms); i++)
        __asm__("nop");
}


void
main() {
    PC_DDR |= (1 << LED_PIN); // configure PC15 as output
    PC_CR1 |= (1 << LED_PIN); // push-pull mode
    
    while (1) {
        PC_ODR ^= (1 << LED_PIN);
        delay_ms(1000);
    }
}
