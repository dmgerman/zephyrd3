DECL|ASSERT_ON_ERROR|macro|ASSERT_ON_ERROR
DECL|ASSERT_ON_ERROR|macro|ASSERT_ON_ERROR
DECL|CHANNEL_MASK_ALL|macro|CHANNEL_MASK_ALL
DECL|CLR_STATUS_BIT|macro|CLR_STATUS_BIT
DECL|DEVICE_ERROR|macro|DEVICE_ERROR
DECL|GET_STATUS_BIT|macro|GET_STATUS_BIT
DECL|NETAPP_ERROR|macro|NETAPP_ERROR
DECL|RSSI_TH_MAX|macro|RSSI_TH_MAX
DECL|SET_STATUS_BIT|macro|SET_STATUS_BIT
DECL|SL_STOP_TIMEOUT|macro|SL_STOP_TIMEOUT
DECL|STATUS_BIT_CONNECTION|enumerator|STATUS_BIT_CONNECTION,
DECL|STATUS_BIT_IPV6_ACQUIRED|enumerator|STATUS_BIT_IPV6_ACQUIRED,
DECL|STATUS_BIT_IP_ACQUIRED|enumerator|STATUS_BIT_IP_ACQUIRED,
DECL|STATUS_BIT_IP_LEASED|enumerator|STATUS_BIT_IP_LEASED,
DECL|STATUS_BIT_NWP_INIT|enumerator|STATUS_BIT_NWP_INIT = 0,
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|SimpleLinkFatalErrorEventHandler|function|void SimpleLinkFatalErrorEventHandler(SlDeviceFatal_t *fatal_err_event)
DECL|SimpleLinkGeneralEventHandler|function|void SimpleLinkGeneralEventHandler(SlDeviceEvent_t *dev_event)
DECL|SimpleLinkHttpServerEventHandler|function|void SimpleLinkHttpServerEventHandler(SlNetAppHttpServerEvent_t *http_event, SlNetAppHttpServerResponse_t *http_resp)
DECL|SimpleLinkNetAppEventHandler|function|void SimpleLinkNetAppEventHandler(SlNetAppEvent_t *netapp_event)
DECL|SimpleLinkNetAppRequestEventHandler|function|void SimpleLinkNetAppRequestEventHandler(SlNetAppRequest_t *netapp_request, SlNetAppResponse_t *netapp_response)
DECL|SimpleLinkNetAppRequestMemFreeEventHandler|function|void SimpleLinkNetAppRequestMemFreeEventHandler(u8_t *buffer)
DECL|SimpleLinkSockEventHandler|function|void SimpleLinkSockEventHandler(SlSockEvent_t *psock)
DECL|SimpleLinkWlanEventHandler|function|void SimpleLinkWlanEventHandler(SlWlanEvent_t *wlan_event)
DECL|WLAN_ERROR|macro|WLAN_ERROR
DECL|_simplelink_connect|function|int _simplelink_connect(struct wifi_connect_req_params *params)
DECL|_simplelink_disconnect|function|int _simplelink_disconnect(void)
DECL|_simplelink_get_mac|function|void _simplelink_get_mac(unsigned char *mac)
DECL|_simplelink_get_scan_result|function|void _simplelink_get_scan_result(int index, struct wifi_scan_result *scan_result)
DECL|_simplelink_init|function|int _simplelink_init(simplelink_wifi_cb_t wifi_cb)
DECL|_simplelink_start_scan|function|int _simplelink_start_scan(void)
DECL|cb|member|simplelink_wifi_cb_t cb;
DECL|configure_simplelink|function|static s32_t configure_simplelink(void)
DECL|net_entries|member|SlWlanNetworkEntry_t net_entries[CONFIG_WIFI_SIMPLELINK_SCAN_COUNT];
DECL|nwp_status|struct|struct nwp_status {
DECL|nwp|variable|nwp
DECL|role|member|u32_t role; /* The device's role (STA, P2P or AP) */
DECL|sl_conn|variable|sl_conn
DECL|status_bits|enum|enum status_bits {
DECL|status|member|u32_t status; /* The state of the NWP */
