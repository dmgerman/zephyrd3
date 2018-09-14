DECL|NET_EVENT_WIFI_CMD_CONNECT_RESULT|enumerator|NET_EVENT_WIFI_CMD_CONNECT_RESULT,
DECL|NET_EVENT_WIFI_CMD_DISCONNECT_RESULT|enumerator|NET_EVENT_WIFI_CMD_DISCONNECT_RESULT,
DECL|NET_EVENT_WIFI_CMD_SCAN_DONE|enumerator|NET_EVENT_WIFI_CMD_SCAN_DONE,
DECL|NET_EVENT_WIFI_CMD_SCAN_RESULT|enumerator|NET_EVENT_WIFI_CMD_SCAN_RESULT = 1,
DECL|NET_EVENT_WIFI_CONNECT_RESULT|macro|NET_EVENT_WIFI_CONNECT_RESULT
DECL|NET_EVENT_WIFI_DISCONNECT_RESULT|macro|NET_EVENT_WIFI_DISCONNECT_RESULT
DECL|NET_EVENT_WIFI_SCAN_DONE|macro|NET_EVENT_WIFI_SCAN_DONE
DECL|NET_EVENT_WIFI_SCAN_RESULT|macro|NET_EVENT_WIFI_SCAN_RESULT
DECL|NET_REQUEST_WIFI_CMD_CONNECT|enumerator|NET_REQUEST_WIFI_CMD_CONNECT,
DECL|NET_REQUEST_WIFI_CMD_DISCONNECT|enumerator|NET_REQUEST_WIFI_CMD_DISCONNECT,
DECL|NET_REQUEST_WIFI_CMD_SCAN|enumerator|NET_REQUEST_WIFI_CMD_SCAN = 1,
DECL|NET_REQUEST_WIFI_CONNECT|macro|NET_REQUEST_WIFI_CONNECT
DECL|NET_REQUEST_WIFI_CONNECT|variable|NET_REQUEST_WIFI_CONNECT
DECL|NET_REQUEST_WIFI_DISCONNECT|macro|NET_REQUEST_WIFI_DISCONNECT
DECL|NET_REQUEST_WIFI_DISCONNECT|variable|NET_REQUEST_WIFI_DISCONNECT
DECL|NET_REQUEST_WIFI_SCAN|macro|NET_REQUEST_WIFI_SCAN
DECL|NET_REQUEST_WIFI_SCAN|variable|NET_REQUEST_WIFI_SCAN
DECL|ZEPHYR_INCLUDE_NET_WIFI_MGMT_H_|macro|ZEPHYR_INCLUDE_NET_WIFI_MGMT_H_
DECL|_NET_WIFI_BASE|macro|_NET_WIFI_BASE
DECL|_NET_WIFI_CODE|macro|_NET_WIFI_CODE
DECL|_NET_WIFI_EVENT|macro|_NET_WIFI_EVENT
DECL|_NET_WIFI_LAYER|macro|_NET_WIFI_LAYER
DECL|channel|member|u8_t channel;
DECL|channel|member|u8_t channel;
DECL|connect|member|int (*connect)(struct device *dev,
DECL|disconnect|member|int (*disconnect)(struct device *dev);
DECL|iface_api|member|struct net_if_api iface_api;
DECL|net_event_wifi_cmd|enum|enum net_event_wifi_cmd {
DECL|net_request_wifi_cmd|enum|enum net_request_wifi_cmd {
DECL|net_wifi_mgmt_offload|struct|struct net_wifi_mgmt_offload {
DECL|psk_length|member|u8_t psk_length; /* Min 8 - Max 64 */
DECL|psk|member|u8_t *psk;
DECL|rssi|member|s8_t rssi;
DECL|scan_result_cb_t|typedef|typedef void (*scan_result_cb_t)(struct net_if *iface, int status,
DECL|scan|member|int (*scan)(struct device *dev, scan_result_cb_t cb);
DECL|security|member|enum wifi_security_type security;
DECL|security|member|enum wifi_security_type security;
DECL|ssid_length|member|u8_t ssid_length;
DECL|ssid_length|member|u8_t ssid_length; /* Max 32 */
DECL|ssid|member|u8_t *ssid;
DECL|ssid|member|u8_t ssid[WIFI_SSID_MAX_LEN];
DECL|status|member|int status;
DECL|wifi_connect_req_params|struct|struct wifi_connect_req_params {
DECL|wifi_scan_result|struct|struct wifi_scan_result {
DECL|wifi_status|struct|struct wifi_status {
