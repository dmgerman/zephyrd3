DECL|STM32L4X_AFR_MASK|macro|STM32L4X_AFR_MASK
DECL|STM32L4X_IDR_PIN_MASK|macro|STM32L4X_IDR_PIN_MASK
DECL|STM32L4X_PIN11|enumerator|STM32L4X_PIN11 = 11,
DECL|STM32L4X_PIN15|enumerator|STM32L4X_PIN15 = 15,
DECL|STM32L4X_PIN3|enumerator|STM32L4X_PIN3 = 3,
DECL|STM32L4X_PIN7|enumerator|STM32L4X_PIN7 = 7,
DECL|afr|member|u32_t afr[2];
DECL|ascr|member|u32_t ascr; /* Only present on STM32L4x1, STM32L4x5, STM32L4x6 */
DECL|brr|member|u32_t brr;
DECL|bsrr|member|u32_t bsrr;
DECL|idr|member|u32_t idr;
DECL|lckr|member|u32_t lckr;
DECL|moder|member|u32_t moder;
DECL|odr|member|u32_t odr;
DECL|ospeedr|member|u32_t ospeedr;
DECL|otyper|member|u32_t otyper;
DECL|pupdr|member|u32_t pupdr;
DECL|stm32_gpio_configure|function|int stm32_gpio_configure(u32_t *base_addr, int pin, int pinconf, int afnum)
DECL|stm32_gpio_enable_int|function|int stm32_gpio_enable_int(int port, int pin)
DECL|stm32_gpio_flags_to_conf|function|int stm32_gpio_flags_to_conf(int flags, int *pincfg)
DECL|stm32_gpio_get|function|int stm32_gpio_get(u32_t *base, int pin)
DECL|stm32_gpio_set|function|int stm32_gpio_set(u32_t *base, int pin, int value)
DECL|stm32l4x_gpio|struct|struct stm32l4x_gpio {
