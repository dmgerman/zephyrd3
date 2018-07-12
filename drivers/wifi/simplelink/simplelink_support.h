DECL|BSSID_LEN_MAX|macro|BSSID_LEN_MAX
DECL|SIMPLELINK_WIFI_CB_IPACQUIRED|macro|SIMPLELINK_WIFI_CB_IPACQUIRED
DECL|SSID_LEN_MAX|macro|SSID_LEN_MAX
DECL|__SIMPLELINK_SUPPORT_H__|macro|__SIMPLELINK_SUPPORT_H__
DECL|bssid|member|u8_t bssid[BSSID_LEN_MAX];
DECL|error|member|s16_t error;
DECL|gateway_ip|member|u32_t gateway_ip;
DECL|ip_addr|member|u32_t ip_addr;
DECL|ipv6_addr|member|u32_t ipv6_addr[4];
DECL|simplelink_wifi_cb_t|typedef|typedef void (*simplelink_wifi_cb_t)(u32_t mgmt_event,
DECL|sl_connect_state|struct|struct sl_connect_state {
DECL|ssid|member|u8_t ssid[SSID_LEN_MAX + 1];
DECL|sta_ip|member|u32_t sta_ip;
