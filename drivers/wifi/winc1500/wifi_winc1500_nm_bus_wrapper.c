DECL|I2C_TIMEOUT|macro|I2C_TIMEOUT
DECL|NM_BUS_MAX_TRX_SZ|macro|NM_BUS_MAX_TRX_SZ
DECL|SLAVE_ADDRESS|macro|SLAVE_ADDRESS
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|cs_ctrl|variable|cs_ctrl
DECL|egstrNmBusCapabilities|variable|egstrNmBusCapabilities
DECL|nm_bus_deinit|function|s8_t nm_bus_deinit(void)
DECL|nm_bus_init|function|s8_t nm_bus_init(void *pvinit)
DECL|nm_bus_ioctl|function|s8_t nm_bus_ioctl(u8_t cmd, void *parameter)
DECL|nm_bus_reinit|function|s8_t nm_bus_reinit(void *config)
DECL|nm_i2c_read|function|static s8_t nm_i2c_read(u8_t *rb, u16_t sz)
DECL|nm_i2c_write_special|function|static s8_t nm_i2c_write_special(u8_t *wb1, u16_t sz1, u8_t *wb2, u16_t sz2)
DECL|nm_i2c_write|function|static s8_t nm_i2c_write(u8_t *b, u16_t sz)
DECL|spi_rw|function|static s8_t spi_rw(u8_t *mosi, u8_t *miso, u16_t size)
