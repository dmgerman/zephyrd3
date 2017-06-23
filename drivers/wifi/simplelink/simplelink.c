DECL|SCAN_RETRY_DELAY|macro|SCAN_RETRY_DELAY
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|cb|member|scan_result_cb_t cb;
DECL|iface|member|struct net_if *iface;
DECL|mac|member|unsigned char mac[6];
DECL|num_results_or_err|member|int num_results_or_err;
DECL|scan_retries|member|int scan_retries;
DECL|simplelink_api|variable|simplelink_api
DECL|simplelink_data|struct|struct simplelink_data {
DECL|simplelink_data|variable|simplelink_data
DECL|simplelink_dummy_get|function|static int simplelink_dummy_get(sa_family_t family,enum net_sock_type type, enum net_ip_protocol ip_proto, struct net_context **context)
DECL|simplelink_iface_init|function|static void simplelink_iface_init(struct net_if *iface)
DECL|simplelink_init|function|static int simplelink_init(struct device *dev)
DECL|simplelink_mgmt_connect|function|static int simplelink_mgmt_connect(struct device *dev, struct wifi_connect_req_params *params)
DECL|simplelink_mgmt_disconnect|function|static int simplelink_mgmt_disconnect(struct device *dev)
DECL|simplelink_mgmt_scan|function|static int simplelink_mgmt_scan(struct device *dev, scan_result_cb_t cb)
DECL|simplelink_offload|variable|simplelink_offload
DECL|simplelink_scan_work_handler|function|static void simplelink_scan_work_handler(struct k_work *work)
DECL|simplelink_wifi_cb|function|static void simplelink_wifi_cb(u32_t event, struct sl_connect_state *conn)
DECL|work|member|struct k_delayed_work work;
