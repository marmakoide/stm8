GPIO_PIN_IDS = 0 1 2 3 4 5 6 7
GPIO_FUNCTION_SUFFIXES = is_high set_as_output enable_pullup toggle

GENERATED_SOURCES = \
	$(foreach suffix, $(GPIO_FUNCTION_SUFFIXES), $(foreach pin_id, $(GPIO_PIN_IDS), ./src/GPIO/gpio_pin_C$(pin_id)__$(suffix).c))
