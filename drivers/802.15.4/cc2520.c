DECL|AUTOACK|macro|AUTOACK
DECL|AUTOCRC|macro|AUTOCRC
DECL|BUSYWAIT_UNTIL|macro|BUSYWAIT_UNTIL
DECL|CC2520_CCA_IS_1|macro|CC2520_CCA_IS_1
DECL|CC2520_CLEAR_FIFOP_INT|macro|CC2520_CLEAR_FIFOP_INT
DECL|CC2520_CONF_AUTOACK|macro|CC2520_CONF_AUTOACK
DECL|CC2520_DISABLE_FIFOP_INT|macro|CC2520_DISABLE_FIFOP_INT
DECL|CC2520_ENABLE_FIFOP_INT|macro|CC2520_ENABLE_FIFOP_INT
DECL|CC2520_FIFOP_INT_INIT|macro|CC2520_FIFOP_INT_INIT
DECL|CC2520_FIFOP_IS_1|macro|CC2520_FIFOP_IS_1
DECL|CC2520_FIFO_IS_1|macro|CC2520_FIFO_IS_1
DECL|CC2520_SFD_IS_1|macro|CC2520_SFD_IS_1
DECL|CC2520_STROBE_PLUS_NOP|macro|CC2520_STROBE_PLUS_NOP
DECL|CORR_THR|macro|CORR_THR
DECL|FIFOP_THR|macro|FIFOP_THR
DECL|FOOTER1_CORRELATION|macro|FOOTER1_CORRELATION
DECL|FOOTER1_CRC_OK|macro|FOOTER1_CRC_OK
DECL|FOOTER_LEN|macro|FOOTER_LEN
DECL|FRAME_FILTER_ENABLE|macro|FRAME_FILTER_ENABLE
DECL|FRAME_MAX_VERSION|macro|FRAME_MAX_VERSION
DECL|SET_RESET_ACTIVE|macro|SET_RESET_ACTIVE
DECL|SET_RESET_INACTIVE|macro|SET_RESET_INACTIVE
DECL|SET_VREG_ACTIVE|macro|SET_VREG_ACTIVE
DECL|SET_VREG_INACTIVE|macro|SET_VREG_INACTIVE
DECL|WAIT_1000ms|macro|WAIT_1000ms
DECL|WAIT_100ms|macro|WAIT_100ms
DECL|WAIT_10ms|macro|WAIT_10ms
DECL|WAIT_1ms|macro|WAIT_1ms
DECL|WAIT_200ms|macro|WAIT_200ms
DECL|WITH_SEND_CCA|macro|WITH_SEND_CCA
DECL|cc2520_15_4_radio_driver|variable|cc2520_15_4_radio_driver
DECL|cc2520_cca_valid|function|int cc2520_cca_valid(void)
DECL|cc2520_cca|function|static int cc2520_cca(void)
DECL|cc2520_configure|function|static void cc2520_configure(struct device *dev)
DECL|cc2520_config|variable|cc2520_config
DECL|cc2520_contiki_init|function|static int cc2520_contiki_init(void)
DECL|cc2520_get_channel|function|int cc2520_get_channel(void)
DECL|cc2520_get_txpower|function|int cc2520_get_txpower(void)
DECL|cc2520_get_value|function|radio_result_t cc2520_get_value(radio_param_t param, radio_value_t *value)
DECL|cc2520_gpio_config|variable|cc2520_gpio_config
DECL|cc2520_gpio_int_handler|function|static void cc2520_gpio_int_handler(struct device *port, uint32_t pin)
DECL|cc2520_init|function|static int cc2520_init(struct device *dev)
DECL|cc2520_last_correlation|variable|cc2520_last_correlation
DECL|cc2520_last_rssi|variable|cc2520_last_rssi
DECL|cc2520_off|function|static int cc2520_off(void)
DECL|cc2520_on|function|int cc2520_on(void)
DECL|cc2520_packets_read|variable|cc2520_packets_read
DECL|cc2520_packets_seen|variable|cc2520_packets_seen
DECL|cc2520_pending_packet|function|static inline int cc2520_pending_packet(void)
DECL|cc2520_prepare|function|static int cc2520_prepare(const void *payload, unsigned short payload_len)
DECL|cc2520_print_gpio_config|function|static void cc2520_print_gpio_config(void)
DECL|cc2520_print_gpio_config|macro|cc2520_print_gpio_config
DECL|cc2520_read_fifo_byte|function|static bool cc2520_read_fifo_byte(uint8_t *byte)
DECL|cc2520_read|function|static int cc2520_read(void *buf, unsigned short bufsize)
DECL|cc2520_receiving_packet|function|static inline int cc2520_receiving_packet(void)
DECL|cc2520_rssi|function|int cc2520_rssi(void)
DECL|cc2520_send|function|static int cc2520_send(struct net_buf *buf, const void *payload, unsigned short payload_len)
DECL|cc2520_set_cca_threshold|function|void cc2520_set_cca_threshold(int value)
DECL|cc2520_set_channel|function|int cc2520_set_channel(int c)
DECL|cc2520_set_pan_addr|function|bool cc2520_set_pan_addr(unsigned pan, unsigned addr, const uint8_t *ieee_addr)
DECL|cc2520_set_rx_mode|function|static radio_result_t cc2520_set_rx_mode(radio_value_t value)
DECL|cc2520_set_txpower|function|void cc2520_set_txpower(uint8_t power)
DECL|cc2520_set_value|function|radio_result_t cc2520_set_value(radio_param_t param, radio_value_t value)
DECL|cc2520_sfd_counter|variable|cc2520_sfd_counter
DECL|cc2520_sfd_end_time|variable|cc2520_sfd_end_time
DECL|cc2520_sfd_start_time|variable|cc2520_sfd_start_time
DECL|cc2520_sgl_dev|variable|cc2520_sgl_dev
DECL|cc2520_transmit|function|static int cc2520_transmit(struct net_buf *buf, unsigned short payload_len)
DECL|channel|variable|channel
DECL|clear_exceptions|function|static void clear_exceptions(void)
DECL|clear_exceptions|macro|clear_exceptions
DECL|flushrx|function|static void flushrx(void)
DECL|get_object|function|static radio_result_t get_object(radio_param_t param, void *dest, size_t size)
DECL|getreg|function|static uint8_t getreg(uint16_t regname)
DECL|getrxbyte|function|static void getrxbyte(uint8_t *byte)
DECL|getrxdata|function|static void getrxdata(void *buf, int len)
DECL|init_ok|variable|init_ok
DECL|last_packet_timestamp|variable|last_packet_timestamp
DECL|off|function|static void off(void)
DECL|on|function|static void on(void)
DECL|print_errors|function|static inline void print_errors(void)
DECL|print_errors|macro|print_errors
DECL|print_exceptions_0|function|static inline void print_exceptions_0(void)
DECL|print_exceptions_0|macro|print_exceptions_0
DECL|print_exceptions_1|function|static inline void print_exceptions_1(void)
DECL|print_exceptions_1|macro|print_exceptions_1
DECL|print_radio_status|function|static void print_radio_status(void)
DECL|print_radio_status|macro|print_radio_status
DECL|read_packet_debug|function|static void read_packet_debug(const char *caller)
DECL|read_packet|macro|read_packet
DECL|receive_on|variable|receive_on
DECL|set_object|function|static radio_result_t set_object(radio_param_t param, const void *src, size_t size)
DECL|set_txpower|function|static void set_txpower(uint8_t power)
DECL|setreg|function|static void setreg(uint16_t regname, uint8_t value)
DECL|status|function|static inline unsigned int status(void)
DECL|strobe|function|static inline bool strobe(uint8_t regname)
