DECL|NETUSB_NUM_CONF|macro|NETUSB_NUM_CONF
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|__netusb|struct|static struct __netusb {
DECL|conf_index|member|u8_t conf_index;
DECL|conf|member|u8_t conf;
DECL|eth_emu_ctx|variable|eth_emu_ctx
DECL|func|member|struct netusb_function *func[NETUSB_NUM_CONF];
DECL|interface_data|variable|interface_data
DECL|netusb_class_handler|function|static int netusb_class_handler(struct usb_setup_packet *setup,s32_t *len, u8_t **data)
DECL|netusb_config|variable|netusb_config
DECL|netusb_connect_media|function|static int netusb_connect_media(void)
DECL|netusb_custom_handler|function|static int netusb_custom_handler(struct usb_setup_packet *setup, s32_t *len, u8_t **data)
DECL|netusb_device_init|function|static int netusb_device_init(struct device *dev)
DECL|netusb_disconnect_media|function|static int netusb_disconnect_media(void)
DECL|netusb_ep_data|variable|netusb_ep_data
DECL|netusb_send|function|int netusb_send(struct net_pkt *pkt)
DECL|netusb_status_cb|function|static void netusb_status_cb(enum usb_dc_status_code status, u8_t *param)
DECL|netusb_status_configured|function|static void netusb_status_configured(u8_t *conf)
DECL|netusb|variable|netusb
DECL|try_write|function|int try_write(u8_t ep, u8_t *data, u16_t len)
