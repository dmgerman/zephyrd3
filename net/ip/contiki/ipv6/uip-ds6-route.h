DECL|UIP_DS6_NOTIFICATIONS|macro|UIP_DS6_NOTIFICATIONS
DECL|UIP_DS6_NOTIFICATIONS|macro|UIP_DS6_NOTIFICATIONS
DECL|UIP_DS6_NOTIFICATION_DEFRT_ADD|macro|UIP_DS6_NOTIFICATION_DEFRT_ADD
DECL|UIP_DS6_NOTIFICATION_DEFRT_RM|macro|UIP_DS6_NOTIFICATION_DEFRT_RM
DECL|UIP_DS6_NOTIFICATION_ROUTE_ADD|macro|UIP_DS6_NOTIFICATION_ROUTE_ADD
DECL|UIP_DS6_NOTIFICATION_ROUTE_RM|macro|UIP_DS6_NOTIFICATION_ROUTE_RM
DECL|UIP_DS6_ROUTE_H|macro|UIP_DS6_ROUTE_H
DECL|UIP_DS6_ROUTE_NB|macro|UIP_DS6_ROUTE_NB
DECL|UIP_DS6_ROUTE_NB|macro|UIP_DS6_ROUTE_NB
DECL|UIP_DS6_ROUTE_NB|macro|UIP_DS6_ROUTE_NB
DECL|UIP_DS6_ROUTE_STATE_TYPE|macro|UIP_DS6_ROUTE_STATE_TYPE
DECL|callback|member|uip_ds6_notification_callback callback;
DECL|dag|member|void *dag;
DECL|ipaddr|member|uip_ipaddr_t ipaddr;
DECL|ipaddr|member|uip_ipaddr_t ipaddr;
DECL|isinfinite|member|uint8_t isinfinite;
DECL|learned_from|member|uint8_t learned_from;
DECL|length|member|uint8_t length;
DECL|lifetime|member|struct stimer lifetime;
DECL|lifetime|member|uint32_t lifetime;
DECL|neighbor_routes|member|struct uip_ds6_route_neighbor_routes *neighbor_routes;
DECL|next|member|struct uip_ds6_defrt *next;
DECL|next|member|struct uip_ds6_notification *next;
DECL|next|member|struct uip_ds6_route *next;
DECL|next|member|struct uip_ds6_route_neighbor_route *next;
DECL|nopath_received|member|uint8_t nopath_received;
DECL|route|member|struct uip_ds6_route *route;
DECL|rpl_route_entry_t|typedef|} rpl_route_entry_t;
DECL|rpl_route_entry|struct|typedef struct rpl_route_entry {
DECL|state|member|UIP_DS6_ROUTE_STATE_TYPE state;
DECL|uip_ds6_defrt_t|typedef|} uip_ds6_defrt_t;
DECL|uip_ds6_defrt|struct|typedef struct uip_ds6_defrt {
DECL|uip_ds6_notification_callback|typedef|typedef void (* uip_ds6_notification_callback)(int event,
DECL|uip_ds6_notification|struct|struct uip_ds6_notification {
DECL|uip_ds6_route_neighbor_routes|struct|struct uip_ds6_route_neighbor_routes {
DECL|uip_ds6_route_neighbor_route|struct|struct uip_ds6_route_neighbor_route {
DECL|uip_ds6_route_t|typedef|} uip_ds6_route_t;
DECL|uip_ds6_route|struct|typedef struct uip_ds6_route {
