DECL|NET_MGMT_COMMAND_MASK|macro|NET_MGMT_COMMAND_MASK
DECL|NET_MGMT_EVENT_MASK|macro|NET_MGMT_EVENT_MASK
DECL|NET_MGMT_EVENT|macro|NET_MGMT_EVENT
DECL|NET_MGMT_GET_COMMAND|macro|NET_MGMT_GET_COMMAND
DECL|NET_MGMT_GET_LAYER_CODE|macro|NET_MGMT_GET_LAYER_CODE
DECL|NET_MGMT_GET_LAYER|macro|NET_MGMT_GET_LAYER
DECL|NET_MGMT_LAYER_CODE_MASK|macro|NET_MGMT_LAYER_CODE_MASK
DECL|NET_MGMT_LAYER_MASK|macro|NET_MGMT_LAYER_MASK
DECL|NET_MGMT_ON_IFACE_MASK|macro|NET_MGMT_ON_IFACE_MASK
DECL|NET_MGMT_ON_IFACE|macro|NET_MGMT_ON_IFACE
DECL|NET_MGMT_REGISTER_REQUEST_HANDLER|macro|NET_MGMT_REGISTER_REQUEST_HANDLER
DECL|__NET_MGMT_H__|macro|__NET_MGMT_H__
DECL|event_mask|member|uint32_t event_mask;
DECL|handler|member|net_mgmt_callback_t handler;
DECL|net_mgmt_callback_t|typedef|typedef void (*net_mgmt_callback_t)(struct net_mgmt_event_cb *cb,
DECL|net_mgmt_event_cb|struct|struct net_mgmt_event_cb {
DECL|net_mgmt_init_event_cb|function|static inline void net_mgmt_init_event_cb(struct net_mgmt_event_cb *callback, net_mgmt_callback_t handler, uint32_t mgmt_event_mask)
DECL|net_mgmt_init|macro|net_mgmt_init
DECL|net_mgmt_notify|macro|net_mgmt_notify
DECL|net_mgmt|macro|net_mgmt
DECL|node|member|sys_snode_t node;
