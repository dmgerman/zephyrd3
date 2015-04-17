DECL|DNS_EXPIRATION|macro|DNS_EXPIRATION
DECL|added|member|uint32_t added;
DECL|dns|variable|dns
DECL|initialized|variable|initialized
DECL|init|function|init(void)
DECL|ip|member|uip_ipaddr_t ip;
DECL|lifetime|member|uint32_t lifetime;
DECL|next|member|struct uip_nameserver_record *next;
DECL|purge|function|purge(void)
DECL|serveraddr|variable|serveraddr
DECL|serverlifetime|variable|serverlifetime
DECL|uip_nameserver_count|function|uip_nameserver_count(void)
DECL|uip_nameserver_get|function|uip_nameserver_get(uint8_t num)
DECL|uip_nameserver_next_expiration|function|uip_nameserver_next_expiration(void)
DECL|uip_nameserver_record|struct|typedef struct uip_nameserver_record {
DECL|uip_nameserver_record|typedef|} uip_nameserver_record;
DECL|uip_nameserver_update|function|uip_nameserver_update(uip_ipaddr_t *nameserver, uint32_t lifetime)
