DECL|WIFI_SHELL_MGMT_EVENTS|macro|WIFI_SHELL_MGMT_EVENTS
DECL|WIFI_SHELL_MODULE|macro|WIFI_SHELL_MODULE
DECL|_unused|member|u8_t _unused : 6;
DECL|all|member|u8_t all;
DECL|connecting|member|u8_t connecting : 1;
DECL|context|variable|context
DECL|disconnecting|member|u8_t disconnecting : 1;
DECL|handle_wifi_connect_result|function|static void handle_wifi_connect_result(struct net_mgmt_event_callback *cb)
DECL|handle_wifi_disconnect_result|function|static void handle_wifi_disconnect_result(struct net_mgmt_event_callback *cb)
DECL|handle_wifi_scan_done|function|static void handle_wifi_scan_done(struct net_mgmt_event_callback *cb)
DECL|handle_wifi_scan_result|function|static void handle_wifi_scan_result(struct net_mgmt_event_callback *cb)
DECL|scan_result|variable|scan_result
DECL|shell_cmd_connect|function|static int shell_cmd_connect(int argc, char *argv[])
DECL|shell_cmd_disconnect|function|static int shell_cmd_disconnect(int argc, char *argv[])
DECL|shell_cmd_scan|function|static int shell_cmd_scan(int argc, char *argv[])
DECL|wifi_commands|variable|wifi_commands
DECL|wifi_mgmt_event_handler|function|static void wifi_mgmt_event_handler(struct net_mgmt_event_callback *cb, u32_t mgmt_event, struct net_if *iface)
DECL|wifi_shell_init|function|static int wifi_shell_init(struct device *unused)
DECL|wifi_shell_mgmt_cb|variable|wifi_shell_mgmt_cb
