DECL|NUMBER_OF_ALLOWED_ORIGINS|macro|NUMBER_OF_ALLOWED_ORIGINS
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|bAltEnumCode|member|u8_t bAltEnumCode;
DECL|bMS_VendorCode|member|u8_t bMS_VendorCode;
DECL|bVendorCode|member|u8_t bVendorCode;
DECL|bcdVersion|member|u16_t bcdVersion;
DECL|bos|member|struct usb_bos_descriptor bos;
DECL|capability_data_msos|member|struct usb_bos_capability_msos capability_data_msos;
DECL|capability_data_webusb|member|struct usb_bos_capability_webusb capability_data_webusb;
DECL|custom_handle_req|function|int custom_handle_req(struct usb_setup_packet *pSetup, s32_t *len, u8_t **data)
DECL|data_arrived|variable|data_arrived
DECL|data_buf|variable|data_buf
DECL|data_transmitted|variable|data_transmitted
DECL|dwWindowsVersion|member|u32_t dwWindowsVersion;
DECL|iLandingPage|member|u8_t iLandingPage;
DECL|interrupt_handler|function|static void interrupt_handler(struct device *dev)
DECL|main|function|void main(void)
DECL|msos1_compatid_descriptor|variable|msos1_compatid_descriptor
DECL|msos1_string_descriptor|variable|msos1_string_descriptor
DECL|msos2_descriptor|variable|msos2_descriptor
DECL|platform_msos|member|struct usb_bos_platform_descriptor platform_msos;
DECL|platform_webusb|member|struct usb_bos_platform_descriptor platform_webusb;
DECL|read_and_echo_data|function|static void read_and_echo_data(struct device *dev, int *bytes_read)
DECL|req_handlers|variable|req_handlers
DECL|usb_bos_capability_msos|struct|struct usb_bos_capability_msos {
DECL|usb_bos_capability_webusb|struct|struct usb_bos_capability_webusb {
DECL|vendor_handle_req|function|int vendor_handle_req(struct usb_setup_packet *pSetup,s32_t *len, u8_t **data)
DECL|wMSOSDescriptorSetTotalLength|member|u16_t wMSOSDescriptorSetTotalLength;
DECL|webusb_allowed_origins|variable|webusb_allowed_origins
DECL|webusb_bos_descriptor|variable|webusb_bos_descriptor
DECL|webusb_bos_desc|struct|static struct webusb_bos_desc {
DECL|webusb_origin_url|variable|webusb_origin_url
DECL|write_data|function|static void write_data(struct device *dev, const u8_t *buf, int len)
