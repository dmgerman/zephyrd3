DECL|CONF_DESC_bConfigurationValue|macro|CONF_DESC_bConfigurationValue
DECL|CONF_DESC_bmAttributes|macro|CONF_DESC_bmAttributes
DECL|CONF_DESC_wTotalLength|macro|CONF_DESC_wTotalLength
DECL|DESC_bDescriptorType|macro|DESC_bDescriptorType
DECL|DESC_bLength|macro|DESC_bLength
DECL|ENDP_DESC_bEndpointAddress|macro|ENDP_DESC_bEndpointAddress
DECL|ENDP_DESC_bmAttributes|macro|ENDP_DESC_bmAttributes
DECL|ENDP_DESC_wMaxPacketSize|macro|ENDP_DESC_wMaxPacketSize
DECL|INTF_DESC_bAlternateSetting|macro|INTF_DESC_bAlternateSetting
DECL|INTF_DESC_bInterfaceNumber|macro|INTF_DESC_bInterfaceNumber
DECL|MAX_DESC_HANDLERS|macro|MAX_DESC_HANDLERS
DECL|MAX_NUM_REQ_HANDLERS|macro|MAX_NUM_REQ_HANDLERS
DECL|MAX_STD_REQ_MSG_SIZE|macro|MAX_STD_REQ_MSG_SIZE
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|SYS_LOG_NO_NEWLINE|macro|SYS_LOG_NO_NEWLINE
DECL|USB_CONTROL_IN_EP0|macro|USB_CONTROL_IN_EP0
DECL|USB_CONTROL_OUT_EP0|macro|USB_CONTROL_OUT_EP0
DECL|configuration|member|u8_t configuration;
DECL|custom_req_handler|member|usb_request_handler custom_req_handler;
DECL|data_buf_len|member|s32_t data_buf_len;
DECL|data_buf_residue|member|s32_t data_buf_residue;
DECL|data_buf|member|u8_t *data_buf;
DECL|data_store|member|u8_t *data_store[MAX_NUM_REQ_HANDLERS];
DECL|descriptors|member|const u8_t *descriptors;
DECL|enabled|member|bool enabled;
DECL|req_handlers|member|usb_request_handler req_handlers[MAX_NUM_REQ_HANDLERS];
DECL|setup|member|struct usb_setup_packet setup;
DECL|status_callback|member|usb_status_callback status_callback;
DECL|std_req_data|member|u8_t std_req_data[MAX_STD_REQ_MSG_SIZE];
DECL|usb_data_to_host|function|static void usb_data_to_host(void)
DECL|usb_deconfig|function|int usb_deconfig(void)
DECL|usb_dev_priv|struct|static struct usb_dev_priv {
DECL|usb_dev|variable|usb_dev
DECL|usb_disable|function|int usb_disable(void)
DECL|usb_enable|function|int usb_enable(struct usb_cfg_data *config)
DECL|usb_ep_clear_stall|function|int usb_ep_clear_stall(u8_t ep)
DECL|usb_ep_read_continue|function|int usb_ep_read_continue(u8_t ep)
DECL|usb_ep_read_wait|function|int usb_ep_read_wait(u8_t ep, u8_t *data, u32_t max_data_len,u32_t *ret_bytes)
DECL|usb_ep_set_stall|function|int usb_ep_set_stall(u8_t ep)
DECL|usb_get_descriptor|function|static bool usb_get_descriptor(u16_t type_index, u16_t lang_id,s32_t *len, u8_t **data)
DECL|usb_handle_control_transfer|function|static void usb_handle_control_transfer(u8_t ep,enum usb_dc_ep_cb_status_code ep_status)
DECL|usb_handle_request|function|static bool usb_handle_request(struct usb_setup_packet *setup,s32_t *len, u8_t **data)
DECL|usb_handle_standard_request|function|static int usb_handle_standard_request(struct usb_setup_packet *setup,s32_t *len, u8_t **data_buf)
DECL|usb_handle_std_device_req|function|static bool usb_handle_std_device_req(struct usb_setup_packet *setup,s32_t *len, u8_t **data_buf)
DECL|usb_handle_std_endpoint_req|function|static bool usb_handle_std_endpoint_req(struct usb_setup_packet *setup,s32_t *len, u8_t **data_buf)
DECL|usb_handle_std_interface_req|function|static bool usb_handle_std_interface_req(struct usb_setup_packet *setup,s32_t *len, u8_t **data_buf)
DECL|usb_print_setup|function|static void usb_print_setup(struct usb_setup_packet *setup)
DECL|usb_read|function|int usb_read(u8_t ep, u8_t *data, u32_t max_data_len,u32_t *ret_bytes)
DECL|usb_register_custom_req_handler|function|static void usb_register_custom_req_handler(usb_request_handler handler)
DECL|usb_register_descriptors|function|static void usb_register_descriptors(const u8_t *usb_descriptors)
DECL|usb_register_request_handler|function|static void usb_register_request_handler(s32_t type,usb_request_handler handler, u8_t *data_store)
DECL|usb_register_status_callback|function|static void usb_register_status_callback(usb_status_callback cb)
DECL|usb_set_configuration|function|static bool usb_set_configuration(u8_t config_index, u8_t alt_setting)
DECL|usb_set_config|function|int usb_set_config(struct usb_cfg_data *config)
DECL|usb_set_interface|function|static bool usb_set_interface(u8_t iface, u8_t alt_setting)
DECL|usb_vbus_set|function|static int usb_vbus_set(bool on)
DECL|usb_write|function|int usb_write(u8_t ep, const u8_t *data, u32_t data_len,u32_t *bytes_ret)
