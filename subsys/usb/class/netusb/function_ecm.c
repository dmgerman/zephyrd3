DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|USB_CDC_ECM_REQ_TYPE|macro|USB_CDC_ECM_REQ_TYPE
DECL|USB_CDC_SET_ETH_PKT_FILTER|macro|USB_CDC_SET_ETH_PKT_FILTER
DECL|VERBOSE_DEBUG|macro|VERBOSE_DEBUG
DECL|ecm_class_handler|function|static int ecm_class_handler(struct usb_setup_packet *setup, s32_t *len, u8_t **data)
DECL|ecm_connect|function|static int ecm_connect(bool connected)
DECL|ecm_ep_data|variable|ecm_ep_data
DECL|ecm_eth_size|function|static size_t ecm_eth_size(void *ecm_pkt, size_t len)
DECL|ecm_function|variable|ecm_function
DECL|ecm_int_in|function|static void ecm_int_in(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|ecm_read_cb|function|static void ecm_read_cb(u8_t ep, int size, void *priv)
DECL|ecm_send|function|static int ecm_send(struct net_pkt *pkt)
DECL|ecm_status_cb|function|static void ecm_status_cb(enum usb_dc_status_code status, u8_t *param)
DECL|ecm_status_interface|function|static inline void ecm_status_interface(u8_t *iface)
DECL|rx_buf|variable|rx_buf
DECL|tx_buf|variable|tx_buf
