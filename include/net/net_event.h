DECL|NET_EVENT_IF_CMD_DOWN|enumerator|NET_EVENT_IF_CMD_DOWN = 1,
DECL|NET_EVENT_IF_CMD_UP|enumerator|NET_EVENT_IF_CMD_UP,
DECL|NET_EVENT_IF_DOWN|macro|NET_EVENT_IF_DOWN
DECL|NET_EVENT_IF_UP|macro|NET_EVENT_IF_UP
DECL|NET_EVENT_IPV4_ADDR_ADD|macro|NET_EVENT_IPV4_ADDR_ADD
DECL|NET_EVENT_IPV4_ADDR_DEL|macro|NET_EVENT_IPV4_ADDR_DEL
DECL|NET_EVENT_IPV4_CMD_ADDR_ADD|enumerator|NET_EVENT_IPV4_CMD_ADDR_ADD = 1,
DECL|NET_EVENT_IPV4_CMD_ADDR_DEL|enumerator|NET_EVENT_IPV4_CMD_ADDR_DEL,
DECL|NET_EVENT_IPV4_CMD_ROUTER_ADD|enumerator|NET_EVENT_IPV4_CMD_ROUTER_ADD,
DECL|NET_EVENT_IPV4_ROUTER_ADD|macro|NET_EVENT_IPV4_ROUTER_ADD
DECL|NET_EVENT_IPV6_ADDR_ADD|macro|NET_EVENT_IPV6_ADDR_ADD
DECL|NET_EVENT_IPV6_ADDR_DEL|macro|NET_EVENT_IPV6_ADDR_DEL
DECL|NET_EVENT_IPV6_CMD_ADDR_ADD|enumerator|NET_EVENT_IPV6_CMD_ADDR_ADD = 1,
DECL|NET_EVENT_IPV6_CMD_ADDR_DEL|enumerator|NET_EVENT_IPV6_CMD_ADDR_DEL,
DECL|NET_EVENT_IPV6_CMD_DAD_FAILED|enumerator|NET_EVENT_IPV6_CMD_DAD_FAILED,
DECL|NET_EVENT_IPV6_CMD_DAD_SUCCEED|enumerator|NET_EVENT_IPV6_CMD_DAD_SUCCEED,
DECL|NET_EVENT_IPV6_CMD_MADDR_ADD|enumerator|NET_EVENT_IPV6_CMD_MADDR_ADD,
DECL|NET_EVENT_IPV6_CMD_MADDR_DEL|enumerator|NET_EVENT_IPV6_CMD_MADDR_DEL,
DECL|NET_EVENT_IPV6_CMD_MCAST_JOIN|enumerator|NET_EVENT_IPV6_CMD_MCAST_JOIN,
DECL|NET_EVENT_IPV6_CMD_MCAST_LEAVE|enumerator|NET_EVENT_IPV6_CMD_MCAST_LEAVE,
DECL|NET_EVENT_IPV6_CMD_NBR_ADD|enumerator|NET_EVENT_IPV6_CMD_NBR_ADD,
DECL|NET_EVENT_IPV6_CMD_NBR_DEL|enumerator|NET_EVENT_IPV6_CMD_NBR_DEL,
DECL|NET_EVENT_IPV6_CMD_PREFIX_ADD|enumerator|NET_EVENT_IPV6_CMD_PREFIX_ADD,
DECL|NET_EVENT_IPV6_CMD_PREFIX_DEL|enumerator|NET_EVENT_IPV6_CMD_PREFIX_DEL,
DECL|NET_EVENT_IPV6_CMD_ROUTER_ADD|enumerator|NET_EVENT_IPV6_CMD_ROUTER_ADD,
DECL|NET_EVENT_IPV6_CMD_ROUTER_DEL|enumerator|NET_EVENT_IPV6_CMD_ROUTER_DEL,
DECL|NET_EVENT_IPV6_CMD_ROUTE_ADD|enumerator|NET_EVENT_IPV6_CMD_ROUTE_ADD,
DECL|NET_EVENT_IPV6_CMD_ROUTE_DEL|enumerator|NET_EVENT_IPV6_CMD_ROUTE_DEL,
DECL|NET_EVENT_IPV6_DAD_FAILED|macro|NET_EVENT_IPV6_DAD_FAILED
DECL|NET_EVENT_IPV6_DAD_SUCCEED|macro|NET_EVENT_IPV6_DAD_SUCCEED
DECL|NET_EVENT_IPV6_MADDR_ADD|macro|NET_EVENT_IPV6_MADDR_ADD
DECL|NET_EVENT_IPV6_MADDR_DEL|macro|NET_EVENT_IPV6_MADDR_DEL
DECL|NET_EVENT_IPV6_MCAST_JOIN|macro|NET_EVENT_IPV6_MCAST_JOIN
DECL|NET_EVENT_IPV6_MCAST_LEAVE|macro|NET_EVENT_IPV6_MCAST_LEAVE
DECL|NET_EVENT_IPV6_NBR_ADD|macro|NET_EVENT_IPV6_NBR_ADD
DECL|NET_EVENT_IPV6_NBR_DEL|macro|NET_EVENT_IPV6_NBR_DEL
DECL|NET_EVENT_IPV6_PREFIX_ADD|macro|NET_EVENT_IPV6_PREFIX_ADD
DECL|NET_EVENT_IPV6_PREFIX_DEL|macro|NET_EVENT_IPV6_PREFIX_DEL
DECL|NET_EVENT_IPV6_ROUTER_ADD|macro|NET_EVENT_IPV6_ROUTER_ADD
DECL|NET_EVENT_IPV6_ROUTER_DEL|macro|NET_EVENT_IPV6_ROUTER_DEL
DECL|NET_EVENT_IPV6_ROUTE_ADD|macro|NET_EVENT_IPV6_ROUTE_ADD
DECL|NET_EVENT_IPV6_ROUTE_DEL|macro|NET_EVENT_IPV6_ROUTE_DEL
DECL|_NET_EVENT_IF_BASE|macro|_NET_EVENT_IF_BASE
DECL|_NET_EVENT_IPV4_BASE|macro|_NET_EVENT_IPV4_BASE
DECL|_NET_EVENT_IPV6_BASE|macro|_NET_EVENT_IPV6_BASE
DECL|_NET_IF_CORE_CODE|macro|_NET_IF_CORE_CODE
DECL|_NET_IF_LAYER|macro|_NET_IF_LAYER
DECL|_NET_IPV4_CORE_CODE|macro|_NET_IPV4_CORE_CODE
DECL|_NET_IPV4_LAYER|macro|_NET_IPV4_LAYER
DECL|_NET_IPV6_CORE_CODE|macro|_NET_IPV6_CORE_CODE
DECL|_NET_IPV6_LAYER|macro|_NET_IPV6_LAYER
DECL|__NET_EVENT_H__|macro|__NET_EVENT_H__
DECL|addr|member|struct in6_addr addr;
DECL|addr|member|struct in6_addr addr;
DECL|addr|member|struct in6_addr addr; /* addr/prefix */
DECL|idx|member|int idx; /* NBR index*/
DECL|net_event_if_cmd|enum|enum net_event_if_cmd {
DECL|net_event_ipv4_cmd|enum|enum net_event_ipv4_cmd {
DECL|net_event_ipv6_addr|struct|struct net_event_ipv6_addr {
DECL|net_event_ipv6_cmd|enum|enum net_event_ipv6_cmd {
DECL|net_event_ipv6_nbr|struct|struct net_event_ipv6_nbr {
DECL|net_event_ipv6_route|struct|struct net_event_ipv6_route {
DECL|nexthop|member|struct in6_addr nexthop;
DECL|prefix_len|member|u8_t prefix_len;
