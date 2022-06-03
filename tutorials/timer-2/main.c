#include <stdint.h>


#define F_CPU 2000000UL
#define _SFR_(mem_addr)     (*(volatile uint8_t *)(mem_addr))


// Timer 2
#define TIM2_CR1     _SFR_(0x5300) // TIM2 control register 1
#define TIM2_IER     _SFR_(0x5301) // TIM2 interrupt enable register
#define TIM2_SR1     _SFR_(0x5302) // TIM2 status register 1
#define TIM2_SR2     _SFR_(0x5303) // TIM2 status register 2
#define TIM2_EGR     _SFR_(0x5304) // TIM2 event generation register
#define TIM2_CCMR1   _SFR_(0x5305) // TIM2 capture/compare mode register 1
#define TIM2_CCMR2   _SFR_(0x5306) // TIM2 capture/compare mode register 2
#define TIM2_CCMR3   _SFR_(0x5307) // TIM2 capture/compare mode register 3
#define TIM2_CCER1   _SFR_(0x5308) // TIM2 capture/compare enable register 1
#define TIM2_CCER2   _SFR_(0x5309) // TIM2 capture/compare enable register 2
#define TIM2_CNTRH   _SFR_(0x530a) // TIM2 counter high
#define TIM2_CNTRL   _SFR_(0x530b) // TIM2 counter low
#define TIM2_PSCR    _SFR_(0x530c) // TIM2 prescaler register
#define TIM2_ARRH    _SFR_(0x530d) // TIM2 auto-reload register high
#define TIM2_ARRL    _SFR_(0x530e) // TIM2 auto-reload register low
#define TIM2_CCR1H   _SFR_(0x530f) // TIM2 capture/compare register 1 high
#define TIM2_CCR1L   _SFR_(0x5310) // TIM2 capture/compare register 1 low
#define TIM2_CCR2H   _SFR_(0x5311) // TIM2 capture/compare register 2 high
#define TIM2_CCR2L   _SFR_(0x5312) // TIM2 capture/compare register 2 low
#define TIM2_CCR3H   _SFR_(0x5313) // TIM2 capture/compare register 3 high
#define TIM2_CCR3L   _SFR_(0x5314) // TIM2 capture/compare register 3 low

#define TIM2_UPD_OVF_ISR 13

#define TIM2_SR1__UIF 0
#define TIM2_CR1__CEN 0
#define TIM2_IER__UIE 0

// GPIO port C
#define PC_ODR       _SFR_(0x500a) // Port C data output latch register
#define PC_IDR       _SFR_(0x500b) // Port C input pin value register
#define PC_DDR       _SFR_(0x500c) // Port C data direction register
#define PC_CR1       _SFR_(0x500d) // Port C control register 1
#define PC_CR2       _SFR_(0x500e) // Port C control register 2

#define LED_PIN     5

void
timer2_isr(void) __interrupt(TIM2_UPD_OVF_ISR) {
    PC_ODR ^= (1 << LED_PIN);
    TIM2_SR1 &= ~(1 << TIM2_SR1__UIF);
}


void
main() {
	const uint16_t reload_value = 15625;
    
	// Timer 2 setup
    TIM2_PSCR = 7;                    // Prescaler set to 128
    TIM2_ARRH = reload_value >> 8;    // Period set to 15625 (will give exactly 1Hz for default system clock at 2Mhz) 
    TIM2_ARRL = reload_value & 0xff;  // High byte should be set then low byte, per the manual, timer section
    TIM2_IER |= (1 << TIM2_IER__UIE); // Enable update interrupt
    TIM2_CR1 |= (1 << TIM2_CR1__CEN); // Enable TIM3 counter

	// Port C, pin 5 setup
    PC_DDR |= (1 << LED_PIN); // Configure PC15 as output
    PC_CR1 |= (1 << LED_PIN); // Push-pull mode
    
    __asm__("rim"); // Enable interrupts

    // Go back to sleep whenever awaken by interrupt
    while (1) {
    	__asm__("wfi"); // Wait for interrupt
    }
}
