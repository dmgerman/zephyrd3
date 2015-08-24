DECL|I2C_ADDR_10_BITS|macro|I2C_ADDR_10_BITS
DECL|I2C_ADDR_7_BITS|macro|I2C_ADDR_7_BITS
DECL|I2C_ADDR_GET|macro|I2C_ADDR_GET
DECL|I2C_ADDR_MASK|macro|I2C_ADDR_MASK
DECL|I2C_FAST_PLUS|macro|I2C_FAST_PLUS
DECL|I2C_FAST|macro|I2C_FAST
DECL|I2C_MODE_MASTER|macro|I2C_MODE_MASTER
DECL|I2C_MODE_SLAVE|macro|I2C_MODE_SLAVE
DECL|I2C_SPEED_HIGH|macro|I2C_SPEED_HIGH
DECL|I2C_SPEED_ULTRA|macro|I2C_SPEED_ULTRA
DECL|I2C_STANDARD|macro|I2C_STANDARD
DECL|__DRIVERS_I2C_H|macro|__DRIVERS_I2C_H
DECL|base_address|member|uint32_t base_address;
DECL|cb_receive|member|i2c_callback cb_receive;
DECL|cb_transmit|member|i2c_callback cb_transmit;
DECL|configure|member|i2c_api_configure configure;
DECL|dev_config|member|uint32_t dev_config;
DECL|i2c_api_configure|typedef|typedef int (*i2c_api_configure)(struct device *dev, struct i2c_config *config);
DECL|i2c_api_io|typedef|typedef int (*i2c_api_io)(struct device *dev, unsigned char *buf, uint32_t len);
DECL|i2c_api_resume|typedef|typedef int (*i2c_api_resume)(struct device *dev);
DECL|i2c_api_suspend|typedef|typedef int (*i2c_api_suspend)(struct device *dev);
DECL|i2c_callback|typedef|typedef void (*i2c_callback)(struct device *dev, uint32_t context);
DECL|i2c_configure|function|static inline int i2c_configure(struct device *dev, struct i2c_config *config)
DECL|i2c_config|struct|struct i2c_config {
DECL|i2c_driver_api|struct|struct i2c_driver_api {
DECL|i2c_read|function|static inline int i2c_read(struct device *dev, unsigned char *buf, uint32_t len)
DECL|i2c_resume|function|static inline int i2c_resume(struct device *dev)
DECL|i2c_rom_config|struct|struct i2c_rom_config {
DECL|i2c_suspend|function|static inline int i2c_suspend(struct device *dev)
DECL|i2c_write|function|static inline int i2c_write(struct device *dev, unsigned char *buf, uint32_t len)
DECL|interrupt_mask|member|uint32_t interrupt_mask;
DECL|interrupt_vector|member|uint32_t interrupt_vector;
DECL|read|member|i2c_api_io read;
DECL|resume|member|i2c_api_resume resume;
DECL|suspend|member|i2c_api_suspend suspend;
DECL|write|member|i2c_api_io write;
