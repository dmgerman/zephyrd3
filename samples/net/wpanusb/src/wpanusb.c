DECL|DEVICE_RELNUM|macro|DEVICE_RELNUM
DECL|DEV_DATA|macro|DEV_DATA
DECL|HIGH_BYTE|macro|HIGH_BYTE
DECL|LOW_BYTE|macro|LOW_BYTE
DECL|PRODUCT_ID|macro|PRODUCT_ID
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|VENDOR_ID|macro|VENDOR_ID
DECL|WPANUSB_BUFFER_SIZE|macro|WPANUSB_BUFFER_SIZE
DECL|WPANUSB_BULK_EP_MPS|macro|WPANUSB_BULK_EP_MPS
DECL|WPANUSB_CLASS_MAX_DATA_SIZE|macro|WPANUSB_CLASS_MAX_DATA_SIZE
DECL|WPANUSB_CONF_SIZE|macro|WPANUSB_CONF_SIZE
DECL|WPANUSB_ENDP_BULK_IN|macro|WPANUSB_ENDP_BULK_IN
DECL|WPANUSB_IF1_NUM_EP|macro|WPANUSB_IF1_NUM_EP
DECL|WPANUSB_INTERRUPT_EP_MPS|macro|WPANUSB_INTERRUPT_EP_MPS
DECL|WPANUSB_NUM_CONF|macro|WPANUSB_NUM_CONF
DECL|WPANUSB_NUM_EP|macro|WPANUSB_NUM_EP
DECL|WPANUSB_NUM_ITF|macro|WPANUSB_NUM_ITF
DECL|WPANUSB_PROTOCOL|macro|WPANUSB_PROTOCOL
DECL|WPANUSB_SUBCLASS|macro|WPANUSB_SUBCLASS
DECL|__dev|variable|__dev
DECL|buffer|variable|buffer
DECL|hexdump|function|static void hexdump(const char *str, const uint8_t *packet, size_t length)
DECL|ieee802154_dev|variable|ieee802154_dev
DECL|ieee802154_init|function|void ieee802154_init(struct net_if *iface)
DECL|ieee802154_radio_handle_ack|function|extern enum net_verdict ieee802154_radio_handle_ack(struct net_if *iface, struct net_buf *buf)
DECL|ieee802154_radio_send|function|int ieee802154_radio_send(struct net_if *iface, struct net_buf *buf)
DECL|init_tx_queue|function|static void init_tx_queue(void)
DECL|interface_data|member|uint8_t interface_data[WPANUSB_CLASS_MAX_DATA_SIZE];
DECL|main|function|void main(void)
DECL|net_recv_data|function|int net_recv_data(struct net_if *iface, struct net_buf *buf)
DECL|notification_sent|member|uint8_t notification_sent;
DECL|radio_api|variable|radio_api
DECL|set_channel|function|static int set_channel(void *data, int len)
DECL|set_ieee_addr|function|static int set_ieee_addr(void *data, int len)
DECL|set_pan_id|function|static int set_pan_id(void *data, int len)
DECL|set_short_addr|function|static int set_short_addr(void *data, int len)
DECL|start|function|static int start(void)
DECL|stop|function|static int stop(void)
DECL|try_write|function|static int try_write(uint8_t ep, uint8_t *data, uint16_t len)
DECL|tx_fiber_id|variable|tx_fiber_id
DECL|tx_fiber_stack|variable|tx_fiber_stack
DECL|tx_fiber|function|static void tx_fiber(void)
DECL|tx_queue|variable|tx_queue
DECL|tx|function|static int tx(struct net_buf *pkt)
DECL|usb_status|member|enum usb_dc_status_code usb_status;
DECL|wpanusb_bulk_in|function|static void wpanusb_bulk_in(uint8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|wpanusb_class_handler|function|static int wpanusb_class_handler(struct usb_setup_packet *setup, int32_t *len, uint8_t **data)
DECL|wpanusb_config|variable|wpanusb_config
DECL|wpanusb_custom_handler|function|static int wpanusb_custom_handler(struct usb_setup_packet *setup, int32_t *len, uint8_t **data)
DECL|wpanusb_desc|variable|wpanusb_desc
DECL|wpanusb_dev_data_t|struct|struct wpanusb_dev_data_t {
DECL|wpanusb_dev_data|variable|wpanusb_dev_data
DECL|wpanusb_dev|variable|wpanusb_dev
DECL|wpanusb_ep|variable|wpanusb_ep
DECL|wpanusb_init|function|static int wpanusb_init(struct device *dev)
DECL|wpanusb_start|function|static void wpanusb_start(struct device *dev)
DECL|wpanusb_start|macro|wpanusb_start
DECL|wpanusb_status_cb|function|static void wpanusb_status_cb(enum usb_dc_status_code status)
DECL|wpanusb_vendor_handler|function|static int wpanusb_vendor_handler(struct usb_setup_packet *setup, int32_t *len, uint8_t **data)
