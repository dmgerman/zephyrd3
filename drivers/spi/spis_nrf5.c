DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|NRF5_SPIS_CPHA_LEADING|macro|NRF5_SPIS_CPHA_LEADING
DECL|NRF5_SPIS_CPHA_TRAILING|macro|NRF5_SPIS_CPHA_TRAILING
DECL|NRF5_SPIS_CPOL_HIGH|macro|NRF5_SPIS_CPOL_HIGH
DECL|NRF5_SPIS_CPOL_LOW|macro|NRF5_SPIS_CPOL_LOW
DECL|NRF5_SPIS_CSN_DISABLED_CFG|macro|NRF5_SPIS_CSN_DISABLED_CFG
DECL|NRF5_SPIS_CSN_DISABLED|macro|NRF5_SPIS_CSN_DISABLED
DECL|NRF5_SPIS_CSN_DISABLED|macro|NRF5_SPIS_CSN_DISABLED
DECL|NRF5_SPIS_ENABLED|macro|NRF5_SPIS_ENABLED
DECL|NRF5_SPIS_ORDER_LSB|macro|NRF5_SPIS_ORDER_LSB
DECL|NRF5_SPIS_ORDER_MSB|macro|NRF5_SPIS_ORDER_MSB
DECL|NRF5_SPIS_SHORTCUT_END_ACQUIRE|macro|NRF5_SPIS_SHORTCUT_END_ACQUIRE
DECL|SPI_REGS|macro|SPI_REGS
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|config_func|member|spis_nrf5_config_t config_func; /* IRQ config func pointer */
DECL|csn_pin|member|u8_t csn_pin; /* CSN GPIO pin number */
DECL|def|member|u8_t def; /* Default character */
DECL|device_sync_sem|member|struct k_sem device_sync_sem; /* synchronisation semaphore */
DECL|error|member|u8_t error;
DECL|is_buf_in_ram|function|static inline bool is_buf_in_ram(const void *buf)
DECL|miso_pin|member|u8_t miso_pin; /* MISO GPIO pin number */
DECL|mosi_pin|member|u8_t mosi_pin; /* MOSI GPIO pin number */
DECL|nrf5_spis_api|variable|nrf5_spis_api
DECL|regs|member|NRF_SPIS_Type *regs; /* Registers */
DECL|sck_pin|member|u8_t sck_pin; /* SCK GPIO pin number */
DECL|spis_config_irq_0|function|static void spis_config_irq_0(void)
DECL|spis_config_irq_1|function|static void spis_config_irq_1(void)
DECL|spis_configure_psel|function|static void spis_configure_psel(NRF_SPIS_Type *spi_regs,const struct spis_nrf5_config *cfg)
DECL|spis_configure_psel|function|static void spis_configure_psel(NRF_SPIS_Type *spi_regs,const struct spis_nrf5_config *cfg)
DECL|spis_nrf5_complete|function|static void spis_nrf5_complete(struct device *dev, u32_t error)
DECL|spis_nrf5_config_0|variable|spis_nrf5_config_0
DECL|spis_nrf5_config_1|variable|spis_nrf5_config_1
DECL|spis_nrf5_config_t|typedef|typedef void (*spis_nrf5_config_t)(void);
DECL|spis_nrf5_configure|function|static int spis_nrf5_configure(struct device *dev, struct spi_config *config)
DECL|spis_nrf5_config|struct|struct spis_nrf5_config {
DECL|spis_nrf5_data_0|variable|spis_nrf5_data_0
DECL|spis_nrf5_data_1|variable|spis_nrf5_data_1
DECL|spis_nrf5_data|struct|struct spis_nrf5_data {
DECL|spis_nrf5_init|function|static int spis_nrf5_init(struct device *dev)
DECL|spis_nrf5_isr|function|static void spis_nrf5_isr(void *arg)
DECL|spis_nrf5_print_cfg_registers|function|static void spis_nrf5_print_cfg_registers(struct device *dev)
DECL|spis_nrf5_transceive|function|static int spis_nrf5_transceive(struct device *dev, const void *tx_buf, u32_t tx_buf_len, void *rx_buf, u32_t rx_buf_len)
