DECL|ASSERT|macro|ASSERT
DECL|CFG_EPIN_CNT|macro|CFG_EPIN_CNT
DECL|CFG_EPOUT_CNT|macro|CFG_EPOUT_CNT
DECL|CFG_EP_CNT|macro|CFG_EP_CNT
DECL|CFG_EP_ISOIN_CNT|macro|CFG_EP_ISOIN_CNT
DECL|CFG_EP_ISOOUT_CNT|macro|CFG_EP_ISOOUT_CNT
DECL|EP_BUF_ALIGN|macro|EP_BUF_ALIGN
DECL|EP_BUF_COUNT|macro|EP_BUF_COUNT
DECL|EP_BUF_MAX_SZ|macro|EP_BUF_MAX_SZ
DECL|EP_BUF_MAX_SZ|macro|EP_BUF_MAX_SZ
DECL|EP_BUF_MIN_SZ|macro|EP_BUF_MIN_SZ
DECL|EP_BUF_TOTAL|macro|EP_BUF_TOTAL
DECL|EP_CONTROL_READ|macro|EP_CONTROL_READ
DECL|EP_CONTROL_WRITE_NO_DATA|macro|EP_CONTROL_WRITE_NO_DATA
DECL|EP_CONTROL_WRITE|macro|EP_CONTROL_WRITE
DECL|EP_DATA_RECV|enumerator|EP_DATA_RECV,
DECL|EP_DATA|enumerator|EP_DATA,
DECL|EP_DMA_END|enumerator|EP_DMA_END,
DECL|EP_DMA_START|enumerator|EP_DMA_START,
DECL|EP_IDLE|enumerator|EP_IDLE,
DECL|EP_ISOIN_INDEX|macro|EP_ISOIN_INDEX
DECL|EP_ISOOUT_INDEX|macro|EP_ISOOUT_INDEX
DECL|EP_OUT_DATA_RCVD|macro|EP_OUT_DATA_RCVD
DECL|EP_SETUP_RECV|enumerator|EP_SETUP_RECV,
DECL|EP_SETUP|enumerator|EP_SETUP,
DECL|EP_SOF|enumerator|EP_SOF,
DECL|EP_STATUS|enumerator|EP_STATUS,
DECL|EP_WRITE_COMPLETE|enumerator|EP_WRITE_COMPLETE,
DECL|EP_WRITE_PENDING|macro|EP_WRITE_PENDING
DECL|FIFO_ELEM_ALIGN|macro|FIFO_ELEM_ALIGN
DECL|FIFO_ELEM_COUNT|macro|FIFO_ELEM_COUNT
DECL|FIFO_ELEM_MAX_SZ|macro|FIFO_ELEM_MAX_SZ
DECL|FIFO_ELEM_MIN_SZ|macro|FIFO_ELEM_MIN_SZ
DECL|MAX_EP_BUF_SZ|macro|MAX_EP_BUF_SZ
DECL|MAX_ISO_EP_BUF_SZ|macro|MAX_ISO_EP_BUF_SZ
DECL|NRF5_USB_STATE_CHANGE|macro|NRF5_USB_STATE_CHANGE
DECL|NRF5_USB_STATUS_CHANGE|macro|NRF5_USB_STATUS_CHANGE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|USBD_ADDRESS_SET|enumerator|USBD_ADDRESS_SET,
DECL|USBD_ATTACHED|enumerator|USBD_ATTACHED,
DECL|USBD_CONFIGURED|enumerator|USBD_CONFIGURED,
DECL|USBD_DEFAULT|enumerator|USBD_DEFAULT,
DECL|USBD_DETACHED|enumerator|USBD_DETACHED,
DECL|USBD_EPDATASTATUS_EPIN_MASK|macro|USBD_EPDATASTATUS_EPIN_MASK
DECL|USBD_EPDATASTATUS_EPOUT_MASK|macro|USBD_EPDATASTATUS_EPOUT_MASK
DECL|USBD_EPSTATUS_EPIN_MASK|macro|USBD_EPSTATUS_EPIN_MASK
DECL|USBD_EPSTATUS_EPOUT_MASK|macro|USBD_EPSTATUS_EPOUT_MASK
DECL|USBD_INT_CNT|macro|USBD_INT_CNT
DECL|USBD_POWERED|enumerator|USBD_POWERED,
DECL|USBD_SUSPENDED|enumerator|USBD_SUSPENDED,
DECL|address_set|member|bool address_set;
DECL|addr|member|u8_t addr;
DECL|alloc_ep_usb_event|function|static inline struct ep_usb_event *alloc_ep_usb_event(void)
DECL|attached|member|bool attached;
DECL|block|member|struct k_mem_block block;
DECL|block|member|struct k_mem_block block;
DECL|buf|member|struct nrf5_usbd_ep_buf buf;
DECL|cb|member|usb_dc_ep_callback cb;
DECL|cfg_ep_interrupt|function|static void cfg_ep_interrupt(const u8_t ep, bool set)
DECL|cfg|member|struct nrf5_usbd_ep_cfg cfg;
DECL|curr|member|u8_t *curr;
DECL|data|member|u8_t *data;
DECL|dequeue_ep_usb_event|function|static inline struct ep_usb_event *dequeue_ep_usb_event(void)
DECL|dev_attached|function|static inline bool dev_attached(void)
DECL|dev_ready|function|static inline bool dev_ready(void)
DECL|dma_in_use|member|struct k_sem dma_in_use;
DECL|enable_mask|member|u32_t enable_mask;
DECL|enabled|member|bool enabled;
DECL|end_epin_handler|function|static void end_epin_handler(u32_t pos)
DECL|end_epout_handler|function|static void end_epout_handler(u32_t pos)
DECL|end_isoin_handler|function|static void end_isoin_handler(u32_t pos)
DECL|end_isoout_handler|function|static void end_isoout_handler(u32_t pos)
DECL|endpoint_ctx_deinit|function|static void endpoint_ctx_deinit(void)
DECL|endpoint_ctx_init|function|static void endpoint_ctx_init(void)
DECL|endpoint_ctx|function|static struct nrf5_usbd_ep_ctx *endpoint_ctx(const u8_t ep)
DECL|enqueue_ep_usb_event|function|static inline void enqueue_ep_usb_event(struct ep_usb_event *ev)
DECL|en|member|bool en;
DECL|ep0_datadone_handler|function|static void ep0_datadone_handler(u32_t pos)
DECL|ep0setup_handler|function|static void ep0setup_handler(u32_t pos)
DECL|ep_ctx|member|struct nrf5_usbd_ep_ctx ep_ctx[CFG_EP_CNT];
DECL|ep_event|enum|enum ep_event {
DECL|ep_is_valid|function|static inline bool ep_is_valid(const u8_t ep)
DECL|ep_state|enum|enum ep_state {
DECL|ep_usb_event|struct|struct ep_usb_event {
DECL|epdata_handler|function|static void epdata_handler(u32_t pos)
DECL|epdatastatus_to_ep_ctx|function|static struct nrf5_usbd_ep_ctx *epdatastatus_to_ep_ctx(u32_t epdatastatus)
DECL|epstatus_to_ep_ctx|function|static struct nrf5_usbd_ep_ctx *epstatus_to_ep_ctx(u32_t epstatus)
DECL|ep|member|struct nrf5_usbd_ep_ctx *ep;
DECL|event_map|variable|event_map
DECL|evt|member|enum ep_event evt;
DECL|flags|member|u32_t flags;
DECL|flags|member|u32_t flags;
DECL|flags|member|u32_t flags;
DECL|flush_ep_usb_events|function|static inline void flush_ep_usb_events(void)
DECL|frame_counter|member|u32_t frame_counter;
DECL|free_ep_usb_event|function|static inline void free_ep_usb_event(struct ep_usb_event *ev)
DECL|get_usbd_ctx|function|static inline struct nrf5_usbd_ctx *get_usbd_ctx(void)
DECL|handle_ctrl_ep_data_state_events|function|static inline void handle_ctrl_ep_data_state_events(struct ep_usb_event *ev)
DECL|handle_ctrl_ep_event|function|static void handle_ctrl_ep_event(struct ep_usb_event *ev)
DECL|handle_ctrl_ep_idle_state_events|function|static inline void handle_ctrl_ep_idle_state_events(struct ep_usb_event *ev)
DECL|handle_ctrl_ep_setup_state_events|function|static inline void handle_ctrl_ep_setup_state_events(struct ep_usb_event *ev)
DECL|handle_data_ep_data_state_events|function|static inline void handle_data_ep_data_state_events(struct ep_usb_event *ev)
DECL|handle_data_ep_event|function|static void handle_data_ep_event(struct ep_usb_event *ev)
DECL|handle_data_ep_idle_state_events|function|static inline void handle_data_ep_idle_state_events(struct ep_usb_event *ev)
DECL|handle_iso_ep_data_state_events|function|static inline void handle_iso_ep_data_state_events(struct ep_usb_event *ev)
DECL|handle_iso_ep_event|function|static void handle_iso_ep_event(struct ep_usb_event *ev)
DECL|handle_iso_ep_idle_state_events|function|static inline void handle_iso_ep_idle_state_events(struct ep_usb_event *ev)
DECL|hf_clock_enable|function|static int hf_clock_enable(bool on, bool blocking)
DECL|in_endpoint_ctx|function|static struct nrf5_usbd_ep_ctx *in_endpoint_ctx(const u8_t ep)
DECL|isr_event_handler_t|typedef|typedef void (*isr_event_handler_t)(u32_t pos);
DECL|isr_event_handlers|variable|isr_event_handlers
DECL|len|member|u32_t len;
DECL|max_sz|member|u32_t max_sz;
DECL|misc_u|member|} misc_u;
DECL|node|member|sys_snode_t node;
DECL|nrf5_usbd_ctx|struct|struct nrf5_usbd_ctx {
DECL|nrf5_usbd_ep_buf|struct|struct nrf5_usbd_ep_buf {
DECL|nrf5_usbd_ep_cfg|struct|struct nrf5_usbd_ep_cfg {
DECL|nrf5_usbd_ep_ctx|struct|struct nrf5_usbd_ep_ctx {
DECL|nrf5_usbd_power_event_callback|function|void nrf5_usbd_power_event_callback(nrf_power_event_t event)
DECL|nrf5_usbd_state|enum|enum nrf5_usbd_state {
DECL|out_endpoint_ctx|function|static struct nrf5_usbd_ep_ctx *out_endpoint_ctx(const u8_t ep)
DECL|process_interrupts|function|static u32_t process_interrupts(u32_t mask)
DECL|ready|member|bool ready;
DECL|sof_handler|function|static void sof_handler(u32_t pos)
DECL|start_ep0rcvout_task|function|static void start_ep0rcvout_task(void)
DECL|start_ep0stall_task|function|static void start_ep0stall_task(void)
DECL|start_ep0status_task|function|static void start_ep0status_task(void)
DECL|start_epin_task|function|static void start_epin_task(u8_t ep)
DECL|start_epout_task|function|static void start_epout_task(u8_t ep)
DECL|state|member|enum ep_state state;
DECL|state|member|enum nrf5_usbd_state state;
DECL|status_cb|member|usb_dc_status_callback status_cb;
DECL|status_code|member|enum usb_dc_status_code status_code;
DECL|type|member|enum usb_dc_ep_type type;
DECL|usb_dc_attach|function|int usb_dc_attach(void)
DECL|usb_dc_detach|function|int usb_dc_detach(void)
DECL|usb_dc_ep_check_cap|function|int usb_dc_ep_check_cap(const struct usb_dc_ep_cfg_data * const cfg)
DECL|usb_dc_ep_clear_stall|function|int usb_dc_ep_clear_stall(const u8_t ep)
DECL|usb_dc_ep_configure|function|int usb_dc_ep_configure(const struct usb_dc_ep_cfg_data * const ep_cfg)
DECL|usb_dc_ep_disable|function|int usb_dc_ep_disable(const u8_t ep)
DECL|usb_dc_ep_enable|function|int usb_dc_ep_enable(const u8_t ep)
DECL|usb_dc_ep_flush|function|int usb_dc_ep_flush(const u8_t ep)
DECL|usb_dc_ep_halt|function|int usb_dc_ep_halt(const u8_t ep)
DECL|usb_dc_ep_is_stalled|function|int usb_dc_ep_is_stalled(const u8_t ep, u8_t *const stalled)
DECL|usb_dc_ep_mps|function|int usb_dc_ep_mps(const u8_t ep)
DECL|usb_dc_ep_read_continue|function|int usb_dc_ep_read_continue(u8_t ep)
DECL|usb_dc_ep_read_wait|function|int usb_dc_ep_read_wait(u8_t ep, u8_t *data, u32_t max_data_len,u32_t *read_bytes)
DECL|usb_dc_ep_read|function|int usb_dc_ep_read(const u8_t ep, u8_t *const data, const u32_t max_data_len, u32_t * const read_bytes)
DECL|usb_dc_ep_set_callback|function|int usb_dc_ep_set_callback(const u8_t ep, const usb_dc_ep_callback cb)
DECL|usb_dc_ep_set_stall|function|int usb_dc_ep_set_stall(const u8_t ep)
DECL|usb_dc_ep_write|function|int usb_dc_ep_write(const u8_t ep, const u8_t *const data, const u32_t data_len, u32_t * const ret_bytes)
DECL|usb_dc_reset|function|int usb_dc_reset(void)
DECL|usb_dc_set_address|function|int usb_dc_set_address(const u8_t addr)
DECL|usb_dc_set_status_callback|function|int usb_dc_set_status_callback(const usb_dc_status_callback cb)
DECL|usb_event_handler|function|static void usb_event_handler(u32_t pos)
DECL|usb_reset_handler|function|static void usb_reset_handler(u32_t pos)
DECL|usb_started_handler|function|static void usb_started_handler(u32_t pos)
DECL|usb_work|member|struct k_work usb_work;
DECL|usbd_ctx|variable|usbd_ctx
DECL|usbd_disable_interrupts|function|static void usbd_disable_interrupts(void)
DECL|usbd_enable_endpoints|function|static void usbd_enable_endpoints(struct nrf5_usbd_ctx *ctx)
DECL|usbd_enable_interrupts|function|static void usbd_enable_interrupts(void)
DECL|usbd_handle_state_change|function|static void usbd_handle_state_change(struct nrf5_usbd_ctx *ctx)
DECL|usbd_handle_status_change|function|static void usbd_handle_status_change(struct nrf5_usbd_ctx *ctx)
DECL|usbd_install_isr|function|static void usbd_install_isr(void)
DECL|usbd_isr_handler|function|static void usbd_isr_handler(void *arg)
DECL|usbd_power_int_enable|function|static int usbd_power_int_enable(bool enable)
DECL|usbd_work_handler|function|static void usbd_work_handler(struct k_work *item)
DECL|work_queue|member|struct k_fifo work_queue;
