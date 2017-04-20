DECL|SOC_GPIO_DEFAULT|macro|SOC_GPIO_DEFAULT
DECL|SOC_GPIO_FUNC_A|macro|SOC_GPIO_FUNC_A
DECL|SOC_GPIO_FUNC_B|macro|SOC_GPIO_FUNC_B
DECL|SOC_GPIO_FUNC_C|macro|SOC_GPIO_FUNC_C
DECL|SOC_GPIO_FUNC_D|macro|SOC_GPIO_FUNC_D
DECL|SOC_GPIO_FUNC_IN|macro|SOC_GPIO_FUNC_IN
DECL|SOC_GPIO_FUNC_MASK|macro|SOC_GPIO_FUNC_MASK
DECL|SOC_GPIO_FUNC_OUT_0|macro|SOC_GPIO_FUNC_OUT_0
DECL|SOC_GPIO_FUNC_OUT_1|macro|SOC_GPIO_FUNC_OUT_1
DECL|SOC_GPIO_FUNC_POS|macro|SOC_GPIO_FUNC_POS
DECL|SOC_GPIO_INT_ACTIVE_HIGH|macro|SOC_GPIO_INT_ACTIVE_HIGH
DECL|SOC_GPIO_INT_ENABLE|macro|SOC_GPIO_INT_ENABLE
DECL|SOC_GPIO_INT_TRIG_DOUBLE_EDGE|macro|SOC_GPIO_INT_TRIG_DOUBLE_EDGE
DECL|SOC_GPIO_INT_TRIG_EDGE|macro|SOC_GPIO_INT_TRIG_EDGE
DECL|SOC_GPIO_INT_TRIG_LEVEL|macro|SOC_GPIO_INT_TRIG_LEVEL
DECL|SOC_GPIO_INT_TRIG_MASK|macro|SOC_GPIO_INT_TRIG_MASK
DECL|SOC_GPIO_INT_TRIG_POS|macro|SOC_GPIO_INT_TRIG_POS
DECL|SOC_GPIO_IN_FILTER_DEBOUNCE|macro|SOC_GPIO_IN_FILTER_DEBOUNCE
DECL|SOC_GPIO_IN_FILTER_DEGLITCH|macro|SOC_GPIO_IN_FILTER_DEGLITCH
DECL|SOC_GPIO_IN_FILTER_MASK|macro|SOC_GPIO_IN_FILTER_MASK
DECL|SOC_GPIO_IN_FILTER_NONE|macro|SOC_GPIO_IN_FILTER_NONE
DECL|SOC_GPIO_IN_FILTER_POS|macro|SOC_GPIO_IN_FILTER_POS
DECL|SOC_GPIO_OPENDRAIN|macro|SOC_GPIO_OPENDRAIN
DECL|SOC_GPIO_PULLDOWN|macro|SOC_GPIO_PULLDOWN
DECL|SOC_GPIO_PULLUP|macro|SOC_GPIO_PULLUP
DECL|_ATMEL_SAM_SOC_GPIO_H_|macro|_ATMEL_SAM_SOC_GPIO_H_
DECL|flags|member|u32_t flags; /** pin flags/attributes */
DECL|mask|member|u32_t mask; /** pin(s) bit mask */
DECL|periph_id|member|u8_t periph_id; /** peripheral ID of the PIO controller */
DECL|regs|member|Pio *regs; /** pointer to registers of the PIO controller */
DECL|soc_gpio_clear|function|static inline void soc_gpio_clear(const struct soc_gpio_pin *pin)
DECL|soc_gpio_debounce_length_set|function|static inline void soc_gpio_debounce_length_set(const struct soc_gpio_pin *pin,u32_t div)
DECL|soc_gpio_get|function|static inline u32_t soc_gpio_get(const struct soc_gpio_pin *pin)
DECL|soc_gpio_pin|struct|struct soc_gpio_pin {
DECL|soc_gpio_set|function|static inline void soc_gpio_set(const struct soc_gpio_pin *pin)
