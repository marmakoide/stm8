#include <stdint.h>
#include <stdio.h>


#define F_CPU 2000000UL
#define _SFR_(mem_addr)     (*(volatile uint8_t *)(mem_addr))


#define UART3_SR     _SFR_(0x005240) // UART3 status register
#define UART3_DR     _SFR_(0x005241) // UART3 data register
#define UART3_BRR1   _SFR_(0x005242) // UART3 baud rate register 1
#define UART3_BRR2   _SFR_(0x005243) // UART3 baud rate register 2
#define UART3_CR1    _SFR_(0x005244) // UART3 control register 1
#define UART3_CR2    _SFR_(0x005245) // UART3 control register 2
#define UART3_CR3    _SFR_(0x005246) // UART3 control register 3
#define UART3_CR4    _SFR_(0x005247) // UART3 control register 4
#define UART3_CR6    _SFR_(0x005249) // UART3 control register 6

#define UART_SR__PE       0 // Parity error
#define UART_SR__FE       1 // Framing error
#define UART_SR__NF       2 // Noise flag
#define UART_SR__OR       3 // Overrun error
#define UART_SR__IDLE     4 // DLE line detected
#define UART_SR__RXNE     5 // Read data register not empty
#define UART_SR__TC       6 // Transmission complete
#define UART_SR__TXE      7 // Transmit data register empty

#define UART_CR2__SBK     0 // Send break
#define UART_CR2__RWU     1 // Receiver wakeup
#define UART_CR2__REN     2 // Receiver enable
#define UART_CR2__TEN     3 // Transmitter enable
#define UART_CR2__ILIEN   4 // IDLE Line interrupt enable
#define UART_CR2__RIEN    5 // Receiver interrupt enable
#define UART_CR2__TCIEN   6 // Transmission complete interrupt enable
#define UART_CR2__TIEN    7 // Transmitter interrupt enable

#define UART_CR3__LBCL    0 // Last bit clock pulse
#define UART_CR3__CPHA    1 // Clock phase
#define UART_CR3__CPOL    2 // Clock polarity
#define UART_CR3__CLKEN   3 // Clock enable
#define UART_CR3__STOP1   4 // Stop bits
#define UART_CR3__STOP2   5 // Stop bits
#define UART_CR3__LINEN   6 // LIN mode enable


int
putchar(int c) {
	while(!(UART3_SR & (1 << UART_SR__TXE)));
	UART3_DR = c;
	return c;
}


void
main() {
	// UART setup
	UART3_CR2 |= 1 << UART_CR2__TEN; // Enable transmission
	UART3_CR3 &= ~((1 << UART_CR3__STOP1) | (1 << UART_CR3__STOP2)); // 8 bits + 1 stop bit
	UART3_BRR2 = 0x00; // 9600 bauds
	UART3_BRR1 = 0x0d; 

	// Print a message
	printf("Hello World!\r\n");

 	// Go back to sleep whenever awaken by interrupt
    while (1) {
    	// Wait for interrupts
    	__asm__("wfi");
    }
}