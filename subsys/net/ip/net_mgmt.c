DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|event_callbacks|variable|event_callbacks
DECL|events|variable|events
DECL|event|member|uint32_t event;
DECL|global_event_mask|variable|global_event_mask
DECL|iface|member|struct net_if *iface;
DECL|iface|member|struct net_if *iface;
DECL|in_event|variable|in_event
DECL|mgmt_add_event_mask|function|static inline void mgmt_add_event_mask(uint32_t event_mask)
DECL|mgmt_clean_event|function|static inline void mgmt_clean_event(struct mgmt_event_entry *mgmt_event)
DECL|mgmt_event_entry|struct|struct mgmt_event_entry {
DECL|mgmt_event_wait_call|function|static int mgmt_event_wait_call(struct net_if *iface,uint32_t mgmt_event_mask, uint32_t *raised_event, struct net_if **event_iface, int timeout)
DECL|mgmt_event_wait|struct|struct mgmt_event_wait {
DECL|mgmt_is_event_handled|function|static inline bool mgmt_is_event_handled(uint32_t mgmt_event)
DECL|mgmt_pop_event|function|static inline struct mgmt_event_entry *mgmt_pop_event(void)
DECL|mgmt_push_event|function|static inline void mgmt_push_event(uint32_t mgmt_event, struct net_if *iface)
DECL|mgmt_rebuild_global_event_mask|function|static inline void mgmt_rebuild_global_event_mask(void)
DECL|mgmt_run_callbacks|function|static inline void mgmt_run_callbacks(struct mgmt_event_entry *mgmt_event)
DECL|mgmt_thread|function|static void mgmt_thread(void)
DECL|net_mgmt_add_event_callback|function|void net_mgmt_add_event_callback(struct net_mgmt_event_callback *cb)
DECL|net_mgmt_del_event_callback|function|void net_mgmt_del_event_callback(struct net_mgmt_event_callback *cb)
DECL|net_mgmt_event_init|function|void net_mgmt_event_init(void)
DECL|net_mgmt_event_notify|function|void net_mgmt_event_notify(uint32_t mgmt_event, struct net_if *iface)
DECL|net_mgmt_event_wait_on_iface|function|int net_mgmt_event_wait_on_iface(struct net_if *iface, uint32_t mgmt_event_mask, uint32_t *raised_event, int timeout)
DECL|net_mgmt_event_wait|function|int net_mgmt_event_wait(uint32_t mgmt_event_mask,uint32_t *raised_event, struct net_if **iface, int timeout)
DECL|out_event|variable|out_event
DECL|sync_call|member|struct k_sem sync_call;
