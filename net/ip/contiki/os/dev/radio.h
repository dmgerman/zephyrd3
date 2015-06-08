DECL|RADIO_CONST_CHANNEL_MAX|enumerator|RADIO_CONST_CHANNEL_MAX,
DECL|RADIO_CONST_CHANNEL_MIN|enumerator|RADIO_CONST_CHANNEL_MIN,
DECL|RADIO_CONST_TXPOWER_MAX|enumerator|RADIO_CONST_TXPOWER_MAX
DECL|RADIO_CONST_TXPOWER_MIN|enumerator|RADIO_CONST_TXPOWER_MIN,
DECL|RADIO_H_|macro|RADIO_H_
DECL|RADIO_PARAM_16BIT_ADDR|enumerator|RADIO_PARAM_16BIT_ADDR,
DECL|RADIO_PARAM_64BIT_ADDR|enumerator|RADIO_PARAM_64BIT_ADDR,
DECL|RADIO_PARAM_CCA_THRESHOLD|enumerator|RADIO_PARAM_CCA_THRESHOLD,
DECL|RADIO_PARAM_CHANNEL|enumerator|RADIO_PARAM_CHANNEL,
DECL|RADIO_PARAM_PAN_ID|enumerator|RADIO_PARAM_PAN_ID,
DECL|RADIO_PARAM_POWER_MODE|enumerator|RADIO_PARAM_POWER_MODE,
DECL|RADIO_PARAM_RSSI|enumerator|RADIO_PARAM_RSSI,
DECL|RADIO_PARAM_RX_MODE|enumerator|RADIO_PARAM_RX_MODE,
DECL|RADIO_PARAM_TXPOWER|enumerator|RADIO_PARAM_TXPOWER,
DECL|RADIO_PARAM_TX_MODE|enumerator|RADIO_PARAM_TX_MODE,
DECL|RADIO_POWER_MODE_OFF|enumerator|RADIO_POWER_MODE_OFF,
DECL|RADIO_POWER_MODE_ON|enumerator|RADIO_POWER_MODE_ON
DECL|RADIO_RESULT_ERROR|enumerator|RADIO_RESULT_ERROR
DECL|RADIO_RESULT_INVALID_VALUE|enumerator|RADIO_RESULT_INVALID_VALUE,
DECL|RADIO_RESULT_NOT_SUPPORTED|enumerator|RADIO_RESULT_NOT_SUPPORTED,
DECL|RADIO_RESULT_OK|enumerator|RADIO_RESULT_OK,
DECL|RADIO_RX_MODE_ADDRESS_FILTER|macro|RADIO_RX_MODE_ADDRESS_FILTER
DECL|RADIO_RX_MODE_AUTOACK|macro|RADIO_RX_MODE_AUTOACK
DECL|RADIO_TX_COLLISION|enumerator|RADIO_TX_COLLISION,
DECL|RADIO_TX_ERR|enumerator|RADIO_TX_ERR,
DECL|RADIO_TX_MODE_SEND_ON_CCA|macro|RADIO_TX_MODE_SEND_ON_CCA
DECL|RADIO_TX_NOACK|enumerator|RADIO_TX_NOACK,
DECL|RADIO_TX_OK|enumerator|RADIO_TX_OK,
DECL|channel_clear|member|int (* channel_clear)(void);
DECL|get_object|member|radio_result_t (* get_object)(radio_param_t param, void *dest, size_t size);
DECL|get_value|member|radio_result_t (* get_value)(radio_param_t param, radio_value_t *value);
DECL|init|member|int (* init)(void);
DECL|off|member|int (* off)(void);
DECL|on|member|int (* on)(void);
DECL|pending_packet|member|int (* pending_packet)(void);
DECL|prepare|member|int (* prepare)(const void *payload, unsigned short payload_len);
DECL|radio_driver|struct|struct radio_driver {
DECL|radio_param_t|typedef|typedef unsigned radio_param_t;
DECL|radio_result_t|typedef|} radio_result_t;
DECL|radio_value_t|typedef|typedef int radio_value_t;
DECL|read|member|int (* read)(void *buf, unsigned short buf_len);
DECL|receiving_packet|member|int (* receiving_packet)(void);
DECL|send|member|int (* send)(struct net_buf *buf, const void *payload, unsigned short payload_len);
DECL|set_object|member|radio_result_t (* set_object)(radio_param_t param, const void *src,
DECL|set_value|member|radio_result_t (* set_value)(radio_param_t param, radio_value_t value);
DECL|transmit|member|int (* transmit)(struct net_buf *buf, unsigned short transmit_len);
