DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|_scan_result_cb|function|static void _scan_result_cb(struct net_if *iface, int status, struct wifi_scan_result *entry)
DECL|wifi_connect|function|static int wifi_connect(u32_t mgmt_request, struct net_if *iface,void *data, size_t len)
DECL|wifi_disconnect|function|static int wifi_disconnect(u32_t mgmt_request, struct net_if *iface, void *data, size_t len)
DECL|wifi_mgmt_raise_connect_result_event|function|void wifi_mgmt_raise_connect_result_event(struct net_if *iface, int status)
DECL|wifi_mgmt_raise_disconnect_result_event|function|void wifi_mgmt_raise_disconnect_result_event(struct net_if *iface, int status)
DECL|wifi_scan|function|static int wifi_scan(u32_t mgmt_request, struct net_if *iface, void *data, size_t len)
