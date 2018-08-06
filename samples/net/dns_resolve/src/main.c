DECL|DNS_TIMEOUT|macro|DNS_TIMEOUT
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|dns_result_cb|function|void dns_result_cb(enum dns_resolve_status status, struct dns_addrinfo *info, void *user_data)
DECL|do_ipv4_lookup|function|static void do_ipv4_lookup(struct k_work *work)
DECL|do_ipv6_lookup|function|static void do_ipv6_lookup(void)
DECL|do_mdns_ipv4_lookup|function|static void do_mdns_ipv4_lookup(struct k_work *work)
DECL|do_mdns_ipv6_lookup|function|static void do_mdns_ipv6_lookup(struct k_work *work)
DECL|ipv4_addr_add_handler|function|static void ipv4_addr_add_handler(struct net_mgmt_event_callback *cb, u32_t mgmt_event, struct net_if *iface)
DECL|ipv4_timer|variable|ipv4_timer
DECL|main|function|void main(void)
DECL|mdns_ipv4_timer|variable|mdns_ipv4_timer
DECL|mdns_ipv6_timer|variable|mdns_ipv6_timer
DECL|mdns_result_cb|function|void mdns_result_cb(enum dns_resolve_status status, struct dns_addrinfo *info, void *user_data)
DECL|mgmt4_cb|variable|mgmt4_cb
DECL|setup_dhcpv4|function|static void setup_dhcpv4(struct net_if *iface)
DECL|setup_dhcpv4|macro|setup_dhcpv4
DECL|setup_ipv4|function|static void setup_ipv4(struct net_if *iface)
DECL|setup_ipv4|macro|setup_ipv4
DECL|setup_ipv6|function|static void setup_ipv6(struct net_if *iface)
DECL|setup_ipv6|macro|setup_ipv6
