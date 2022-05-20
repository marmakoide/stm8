GPIO_PIN_IDS = 0 1 2 3 4 5 6 7
GPIO_PORTS = A B C D E F G H I
GPIO_FUNCTION_SUFFIXES = is_high is_low set_as_output set_as_input set_high set_low toggle enable_pullup disable_pullup enable_interrupt disable_interrupt

GENERATED_SOURCES = \
	$(foreach suffix, $(GPIO_FUNCTION_SUFFIXES), $(foreach port, $(GPIO_PORTS), $(foreach pin_id, $(GPIO_PIN_IDS), ./src/GPIO/gpio_pin_$(port)$(pin_id)__$(suffix).c)))

