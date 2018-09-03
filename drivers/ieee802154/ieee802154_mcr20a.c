DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
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
DECL|MCR20A_GET_SEQ_STATE_RETRIES|macro|MCR20A_GET_SEQ_STATE_RETRIES
DECL|MCR20A_OUTPUT_POWER_MAX|macro|MCR20A_OUTPUT_POWER_MAX
DECL|MCR20A_OUTPUT_POWER_MIN|macro|MCR20A_OUTPUT_POWER_MIN
DECL|MCR20A_PM_AUTODOZE|macro|MCR20A_PM_AUTODOZE
DECL|MCR20A_PM_DOZE|macro|MCR20A_PM_DOZE
DECL|MCR20A_PM_HIBERNATE|macro|MCR20A_PM_HIBERNATE
DECL|MCR20A_PM_IDLE|macro|MCR20A_PM_IDLE
DECL|MCR20A_PSDU_LENGTH|macro|MCR20A_PSDU_LENGTH
DECL|MCR20A_SEQ_SYNC_TIMEOUT|macro|MCR20A_SEQ_SYNC_TIMEOUT
DECL|MCR20A_SEQ_SYNC_TIMEOUT|macro|MCR20A_SEQ_SYNC_TIMEOUT
DECL|PART_OF_KW2XD_SIP|macro|PART_OF_KW2XD_SIP
DECL|PART_OF_KW2XD_SIP|macro|PART_OF_KW2XD_SIP
DECL|_MACACKWAITDURATION|macro|_MACACKWAITDURATION
DECL|_MACACKWAITDURATION|macro|_MACACKWAITDURATION
DECL|_MAX_PKT_TX_DURATION|macro|_MAX_PKT_TX_DURATION
DECL|_irqsts1_event|function|static inline bool _irqsts1_event(struct mcr20a_context *mcr20a, u8_t *dregs)
DECL|_irqsts3_event|function|static inline bool _irqsts3_event(struct mcr20a_context *mcr20a, u8_t *dregs)
DECL|_mcr20a_read_burst|function|bool _mcr20a_read_burst(struct mcr20a_context *dev, bool dreg, u16_t addr,u8_t *data_buf, u8_t len)
DECL|_mcr20a_read_reg|function|u8_t _mcr20a_read_reg(struct mcr20a_context *dev, bool dreg, u8_t addr)
DECL|_mcr20a_write_burst|function|bool _mcr20a_write_burst(struct mcr20a_context *dev, bool dreg, u16_t addr, u8_t *data_buf, u8_t len)
DECL|_mcr20a_write_reg|function|bool _mcr20a_write_reg(struct mcr20a_context *dev, bool dreg, u8_t addr, u8_t value)
DECL|_usleep|macro|_usleep
DECL|_xcvseq_wait_until_idle|function|static inline void _xcvseq_wait_until_idle(struct mcr20a_context *mcr20a)
DECL|configure_gpios|function|static inline int configure_gpios(struct device *dev)
DECL|configure_spi|function|static inline int configure_spi(struct device *dev)
DECL|enable_irqb_interrupt|function|static void enable_irqb_interrupt(struct mcr20a_context *mcr20a, bool enable)
DECL|get_mac|function|static inline u8_t *get_mac(struct device *dev)
DECL|irqb_int_handler|function|static inline void irqb_int_handler(struct device *port, struct gpio_callback *cb, u32_t pins)
DECL|mcr20a_abort_sequence|function|static inline int mcr20a_abort_sequence(struct mcr20a_context *mcr20a,bool force)
DECL|mcr20a_cca|function|static int mcr20a_cca(struct device *dev)
DECL|mcr20a_context_data|variable|mcr20a_context_data
DECL|mcr20a_filter|function|static int mcr20a_filter(struct device *dev, bool set, enum ieee802154_filter_type type, const struct ieee802154_filter *filter)
DECL|mcr20a_get_capabilities|function|static enum ieee802154_hw_caps mcr20a_get_capabilities(struct device *dev)
DECL|mcr20a_get_rssi|function|static inline u32_t mcr20a_get_rssi(u32_t lqi)
DECL|mcr20a_iface_init|function|static void mcr20a_iface_init(struct net_if *iface)
DECL|mcr20a_init|function|static int mcr20a_init(struct device *dev)
DECL|mcr20a_mask_irqb|function|static bool mcr20a_mask_irqb(struct mcr20a_context *dev, bool msk)
DECL|mcr20a_radio_api|variable|mcr20a_radio_api
DECL|mcr20a_rx|function|static inline void mcr20a_rx(struct mcr20a_context *mcr20a, u8_t len)
DECL|mcr20a_set_cca_mode|function|static int mcr20a_set_cca_mode(struct device *dev, u8_t mode)
DECL|mcr20a_set_channel|function|static int mcr20a_set_channel(struct device *dev, u16_t channel)
DECL|mcr20a_set_ieee_addr|function|static int mcr20a_set_ieee_addr(struct device *dev, const u8_t *ieee_addr)
DECL|mcr20a_set_pan_id|function|static int mcr20a_set_pan_id(struct device *dev, u16_t pan_id)
DECL|mcr20a_set_sequence|function|static inline int mcr20a_set_sequence(struct mcr20a_context *mcr20a, u8_t seq)
DECL|mcr20a_set_short_addr|function|static int mcr20a_set_short_addr(struct device *dev, u16_t short_addr)
DECL|mcr20a_set_txpower|function|static int mcr20a_set_txpower(struct device *dev, s16_t dbm)
DECL|mcr20a_start|function|static int mcr20a_start(struct device *dev)
DECL|mcr20a_stop|function|static int mcr20a_stop(struct device *dev)
DECL|mcr20a_t4cmp_clear|function|static int mcr20a_t4cmp_clear(struct mcr20a_context *mcr20a)
DECL|mcr20a_t4cmp_set|function|static int mcr20a_t4cmp_set(struct mcr20a_context *mcr20a, u32_t timeout)
DECL|mcr20a_thread_main|function|static void mcr20a_thread_main(void *arg)
DECL|mcr20a_timer_init|function|static int mcr20a_timer_init(struct device *dev, u8_t tb)
DECL|mcr20a_timer_set|function|static int mcr20a_timer_set(struct mcr20a_context *mcr20a, u8_t cmp_reg, u32_t timeout)
DECL|mcr20a_tx|function|static int mcr20a_tx(struct device *dev, struct net_pkt *pkt, struct net_buf *frag)
DECL|mcr20a_update_overwrites|function|static int mcr20a_update_overwrites(struct mcr20a_context *dev)
DECL|pll_frac_lt|variable|pll_frac_lt
DECL|pll_int_lt|variable|pll_int_lt
DECL|pow_lt|variable|pow_lt
DECL|power_on_and_setup|function|static int power_on_and_setup(struct device *dev)
DECL|read_rxfifo_content|function|static inline bool read_rxfifo_content(struct mcr20a_context *dev, struct net_buf *buf, u8_t len)
DECL|set_reset|function|static inline void set_reset(struct device *dev, u32_t value)
DECL|setup_gpio_callbacks|function|static inline void setup_gpio_callbacks(struct mcr20a_context *mcr20a)
DECL|write_txfifo_content|function|static inline bool write_txfifo_content(struct mcr20a_context *dev,struct net_pkt *pkt, struct net_buf *frag)
