DECL|DEFAUL_BAUDRATE|macro|DEFAUL_BAUDRATE
DECL|DEV_DATA|macro|DEV_DATA
DECL|HIGH_BYTE|macro|HIGH_BYTE
DECL|LOW_BYTE|macro|LOW_BYTE
DECL|WEBUSB_BUFFER_SIZE|macro|WEBUSB_BUFFER_SIZE
DECL|cb|member|uart_irq_callback_t cb;
DECL|interface_data|member|u8_t interface_data[CDC_CLASS_REQ_MAX_DATA_SIZE];
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
DECL|tx_irq_ena|member|u8_t tx_irq_ena; /* Tx interrupt enable status */
DECL|tx_ready|member|u8_t tx_ready;
DECL|usb_status|member|enum usb_dc_status_code usb_status;
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
