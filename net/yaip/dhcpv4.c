DECL|DHCPV4_CLIENT_PORT|macro|DHCPV4_CLIENT_PORT
DECL|DHCPV4_MAX_NUMBER_OF_ATTEMPTS|macro|DHCPV4_MAX_NUMBER_OF_ATTEMPTS
DECL|DHCPV4_MSG_BOOT_REPLY|macro|DHCPV4_MSG_BOOT_REPLY
DECL|DHCPV4_MSG_BOOT_REQUEST|macro|DHCPV4_MSG_BOOT_REQUEST
DECL|DHCPV4_MSG_BROADCAST|macro|DHCPV4_MSG_BROADCAST
DECL|DHCPV4_MSG_TYPE_ACK|macro|DHCPV4_MSG_TYPE_ACK
DECL|DHCPV4_MSG_TYPE_DECLINE|macro|DHCPV4_MSG_TYPE_DECLINE
DECL|DHCPV4_MSG_TYPE_DISCOVER|macro|DHCPV4_MSG_TYPE_DISCOVER
DECL|DHCPV4_MSG_TYPE_INFORM|macro|DHCPV4_MSG_TYPE_INFORM
DECL|DHCPV4_MSG_TYPE_NAK|macro|DHCPV4_MSG_TYPE_NAK
DECL|DHCPV4_MSG_TYPE_OFFER|macro|DHCPV4_MSG_TYPE_OFFER
DECL|DHCPV4_MSG_TYPE_RELEASE|macro|DHCPV4_MSG_TYPE_RELEASE
DECL|DHCPV4_MSG_TYPE_REQUEST|macro|DHCPV4_MSG_TYPE_REQUEST
DECL|DHCPV4_MSG_UNICAST|macro|DHCPV4_MSG_UNICAST
DECL|DHCPV4_OPTIONS_DNS_SERVER|macro|DHCPV4_OPTIONS_DNS_SERVER
DECL|DHCPV4_OPTIONS_END|macro|DHCPV4_OPTIONS_END
DECL|DHCPV4_OPTIONS_LEASE_TIME|macro|DHCPV4_OPTIONS_LEASE_TIME
DECL|DHCPV4_OPTIONS_MSG_TYPE|macro|DHCPV4_OPTIONS_MSG_TYPE
DECL|DHCPV4_OPTIONS_RENEWAL|macro|DHCPV4_OPTIONS_RENEWAL
DECL|DHCPV4_OPTIONS_REQ_IPADDR|macro|DHCPV4_OPTIONS_REQ_IPADDR
DECL|DHCPV4_OPTIONS_REQ_LIST|macro|DHCPV4_OPTIONS_REQ_LIST
DECL|DHCPV4_OPTIONS_ROUTER|macro|DHCPV4_OPTIONS_ROUTER
DECL|DHCPV4_OPTIONS_SERVER_ID|macro|DHCPV4_OPTIONS_SERVER_ID
DECL|DHCPV4_OPTIONS_SUBNET_MASK|macro|DHCPV4_OPTIONS_SUBNET_MASK
DECL|DHCPV4_SERVER_PORT|macro|DHCPV4_SERVER_PORT
DECL|HARDWARE_ETHERNET_LEN|macro|HARDWARE_ETHERNET_LEN
DECL|HARDWARE_ETHERNET_TYPE|macro|HARDWARE_ETHERNET_TYPE
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|SIZE_OF_FILE|macro|SIZE_OF_FILE
DECL|SIZE_OF_SNAME|macro|SIZE_OF_SNAME
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|__packed|variable|__packed
DECL|add_cookie|function|static inline bool add_cookie(struct net_buf *buf)
DECL|add_end|function|static inline bool add_end(struct net_buf *buf)
DECL|add_file|function|static inline bool add_file(struct net_buf *buf)
DECL|add_msg_type|function|static inline bool add_msg_type(struct net_buf *buf, uint8_t type)
DECL|add_req_ipaddr|function|static inline bool add_req_ipaddr(struct net_buf *buf)
DECL|add_req_options|function|static inline bool add_req_options(struct net_buf *buf)
DECL|add_server_id|function|static inline bool add_server_id(struct net_buf *buf)
DECL|add_sname|function|static inline bool add_sname(struct net_buf *buf)
DECL|chaddr|member|uint8_t chaddr[16]; /* Client hardware address */
DECL|ciaddr|member|uint8_t ciaddr[4]; /* Client IP Address */
DECL|dhcp_msg|struct|struct dhcp_msg {
DECL|dhcpv4_t1_timeout|function|static void dhcpv4_t1_timeout(struct nano_work *work)
DECL|dhcpv4_timeout|function|static void dhcpv4_timeout(struct nano_work *work)
DECL|flags|member|uint16_t flags; /* Broadcast or Unicast */
DECL|get_dhcpv4_renewal_time|function|static inline uint32_t get_dhcpv4_renewal_time(struct net_if *iface)
DECL|get_dhcpv4_timeout|function|static inline uint32_t get_dhcpv4_timeout(void)
DECL|giaddr|member|uint8_t giaddr[4]; /* Relat agent IP address */
DECL|handle_dhcpv4_reply|function|static inline void handle_dhcpv4_reply(struct net_if *iface, uint8_t msg_type)
DECL|hlen|member|uint8_t hlen; /* Hardware Address length */
DECL|hops|member|uint8_t hops; /* used by relay agents when booting via relay
DECL|htype|member|uint8_t htype; /* Hardware Address Type */
DECL|magic_cookie|variable|magic_cookie
DECL|net_dhcpv4_input|function|static enum net_verdict net_dhcpv4_input(struct net_conn *conn, struct net_buf *buf, void *user_data)
DECL|net_dhcpv4_start|function|void net_dhcpv4_start(struct net_if *iface)
DECL|op|member|uint8_t op; /* Message type, 1:BOOTREQUEST, 2:BOOTREPLY */
DECL|parse_options|function|static enum net_verdict parse_options(struct net_if *iface, struct net_buf *buf, uint16_t offset, uint8_t *msg_type)
DECL|prepare_message|function|static struct net_buf *prepare_message(struct net_if *iface, uint8_t type)
DECL|secs|member|uint16_t secs; /* Seconds elapsed since client began address
DECL|send_discover|function|static void send_discover(struct net_if *iface)
DECL|send_request|function|static void send_request(struct net_if *iface, bool renewal)
DECL|setup_header|function|static void setup_header(struct net_buf *buf)
DECL|siaddr|member|uint8_t siaddr[4]; /* IP address of next server to use in bootstrap
DECL|unset_dhcpv4_on_iface|function|static inline void unset_dhcpv4_on_iface(struct net_if *iface)
DECL|xid|member|uint8_t xid[4]; /* Transaction ID, random number */
DECL|yiaddr|member|uint8_t yiaddr[4]; /* your (client) IP address */
