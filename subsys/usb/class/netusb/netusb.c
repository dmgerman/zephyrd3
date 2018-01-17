DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|VERBOSE_DEBUG|macro|VERBOSE_DEBUG
DECL|__netusb|struct|static struct __netusb {
DECL|api_funcs|variable|api_funcs
DECL|configured|member|bool configured;
DECL|func|member|struct netusb_function *func;
DECL|iface|member|struct net_if *iface;
DECL|interface_data|variable|interface_data
DECL|netusb_class_handler|function|static int netusb_class_handler(struct usb_setup_packet *setup,s32_t *len, u8_t **data)
DECL|netusb_config|variable|netusb_config
DECL|netusb_connect_media|function|static int netusb_connect_media(void)
DECL|netusb_custom_handler|function|static int netusb_custom_handler(struct usb_setup_packet *setup, s32_t *len, u8_t **data)
DECL|netusb_disconnect_media|function|static int netusb_disconnect_media(void)
DECL|netusb_init_dev|function|static int netusb_init_dev(struct device *dev)
DECL|netusb_init|function|static void netusb_init(struct net_if *iface)
DECL|netusb_recv|function|void netusb_recv(struct net_pkt *pkt)
DECL|netusb_send|function|static int netusb_send(struct net_if *iface, struct net_pkt *pkt)
DECL|netusb_status_cb|function|static void netusb_status_cb(enum usb_dc_status_code status, u8_t *param)
DECL|netusb_status_configured|function|static void netusb_status_configured(u8_t *conf)
DECL|netusb|variable|netusb
DECL|try_write|function|int try_write(u8_t ep, u8_t *data, u16_t len)
