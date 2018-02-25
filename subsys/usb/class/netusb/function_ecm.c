DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|USB_CDC_ECM_REQ_TYPE|macro|USB_CDC_ECM_REQ_TYPE
DECL|USB_CDC_SET_ETH_PKT_FILTER|macro|USB_CDC_SET_ETH_PKT_FILTER
DECL|VERBOSE_DEBUG|macro|VERBOSE_DEBUG
DECL|append_bytes|function|static int append_bytes(u8_t *out_buf, u16_t buf_len, u8_t *data,u16_t len, u16_t remaining)
DECL|ecm_bulk_in|function|static void ecm_bulk_in(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|ecm_bulk_out|function|static void ecm_bulk_out(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|ecm_class_handler|function|static int ecm_class_handler(struct usb_setup_packet *setup, s32_t *len, u8_t **data)
DECL|ecm_ep_data|variable|ecm_ep_data
DECL|ecm_function|variable|ecm_function
DECL|ecm_have_payload|function|static bool ecm_have_payload(struct net_pkt *pkt)
DECL|ecm_int_in|function|static void ecm_int_in(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|ecm_send|function|static int ecm_send(struct net_pkt *pkt)
DECL|in_pkt|variable|in_pkt
DECL|skip|variable|skip
