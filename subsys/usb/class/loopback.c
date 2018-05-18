DECL|LOOPBACK_IN_EP_ADDR|macro|LOOPBACK_IN_EP_ADDR
DECL|LOOPBACK_IN_EP_IDX|macro|LOOPBACK_IN_EP_IDX
DECL|LOOPBACK_OUT_EP_ADDR|macro|LOOPBACK_OUT_EP_ADDR
DECL|LOOPBACK_OUT_EP_IDX|macro|LOOPBACK_OUT_EP_IDX
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|__packed|variable|__packed
DECL|ep_cfg|variable|ep_cfg
DECL|if0_in_ep|member|struct usb_ep_descriptor if0_in_ep;
DECL|if0_out_ep|member|struct usb_ep_descriptor if0_out_ep;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|interface_data|variable|interface_data
DECL|loopback_buf|variable|loopback_buf
DECL|loopback_in_cb|function|static void loopback_in_cb(u8_t ep,enum usb_dc_ep_cb_status_code ep_status)
DECL|loopback_init|function|static int loopback_init(struct device *dev)
DECL|loopback_interface_config|function|static void loopback_interface_config(u8_t bInterfaceNumber)
DECL|loopback_out_cb|function|static void loopback_out_cb(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|loopback_status_cb|function|static void loopback_status_cb(enum usb_dc_status_code status, u8_t *param)
DECL|loopback_vendor_handler|function|static int loopback_vendor_handler(struct usb_setup_packet *setup, s32_t *len, u8_t **data)
DECL|usb_loopback_config|struct|struct usb_loopback_config {
