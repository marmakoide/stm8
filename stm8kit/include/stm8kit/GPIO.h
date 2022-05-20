#ifndef STM8KIT_GPIO_H
#define STM8KIT_GPIO_H

#include <stm8kit/types.h>


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


/*
 * Instanciate all the GPIO definitions
 */

#define INSTANCIATE_GPIO_PIN_DEFINITIONS(PORT_ID, PIN_ID) \
	inline bool gpio_pin_ ## PORT_ID ## PIN_ID ## __is_high(); \
	inline bool gpio_pin_ ## PORT_ID ## PIN_ID ## __is_low(); \
	inline void gpio_pin_ ## PORT_ID ## PIN_ID ## __set_as_output(); \
	inline void gpio_pin_ ## PORT_ID ## PIN_ID ## __set_as_input(); \
	inline void gpio_pin_ ## PORT_ID ## PIN_ID ## __set_high(); \
	inline void gpio_pin_ ## PORT_ID ## PIN_ID ## __set_low(); \
	inline void gpio_pin_ ## PORT_ID ## PIN_ID ## __toggle(); \
	inline void gpio_pin_ ## PORT_ID ## PIN_ID ## __enable_pullup(); \
	inline void gpio_pin_ ## PORT_ID ## PIN_ID ## __disable_pullup(); \
	inline void gpio_pin_ ## PORT_ID ## PIN_ID ## __enable_interrupt(); \
	inline void gpio_pin_ ## PORT_ID ## PIN_ID ## __disable_interrupt();


#define INSTANCIATE_GPIO_PORT_DEFINITIONS(PORT_ID) \
	INSTANCIATE_GPIO_PIN_DEFINITIONS(PORT_ID, 0) \
	INSTANCIATE_GPIO_PIN_DEFINITIONS(PORT_ID, 1) \
	INSTANCIATE_GPIO_PIN_DEFINITIONS(PORT_ID, 2) \
	INSTANCIATE_GPIO_PIN_DEFINITIONS(PORT_ID, 3) \
	INSTANCIATE_GPIO_PIN_DEFINITIONS(PORT_ID, 4) \
	INSTANCIATE_GPIO_PIN_DEFINITIONS(PORT_ID, 5) \
	INSTANCIATE_GPIO_PIN_DEFINITIONS(PORT_ID, 6) \
	INSTANCIATE_GPIO_PIN_DEFINITIONS(PORT_ID, 7)


INSTANCIATE_GPIO_PORT_DEFINITIONS(A)
INSTANCIATE_GPIO_PORT_DEFINITIONS(B)
INSTANCIATE_GPIO_PORT_DEFINITIONS(C)
INSTANCIATE_GPIO_PORT_DEFINITIONS(D)
INSTANCIATE_GPIO_PORT_DEFINITIONS(E)
INSTANCIATE_GPIO_PORT_DEFINITIONS(F)
INSTANCIATE_GPIO_PORT_DEFINITIONS(G)
INSTANCIATE_GPIO_PORT_DEFINITIONS(H)
INSTANCIATE_GPIO_PORT_DEFINITIONS(I)


#endif /* STM8KIT_GPIO_H */
