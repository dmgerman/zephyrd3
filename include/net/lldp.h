DECL|LLDP_TLV_CHASSIS_ID|enumerator|LLDP_TLV_CHASSIS_ID,
DECL|LLDP_TLV_END_LLDPDU|enumerator|LLDP_TLV_END_LLDPDU = 0,
DECL|LLDP_TLV_MANAGEMENT_ADDR|enumerator|LLDP_TLV_MANAGEMENT_ADDR,
DECL|LLDP_TLV_ORG_SPECIFIC|enumerator|LLDP_TLV_ORG_SPECIFIC = 127
DECL|LLDP_TLV_PORT_DESC|enumerator|LLDP_TLV_PORT_DESC,
DECL|LLDP_TLV_PORT_ID|enumerator|LLDP_TLV_PORT_ID,
DECL|LLDP_TLV_SYSTEM_CAPABILITIES|enumerator|LLDP_TLV_SYSTEM_CAPABILITIES,
DECL|LLDP_TLV_SYSTEM_DESC|enumerator|LLDP_TLV_SYSTEM_DESC,
DECL|LLDP_TLV_SYSTEM_NAME|enumerator|LLDP_TLV_SYSTEM_NAME,
DECL|LLDP_TLV_TTL|enumerator|LLDP_TLV_TTL,
DECL|NET_LLDP_CHASSIS_ID_TLV_LEN|macro|NET_LLDP_CHASSIS_ID_TLV_LEN
DECL|NET_LLDP_CHASSIS_ID_VALUE_LEN|macro|NET_LLDP_CHASSIS_ID_VALUE_LEN
DECL|NET_LLDP_CHASSIS_ID_VALUE_LEN|macro|NET_LLDP_CHASSIS_ID_VALUE_LEN
DECL|NET_LLDP_CHASSIS_ID_VALUE|macro|NET_LLDP_CHASSIS_ID_VALUE
DECL|NET_LLDP_CHASSIS_ID_VALUE|macro|NET_LLDP_CHASSIS_ID_VALUE
DECL|NET_LLDP_END_LLDPDU_VALUE|macro|NET_LLDP_END_LLDPDU_VALUE
DECL|NET_LLDP_PORT_ID_TLV_LEN|macro|NET_LLDP_PORT_ID_TLV_LEN
DECL|NET_LLDP_PORT_ID_VALUE_LEN|macro|NET_LLDP_PORT_ID_VALUE_LEN
DECL|NET_LLDP_PORT_ID_VALUE_LEN|macro|NET_LLDP_PORT_ID_VALUE_LEN
DECL|NET_LLDP_PORT_ID_VALUE|macro|NET_LLDP_PORT_ID_VALUE
DECL|NET_LLDP_PORT_ID_VALUE|macro|NET_LLDP_PORT_ID_VALUE
DECL|NET_LLDP_TTL_TLV_LEN|macro|NET_LLDP_TTL_TLV_LEN
DECL|NET_LLDP_TTL|macro|NET_LLDP_TTL
DECL|__LLDP_H|macro|__LLDP_H
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|chassis_id|member|struct net_lldp_chassis_tlv chassis_id; /* Mandatory TLV */
DECL|end_lldpdu_tlv|member|const uint16_t end_lldpdu_tlv;
DECL|net_lldp_chassis_tlv|struct|struct net_lldp_chassis_tlv {
DECL|net_lldp_port_tlv|struct|struct net_lldp_port_tlv {
DECL|net_lldp_recv_cb_t|typedef|typedef enum net_verdict (*net_lldp_recv_cb_t)(struct net_if *iface,
DECL|net_lldp_time_to_live_tlv|struct|struct net_lldp_time_to_live_tlv {
DECL|net_lldp_tlv_type|enum|enum net_lldp_tlv_type {
DECL|net_lldpdu|struct|struct net_lldpdu {
DECL|port_id|member|struct net_lldp_port_tlv port_id; /* Mandatory TLV */
DECL|subtype|member|uint8_t subtype; /* ID subtype. */
DECL|subtype|member|uint8_t subtype; /* ID subtype. */
DECL|ttl|member|struct net_lldp_time_to_live_tlv ttl; /* Mandatory TLV */
DECL|ttl|member|uint16_t ttl; /* Time to live */
DECL|type_length|member|uint16_t type_length; /* 7 bits for type, 9 bits for length */
DECL|type_length|member|uint16_t type_length; /* 7 bits for type, 9 bits for length */
DECL|type_length|member|uint16_t type_length; /* 7 bits for type, 9 bits for length */
DECL|value|member|uint8_t value[NET_LLDP_CHASSIS_ID_VALUE_LEN];
DECL|value|member|uint8_t value[NET_LLDP_PORT_ID_VALUE_LEN];
