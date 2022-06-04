#ifndef STM8KIT_FLAGS_H
#define STM8KIT_FLAGS_H


// --- Reset ------------------------------------------------------------------

#define RST_SR__WWDGF     0 // Window Watchdog reset flag
#define RST_SR__IWDGF     1 // Independent Watchdog reset flag
#define RST_SR__ILLOPF    2 // Illegal opcode reset flag
#define RST_SR__SWIMF     3 // SWIM reset flag
#define RST_SR__EMCF      4 // EMC reset flag


// --- WWDG -------------------------------------------------------------------

#define WWDG_CR__WDGA     7 // Activation bit


// --- AWU --------------------------------------------------------------------

#define AWU_CSR__MSR      0 // Measurement enable
#define AWU_CSR__AWUEN    4 // Auto-wakeup enable
#define AWU_CSR__AWUF     5 // Auto-wakeup flag


// --- BEEP -------------------------------------------------------------------

#define BEEP_CSR__BEEPEN  5 // Beep enable


// --- I2C --------------------------------------------------------------------

#define I2C_CR1__PE        0 // Peripheral enable 
#define I2C_CR1__ENGC      6 // General call enable
#define I2C_CR1__NOSTRETCH 7 // Clock stretching disable

#define I2C_CR2__START     0 // Start generation
#define I2C_CR2__STOP      1 // Stop generation
#define I2C_CR2__ACK       2 // Acknowledge enable
#define I2C_CR2__POS       3 // Acknowledge position
#define I2C_CR2__SWRST     7 // Software reset

#define I2C_SR1__SB        0 // Start bit
#define I2C_SR1__ADDR      1 // Address sent (master mode)/matched (slave mode)
#define I2C_SR1__BTF       2 // Byte transfer finished
#define I2C_SR1__ADD10     3 // 10-bit header sent
#define I2C_SR1__STOPF     4 // Stop detection
#define I2C_SR1__RXNE      6 // Data register not empty
#define I2C_SR1__TXE       7 // Data register empty

#define I2C_SR2__BERR      0 // Bus error
#define I2C_SR2__ARLO      1 // Arbitration lost 
#define I2C_SR2__AF        2 // Acknowledge failure 
#define I2C_SR2__OVR       3 // Overrun/underrun 
#define I2C_SR2__WUFH      5 // Wakeup from Halt 

#define I2C_SR3__MSL       0 // Master/Slave
#define I2C_SR3__BUSY      1 // Bus busy
#define I2C_SR3__TRA       2 // Transmitter/Receiver
#define I2C_SR3__GENCALL   4 // General call header (Slave mode)
#define I2C_SR3__DUALF     7 // Dual flag (Slave mode)

#define I2C_ITR__ITERREN   0 // Error interrupt enable
#define I2C_ITR__ITEVTEN   1 // Event interrupt enable
#define I2C_ITR__TBUFEN    2 // Buffer interrupt enable

#define I2C_CCRH__DUTY     6 // Fast mode duty cycle
#define I2C_CCRH__FS       7 // I2C master mode selection


// --- UART1 ------------------------------------------------------------------

#define UART_SR__PE       0 // Parity error
#define UART_SR__FE       1 // Framing error
#define UART_SR__NF       2 // Noise flag
#define UART_SR__OR       3 // Overrun error
#define UART_SR__IDLE     4 // DLE line detected
#define UART_SR__RXNE     5 // Read data register not empty
#define UART_SR__TC       6 // Transmission complete
#define UART_SR__TXE      7 // Transmit data register empty

#define UART_CR1__PIEN    0 // Parity interrupt enable
#define UART_CR1__PS      1 // Parity selection
#define UART_CR1__PCEN    2 // Parity control enable
#define UART_CR1__WAKE    3 // Wakeup method
#define UART_CR1__M       4 // Word length
#define UART_CR1__UARTD   5 // UART disable
#define UART_CR1__T8      6 // Transmit data bit 8
#define UART_CR1__R8      7 // Receive data bit 8

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
#define UART_CR3__LINEN   6 // LIN mode enable

#define UART_CR4__LBDF    4 // LIN Break Detection Flag
#define UART_CR4__LBDL    5 // LIN Break Detection Length
#define UART_CR4__LBDIEN  6 // LIN Break Detection Interrupt Enable

#define UART_CR5__IREN    1 // IrDA mode Enable
#define UART_CR5__IRLP    2 // IrDA Low Power
#define UART_CR5__HDSEL   3 // Half-Duplex Selection
#define UART_CR5__NACK    4 // Smartcard NACK enable
#define UART_CR5__SCEN    5 // Smartcard mode enable

#define UART_CR6__LSF     0 // LIN Sync Field
#define UART_CR6__LHDF    1 // LIN Header Detection Flag
#define UART_CR6__LHDIEN  2 // LIN Header Detection Interrupt Enable
#define UART_CR6__LASE    4 // LIN automatic resynchronisation enable
#define UART_CR6__LSLV    5 // LIN Slave Enable
#define UART_CR6__LDUM    7 // LIN Divider Update Method


// --- TIM2 -------------------------------------------------------------------

#define TIM2_CR1__CEN     0 // Counter enable
#define TIM2_CR1__UDIS    1 // Update disable
#define TIM2_CR1__URS     2 // Update request source
#define TIM2_CR1__OPM     3 // One-pulse mode
#define TIM2_CR1__ARPE    7 // Auto-reload preload enable 

#define TIM2_IER__UIE     0 // Update interrupt enable
#define TIM2_IER__CC1IE   1 // Capture/compare 1 interrupt enable
#define TIM2_IER__CC2IE   2 // Capture/compare 2 interrupt enable
#define TIM2_IER__CC3IE   3 // Capture/compare 2 interrupt enable
#define TIM2_IER__TIE     6 // Trigger interrupt enable

#define TIM2_SR1__UIF     0 // Update interrupt flag
#define TIM2_SR1__CC1IF   1 // Capture/compare 1 interrupt flag
#define TIM2_SR1__CC2IF   2 // Capture/compare 2 interrupt flag
#define TIM2_SR1__CC3IF   3 // Capture/compare 3 interrupt flag
#define TIM2_SR1__TIF     6 // Trigger interrupt flag

#define TIM2_SR2__CC1OF   1 // Capture/compare 1 overcapture flag
#define TIM2_SR2__CC2OF   2 // Capture/compare 2 overcapture flag
#define TIM2_SR2__CC3OF   3 // Capture/compare 3 overcapture flag

#define TIM2_EGR__UG      0 // Update generation
#define TIM2_EGR__CC1G    1 // Capture compare 1 generation
#define TIM2_EGR__CC2G    2 // Capture compare 1 generation
#define TIM2_EGR__CC3G    3 // Capture compare 1 generation
#define TIM2_EGR__TG      6 // Trigger generation

#define TIM2_CCMR1__OC1PE 3 // Output compare 1 preload enable

#define TIM2_CCMR2__OC2PE 3 // Output compare 2 preload enable

#define TIM2_CCMR3__OC3PE 3 // Output compare 3 preload enable

#define TIM2_CCER1__CC1E  0 // Capture/compare 1 output enable
#define TIM2_CCER1__CC1P  1 // Capture/compare 1 output polarity
#define TIM2_CCER1__CC2E  4 // Capture/compare 2 output enable
#define TIM2_CCER1__CC2P  5 // Capture/compare 2 output polarity

#define TIM2_CCER2__CC3E  0 // Capture/compare 3 output enable
#define TIM2_CCER2__CC3P  1 // Capture/compare 3 output polarity


// --- TIM3 -------------------------------------------------------------------

#define TIM3_CR1__CEN     0 // Counter enable
#define TIM3_CR1__UDIS    1 // Update disable
#define TIM3_CR1__URS     2 // Update request source
#define TIM3_CR1__OPM     3 // One-pulse mode
#define TIM3_CR1__ARPE    7 // Auto-reload preload enable 

#define TIM3_IER__UIE     0 // Update interrupt enable
#define TIM3_IER__CC1IE   1 // Capture/compare 1 interrupt enable
#define TIM3_IER__CC2IE   2 // Capture/compare 2 interrupt enable
#define TIM3_IER__CC3IE   3 // Capture/compare 2 interrupt enable
#define TIM3_IER__TIE     6 // Trigger interrupt enable

#define TIM3_SR1__UIF     0 // Update interrupt flag
#define TIM3_SR1__CC1IF   1 // Capture/compare 1 interrupt flag
#define TIM3_SR1__CC2IF   2 // Capture/compare 2 interrupt flag
#define TIM3_SR1__CC3IF   3 // Capture/compare 3 interrupt flag
#define TIM3_SR1__TIF     6 // Trigger interrupt flag

#define TIM3_SR2__CC1OF   1 // Capture/compare 1 overcapture flag
#define TIM3_SR2__CC2OF   2 // Capture/compare 2 overcapture flag
#define TIM3_SR2__CC3OF   3 // Capture/compare 3 overcapture flag

#define TIM3_EGR__UG      0 // Update generation
#define TIM3_EGR__CC1G    1 // Capture compare 1 generation
#define TIM3_EGR__CC2G    2 // Capture compare 1 generation
#define TIM3_EGR__CC3G    3 // Capture compare 1 generation
#define TIM3_EGR__TG      6 // Trigger generation

#define TIM3_CCMR1__OC1PE 3 // Output compare 1 preload enable

#define TIM3_CCMR2__OC2PE 3 // Output compare 2 preload enable

#define TIM3_CCER1__CC1E  0 // Capture/compare 1 output enable
#define TIM3_CCER1__CC1P  1 // Capture/compare 1 output polarity
#define TIM3_CCER1__CC2E  4 // Capture/compare 2 output enable
#define TIM3_CCER1__CC2P  5 // Capture/compare 2 output polarity


// --- TIM4 -------------------------------------------------------------------

#define TIM4_CR1__CEN     0 // Counter enable
#define TIM4_CR1__UDIS    1 // Update disable
#define TIM4_CR1__URS     2 // Update request source
#define TIM4_CR1__OPM     3 // One-pulse mode
#define TIM4_CR1__ARPE    7 // Auto-reload preload enable 

#define TIM4_IER__UIE     0 // Update interrupt enable
#define TIM4_IER__TIE     6 // Trigger interrupt enable

#define TIM4_SR__UIF      0 // Update interrupt flag
#define TIM4_SR__TIF      6 // Trigger interrupt flag

#define TIM4_EGR__UG      0 // Update generation
#define TIM4_EGR__TG      6 // Trigger generation


// --- ADC --------------------------------------------------------------------

#define ADC_CSR__AWDIE    4 // Analog watchdog interrupt enable
#define ADC_CSR__EOCIE    5 // Interrupt enable for EOC
#define ADC_CSR__AWD      6 // Analog Watchdog flag
#define ADC_CSR__EOC      7 // End of conversion

#define ADC_CR2__SCAN     1 // Scan mode enable
#define ADC_CR2__ALIGN    3 // Data alignment
#define ADC_CR2__EXTTRIG  6 // External trigger enable

#define ADC_CR3__OVR      6 // Overrun flag
#define ADC_CR3__DBUF     7 // Data buffer enable



#endif /* STM8KIT_FLAGS_H */
