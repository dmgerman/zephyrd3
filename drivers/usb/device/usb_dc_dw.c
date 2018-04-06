DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|USB_DW_EP_ADDR2DIR|macro|USB_DW_EP_ADDR2DIR
DECL|USB_DW_EP_ADDR2IDX|macro|USB_DW_EP_ADDR2IDX
DECL|USB_DW_EP_IDX2ADDR|macro|USB_DW_EP_IDX2ADDR
DECL|USB_DW_SUP_CNT|macro|USB_DW_SUP_CNT
DECL|_usb_dw_int_unmask|function|static inline void _usb_dw_int_unmask(void)
DECL|attached|member|u8_t attached;
DECL|cb|member|usb_dc_ep_callback cb;/* Endpoint callback function */
DECL|data_len|member|u32_t data_len;
DECL|ep_ena|member|u8_t ep_ena;
DECL|fifo_num|member|u8_t fifo_num;
DECL|fifo_size|member|u32_t fifo_size;
DECL|in_ep_ctrl|member|struct usb_ep_ctrl_prv in_ep_ctrl[USB_DW_IN_EP_NUM];
DECL|mps|member|u16_t mps; /* Max ep pkt size */
DECL|n_tx_fifos|member|int n_tx_fifos;
DECL|out_ep_ctrl|member|struct usb_ep_ctrl_prv out_ep_ctrl[USB_DW_OUT_EP_NUM];
DECL|status_cb|member|usb_dc_status_callback status_cb;
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
DECL|usb_dc_ep_read|function|int usb_dc_ep_read(const u8_t ep, u8_t *const data,const u32_t max_data_len, u32_t * const read_bytes)
DECL|usb_dc_ep_set_callback|function|int usb_dc_ep_set_callback(const u8_t ep, const usb_dc_ep_callback cb)
DECL|usb_dc_ep_set_stall|function|int usb_dc_ep_set_stall(const u8_t ep)
DECL|usb_dc_ep_write|function|int usb_dc_ep_write(const u8_t ep, const u8_t *const data,const u32_t data_len, u32_t * const ret_bytes)
DECL|usb_dc_reset|function|int usb_dc_reset(void)
DECL|usb_dc_set_address|function|int usb_dc_set_address(const u8_t addr)
DECL|usb_dc_set_status_callback|function|int usb_dc_set_status_callback(const usb_dc_status_callback cb)
DECL|usb_dw_clock_disable|function|static void usb_dw_clock_disable(void)
DECL|usb_dw_clock_enable|function|static int usb_dw_clock_enable(void)
DECL|usb_dw_ctrl_prv|struct|struct usb_dw_ctrl_prv {
DECL|usb_dw_ctrl|variable|usb_dw_ctrl
DECL|usb_dw_ep_is_enabled|function|static u8_t usb_dw_ep_is_enabled(u8_t ep)
DECL|usb_dw_ep_is_valid|function|static u8_t usb_dw_ep_is_valid(u8_t ep)
DECL|usb_dw_ep_set|function|static int usb_dw_ep_set(u8_t ep,u32_t ep_mps, enum usb_dc_ep_type ep_type)
DECL|usb_dw_flush_tx_fifo|function|static void usb_dw_flush_tx_fifo(int ep)
DECL|usb_dw_handle_enum_done|function|static void usb_dw_handle_enum_done(void)
DECL|usb_dw_handle_reset|function|static void usb_dw_handle_reset(void)
DECL|usb_dw_init|function|static int usb_dw_init(void)
DECL|usb_dw_isr_handler|function|static void usb_dw_isr_handler(void)
DECL|usb_dw_num_dev_eps|function|static int usb_dw_num_dev_eps(void)
DECL|usb_dw_prep_rx|function|static void usb_dw_prep_rx(const u8_t ep, u8_t setup)
DECL|usb_dw_reg_dump|function|static void usb_dw_reg_dump(void)
DECL|usb_dw_reg_dump|macro|usb_dw_reg_dump
DECL|usb_dw_reset|function|static int usb_dw_reset(void)
DECL|usb_dw_set_fifo|function|static int usb_dw_set_fifo(u8_t ep)
DECL|usb_dw_tx_fifo_avail|function|static int usb_dw_tx_fifo_avail(int ep)
DECL|usb_dw_tx|function|static int usb_dw_tx(u8_t ep, const u8_t *const data,u32_t data_len)
DECL|usb_dw_udelay|function|static inline void usb_dw_udelay(u32_t us)
DECL|usb_ep_ctrl_prv|struct|struct usb_ep_ctrl_prv {
