DECL|HID_INT_EP_ADDR|macro|HID_INT_EP_ADDR
DECL|HID_INT_IN_EP_IDX|macro|HID_INT_IN_EP_IDX
DECL|HID_INT_OUT_EP_IDX|macro|HID_INT_OUT_EP_IDX
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|__packed|variable|__packed
DECL|hid_class_handle_req|function|static int hid_class_handle_req(struct usb_setup_packet *setup,s32_t *len, u8_t **data)
DECL|hid_custom_handle_req|function|static int hid_custom_handle_req(struct usb_setup_packet *setup,s32_t *len, u8_t **data)
DECL|hid_device_info|struct|static struct hid_device_info {
DECL|hid_device|variable|hid_device
DECL|hid_ep_data|variable|hid_ep_data
DECL|hid_int_ep_write|function|int hid_int_ep_write(const u8_t *data, u32_t data_len, u32_t *bytes_ret)
DECL|hid_int_in|function|static void hid_int_in(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|hid_interface_config|function|static void hid_interface_config(u8_t bInterfaceNumber)
DECL|hid_status_cb|function|static void hid_status_cb(enum usb_dc_status_code status, u8_t *param)
DECL|if0_hid|member|struct usb_hid_descriptor if0_hid;
DECL|if0_int_ep|member|struct usb_ep_descriptor if0_int_ep;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|interface_data|variable|interface_data
DECL|ops|member|const struct hid_ops *ops;
DECL|report_desc|member|const u8_t *report_desc;
DECL|report_size|member|size_t report_size;
DECL|usb_hid_config|struct|struct usb_hid_config {
DECL|usb_hid_init|function|int usb_hid_init(void)
DECL|usb_hid_register_device|function|void usb_hid_register_device(const u8_t *desc, size_t size, const struct hid_ops *ops)
DECL|usb_set_hid_report_size|function|static void usb_set_hid_report_size(u16_t report_desc_size)
