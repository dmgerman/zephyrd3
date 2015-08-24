DECL|I2C_ADDR_10_BITS|macro|I2C_ADDR_10_BITS
DECL|I2C_MODE_MASTER|macro|I2C_MODE_MASTER
DECL|I2C_MODE_SLAVE_READ|macro|I2C_MODE_SLAVE_READ
DECL|I2C_SPEED_FAST_PLUS|macro|I2C_SPEED_FAST_PLUS
DECL|I2C_SPEED_FAST|macro|I2C_SPEED_FAST
DECL|I2C_SPEED_HIGH|macro|I2C_SPEED_HIGH
DECL|I2C_SPEED_MASK|macro|I2C_SPEED_MASK
DECL|I2C_SPEED_STANDARD|macro|I2C_SPEED_STANDARD
DECL|I2C_SPEED_ULTRA|macro|I2C_SPEED_ULTRA
DECL|__DRIVERS_I2C_H|macro|__DRIVERS_I2C_H
DECL|bits|member|} bits;
DECL|configure|member|i2c_api_configure_t configure;
DECL|dev_config|union|union dev_config {
DECL|i2c_api_configure_t|typedef|typedef int (*i2c_api_configure_t)(struct device *dev,
DECL|i2c_api_io_t|typedef|typedef int (*i2c_api_io_t)(struct device *dev,
DECL|i2c_api_resume_t|typedef|typedef int (*i2c_api_resume_t)(struct device *dev);
DECL|i2c_api_suspend_t|typedef|typedef int (*i2c_api_suspend_t)(struct device *dev);
DECL|i2c_configure|function|static inline int i2c_configure(struct device *dev, uint32_t dev_config)
DECL|i2c_driver_api|struct|struct i2c_driver_api {
DECL|i2c_read|function|static inline int i2c_read(struct device *dev, uint8_t *buf, uint32_t len, uint16_t addr)
DECL|i2c_resume|function|static inline int i2c_resume(struct device *dev)
DECL|i2c_suspend|function|static inline int i2c_suspend(struct device *dev)
DECL|i2c_write|function|static inline int i2c_write(struct device *dev, uint8_t *buf, uint32_t len, uint16_t addr)
DECL|is_master_device|member|uint32_t is_master_device : 1;
DECL|is_slave_read|member|uint32_t is_slave_read : 1;
DECL|raw|member|uint32_t raw;
DECL|read|member|i2c_api_io_t read;
DECL|reserved|member|uint32_t reserved : 26;
DECL|resume|member|i2c_api_resume_t resume;
DECL|speed|member|uint32_t speed : 3;
DECL|suspend|member|i2c_api_suspend_t suspend;
DECL|use_10_bit_addr|member|uint32_t use_10_bit_addr : 1;
DECL|write|member|i2c_api_io_t write;
