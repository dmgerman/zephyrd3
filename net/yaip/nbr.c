DECL|NET_DEBUG|macro|NET_DEBUG
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|net_nbr_clear_table|function|void net_nbr_clear_table(struct net_nbr_table *table)
DECL|net_nbr_get_lladdr|function|struct net_linkaddr_storage *net_nbr_get_lladdr(uint8_t idx)
DECL|net_nbr_get|function|struct net_nbr *net_nbr_get(struct net_nbr_table *table)
DECL|net_nbr_link|function|int net_nbr_link(struct net_nbr *nbr, struct net_if *iface, struct net_linkaddr *lladdr)
DECL|net_nbr_lookup|function|struct net_nbr *net_nbr_lookup(struct net_nbr_table *table, struct net_if *iface, struct net_linkaddr *lladdr)
DECL|net_nbr_ref|function|struct net_nbr *net_nbr_ref(struct net_nbr *nbr)
DECL|net_nbr_unlink|function|int net_nbr_unlink(struct net_nbr *nbr, struct net_linkaddr *lladdr)
DECL|net_nbr_unref|function|void net_nbr_unref(struct net_nbr *nbr)
