DECL|CC1200_IOCFG0|macro|CC1200_IOCFG0
DECL|CC1200_IOCFG2|macro|CC1200_IOCFG2
DECL|CC1200_IOCFG3|macro|CC1200_IOCFG3
DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
DECL|_cc1200_access_reg|function|bool _cc1200_access_reg(struct cc1200_context *ctx, bool read, u8_t addr,void *data, size_t length, bool extended, bool burst)
DECL|_cc1200_print_status|function|static void _cc1200_print_status(u8_t status)
DECL|cc1200_cca|function|static int cc1200_cca(struct device *dev)
DECL|cc1200_context_data|variable|cc1200_context_data
DECL|cc1200_get_capabilities|function|static enum ieee802154_hw_caps cc1200_get_capabilities(struct device *dev)
DECL|cc1200_get_channel_count|function|static u16_t cc1200_get_channel_count(struct device *dev)
DECL|cc1200_iface_init|function|static void cc1200_iface_init(struct net_if *iface)
DECL|cc1200_init|function|static int cc1200_init(struct device *dev)
DECL|cc1200_radio_api|variable|cc1200_radio_api
DECL|cc1200_rx|function|static void cc1200_rx(struct device *dev)
DECL|cc1200_set_channel|function|static int cc1200_set_channel(struct device *dev, u16_t channel)
DECL|cc1200_set_txpower|function|static int cc1200_set_txpower(struct device *dev, s16_t dbm)
DECL|cc1200_start|function|static int cc1200_start(struct device *dev)
DECL|cc1200_stop|function|static int cc1200_stop(struct device *dev)
DECL|cc1200_tx|function|static int cc1200_tx(struct device *dev, struct net_pkt *pkt, struct net_buf *frag)
DECL|configure_spi|function|static int configure_spi(struct device *dev)
DECL|cs_ctrl|variable|cs_ctrl
DECL|enable_gpio0_interrupt|function|static void enable_gpio0_interrupt(struct cc1200_context *cc1200, bool enable)
DECL|get_lo_divider|function|static u8_t get_lo_divider(struct cc1200_context *ctx)
DECL|get_mac|function|static inline u8_t *get_mac(struct device *dev)
DECL|get_packet_length|function|static inline u8_t get_packet_length(struct cc1200_context *ctx)
DECL|get_status|function|static u8_t get_status(struct cc1200_context *ctx)
DECL|gpio0_int_handler|function|static inline void gpio0_int_handler(struct device *port, struct gpio_callback *cb, u32_t pins)
DECL|power_on_and_setup|function|static int power_on_and_setup(struct device *dev)
DECL|read_rxfifo_content|function|static inline bool read_rxfifo_content(struct cc1200_context *ctx, struct net_buf *frag, u8_t len)
DECL|read_rxfifo|function|static inline bool read_rxfifo(struct cc1200_context *ctx, void *data, size_t length)
DECL|rf_calibrate|function|static int rf_calibrate(struct cc1200_context *ctx)
DECL|rf_evaluate_freq_setting|function|static u32_t rf_evaluate_freq_setting(struct cc1200_context *ctx, u32_t chan)
DECL|rf_install_settings|function|rf_install_settings(struct device *dev, const struct cc1200_rf_registers_set *rf_settings)
DECL|setup_gpio_callback|function|static void setup_gpio_callback(struct device *dev)
DECL|verify_crc|function|static inline bool verify_crc(struct cc1200_context *ctx, struct net_pkt *pkt)
DECL|verify_rxfifo_validity|function|static inline bool verify_rxfifo_validity(struct cc1200_context *ctx, u8_t pkt_len)
DECL|write_reg_freq|function|static bool write_reg_freq(struct cc1200_context *ctx, u32_t freq)
DECL|write_txfifo|function|static inline bool write_txfifo(struct cc1200_context *ctx,void *data, size_t length)
