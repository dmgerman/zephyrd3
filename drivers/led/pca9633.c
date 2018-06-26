DECL|PCA9633_GRPFREQ|macro|PCA9633_GRPFREQ
DECL|PCA9633_GRPPWM|macro|PCA9633_GRPPWM
DECL|PCA9633_LEDOUT|macro|PCA9633_LEDOUT
DECL|PCA9633_LED_GRP_PWM|macro|PCA9633_LED_GRP_PWM
DECL|PCA9633_LED_OFF|macro|PCA9633_LED_OFF
DECL|PCA9633_LED_ON|macro|PCA9633_LED_ON
DECL|PCA9633_LED_PWM|macro|PCA9633_LED_PWM
DECL|PCA9633_MASK|macro|PCA9633_MASK
DECL|PCA9633_MODE1|macro|PCA9633_MODE1
DECL|PCA9633_MODE2_DMBLNK|macro|PCA9633_MODE2_DMBLNK
DECL|PCA9633_MODE2|macro|PCA9633_MODE2
DECL|PCA9633_PWM_BASE|macro|PCA9633_PWM_BASE
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|dev_data|member|struct led_data dev_data;
DECL|i2c|member|struct device *i2c;
DECL|pca9633_data|struct|struct pca9633_data {
DECL|pca9633_led_api|variable|pca9633_led_api
DECL|pca9633_led_blink|function|static int pca9633_led_blink(struct device *dev, u32_t led, u32_t delay_on, u32_t delay_off)
DECL|pca9633_led_data|variable|pca9633_led_data
DECL|pca9633_led_init|function|static int pca9633_led_init(struct device *dev)
DECL|pca9633_led_off|function|static inline int pca9633_led_off(struct device *dev, u32_t led)
DECL|pca9633_led_on|function|static inline int pca9633_led_on(struct device *dev, u32_t led)
DECL|pca9633_led_set_brightness|function|static int pca9633_led_set_brightness(struct device *dev, u32_t led, u8_t value)
