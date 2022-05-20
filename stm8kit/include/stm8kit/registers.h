#ifndef STM8KIT_REGISTERS_H
#define STM8KIT_REGISTERS_H


#define _SFR_(mem_addr) (*(volatile uint8_t *)(mem_addr))


// --- GPIO port A ------------------------------------------------------------

#define PA_ODR       _SFR_(0x005000) // Port A data output latch register
#define PA_IDR       _SFR_(0x005001) // Port A input pin value register
#define PA_DDR       _SFR_(0x005002) // Port A data direction register
#define PA_CR1       _SFR_(0x005003) // Port A control register 1
#define PA_CR2       _SFR_(0x005004) // Port A control register 2

// --- GPIO port B ------------------------------------------------------------

#define PB_ODR       _SFR_(0x005005) // Port B data output latch register
#define PB_IDR       _SFR_(0x005006) // Port B input pin value register
#define PB_DDR       _SFR_(0x005007) // Port B data direction register
#define PB_CR1       _SFR_(0x005008) // Port B control register 1
#define PB_CR2       _SFR_(0x005009) // Port B control register 2

// --- GPIO port C ------------------------------------------------------------

#define PC_ODR       _SFR_(0x00500a) // Port C data output latch register
#define PC_IDR       _SFR_(0x00500b) // Port C input pin value register
#define PC_DDR       _SFR_(0x00500c) // Port C data direction register
#define PC_CR1       _SFR_(0x00500d) // Port C control register 1
#define PC_CR2       _SFR_(0x00500e) // Port C control register 2

// --- GPIO port D ------------------------------------------------------------

#define PD_ODR       _SFR_(0x00500f) // Port D data output latch register
#define PD_IDR       _SFR_(0x005010) // Port D input pin value register
#define PD_DDR       _SFR_(0x005011) // Port D data direction register
#define PD_CR1       _SFR_(0x005012) // Port D control register 1
#define PD_CR2       _SFR_(0x005013) // Port D control register 2

// --- GPIO port E ------------------------------------------------------------

#define PE_ODR       _SFR_(0x005014) // Port E data output latch register
#define PE_IDR       _SFR_(0x005015) // Port E input pin value register
#define PE_DDR       _SFR_(0x005016) // Port E data direction register
#define PE_CR1       _SFR_(0x005017) // Port E control register 1
#define PE_CR2       _SFR_(0x005018) // Port E control register 2

// --- GPIO port F ------------------------------------------------------------

#define PF_ODR       _SFR_(0x005019) // Port F data output latch register
#define PF_IDR       _SFR_(0x00501a) // Port F input pin value register
#define PF_DDR       _SFR_(0x00501b) // Port F data direction register
#define PF_CR1       _SFR_(0x00501c) // Port F control register 1
#define PF_CR2       _SFR_(0x00501d) // Port F control register 2

// --- GPIO port G ------------------------------------------------------------

#define PG_ODR       _SFR_(0x00501e) // Port G data output latch register
#define PG_IDR       _SFR_(0x00501f) // Port G input pin value register
#define PG_DDR       _SFR_(0x005020) // Port G data direction register
#define PG_CR1       _SFR_(0x005021) // Port G control register 1
#define PG_CR2       _SFR_(0x005022) // Port G control register 2

// --- GPIO port H ------------------------------------------------------------

#define PH_ODR       _SFR_(0x005023) // Port H data output latch register
#define PH_IDR       _SFR_(0x005024) // Port H input pin value register
#define PH_DDR       _SFR_(0x005025) // Port H data direction register
#define PH_CR1       _SFR_(0x005026) // Port H control register 1
#define PH_CR2       _SFR_(0x005027) // Port H control register 2

// --- GPIO port I ------------------------------------------------------------

#define PI_ODR       _SFR_(0x005028) // Port I data output latch register
#define PI_IDR       _SFR_(0x005029) // Port I input pin value register
#define PI_DDR       _SFR_(0x00502a) // Port I data direction register
#define PI_CR1       _SFR_(0x00502b) // Port I control register 1
#define PI_CR2       _SFR_(0x00502c) // Port I control register 2

// --- Flash memory management ------------------------------------------------

#define FLASH_CR1    _SFR_(0x00505a) // Flash control register 1
#define FLASH_CR2    _SFR_(0x00505b) // Flash control register 2
#define FLASH_NCR2   _SFR_(0x00505c) // Flash complementary control register 2
#define FLASH_FPR    _SFR_(0x00505d) // Flash protection register
#define FLASH_NFPR   _SFR_(0x00505e) // Flash complementary protection register
#define FLASH_IAPSR  _SFR_(0x00505f) // Flash in-application programming status register

#define FLASH_PUKR   _SFR_(0x005062) // Flash Program memory unprotection register

#define FLASH_DUKR   _SFR_(0x005064) // Data EEPROM unprotection register

// --- ITC --------------------------------------------------------------------

#define EXTI_CR1     _SFR_(0x0050a0) // External interrupt control register 1
#define EXTI_CR2     _SFR_(0x0050a1) // External interrupt control register 2

// --- Reset ------------------------------------------------------------------

#define RST_SR       _SFR_(0x0050b3) // Reset status register

// --- Clock ------------------------------------------------------------------

#define CLK_ICKR     _SFR_(0x0050c0) // Internal clock control register
#define CLK_ECKR     _SFR_(0x0050c1) // External clock control register

#define CLK_CMSR     _SFR_(0x0050c3) // Clock master status register
#define CLK_SWR      _SFR_(0x0050c4) // Clock master switch register
#define CLK_SWCR     _SFR_(0x0050c5) // Clock switch control register
#define CLK_CKDIVR   _SFR_(0x0050c6) // Clock divider register
#define CLK_PCKENR1  _SFR_(0x0050c7) // Peripheral clock gating register 1
#define CLK_CSSR     _SFR_(0x0050c8) // Clock security system register
#define CLK_CCOR     _SFR_(0x0050c9) // Configurable clock control register
#define CLK_PCKENR2  _SFR_(0x0050ca) // Peripheral clock gating register 2
#define CLK_CANCCR   _SFR_(0x0050cb) // CAN clock control register
#define CLK_HSITRIMR _SFR_(0x0050cc) // HSI clock calibration trimming register
#define CLK_SWIMCCR  _SFR_(0x0050cd) // SWIM clock control register

// --- WWDG -------------------------------------------------------------------

#define WWDG_CR      _SFR_(0x0050d1) // WWDG control register
#define WWDG_WR      _SFR_(0x0050d2) // WWDG window register

// --- IWDG -------------------------------------------------------------------

#define IWDG_KR      _SFR_(0x0050e0) // IWDG key register
#define IWDG_PR      _SFR_(0x0050e1) // IWDG prescaler register
#define IWDG_RLR     _SFR_(0x0050e2) // IWDG reload register

// --- AWU --------------------------------------------------------------------

#define AWU_CSR1     _SFR_(0x0050f0) // AWU control/status register 1
#define AWU_APR      _SFR_(0x0050f1) // AWU asynchronous prescaler buffer register
#define AWU_TBR      _SFR_(0x0050f2) // AWU timebase selection register

// --- BEEP -------------------------------------------------------------------

#define BEEP_CSR     _SFR_(0x0050f3) // BEEP control/status register

// --- SPI --------------------------------------------------------------------

#define SPI_CR1      _SFR_(0x005200) // SPI control register 1
#define SPI_CR2      _SFR_(0x005201) // SPI control register 2
#define SPI_ICR      _SFR_(0x005202) // SPI interrupt control register
#define SPI_SR       _SFR_(0x005203) // SPI status register
#define SPI_DR       _SFR_(0x005204) // SPI data register
#define SPI_CRCPR    _SFR_(0x005205) // SPI CRC polynomial register
#define SPI_RXCRCR   _SFR_(0x005206) // SPI Rx CRC register
#define SPI_TXCRCR   _SFR_(0x005207) // SPI Tx CRC register

// --- I2C --------------------------------------------------------------------

#define I2C_CR1      _SFR_(0x005210) // I2C control register 1
#define I2C_CR2      _SFR_(0x005211) // I2C control register 2
#define I2C_FREQR    _SFR_(0x005212) // I2C frequency register
#define I2C_OARL     _SFR_(0x005213) // I2C own address register low
#define I2C_OARH     _SFR_(0x005214) // I2C own address register high

#define I2C_DR       _SFR_(0x005216) // I2C data register
#define I2C_SR1      _SFR_(0x005217) // I2C status register 1
#define I2C_SR2      _SFR_(0x005218) // I2C status register 2
#define I2C_SR3      _SFR_(0x005219) // I2C status register 3
#define I2C_ITR      _SFR_(0x00521a) // I2C interrupt control register
#define I2C_CCRL     _SFR_(0x00521b) // I2C clock control register low
#define I2C_CCRH     _SFR_(0x00521c) // I2C clock control register high
#define I2C_TRISER   _SFR_(0x00521d) // I2C TRISE register

// --- UART1 ------------------------------------------------------------------

#define UART1_SR     _SFR_(0x005230) // UART1 status register
#define UART1_DR     _SFR_(0x005231) // UART1 data register
#define UART1_BRR1   _SFR_(0x005232) // UART1 baud rate register 1
#define UART1_BRR2   _SFR_(0x005233) // UART1 baud rate register 2
#define UART1_CR1    _SFR_(0x005234) // UART1 control register 1
#define UART1_CR2    _SFR_(0x005235) // UART1 control register 2
#define UART1_CR3    _SFR_(0x005236) // UART1 control register 3
#define UART1_CR4    _SFR_(0x005237) // UART1 control register 4
#define UART1_CR5    _SFR_(0x005238) // UART1 control register 5
#define UART1_GTR    _SFR_(0x005239) // UART1 guard time register
#define UART1_PSCR   _SFR_(0x00523a) // UART1 prescaler register

// --- UART3 ------------------------------------------------------------------

#define UART3_SR     _SFR_(0x005240) // UART3 status register
#define UART3_DR     _SFR_(0x005241) // UART3 data register
#define UART3_BRR1   _SFR_(0x005242) // UART3 baud rate register 1
#define UART3_BRR2   _SFR_(0x005243) // UART3 baud rate register 2
#define UART3_CR1    _SFR_(0x005244) // UART3 control register 1
#define UART3_CR2    _SFR_(0x005245) // UART3 control register 2
#define UART3_CR3    _SFR_(0x005246) // UART3 control register 3
#define UART3_CR4    _SFR_(0x005247) // UART3 control register 4

#define UART3_CR6    _SFR_(0x005249) // UART3 control register 6

// --- TIM1 -------------------------------------------------------------------

#define TIM1_CR1     _SFR_(0x005250) // TIM1 control register 1
#define TIM1_CR2     _SFR_(0x005251) // TIM1 control register 2
#define TIM1_SMCR    _SFR_(0x005252) // TIM1 slave mode control register
#define TIM1_ETR     _SFR_(0x005253) // TIM1 external trigger register
#define TIM1_IER     _SFR_(0x005254) // TIM1 interrupt enable register
#define TIM1_SR1     _SFR_(0x005255) // TIM1 status register 1
#define TIM1_SR2     _SFR_(0x005256) // TIM1 status register 2
#define TIM1_EGR     _SFR_(0x005257) // TIM1 event generation register
#define TIM1_CCMR1   _SFR_(0x005258) // TIM1 capture/compare mode register 1
#define TIM1_CCMR2   _SFR_(0x005259) // TIM1 capture/compare mode register 2
#define TIM1_CCMR3   _SFR_(0x00525a) // TIM1 capture/compare mode register 3
#define TIM1_CCMR4   _SFR_(0x00525b) // TIM1 capture/compare mode register 4
#define TIM1_CCER1   _SFR_(0x00525c) // TIM1 capture/compare enable register 1
#define TIM1_CCER2   _SFR_(0x00525d) // TIM1 capture/compare enable register 2
#define TIM1_CNTRH   _SFR_(0x00525e) // TIM1 counter high
#define TIM1_CNTRL   _SFR_(0x00525f) // TIM1 counter low
#define TIM1_PSCRH   _SFR_(0x005260) // TIM1 prescaler register high
#define TIM1_PSCRL   _SFR_(0x005261) // TIM1 prescaler register low
#define TIM1_ARRH    _SFR_(0x005262) // TIM1 auto-reload register high
#define TIM1_ARRL    _SFR_(0x005263) // TIM1 auto-reload register low
#define TIM1_RCR     _SFR_(0x005264) // TIM1 repetition counter register
#define TIM1_CCR1H   _SFR_(0x005265) // TIM1 capture/compare register 1 high
#define TIM1_CCR1L   _SFR_(0x005266) // TIM1 capture/compare register 1 low
#define TIM1_CCR2H   _SFR_(0x005267) // TIM1 capture/compare register 2 high
#define TIM1_CCR2L   _SFR_(0x005268) // TIM1 capture/compare register 2 low
#define TIM1_CCR3H   _SFR_(0x005269) // TIM1 capture/compare register 3 high
#define TIM1_CCR3L   _SFR_(0x00526a) // TIM1 capture/compare register 3 low
#define TIM1_CCR4H   _SFR_(0x00526b) // TIM1 capture/compare register 4 high
#define TIM1_CCR4L   _SFR_(0x00526c) // TIM1 capture/compare register 4 low
#define TIM1_BKR     _SFR_(0x00526d) // TIM1 break register
#define TIM1_DTR     _SFR_(0x00526e) // TIM1 dead-time register
#define TIM1_OISR    _SFR_(0x00526f) // TIM1 output idle state register

// --- TIM2 -------------------------------------------------------------------

#define TIM2_CR1     _SFR_(0x005300) // TIM2 control register 1
#define TIM2_IER     _SFR_(0x005301) // TIM2 interrupt enable register
#define TIM2_SR1     _SFR_(0x005302) // TIM2 status register 1
#define TIM2_SR2     _SFR_(0x005303) // TIM2 status register 2
#define TIM2_EGR     _SFR_(0x005304) // TIM2 event generation register
#define TIM2_CCMR1   _SFR_(0x005305) // TIM2 capture/compare mode register 1
#define TIM2_CCMR2   _SFR_(0x005306) // TIM2 capture/compare mode register 2
#define TIM2_CCMR3   _SFR_(0x005307) // TIM2 capture/compare mode register 3
#define TIM2_CCER1   _SFR_(0x005308) // TIM2 capture/compare enable register 1
#define TIM2_CCER2   _SFR_(0x005309) // TIM2 capture/compare enable register 2
#define TIM2_CNTRH   _SFR_(0x00530a) // TIM2 counter high
#define TIM2_CNTRL   _SFR_(0x00530b) // TIM2 counter low
#define TIM2_PSCR    _SFR_(0x00530c) // TIM2 prescaler register
#define TIM2_ARRH    _SFR_(0x00530d) // TIM2 auto-reload register high
#define TIM2_ARRL    _SFR_(0x00530e) // TIM2 auto-reload register low
#define TIM2_CCR1H   _SFR_(0x00530f) // TIM2 capture/compare register 1 high
#define TIM2_CCR1L   _SFR_(0x005310) // TIM2 capture/compare register 1 low
#define TIM2_CCR2H   _SFR_(0x005311) // TIM2 capture/compare register 2 high
#define TIM2_CCR2L   _SFR_(0x005312) // TIM2 capture/compare register 2 low
#define TIM2_CCR3H   _SFR_(0x005313) // TIM2 capture/compare register 3 high
#define TIM2_CCR3L   _SFR_(0x005314) // TIM2 capture/compare register 3 low

// --- TIM3 -------------------------------------------------------------------

#define TIM3_CR1     _SFR_(0x005320) // TIM3 control register 1
#define TIM3_IER     _SFR_(0x005321) // TIM3 interrupt enable register
#define TIM3_SR1     _SFR_(0x005322) // TIM3 status register 1
#define TIM3_SR2     _SFR_(0x005323) // TIM3 status register 2
#define TIM3_EGR     _SFR_(0x005324) // TIM3 event generation register
#define TIM3_CCMR1   _SFR_(0x005325) // TIM3 capture/compare mode register 1
#define TIM3_CCMR2   _SFR_(0x005326) // TIM3 capture/compare mode register 2
#define TIM3_CCER1   _SFR_(0x005327) // TIM3 capture/compare enable register 1
#define TIM3_CNTRH   _SFR_(0x005328) // TIM3 counter high
#define TIM3_CNTRL   _SFR_(0x005329) // TIM3 counter low
#define TIM3_PSCR    _SFR_(0x00532a) // TIM3 prescaler register
#define TIM3_ARRH    _SFR_(0x00532b) // TIM3 auto-reload register high
#define TIM3_ARRL    _SFR_(0x00532c) // TIM3 auto-reload register low
#define TIM3_CCR1H   _SFR_(0x00532d) // TIM3 capture/compare register 1 high
#define TIM3_CCR1L   _SFR_(0x00532e) // TIM3 capture/compare register 1 low
#define TIM3_CCR2H   _SFR_(0x00532f) // TIM3 capture/compare register 2 high
#define TIM3_CCR2L   _SFR_(0x005330) // TIM3 capture/compare register 2 low

// --- TIM4 -------------------------------------------------------------------

#define TIM4_CR1     _SFR_(0x005340) // TIM4 control register
#define TIM4_IER     _SFR_(0x005341) // TIM4 interrupt enable register
#define TIM4_SR      _SFR_(0x005342) // TIM4 status register 
#define TIM4_EGR     _SFR_(0x005343) // TIM4 event generation register
#define TIM4_CNTR    _SFR_(0x005344) // TIM4 counter high
#define TIM4_PSCR    _SFR_(0x005345) // TIM4 prescaler register
#define TIM4_ARR     _SFR_(0x005346) // TIM4 auto-reload register high

// --- ADC --------------------------------------------------------------------

#define ADC_CSR      _SFR_(0x005400) // ADC control/status register
#define ADC_CR1      _SFR_(0x005401) // ADC configuration register 1
#define ADC_CR2      _SFR_(0x005402) // ADC configuration register 2
#define ADC_CR3      _SFR_(0x005403) // ADC configuration register 3
#define ADC_DRH      _SFR_(0x005404) // ADC data register high
#define ADC_DRL      _SFR_(0x005405) // ADC data register low
#define ADC_TDRH     _SFR_(0x005406) // ADC Schmitt trigger disable register high
#define ADC_TDRL     _SFR_(0x005407) // ADC Schmitt trigger disable register low

// --- CAN --------------------------------------------------------------------

#define CAN_MCR      _SFR_(0x005420) // CAN master control register
#define CAN_MSR      _SFR_(0x005421) // CAN master status register
#define CAN_TSR      _SFR_(0x005422) // CAN transmit status register
#define CAN_TPR      _SFR_(0x005423) // CAN transmit priority register
#define CAN_RFR      _SFR_(0x005424) // CAN receive FIFO register
#define CAN_IER      _SFR_(0x005425) // CAN interrupt enable register
#define CAN_DGR      _SFR_(0x005426) // CAN diagnosis register
#define CAN_FPSR     _SFR_(0x005427) // CAN page selection register
#define CAN_P0       _SFR_(0x005428) // CAN paged register 0
#define CAN_P1       _SFR_(0x005429) // CAN paged register 1
#define CAN_P2       _SFR_(0x00542a) // CAN paged register 2
#define CAN_P3       _SFR_(0x00542b) // CAN paged register 3
#define CAN_P4       _SFR_(0x00542c) // CAN paged register 4
#define CAN_P5       _SFR_(0x00542d) // CAN paged register 5
#define CAN_P6       _SFR_(0x00542e) // CAN paged register 6
#define CAN_P7       _SFR_(0x00542f) // CAN paged register 7
#define CAN_P8       _SFR_(0x005430) // CAN paged register 8
#define CAN_P9       _SFR_(0x005431) // CAN paged register 9
#define CAN_PA       _SFR_(0x005432) // CAN paged register A
#define CAN_PB       _SFR_(0x005433) // CAN paged register B
#define CAN_PC       _SFR_(0x005434) // CAN paged register C
#define CAN_PD       _SFR_(0x005435) // CAN paged register D
#define CAN_PE       _SFR_(0x005436) // CAN paged register E
#define CAN_PF       _SFR_(0x005437) // CAN paged register F

// --- Unique ID --------------------------------------------------------------

#define UID00        _SFR(0x48cd) // X coordinates on the wafer
#define UID01        _SFR(0x48ce)
#define UID02        _SFR(0x48cf) // Y coordinates on the wafer
#define UID03        _SFR(0x48d0)
#define UID04        _SFR(0x48d1) // Wafer number
#define UID05        _SFR(0x48d2) // Lot number
#define UID06        _SFR(0x48d3)
#define UID07        _SFR(0x48d4)
#define UID08        _SFR(0x48d5)
#define UID09        _SFR(0x48d6)
#define UID10        _SFR(0x48d7)
#define UID11        _SFR(0x48d8)


#endif /* STM8KIT_REGISTERS_H */
