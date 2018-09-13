DECL|CFG_RNDIS_CMD_BUF_COUNT|macro|CFG_RNDIS_CMD_BUF_COUNT
DECL|CFG_RNDIS_CMD_BUF_SIZE|macro|CFG_RNDIS_CMD_BUF_SIZE
DECL|CFG_RNDIS_TX_BUF_COUNT|macro|CFG_RNDIS_TX_BUF_COUNT
DECL|CFG_RNDIS_TX_BUF_SIZE|macro|CFG_RNDIS_TX_BUF_SIZE
DECL|INITIALIZED|enumerator|INITIALIZED,
DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
DECL|MSOS_STRING_LENGTH|macro|MSOS_STRING_LENGTH
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|RNDIS_INT_EP_IDX|macro|RNDIS_INT_EP_IDX
DECL|RNDIS_IN_EP_IDX|macro|RNDIS_IN_EP_IDX
DECL|RNDIS_OUT_EP_IDX|macro|RNDIS_OUT_EP_IDX
DECL|Reserved1|member|u8_t Reserved1;
DECL|Reserved2|member|u8_t Reserved2[6];
DECL|Reserved|member|u8_t Reserved[7];
DECL|UNINITIALIZED|enumerator|UNINITIALIZED,
DECL|VERBOSE_DEBUG|macro|VERBOSE_DEBUG
DECL|__packed|variable|__packed
DECL|__rndis|struct|static struct __rndis {
DECL|append_bytes|function|static int append_bytes(u8_t *out_buf, u16_t buf_len, u8_t *data,u16_t len, u16_t remaining)
DECL|bCount|member|u8_t bCount;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bFirstInterfaceNumber|member|u8_t bFirstInterfaceNumber;
DECL|bLength|member|u8_t bLength;
DECL|bMS_VendorCode|member|u8_t bMS_VendorCode;
DECL|bPad|member|u8_t bPad;
DECL|bString|member|u8_t bString[MSOS_STRING_LENGTH - 4];
DECL|bcdVersion|member|u16_t bcdVersion;
DECL|cmd_thread_data|variable|cmd_thread_data
DECL|cmd_thread|function|static void cmd_thread(void)
DECL|compat_id_desc|struct|static struct compat_id_desc {
DECL|compat_id_func|struct|struct compat_id_func {
DECL|compatibleID|member|u8_t compatibleID[8];
DECL|data|member|u8_t data[];
DECL|drv_version|variable|drv_version
DECL|dwLength|member|u32_t dwLength;
DECL|func|member|} __packed func[1];
DECL|handle_encapsulated_cmd|function|static int handle_encapsulated_cmd(u8_t *data, u32_t len)
DECL|handle_encapsulated_rsp|function|static int handle_encapsulated_rsp(u8_t **data, u32_t *len)
DECL|in_pkt_len|member|int in_pkt_len; /* Packet length to be assembled */
DECL|in_pkt|member|struct net_pkt *in_pkt; /* Pointer to pkt assembling at the moment */
DECL|len|member|u32_t len;
DECL|mac|member|u8_t mac[6];
DECL|manufacturer|variable|manufacturer
DECL|media_status|member|u8_t media_status;
DECL|msosv1_compatid_descriptor|variable|msosv1_compatid_descriptor
DECL|msosv1_string_descriptor|variable|msosv1_string_descriptor
DECL|mtu|member|u16_t mtu;
DECL|net_filter|member|u32_t net_filter;
DECL|notify_count|member|atomic_t notify_count;
DECL|notify_work|variable|notify_work
DECL|object_id_supported|variable|object_id_supported
DECL|os_desc|variable|os_desc
DECL|parse_rndis_header|function|static int parse_rndis_header(const u8_t *buffer, u32_t buf_len)
DECL|queue_encapsulated_cmd|function|static int queue_encapsulated_cmd(u8_t *data, u32_t len)
DECL|rndis_bulk_in|function|static void rndis_bulk_in(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|rndis_bulk_out|function|static void rndis_bulk_out(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|rndis_class_handler|function|static int rndis_class_handler(struct usb_setup_packet *setup, s32_t *len, u8_t **data)
DECL|rndis_clean|function|void rndis_clean(void)
DECL|rndis_cmd_queue|variable|rndis_cmd_queue
DECL|rndis_connect_media|function|static int rndis_connect_media(bool status)
DECL|rndis_ep_data|variable|rndis_ep_data
DECL|rndis_function|variable|rndis_function
DECL|rndis_halt_handle|function|static int rndis_halt_handle(void)
DECL|rndis_hdr_add|function|static void rndis_hdr_add(u8_t *buf, u32_t len)
DECL|rndis_init_handle|function|static int rndis_init_handle(u8_t *data, u32_t len)
DECL|rndis_init|function|static int rndis_init(void)
DECL|rndis_int_in|function|static void rndis_int_in(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|rndis_keepalive_handle|function|static int rndis_keepalive_handle(u8_t *data, u32_t len)
DECL|rndis_notify_rsp|function|static void rndis_notify_rsp(void)
DECL|rndis_notify|function|static void rndis_notify(struct k_work *work)
DECL|rndis_query_add_supp_list|function|static uint32_t rndis_query_add_supp_list(struct net_buf *buf)
DECL|rndis_query_handle|function|static int rndis_query_handle(u8_t *data, u32_t len)
DECL|rndis_queue_rsp|function|static void rndis_queue_rsp(struct net_buf *rsp)
DECL|rndis_reset_handle|function|static int rndis_reset_handle(u8_t *data, u32_t len)
DECL|rndis_send_media_status|function|static int rndis_send_media_status(u32_t media_status)
DECL|rndis_send_zero_frame|function|static void rndis_send_zero_frame(void)
DECL|rndis_send|function|static int rndis_send(struct net_pkt *pkt)
DECL|rndis_set_handle|function|static int rndis_set_handle(u8_t *data, u32_t len)
DECL|rndis_status_cb|function|static void rndis_status_cb(enum usb_dc_status_code status, u8_t *param)
DECL|rndis_tx_queue|variable|rndis_tx_queue
DECL|rndis|variable|rndis
DECL|rx_err|member|u32_t rx_err;
DECL|rx_no_buf|member|u32_t rx_no_buf;
DECL|skip_bytes|member|int skip_bytes; /* In case of low memory, skip bytes */
DECL|speed|member|u16_t speed; /* TODO: Calculate right speed */
DECL|state|member|} state;
DECL|string_desc|struct|static struct string_desc {
DECL|subCompatibleID|member|u8_t subCompatibleID[8];
DECL|tlv|struct|struct tlv {
DECL|tx_err|member|u32_t tx_err;
DECL|type|member|u32_t type;
DECL|wIndex|member|u16_t wIndex;
