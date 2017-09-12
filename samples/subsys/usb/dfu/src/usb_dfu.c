DECL|DFU_FLASH_ADDR|macro|DFU_FLASH_ADDR
DECL|HIGH_BYTE|macro|HIGH_BYTE
DECL|LOW_BYTE|macro|LOW_BYTE
DECL|alt_setting|member|u32_t alt_setting; /* DFU alternate setting */
DECL|block_nr|member|u16_t block_nr; /* DFU block number */
DECL|buffer|member|u8_t buffer[DFU_MAX_XFER_SIZE]; /* DFU data buffer */
DECL|bytes_rcvd|member|u32_t bytes_rcvd;
DECL|bytes_sent|member|u32_t bytes_sent;
DECL|dfu_check_app_state|function|static bool dfu_check_app_state(void)
DECL|dfu_class_handle_req|function|static int dfu_class_handle_req(struct usb_setup_packet *pSetup,s32_t *data_len, u8_t **data)
DECL|dfu_config|variable|dfu_config
DECL|dfu_config|variable|dfu_config
DECL|dfu_custom_handle_req|function|static int dfu_custom_handle_req(struct usb_setup_packet *pSetup,s32_t *data_len, u8_t **data)
DECL|dfu_data_t|struct|struct dfu_data_t {
DECL|dfu_data|variable|dfu_data
DECL|dfu_mode_usb_description|variable|dfu_mode_usb_description
DECL|dfu_reset_counters|function|static void dfu_reset_counters(void)
DECL|dfu_runtime_usb_description|variable|dfu_runtime_usb_description
DECL|dfu_start|function|int dfu_start(struct device *flash_dev, u32_t flash_base_addr,u32_t flash_page_size, u32_t flash_upload_size)
DECL|dfu_status_cb|function|static void dfu_status_cb(enum usb_dc_status_code status, u8_t *param)
DECL|flash_base_addr|member|u32_t flash_base_addr;
DECL|flash_dev|member|struct device *flash_dev;
DECL|flash_page_size|member|u32_t flash_page_size;
DECL|flash_upload_size|member|u32_t flash_upload_size;
DECL|state|member|enum dfu_state state; /* State of the DFU device */
DECL|status|member|enum dfu_status status; /* Status of the DFU device */
