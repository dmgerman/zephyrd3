DECL|BT_MESH_BEACON_DISABLED|macro|BT_MESH_BEACON_DISABLED
DECL|BT_MESH_BEACON_ENABLED|macro|BT_MESH_BEACON_ENABLED
DECL|BT_MESH_BEEP|enumerator|BT_MESH_BEEP = BIT(1),
DECL|BT_MESH_BLINK|enumerator|BT_MESH_BLINK = BIT(0),
DECL|BT_MESH_DISPLAY_NUMBER|enumerator|BT_MESH_DISPLAY_NUMBER = BIT(3),
DECL|BT_MESH_DISPLAY_STRING|enumerator|BT_MESH_DISPLAY_STRING = BIT(4),
DECL|BT_MESH_ENTER_NUMBER|enumerator|BT_MESH_ENTER_NUMBER = BIT(2),
DECL|BT_MESH_ENTER_STRING|enumerator|BT_MESH_ENTER_STRING = BIT(3),
DECL|BT_MESH_FEAT_FRIEND|macro|BT_MESH_FEAT_FRIEND
DECL|BT_MESH_FEAT_LOW_POWER|macro|BT_MESH_FEAT_LOW_POWER
DECL|BT_MESH_FEAT_PROXY|macro|BT_MESH_FEAT_PROXY
DECL|BT_MESH_FEAT_RELAY|macro|BT_MESH_FEAT_RELAY
DECL|BT_MESH_FRIEND_DISABLED|macro|BT_MESH_FRIEND_DISABLED
DECL|BT_MESH_FRIEND_ENABLED|macro|BT_MESH_FRIEND_ENABLED
DECL|BT_MESH_FRIEND_NOT_SUPPORTED|macro|BT_MESH_FRIEND_NOT_SUPPORTED
DECL|BT_MESH_GATT_PROXY_DISABLED|macro|BT_MESH_GATT_PROXY_DISABLED
DECL|BT_MESH_GATT_PROXY_ENABLED|macro|BT_MESH_GATT_PROXY_ENABLED
DECL|BT_MESH_GATT_PROXY_NOT_SUPPORTED|macro|BT_MESH_GATT_PROXY_NOT_SUPPORTED
DECL|BT_MESH_NET_PRIMARY|macro|BT_MESH_NET_PRIMARY
DECL|BT_MESH_NODE_IDENTITY_NOT_SUPPORTED|macro|BT_MESH_NODE_IDENTITY_NOT_SUPPORTED
DECL|BT_MESH_NODE_IDENTITY_RUNNING|macro|BT_MESH_NODE_IDENTITY_RUNNING
DECL|BT_MESH_NODE_IDENTITY_STOPPED|macro|BT_MESH_NODE_IDENTITY_STOPPED
DECL|BT_MESH_NO_INPUT|enumerator|BT_MESH_NO_INPUT = 0,
DECL|BT_MESH_NO_OUTPUT|enumerator|BT_MESH_NO_OUTPUT = 0,
DECL|BT_MESH_PUSH|enumerator|BT_MESH_PUSH = BIT(0),
DECL|BT_MESH_RELAY_DISABLED|macro|BT_MESH_RELAY_DISABLED
DECL|BT_MESH_RELAY_ENABLED|macro|BT_MESH_RELAY_ENABLED
DECL|BT_MESH_RELAY_NOT_SUPPORTED|macro|BT_MESH_RELAY_NOT_SUPPORTED
DECL|BT_MESH_TWIST|enumerator|BT_MESH_TWIST = BIT(1),
DECL|BT_MESH_VIBRATE|enumerator|BT_MESH_VIBRATE = BIT(2),
DECL|__BT_MESH_MAIN_H|macro|__BT_MESH_MAIN_H
DECL|bt_mesh_input_action|typedef|} bt_mesh_input_action;
DECL|bt_mesh_output_action|typedef|} bt_mesh_output_action;
DECL|bt_mesh_prov|struct|struct bt_mesh_prov {
DECL|complete|member|void (*complete)(u16_t addr);
DECL|input_actions|member|u16_t input_actions;
DECL|input_size|member|u8_t input_size;
DECL|input|member|int (*input)(bt_mesh_input_action act, u8_t size);
DECL|link_close|member|void (*link_close)(void);
DECL|link_open|member|void (*link_open)(void);
DECL|output_actions|member|u16_t output_actions;
DECL|output_number|member|int (*output_number)(bt_mesh_output_action act, u32_t num);
DECL|output_size|member|u8_t output_size;
DECL|output_string|member|int (*output_string)(const char *str);
DECL|static_val_len|member|u8_t static_val_len;
DECL|static_val|member|const u8_t *static_val;
DECL|uuid|member|const u8_t *uuid;
