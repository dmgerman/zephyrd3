DECL|_ZEPHYR_LED_H|macro|_ZEPHYR_LED_H
DECL|blink|member|led_api_blink blink;
DECL|led_api_blink|typedef|typedef int (*led_api_blink)(struct device *dev, u32_t led,
DECL|led_api_off|typedef|typedef int (*led_api_off)(struct device *dev, u32_t led);
DECL|led_api_on|typedef|typedef int (*led_api_on)(struct device *dev, u32_t led);
DECL|led_api_set_brightness|typedef|typedef int (*led_api_set_brightness)(struct device *dev, u32_t led,
DECL|led_blink|function|static inline int led_blink(struct device *dev, u32_t led, u32_t delay_on, u32_t delay_off)
DECL|led_driver_api|struct|struct led_driver_api {
DECL|led_off|function|static inline int led_off(struct device *dev, u32_t led)
DECL|led_on|function|static inline int led_on(struct device *dev, u32_t led)
DECL|led_set_brightness|function|static inline int led_set_brightness(struct device *dev, u32_t led, u8_t value)
DECL|off|member|led_api_off off;
DECL|on|member|led_api_on on;
DECL|set_brightness|member|led_api_set_brightness set_brightness;
