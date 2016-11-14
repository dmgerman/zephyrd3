DECL|NUMBER_OF_ALLOWED_ORIGINS|macro|NUMBER_OF_ALLOWED_ORIGINS
DECL|custom_handle_req|function|int custom_handle_req(struct usb_setup_packet *pSetup,int32_t *len, uint8_t **data)
DECL|data_arrived|variable|data_arrived
DECL|data_buf|variable|data_buf
DECL|data_transmitted|variable|data_transmitted
DECL|interrupt_handler|function|static void interrupt_handler(struct device *dev)
DECL|main|function|void main(void)
DECL|read_and_echo_data|function|static void read_and_echo_data(struct device *dev, int *bytes_read)
DECL|req_handlers|variable|req_handlers
DECL|vendor_handle_req|function|int vendor_handle_req(struct usb_setup_packet *pSetup,int32_t *len, uint8_t **data)
DECL|webusb_allowed_origins|variable|webusb_allowed_origins
DECL|webusb_bos_descriptor|variable|webusb_bos_descriptor
DECL|webusb_origin_url|variable|webusb_origin_url
DECL|write_data|function|static void write_data(struct device *dev, const char *buf, int len)
