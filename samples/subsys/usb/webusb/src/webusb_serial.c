DECL|CDC_BULK_EP_MPS|macro|CDC_BULK_EP_MPS
DECL|CDC_CLASS_REQ_MAX_DATA_SIZE|macro|CDC_CLASS_REQ_MAX_DATA_SIZE
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|WEBUSB_ENDP_IN|macro|WEBUSB_ENDP_IN
DECL|WEBUSB_ENDP_OUT|macro|WEBUSB_ENDP_OUT
DECL|WEBUSB_NUM_EP|macro|WEBUSB_NUM_EP
DECL|WEBUSB_NUM_ITF|macro|WEBUSB_NUM_ITF
DECL|__packed|variable|__packed
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bLength|member|u8_t bLength;
DECL|bLength|member|u8_t bLength;
DECL|bLength|member|u8_t bLength;
DECL|bString|member|u8_t bString[0x0C - 2];
DECL|bString|member|u8_t bString[0x0C - 2];
DECL|bString|member|u8_t bString[0x0E - 2];
DECL|cdc_acm_cfg|member|} __packed cdc_acm_cfg;
DECL|cfg_descr|member|struct usb_cfg_descriptor cfg_descr;
DECL|dev_common_descriptor|struct|struct dev_common_descriptor {
DECL|device_descriptor|member|struct usb_device_descriptor device_descriptor;
DECL|if0_in_ep|member|struct usb_ep_descriptor if0_in_ep;
DECL|if0_out_ep|member|struct usb_ep_descriptor if0_out_ep;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|interface_data|variable|interface_data
DECL|lang_descr|member|struct usb_string_descriptor lang_descr;
DECL|req_handlers|variable|req_handlers
DECL|rx_buf|variable|rx_buf
DECL|string_descr|member|} __packed string_descr;
DECL|term_descr|member|struct usb_desc_header term_descr;
DECL|usb_cdc_acm_config|struct|struct usb_cdc_acm_config {
DECL|usb_mfr_descriptor|struct|struct usb_mfr_descriptor {
DECL|usb_product_descriptor|struct|struct usb_product_descriptor {
DECL|usb_sn_descriptor|struct|struct usb_sn_descriptor {
DECL|usb_string_desription|struct|struct usb_string_desription {
DECL|utf16le_mfr|member|} __packed utf16le_mfr;
DECL|utf16le_product|member|} __packed utf16le_product;
DECL|utf16le_sn|member|} __packed utf16le_sn;
DECL|webusb_read_cb|function|static void webusb_read_cb(u8_t ep, int size, void *priv)
DECL|webusb_register_request_handlers|function|void webusb_register_request_handlers(struct webusb_req_handlers *handlers)
DECL|webusb_serial_config|variable|webusb_serial_config
DECL|webusb_serial_custom_handle_req|function|int webusb_serial_custom_handle_req(struct usb_setup_packet *pSetup,s32_t *len, u8_t **data)
DECL|webusb_serial_dev_status_cb|function|static void webusb_serial_dev_status_cb(enum usb_dc_status_code status,u8_t *param)
DECL|webusb_serial_ep_data|variable|webusb_serial_ep_data
DECL|webusb_serial_init|function|int webusb_serial_init(void)
DECL|webusb_serial_usb_description|variable|webusb_serial_usb_description
DECL|webusb_serial_vendor_handle_req|function|int webusb_serial_vendor_handle_req(struct usb_setup_packet *pSetup,s32_t *len, u8_t **data)
DECL|webusb_write_cb|function|static void webusb_write_cb(u8_t ep, int size, void *priv)
