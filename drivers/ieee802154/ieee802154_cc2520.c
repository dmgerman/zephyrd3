DECL|CC2520_AUTOMATISM|macro|CC2520_AUTOMATISM
DECL|CC2520_AUTOMATISM|macro|CC2520_AUTOMATISM
DECL|CC2520_AUTOMATISM|macro|CC2520_AUTOMATISM
DECL|CC2520_FCS_LENGTH|macro|CC2520_FCS_LENGTH
DECL|CC2520_FRAME_FILTERING|macro|CC2520_FRAME_FILTERING
DECL|CC2520_FRAME_FILTERING|macro|CC2520_FRAME_FILTERING
DECL|CC2520_TX_THRESHOLD|macro|CC2520_TX_THRESHOLD
DECL|CONFIG_NETWORKING_LEGACY_RADIO_DRIVER|macro|CONFIG_NETWORKING_LEGACY_RADIO_DRIVER
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
DECL|_usleep|function|static void _usleep(uint32_t usec)
DECL|cc2520_15_4_radio_driver|variable|cc2520_15_4_radio_driver
DECL|cc2520_channel_clear|function|static int cc2520_channel_clear(void)
DECL|cc2520_context_data|variable|cc2520_context_data
DECL|cc2520_get_mac|function|static const uint8_t *cc2520_get_mac(struct device *dev)
DECL|cc2520_get_object|function|static radio_result_t cc2520_get_object(radio_param_t param,void *dest, size_t size)
DECL|cc2520_get_value|function|static radio_result_t cc2520_get_value(radio_param_t param, radio_value_t *value)
DECL|cc2520_initialize|function|static int cc2520_initialize(void)
DECL|cc2520_init|function|int cc2520_init(struct device *dev)
DECL|cc2520_off|function|static int cc2520_off(void)
DECL|cc2520_on|function|static int cc2520_on(void)
DECL|cc2520_pending_packet|function|static int cc2520_pending_packet(void)
DECL|cc2520_prepare|function|static int cc2520_prepare(const void *payload, unsigned short payload_len)
DECL|cc2520_read|function|static int cc2520_read(void *buf, unsigned short buf_len)
DECL|cc2520_receiving_packet|function|static int cc2520_receiving_packet(void)
DECL|cc2520_rx|function|static void cc2520_rx(int arg, int unused2)
DECL|cc2520_send|function|static int cc2520_send(struct net_buf *buf, const void *payload, unsigned short payload_len)
DECL|cc2520_set_channel|function|static int cc2520_set_channel(struct device *dev, uint16_t channel)
DECL|cc2520_set_ieee_addr|function|static int cc2520_set_ieee_addr(struct device *dev, const uint8_t *ieee_addr)
DECL|cc2520_set_object|function|static radio_result_t cc2520_set_object(radio_param_t param,const void *src, size_t size)
DECL|cc2520_set_pan_id|function|static int cc2520_set_pan_id(struct device *dev, uint16_t pan_id)
DECL|cc2520_set_short_addr|function|static int cc2520_set_short_addr(struct device *dev, uint16_t short_addr)
DECL|cc2520_set_txpower|function|static int cc2520_set_txpower(struct device *dev, short dbm)
DECL|cc2520_set_value|function|static radio_result_t cc2520_set_value(radio_param_t param, radio_value_t value)
DECL|cc2520_sglt|variable|cc2520_sglt
DECL|cc2520_start|function|static int cc2520_start(struct device *dev)
DECL|cc2520_stop|function|static int cc2520_stop(struct device *dev)
DECL|cc2520_transmit|function|static int cc2520_transmit(struct net_buf *buf, unsigned short transmit_len)
DECL|cc2520_tx|function|static int cc2520_tx(struct device *dev, struct net_buf *buf)
DECL|configure_spi|function|static inline int configure_spi(struct device *dev)
DECL|enable_fifop_interrupt|function|static void enable_fifop_interrupt(struct cc2520_context *cc2520, bool enable)
DECL|enable_reception|function|static inline void enable_reception(struct cc2520_context *cc2520)
DECL|enable_sfd_interrupt|function|static void enable_sfd_interrupt(struct cc2520_context *cc2520, bool enable)
DECL|fifop_int_handler|function|static inline void fifop_int_handler(struct device *port, uint32_t pin)
DECL|flush_rxfifo|function|static inline void flush_rxfifo(struct cc2520_context *cc2520)
DECL|get_cca|function|static inline uint32_t get_cca(struct cc2520_context *cc2520)
DECL|get_fifop|function|static inline uint32_t get_fifop(struct cc2520_context *cc2520)
DECL|get_fifo|function|static inline uint32_t get_fifo(struct cc2520_context *cc2520)
DECL|gpio_int_handler|function|static void gpio_int_handler(struct device *port, uint32_t pin)
DECL|power_on_and_setup|function|static int power_on_and_setup(struct device *dev)
DECL|read_rxfifo_content|function|static inline bool read_rxfifo_content(struct cc2520_spi *spi, struct net_buf *buf, uint8_t len)
DECL|read_rxfifo_footer|function|static inline bool read_rxfifo_footer(struct cc2520_spi *spi, uint8_t *buf, uint8_t len)
DECL|read_rxfifo_length|function|static inline uint8_t read_rxfifo_length(struct cc2520_spi *spi)
DECL|set_reset|function|static inline void set_reset(struct device *dev, uint32_t value)
DECL|set_vreg_en|function|static inline void set_vreg_en(struct device *dev, uint32_t value)
DECL|setup_gpio_callbacks|function|static inline void setup_gpio_callbacks(struct device *dev)
DECL|sfd_int_handler|function|static inline void sfd_int_handler(struct device *port, uint32_t pin)
DECL|verify_osc_stabilization|function|static bool verify_osc_stabilization(struct cc2520_context *cc2520)
DECL|verify_rxfifo_validity|function|static inline bool verify_rxfifo_validity(struct cc2520_spi *spi, uint8_t pkt_len)
DECL|verify_tx_done|function|static inline bool verify_tx_done(struct cc2520_context *cc2520)
DECL|verify_txfifo_status|function|static inline bool verify_txfifo_status(struct cc2520_context *cc2520,struct net_buf *buf)
DECL|write_txfifo_content|function|static inline bool write_txfifo_content(struct cc2520_spi *spi,struct net_buf *buf)
DECL|write_txfifo_length|function|static inline bool write_txfifo_length(struct cc2520_spi *spi, struct net_buf *buf)
