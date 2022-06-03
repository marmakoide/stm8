#ifndef STM8KIT_INTERRUPTS_H
#define STM8KIT_INTERRUPTS_H

#define rim() {__asm__("rim\n");}    // enable interrupts
#define sim() {__asm__("sim\n");}    // disable interrupts


#define TLI_ISR                   0
#define AWU_ISR                   1
#define CLK_ISR                   2
#define EXTI0_ISR                 3
#define EXTI1_ISR                 4
#define EXTI2_ISR                 5
#define EXTI3_ISR                 6
#define EXTI4_ISR                 7
#define beCAN_RX_ISR              8
#define beCAN_TX_ISR              9
#define SPI_ISR                  10
#define TIM1_UPD_OVF_TRG_BRK_ISR 11
#define TIM1_CAP_COM_ISR         12
#define TIM2_UPD_OVF_ISR         13
#define TIM2_CAP_COM_ISR         14
#define TIM3_UPD_OVF_ISR         15
#define TIM3_CAP_COM_ISR         16
#define UART1_TX_ISR             17
#define UART1_RX_ISR             18
#define I2C_ISR                  19
#define UART3_TX_ISR             20
#define UART3_RX_ISR             21
#define ADC2_ISR                 22
#define TIM4_UPD_OVF_ISR         23
#define FLASH_ISR                24


#endif /* STM8KIT_INTERRUPTS_H */ 
