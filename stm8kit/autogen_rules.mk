define GPIO_function_rule
$(2): $(1) ./include/stm8kit/GPIO.h
	cat $$< | sed -e 's/PORT_ID/$(3)/' -e 's/PIN_ID/$(4)/' > $$@
endef

$(foreach suffix, $(GPIO_FUNCTION_SUFFIXES), $(foreach pin_id, $(GPIO_PIN_IDS), $(eval $(call GPIO_function_rule,./src/GPIO/gpio_pin_XX__$(suffix).c.template,./src/GPIO/gpio_pin_C$(pin_id)__$(suffix).c,C,$(pin_id)))))
