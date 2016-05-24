DECL|DHCPC_H_|macro|DHCPC_H_
DECL|conn|member|struct uip_udp_conn *conn;
DECL|default_router|member|uip_ipaddr_t default_router;
DECL|dhcpc_configured|typedef|typedef void (*dhcpc_configured)(void);
DECL|dhcpc_state|struct|struct dhcpc_state {
DECL|dhcpc_unconfigured|typedef|typedef void (*dhcpc_unconfigured)(void);
DECL|dnsaddr|member|uip_ipaddr_t dnsaddr;
DECL|etimer|member|struct etimer etimer;
DECL|ipaddr|member|uip_ipaddr_t ipaddr;
DECL|lease_time|member|uint16_t lease_time[2];
DECL|mac_addr|member|const void *mac_addr;
DECL|mac_len|member|int mac_len;
DECL|netmask|member|uip_ipaddr_t netmask;
DECL|pt|member|struct pt pt;
DECL|serverid|member|uint8_t serverid[4];
DECL|state|member|char state;
DECL|ticks|member|uint32_t ticks;
