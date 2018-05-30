DECL|DHCPV4_CLIENT_PORT|macro|DHCPV4_CLIENT_PORT
DECL|DHCPV4_INITIAL_DELAY_MAX|macro|DHCPV4_INITIAL_DELAY_MAX
DECL|DHCPV4_INITIAL_DELAY_MIN|macro|DHCPV4_INITIAL_DELAY_MIN
DECL|DHCPV4_INITIAL_RETRY_TIMEOUT|macro|DHCPV4_INITIAL_RETRY_TIMEOUT
DECL|DHCPV4_MAX_NUMBER_OF_ATTEMPTS|macro|DHCPV4_MAX_NUMBER_OF_ATTEMPTS
DECL|DHCPV4_MSG_BOOT_REPLY|macro|DHCPV4_MSG_BOOT_REPLY
DECL|DHCPV4_MSG_BOOT_REQUEST|macro|DHCPV4_MSG_BOOT_REQUEST
DECL|DHCPV4_MSG_BROADCAST|macro|DHCPV4_MSG_BROADCAST
DECL|DHCPV4_MSG_TYPE_ACK|enumerator|DHCPV4_MSG_TYPE_ACK = 5,
DECL|DHCPV4_MSG_TYPE_DECLINE|enumerator|DHCPV4_MSG_TYPE_DECLINE = 4,
DECL|DHCPV4_MSG_TYPE_DISCOVER|enumerator|DHCPV4_MSG_TYPE_DISCOVER = 1,
DECL|DHCPV4_MSG_TYPE_INFORM|enumerator|DHCPV4_MSG_TYPE_INFORM = 8,
DECL|DHCPV4_MSG_TYPE_NAK|enumerator|DHCPV4_MSG_TYPE_NAK = 6,
DECL|DHCPV4_MSG_TYPE_OFFER|enumerator|DHCPV4_MSG_TYPE_OFFER = 2,
DECL|DHCPV4_MSG_TYPE_RELEASE|enumerator|DHCPV4_MSG_TYPE_RELEASE = 7,
DECL|DHCPV4_MSG_TYPE_REQUEST|enumerator|DHCPV4_MSG_TYPE_REQUEST = 3,
DECL|DHCPV4_MSG_UNICAST|macro|DHCPV4_MSG_UNICAST
DECL|DHCPV4_OPTIONS_DNS_SERVER|macro|DHCPV4_OPTIONS_DNS_SERVER
DECL|DHCPV4_OPTIONS_END|macro|DHCPV4_OPTIONS_END
DECL|DHCPV4_OPTIONS_LEASE_TIME|macro|DHCPV4_OPTIONS_LEASE_TIME
DECL|DHCPV4_OPTIONS_MSG_TYPE|macro|DHCPV4_OPTIONS_MSG_TYPE
DECL|DHCPV4_OPTIONS_REBINDING|macro|DHCPV4_OPTIONS_REBINDING
DECL|DHCPV4_OPTIONS_RENEWAL|macro|DHCPV4_OPTIONS_RENEWAL
DECL|DHCPV4_OPTIONS_REQ_IPADDR|macro|DHCPV4_OPTIONS_REQ_IPADDR
DECL|DHCPV4_OPTIONS_REQ_LIST|macro|DHCPV4_OPTIONS_REQ_LIST
DECL|DHCPV4_OPTIONS_ROUTER|macro|DHCPV4_OPTIONS_ROUTER
DECL|DHCPV4_OPTIONS_SERVER_ID|macro|DHCPV4_OPTIONS_SERVER_ID
DECL|DHCPV4_OPTIONS_SUBNET_MASK|macro|DHCPV4_OPTIONS_SUBNET_MASK
DECL|DHCPV4_SERVER_PORT|macro|DHCPV4_SERVER_PORT
DECL|HARDWARE_ETHERNET_LEN|macro|HARDWARE_ETHERNET_LEN
DECL|HARDWARE_ETHERNET_TYPE|macro|HARDWARE_ETHERNET_TYPE
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SIZE_OF_FILE|macro|SIZE_OF_FILE
DECL|SIZE_OF_SNAME|macro|SIZE_OF_SNAME
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|__packed|variable|__packed
DECL|add_cookie|function|static inline bool add_cookie(struct net_pkt *pkt)
DECL|add_end|function|static inline bool add_end(struct net_pkt *pkt)
DECL|add_file|function|static inline bool add_file(struct net_pkt *pkt)
DECL|add_msg_type|function|static bool add_msg_type(struct net_pkt *pkt, u8_t type)
DECL|add_option_length_value|function|static bool add_option_length_value(struct net_pkt *pkt, u8_t option, u8_t size, const u8_t *value)
DECL|add_req_ipaddr|function|static bool add_req_ipaddr(struct net_pkt *pkt, const struct in_addr *addr)
DECL|add_req_options|function|static bool add_req_options(struct net_pkt *pkt)
DECL|add_server_id|function|static bool add_server_id(struct net_pkt *pkt, const struct in_addr *addr)
DECL|add_sname|function|static inline bool add_sname(struct net_pkt *pkt)
DECL|chaddr|member|u8_t chaddr[16]; /* Client hardware address */
DECL|ciaddr|member|u8_t ciaddr[4]; /* Client IP Address */
DECL|dhcp_msg|struct|struct dhcp_msg {
DECL|dhcpv4_init|function|int dhcpv4_init(void)
DECL|dhcpv4_msg_type|enum|enum dhcpv4_msg_type {
DECL|dhcpv4_t1_timeout|function|static void dhcpv4_t1_timeout(struct k_work *work)
DECL|dhcpv4_t2_timeout|function|static void dhcpv4_t2_timeout(struct k_work *work)
DECL|dhcpv4_timeout|function|static void dhcpv4_timeout(struct k_work *work)
DECL|enter_bound|function|static void enter_bound(struct net_if *iface)
DECL|enter_requesting|function|static void enter_requesting(struct net_if *iface)
DECL|enter_selecting|function|static void enter_selecting(struct net_if *iface)
DECL|flags|member|u16_t flags; /* Broadcast or Unicast */
DECL|giaddr|member|u8_t giaddr[4]; /* Relat agent IP address */
DECL|handle_ack|function|static void handle_ack(struct net_if *iface)
DECL|handle_dhcpv4_reply|function|static void handle_dhcpv4_reply(struct net_if *iface,enum dhcpv4_msg_type msg_type)
DECL|handle_nak|function|static void handle_nak(struct net_if *iface)
DECL|handle_offer|function|static inline void handle_offer(struct net_if *iface)
DECL|hlen|member|u8_t hlen; /* Hardware Address length */
DECL|hops|member|u8_t hops; /* used by relay agents when booting via relay
DECL|htype|member|u8_t htype; /* Hardware Address Type */
DECL|iface_event_handler|function|static void iface_event_handler(struct net_mgmt_event_callback *cb,u32_t mgmt_event, struct net_if *iface)
DECL|magic_cookie|variable|magic_cookie
DECL|mgmt4_cb|variable|mgmt4_cb
DECL|net_dhcpv4_input|function|static enum net_verdict net_dhcpv4_input(struct net_conn *conn, struct net_pkt *pkt, void *user_data)
DECL|net_dhcpv4_msg_type_name|function|net_dhcpv4_msg_type_name(enum dhcpv4_msg_type msg_type)
DECL|net_dhcpv4_start|function|void net_dhcpv4_start(struct net_if *iface)
DECL|net_dhcpv4_state_name|function|const char *net_dhcpv4_state_name(enum net_dhcpv4_state state)
DECL|net_dhcpv4_stop|function|void net_dhcpv4_stop(struct net_if *iface)
DECL|op|member|u8_t op; /* Message type, 1:BOOTREQUEST, 2:BOOTREPLY */
DECL|parse_options|function|static enum net_verdict parse_options(struct net_if *iface, struct net_buf *frag, u16_t offset, enum dhcpv4_msg_type *msg_type)
DECL|prepare_message|function|static struct net_pkt *prepare_message(struct net_if *iface, u8_t type, const struct in_addr *ciaddr)
DECL|secs|member|u16_t secs; /* Seconds elapsed since client began address
DECL|send_discover|function|static void send_discover(struct net_if *iface)
DECL|send_request|function|static void send_request(struct net_if *iface)
DECL|setup_header|function|static bool setup_header(struct net_pkt *pkt, const struct in_addr *server_addr)
DECL|siaddr|member|u8_t siaddr[4]; /* IP address of next server to use in bootstrap
DECL|xid|member|u32_t xid; /* Transaction ID, random number */
DECL|yiaddr|member|u8_t yiaddr[4]; /* your (client) IP address */
