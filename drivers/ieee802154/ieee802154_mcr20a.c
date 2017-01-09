DECL|MCR20A_AUTOACK_ENABLED|macro|MCR20A_AUTOACK_ENABLED
DECL|MCR20A_CLK_OUT_CONFIG|macro|MCR20A_CLK_OUT_CONFIG
DECL|MCR20A_CLK_OUT_CONFIG|macro|MCR20A_CLK_OUT_CONFIG
DECL|MCR20A_CLK_OUT_CONFIG|macro|MCR20A_CLK_OUT_CONFIG
DECL|MCR20A_CLK_OUT_CONFIG|macro|MCR20A_CLK_OUT_CONFIG
DECL|MCR20A_CLK_OUT_CONFIG|macro|MCR20A_CLK_OUT_CONFIG
DECL|MCR20A_CLK_OUT_CONFIG|macro|MCR20A_CLK_OUT_CONFIG
DECL|MCR20A_CLK_OUT_CONFIG|macro|MCR20A_CLK_OUT_CONFIG
DECL|MCR20A_CLK_OUT_CONFIG|macro|MCR20A_CLK_OUT_CONFIG
DECL|MCR20A_CLK_OUT_CONFIG|macro|MCR20A_CLK_OUT_CONFIG
DECL|MCR20A_DEFAULT_CHANNEL|macro|MCR20A_DEFAULT_CHANNEL
DECL|MCR20A_DEFAULT_TX_POWER|macro|MCR20A_DEFAULT_TX_POWER
DECL|MCR20A_FCS_LENGTH|macro|MCR20A_FCS_LENGTH
DECL|MCR20A_OUTPUT_POWER_MAX|macro|MCR20A_OUTPUT_POWER_MAX
DECL|MCR20A_OUTPUT_POWER_MIN|macro|MCR20A_OUTPUT_POWER_MIN
DECL|MCR20A_PM_AUTODOZE|macro|MCR20A_PM_AUTODOZE
DECL|MCR20A_PM_DOZE|macro|MCR20A_PM_DOZE
DECL|MCR20A_PM_HIBERNATE|macro|MCR20A_PM_HIBERNATE
DECL|MCR20A_PM_IDLE|macro|MCR20A_PM_IDLE
DECL|MCR20A_PSDU_LENGTH|macro|MCR20A_PSDU_LENGTH
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|_MACACKWAITDURATION|macro|_MACACKWAITDURATION
DECL|_MACACKWAITDURATION|macro|_MACACKWAITDURATION
DECL|_irq_event_check_irqsts|function|static void _irq_event_check_irqsts(struct mcr20a_context *mcr20a, uint8_t *dregs)
DECL|_irq_event_seq_cca|function|static inline uint8_t _irq_event_seq_cca(struct mcr20a_context *mcr20a, uint8_t *dregs, bool ccca)
DECL|_irq_event_seq_r|function|static inline uint8_t _irq_event_seq_r(struct mcr20a_context *mcr20a, uint8_t *dregs)
DECL|_irq_event_seq_tr|function|static inline uint8_t _irq_event_seq_tr(struct mcr20a_context *mcr20a,uint8_t *dregs, bool tr)
DECL|_mcr20a_read_burst|function|bool _mcr20a_read_burst(struct mcr20a_spi *spi, bool dreg, uint16_t addr,uint8_t *data_buf, uint8_t len)
DECL|_mcr20a_read_reg|function|uint8_t _mcr20a_read_reg(struct mcr20a_spi *spi, bool dreg, uint8_t addr)
DECL|_mcr20a_write_burst|function|bool _mcr20a_write_burst(struct mcr20a_spi *spi, bool dreg, uint16_t addr, uint8_t *data_buf, uint8_t len)
DECL|_mcr20a_write_reg|function|bool _mcr20a_write_reg(struct mcr20a_spi *spi, bool dreg, uint8_t addr, uint8_t value)
DECL|_usleep|macro|_usleep
DECL|configure_gpios|function|static inline int configure_gpios(struct device *dev)
DECL|configure_spi|function|static inline int configure_spi(struct device *dev)
DECL|enable_irqb_interrupt|function|static void enable_irqb_interrupt(struct mcr20a_context *mcr20a, bool enable)
DECL|get_mac|function|static inline uint8_t *get_mac(struct device *dev)
DECL|irqb_handler|function|static void irqb_handler(void *arg)
DECL|irqb_int_handler|function|static inline void irqb_int_handler(struct device *port, struct gpio_callback *cb, uint32_t pins)
DECL|mcr20a_cca|function|static int mcr20a_cca(struct device *dev)
DECL|mcr20a_context_data|variable|mcr20a_context_data
DECL|mcr20a_get_lqi|function|static uint8_t mcr20a_get_lqi(struct device *dev)
DECL|mcr20a_get_rssi|function|static inline uint32_t mcr20a_get_rssi(uint32_t lqi)
DECL|mcr20a_iface_init|function|static void mcr20a_iface_init(struct net_if *iface)
DECL|mcr20a_init|function|static int mcr20a_init(struct device *dev)
DECL|mcr20a_mask_irqb|function|static bool mcr20a_mask_irqb(struct mcr20a_context *dev, bool msk)
DECL|mcr20a_radio_api|variable|mcr20a_radio_api
DECL|mcr20a_rx|function|static inline void mcr20a_rx(struct mcr20a_context *mcr20a)
DECL|mcr20a_set_cca_mode|function|static int mcr20a_set_cca_mode(struct device *dev, uint8_t mode)
DECL|mcr20a_set_channel|function|static int mcr20a_set_channel(struct device *dev, uint16_t channel)
DECL|mcr20a_set_ieee_addr|function|static int mcr20a_set_ieee_addr(struct device *dev, const uint8_t *ieee_addr)
DECL|mcr20a_set_pan_id|function|static int mcr20a_set_pan_id(struct device *dev, uint16_t pan_id)
DECL|mcr20a_set_sequence|function|static int mcr20a_set_sequence(struct mcr20a_context *mcr20a, uint8_t seq)
DECL|mcr20a_set_short_addr|function|static int mcr20a_set_short_addr(struct device *dev, uint16_t short_addr)
DECL|mcr20a_set_txpower|function|static int mcr20a_set_txpower(struct device *dev, int16_t dbm)
DECL|mcr20a_start|function|static int mcr20a_start(struct device *dev)
DECL|mcr20a_stop|function|static int mcr20a_stop(struct device *dev)
DECL|mcr20a_t4cmp_clear|function|static int mcr20a_t4cmp_clear(struct mcr20a_context *mcr20a)
DECL|mcr20a_t4cmp_set|function|static int mcr20a_t4cmp_set(struct mcr20a_context *mcr20a, uint32_t timeout)
DECL|mcr20a_thread_main|function|static void mcr20a_thread_main(void *arg1, void *unused1, void *unused2)
DECL|mcr20a_timer_init|function|static int mcr20a_timer_init(struct device *dev, uint8_t tb)
DECL|mcr20a_timer_set|function|static int mcr20a_timer_set(struct mcr20a_context *mcr20a, uint8_t cmp_reg, uint32_t timeout)
DECL|mcr20a_tx|function|static int mcr20a_tx(struct device *dev, struct net_buf *buf)
DECL|mcr20a_update_overwrites|function|static int mcr20a_update_overwrites(struct mcr20a_context *dev)
DECL|pll_frac_lt|variable|pll_frac_lt
DECL|pll_int_lt|variable|pll_int_lt
DECL|pow_lt|variable|pow_lt
DECL|power_on_and_setup|function|static int power_on_and_setup(struct device *dev)
DECL|read_rxfifo_content|function|static inline bool read_rxfifo_content(struct mcr20a_spi *spi, struct net_buf *buf, uint8_t len)
DECL|set_reset|function|static inline void set_reset(struct device *dev, uint32_t value)
DECL|setup_gpio_callbacks|function|static inline void setup_gpio_callbacks(struct device *dev)
DECL|write_txfifo_content|function|static inline bool write_txfifo_content(struct mcr20a_spi *spi,struct net_buf *buf)
