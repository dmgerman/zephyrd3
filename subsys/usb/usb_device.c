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
DECL|MAX_NUM_TRANSFERS|macro|MAX_NUM_TRANSFERS
DECL|MAX_STD_REQ_MSG_SIZE|macro|MAX_STD_REQ_MSG_SIZE
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|SYS_LOG_NO_NEWLINE|macro|SYS_LOG_NO_NEWLINE
DECL|USB_CONTROL_IN_EP0|macro|USB_CONTROL_IN_EP0
DECL|USB_CONTROL_OUT_EP0|macro|USB_CONTROL_OUT_EP0
DECL|bsize|member|size_t bsize;
DECL|buffer|member|u8_t *buffer;
DECL|cb|member|usb_transfer_callback cb;
DECL|class_handler|function|static int class_handler(struct usb_setup_packet *pSetup, s32_t *len, u8_t **data)
DECL|composite_setup_ep_cb|function|static int composite_setup_ep_cb(void)
DECL|configuration|member|u8_t configuration;
DECL|custom_handler|function|static int custom_handler(struct usb_setup_packet *pSetup, s32_t *len, u8_t **data)
DECL|custom_req_handler|member|usb_request_handler custom_req_handler;
DECL|data_buf_len|member|s32_t data_buf_len;
DECL|data_buf_residue|member|s32_t data_buf_residue;
DECL|data_buf|member|u8_t *data_buf;
DECL|data_store|member|u8_t *data_store[MAX_NUM_REQ_HANDLERS];
DECL|descriptors|member|const u8_t *descriptors;
DECL|enabled|member|bool enabled;
DECL|ep|member|u8_t ep;
DECL|flags|member|unsigned int flags;
DECL|forward_status_cb|function|static void forward_status_cb(enum usb_dc_status_code status, u8_t *param)
DECL|iface_data_buf|variable|iface_data_buf
DECL|priv|member|void *priv;
DECL|req_handlers|member|usb_request_handler req_handlers[MAX_NUM_REQ_HANDLERS];
DECL|sem|member|struct k_sem sem;
DECL|sem|member|struct k_sem sem;
DECL|setup|member|struct usb_setup_packet setup;
DECL|status_callback|member|usb_status_callback status_callback;
DECL|status|member|int status;
DECL|std_req_data|member|u8_t std_req_data[MAX_STD_REQ_MSG_SIZE];
DECL|transfer|member|struct usb_transfer_data transfer[MAX_NUM_TRANSFERS];
DECL|tsize|member|int tsize;
DECL|tsize|member|size_t tsize;
DECL|usb_cancel_transfer|function|void usb_cancel_transfer(u8_t ep)
DECL|usb_composite_init|function|static int usb_composite_init(struct device *dev)
DECL|usb_data_to_host|function|static void usb_data_to_host(void)
DECL|usb_deconfig|function|int usb_deconfig(void)
DECL|usb_dev_priv|struct|static struct usb_dev_priv {
DECL|usb_dev|variable|usb_dev
DECL|usb_disable|function|int usb_disable(void)
DECL|usb_enable|function|int usb_enable(struct usb_cfg_data *config)
DECL|usb_ep_clear_stall|function|int usb_ep_clear_stall(u8_t ep)
DECL|usb_ep_get_transfer|function|static struct usb_transfer_data *usb_ep_get_transfer(u8_t ep)
DECL|usb_ep_read_continue|function|int usb_ep_read_continue(u8_t ep)
DECL|usb_ep_read_wait|function|int usb_ep_read_wait(u8_t ep, u8_t *data, u32_t max_data_len,u32_t *ret_bytes)
DECL|usb_ep_set_stall|function|int usb_ep_set_stall(u8_t ep)
DECL|usb_get_descriptor|function|static bool usb_get_descriptor(u16_t type_index, u16_t lang_id,s32_t *len, u8_t **data)
DECL|usb_handle_control_transfer|function|static void usb_handle_control_transfer(u8_t ep,enum usb_dc_ep_cb_status_code ep_status)
DECL|usb_handle_request|function|static bool usb_handle_request(struct usb_setup_packet *setup, s32_t *len, u8_t **data)
DECL|usb_handle_standard_request|function|static int usb_handle_standard_request(struct usb_setup_packet *setup, s32_t *len, u8_t **data_buf)
DECL|usb_handle_std_device_req|function|static bool usb_handle_std_device_req(struct usb_setup_packet *setup,s32_t *len, u8_t **data_buf)
DECL|usb_handle_std_endpoint_req|function|static bool usb_handle_std_endpoint_req(struct usb_setup_packet *setup,s32_t *len, u8_t **data_buf)
DECL|usb_handle_std_interface_req|function|static bool usb_handle_std_interface_req(struct usb_setup_packet *setup,s32_t *len, u8_t **data_buf)
DECL|usb_handle_vendor_request|function|static int usb_handle_vendor_request(struct usb_setup_packet *setup, s32_t *len, u8_t **data_buf)
DECL|usb_print_setup|function|static void usb_print_setup(struct usb_setup_packet *setup)
DECL|usb_read|function|int usb_read(u8_t ep, u8_t *data, u32_t max_data_len,u32_t *ret_bytes)
DECL|usb_register_custom_req_handler|function|static void usb_register_custom_req_handler(usb_request_handler handler)
DECL|usb_register_descriptors|function|static void usb_register_descriptors(const u8_t *usb_descriptors)
DECL|usb_register_request_handler|function|static void usb_register_request_handler(s32_t type, usb_request_handler handler, u8_t *data_store)
DECL|usb_register_status_callback|function|static void usb_register_status_callback(usb_status_callback cb)
DECL|usb_set_configuration|function|static bool usb_set_configuration(u8_t config_index, u8_t alt_setting)
DECL|usb_set_config|function|int usb_set_config(struct usb_cfg_data *config)
DECL|usb_set_interface|function|static bool usb_set_interface(u8_t iface, u8_t alt_setting)
DECL|usb_transfer_data|struct|struct usb_transfer_data {
DECL|usb_transfer_ep_callback|function|void usb_transfer_ep_callback(u8_t ep, enum usb_dc_ep_cb_status_code status)
DECL|usb_transfer_sync_cb|function|static void usb_transfer_sync_cb(u8_t ep, int size, void *priv)
DECL|usb_transfer_sync_priv|struct|struct usb_transfer_sync_priv {
DECL|usb_transfer_sync|function|int usb_transfer_sync(u8_t ep, u8_t *data, size_t dlen, unsigned int flags)
DECL|usb_transfer_work|function|static void usb_transfer_work(struct k_work *item)
DECL|usb_transfer|function|int usb_transfer(u8_t ep, u8_t *data, size_t dlen, unsigned int flags, usb_transfer_callback cb, void *cb_data)
DECL|usb_vbus_set|function|static int usb_vbus_set(bool on)
DECL|usb_write|function|int usb_write(u8_t ep, const u8_t *data, u32_t data_len,u32_t *bytes_ret)
DECL|vendor_handler|function|static int vendor_handler(struct usb_setup_packet *pSetup, s32_t *len, u8_t **data)
DECL|vendor_req_handler|member|usb_request_handler vendor_req_handler;
DECL|work|member|struct k_work work;
