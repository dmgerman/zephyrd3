DECL|CC2520_GPIO|macro|CC2520_GPIO
DECL|CC2520_READING_STACK_SIZE|macro|CC2520_READING_STACK_SIZE
DECL|CC2520_SPI_SLAVE|macro|CC2520_SPI_SLAVE
DECL|CC2520_SPI|macro|CC2520_SPI
DECL|CLOCK_CYCLE_LT|macro|CLOCK_CYCLE_LT
DECL|CLOCK_MSEC_TO_CYCLES|macro|CLOCK_MSEC_TO_CYCLES
DECL|CONFIG_CC2520_DRV_NAME|macro|CONFIG_CC2520_DRV_NAME
DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|DRIVER_STR|macro|DRIVER_STR
DECL|__CC2520_ARCH_H__|macro|__CC2520_ARCH_H__
DECL|cc2520_clear_fifop_int|function|static inline void cc2520_clear_fifop_int(void)
DECL|cc2520_config|struct|struct cc2520_config {
DECL|cc2520_enable_fifop_int|function|static inline void cc2520_enable_fifop_int(int enable)
DECL|cc2520_get_cca|function|static inline int cc2520_get_cca(void)
DECL|cc2520_get_fifop|function|static inline int cc2520_get_fifop(void)
DECL|cc2520_get_fifo|function|static inline int cc2520_get_fifo(void)
DECL|cc2520_get_sfd|function|static inline int cc2520_get_sfd(void)
DECL|cc2520_get_status|function|static inline bool cc2520_get_status(uint8_t *status)
DECL|cc2520_gpio_config|struct|struct cc2520_gpio_config {
DECL|cc2520_gpio_int_handler_t|typedef|typedef void (*cc2520_gpio_int_handler_t)(struct device *port, uint32_t pin);
DECL|cc2520_init_fifop_int|function|static inline void cc2520_init_fifop_int(cc2520_gpio_int_handler_t handler)
DECL|cc2520_read_fifo_buf|function|static inline bool cc2520_read_fifo_buf(uint8_t *buffer, uint32_t count)
DECL|cc2520_read_ram|function|static inline bool cc2520_read_ram(uint8_t *buffer, int addr, uint32_t count)
DECL|cc2520_read_reg|function|static inline bool cc2520_read_reg(uint16_t addr, uint16_t *value)
DECL|cc2520_set_reset|function|static inline void cc2520_set_reset(int enable)
DECL|cc2520_set_vreg|function|static inline void cc2520_set_vreg(int enable)
DECL|cc2520_strobe_plus_nop|function|static inline bool cc2520_strobe_plus_nop(uint8_t strobe)
DECL|cc2520_strobe|function|static inline bool cc2520_strobe(uint8_t strobe)
DECL|cc2520_write_fifo_buf|function|static inline bool cc2520_write_fifo_buf(uint8_t *buffer, int count)
DECL|cc2520_write_ram|function|static inline bool cc2520_write_ram(uint8_t *buffer, int addr, int count)
DECL|cc2520_write_reg|function|static inline bool cc2520_write_reg(uint16_t addr, uint16_t value)
DECL|gpios|member|struct cc2520_gpio_config **gpios;
DECL|gpio|member|struct device *gpio;
DECL|read_lock|member|struct nano_sem read_lock;
DECL|spi_slave|member|uint32_t spi_slave;
DECL|spi_transfer|function|static inline bool spi_transfer(struct device *dev,uint8_t *data_out, uint8_t *data_in, int len)
DECL|spi|member|struct device *spi;
