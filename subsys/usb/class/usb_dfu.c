DECL|NUMOF_ALTERNATE_SETTINGS|macro|NUMOF_ALTERNATE_SETTINGS
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|USB_DFU_MAX_XFER_SIZE|macro|USB_DFU_MAX_XFER_SIZE
DECL|USB_DFU_MAX_XFER_SIZE|macro|USB_DFU_MAX_XFER_SIZE
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|alt_setting|member|u32_t alt_setting; /* DFU alternate setting */
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bLength|member|u8_t bLength;
DECL|bLength|member|u8_t bLength;
DECL|bLength|member|u8_t bLength;
DECL|bLength|member|u8_t bLength;
DECL|bLength|member|u8_t bLength;
DECL|bString|member|u8_t bString[USB_BSTRING_LENGTH(
DECL|bString|member|u8_t bString[USB_BSTRING_LENGTH(CONFIG_USB_DEVICE_PRODUCT)];
DECL|bString|member|u8_t bString[USB_BSTRING_LENGTH(CONFIG_USB_DEVICE_SN)];
DECL|bString|member|u8_t bString[USB_BSTRING_LENGTH(FLASH_AREA_IMAGE_0_LABEL)];
DECL|bString|member|u8_t bString[USB_BSTRING_LENGTH(FLASH_AREA_IMAGE_1_LABEL)];
DECL|block_nr|member|u16_t block_nr; /* DFU block number */
DECL|buffer|member|u8_t *buffer;
DECL|buffer|member|u8_t buffer[USB_DFU_MAX_XFER_SIZE]; /* DFU data buffer */
DECL|bytes_sent|member|u32_t bytes_sent;
DECL|cfg_descr|member|struct usb_cfg_descriptor cfg_descr;
DECL|ctx|member|struct flash_img_context ctx;
DECL|dev_dfu_mode_descriptor|struct|struct dev_dfu_mode_descriptor {
DECL|device_descriptor|member|struct usb_device_descriptor device_descriptor;
DECL|dfu_check_app_state|function|static bool dfu_check_app_state(void)
DECL|dfu_class_handle_req|function|static int dfu_class_handle_req(struct usb_setup_packet *pSetup,s32_t *data_len, u8_t **data)
DECL|dfu_config|variable|dfu_config
DECL|dfu_config|variable|dfu_config
DECL|dfu_custom_handle_req|function|static int dfu_custom_handle_req(struct usb_setup_packet *pSetup,s32_t *data_len, u8_t **data)
DECL|dfu_data_t|struct|struct dfu_data_t {
DECL|dfu_data|variable|dfu_data
DECL|dfu_descr|member|struct dfu_runtime_descriptor dfu_descr;
DECL|dfu_descr|member|struct dfu_runtime_descriptor dfu_descr;
DECL|dfu_flash_write|function|static void dfu_flash_write(u8_t *data, size_t len)
DECL|dfu_reset_counters|function|static void dfu_reset_counters(void)
DECL|dfu_status_cb|function|static void dfu_status_cb(enum usb_dc_status_code status, u8_t *param)
DECL|flash_addr|member|u32_t flash_addr;
DECL|flash_dev|member|struct device *flash_dev;
DECL|flash_upload_size|member|u32_t flash_upload_size;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if1|member|struct usb_if_descriptor if1;
DECL|image_0_descriptor|struct|struct image_0_descriptor {
DECL|image_1_descriptor|struct|struct image_1_descriptor {
DECL|lang_descr|member|struct usb_string_descriptor lang_descr;
DECL|sec_dfu_cfg|member|} __packed sec_dfu_cfg;
DECL|state|member|enum dfu_state state; /* State of the DFU device */
DECL|status|member|enum dfu_status status; /* Status of the DFU device */
DECL|usb_dfu_config|struct|struct usb_dfu_config {
DECL|usb_dfu_init|function|static int usb_dfu_init(struct device *dev)
DECL|usb_mfr_descriptor|struct|struct usb_mfr_descriptor {
DECL|usb_product_descriptor|struct|struct usb_product_descriptor {
DECL|usb_sec_dfu_config|struct|struct usb_sec_dfu_config {
DECL|usb_sn_descriptor|struct|struct usb_sn_descriptor {
DECL|usb_string_desription|struct|struct usb_string_desription {
DECL|utf16le_image0|member|} __packed utf16le_image0;
DECL|utf16le_image1|member|} __packed utf16le_image1;
DECL|utf16le_mfr|member|} __packed utf16le_mfr;
DECL|utf16le_product|member|} __packed utf16le_product;
DECL|utf16le_sn|member|} __packed utf16le_sn;
