DECL|ADDR_ANYTYPE|macro|ADDR_ANYTYPE
DECL|ADDR_AUTOCONF|macro|ADDR_AUTOCONF
DECL|ADDR_DEPRECATED|macro|ADDR_DEPRECATED
DECL|ADDR_DHCP|macro|ADDR_DHCP
DECL|ADDR_MANUAL|macro|ADDR_MANUAL
DECL|ADDR_PREFERRED|macro|ADDR_PREFERRED
DECL|ADDR_TENTATIVE|macro|ADDR_TENTATIVE
DECL|FOUND|macro|FOUND
DECL|FREESPACE|macro|FREESPACE
DECL|NOSPACE|macro|NOSPACE
DECL|UIP_CONF_DS6_LINK_NEIGHBOR_CALLBACK|macro|UIP_CONF_DS6_LINK_NEIGHBOR_CALLBACK
DECL|UIP_CONF_DS6_NEIGHBOR_STATE_CHANGED|macro|UIP_CONF_DS6_NEIGHBOR_STATE_CHANGED
DECL|UIP_DS6_AADDR_NBS|macro|UIP_DS6_AADDR_NBS
DECL|UIP_DS6_AADDR_NBS|macro|UIP_DS6_AADDR_NBS
DECL|UIP_DS6_AADDR_NBU|macro|UIP_DS6_AADDR_NBU
DECL|UIP_DS6_AADDR_NBU|macro|UIP_DS6_AADDR_NBU
DECL|UIP_DS6_AADDR_NB|macro|UIP_DS6_AADDR_NB
DECL|UIP_DS6_ADDR_NBS|macro|UIP_DS6_ADDR_NBS
DECL|UIP_DS6_ADDR_NBU|macro|UIP_DS6_ADDR_NBU
DECL|UIP_DS6_ADDR_NBU|macro|UIP_DS6_ADDR_NBU
DECL|UIP_DS6_ADDR_NB|macro|UIP_DS6_ADDR_NB
DECL|UIP_DS6_DEFRT_NBS|macro|UIP_DS6_DEFRT_NBS
DECL|UIP_DS6_DEFRT_NBU|macro|UIP_DS6_DEFRT_NBU
DECL|UIP_DS6_DEFRT_NBU|macro|UIP_DS6_DEFRT_NBU
DECL|UIP_DS6_DEFRT_NB|macro|UIP_DS6_DEFRT_NB
DECL|UIP_DS6_H_|macro|UIP_DS6_H_
DECL|UIP_DS6_LL_NUD|macro|UIP_DS6_LL_NUD
DECL|UIP_DS6_LL_NUD|macro|UIP_DS6_LL_NUD
DECL|UIP_DS6_MADDR_NBS|macro|UIP_DS6_MADDR_NBS
DECL|UIP_DS6_MADDR_NBS|macro|UIP_DS6_MADDR_NBS
DECL|UIP_DS6_MADDR_NBU|macro|UIP_DS6_MADDR_NBU
DECL|UIP_DS6_MADDR_NBU|macro|UIP_DS6_MADDR_NBU
DECL|UIP_DS6_MADDR_NB|macro|UIP_DS6_MADDR_NB
DECL|UIP_DS6_PERIOD|macro|UIP_DS6_PERIOD
DECL|UIP_DS6_PERIOD|macro|UIP_DS6_PERIOD
DECL|UIP_DS6_PREFIX_NBS|macro|UIP_DS6_PREFIX_NBS
DECL|UIP_DS6_PREFIX_NBU|macro|UIP_DS6_PREFIX_NBU
DECL|UIP_DS6_PREFIX_NBU|macro|UIP_DS6_PREFIX_NBU
DECL|UIP_DS6_PREFIX_NB|macro|UIP_DS6_PREFIX_NB
DECL|aaddr_list|member|uip_ds6_aaddr_t aaddr_list[UIP_DS6_AADDR_NB];
DECL|addr_list|member|uip_ds6_addr_t addr_list[UIP_DS6_ADDR_NB];
DECL|advertise|member|uint8_t advertise;
DECL|base_reachable_time|member|uint32_t base_reachable_time; /* in msec */
DECL|cur_hop_limit|member|uint8_t cur_hop_limit;
DECL|dadnscount|member|uint8_t dadnscount;
DECL|dadtimer|member|struct timer dadtimer;
DECL|ipaddr|member|uip_ipaddr_t ipaddr;
DECL|ipaddr|member|uip_ipaddr_t ipaddr;
DECL|ipaddr|member|uip_ipaddr_t ipaddr;
DECL|ipaddr|member|uip_ipaddr_t ipaddr;
DECL|ipaddr|member|uip_ipaddr_t ipaddr;
DECL|ipaddr|member|uip_ipaddr_t ipaddr;
DECL|isinfinite|member|uint8_t isinfinite;
DECL|isinfinite|member|uint8_t isinfinite;
DECL|isused|member|uint8_t isused;
DECL|isused|member|uint8_t isused;
DECL|isused|member|uint8_t isused;
DECL|isused|member|uint8_t isused;
DECL|isused|member|uint8_t isused;
DECL|isused|member|uint8_t isused;
DECL|l_a_reserved|member|uint8_t l_a_reserved; /**< on-link and autonomous flags + 6 reserved bits */
DECL|length|member|uint8_t length;
DECL|length|member|uint8_t length;
DECL|link_mtu|member|uint32_t link_mtu;
DECL|maddr_list|member|uip_ds6_maddr_t maddr_list[UIP_DS6_MADDR_NB];
DECL|maxdadns|member|uint8_t maxdadns;
DECL|plifetime|member|uint32_t plifetime;
DECL|reachable_time|member|uint32_t reachable_time; /* in msec */
DECL|retrans_timer|member|uint32_t retrans_timer; /* in msec */
DECL|state|member|uint8_t state;
DECL|type|member|uint8_t type;
DECL|uip_ds6_aaddr_t|typedef|} uip_ds6_aaddr_t;
DECL|uip_ds6_aaddr|struct|typedef struct uip_ds6_aaddr {
DECL|uip_ds6_addr_t|typedef|} uip_ds6_addr_t;
DECL|uip_ds6_addr|struct|typedef struct uip_ds6_addr {
DECL|uip_ds6_element_t|typedef|} uip_ds6_element_t;
DECL|uip_ds6_element|struct|typedef struct uip_ds6_element {
DECL|uip_ds6_is_my_aaddr|macro|uip_ds6_is_my_aaddr
DECL|uip_ds6_is_my_addr|macro|uip_ds6_is_my_addr
DECL|uip_ds6_is_my_maddr|macro|uip_ds6_is_my_maddr
DECL|uip_ds6_maddr_t|typedef|} uip_ds6_maddr_t;
DECL|uip_ds6_maddr|struct|typedef struct uip_ds6_maddr {
DECL|uip_ds6_netif_t|typedef|} uip_ds6_netif_t;
DECL|uip_ds6_netif|struct|typedef struct uip_ds6_netif {
DECL|uip_ds6_prefix_t|typedef|} uip_ds6_prefix_t;
DECL|uip_ds6_prefix_t|typedef|} uip_ds6_prefix_t;
DECL|uip_ds6_prefix|struct|typedef struct uip_ds6_prefix {
DECL|uip_ds6_prefix|struct|typedef struct uip_ds6_prefix {
DECL|vlifetime|member|struct stimer vlifetime;
DECL|vlifetime|member|struct stimer vlifetime;
DECL|vlifetime|member|uint32_t vlifetime;
