DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|br_join_dag|function|static bool br_join_dag(struct net_rpl_dio *dio)
DECL|dag_has_version|member|bool dag_has_version;
DECL|dag_id|member|struct in6_addr dag_id;
DECL|dag_init_version|member|u8_t dag_init_version;
DECL|prefix_len|member|u8_t prefix_len;
DECL|prefix|member|struct in6_addr prefix;
DECL|rpl|variable|rpl
DECL|setup_rpl|function|bool setup_rpl(struct net_if *iface, const char *addr_prefix)
