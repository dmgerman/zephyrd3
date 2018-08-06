DECL|BLUETOOTH_L2_CTX_TYPE|macro|BLUETOOTH_L2_CTX_TYPE
DECL|BLUETOOTH_L2|macro|BLUETOOTH_L2
DECL|BLUETOOTH_L2|variable|BLUETOOTH_L2
DECL|DUMMY_L2_CTX_TYPE|macro|DUMMY_L2_CTX_TYPE
DECL|DUMMY_L2|macro|DUMMY_L2
DECL|DUMMY_L2|variable|DUMMY_L2
DECL|ETHERNET_L2|macro|ETHERNET_L2
DECL|ETHERNET_L2|variable|ETHERNET_L2
DECL|IEEE802154_L2|macro|IEEE802154_L2
DECL|IEEE802154_L2|variable|IEEE802154_L2
DECL|NET_L2_DATA_INIT|macro|NET_L2_DATA_INIT
DECL|NET_L2_DECLARE_PUBLIC|macro|NET_L2_DECLARE_PUBLIC
DECL|NET_L2_GET_CTX_TYPE|macro|NET_L2_GET_CTX_TYPE
DECL|NET_L2_GET_DATA|macro|NET_L2_GET_DATA
DECL|NET_L2_GET_NAME|macro|NET_L2_GET_NAME
DECL|NET_L2_INIT|macro|NET_L2_INIT
DECL|NET_L2_MULTICAST|enumerator|NET_L2_MULTICAST = BIT(0),
DECL|OPENTHREAD_L2|macro|OPENTHREAD_L2
DECL|OPENTHREAD_L2|variable|OPENTHREAD_L2
DECL|__NET_L2_H__|macro|__NET_L2_H__
DECL|enable|member|int (*enable)(struct net_if *iface, bool state);
DECL|get_flags|member|enum net_l2_flags (*get_flags)(struct net_if *iface);
DECL|net_l2_flags|enum|enum net_l2_flags {
DECL|net_l2|struct|struct net_l2 {
DECL|recv|member|enum net_verdict (*recv)(struct net_if *iface, struct net_pkt *pkt);
DECL|reserve|member|u16_t (*reserve)(struct net_if *iface, void *data);
DECL|send|member|enum net_verdict (*send)(struct net_if *iface, struct net_pkt *pkt);
