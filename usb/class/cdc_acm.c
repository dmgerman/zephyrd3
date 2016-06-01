DECL|CDC_ACM_BUFFER_SIZE|macro|CDC_ACM_BUFFER_SIZE
DECL|CDC_ACM_DEFAUL_BAUDRATE|macro|CDC_ACM_DEFAUL_BAUDRATE
DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|DEV_DATA|macro|DEV_DATA
DECL|cb|member|uart_irq_callback_t cb;
DECL|cdc_acm_baudrate_set|function|static void cdc_acm_baudrate_set(struct device *dev, uint32_t baudrate)
DECL|cdc_acm_bulk_in|function|static void cdc_acm_bulk_in(uint8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|cdc_acm_bulk_out|function|static void cdc_acm_bulk_out(uint8_t ep,enum usb_dc_ep_cb_status_code ep_status)
DECL|cdc_acm_class_handle_req|function|int cdc_acm_class_handle_req(struct usb_setup_packet *pSetup,int32_t *len, uint8_t **data)
DECL|cdc_acm_config|variable|cdc_acm_config
DECL|cdc_acm_dev_data_t|struct|struct cdc_acm_dev_data_t {
DECL|cdc_acm_dev_data|variable|cdc_acm_dev_data
DECL|cdc_acm_dev_status_cb|function|static void cdc_acm_dev_status_cb(enum usb_dc_status_code status)
DECL|cdc_acm_dev|variable|cdc_acm_dev
DECL|cdc_acm_driver_api|variable|cdc_acm_driver_api
DECL|cdc_acm_driver_api|variable|cdc_acm_driver_api
DECL|cdc_acm_ep_data|variable|cdc_acm_ep_data
DECL|cdc_acm_fifo_fill|function|static int cdc_acm_fifo_fill(struct device *dev,const uint8_t *tx_data, int len)
DECL|cdc_acm_fifo_read|function|static int cdc_acm_fifo_read(struct device *dev, uint8_t *rx_data,const int size)
DECL|cdc_acm_init|function|static int cdc_acm_init(struct device *dev)
DECL|cdc_acm_int_in|function|static void cdc_acm_int_in(uint8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|cdc_acm_irq_callback_set|function|static void cdc_acm_irq_callback_set(struct device *dev,uart_irq_callback_t cb)
DECL|cdc_acm_irq_is_pending|function|static int cdc_acm_irq_is_pending(struct device *dev)
DECL|cdc_acm_irq_rx_disable|function|static void cdc_acm_irq_rx_disable(struct device *dev)
DECL|cdc_acm_irq_rx_enable|function|static void cdc_acm_irq_rx_enable(struct device *dev)
DECL|cdc_acm_irq_rx_ready|function|static int cdc_acm_irq_rx_ready(struct device *dev)
DECL|cdc_acm_irq_tx_disable|function|static void cdc_acm_irq_tx_disable(struct device *dev)
DECL|cdc_acm_irq_tx_enable|function|static void cdc_acm_irq_tx_enable(struct device *dev)
DECL|cdc_acm_irq_tx_ready|function|static int cdc_acm_irq_tx_ready(struct device *dev)
DECL|cdc_acm_irq_update|function|static int cdc_acm_irq_update(struct device *dev)
DECL|cdc_acm_line_ctrl_get|function|static int cdc_acm_line_ctrl_get(struct device *dev, uint32_t ctrl, uint32_t *val)
DECL|cdc_acm_line_ctrl_set|function|static int cdc_acm_line_ctrl_set(struct device *dev, uint32_t ctrl, uint32_t val)
DECL|cdc_acm_send_notification|function|static int cdc_acm_send_notification(struct device *dev, uint16_t serial_state)
DECL|cdc_acm_usb_description|variable|cdc_acm_usb_description
DECL|interface_data|member|uint8_t interface_data[CDC_CLASS_REQ_MAX_DATA_SIZE];
DECL|line_coding|member|struct cdc_acm_line_coding line_coding;
DECL|line_state|member|uint8_t line_state;
DECL|notification_sent|member|uint8_t notification_sent;
DECL|rx_buf_head|member|uint32_t rx_buf_head; /* Head of the internal Rx buffer */
DECL|rx_buf_tail|member|uint32_t rx_buf_tail; /* Tail of the internal Rx buffer */
DECL|rx_buf|member|uint8_t rx_buf[CDC_ACM_BUFFER_SIZE];/* Internal Rx buffer */
DECL|rx_irq_ena|member|uint8_t rx_irq_ena; /* Rx interrupt enable status */
DECL|rx_ready|member|uint8_t rx_ready; /* Rx ready status */
DECL|serial_state|member|uint8_t serial_state;
DECL|tx_irq_ena|member|uint8_t tx_irq_ena; /* Tx interrupt enable status */
DECL|tx_ready|member|uint8_t tx_ready;
DECL|usb_status|member|enum usb_dc_status_code usb_status;
