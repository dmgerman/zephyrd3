DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|USB_DW_EP_ADDR2DIR|macro|USB_DW_EP_ADDR2DIR
DECL|USB_DW_EP_ADDR2IDX|macro|USB_DW_EP_ADDR2IDX
DECL|USB_DW_EP_IDX2ADDR|macro|USB_DW_EP_IDX2ADDR
DECL|USB_DW_SUP_CNT|macro|USB_DW_SUP_CNT
DECL|_usb_dw_int_unmask|function|static inline void _usb_dw_int_unmask(void)
DECL|attached|member|uint8_t attached;
DECL|cb|member|usb_dc_ep_callback cb;/* Endpoint callback function */
DECL|data_len|member|uint32_t data_len;
DECL|ep_ena|member|uint8_t ep_ena;
DECL|in_ep_ctrl|member|struct usb_ep_ctrl_prv in_ep_ctrl[USB_DW_IN_EP_NUM];
DECL|mps|member|uint16_t mps; /* Max ep pkt size */
DECL|out_ep_ctrl|member|struct usb_ep_ctrl_prv out_ep_ctrl[USB_DW_OUT_EP_NUM];
DECL|status_cb|member|usb_dc_status_callback status_cb;
DECL|usb_dc_attach|function|int usb_dc_attach(void)
DECL|usb_dc_detach|function|int usb_dc_detach(void)
DECL|usb_dc_ep_clear_stall|function|int usb_dc_ep_clear_stall(const uint8_t ep)
DECL|usb_dc_ep_configure|function|int usb_dc_ep_configure(const struct usb_dc_ep_cfg_data * const ep_cfg)
DECL|usb_dc_ep_disable|function|int usb_dc_ep_disable(const uint8_t ep)
DECL|usb_dc_ep_enable|function|int usb_dc_ep_enable(const uint8_t ep)
DECL|usb_dc_ep_flush|function|int usb_dc_ep_flush(const uint8_t ep)
DECL|usb_dc_ep_halt|function|int usb_dc_ep_halt(const uint8_t ep)
DECL|usb_dc_ep_is_stalled|function|int usb_dc_ep_is_stalled(const uint8_t ep, uint8_t *const stalled)
DECL|usb_dc_ep_read|function|int usb_dc_ep_read(const uint8_t ep, uint8_t *const data,const uint32_t max_data_len, uint32_t * const read_bytes)
DECL|usb_dc_ep_set_callback|function|int usb_dc_ep_set_callback(const uint8_t ep, const usb_dc_ep_callback cb)
DECL|usb_dc_ep_set_stall|function|int usb_dc_ep_set_stall(const uint8_t ep)
DECL|usb_dc_ep_write|function|int usb_dc_ep_write(const uint8_t ep, const uint8_t *const data,const uint32_t data_len, uint32_t * const ret_bytes)
DECL|usb_dc_reset|function|int usb_dc_reset(void)
DECL|usb_dc_set_address|function|int usb_dc_set_address(const uint8_t addr)
DECL|usb_dc_set_status_callback|function|int usb_dc_set_status_callback(const usb_dc_status_callback cb)
DECL|usb_dw_clock_disable|function|static void usb_dw_clock_disable(void)
DECL|usb_dw_clock_enable|function|static int usb_dw_clock_enable(void)
DECL|usb_dw_ctrl_prv|struct|struct usb_dw_ctrl_prv {
DECL|usb_dw_ctrl|variable|usb_dw_ctrl
DECL|usb_dw_ep_is_enabled|function|static uint8_t usb_dw_ep_is_enabled(uint8_t ep)
DECL|usb_dw_ep_is_valid|function|static uint8_t usb_dw_ep_is_valid(uint8_t ep)
DECL|usb_dw_ep_set|function|static int usb_dw_ep_set(uint8_t ep,uint32_t ep_mps, enum usb_dc_ep_type ep_type)
DECL|usb_dw_handle_enum_done|function|static void usb_dw_handle_enum_done(void)
DECL|usb_dw_handle_reset|function|static void usb_dw_handle_reset(void)
DECL|usb_dw_init|function|static int usb_dw_init(void)
DECL|usb_dw_isr_handler|function|static void usb_dw_isr_handler(void)
DECL|usb_dw_prep_rx|function|static void usb_dw_prep_rx(const uint8_t ep, uint8_t setup)
DECL|usb_dw_reg_dump|function|static void usb_dw_reg_dump(void)
DECL|usb_dw_reg_dump|macro|usb_dw_reg_dump
DECL|usb_dw_reset|function|static int usb_dw_reset(void)
DECL|usb_dw_tx|function|static int usb_dw_tx(uint8_t ep, const uint8_t *const data,uint32_t data_len)
DECL|usb_dw_udelay|function|static inline void usb_dw_udelay(uint32_t us)
DECL|usb_ep_ctrl_prv|struct|struct usb_ep_ctrl_prv {
