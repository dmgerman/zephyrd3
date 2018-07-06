DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|get_nbr|function|static inline struct net_nbr *get_nbr(struct net_nbr *start, int idx)
DECL|net_nbr_clear_table|function|void net_nbr_clear_table(struct net_nbr_table *table)
DECL|net_nbr_get_lladdr|function|struct net_linkaddr_storage *net_nbr_get_lladdr(u8_t idx)
DECL|net_nbr_get|function|struct net_nbr *net_nbr_get(struct net_nbr_table *table)
DECL|net_nbr_link|function|int net_nbr_link(struct net_nbr *nbr, struct net_if *iface, struct net_linkaddr *lladdr)
DECL|net_nbr_lookup|function|struct net_nbr *net_nbr_lookup(struct net_nbr_table *table, struct net_if *iface, struct net_linkaddr *lladdr)
DECL|net_nbr_print|function|void net_nbr_print(struct net_nbr_table *table)
DECL|net_nbr_ref_debug|function|struct net_nbr *net_nbr_ref_debug(struct net_nbr *nbr, const char *caller, int line) #else struct net_nbr *net_nbr_ref(struct net_nbr *nbr) #endif
DECL|net_nbr_unlink|function|int net_nbr_unlink(struct net_nbr *nbr, struct net_linkaddr *lladdr)
DECL|net_nbr_unref_debug|function|void net_nbr_unref_debug(struct net_nbr *nbr, const char *caller, int line)
DECL|net_nbr_unref|macro|net_nbr_unref
