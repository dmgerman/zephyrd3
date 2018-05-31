DECL|NUMBER_OF_ALLOWED_ORIGINS|macro|NUMBER_OF_ALLOWED_ORIGINS
DECL|bos_cap_msosv2|variable|bos_cap_msosv2
DECL|bos_cap_webusb|variable|bos_cap_webusb
DECL|cap|member|struct usb_bos_capability_msos cap;
DECL|cap|member|struct usb_bos_capability_webusb cap;
DECL|custom_handle_req|function|int custom_handle_req(struct usb_setup_packet *pSetup, s32_t *len, u8_t **data)
DECL|data_arrived|variable|data_arrived
DECL|data_buf|variable|data_buf
DECL|data_transmitted|variable|data_transmitted
DECL|interrupt_handler|function|static void interrupt_handler(struct device *dev)
DECL|main|function|void main(void)
DECL|msos1_compatid_descriptor|variable|msos1_compatid_descriptor
DECL|msos1_string_descriptor|variable|msos1_string_descriptor
DECL|msos2_descriptor|variable|msos2_descriptor
DECL|platform|member|struct usb_bos_platform_descriptor platform;
DECL|platform|member|struct usb_bos_platform_descriptor platform;
DECL|read_and_echo_data|function|static void read_and_echo_data(struct device *dev, int *bytes_read)
DECL|req_handlers|variable|req_handlers
DECL|usb_bos_msosv2_desc|struct|USB_DEVICE_BOS_DESC_DEFINE_CAP struct usb_bos_msosv2_desc {
DECL|usb_bos_webusb_desc|struct|USB_DEVICE_BOS_DESC_DEFINE_CAP struct usb_bos_webusb_desc {
DECL|vendor_handle_req|function|int vendor_handle_req(struct usb_setup_packet *pSetup,s32_t *len, u8_t **data)
DECL|webusb_allowed_origins|variable|webusb_allowed_origins
DECL|webusb_origin_url|variable|webusb_origin_url
DECL|write_data|function|static void write_data(struct device *dev, const u8_t *buf, int len)
