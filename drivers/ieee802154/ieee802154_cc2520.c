DECL|CC2520_AUTOMATISM|macro|CC2520_AUTOMATISM
DECL|CC2520_FCS_LENGTH|macro|CC2520_FCS_LENGTH
DECL|CC2520_TX_THRESHOLD|macro|CC2520_TX_THRESHOLD
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|SYS_LOG_NO_NEWLINE|macro|SYS_LOG_NO_NEWLINE
DECL|_cc2520_print_errors|function|static inline void _cc2520_print_errors(struct cc2520_context *cc2520)
DECL|_cc2520_print_errors|macro|_cc2520_print_errors
DECL|_cc2520_print_exceptions|function|static inline void _cc2520_print_exceptions(struct cc2520_context *cc2520)
DECL|_cc2520_print_exceptions|macro|_cc2520_print_exceptions
DECL|_cc2520_print_gpio_config|function|static inline void _cc2520_print_gpio_config(struct device *dev)
DECL|_cc2520_print_gpio_config|macro|_cc2520_print_gpio_config
DECL|_cc2520_read_reg|function|uint8_t _cc2520_read_reg(struct cc2520_spi *spi, bool freg, uint8_t addr)
DECL|_cc2520_status|function|static uint8_t _cc2520_status(struct cc2520_spi *spi)
DECL|_cc2520_write_ram|function|bool _cc2520_write_ram(struct cc2520_spi *spi, uint16_t addr, uint8_t *data_buf, uint8_t len)
DECL|_cc2520_write_reg|function|bool _cc2520_write_reg(struct cc2520_spi *spi, bool freg, uint8_t addr, uint8_t value)
DECL|_usleep|macro|_usleep
DECL|cc2520_cca|function|static int cc2520_cca(struct device *dev)
DECL|cc2520_context_data|variable|cc2520_context_data
DECL|cc2520_get_lqi|function|static uint8_t cc2520_get_lqi(struct device *dev)
DECL|cc2520_iface_init|function|static void cc2520_iface_init(struct net_if *iface)
DECL|cc2520_init|function|static int cc2520_init(struct device *dev)
DECL|cc2520_radio_api|variable|cc2520_radio_api
DECL|cc2520_rx|function|static void cc2520_rx(int arg)
DECL|cc2520_set_channel|function|static int cc2520_set_channel(struct device *dev, uint16_t channel)
DECL|cc2520_set_ieee_addr|function|static int cc2520_set_ieee_addr(struct device *dev, const uint8_t *ieee_addr)
DECL|cc2520_set_pan_id|function|static int cc2520_set_pan_id(struct device *dev, uint16_t pan_id)
DECL|cc2520_set_short_addr|function|static int cc2520_set_short_addr(struct device *dev, uint16_t short_addr)
DECL|cc2520_set_txpower|function|static int cc2520_set_txpower(struct device *dev, int16_t dbm)
DECL|cc2520_start|function|static int cc2520_start(struct device *dev)
DECL|cc2520_stop|function|static int cc2520_stop(struct device *dev)
DECL|cc2520_tx|function|static int cc2520_tx(struct device *dev, struct net_buf *buf)
DECL|configure_spi|function|static inline int configure_spi(struct device *dev)
DECL|enable_fifop_interrupt|function|static void enable_fifop_interrupt(struct cc2520_context *cc2520, bool enable)
DECL|enable_sfd_interrupt|function|static void enable_sfd_interrupt(struct cc2520_context *cc2520, bool enable)
DECL|fifop_int_handler|function|static inline void fifop_int_handler(struct device *port, struct gpio_callback *cb, uint32_t pins)
DECL|flush_rxfifo|function|static inline void flush_rxfifo(struct cc2520_context *cc2520)
DECL|get_cca|function|static inline uint32_t get_cca(struct cc2520_context *cc2520)
DECL|get_fifop|function|static inline uint32_t get_fifop(struct cc2520_context *cc2520)
DECL|get_fifo|function|static inline uint32_t get_fifo(struct cc2520_context *cc2520)
DECL|get_mac|function|static inline uint8_t *get_mac(struct device *dev)
DECL|power_on_and_setup|function|static int power_on_and_setup(struct device *dev)
DECL|read_rxfifo_content|function|static inline bool read_rxfifo_content(struct cc2520_spi *spi, struct net_buf *buf, uint8_t len)
DECL|read_rxfifo_length|function|static inline uint8_t read_rxfifo_length(struct cc2520_spi *spi)
DECL|set_reset|function|static inline void set_reset(struct device *dev, uint32_t value)
DECL|set_vreg_en|function|static inline void set_vreg_en(struct device *dev, uint32_t value)
DECL|setup_gpio_callbacks|function|static inline void setup_gpio_callbacks(struct device *dev)
DECL|sfd_int_handler|function|static inline void sfd_int_handler(struct device *port, struct gpio_callback *cb, uint32_t pins)
DECL|verify_crc|function|static inline bool verify_crc(struct cc2520_context *cc2520)
DECL|verify_osc_stabilization|function|static bool verify_osc_stabilization(struct cc2520_context *cc2520)
DECL|verify_rxfifo_validity|function|static inline bool verify_rxfifo_validity(struct cc2520_spi *spi, uint8_t pkt_len)
DECL|verify_tx_done|function|static inline bool verify_tx_done(struct cc2520_context *cc2520)
DECL|verify_txfifo_status|function|static inline bool verify_txfifo_status(struct cc2520_context *cc2520,struct net_buf *buf)
DECL|write_txfifo_content|function|static inline bool write_txfifo_content(struct cc2520_spi *spi,struct net_buf *buf)
DECL|write_txfifo_length|function|static inline bool write_txfifo_length(struct cc2520_spi *spi, struct net_buf *buf)
