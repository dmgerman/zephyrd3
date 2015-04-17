DECL|DEBUG|macro|DEBUG
DECL|DEBUG|macro|DEBUG
DECL|assert_nbr_routes_list_sane|function|assert_nbr_routes_list_sane(void)
DECL|call_route_callback|function|call_route_callback(int event, uip_ipaddr_t *route, uip_ipaddr_t *nexthop)
DECL|defaultrouterlist|variable|defaultrouterlist
DECL|notificationlist|variable|notificationlist
DECL|num_routes|variable|num_routes
DECL|rm_routelist_callback|function|rm_routelist_callback(nbr_table_item_t *ptr)
DECL|rm_routelist|function|rm_routelist(struct uip_ds6_route_neighbor_routes *routes)
DECL|routelist|variable|routelist
DECL|uip_ds6_defrt_add|function|uip_ds6_defrt_add(uip_ipaddr_t *ipaddr, unsigned long interval)
DECL|uip_ds6_defrt_choose|function|uip_ds6_defrt_choose(void)
DECL|uip_ds6_defrt_lookup|function|uip_ds6_defrt_lookup(uip_ipaddr_t *ipaddr)
DECL|uip_ds6_defrt_periodic|function|uip_ds6_defrt_periodic(void)
DECL|uip_ds6_defrt_rm|function|uip_ds6_defrt_rm(uip_ds6_defrt_t *defrt)
DECL|uip_ds6_notification_add|function|uip_ds6_notification_add(struct uip_ds6_notification *n, uip_ds6_notification_callback c)
DECL|uip_ds6_notification_rm|function|uip_ds6_notification_rm(struct uip_ds6_notification *n)
DECL|uip_ds6_route_add|function|uip_ds6_route_add(uip_ipaddr_t *ipaddr, uint8_t length, uip_ipaddr_t *nexthop)
DECL|uip_ds6_route_head|function|uip_ds6_route_head(void)
DECL|uip_ds6_route_init|function|uip_ds6_route_init(void)
DECL|uip_ds6_route_lookup|function|uip_ds6_route_lookup(uip_ipaddr_t *addr)
DECL|uip_ds6_route_nexthop_lladdr|function|uip_ds6_route_nexthop_lladdr(uip_ds6_route_t *route)
DECL|uip_ds6_route_nexthop|function|uip_ds6_route_nexthop(uip_ds6_route_t *route)
DECL|uip_ds6_route_next|function|uip_ds6_route_next(uip_ds6_route_t *r)
DECL|uip_ds6_route_num_routes|function|uip_ds6_route_num_routes(void)
DECL|uip_ds6_route_rm_by_nexthop|function|uip_ds6_route_rm_by_nexthop(uip_ipaddr_t *nexthop)
DECL|uip_ds6_route_rm|function|uip_ds6_route_rm(uip_ds6_route_t *route)
