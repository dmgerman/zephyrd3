DECL|__ROUTE_H|macro|__ROUTE_H
DECL|addr|member|struct in6_addr addr;
DECL|iface|member|struct net_if *iface;
DECL|nbr|member|struct net_nbr *nbr;
DECL|net_route_entry|struct|struct net_route_entry {
DECL|net_route_init|macro|net_route_init
DECL|net_route_nexthop|struct|struct net_route_nexthop {
DECL|nexthop|member|sys_slist_t nexthop;
DECL|node|member|sys_snode_t node;
DECL|node|member|sys_snode_t node;
DECL|prefix_len|member|uint8_t prefix_len;
