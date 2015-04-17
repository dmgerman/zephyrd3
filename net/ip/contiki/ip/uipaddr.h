DECL|UIPADDR_H_|macro|UIPADDR_H_
DECL|UIP_802154_LONGADDR_LEN|macro|UIP_802154_LONGADDR_LEN
DECL|UIP_802154_SHORTADDR_LEN|macro|UIP_802154_SHORTADDR_LEN
DECL|UIP_LLADDR_LEN|macro|UIP_LLADDR_LEN
DECL|UIP_LLADDR_LEN|macro|UIP_LLADDR_LEN
DECL|UIP_LLADDR_LEN|macro|UIP_LLADDR_LEN
DECL|addr|member|uint8_t addr[2];
DECL|addr|member|uint8_t addr[6];
DECL|addr|member|uint8_t addr[6];
DECL|addr|member|uint8_t addr[8];
DECL|u16|member|uint16_t u16[2];
DECL|u16|member|uint16_t u16[8];
DECL|u8|member|uint8_t u8[16]; /* Initializer, must come first. */
DECL|u8|member|uint8_t u8[4]; /* Initializer, must come first. */
DECL|uip_80211_addr|struct|typedef struct uip_80211_addr {
DECL|uip_80211_addr|typedef|} uip_80211_addr;
DECL|uip_802154_longaddr|struct|typedef struct uip_802154_longaddr {
DECL|uip_802154_longaddr|typedef|} uip_802154_longaddr;
DECL|uip_802154_shortaddr|struct|typedef struct uip_802154_shortaddr {
DECL|uip_802154_shortaddr|typedef|} uip_802154_shortaddr;
DECL|uip_eth_addr|struct|typedef struct uip_eth_addr {
DECL|uip_eth_addr|typedef|} uip_eth_addr;
DECL|uip_ip4addr_t|typedef|} uip_ip4addr_t;
DECL|uip_ip4addr_t|union|typedef union uip_ip4addr_t {
DECL|uip_ip6addr_t|typedef|} uip_ip6addr_t;
DECL|uip_ip6addr_t|union|typedef union uip_ip6addr_t {
DECL|uip_ipaddr_t|typedef|typedef uip_ip4addr_t uip_ipaddr_t;
DECL|uip_ipaddr_t|typedef|typedef uip_ip6addr_t uip_ipaddr_t;
DECL|uip_lladdr_t|typedef|typedef uip_80211_addr uip_lladdr_t;
DECL|uip_lladdr_t|typedef|typedef uip_802154_longaddr uip_lladdr_t;
DECL|uip_lladdr_t|typedef|typedef uip_eth_addr uip_lladdr_t;
