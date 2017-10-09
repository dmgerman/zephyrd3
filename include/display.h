DECL|DISPLAY_ORIENTATION_NORMAL|enumerator|DISPLAY_ORIENTATION_NORMAL,
DECL|DISPLAY_ORIENTATION_ROTATED_180|enumerator|DISPLAY_ORIENTATION_ROTATED_180,
DECL|DISPLAY_ORIENTATION_ROTATED_270|enumerator|DISPLAY_ORIENTATION_ROTATED_270,
DECL|DISPLAY_ORIENTATION_ROTATED_90|enumerator|DISPLAY_ORIENTATION_ROTATED_90,
DECL|PIXEL_FORMAT_RGB_888|enumerator|PIXEL_FORMAT_RGB_888 = (1 << 0),
DECL|ZEPHYR_INCLUDE_DISPLAY_H_|macro|ZEPHYR_INCLUDE_DISPLAY_H_
DECL|blanking_off|member|display_blanking_off_api blanking_off;
DECL|blanking_on|member|display_blanking_on_api blanking_on;
DECL|buf_size|member|u32_t buf_size;
DECL|current_orientation|member|enum display_orientation current_orientation;
DECL|current_pixel_format|member|enum display_pixel_format current_pixel_format;
DECL|display_blanking_off_api|typedef|typedef int (*display_blanking_off_api)(const struct device *dev);
DECL|display_blanking_off|function|static inline int display_blanking_off(const struct device *dev)
DECL|display_blanking_on_api|typedef|typedef int (*display_blanking_on_api)(const struct device *dev);
DECL|display_blanking_on|function|static inline int display_blanking_on(const struct device *dev)
DECL|display_buffer_descriptor|struct|struct display_buffer_descriptor {
DECL|display_capabilities|struct|struct display_capabilities {
DECL|display_driver_api|struct|struct display_driver_api {
DECL|display_get_capabilities_api|typedef|typedef void (*display_get_capabilities_api)(const struct device *dev,
DECL|display_get_capabilities|function|static inline void display_get_capabilities(const struct device *dev, struct display_capabilities * capabilities)
DECL|display_get_framebuffer_api|typedef|typedef void *(*display_get_framebuffer_api)(const struct device *dev);
DECL|display_get_framebuffer|function|static inline void *display_get_framebuffer(const struct device *dev)
DECL|display_orientation|enum|enum display_orientation {
DECL|display_pixel_format|enum|enum display_pixel_format {
DECL|display_read_api|typedef|typedef int (*display_read_api)(const struct device *dev, const u16_t x,
DECL|display_read|function|static inline int display_read(const struct device *dev, const u16_t x, const u16_t y, const struct display_buffer_descriptor *desc, void *buf)
DECL|display_set_brightness_api|typedef|typedef int (*display_set_brightness_api)(const struct device *dev,
DECL|display_set_brightness|function|static inline int display_set_brightness(const struct device *dev, u8_t brightness)
DECL|display_set_contrast_api|typedef|typedef int (*display_set_contrast_api)(const struct device *dev,
DECL|display_set_contrast|function|static inline int display_set_contrast(const struct device *dev, u8_t contrast)
DECL|display_set_orientation_api|typedef|typedef int (*display_set_orientation_api)(const struct device *dev,
DECL|display_set_orientation|function|static inline int display_set_orientation(const struct device *dev, const enum display_orientation orientation)
DECL|display_set_pixel_format_api|typedef|typedef int (*display_set_pixel_format_api)(const struct device *dev,
DECL|display_set_pixel_format|function|display_set_pixel_format(const struct device *dev, const enum display_pixel_format pixel_format)
DECL|display_write_api|typedef|typedef int (*display_write_api)(const struct device *dev, const u16_t x,
DECL|display_write|function|static inline int display_write(const struct device *dev, const u16_t x,const u16_t y, const struct display_buffer_descriptor *desc, const void *buf)
DECL|get_capabilities|member|display_get_capabilities_api get_capabilities;
DECL|get_framebuffer|member|display_get_framebuffer_api get_framebuffer;
DECL|height|member|u16_t height;
DECL|pitch|member|u16_t pitch;
DECL|read|member|display_read_api read;
DECL|set_brightness|member|display_set_brightness_api set_brightness;
DECL|set_contrast|member|display_set_contrast_api set_contrast;
DECL|set_orientation|member|display_set_orientation_api set_orientation;
DECL|set_pixel_format|member|display_set_pixel_format_api set_pixel_format;
DECL|supported_pixel_formats|member|u32_t supported_pixel_formats;
DECL|width|member|u16_t width;
DECL|write|member|display_write_api write;
DECL|x_resolution|member|u16_t x_resolution;
DECL|y_resolution|member|u16_t y_resolution;
