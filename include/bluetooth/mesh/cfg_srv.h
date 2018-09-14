DECL|BT_MESH_MODEL_CFG_SRV|macro|BT_MESH_MODEL_CFG_SRV
DECL|ZEPHYR_INCLUDE_BLUETOOTH_MESH_CFG_SRV_H_|macro|ZEPHYR_INCLUDE_BLUETOOTH_MESH_CFG_SRV_H_
DECL|beacon|member|u8_t beacon; /* Secure Network Beacon state */
DECL|bt_mesh_cfg_srv|struct|struct bt_mesh_cfg_srv {
DECL|bt_mesh_hb_pub|struct|struct bt_mesh_hb_pub {
DECL|bt_mesh_hb_sub|struct|struct bt_mesh_hb_sub {
DECL|count|member|u16_t count;
DECL|count|member|u16_t count;
DECL|default_ttl|member|u8_t default_ttl; /* Default TTL */
DECL|dst|member|u16_t dst;
DECL|dst|member|u16_t dst;
DECL|expiry|member|s64_t expiry;
DECL|feat|member|u16_t feat;
DECL|frnd|member|u8_t frnd; /* Friend state */
DECL|func|member|void (*func)(u8_t hops, u16_t feat);
DECL|gatt_proxy|member|u8_t gatt_proxy; /* GATT Proxy state */
DECL|hb_pub|member|} hb_pub;
DECL|hb_sub|member|} hb_sub;
DECL|max_hops|member|u8_t max_hops;
DECL|min_hops|member|u8_t min_hops;
DECL|model|member|struct bt_mesh_model *model;
DECL|net_idx|member|u16_t net_idx;
DECL|net_transmit|member|u8_t net_transmit; /* Network Transmit state */
DECL|period|member|u8_t period;
DECL|relay_retransmit|member|u8_t relay_retransmit; /* Relay Retransmit state */
DECL|relay|member|u8_t relay; /* Relay Mode state */
DECL|src|member|u16_t src;
DECL|timer|member|struct k_delayed_work timer;
DECL|ttl|member|u8_t ttl;
