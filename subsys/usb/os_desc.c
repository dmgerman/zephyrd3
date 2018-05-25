DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|os_desc|variable|os_desc
DECL|usb_handle_os_desc_feature|function|int usb_handle_os_desc_feature(struct usb_setup_packet *setup, s32_t *len, u8_t **data)
DECL|usb_handle_os_desc|function|int usb_handle_os_desc(struct usb_setup_packet *setup, s32_t *len, u8_t **data)
DECL|usb_os_desc_enabled|function|bool usb_os_desc_enabled(void)
DECL|usb_register_os_desc|function|void usb_register_os_desc(struct usb_os_descriptor *desc)
