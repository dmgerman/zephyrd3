DECL|CDC1_NUM_EP|macro|CDC1_NUM_EP
DECL|CDC2_NUM_EP|macro|CDC2_NUM_EP
DECL|CDC_BULK_EP_MPS|macro|CDC_BULK_EP_MPS
DECL|CDC_CLASS_REQ_MAX_DATA_SIZE|macro|CDC_CLASS_REQ_MAX_DATA_SIZE
DECL|CDC_CONTROL_SERIAL_STATE_TIMEOUT_US|macro|CDC_CONTROL_SERIAL_STATE_TIMEOUT_US
DECL|CDC_ENDP_INT|macro|CDC_ENDP_INT
DECL|CDC_ENDP_IN|macro|CDC_ENDP_IN
DECL|CDC_ENDP_OUT|macro|CDC_ENDP_OUT
DECL|CDC_INTERRUPT_EP_MPS|macro|CDC_INTERRUPT_EP_MPS
DECL|DEFAUL_BAUDRATE|macro|DEFAUL_BAUDRATE
DECL|DEV_DATA|macro|DEV_DATA
DECL|WEBUSB_BUFFER_SIZE|macro|WEBUSB_BUFFER_SIZE
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
DECL|cb|member|uart_irq_callback_t cb;
DECL|cdc_acm_cfg|member|} __packed cdc_acm_cfg;
DECL|cfg_descr|member|struct usb_cfg_descriptor cfg_descr;
DECL|dev_common_descriptor|struct|struct dev_common_descriptor {
DECL|device_descriptor|member|struct usb_device_descriptor device_descriptor;
DECL|iad_cdc|member|struct usb_association_descriptor iad_cdc;
DECL|if0_acm|member|struct cdc_acm_descriptor if0_acm;
DECL|if0_cm|member|struct cdc_cm_descriptor if0_cm;
DECL|if0_header|member|struct cdc_header_descriptor if0_header;
DECL|if0_int_ep|member|struct usb_ep_descriptor if0_int_ep;
DECL|if0_union|member|struct cdc_union_descriptor if0_union;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if1_in_ep|member|struct usb_ep_descriptor if1_in_ep;
DECL|if1_out_ep|member|struct usb_ep_descriptor if1_out_ep;
DECL|if1|member|struct usb_if_descriptor if1;
DECL|if2_in_ep|member|struct usb_ep_descriptor if2_in_ep;
DECL|if2_out_ep|member|struct usb_ep_descriptor if2_out_ep;
DECL|if2|member|struct usb_if_descriptor if2;
DECL|interface_data|member|u8_t interface_data[CDC_CLASS_REQ_MAX_DATA_SIZE];
DECL|lang_descr|member|struct usb_string_descriptor lang_descr;
DECL|line_coding|member|struct cdc_acm_line_coding line_coding;
DECL|line_state|member|u8_t line_state;
DECL|notification_sent|member|u8_t notification_sent;
DECL|req_handlers|variable|req_handlers
DECL|rx_buf_head|member|u32_t rx_buf_head; /* Head of the internal Rx buffer */
DECL|rx_buf_tail|member|u32_t rx_buf_tail; /* Tail of the internal Rx buffer */
DECL|rx_buf|member|u8_t rx_buf[WEBUSB_BUFFER_SIZE];/* Internal Rx buffer */
DECL|rx_irq_ena|member|u8_t rx_irq_ena; /* Rx interrupt enable status */
DECL|rx_ready|member|u8_t rx_ready; /* Rx ready status */
DECL|serial_state|member|u8_t serial_state;
DECL|string_descr|member|} __packed string_descr;
DECL|term_descr|member|struct usb_desc_header term_descr;
DECL|tx_irq_ena|member|u8_t tx_irq_ena; /* Tx interrupt enable status */
DECL|tx_ready|member|u8_t tx_ready;
DECL|unicode_mfr|member|} __packed unicode_mfr;
DECL|unicode_product|member|} __packed unicode_product;
DECL|unicode_sn|member|} __packed unicode_sn;
DECL|usb_cdc_acm_config|struct|struct usb_cdc_acm_config {
DECL|usb_mfr_descriptor|struct|struct usb_mfr_descriptor {
DECL|usb_product_descriptor|struct|struct usb_product_descriptor {
DECL|usb_sn_descriptor|struct|struct usb_sn_descriptor {
DECL|usb_status|member|enum usb_dc_status_code usb_status;
DECL|usb_string_desription|struct|struct usb_string_desription {
DECL|webusb_register_request_handlers|function|void webusb_register_request_handlers(struct webusb_req_handlers *handlers)
DECL|webusb_serial_baudrate_set|function|static void webusb_serial_baudrate_set(struct device *dev, u32_t baudrate)
DECL|webusb_serial_bulk_in|function|static void webusb_serial_bulk_in(u8_t ep,enum usb_dc_ep_cb_status_code ep_status)
DECL|webusb_serial_bulk_out|function|static void webusb_serial_bulk_out(u8_t ep,enum usb_dc_ep_cb_status_code ep_status)
DECL|webusb_serial_class_handle_req|function|int webusb_serial_class_handle_req(struct usb_setup_packet *pSetup,s32_t *len, u8_t **data)
DECL|webusb_serial_config|variable|webusb_serial_config
DECL|webusb_serial_custom_handle_req|function|int webusb_serial_custom_handle_req(struct usb_setup_packet *pSetup,s32_t *len, u8_t **data)
DECL|webusb_serial_dev_data_t|struct|struct webusb_serial_dev_data_t {
DECL|webusb_serial_dev_data|variable|webusb_serial_dev_data
DECL|webusb_serial_dev_status_cb|function|static void webusb_serial_dev_status_cb(enum usb_dc_status_code status,u8_t *param)
DECL|webusb_serial_dev|variable|webusb_serial_dev
DECL|webusb_serial_driver_api|variable|webusb_serial_driver_api
DECL|webusb_serial_driver_api|variable|webusb_serial_driver_api
DECL|webusb_serial_ep_data|variable|webusb_serial_ep_data
DECL|webusb_serial_fifo_fill|function|static int webusb_serial_fifo_fill(struct device *dev,const u8_t *tx_data, int len)
DECL|webusb_serial_fifo_read|function|static int webusb_serial_fifo_read(struct device *dev, u8_t *rx_data,const int size)
DECL|webusb_serial_init|function|static int webusb_serial_init(struct device *dev)
DECL|webusb_serial_int_in|function|static void webusb_serial_int_in(u8_t ep,enum usb_dc_ep_cb_status_code ep_status)
DECL|webusb_serial_irq_callback_set|function|static void webusb_serial_irq_callback_set(struct device *dev,uart_irq_callback_t cb)
DECL|webusb_serial_irq_is_pending|function|static int webusb_serial_irq_is_pending(struct device *dev)
DECL|webusb_serial_irq_rx_disable|function|static void webusb_serial_irq_rx_disable(struct device *dev)
DECL|webusb_serial_irq_rx_enable|function|static void webusb_serial_irq_rx_enable(struct device *dev)
DECL|webusb_serial_irq_rx_ready|function|static int webusb_serial_irq_rx_ready(struct device *dev)
DECL|webusb_serial_irq_tx_disable|function|static void webusb_serial_irq_tx_disable(struct device *dev)
DECL|webusb_serial_irq_tx_enable|function|static void webusb_serial_irq_tx_enable(struct device *dev)
DECL|webusb_serial_irq_tx_ready|function|static int webusb_serial_irq_tx_ready(struct device *dev)
DECL|webusb_serial_irq_update|function|static int webusb_serial_irq_update(struct device *dev)
DECL|webusb_serial_line_ctrl_get|function|static int webusb_serial_line_ctrl_get(struct device *dev,u32_t ctrl, u32_t *val)
DECL|webusb_serial_line_ctrl_set|function|static int webusb_serial_line_ctrl_set(struct device *dev,u32_t ctrl, u32_t val)
DECL|webusb_serial_poll_in|function|static int webusb_serial_poll_in(struct device *dev, unsigned char *c)
DECL|webusb_serial_poll_out|function|static unsigned char webusb_serial_poll_out(struct device *dev,unsigned char c)
DECL|webusb_serial_send_notification|function|static int webusb_serial_send_notification(struct device *dev,u16_t serial_state)
DECL|webusb_serial_usb_description|variable|webusb_serial_usb_description
DECL|webusb_serial_vendor_handle_req|function|int webusb_serial_vendor_handle_req(struct usb_setup_packet *pSetup,s32_t *len, u8_t **data)
