DECL|I2C_ADDR_10_BITS|macro|I2C_ADDR_10_BITS
DECL|I2C_CB_ERROR|enumerator|I2C_CB_ERROR = 3,
DECL|I2C_CB_READ|enumerator|I2C_CB_READ = 2,
DECL|I2C_CB_WRITE|enumerator|I2C_CB_WRITE = 1,
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
DECL|i2c_api_full_io_t|typedef|typedef int (*i2c_api_full_io_t)(struct device *dev,
DECL|i2c_api_resume_t|typedef|typedef int (*i2c_api_resume_t)(struct device *dev);
DECL|i2c_api_set_callback_t|typedef|typedef int (*i2c_api_set_callback_t)(struct device *dev,
DECL|i2c_api_suspend_t|typedef|typedef int (*i2c_api_suspend_t)(struct device *dev);
DECL|i2c_callback|typedef|typedef void (*i2c_callback)(struct device *dev,
DECL|i2c_cb_type|enum|enum i2c_cb_type {
DECL|i2c_configure|function|static inline int i2c_configure(struct device *dev, uint32_t dev_config)
DECL|i2c_driver_api|struct|struct i2c_driver_api {
DECL|i2c_poll_transfer|function|static inline int i2c_poll_transfer(struct device *dev, uint8_t *tx_buf, uint32_t tx_len, uint8_t *rx_buf, uint32_t rx_len, uint16_t addr, uint32_t ctrl_flags)
DECL|i2c_polling_write|function|static inline int i2c_polling_write(struct device *dev, uint8_t *buf, uint32_t len, uint16_t addr)
DECL|i2c_read|function|static inline int i2c_read(struct device *dev, uint8_t *buf, uint32_t len, uint16_t addr)
DECL|i2c_resume|function|static inline int i2c_resume(struct device *dev)
DECL|i2c_set_callback|function|static inline int i2c_set_callback(struct device *dev, i2c_callback cb)
DECL|i2c_suspend|function|static inline int i2c_suspend(struct device *dev)
DECL|i2c_transfer|function|static inline int i2c_transfer(struct device *dev, uint8_t *tx_buf, uint32_t tx_len, uint8_t *rx_buf, uint32_t rx_len, uint16_t addr, uint32_t ctrl_flags)
DECL|i2c_write|function|static inline int i2c_write(struct device *dev, uint8_t *buf, uint32_t len, uint16_t addr)
DECL|is_master_device|member|uint32_t is_master_device : 1;
DECL|is_slave_read|member|uint32_t is_slave_read : 1;
DECL|poll_transfer|member|i2c_api_full_io_t poll_transfer;
DECL|raw|member|uint32_t raw;
DECL|reserved|member|uint32_t reserved : 26;
DECL|resume|member|i2c_api_resume_t resume;
DECL|set_callback|member|i2c_api_set_callback_t set_callback;
DECL|speed|member|uint32_t speed : 3;
DECL|suspend|member|i2c_api_suspend_t suspend;
DECL|transfer|member|i2c_api_full_io_t transfer;
DECL|use_10_bit_addr|member|uint32_t use_10_bit_addr : 1;
