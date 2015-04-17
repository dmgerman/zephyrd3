DECL|RPL_DAG_MC_AGGR_ADDITIVE|macro|RPL_DAG_MC_AGGR_ADDITIVE
DECL|RPL_DAG_MC_AGGR_MAXIMUM|macro|RPL_DAG_MC_AGGR_MAXIMUM
DECL|RPL_DAG_MC_AGGR_MINIMUM|macro|RPL_DAG_MC_AGGR_MINIMUM
DECL|RPL_DAG_MC_AGGR_MULTIPLICATIVE|macro|RPL_DAG_MC_AGGR_MULTIPLICATIVE
DECL|RPL_DAG_MC_ENERGY_ESTIMATION|macro|RPL_DAG_MC_ENERGY_ESTIMATION
DECL|RPL_DAG_MC_ENERGY_INCLUDED|macro|RPL_DAG_MC_ENERGY_INCLUDED
DECL|RPL_DAG_MC_ENERGY_TYPE_BATTERY|macro|RPL_DAG_MC_ENERGY_TYPE_BATTERY
DECL|RPL_DAG_MC_ENERGY_TYPE_MAINS|macro|RPL_DAG_MC_ENERGY_TYPE_MAINS
DECL|RPL_DAG_MC_ENERGY_TYPE_SCAVENGING|macro|RPL_DAG_MC_ENERGY_TYPE_SCAVENGING
DECL|RPL_DAG_MC_ENERGY_TYPE|macro|RPL_DAG_MC_ENERGY_TYPE
DECL|RPL_DAG_MC_ENERGY|macro|RPL_DAG_MC_ENERGY
DECL|RPL_DAG_MC_ETX|macro|RPL_DAG_MC_ETX
DECL|RPL_DAG_MC_FLAG_C|macro|RPL_DAG_MC_FLAG_C
DECL|RPL_DAG_MC_FLAG_O|macro|RPL_DAG_MC_FLAG_O
DECL|RPL_DAG_MC_FLAG_P|macro|RPL_DAG_MC_FLAG_P
DECL|RPL_DAG_MC_FLAG_R|macro|RPL_DAG_MC_FLAG_R
DECL|RPL_DAG_MC_HOPCOUNT|macro|RPL_DAG_MC_HOPCOUNT
DECL|RPL_DAG_MC_LATENCY|macro|RPL_DAG_MC_LATENCY
DECL|RPL_DAG_MC_LC|macro|RPL_DAG_MC_LC
DECL|RPL_DAG_MC_LQL|macro|RPL_DAG_MC_LQL
DECL|RPL_DAG_MC_NONE|macro|RPL_DAG_MC_NONE
DECL|RPL_DAG_MC_NSA|macro|RPL_DAG_MC_NSA
DECL|RPL_DAG_MC_THROUGHPUT|macro|RPL_DAG_MC_THROUGHPUT
DECL|RPL_H|macro|RPL_H
DECL|RPL_MODE_FEATHER|enumerator|RPL_MODE_FEATHER = 1,
DECL|RPL_MODE_LEAF|enumerator|RPL_MODE_LEAF = 2,
DECL|RPL_MODE_MESH|enumerator|RPL_MODE_MESH = 0,
DECL|RPL_PARENT_FLAG_LINK_METRIC_VALID|macro|RPL_PARENT_FLAG_LINK_METRIC_VALID
DECL|RPL_PARENT_FLAG_UPDATED|macro|RPL_PARENT_FLAG_UPDATED
DECL|aggr|member|uint8_t aggr;
DECL|best_dag|member|rpl_dag_t *(*best_dag)(rpl_dag_t *, rpl_dag_t *);
DECL|best_parent|member|rpl_parent_t *(*best_parent)(rpl_parent_t *, rpl_parent_t *);
DECL|calculate_rank|member|rpl_rank_t (*calculate_rank)(rpl_parent_t *, rpl_rank_t);
DECL|current_dag|member|rpl_dag_t *current_dag;
DECL|dag_id|member|uip_ipaddr_t dag_id;
DECL|dag_table|member|rpl_dag_t dag_table[RPL_MAX_DAG_PER_INSTANCE];
DECL|dag|member|struct rpl_dag *dag;
DECL|dao_lifetime_timer|member|struct ctimer dao_lifetime_timer;
DECL|dao_timer|member|struct ctimer dao_timer;
DECL|def_route|member|uip_ds6_defrt_t *def_route;
DECL|default_lifetime|member|uint8_t default_lifetime;
DECL|dio_counter|member|uint8_t dio_counter;
DECL|dio_intcurrent|member|uint8_t dio_intcurrent;
DECL|dio_intdoubl|member|uint8_t dio_intdoubl;
DECL|dio_intmin|member|uint8_t dio_intmin;
DECL|dio_next_delay|member|clock_time_t dio_next_delay; /* delay for completion of dio interval */
DECL|dio_redundancy|member|uint8_t dio_redundancy;
DECL|dio_send|member|uint8_t dio_send; /* for keeping track of which mode the timer is in */
DECL|dio_timer|member|struct ctimer dio_timer;
DECL|dio_totint|member|uint16_t dio_totint;
DECL|dio_totrecv|member|uint16_t dio_totrecv;
DECL|dio_totsend|member|uint16_t dio_totsend;
DECL|dtsn_out|member|uint8_t dtsn_out;
DECL|dtsn|member|uint8_t dtsn;
DECL|energy_est|member|uint8_t energy_est;
DECL|energy|member|struct rpl_metric_object_energy energy;
DECL|etx|member|uint16_t etx;
DECL|flags|member|uint8_t flags;
DECL|flags|member|uint8_t flags;
DECL|flags|member|uint8_t flags;
DECL|flags|member|uint8_t flags;
DECL|grounded|member|uint8_t grounded;
DECL|instance_id|member|uint8_t instance_id;
DECL|instance|member|struct rpl_instance *instance;
DECL|joined|member|uint8_t joined;
DECL|length|member|uint8_t length;
DECL|length|member|uint8_t length;
DECL|lifetime_unit|member|uint16_t lifetime_unit; /* lifetime in seconds = l_u * d_l */
DECL|lifetime|member|uint32_t lifetime;
DECL|max_rankinc|member|rpl_rank_t max_rankinc;
DECL|mc|member|rpl_metric_container_t mc;
DECL|mc|member|rpl_metric_container_t mc;
DECL|metric_object|union|union metric_object {
DECL|min_hoprankinc|member|rpl_rank_t min_hoprankinc;
DECL|min_rank|member|rpl_rank_t min_rank; /* should be reset per DAG iteration! */
DECL|mop|member|uint8_t mop;
DECL|neighbor_link_callback|member|void (*neighbor_link_callback)(rpl_parent_t *, int, int);
DECL|next|member|struct rpl_parent *next;
DECL|obj|member|} obj;
DECL|ocp|member|rpl_ocp_t ocp;
DECL|of|member|rpl_of_t *of;
DECL|prec|member|uint8_t prec;
DECL|preference|member|uint8_t preference;
DECL|preferred_parent|member|rpl_parent_t *preferred_parent;
DECL|prefix_info|member|rpl_prefix_t prefix_info;
DECL|prefix|member|uip_ipaddr_t prefix;
DECL|rank|member|rpl_rank_t rank;
DECL|rank|member|rpl_rank_t rank;
DECL|reset|member|void (*reset)(struct rpl_dag *);
DECL|rpl_dag_t|typedef|typedef struct rpl_dag rpl_dag_t;
DECL|rpl_dag|struct|struct rpl_dag {
DECL|rpl_instance_t|typedef|typedef struct rpl_instance rpl_instance_t;
DECL|rpl_instance|struct|struct rpl_instance {
DECL|rpl_metric_container_t|typedef|typedef struct rpl_metric_container rpl_metric_container_t;
DECL|rpl_metric_container|struct|struct rpl_metric_container {
DECL|rpl_metric_object_energy|struct|struct rpl_metric_object_energy {
DECL|rpl_mode|enum|enum rpl_mode {
DECL|rpl_ocp_t|typedef|typedef uint16_t rpl_ocp_t;
DECL|rpl_of_t|typedef|typedef struct rpl_of rpl_of_t;
DECL|rpl_of|struct|struct rpl_of {
DECL|rpl_parent_t|typedef|typedef struct rpl_parent rpl_parent_t;
DECL|rpl_parent|struct|struct rpl_parent {
DECL|rpl_prefix_t|typedef|typedef struct rpl_prefix rpl_prefix_t;
DECL|rpl_prefix|struct|struct rpl_prefix {
DECL|rpl_rank_t|typedef|typedef uint16_t rpl_rank_t;
DECL|type|member|uint8_t type;
DECL|update_metric_container|member|void (*update_metric_container)( rpl_instance_t *);
DECL|used|member|uint8_t used;
DECL|used|member|uint8_t used;
DECL|version|member|uint8_t version;
