DECL|CONFIG_NET_GPTP_STACK_SIZE|macro|CONFIG_NET_GPTP_STACK_SIZE
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|PRINT_INFO|macro|PRINT_INFO
DECL|cb|member|gptp_port_cb_t cb;
DECL|disable_port|function|static void disable_port(int port)
DECL|gptp_add_port|function|static void gptp_add_port(struct net_if *iface, void *user_data)
DECL|gptp_compute_clock_identity|function|static void gptp_compute_clock_identity(int port)
DECL|gptp_domain|variable|gptp_domain
DECL|gptp_foreach_port|function|void gptp_foreach_port(gptp_port_cb_t cb, void *user_data)
DECL|gptp_get_domain|function|struct gptp_domain *gptp_get_domain(void)
DECL|gptp_get_port_data|function|int gptp_get_port_data(struct gptp_domain *domain, int port, struct gptp_port_ds **port_ds, struct gptp_port_param_ds **port_param_ds, struct gptp_port_states **port_state,
DECL|gptp_get_port_number|function|int gptp_get_port_number(struct net_if *iface)
DECL|gptp_get_port|function|static void gptp_get_port(struct net_if *iface, void *user_data)
DECL|gptp_handle_critical_msg|function|static bool gptp_handle_critical_msg(struct net_if *iface, struct net_pkt *pkt)
DECL|gptp_handle_msg|function|static void gptp_handle_msg(struct net_pkt *pkt)
DECL|gptp_init_clock_ds|function|static void gptp_init_clock_ds(void)
DECL|gptp_init_port_ds|function|static void gptp_init_port_ds(int port)
DECL|gptp_init_state_machine|function|static void gptp_init_state_machine(void)
DECL|gptp_is_slave_port|function|bool gptp_is_slave_port(int port)
DECL|gptp_rx_queue|variable|gptp_rx_queue
DECL|gptp_set_time_itv|function|void gptp_set_time_itv(struct gptp_uscaled_ns *interval, u16_t seconds, s8_t log_msg_interval)
DECL|gptp_state_machine|function|static void gptp_state_machine(void)
DECL|gptp_thread_data|variable|gptp_thread_data
DECL|gptp_thread|function|static void gptp_thread(void)
DECL|gptp_update_announce_interval|function|void gptp_update_announce_interval(int port, s8_t log_val)
DECL|gptp_update_pdelay_req_interval|function|void gptp_update_pdelay_req_interval(int port, s8_t log_val)
DECL|gptp_update_sync_interval|function|void gptp_update_sync_interval(int port, s8_t log_val)
DECL|gptp_uscaled_ns_to_timer_ms|function|s32_t gptp_uscaled_ns_to_timer_ms(struct gptp_uscaled_ns *usns)
DECL|iface|member|struct net_if *iface;
DECL|init_ports|function|static void init_ports(void)
DECL|net_gptp_init|function|void net_gptp_init(void)
DECL|net_gptp_recv|function|enum net_verdict net_gptp_recv(struct net_if *iface, struct net_pkt *pkt)
DECL|port_user_data|struct|struct port_user_data {
DECL|setup_vlan_events_listener|function|static void setup_vlan_events_listener(void)
DECL|tid|variable|tid
DECL|timer_get_remaining_and_stop|function|static s32_t timer_get_remaining_and_stop(struct k_timer *timer)
DECL|update_itv|function|static s32_t update_itv(struct gptp_uscaled_ns *itv, s8_t *cur_log_itv, s8_t *ini_log_itv, s8_t new_log_itv, s8_t correction_log_itv)
DECL|user_data|member|void *user_data;
DECL|vlan_cb|variable|vlan_cb
DECL|vlan_disabled|function|static void vlan_disabled(struct k_work *work)
DECL|vlan_enabled|function|static void vlan_enabled(struct k_work *work)
DECL|vlan_event_handler|function|static void vlan_event_handler(struct net_mgmt_event_callback *cb, u32_t mgmt_event, struct net_if *iface)
DECL|vlan_work|struct|struct vlan_work {
DECL|vlan|variable|vlan
DECL|work|member|struct k_work work;
