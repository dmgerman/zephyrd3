DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|ethernet_get_config|function|static int ethernet_get_config(u32_t mgmt_request, struct net_if *iface, void *data, size_t len)
DECL|ethernet_mgmt_raise_carrier_off_event|function|void ethernet_mgmt_raise_carrier_off_event(struct net_if *iface)
DECL|ethernet_mgmt_raise_carrier_on_event|function|void ethernet_mgmt_raise_carrier_on_event(struct net_if *iface)
DECL|ethernet_mgmt_raise_vlan_disabled_event|function|void ethernet_mgmt_raise_vlan_disabled_event(struct net_if *iface, u16_t tag)
DECL|ethernet_mgmt_raise_vlan_enabled_event|function|void ethernet_mgmt_raise_vlan_enabled_event(struct net_if *iface, u16_t tag)
DECL|ethernet_set_config|function|static int ethernet_set_config(u32_t mgmt_request, struct net_if *iface, void *data, size_t len)
DECL|is_hw_caps_supported|function|static inline bool is_hw_caps_supported(struct device *dev,enum ethernet_hw_caps caps)
