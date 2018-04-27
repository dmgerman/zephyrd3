DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|USB_BSTRING_ASCII_IDX_MAX|macro|USB_BSTRING_ASCII_IDX_MAX
DECL|USB_BSTRING_UTF16LE_IDX_MAX|macro|USB_BSTRING_UTF16LE_IDX_MAX
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|ascii7_to_utf16le|function|static void ascii7_to_utf16le(void *descriptor)
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bLength|member|u8_t bLength;
DECL|bLength|member|u8_t bLength;
DECL|bLength|member|u8_t bLength;
DECL|bString|member|u8_t bString[USB_BSTRING_LENGTH(
DECL|bString|member|u8_t bString[USB_BSTRING_LENGTH(CONFIG_USB_DEVICE_PRODUCT)];
DECL|bString|member|u8_t bString[USB_BSTRING_LENGTH(CONFIG_USB_DEVICE_SN)];
DECL|cfg_descr|member|struct usb_cfg_descriptor cfg_descr;
DECL|common_descriptor|struct|struct common_descriptor {
DECL|device_descriptor|member|struct usb_device_descriptor device_descriptor;
DECL|lang_descr|member|struct usb_string_descriptor lang_descr;
DECL|usb_fix_descriptor|function|static int usb_fix_descriptor(struct usb_desc_header *head)
DECL|usb_get_cfg_data|function|static struct usb_cfg_data *usb_get_cfg_data(struct usb_if_descriptor *iface)
DECL|usb_get_device_descriptor|function|u8_t *usb_get_device_descriptor(void)
DECL|usb_get_str_descriptor_idx|function|int usb_get_str_descriptor_idx(void *ptr)
DECL|usb_mfr_descriptor|struct|struct usb_mfr_descriptor {
DECL|usb_product_descriptor|struct|struct usb_product_descriptor {
DECL|usb_sn_descriptor|struct|struct usb_sn_descriptor {
DECL|usb_string_desription|struct|struct usb_string_desription {
DECL|usb_validate_ep_cfg_data|function|static int usb_validate_ep_cfg_data(struct usb_ep_descriptor * const ep_descr, struct usb_cfg_data * const cfg_data, u32_t *requested_ep)
DECL|utf16le_mfr|member|} __packed utf16le_mfr;
DECL|utf16le_product|member|} __packed utf16le_product;
DECL|utf16le_sn|member|} __packed utf16le_sn;
