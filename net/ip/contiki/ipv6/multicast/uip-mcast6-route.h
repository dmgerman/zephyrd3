DECL|UIP_MCAST6_ROUTE_H_|macro|UIP_MCAST6_ROUTE_H_
DECL|dag|member|void *dag; /**< Pointer to an rpl_dag_t struct */
DECL|group|member|uip_ipaddr_t group; /**< The multicast group */
DECL|lifetime|member|uint32_t lifetime; /**< Entry lifetime seconds */
DECL|next|member|struct uip_mcast6_route *next; /**< Routes are arranged in a linked list */
DECL|uip_mcast6_route_t|typedef|} uip_mcast6_route_t;
DECL|uip_mcast6_route|struct|typedef struct uip_mcast6_route {
