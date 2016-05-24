DECL|BOOTP_BROADCAST|macro|BOOTP_BROADCAST
DECL|BOOTP_UNICAST|macro|BOOTP_UNICAST
DECL|DEBUG|macro|DEBUG
DECL|DHCPACK|macro|DHCPACK
DECL|DHCPC_CLIENT_PORT|macro|DHCPC_CLIENT_PORT
DECL|DHCPC_SERVER_PORT|macro|DHCPC_SERVER_PORT
DECL|DHCPDECLINE|macro|DHCPDECLINE
DECL|DHCPDISCOVER|macro|DHCPDISCOVER
DECL|DHCPNAK|macro|DHCPNAK
DECL|DHCPOFFER|macro|DHCPOFFER
DECL|DHCPRELEASE|macro|DHCPRELEASE
DECL|DHCPREQUEST|macro|DHCPREQUEST
DECL|DHCP_HLEN_ETHERNET|macro|DHCP_HLEN_ETHERNET
DECL|DHCP_HTYPE_ETHERNET|macro|DHCP_HTYPE_ETHERNET
DECL|DHCP_MSG_LEN|macro|DHCP_MSG_LEN
DECL|DHCP_OPTION_DNS_SERVER|macro|DHCP_OPTION_DNS_SERVER
DECL|DHCP_OPTION_END|macro|DHCP_OPTION_END
DECL|DHCP_OPTION_LEASE_TIME|macro|DHCP_OPTION_LEASE_TIME
DECL|DHCP_OPTION_MSG_TYPE|macro|DHCP_OPTION_MSG_TYPE
DECL|DHCP_OPTION_REQ_IPADDR|macro|DHCP_OPTION_REQ_IPADDR
DECL|DHCP_OPTION_REQ_LIST|macro|DHCP_OPTION_REQ_LIST
DECL|DHCP_OPTION_ROUTER|macro|DHCP_OPTION_ROUTER
DECL|DHCP_OPTION_SERVER_ID|macro|DHCP_OPTION_SERVER_ID
DECL|DHCP_OPTION_SUBNET_MASK|macro|DHCP_OPTION_SUBNET_MASK
DECL|DHCP_REPLY|macro|DHCP_REPLY
DECL|DHCP_REQUEST|macro|DHCP_REQUEST
DECL|IMIN|macro|IMIN
DECL|MAX_TICKS32|macro|MAX_TICKS32
DECL|MAX_TICKS|macro|MAX_TICKS
DECL|PROCESS_THREAD|function|PROCESS_THREAD(dhcp_process, ev, data, buf, user_data)
DECL|STATE_CONFIG_RECEIVED|macro|STATE_CONFIG_RECEIVED
DECL|STATE_INITIAL|macro|STATE_INITIAL
DECL|STATE_OFFER_RECEIVED|macro|STATE_OFFER_RECEIVED
DECL|STATE_SENDING|macro|STATE_SENDING
DECL|__packed|variable|__packed
DECL|add_end|function|add_end(uint8_t *optptr)
DECL|add_msg_type|function|add_msg_type(uint8_t *optptr, uint8_t type)
DECL|add_req_ipaddr|function|add_req_ipaddr(uint8_t *optptr)
DECL|add_req_options|function|add_req_options(uint8_t *optptr)
DECL|add_server_id|function|add_server_id(uint8_t *optptr)
DECL|chaddr|member|uint8_t chaddr[16];
DECL|ciaddr|member|uint8_t ciaddr[4];
DECL|configure_cb|variable|configure_cb
DECL|configure_dhcpc|function|configure_dhcpc(struct dhcpc_state *s)
DECL|create_msg|function|create_msg(struct dhcp_msg *m)
DECL|dhcp_msg|struct|struct dhcp_msg {
DECL|dhcpc_appcall|function|dhcpc_appcall(process_event_t ev, struct net_buf *buf)
DECL|dhcpc_init|function|dhcpc_init(const void *mac_addr, int mac_len)
DECL|dhcpc_set_callbacks|function|void dhcpc_set_callbacks(dhcpc_configured conf, dhcpc_unconfigured unconf)
DECL|file|member|uint8_t file[128];
DECL|flags|member|uint16_t secs, flags;
DECL|giaddr|member|uint8_t giaddr[4];
DECL|hlen|member|uint8_t op, htype, hlen, hops;
DECL|hops|member|uint8_t op, htype, hlen, hops;
DECL|htype|member|uint8_t op, htype, hlen, hops;
DECL|magic_cookie|variable|magic_cookie
DECL|msg_for_dhcpc|function|int msg_for_dhcpc(struct net_buf *buf)
DECL|msg_for_me|function|msg_for_me(struct net_buf *buf)
DECL|options|member|uint8_t options[312];
DECL|op|member|uint8_t op, htype, hlen, hops;
DECL|parse_msg|function|parse_msg(struct net_buf *buf)
DECL|parse_options|function|parse_options(uint8_t *optptr, int len)
DECL|secs|member|uint16_t secs, flags;
DECL|send_discover|function|send_discover(void)
DECL|send_request|function|send_request(void)
DECL|siaddr|member|uint8_t siaddr[4];
DECL|sname|member|uint8_t sname[64];
DECL|s|variable|s
DECL|unconfigure_cb|variable|unconfigure_cb
DECL|unconfigure_dhcpc|function|unconfigure_dhcpc(struct dhcpc_state *s)
DECL|xid|member|uint8_t xid[4];
DECL|xid|variable|xid
DECL|yiaddr|member|uint8_t yiaddr[4];
