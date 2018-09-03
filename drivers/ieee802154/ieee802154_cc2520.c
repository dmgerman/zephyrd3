DECL|CC2520_AUTOMATISM|macro|CC2520_AUTOMATISM
DECL|CC2520_FCS_LENGTH|macro|CC2520_FCS_LENGTH
DECL|CC2520_TX_THRESHOLD|macro|CC2520_TX_THRESHOLD
DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
DECL|_cc2520_access|function|bool _cc2520_access(struct cc2520_context *ctx, bool read, u8_t ins, u16_t addr, void *data, size_t length)
DECL|_cc2520_crypto_ccm|function|static int _cc2520_crypto_ccm(struct cipher_ctx *ctx, struct cipher_aead_pkt *apkt, u8_t *ccm_nonce)
DECL|_cc2520_crypto_uccm|function|static int _cc2520_crypto_uccm(struct cipher_ctx *ctx, struct cipher_aead_pkt *apkt, u8_t *ccm_nonce)
DECL|_cc2520_print_errors|function|static inline void _cc2520_print_errors(struct cc2520_context *cc2520)
DECL|_cc2520_print_errors|macro|_cc2520_print_errors
DECL|_cc2520_print_exceptions|function|static inline void _cc2520_print_exceptions(struct cc2520_context *cc2520)
DECL|_cc2520_print_exceptions|macro|_cc2520_print_exceptions
DECL|_cc2520_print_gpio_config|function|static inline void _cc2520_print_gpio_config(struct device *dev)
DECL|_cc2520_print_gpio_config|macro|_cc2520_print_gpio_config
DECL|_cc2520_read_ram|function|static inline bool _cc2520_read_ram(struct cc2520_context *ctx, u16_t addr, u8_t *data_buf, u8_t len)
DECL|_cc2520_set_ieee_addr|function|static int _cc2520_set_ieee_addr(struct device *dev, const u8_t *ieee_addr)
DECL|_cc2520_set_pan_id|function|static int _cc2520_set_pan_id(struct device *dev, u16_t pan_id)
DECL|_cc2520_set_short_addr|function|static int _cc2520_set_short_addr(struct device *dev, u16_t short_addr)
DECL|_cc2520_status|function|static inline u8_t _cc2520_status(struct cc2520_context *ctx)
DECL|_cc2520_write_ram|function|static inline bool _cc2520_write_ram(struct cc2520_context *ctx, u16_t addr, u8_t *data_buf, u8_t len)
DECL|_usleep|macro|_usleep
DECL|cc2520_cca|function|static int cc2520_cca(struct device *dev)
DECL|cc2520_context_data|variable|cc2520_context_data
DECL|cc2520_crypto_api|variable|cc2520_crypto_api
DECL|cc2520_crypto_begin_session|function|static int cc2520_crypto_begin_session(struct device *dev, struct cipher_ctx *ctx, enum cipher_algo algo, enum cipher_mode mode, enum cipher_op op_type)
DECL|cc2520_crypto_free_session|function|static int cc2520_crypto_free_session(struct device *dev, struct cipher_ctx *ctx)
DECL|cc2520_crypto_hw_caps|function|static int cc2520_crypto_hw_caps(struct device *dev)
DECL|cc2520_crypto_init|function|static int cc2520_crypto_init(struct device *dev)
DECL|cc2520_filter|function|static int cc2520_filter(struct device *dev, bool set, enum ieee802154_filter_type type, const struct ieee802154_filter *filter)
DECL|cc2520_get_capabilities|function|static enum ieee802154_hw_caps cc2520_get_capabilities(struct device *dev)
DECL|cc2520_iface_init|function|static void cc2520_iface_init(struct net_if *iface)
DECL|cc2520_init|function|static int cc2520_init(struct device *dev)
DECL|cc2520_radio_api|variable|cc2520_radio_api
DECL|cc2520_rx|function|static void cc2520_rx(int arg)
DECL|cc2520_set_channel|function|static int cc2520_set_channel(struct device *dev, u16_t channel)
DECL|cc2520_set_txpower|function|static int cc2520_set_txpower(struct device *dev, s16_t dbm)
DECL|cc2520_start|function|static int cc2520_start(struct device *dev)
DECL|cc2520_stop|function|static int cc2520_stop(struct device *dev)
DECL|cc2520_tx|function|static int cc2520_tx(struct device *dev, struct net_pkt *pkt, struct net_buf *frag)
DECL|configure_spi|function|static inline int configure_spi(struct device *dev)
DECL|cs_ctrl|variable|cs_ctrl
DECL|enable_fifop_interrupt|function|static void enable_fifop_interrupt(struct cc2520_context *cc2520, bool enable)
DECL|enable_sfd_interrupt|function|static void enable_sfd_interrupt(struct cc2520_context *cc2520, bool enable)
DECL|fifop_int_handler|function|static inline void fifop_int_handler(struct device *port, struct gpio_callback *cb, u32_t pins)
DECL|flush_rxfifo|function|static inline void flush_rxfifo(struct cc2520_context *cc2520)
DECL|generate_nonce|function|static inline void generate_nonce(u8_t *ccm_nonce, u8_t *nonce, struct cipher_aead_pkt *apkt, u8_t m)
DECL|get_cca|function|static inline u32_t get_cca(struct cc2520_context *cc2520)
DECL|get_fifop|function|static inline u32_t get_fifop(struct cc2520_context *cc2520)
DECL|get_fifo|function|static inline u32_t get_fifo(struct cc2520_context *cc2520)
DECL|get_mac|function|static inline u8_t *get_mac(struct device *dev)
DECL|insert_crypto_parameters|function|static int insert_crypto_parameters(struct cipher_ctx *ctx, struct cipher_aead_pkt *apkt, u8_t *ccm_nonce, u8_t *auth_crypt)
DECL|insert_radio_noise_details|function|static inline void insert_radio_noise_details(struct net_pkt *pkt, u8_t *buf)
DECL|instruct_uccm_ccm|function|static inline bool instruct_uccm_ccm(struct cc2520_context *cc2520, bool uccm, u8_t key_addr, u8_t auth_crypt, u8_t nonce_addr,
DECL|power_on_and_setup|function|static int power_on_and_setup(struct device *dev)
DECL|read_rxfifo_content|function|static inline bool read_rxfifo_content(struct cc2520_context *ctx, struct net_buf *frag, u8_t len)
DECL|read_rxfifo_length|function|static inline u8_t read_rxfifo_length(struct cc2520_context *ctx)
DECL|set_reset|function|static inline void set_reset(struct device *dev, u32_t value)
DECL|set_vreg_en|function|static inline void set_vreg_en(struct device *dev, u32_t value)
DECL|setup_gpio_callbacks|function|static inline void setup_gpio_callbacks(struct device *dev)
DECL|sfd_int_handler|function|static inline void sfd_int_handler(struct device *port, struct gpio_callback *cb, u32_t pins)
DECL|verify_crc|function|static inline bool verify_crc(struct cc2520_context *ctx, struct net_pkt *pkt)
DECL|verify_osc_stabilization|function|static bool verify_osc_stabilization(struct cc2520_context *cc2520)
DECL|verify_rxfifo_validity|function|static inline bool verify_rxfifo_validity(struct cc2520_context *ctx, u8_t pkt_len)
DECL|verify_tx_done|function|static inline bool verify_tx_done(struct cc2520_context *cc2520)
DECL|verify_txfifo_status|function|static inline bool verify_txfifo_status(struct cc2520_context *cc2520,u8_t len)
DECL|write_txfifo_content|function|static inline bool write_txfifo_content(struct cc2520_context *ctx,u8_t *frame, u8_t len)
DECL|write_txfifo_length|function|static inline bool write_txfifo_length(struct cc2520_context *ctx, u8_t len)
