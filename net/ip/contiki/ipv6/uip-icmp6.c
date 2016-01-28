DECL|DEBUG|macro|DEBUG
DECL|UIP_EXT_BUF|macro|UIP_EXT_BUF
DECL|UIP_FIRST_EXT_BUF|macro|UIP_FIRST_EXT_BUF
DECL|UIP_ICMP6_ERROR_BUF|macro|UIP_ICMP6_ERROR_BUF
DECL|UIP_ICMP_BUF|macro|UIP_ICMP_BUF
DECL|UIP_IP_BUF|macro|UIP_IP_BUF
DECL|echo_reply_callback_list|variable|echo_reply_callback_list
DECL|echo_reply_input|function|echo_reply_input(struct net_buf *buf)
DECL|echo_request_input|function|echo_request_input(struct net_buf *buf)
DECL|input_handler_list|variable|input_handler_list
DECL|input_handler_lookup|function|input_handler_lookup(uint8_t type, uint8_t icode)
DECL|uip_icmp6_echo_reply_callback_add|function|uip_icmp6_echo_reply_callback_add(struct uip_icmp6_echo_reply_notification *n, uip_icmp6_echo_reply_callback_t c)
DECL|uip_icmp6_echo_reply_callback_rm|function|uip_icmp6_echo_reply_callback_rm(struct uip_icmp6_echo_reply_notification *n)
DECL|uip_icmp6_error_output|function|uip_icmp6_error_output(struct net_buf *buf, uint8_t type, uint8_t code, uint32_t param) {
DECL|uip_icmp6_init|function|uip_icmp6_init()
DECL|uip_icmp6_input|function|uip_icmp6_input(struct net_buf *buf, uint8_t type, uint8_t icode)
DECL|uip_icmp6_register_input_handler|function|uip_icmp6_register_input_handler(uip_icmp6_input_handler_t *handler)
DECL|uip_icmp6_send|function|uip_icmp6_send(struct net_buf *buf, const uip_ipaddr_t *dest, int type, int code, int payload_len)
