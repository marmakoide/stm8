#include <stdint.h>
#include <string.h>
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

#define UART3_TX_ISR             20
#define UART3_RX_ISR             21

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


#define UART_TX_BUFFER_SIZE 16
static volatile uint8_t uart_tx_start = 0;
static volatile uint8_t uart_tx_end = 0;
static volatile char uart_tx_buffer[UART_TX_BUFFER_SIZE];

#define UART_RX_BUFFER_SIZE 16
static volatile uint8_t uart_rx_start = 0;
static volatile uint8_t uart_rx_end = 0;
static volatile char uart_rx_buffer[UART_RX_BUFFER_SIZE];


void
uart3_rx_isr(void) __interrupt(UART3_RX_ISR) {
	if (UART3_SR & (1 << UART_SR__RXNE)) {
		// Check if the buffer is full
		uint8_t uart_rx_end_next = (uart_rx_end + 1) % UART_RX_BUFFER_SIZE;
		if (uart_rx_end_next == uart_rx_start)
			UART3_CR2 &= ~(1 << UART_CR2__RIEN); // Disable interrupt when full
		else {
			uart_rx_buffer[uart_rx_end] = UART3_DR;
			uart_rx_end = uart_rx_end_next;
		}
	}
}


void
uart3_tx_isr(void) __interrupt(UART3_TX_ISR) {
	if (UART3_SR & (1 << UART_SR__TXE)) {
		// Check if the buffer is empty
		if (uart_tx_start == uart_tx_end)
			UART3_CR2 &= ~(1 << UART_CR2__TIEN); // Disable interrupt
		else {
			// Transmit first char in the buffer
			UART3_DR = uart_tx_buffer[uart_tx_start];
			uart_tx_start = (uart_tx_start + 1) % UART_TX_BUFFER_SIZE;
		}
	}
}


int
putchar(int c) {
	int8_t done = 0;
	do {
		__asm__("sim"); // Disable interrupts
		uint8_t uart_tx_next_end = (uart_tx_end + 1) % UART_TX_BUFFER_SIZE;
		if (uart_tx_next_end != uart_tx_start) { // If buffer is not full
			uart_tx_buffer[uart_tx_end] = c;
			uart_tx_end = uart_tx_next_end;
			UART3_CR2 |= (1 << UART_CR2__TIEN); // Enable transmitter interrupt
			done = 1;
		}
		__asm__("rim"); // Enable interrupts

		// Wait for an interrupt to try again to push char into buffer
		if (!done)
			__asm__("wfi");
	} while(!done);
			
	return c;
}


int
getchar() {
	int c = 0;

	int8_t done = 0;
	do {
		__asm__("sim"); // Disable interrupts
		if (uart_rx_end == uart_rx_start)
			UART3_CR2 |= (1 << UART_CR2__RIEN); // Enable receiver interrupt
		else {
			c = uart_rx_buffer[uart_rx_start];
			uart_rx_start = (uart_rx_start + 1) % UART_RX_BUFFER_SIZE;
			done = 1;	
		}
		__asm__("rim"); // Enable interrupts
				
		// Wait for an interrupt to try again to push char into buffer
		if (!done)
			__asm__("wfi");
	} while(!done);
			
	return c;		
}


void
main() {
	#define INPUT_BUFFER_SIZE 16
	volatile char input_buffer[INPUT_BUFFER_SIZE];
	
	// UART setup
	UART3_CR2 |= (1 << UART_CR2__TEN) | (1 << UART_CR2__REN); // Enable transmission and reception'
	UART3_CR2 |= (1 << UART_CR2__RIEN); // Enable reception interrupt
	UART3_CR3 &= ~((1 << UART_CR3__STOP1) | (1 << UART_CR3__STOP2)); // 8 bits + 1 stop bit
	UART3_BRR2 = 0x00; // 9600 bauds
	UART3_BRR1 = 0x0d;
    
	// Enable interrupts
 	__asm__("rim");

	// Print a message
	printf("Type messages, press Enter key\r\n");
	
 	// Go back to sleep whenever awaken by interrupt
	while(1) {
		// Fill the input buffer
		uint8_t i;
		for(i = 0; i < INPUT_BUFFER_SIZE - 1; ++i) {
			input_buffer[i] = (char)getchar();
			if (input_buffer[i] == '\n')
				break;
		}
		input_buffer[i+1] = '\0';
		
		// Write the content of the input buffer        
		size_t len = strlen(input_buffer);
		if (input_buffer[len - 1] == '\n')
			input_buffer[len - 1] = '\0';

		printf("=> '%s'\r\n", input_buffer);       
	} 	
}
