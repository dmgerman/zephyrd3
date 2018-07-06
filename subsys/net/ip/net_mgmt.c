DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|event_callbacks|variable|event_callbacks
DECL|events|variable|events
DECL|event|member|u32_t event;
DECL|global_event_mask|variable|global_event_mask
DECL|iface|member|struct net_if *iface;
DECL|iface|member|struct net_if *iface;
DECL|in_event|variable|in_event
DECL|info_length|member|size_t info_length;
DECL|info|member|u8_t info[NET_EVENT_INFO_MAX_SIZE];
DECL|mgmt_add_event_mask|function|static inline void mgmt_add_event_mask(u32_t event_mask)
DECL|mgmt_clean_event|function|static inline void mgmt_clean_event(struct mgmt_event_entry *mgmt_event)
DECL|mgmt_event_entry|struct|struct mgmt_event_entry {
DECL|mgmt_event_wait_call|function|static int mgmt_event_wait_call(struct net_if *iface,u32_t mgmt_event_mask, u32_t *raised_event, struct net_if **event_iface, const void **info,
DECL|mgmt_event_wait|struct|struct mgmt_event_wait {
DECL|mgmt_is_event_handled|function|static inline bool mgmt_is_event_handled(u32_t mgmt_event)
DECL|mgmt_pop_event|function|static inline struct mgmt_event_entry *mgmt_pop_event(void)
DECL|mgmt_push_event|function|static inline void mgmt_push_event(u32_t mgmt_event, struct net_if *iface, void *info, size_t length)
DECL|mgmt_rebuild_global_event_mask|function|static inline void mgmt_rebuild_global_event_mask(void)
DECL|mgmt_run_callbacks|function|static inline void mgmt_run_callbacks(struct mgmt_event_entry *mgmt_event)
DECL|mgmt_thread_data|variable|mgmt_thread_data
DECL|mgmt_thread|function|static void mgmt_thread(void)
DECL|net_mgmt_add_event_callback|function|void net_mgmt_add_event_callback(struct net_mgmt_event_callback *cb)
DECL|net_mgmt_del_event_callback|function|void net_mgmt_del_event_callback(struct net_mgmt_event_callback *cb)
DECL|net_mgmt_event_init|function|void net_mgmt_event_init(void)
DECL|net_mgmt_event_notify_with_info|function|void net_mgmt_event_notify_with_info(u32_t mgmt_event, struct net_if *iface, void *info, size_t length)
DECL|net_mgmt_event_wait_on_iface|function|int net_mgmt_event_wait_on_iface(struct net_if *iface, u32_t mgmt_event_mask, u32_t *raised_event, const void **info, int timeout)
DECL|net_mgmt_event_wait|function|int net_mgmt_event_wait(u32_t mgmt_event_mask,u32_t *raised_event, struct net_if **iface, const void **info, int timeout)
DECL|out_event|variable|out_event
DECL|sync_call|member|struct k_sem sync_call;
