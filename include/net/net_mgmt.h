DECL|NET_MGMT_COMMAND_MASK|macro|NET_MGMT_COMMAND_MASK
DECL|NET_MGMT_DEFINE_REQUEST_HANDLER|macro|NET_MGMT_DEFINE_REQUEST_HANDLER
DECL|NET_MGMT_EVENT_BIT|macro|NET_MGMT_EVENT_BIT
DECL|NET_MGMT_EVENT_MASK|macro|NET_MGMT_EVENT_MASK
DECL|NET_MGMT_EVENT_SYNCHRONOUS|macro|NET_MGMT_EVENT_SYNCHRONOUS
DECL|NET_MGMT_EVENT|macro|NET_MGMT_EVENT
DECL|NET_MGMT_GET_COMMAND|macro|NET_MGMT_GET_COMMAND
DECL|NET_MGMT_GET_LAYER_CODE|macro|NET_MGMT_GET_LAYER_CODE
DECL|NET_MGMT_GET_LAYER|macro|NET_MGMT_GET_LAYER
DECL|NET_MGMT_IFACE_BIT|macro|NET_MGMT_IFACE_BIT
DECL|NET_MGMT_LAYER_CODE_MASK|macro|NET_MGMT_LAYER_CODE_MASK
DECL|NET_MGMT_LAYER_CODE|macro|NET_MGMT_LAYER_CODE
DECL|NET_MGMT_LAYER_L1|macro|NET_MGMT_LAYER_L1
DECL|NET_MGMT_LAYER_L2|macro|NET_MGMT_LAYER_L2
DECL|NET_MGMT_LAYER_L3|macro|NET_MGMT_LAYER_L3
DECL|NET_MGMT_LAYER_MASK|macro|NET_MGMT_LAYER_MASK
DECL|NET_MGMT_LAYER|macro|NET_MGMT_LAYER
DECL|NET_MGMT_ON_IFACE_MASK|macro|NET_MGMT_ON_IFACE_MASK
DECL|NET_MGMT_ON_IFACE|macro|NET_MGMT_ON_IFACE
DECL|NET_MGMT_REGISTER_REQUEST_HANDLER|macro|NET_MGMT_REGISTER_REQUEST_HANDLER
DECL|NET_MGMT_SYNC_EVENT_BIT|macro|NET_MGMT_SYNC_EVENT_BIT
DECL|NET_MGMT_SYNC_EVENT_MASK|macro|NET_MGMT_SYNC_EVENT_MASK
DECL|__NET_MGMT_H__|macro|__NET_MGMT_H__
DECL|event_mask|member|u32_t event_mask;
DECL|handler|member|net_mgmt_event_handler_t handler;
DECL|info|member|const void *info;
DECL|net_mgmt_add_event_callback|macro|net_mgmt_add_event_callback
DECL|net_mgmt_event_callback|struct|struct net_mgmt_event_callback {
DECL|net_mgmt_event_handler_t|typedef|typedef void (*net_mgmt_event_handler_t)(struct net_mgmt_event_callback *cb,
DECL|net_mgmt_event_init|macro|net_mgmt_event_init
DECL|net_mgmt_event_notify|function|static inline void net_mgmt_event_notify(u32_t mgmt_event, struct net_if *iface)
DECL|net_mgmt_event_notify|macro|net_mgmt_event_notify
DECL|net_mgmt_event_wait_on_iface|function|static inline int net_mgmt_event_wait_on_iface(struct net_if *iface, u32_t mgmt_event_mask, u32_t *raised_event, const void **info, int timeout)
DECL|net_mgmt_event_wait|function|static inline int net_mgmt_event_wait(u32_t mgmt_event_mask, u32_t *raised_event, struct net_if **iface, const void **info, int timeout)
DECL|net_mgmt_init_event_callback|function|void net_mgmt_init_event_callback(struct net_mgmt_event_callback *cb, net_mgmt_event_handler_t handler, u32_t mgmt_event_mask)
DECL|net_mgmt_init_event_callback|macro|net_mgmt_init_event_callback
DECL|net_mgmt_request_handler_t|typedef|typedef int (*net_mgmt_request_handler_t)(u32_t mgmt_request,
DECL|net_mgmt|macro|net_mgmt
DECL|node|member|sys_snode_t node;
DECL|raised_event|member|u32_t raised_event;
DECL|sync_call|member|struct k_sem *sync_call;
