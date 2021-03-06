DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MRHOF_ETX_ALPHA|macro|MRHOF_ETX_ALPHA
DECL|MRHOF_ETX_SCALE|macro|MRHOF_ETX_SCALE
DECL|MRHOF_MAX_LINK_METRIC|macro|MRHOF_MAX_LINK_METRIC
DECL|MRHOF_MAX_PATH_COST|macro|MRHOF_MAX_PATH_COST
DECL|MRHOF_PARENT_SWITCH_THRESHOLD_DIV|macro|MRHOF_PARENT_SWITCH_THRESHOLD_DIV
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|calculate_path_metric|function|static u16_t calculate_path_metric(struct net_rpl_parent *parent)
DECL|net_rpl_mrhof_best_dag|function|static struct net_rpl_dag *net_rpl_mrhof_best_dag(struct net_rpl_dag *dag1, struct net_rpl_dag *dag2)
DECL|net_rpl_mrhof_best_dag|variable|net_rpl_mrhof_best_dag
DECL|net_rpl_mrhof_best_parent|function|net_rpl_mrhof_best_parent(struct net_if *iface, struct net_rpl_parent *parent1, struct net_rpl_parent *parent2)
DECL|net_rpl_mrhof_best_parent|variable|net_rpl_mrhof_best_parent
DECL|net_rpl_mrhof_calc_rank|function|static u16_t net_rpl_mrhof_calc_rank(struct net_rpl_parent *parent, u16_t base_rank)
DECL|net_rpl_mrhof_calc_rank|variable|net_rpl_mrhof_calc_rank
DECL|net_rpl_mrhof_find|function|static bool net_rpl_mrhof_find(u16_t ocp)
DECL|net_rpl_mrhof_find|variable|net_rpl_mrhof_find
DECL|net_rpl_mrhof_get|function|static u16_t net_rpl_mrhof_get(void)
DECL|net_rpl_mrhof_get|variable|net_rpl_mrhof_get
DECL|net_rpl_mrhof_neighbor_link_cb|function|static int net_rpl_mrhof_neighbor_link_cb(struct net_if *iface, struct net_rpl_parent *parent, int status, int numtx)
DECL|net_rpl_mrhof_neighbor_link_cb|variable|net_rpl_mrhof_neighbor_link_cb
DECL|net_rpl_mrhof_reset|function|static void net_rpl_mrhof_reset(struct net_rpl_dag *dag)
DECL|net_rpl_mrhof_reset|variable|net_rpl_mrhof_reset
DECL|net_rpl_mrhof_update_mc|function|static int net_rpl_mrhof_update_mc(struct net_rpl_instance *instance)
DECL|net_rpl_mrhof_update_mc|variable|net_rpl_mrhof_update_mc
