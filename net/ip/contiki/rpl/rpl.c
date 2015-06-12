DECL|DEBUG|macro|DEBUG
DECL|mode|variable|mode
DECL|netbuf|variable|netbuf
DECL|rpl_add_route|function|rpl_add_route(rpl_dag_t *dag, uip_ipaddr_t *prefix, int prefix_len, uip_ipaddr_t *next_hop)
DECL|rpl_get_mode|function|rpl_get_mode(void)
DECL|rpl_get_netbuf|function|struct net_buf *rpl_get_netbuf(void)
DECL|rpl_init|function|rpl_init(void)
DECL|rpl_ipv6_neighbor_callback|function|rpl_ipv6_neighbor_callback(uip_ds6_nbr_t *nbr)
DECL|rpl_link_neighbor_callback|function|rpl_link_neighbor_callback(const linkaddr_t *addr, int status, int numtx)
DECL|rpl_purge_routes|function|rpl_purge_routes(struct net_buf *buf)
DECL|rpl_remove_routes_by_nexthop|function|rpl_remove_routes_by_nexthop(uip_ipaddr_t *nexthop, rpl_dag_t *dag)
DECL|rpl_remove_routes|function|rpl_remove_routes(rpl_dag_t *dag)
DECL|rpl_set_mode|function|rpl_set_mode(struct net_buf *buf, enum rpl_mode m)
DECL|rpl_stats|variable|rpl_stats
