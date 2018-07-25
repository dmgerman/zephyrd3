DECL|NET_DEVICE_INIT_INSTANCE|macro|NET_DEVICE_INIT_INSTANCE
DECL|NET_DEVICE_INIT|macro|NET_DEVICE_INIT
DECL|NET_DEVICE_OFFLOAD_INIT|macro|NET_DEVICE_OFFLOAD_INIT
DECL|NET_IF_CONFIG_INIT|macro|NET_IF_CONFIG_INIT
DECL|NET_IF_DEV_GET_NAME|macro|NET_IF_DEV_GET_NAME
DECL|NET_IF_DHCPV4_INIT|macro|NET_IF_DHCPV4_INIT
DECL|NET_IF_DHCPV4_INIT|macro|NET_IF_DHCPV4_INIT
DECL|NET_IF_GET_NAME|macro|NET_IF_GET_NAME
DECL|NET_IF_GET|macro|NET_IF_GET
DECL|NET_IF_INIT|macro|NET_IF_INIT
DECL|NET_IF_MAX_CONFIGS|macro|NET_IF_MAX_CONFIGS
DECL|NET_IF_MAX_IPV4_ADDR|macro|NET_IF_MAX_IPV4_ADDR
DECL|NET_IF_MAX_IPV4_MADDR|macro|NET_IF_MAX_IPV4_MADDR
DECL|NET_IF_MAX_IPV6_ADDR|macro|NET_IF_MAX_IPV6_ADDR
DECL|NET_IF_MAX_IPV6_MADDR|macro|NET_IF_MAX_IPV6_MADDR
DECL|NET_IF_MAX_IPV6_PREFIX|macro|NET_IF_MAX_IPV6_PREFIX
DECL|NET_IF_NUM_FLAGS|enumerator|NET_IF_NUM_FLAGS
DECL|NET_IF_OFFLOAD_INIT|macro|NET_IF_OFFLOAD_INIT
DECL|NET_IF_POINTOPOINT|enumerator|NET_IF_POINTOPOINT,
DECL|NET_IF_PROMISC|enumerator|NET_IF_PROMISC,
DECL|NET_IF_UP|enumerator|NET_IF_UP,
DECL|__NET_IF_H__|macro|__NET_IF_H__
DECL|__net_if_align|macro|__net_if_align
DECL|__net_if_align|variable|__net_if_align
DECL|_unused|member|u8_t _unused : 6;
DECL|addr_state|member|enum net_addr_state addr_state;
DECL|addr_type|member|enum net_addr_type addr_type;
DECL|address|member|struct net_addr address;
DECL|address|member|struct net_addr address;
DECL|address|member|struct net_addr address;
DECL|attempts|member|u8_t attempts;
DECL|base_reachable_time|member|u32_t base_reachable_time;
DECL|cb|member|net_if_link_callback_t cb;
DECL|cb|member|net_if_mcast_callback_t cb;
DECL|cb|member|net_if_timestamp_callback_t cb;
DECL|config|member|struct net_if_config config;
DECL|dad_count|member|u8_t dad_count;
DECL|dad_count|member|u8_t dad_count;
DECL|dad_timer|member|struct k_delayed_work dad_timer;
DECL|dev|member|struct device *dev;
DECL|dhcpv4|member|struct net_if_dhcpv4 dhcpv4;
DECL|gw|member|struct in_addr gw;
DECL|hop_limit|member|u8_t hop_limit;
DECL|if_dev|member|struct net_if_dev *if_dev;
DECL|iface|member|struct net_if *iface;
DECL|iface|member|struct net_if *iface;
DECL|iface|member|struct net_if *iface;
DECL|init|member|void (*init)(struct net_if *iface);
DECL|ipv4|member|struct net_if_ipv4 *ipv4;
DECL|ipv6|member|struct net_if_ipv6 *ipv6;
DECL|ip|member|struct net_if_ip ip;
DECL|is_default|member|bool is_default;
DECL|is_infinite|member|bool is_infinite;
DECL|is_infinite|member|bool is_infinite;
DECL|is_infinite|member|bool is_infinite;
DECL|is_joined|member|u8_t is_joined : 1;
DECL|is_used|member|bool is_used;
DECL|is_used|member|bool is_used;
DECL|is_used|member|bool is_used;
DECL|is_used|member|u8_t is_used : 1;
DECL|l2_data|member|void *l2_data;
DECL|l2|member|const struct net_l2 * const l2;
DECL|lease_time|member|u32_t lease_time;
DECL|len|member|u8_t len;
DECL|lifetime|member|struct k_delayed_work lifetime;
DECL|lifetime|member|struct k_delayed_work lifetime;
DECL|lifetime|member|struct k_delayed_work lifetime;
DECL|link_addr|member|struct net_linkaddr link_addr;
DECL|mcast|member|struct net_if_mcast_addr mcast[NET_IF_MAX_IPV4_MADDR];
DECL|mcast|member|struct net_if_mcast_addr mcast[NET_IF_MAX_IPV6_MADDR];
DECL|mtu|member|u16_t mtu;
DECL|net_if_addr_set_lf|function|static inline void net_if_addr_set_lf(struct net_if_addr *ifaddr, bool is_infinite)
DECL|net_if_addr|struct|struct net_if_addr {
DECL|net_if_api|struct|struct net_if_api {
DECL|net_if_cb_t|typedef|typedef void (*net_if_cb_t)(struct net_if *iface, void *user_data);
DECL|net_if_config_get|function|static inline struct net_if_config *net_if_config_get(struct net_if *iface)
DECL|net_if_config|struct|struct net_if_config {
DECL|net_if_dev|struct|struct net_if_dev {
DECL|net_if_dhcpv4|struct|struct net_if_dhcpv4 {
DECL|net_if_get_config|function|static inline struct net_if_config *net_if_get_config(struct net_if *iface)
DECL|net_if_get_device|function|static inline struct device *net_if_get_device(struct net_if *iface)
DECL|net_if_get_ieee802154|function|static inline struct net_if *net_if_get_ieee802154(void)
DECL|net_if_get_link_addr|function|static inline struct net_linkaddr *net_if_get_link_addr(struct net_if *iface)
DECL|net_if_get_ll_reserve|function|static inline u16_t net_if_get_ll_reserve(struct net_if *iface, const struct in6_addr *dst_ip6)
DECL|net_if_get_mtu|function|static inline u16_t net_if_get_mtu(struct net_if *iface)
DECL|net_if_ipv4_get_ttl|function|static inline u8_t net_if_ipv4_get_ttl(struct net_if *iface)
DECL|net_if_ipv4_set_gw|function|static inline void net_if_ipv4_set_gw(struct net_if *iface, struct in_addr *gw)
DECL|net_if_ipv4_set_netmask|function|static inline void net_if_ipv4_set_netmask(struct net_if *iface, struct in_addr *netmask)
DECL|net_if_ipv4|struct|struct net_if_ipv4 {
DECL|net_if_ipv6_addr_lookup_by_iface|function|struct net_if_addr *net_if_ipv6_addr_lookup_by_iface(struct net_if *iface, struct in6_addr *addr)
DECL|net_if_ipv6_get_hop_limit|function|static inline u8_t net_if_ipv6_get_hop_limit(struct net_if *iface)
DECL|net_if_ipv6_get_reachable_time|function|static inline u32_t net_if_ipv6_get_reachable_time(struct net_if *iface)
DECL|net_if_ipv6_get_retrans_timer|function|static inline u32_t net_if_ipv6_get_retrans_timer(struct net_if *iface)
DECL|net_if_ipv6_maddr_is_joined|function|static inline bool net_if_ipv6_maddr_is_joined(struct net_if_mcast_addr *addr)
DECL|net_if_ipv6_maddr_join|function|static inline void net_if_ipv6_maddr_join(struct net_if_mcast_addr *addr)
DECL|net_if_ipv6_maddr_leave|function|static inline void net_if_ipv6_maddr_leave(struct net_if_mcast_addr *addr)
DECL|net_if_ipv6_prefix_set_lf|function|static inline void net_if_ipv6_prefix_set_lf(struct net_if_ipv6_prefix *prefix, bool is_infinite)
DECL|net_if_ipv6_prefix|struct|struct net_if_ipv6_prefix {
DECL|net_if_ipv6_select_src_addr|macro|net_if_ipv6_select_src_addr
DECL|net_if_ipv6_set_base_reachable_time|function|static inline void net_if_ipv6_set_base_reachable_time(struct net_if *iface, u32_t reachable_time)
DECL|net_if_ipv6_set_reachable_time|function|static inline void net_if_ipv6_set_reachable_time(struct net_if_ipv6 *ipv6)
DECL|net_if_ipv6_set_retrans_timer|function|static inline void net_if_ipv6_set_retrans_timer(struct net_if *iface, u32_t retrans_timer)
DECL|net_if_ipv6|struct|struct net_if_ipv6 {
DECL|net_if_ip|struct|struct net_if_ip {
DECL|net_if_is_ip_offloaded|function|static inline bool net_if_is_ip_offloaded(struct net_if *iface)
DECL|net_if_is_up|function|static inline bool net_if_is_up(struct net_if *iface)
DECL|net_if_l2_data|function|static inline void *net_if_l2_data(struct net_if *iface)
DECL|net_if_l2|function|static inline const struct net_l2 * const net_if_l2(struct net_if *iface)
DECL|net_if_link_callback_t|typedef|typedef void (*net_if_link_callback_t)(struct net_if *iface,
DECL|net_if_link_cb|struct|struct net_if_link_cb {
DECL|net_if_mcast_addr|struct|struct net_if_mcast_addr {
DECL|net_if_mcast_callback_t|typedef|typedef void (*net_if_mcast_callback_t)(struct net_if *iface,
DECL|net_if_mcast_monitor|struct|struct net_if_mcast_monitor {
DECL|net_if_offload|function|static inline struct net_offload *net_if_offload(struct net_if *iface)
DECL|net_if_router_rm|function|static inline void net_if_router_rm(struct net_if_router *router)
DECL|net_if_router|struct|struct net_if_router {
DECL|net_if_set_link_addr|function|static inline int net_if_set_link_addr(struct net_if *iface, u8_t *addr, u8_t len, enum net_link_type type)
DECL|net_if_set_mtu|function|static inline void net_if_set_mtu(struct net_if *iface, u16_t mtu)
DECL|net_if_start_dad|macro|net_if_start_dad
DECL|net_if_timestamp_callback_t|typedef|typedef void (*net_if_timestamp_callback_t)(struct net_pkt *pkt);
DECL|net_if_timestamp_cb|struct|struct net_if_timestamp_cb {
DECL|net_if|struct|struct net_if {
DECL|net_ipv6_set_hop_limit|function|static inline void net_ipv6_set_hop_limit(struct net_if *iface, u8_t hop_limit)
DECL|net_traffic_class|struct|struct net_traffic_class {
DECL|netmask|member|struct in_addr netmask;
DECL|node|member|sys_snode_t node;
DECL|node|member|sys_snode_t node;
DECL|node|member|sys_snode_t node;
DECL|node|member|sys_snode_t node;
DECL|offload|member|struct net_offload *offload;
DECL|pkt|member|struct net_pkt *pkt;
DECL|prefix|member|struct in6_addr prefix;
DECL|prefix|member|struct net_if_ipv6_prefix prefix[NET_IF_MAX_IPV6_PREFIX];
DECL|reachable_time|member|u32_t reachable_time;
DECL|rebinding_time|member|u32_t rebinding_time;
DECL|renewal_time|member|u32_t renewal_time;
DECL|request_time|member|u32_t request_time;
DECL|requested_ip|member|struct in_addr requested_ip;
DECL|retrans_timer|member|u32_t retrans_timer;
DECL|rs_count|member|u8_t rs_count;
DECL|rs_timer|member|struct k_delayed_work rs_timer;
DECL|send|member|int (*send)(struct net_if *iface, struct net_pkt *pkt);
DECL|server_id|member|struct in_addr server_id;
DECL|stack|member|k_thread_stack_t *stack;
DECL|state|member|enum net_dhcpv4_state state;
DECL|stats|member|struct net_stats stats;
DECL|tc|member|int tc;
DECL|timer_start|member|s64_t timer_start;
DECL|ttl|member|u8_t ttl;
DECL|unicast|member|struct net_if_addr unicast[NET_IF_MAX_IPV4_ADDR];
DECL|unicast|member|struct net_if_addr unicast[NET_IF_MAX_IPV6_ADDR];
DECL|work_q|member|struct k_work_q work_q;
DECL|xid|member|u32_t xid;
