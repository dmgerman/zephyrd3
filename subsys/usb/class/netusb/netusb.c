DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|VERBOSE_DEBUG|macro|VERBOSE_DEBUG
DECL|__netusb|struct|static struct __netusb {
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bLength|member|u8_t bLength;
DECL|bString|member|u8_t bString[USB_BSTRING_LENGTH(CONFIG_USB_DEVICE_NETWORK_ECM_MAC)];
DECL|enabled|member|bool enabled;
DECL|func|member|struct netusb_function *func;
DECL|iad|member|struct usb_association_descriptor iad;
DECL|iad|member|struct usb_association_descriptor iad;
DECL|iad|member|struct usb_association_descriptor iad;
DECL|if0_acm|member|struct cdc_acm_descriptor if0_acm;
DECL|if0_cm|member|struct cdc_cm_descriptor if0_cm;
DECL|if0_header|member|struct cdc_header_descriptor if0_header;
DECL|if0_header|member|struct cdc_header_descriptor if0_header;
DECL|if0_in_ep|member|struct usb_ep_descriptor if0_in_ep;
DECL|if0_int_ep|member|struct usb_ep_descriptor if0_int_ep;
DECL|if0_int_ep|member|struct usb_ep_descriptor if0_int_ep;
DECL|if0_netfun_ecm|member|struct cdc_ecm_descriptor if0_netfun_ecm;
DECL|if0_out_ep|member|struct usb_ep_descriptor if0_out_ep;
DECL|if0_union|member|struct cdc_union_descriptor if0_union;
DECL|if0_union|member|struct cdc_union_descriptor if0_union;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if1_0|member|struct usb_if_descriptor if1_0;
DECL|if1_1_in_ep|member|struct usb_ep_descriptor if1_1_in_ep;
DECL|if1_1_out_ep|member|struct usb_ep_descriptor if1_1_out_ep;
DECL|if1_1|member|struct usb_if_descriptor if1_1;
DECL|if1_in_ep|member|struct usb_ep_descriptor if1_in_ep;
DECL|if1_out_ep|member|struct usb_ep_descriptor if1_out_ep;
DECL|if1|member|struct usb_if_descriptor if1;
DECL|iface|member|struct net_if *iface;
DECL|interface_data|variable|interface_data
DECL|netusb_api_funcs|variable|netusb_api_funcs
DECL|netusb_class_handler|function|static int netusb_class_handler(struct usb_setup_packet *setup,s32_t *len, u8_t **data)
DECL|netusb_connect_media|function|static int netusb_connect_media(void)
DECL|netusb_disable|function|void netusb_disable(void)
DECL|netusb_disconnect_media|function|static int netusb_disconnect_media(void)
DECL|netusb_enable|function|void netusb_enable(void)
DECL|netusb_init_dev|function|static int netusb_init_dev(struct device *dev)
DECL|netusb_init|function|static void netusb_init(struct net_if *iface)
DECL|netusb_recv|function|void netusb_recv(struct net_pkt *pkt)
DECL|netusb_send|function|static int netusb_send(struct net_if *iface, struct net_pkt *pkt)
DECL|netusb|variable|netusb
DECL|try_write|function|int try_write(u8_t ep, u8_t *data, u16_t len)
DECL|usb_cdc_ecm_config|struct|struct usb_cdc_ecm_config {
DECL|usb_cdc_ecm_mac_descr|struct|struct usb_cdc_ecm_mac_descr {
DECL|usb_cdc_eem_config|struct|struct usb_cdc_eem_config {
DECL|usb_rndis_config|struct|struct usb_rndis_config {
