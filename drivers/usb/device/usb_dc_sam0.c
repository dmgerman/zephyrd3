DECL|NVM_USB_PAD_TRANSN_POS|macro|NVM_USB_PAD_TRANSN_POS
DECL|NVM_USB_PAD_TRANSN_SIZE|macro|NVM_USB_PAD_TRANSN_SIZE
DECL|NVM_USB_PAD_TRANSP_POS|macro|NVM_USB_PAD_TRANSP_POS
DECL|NVM_USB_PAD_TRANSP_SIZE|macro|NVM_USB_PAD_TRANSP_SIZE
DECL|NVM_USB_PAD_TRIM_POS|macro|NVM_USB_PAD_TRIM_POS
DECL|NVM_USB_PAD_TRIM_SIZE|macro|NVM_USB_PAD_TRIM_SIZE
DECL|REGS|macro|REGS
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|USB_NUM_ENDPOINTS|macro|USB_NUM_ENDPOINTS
DECL|USB_SAM0_IN_EP|macro|USB_SAM0_IN_EP
DECL|addr|member|u8_t addr;
DECL|brk|member|int brk;
DECL|cb|member|usb_dc_status_callback cb;
DECL|descriptors|member|UsbDeviceDescriptor descriptors[USB_NUM_ENDPOINTS];
DECL|ep_buf|member|u32_t ep_buf[USB_NUM_ENDPOINTS * 64 / 4];
DECL|ep_cb|member|usb_dc_ep_callback ep_cb[2][USB_NUM_ENDPOINTS];
DECL|out_at|member|u32_t out_at;
DECL|usb_dc_attach|function|int usb_dc_attach(void)
DECL|usb_dc_detach|function|int usb_dc_detach(void)
DECL|usb_dc_ep_check_cap|function|int usb_dc_ep_check_cap(const struct usb_dc_ep_cfg_data * const cfg)
DECL|usb_dc_ep_clear_stall|function|int usb_dc_ep_clear_stall(const u8_t ep)
DECL|usb_dc_ep_configure|function|int usb_dc_ep_configure(const struct usb_dc_ep_cfg_data *const cfg)
DECL|usb_dc_ep_enable|function|int usb_dc_ep_enable(const u8_t ep)
DECL|usb_dc_ep_is_stalled|function|int usb_dc_ep_is_stalled(const u8_t ep, u8_t *stalled)
DECL|usb_dc_ep_mps|function|int usb_dc_ep_mps(const u8_t ep)
DECL|usb_dc_ep_read_continue|function|int usb_dc_ep_read_continue(u8_t ep)
DECL|usb_dc_ep_read_ex|function|int usb_dc_ep_read_ex(u8_t ep, u8_t *buf, u32_t max_data_len, u32_t *read_bytes, bool wait)
DECL|usb_dc_ep_read_wait|function|int usb_dc_ep_read_wait(u8_t ep, u8_t *buf, u32_t max_data_len,u32_t *read_bytes)
DECL|usb_dc_ep_read|function|int usb_dc_ep_read(u8_t ep, u8_t *buf, u32_t max_data_len, u32_t *read_bytes)
DECL|usb_dc_ep_set_callback|function|int usb_dc_ep_set_callback(const u8_t ep, const usb_dc_ep_callback cb)
DECL|usb_dc_ep_set_stall|function|int usb_dc_ep_set_stall(const u8_t ep)
DECL|usb_dc_ep_write|function|int usb_dc_ep_write(u8_t ep, const u8_t *buf, u32_t len, u32_t *ret_bytes)
DECL|usb_dc_reset|function|int usb_dc_reset(void)
DECL|usb_dc_set_address|function|int usb_dc_set_address(const u8_t addr)
DECL|usb_dc_set_status_callback|function|int usb_dc_set_status_callback(const usb_dc_status_callback cb)
DECL|usb_sam0_data_0|variable|usb_sam0_data_0
DECL|usb_sam0_data|struct|struct usb_sam0_data {
DECL|usb_sam0_ep_isr|function|static void usb_sam0_ep_isr(u8_t ep)
DECL|usb_sam0_get_data|function|static struct usb_sam0_data *usb_sam0_get_data(void)
DECL|usb_sam0_isr|function|static void usb_sam0_isr(void)
DECL|usb_sam0_load_padcal|function|static void usb_sam0_load_padcal(void)
DECL|usb_sam0_wait_syncbusy|function|static void usb_sam0_wait_syncbusy(void)
