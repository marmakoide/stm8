#include <stdint.h>


extern inline void
delay_ms(uint16_t ms) {
    for(uint32_t i = ((F_CPU / 18000UL) * ms); i != 0; --i)
        __asm__("nop");
}
