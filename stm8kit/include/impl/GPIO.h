#ifndef STM8KIT_IMPL_GPIO_H
#define STM8KIT_IMPL_GPIO_H

#include <stm8kit/types.h>
#include <stm8kit/registers.h>


#define GPIO__PIN_IS_HIGH(PORT_ID, PIN_ID) \
extern inline bool \
gpio_pin_ ## PORT_ID ## PIN_ID ## __is_high() { \
    return P ## PORT_ID ## _IDR & (1 << PIN_ID); \
}

#define GPIO__PIN_IS_LOW(PORT_ID, PIN_ID) \
extern inline bool \
gpio_pin_ ## PORT_ID ## PIN_ID ## __is_low() { \
    return P ## PORT_ID ## _IDR & (1 << PIN_ID) == 0; \
}

#define GPIO__SET_PIN_AS_OUTPUT(PORT_ID, PIN_ID) \
extern inline void \
gpio_pin_ ## PORT_ID ## PIN_ID ## __set_as_output() { \
	P ## PORT_ID ## _DDR |= 1 << PIN_ID; \
}

#define GPIO__SET_PIN_AS_INPUT(PORT_ID, PIN_ID) \
extern inline void \
gpio_pin_ ## PORT_ID ## PIN_ID ## __set_as_input() { \
	P ## PORT_ID ## _DDR &= ~(1 << PIN_ID); \
}
 
#define GPIO__SET_PIN_HIGH(PORT_ID, PIN_ID) \
extern inline void \
gpio_pin_ ## PORT_ID ## PIN_ID ## __set_high() { \
	P ## PORT_ID ## _ODR |= 1 << PIN_ID; \
}

#define GPIO__SET_PIN_LOW(PORT_ID, PIN_ID) \
extern inline void \
gpio_pin_ ## PORT_ID ## PIN_ID ## __set_low() { \
	P ## PORT_ID ## _ODR &= ~(1 << PIN_ID); \
}

#define GPIO__TOGGLE_PIN(PORT_ID, PIN_ID) \
extern inline void \
gpio_pin_ ## PORT_ID ## PIN_ID ## __toggle() { \
	P ## PORT_ID ## _ODR ^= 1 << PIN_ID; \
}

#define GPIO__ENABLE_PULLUP(PORT_ID, PIN_ID) \
extern inline void \
gpio_pin_ ## PORT_ID ## PIN_ID ## __enable_pullup() { \
	P ## PORT_ID ## _CR1 |= 1 << PIN_ID; \
}

#define GPIO__DISABLE_PULLUP(PORT_ID, PIN_ID) \
extern inline void \
gpio_pin_ ## PORT_ID ## PIN_ID ## __disable_pullup() { \
	P ## PORT_ID ## _CR1 &= ~(1 << PIN_ID); \
}

#define GPIO__ENABLE_INTERRUPT(PORT_ID, PIN_ID) \
extern inline void \
gpio_pin_ ## PORT_ID ## PIN_ID ## __enable_interrupt() { \
	P ## PORT_ID ## _CR2 |= 1 << PIN_ID; \
}

#define GPIO__DISABLE_INTERRUPT(PORT_ID, PIN_ID) \
extern inline void \
gpio_pin_ ## PORT_ID ## PIN_ID ## __disable_interrupt() { \
	P ## PORT_ID ## _CR2 &= ~(1 << PIN_ID); \
}

#endif /* STM8KIT_IMPL_GPIO_H */
