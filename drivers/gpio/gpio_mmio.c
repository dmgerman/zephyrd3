DECL|_io_read|function|static uint32_t _io_read(uint32_t addr, uint32_t bit, uint32_t value)
DECL|_io_set_bit|function|static uint32_t _io_set_bit(uint32_t addr, uint32_t bit, uint32_t value)
DECL|_io_write|function|static uint32_t _io_write(uint32_t addr, uint32_t bit, uint32_t value)
DECL|_mm_read|function|static uint32_t _mm_read(uint32_t addr, uint32_t bit, uint32_t value)
DECL|_mm_set_bit|function|static uint32_t _mm_set_bit(uint32_t addr, uint32_t bit, uint32_t value)
DECL|_mm_write|function|static uint32_t _mm_write(uint32_t addr, uint32_t bit, uint32_t value)
DECL|gpio_mmio_0_cfg|variable|gpio_mmio_0_cfg
DECL|gpio_mmio_1_cfg|variable|gpio_mmio_1_cfg
DECL|gpio_mmio_config|function|static int gpio_mmio_config(struct device *dev, int access_op, uint32_t pin, int flags)
DECL|gpio_mmio_disable_callback|function|static int gpio_mmio_disable_callback(struct device *dev, int access_op, uint32_t pin)
DECL|gpio_mmio_drv_api_funcs|variable|gpio_mmio_drv_api_funcs
DECL|gpio_mmio_enable_callback|function|static int gpio_mmio_enable_callback(struct device *dev, int access_op, uint32_t pin)
DECL|gpio_mmio_init|function|int gpio_mmio_init(struct device *dev)
DECL|gpio_mmio_manage_callback|function|static int gpio_mmio_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|gpio_mmio_read|function|static int gpio_mmio_read(struct device *dev, int access_op, uint32_t pin, uint32_t *value)
DECL|gpio_mmio_write|function|static int gpio_mmio_write(struct device *dev, int access_op, uint32_t pin, uint32_t value)
