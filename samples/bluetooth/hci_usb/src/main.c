DECL|BTUSB_BUFFER_SIZE|macro|BTUSB_BUFFER_SIZE
DECL|BTUSB_BULK_EP_MPS|macro|BTUSB_BULK_EP_MPS
DECL|BTUSB_CLASS_MAX_DATA_SIZE|macro|BTUSB_CLASS_MAX_DATA_SIZE
DECL|BTUSB_CONF_SIZE|macro|BTUSB_CONF_SIZE
DECL|BTUSB_ENDP_BULK_IN|macro|BTUSB_ENDP_BULK_IN
DECL|BTUSB_ENDP_BULK_OUT|macro|BTUSB_ENDP_BULK_OUT
DECL|BTUSB_ENDP_INT|macro|BTUSB_ENDP_INT
DECL|BTUSB_ENDP_ISO_IN|macro|BTUSB_ENDP_ISO_IN
DECL|BTUSB_ENDP_ISO_OUT|macro|BTUSB_ENDP_ISO_OUT
DECL|BTUSB_IF1_NUM_EP|macro|BTUSB_IF1_NUM_EP
DECL|BTUSB_IF2_NUM_EP|macro|BTUSB_IF2_NUM_EP
DECL|BTUSB_INTERRUPT_EP_MPS|macro|BTUSB_INTERRUPT_EP_MPS
DECL|BTUSB_ISO1_EP_MPS|macro|BTUSB_ISO1_EP_MPS
DECL|BTUSB_ISO2_EP_MPS|macro|BTUSB_ISO2_EP_MPS
DECL|BTUSB_ISO3_EP_MPS|macro|BTUSB_ISO3_EP_MPS
DECL|BTUSB_ISO4_EP_MPS|macro|BTUSB_ISO4_EP_MPS
DECL|BTUSB_ISO5_EP_MPS|macro|BTUSB_ISO5_EP_MPS
DECL|BTUSB_ISO6_EP_MPS|macro|BTUSB_ISO6_EP_MPS
DECL|BTUSB_NUM_CONF|macro|BTUSB_NUM_CONF
DECL|BTUSB_NUM_EP|macro|BTUSB_NUM_EP
DECL|BTUSB_NUM_ITF_TOTAL|macro|BTUSB_NUM_ITF_TOTAL
DECL|BTUSB_NUM_ITF|macro|BTUSB_NUM_ITF
DECL|BT_BUF_ACL_SIZE|macro|BT_BUF_ACL_SIZE
DECL|BT_L2CAP_MTU|macro|BT_L2CAP_MTU
DECL|CMD_BUF_SIZE|macro|CMD_BUF_SIZE
DECL|DEVICE_RELNUM|macro|DEVICE_RELNUM
DECL|DEV_DATA|macro|DEV_DATA
DECL|HIGH_BYTE|macro|HIGH_BYTE
DECL|INTEL_VENDOR_ID|macro|INTEL_VENDOR_ID
DECL|LOW_BYTE|macro|LOW_BYTE
DECL|PRODUCT_ID|macro|PRODUCT_ID
DECL|btusb_bulk_in|function|static void btusb_bulk_in(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|btusb_bulk_out|function|static void btusb_bulk_out(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|btusb_class_handler|function|static int btusb_class_handler(struct usb_setup_packet *setup, s32_t *len, u8_t **data)
DECL|btusb_config|variable|btusb_config
DECL|btusb_desc|variable|btusb_desc
DECL|btusb_dev_data_t|struct|struct btusb_dev_data_t {
DECL|btusb_dev_data|variable|btusb_dev_data
DECL|btusb_dev|variable|btusb_dev
DECL|btusb_ep|variable|btusb_ep
DECL|btusb_init|function|static int btusb_init(struct device *dev)
DECL|btusb_int_in|function|static void btusb_int_in(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|btusb_iso_in|function|static void btusb_iso_in(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|btusb_iso_out|function|static void btusb_iso_out(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|btusb_status_cb|function|static void btusb_status_cb(enum usb_dc_status_code status, u8_t *param)
DECL|hexdump|function|static void hexdump(const char *str, const u8_t *packet, size_t length)
DECL|interface_data|member|u8_t interface_data[BTUSB_CLASS_MAX_DATA_SIZE];
DECL|main|function|void main(void)
DECL|notification_sent|member|u8_t notification_sent;
DECL|try_write|function|static int try_write(u8_t ep, struct net_buf *buf)
DECL|usb_status|member|enum usb_dc_status_code usb_status;
