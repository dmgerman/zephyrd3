DECL|NRF52_SPIM_DISABLE|macro|NRF52_SPIM_DISABLE
DECL|NRF52_SPIM_ENABLE|macro|NRF52_SPIM_ENABLE
DECL|NRF52_SPIM_INT_ENDRX|macro|NRF52_SPIM_INT_ENDRX
DECL|NRF52_SPIM_INT_ENDTX|macro|NRF52_SPIM_INT_ENDTX
DECL|NRF52_SPIM_INT_END|macro|NRF52_SPIM_INT_END
DECL|SS_UNUSED|macro|SS_UNUSED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|base|member|volatile NRF_SPIM_Type *base;
DECL|default_cfg|member|struct spi_config default_cfg;
DECL|gpio_port|member|struct device *gpio_port;
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|miso|member|u8_t miso;
DECL|mosi|member|u8_t mosi;
DECL|orc|member|u8_t orc;
DECL|psel|member|} psel;
DECL|rx_cnt|member|u32_t rx_cnt;
DECL|rxd|member|u8_t rxd:1;
DECL|sck|member|u8_t sck;
DECL|sem|member|struct k_sem sem;
DECL|slave|member|u8_t slave;
DECL|spim_nrf52_config_0|variable|spim_nrf52_config_0
DECL|spim_nrf52_config_1|variable|spim_nrf52_config_1
DECL|spim_nrf52_config_func_0|function|static void spim_nrf52_config_func_0(struct device *dev)
DECL|spim_nrf52_config_func_1|function|static void spim_nrf52_config_func_1(struct device *dev)
DECL|spim_nrf52_configure|function|static int spim_nrf52_configure(struct device *dev,struct spi_config *spi_config)
DECL|spim_nrf52_config|struct|struct spim_nrf52_config {
DECL|spim_nrf52_csn|function|static inline void spim_nrf52_csn(struct device *gpio_port, u32_t pin, bool select)
DECL|spim_nrf52_data_0|variable|spim_nrf52_data_0
DECL|spim_nrf52_data_1|variable|spim_nrf52_data_1
DECL|spim_nrf52_data|struct|struct spim_nrf52_data {
DECL|spim_nrf52_driver_api|variable|spim_nrf52_driver_api
DECL|spim_nrf52_init|function|static int spim_nrf52_init(struct device *dev)
DECL|spim_nrf52_isr|function|static void spim_nrf52_isr(void *arg)
DECL|spim_nrf52_print_cfg_registers|function|static void spim_nrf52_print_cfg_registers(struct device *dev)
DECL|spim_nrf52_slave_select|function|static int spim_nrf52_slave_select(struct device *dev, u32_t slave)
DECL|spim_nrf52_transceive|function|static int spim_nrf52_transceive(struct device *dev, const void *tx_buf, u32_t tx_buf_len, void *rx_buf, u32_t rx_buf_len)
DECL|ss|member|u8_t ss[4];
DECL|stopped|member|u8_t stopped:1;
DECL|tx_cnt|member|u32_t tx_cnt;
DECL|txd|member|u8_t txd:1;
