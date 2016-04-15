DECL|ACK_LEN|macro|ACK_LEN
DECL|DEBUG|macro|DEBUG
DECL|SIMPLERDC_MAX_RETRANSMISSIONS|macro|SIMPLERDC_MAX_RETRANSMISSIONS
DECL|ack_lock|variable|ack_lock
DECL|ack_received|variable|ack_received
DECL|channel_check_interval|function|static unsigned short channel_check_interval(void)
DECL|check_duplicate|function|static inline bool check_duplicate(struct net_buf *buf)
DECL|check_duplicate|macro|check_duplicate
DECL|handle_ack_packet|function|static inline bool handle_ack_packet(struct net_buf *buf)
DECL|init|function|static void init(void)
DECL|input_packet|function|static uint8_t input_packet(struct net_buf *buf)
DECL|off|function|static int off(int keep_radio_on)
DECL|on|function|static int on(void)
DECL|prepare_for_ack|function|static inline bool prepare_for_ack(struct net_buf *buf)
DECL|prepare_packet|function|static inline uint8_t prepare_packet(struct net_buf *buf)
DECL|send_ack_packet|function|static inline bool send_ack_packet(struct net_buf *buf, uint8_t *status)
DECL|send_ack_packet|macro|send_ack_packet
DECL|send_packet_list|function|static uint8_t send_packet_list(struct net_buf *buf,mac_callback_t sent_callback, void *ptr, struct rdc_buf_list *list)
DECL|send_packet|function|static uint8_t send_packet(struct net_buf *buf, mac_callback_t sent_callback, void *ptr)
DECL|simplerdc_driver|variable|simplerdc_driver
DECL|wait_for_ack|function|static inline uint8_t wait_for_ack(bool broadcast, bool ack_required)
