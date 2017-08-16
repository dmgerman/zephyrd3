DECL|I2C_ADDR_10_BITS|macro|I2C_ADDR_10_BITS
DECL|I2C_CLIENT|macro|I2C_CLIENT
DECL|I2C_DECLARE_CLIENT_CONFIG|macro|I2C_DECLARE_CLIENT_CONFIG
DECL|I2C_GET_ADDR|macro|I2C_GET_ADDR
DECL|I2C_GET_MASTER|macro|I2C_GET_MASTER
DECL|I2C_MODE_MASTER|macro|I2C_MODE_MASTER
DECL|I2C_MSG_READ|macro|I2C_MSG_READ
DECL|I2C_MSG_RESTART|macro|I2C_MSG_RESTART
DECL|I2C_MSG_RW_MASK|macro|I2C_MSG_RW_MASK
DECL|I2C_MSG_STOP|macro|I2C_MSG_STOP
DECL|I2C_MSG_WRITE|macro|I2C_MSG_WRITE
DECL|I2C_SPEED_FAST_PLUS|macro|I2C_SPEED_FAST_PLUS
DECL|I2C_SPEED_FAST|macro|I2C_SPEED_FAST
DECL|I2C_SPEED_HIGH|macro|I2C_SPEED_HIGH
DECL|I2C_SPEED_MASK|macro|I2C_SPEED_MASK
DECL|I2C_SPEED_SHIFT|macro|I2C_SPEED_SHIFT
DECL|I2C_SPEED_STANDARD|macro|I2C_SPEED_STANDARD
DECL|I2C_SPEED_ULTRA|macro|I2C_SPEED_ULTRA
DECL|__DRIVERS_I2C_H|macro|__DRIVERS_I2C_H
DECL|__bits|struct|struct __bits {
DECL|bits|member|} bits;
DECL|buf|member|u8_t *buf;
DECL|configure|member|i2c_api_configure_t configure;
DECL|dev_config|union|union dev_config {
DECL|flags|member|u8_t flags;
DECL|i2c_addr|member|u16_t i2c_addr;
DECL|i2c_api_configure_t|typedef|typedef int (*i2c_api_configure_t)(struct device *dev,
DECL|i2c_api_full_io_t|typedef|typedef int (*i2c_api_full_io_t)(struct device *dev,
DECL|i2c_burst_read16|function|static inline int i2c_burst_read16(struct device *dev, u16_t dev_addr, u16_t start_addr, u8_t *buf, u8_t num_bytes)
DECL|i2c_burst_read_addr|function|static inline int i2c_burst_read_addr(struct device *dev, u16_t dev_addr, u8_t *start_addr, const u8_t addr_size, u8_t *buf, u8_t num_bytes)
DECL|i2c_burst_read|function|static inline int i2c_burst_read(struct device *dev, u16_t dev_addr, u8_t start_addr, u8_t *buf, u8_t num_bytes)
DECL|i2c_burst_write16|function|static inline int i2c_burst_write16(struct device *dev, u16_t dev_addr, u16_t start_addr, u8_t *buf, u8_t num_bytes)
DECL|i2c_burst_write_addr|function|static inline int i2c_burst_write_addr(struct device *dev, u16_t dev_addr, u8_t *start_addr, const u8_t addr_size, u8_t *buf, u8_t num_bytes)
DECL|i2c_burst_write|function|static inline int i2c_burst_write(struct device *dev, u16_t dev_addr, u8_t start_addr, u8_t *buf, u8_t num_bytes)
DECL|i2c_client_config|struct|struct i2c_client_config {
DECL|i2c_configure|function|static inline int i2c_configure(struct device *dev, u32_t dev_config)
DECL|i2c_driver_api|struct|struct i2c_driver_api {
DECL|i2c_master|member|char *i2c_master;
DECL|i2c_msg|struct|struct i2c_msg {
DECL|i2c_read|function|static inline int i2c_read(struct device *dev, u8_t *buf, u32_t num_bytes, u16_t addr)
DECL|i2c_reg_read16|function|static inline int i2c_reg_read16(struct device *dev, u16_t dev_addr, u16_t reg_addr, u8_t *value)
DECL|i2c_reg_read_addr|function|static inline int i2c_reg_read_addr(struct device *dev, u16_t dev_addr, u8_t *reg_addr, const u8_t addr_size, u8_t *value)
DECL|i2c_reg_read_byte|function|static inline int i2c_reg_read_byte(struct device *dev, u16_t dev_addr, u8_t reg_addr, u8_t *value)
DECL|i2c_reg_update16|function|static inline int i2c_reg_update16(struct device *dev, u16_t dev_addr, u16_t reg_addr, u8_t mask, u8_t value)
DECL|i2c_reg_update_addr|function|static inline int i2c_reg_update_addr(struct device *dev, u16_t dev_addr, u8_t *reg_addr, u8_t addr_size, u8_t mask,
DECL|i2c_reg_update_byte|function|static inline int i2c_reg_update_byte(struct device *dev, u8_t dev_addr, u8_t reg_addr, u8_t mask, u8_t value)
DECL|i2c_reg_write16|function|static inline int i2c_reg_write16(struct device *dev, u16_t dev_addr, u16_t reg_addr, u8_t value)
DECL|i2c_reg_write_addr|function|static inline int i2c_reg_write_addr(struct device *dev, u16_t dev_addr, u8_t *reg_addr, const u8_t addr_size, u8_t value)
DECL|i2c_reg_write_byte|function|static inline int i2c_reg_write_byte(struct device *dev, u16_t dev_addr, u8_t reg_addr, u8_t value)
DECL|i2c_transfer|function|static inline int i2c_transfer(struct device *dev, struct i2c_msg *msgs, u8_t num_msgs, u16_t addr)
DECL|i2c_write|function|static inline int i2c_write(struct device *dev, u8_t *buf, u32_t num_bytes, u16_t addr)
DECL|is_master_device|member|u32_t is_master_device : 1;
DECL|len|member|u32_t len;
DECL|raw|member|u32_t raw;
DECL|reserved|member|u32_t reserved : 26;
DECL|speed|member|u32_t speed : 3;
DECL|transfer|member|i2c_api_full_io_t transfer;
DECL|use_10_bit_addr|member|u32_t use_10_bit_addr : 1;
