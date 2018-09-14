DECL|ZEPHYR_INCLUDE_LED_H_|macro|ZEPHYR_INCLUDE_LED_H_
DECL|_impl_led_blink|function|static inline int _impl_led_blink(struct device *dev, u32_t led, u32_t delay_on, u32_t delay_off)
DECL|_impl_led_off|function|static inline int _impl_led_off(struct device *dev, u32_t led)
DECL|_impl_led_on|function|static inline int _impl_led_on(struct device *dev, u32_t led)
DECL|_impl_led_set_brightness|function|static inline int _impl_led_set_brightness(struct device *dev, u32_t led, u8_t value)
DECL|blink|member|led_api_blink blink;
DECL|led_api_blink|typedef|typedef int (*led_api_blink)(struct device *dev, u32_t led,
DECL|led_api_off|typedef|typedef int (*led_api_off)(struct device *dev, u32_t led);
DECL|led_api_on|typedef|typedef int (*led_api_on)(struct device *dev, u32_t led);
DECL|led_api_set_brightness|typedef|typedef int (*led_api_set_brightness)(struct device *dev, u32_t led,
DECL|led_driver_api|struct|struct led_driver_api {
DECL|off|member|led_api_off off;
DECL|on|member|led_api_on on;
DECL|set_brightness|member|led_api_set_brightness set_brightness;
