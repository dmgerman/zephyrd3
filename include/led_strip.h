DECL|ZEPHYR_INCLUDE_LED_STRIP_H_|macro|ZEPHYR_INCLUDE_LED_STRIP_H_
DECL|b|member|u8_t b;
DECL|g|member|u8_t g;
DECL|led_api_update_channels|typedef|typedef int (*led_api_update_channels)(struct device *dev, u8_t *channels,
DECL|led_api_update_rgb|typedef|typedef int (*led_api_update_rgb)(struct device *dev, struct led_rgb *pixels,
DECL|led_rgb|struct|struct led_rgb {
DECL|led_strip_driver_api|struct|struct led_strip_driver_api {
DECL|led_strip_update_channels|function|static inline int led_strip_update_channels(struct device *dev, u8_t *channels, size_t num_channels)
DECL|led_strip_update_rgb|function|static inline int led_strip_update_rgb(struct device *dev, struct led_rgb *pixels, size_t num_pixels)
DECL|r|member|u8_t r;
DECL|scratch|member|u8_t scratch;
DECL|update_channels|member|led_api_update_channels update_channels;
DECL|update_rgb|member|led_api_update_rgb update_rgb;
