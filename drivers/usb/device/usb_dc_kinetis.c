DECL|BD_DATA01_MASK|macro|BD_DATA01_MASK
DECL|BD_DTS_MASK|macro|BD_DTS_MASK
DECL|BD_IDX_EP0TX_EVEN|macro|BD_IDX_EP0TX_EVEN
DECL|BD_IDX_EP0TX_ODD|macro|BD_IDX_EP0TX_ODD
DECL|BD_KEEP_MASK|macro|BD_KEEP_MASK
DECL|BD_NINC_MASK|macro|BD_NINC_MASK
DECL|BD_OWN_MASK|macro|BD_OWN_MASK
DECL|BD_STALL_MASK|macro|BD_STALL_MASK
DECL|EP_ADDR2DIR|macro|EP_ADDR2DIR
DECL|EP_ADDR2IDX|macro|EP_ADDR2IDX
DECL|EP_BUF_NUMOF_BLOCKS|macro|EP_BUF_NUMOF_BLOCKS
DECL|KINETIS_ADDR2IDX|macro|KINETIS_ADDR2IDX
DECL|KINETIS_EP_NUMOF_MASK|macro|KINETIS_EP_NUMOF_MASK
DECL|KINETIS_IN_TOKEN|macro|KINETIS_IN_TOKEN
DECL|KINETIS_OUT_TOKEN|macro|KINETIS_OUT_TOKEN
DECL|KINETIS_SETUP_TOKEN|macro|KINETIS_SETUP_TOKEN
DECL|NUM_OF_EP_MAX|macro|NUM_OF_EP_MAX
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|USBD_THREAD_STACK_SIZE|macro|USBD_THREAD_STACK_SIZE
DECL|USBFSOTG_PERID|macro|USBFSOTG_PERID
DECL|USBFSOTG_REV|macro|USBFSOTG_REV
DECL|USB_DC_CB_TYPE_EP|macro|USB_DC_CB_TYPE_EP
DECL|USB_DC_CB_TYPE_MGMT|macro|USB_DC_CB_TYPE_MGMT
DECL|__packed|member|} __packed;
DECL|__packed|member|} get __packed;
DECL|__packed|member|} set __packed;
DECL|__packed|variable|__packed
DECL|address|member|u8_t address;
DECL|attached|member|bool attached;
DECL|bc|member|u32_t bc : 16;
DECL|bc|member|u32_t bc : 16;
DECL|bd_active|member|u32_t bd_active;
DECL|bd_ctrl|member|u32_t bd_ctrl : 6;
DECL|bd_fields|member|u32_t bd_fields;
DECL|buf_addr|member|u32_t buf_addr;
DECL|buf_descriptor|struct|struct buf_descriptor {
DECL|cb_in|member|usb_dc_ep_callback cb_in;
DECL|cb_msg|struct|struct cb_msg {
DECL|cb_out|member|usb_dc_ep_callback cb_out;
DECL|cb|member|u32_t cb;
DECL|data01|member|u32_t data01 : 1;
DECL|dev_data|variable|dev_data
DECL|ep_ctrl|member|struct usb_ep_ctrl_data ep_ctrl[NUM_OF_EP_MAX];
DECL|ep_status|struct|struct ep_status {
DECL|ep|member|u8_t ep;
DECL|get_bdt_idx|function|static inline u8_t get_bdt_idx(u8_t ep, u8_t odd)
DECL|in_data1|member|u16_t in_data1 : 1;
DECL|in_enabled|member|u16_t in_enabled : 1;
DECL|in_odd|member|u16_t in_odd : 1;
DECL|kinetis_usb_init|function|static int kinetis_usb_init(void)
DECL|mblock_in|member|struct k_mem_block mblock_in;
DECL|mblock_out|member|struct k_mem_block mblock_out;
DECL|mps_in|member|u16_t mps_in;
DECL|mps_out|member|u16_t mps_out;
DECL|out_data1|member|u16_t out_data1 : 1;
DECL|out_enabled|member|u16_t out_enabled : 1;
DECL|out_odd|member|u16_t out_odd : 1;
DECL|own|member|u32_t own : 1;
DECL|reenable_all_endpoints|function|static inline void reenable_all_endpoints(void)
DECL|reserved_15_8|member|u32_t reserved_15_8 : 8;
DECL|reserved_15_8|member|u32_t reserved_15_8 : 8;
DECL|reserved_1_0|member|u32_t reserved_1_0 : 2;
DECL|reserved_1_0|member|u32_t reserved_1_0 : 2;
DECL|status_cb|member|usb_dc_status_callback status_cb;
DECL|status|member|} status;
DECL|thread|member|struct k_thread thread;
DECL|tok_pid|member|u32_t tok_pid : 4;
DECL|type|member|u8_t type;
DECL|usb_dc_attach|function|int usb_dc_attach(void)
DECL|usb_dc_detach|function|int usb_dc_detach(void)
DECL|usb_dc_ep_clear_stall|function|int usb_dc_ep_clear_stall(const u8_t ep)
DECL|usb_dc_ep_configure|function|int usb_dc_ep_configure(const struct usb_dc_ep_cfg_data * const cfg)
DECL|usb_dc_ep_disable|function|int usb_dc_ep_disable(const u8_t ep)
DECL|usb_dc_ep_enable|function|int usb_dc_ep_enable(const u8_t ep)
DECL|usb_dc_ep_flush|function|int usb_dc_ep_flush(const u8_t ep)
DECL|usb_dc_ep_halt|function|int usb_dc_ep_halt(const u8_t ep)
DECL|usb_dc_ep_is_stalled|function|int usb_dc_ep_is_stalled(const u8_t ep, u8_t *const stalled)
DECL|usb_dc_ep_mps|function|int usb_dc_ep_mps(const u8_t ep)
DECL|usb_dc_ep_read_continue|function|int usb_dc_ep_read_continue(u8_t ep)
DECL|usb_dc_ep_read_wait|function|int usb_dc_ep_read_wait(u8_t ep, u8_t *data, u32_t max_data_len,u32_t *read_bytes)
DECL|usb_dc_ep_read|function|int usb_dc_ep_read(const u8_t ep, u8_t *const data, const u32_t max_data_len, u32_t *const read_bytes)
DECL|usb_dc_ep_set_callback|function|int usb_dc_ep_set_callback(const u8_t ep, const usb_dc_ep_callback cb)
DECL|usb_dc_ep_set_stall|function|int usb_dc_ep_set_stall(const u8_t ep)
DECL|usb_dc_ep_write|function|int usb_dc_ep_write(const u8_t ep, const u8_t *const data, const u32_t data_len, u32_t * const ret_bytes)
DECL|usb_dc_reset|function|int usb_dc_reset(void)
DECL|usb_dc_set_address|function|int usb_dc_set_address(const u8_t addr)
DECL|usb_dc_set_status_callback|function|int usb_dc_set_status_callback(const usb_dc_status_callback cb)
DECL|usb_device_data|struct|struct usb_device_data {
DECL|usb_ep_ctrl_data|struct|struct usb_ep_ctrl_data {
DECL|usb_kinetis_isr_handler|function|static void usb_kinetis_isr_handler(void)
DECL|usb_kinetis_thread_main|function|static void usb_kinetis_thread_main(void *arg1, void *unused1, void *unused2)
