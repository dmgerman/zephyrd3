DECL|DEBUG|macro|DEBUG
DECL|get_match_length|function|get_match_length(uip_ipaddr_t *src, uip_ipaddr_t *dst)
DECL|loc_fipaddr|variable|loc_fipaddr
DECL|locaaddr|variable|locaaddr
DECL|locaddr|variable|locaddr
DECL|locmaddr|variable|locmaddr
DECL|locprefix|variable|locprefix
DECL|racount|variable|racount
DECL|rand_time|variable|rand_time
DECL|rscount|variable|rscount
DECL|uip_ds6_aaddr_add|function|uip_ds6_aaddr_add(uip_ipaddr_t *ipaddr)
DECL|uip_ds6_aaddr_lookup|function|uip_ds6_aaddr_lookup(uip_ipaddr_t *ipaddr)
DECL|uip_ds6_aaddr_rm|function|uip_ds6_aaddr_rm(uip_ds6_aaddr_t *aaddr)
DECL|uip_ds6_addr_add|function|uip_ds6_addr_add(uip_ipaddr_t *ipaddr, unsigned long vlifetime, uint8_t type)
DECL|uip_ds6_addr_lookup|function|uip_ds6_addr_lookup(uip_ipaddr_t *ipaddr)
DECL|uip_ds6_addr_rm|function|uip_ds6_addr_rm(uip_ds6_addr_t *addr)
DECL|uip_ds6_addr_size|variable|uip_ds6_addr_size
DECL|uip_ds6_compute_reachable_time|function|uip_ds6_compute_reachable_time(void)
DECL|uip_ds6_dad_failed|function|uip_ds6_dad_failed(uip_ds6_addr_t *addr)
DECL|uip_ds6_dad|function|uip_ds6_dad(struct net_buf *buf, uip_ds6_addr_t *addr)
DECL|uip_ds6_get_global|function|uip_ds6_get_global(int8_t state)
DECL|uip_ds6_get_link_local|function|uip_ds6_get_link_local(int8_t state)
DECL|uip_ds6_if|variable|uip_ds6_if
DECL|uip_ds6_init|function|uip_ds6_init(void)
DECL|uip_ds6_is_addr_onlink|function|uip_ds6_is_addr_onlink(uip_ipaddr_t *ipaddr)
DECL|uip_ds6_list_loop|function|uip_ds6_list_loop(uip_ds6_element_t *list, uint8_t size, uint16_t elementsize, uip_ipaddr_t *ipaddr, uint8_t ipaddrlen, uip_ds6_element_t **out_element)
DECL|uip_ds6_maddr_add|function|uip_ds6_maddr_add(const uip_ipaddr_t *ipaddr)
DECL|uip_ds6_maddr_lookup|function|uip_ds6_maddr_lookup(const uip_ipaddr_t *ipaddr)
DECL|uip_ds6_maddr_rm|function|uip_ds6_maddr_rm(uip_ds6_maddr_t *maddr)
DECL|uip_ds6_netif_addr_list_offset|variable|uip_ds6_netif_addr_list_offset
DECL|uip_ds6_periodic|function|uip_ds6_periodic(struct net_buf *buf)
DECL|uip_ds6_prefix_add|function|uip_ds6_prefix_add(uip_ipaddr_t *ipaddr, uint8_t ipaddrlen, uint8_t advertise, uint8_t flags, unsigned long vtime, unsigned long ptime)
DECL|uip_ds6_prefix_add|function|uip_ds6_prefix_add(uip_ipaddr_t *ipaddr, uint8_t ipaddrlen, unsigned long interval)
DECL|uip_ds6_prefix_list|variable|uip_ds6_prefix_list
DECL|uip_ds6_prefix_lookup|function|uip_ds6_prefix_lookup(uip_ipaddr_t *ipaddr, uint8_t ipaddrlen)
DECL|uip_ds6_prefix_rm|function|uip_ds6_prefix_rm(uip_ds6_prefix_t *prefix)
DECL|uip_ds6_select_src|function|uip_ds6_select_src(uip_ipaddr_t *src, uip_ipaddr_t *dst)
DECL|uip_ds6_send_ra_periodic|function|uip_ds6_send_ra_periodic(void)
DECL|uip_ds6_send_ra_sollicited|function|uip_ds6_send_ra_sollicited(void)
DECL|uip_ds6_send_rs|function|uip_ds6_send_rs(struct net_buf *buf)
DECL|uip_ds6_set_addr_iid|function|uip_ds6_set_addr_iid(uip_ipaddr_t *ipaddr, uip_lladdr_t *lladdr)
DECL|uip_ds6_set_lladdr|function|void uip_ds6_set_lladdr(uip_lladdr_t *lladdr)
DECL|uip_ds6_timer_periodic|variable|uip_ds6_timer_periodic
DECL|uip_ds6_timer_ra|variable|uip_ds6_timer_ra
DECL|uip_ds6_timer_rs|variable|uip_ds6_timer_rs
