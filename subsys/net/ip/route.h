DECL|__ROUTE_H|macro|__ROUTE_H
DECL|addr|member|struct in6_addr addr;
DECL|data|member|void *data;
DECL|group|member|struct in6_addr group;
DECL|iface|member|struct net_if *iface;
DECL|iface|member|struct net_if *iface;
DECL|is_used|member|bool is_used;
DECL|lifetime|member|uint32_t lifetime;
DECL|nbr|member|struct net_nbr *nbr;
DECL|net_route_cb_t|typedef|typedef void (*net_route_cb_t)(struct net_route_entry *entry,
DECL|net_route_entry_mcast|struct|struct net_route_entry_mcast {
DECL|net_route_entry|struct|struct net_route_entry {
DECL|net_route_init|macro|net_route_init
DECL|net_route_mcast_cb_t|typedef|typedef void (*net_route_mcast_cb_t)(struct net_route_entry_mcast *entry,
DECL|net_route_nexthop|struct|struct net_route_nexthop {
DECL|nexthop|member|sys_slist_t nexthop;
DECL|node|member|sys_snode_t node;
DECL|node|member|sys_snode_t node;
DECL|prefix_len|member|uint8_t prefix_len;
