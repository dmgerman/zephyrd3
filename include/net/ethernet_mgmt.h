DECL|NET_EVENT_ETHERNET_CARRIER_OFF|macro|NET_EVENT_ETHERNET_CARRIER_OFF
DECL|NET_EVENT_ETHERNET_CARRIER_ON|macro|NET_EVENT_ETHERNET_CARRIER_ON
DECL|NET_EVENT_ETHERNET_CMD_CARRIER_OFF|enumerator|NET_EVENT_ETHERNET_CMD_CARRIER_OFF,
DECL|NET_EVENT_ETHERNET_CMD_CARRIER_ON|enumerator|NET_EVENT_ETHERNET_CMD_CARRIER_ON = 1,
DECL|NET_EVENT_ETHERNET_CMD_VLAN_TAG_DISABLED|enumerator|NET_EVENT_ETHERNET_CMD_VLAN_TAG_DISABLED,
DECL|NET_EVENT_ETHERNET_CMD_VLAN_TAG_ENABLED|enumerator|NET_EVENT_ETHERNET_CMD_VLAN_TAG_ENABLED,
DECL|NET_EVENT_ETHERNET_VLAN_TAG_DISABLED|macro|NET_EVENT_ETHERNET_VLAN_TAG_DISABLED
DECL|NET_EVENT_ETHERNET_VLAN_TAG_ENABLED|macro|NET_EVENT_ETHERNET_VLAN_TAG_ENABLED
DECL|NET_REQUEST_ETHERNET_CMD_GET_PRIORITY_QUEUES_NUM|enumerator|NET_REQUEST_ETHERNET_CMD_GET_PRIORITY_QUEUES_NUM,
DECL|NET_REQUEST_ETHERNET_CMD_GET_QAV_STATUS|enumerator|NET_REQUEST_ETHERNET_CMD_GET_QAV_STATUS,
DECL|NET_REQUEST_ETHERNET_CMD_SET_AUTO_NEGOTIATION|enumerator|NET_REQUEST_ETHERNET_CMD_SET_AUTO_NEGOTIATION = 1,
DECL|NET_REQUEST_ETHERNET_CMD_SET_DUPLEX|enumerator|NET_REQUEST_ETHERNET_CMD_SET_DUPLEX,
DECL|NET_REQUEST_ETHERNET_CMD_SET_LINK|enumerator|NET_REQUEST_ETHERNET_CMD_SET_LINK,
DECL|NET_REQUEST_ETHERNET_CMD_SET_MAC_ADDRESS|enumerator|NET_REQUEST_ETHERNET_CMD_SET_MAC_ADDRESS,
DECL|NET_REQUEST_ETHERNET_CMD_SET_PROMISC_MODE|enumerator|NET_REQUEST_ETHERNET_CMD_SET_PROMISC_MODE,
DECL|NET_REQUEST_ETHERNET_CMD_SET_QAV_DELTA_BANDWIDTH|enumerator|NET_REQUEST_ETHERNET_CMD_SET_QAV_DELTA_BANDWIDTH,
DECL|NET_REQUEST_ETHERNET_CMD_SET_QAV_IDLE_SLOPE|enumerator|NET_REQUEST_ETHERNET_CMD_SET_QAV_IDLE_SLOPE,
DECL|NET_REQUEST_ETHERNET_CMD_SET_QAV_STATUS|enumerator|NET_REQUEST_ETHERNET_CMD_SET_QAV_STATUS,
DECL|NET_REQUEST_ETHERNET_GET_PRIORITY_QUEUES_NUM|macro|NET_REQUEST_ETHERNET_GET_PRIORITY_QUEUES_NUM
DECL|NET_REQUEST_ETHERNET_GET_PRIORITY_QUEUES_NUM|variable|NET_REQUEST_ETHERNET_GET_PRIORITY_QUEUES_NUM
DECL|NET_REQUEST_ETHERNET_GET_QAV_STATUS|macro|NET_REQUEST_ETHERNET_GET_QAV_STATUS
DECL|NET_REQUEST_ETHERNET_GET_QAV_STATUS|variable|NET_REQUEST_ETHERNET_GET_QAV_STATUS
DECL|NET_REQUEST_ETHERNET_SET_AUTO_NEGOTIATION|macro|NET_REQUEST_ETHERNET_SET_AUTO_NEGOTIATION
DECL|NET_REQUEST_ETHERNET_SET_AUTO_NEGOTIATION|variable|NET_REQUEST_ETHERNET_SET_AUTO_NEGOTIATION
DECL|NET_REQUEST_ETHERNET_SET_DUPLEX|macro|NET_REQUEST_ETHERNET_SET_DUPLEX
DECL|NET_REQUEST_ETHERNET_SET_DUPLEX|variable|NET_REQUEST_ETHERNET_SET_DUPLEX
DECL|NET_REQUEST_ETHERNET_SET_LINK|macro|NET_REQUEST_ETHERNET_SET_LINK
DECL|NET_REQUEST_ETHERNET_SET_LINK|variable|NET_REQUEST_ETHERNET_SET_LINK
DECL|NET_REQUEST_ETHERNET_SET_MAC_ADDRESS|macro|NET_REQUEST_ETHERNET_SET_MAC_ADDRESS
DECL|NET_REQUEST_ETHERNET_SET_MAC_ADDRESS|variable|NET_REQUEST_ETHERNET_SET_MAC_ADDRESS
DECL|NET_REQUEST_ETHERNET_SET_PROMISC_MODE|macro|NET_REQUEST_ETHERNET_SET_PROMISC_MODE
DECL|NET_REQUEST_ETHERNET_SET_PROMISC_MODE|variable|NET_REQUEST_ETHERNET_SET_PROMISC_MODE
DECL|NET_REQUEST_ETHERNET_SET_QAV_DELTA_BANDWIDTH|macro|NET_REQUEST_ETHERNET_SET_QAV_DELTA_BANDWIDTH
DECL|NET_REQUEST_ETHERNET_SET_QAV_DELTA_BANDWIDTH|variable|NET_REQUEST_ETHERNET_SET_QAV_DELTA_BANDWIDTH
DECL|NET_REQUEST_ETHERNET_SET_QAV_IDLE_SLOPE|macro|NET_REQUEST_ETHERNET_SET_QAV_IDLE_SLOPE
DECL|NET_REQUEST_ETHERNET_SET_QAV_IDLE_SLOPE|variable|NET_REQUEST_ETHERNET_SET_QAV_IDLE_SLOPE
DECL|NET_REQUEST_ETHERNET_SET_QAV_STATUS|macro|NET_REQUEST_ETHERNET_SET_QAV_STATUS
DECL|NET_REQUEST_ETHERNET_SET_QAV_STATUS|variable|NET_REQUEST_ETHERNET_SET_QAV_STATUS
DECL|_NET_ETHERNET_BASE|macro|_NET_ETHERNET_BASE
DECL|_NET_ETHERNET_CODE|macro|_NET_ETHERNET_CODE
DECL|_NET_ETHERNET_EVENT|macro|_NET_ETHERNET_EVENT
DECL|_NET_ETHERNET_LAYER|macro|_NET_ETHERNET_LAYER
DECL|__ETHERNET_MGMT_H__|macro|__ETHERNET_MGMT_H__
DECL|auto_negotiation|member|bool auto_negotiation;
DECL|ethernet_mgmt_raise_carrier_off_event|function|static inline void ethernet_mgmt_raise_carrier_off_event(struct net_if *iface)
DECL|ethernet_mgmt_raise_carrier_on_event|function|static inline void ethernet_mgmt_raise_carrier_on_event(struct net_if *iface)
DECL|ethernet_mgmt_raise_vlan_disabled_event|function|static inline void ethernet_mgmt_raise_vlan_disabled_event(struct net_if *iface, u16_t tag)
DECL|ethernet_mgmt_raise_vlan_enabled_event|function|static inline void ethernet_mgmt_raise_vlan_enabled_event(struct net_if *iface, u16_t tag)
DECL|ethernet_req_params|struct|struct ethernet_req_params {
DECL|full_duplex|member|bool full_duplex;
DECL|link_1000bt|member|bool link_1000bt;
DECL|link_100bt|member|bool link_100bt;
DECL|link_10bt|member|bool link_10bt;
DECL|l|member|} l;
DECL|mac_address|member|struct net_eth_addr mac_address;
DECL|net_event_ethernet_cmd|enum|enum net_event_ethernet_cmd {
DECL|net_request_ethernet_cmd|enum|enum net_request_ethernet_cmd {
DECL|priority_queues_num|member|int priority_queues_num;
DECL|promisc_mode|member|bool promisc_mode;
DECL|qav_queue_param|member|struct ethernet_qav_queue_param qav_queue_param;
