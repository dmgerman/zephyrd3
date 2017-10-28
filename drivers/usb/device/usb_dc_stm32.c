DECL|CONFIG_USB_NUM_IN_ENDPOINTS|macro|CONFIG_USB_NUM_IN_ENDPOINTS
DECL|CONFIG_USB_NUM_OUT_ENDPOINTS|macro|CONFIG_USB_NUM_OUT_ENDPOINTS
DECL|EP0_IDX|macro|EP0_IDX
DECL|EP0_IN|macro|EP0_IN
DECL|EP0_MPS|macro|EP0_MPS
DECL|EP0_MPS|macro|EP0_MPS
DECL|EP0_OUT|macro|EP0_OUT
DECL|EP_IDX|macro|EP_IDX
DECL|EP_IS_IN|macro|EP_IS_IN
DECL|EP_IS_OUT|macro|EP_IS_OUT
DECL|EP_MPS|macro|EP_MPS
DECL|EP_MPS|macro|EP_MPS
DECL|EP_TYPE_BULK|macro|EP_TYPE_BULK
DECL|EP_TYPE_CTRL|macro|EP_TYPE_CTRL
DECL|EP_TYPE_INTR|macro|EP_TYPE_INTR
DECL|EP_TYPE_ISOC|macro|EP_TYPE_ISOC
DECL|FIFO_EP_WORDS|macro|FIFO_EP_WORDS
DECL|FIFO_NUM|macro|FIFO_NUM
DECL|FIFO_WORDS|macro|FIFO_WORDS
DECL|HAL_PCDEx_SetConnectionState|function|void HAL_PCDEx_SetConnectionState(PCD_HandleTypeDef *hpcd, uint8_t state)
DECL|HAL_PCD_ConnectCallback|function|void HAL_PCD_ConnectCallback(PCD_HandleTypeDef *hpcd)
DECL|HAL_PCD_DataInStageCallback|function|void HAL_PCD_DataInStageCallback(PCD_HandleTypeDef *hpcd, u8_t epnum)
DECL|HAL_PCD_DataOutStageCallback|function|void HAL_PCD_DataOutStageCallback(PCD_HandleTypeDef *hpcd, u8_t epnum)
DECL|HAL_PCD_DisconnectCallback|function|void HAL_PCD_DisconnectCallback(PCD_HandleTypeDef *hpcd)
DECL|HAL_PCD_ResetCallback|function|void HAL_PCD_ResetCallback(PCD_HandleTypeDef *hpcd)
DECL|HAL_PCD_ResumeCallback|function|void HAL_PCD_ResumeCallback(PCD_HandleTypeDef *hpcd)
DECL|HAL_PCD_SetupStageCallback|function|void HAL_PCD_SetupStageCallback(PCD_HandleTypeDef *hpcd)
DECL|HAL_PCD_SuspendCallback|function|void HAL_PCD_SuspendCallback(PCD_HandleTypeDef *hpcd)
DECL|NUM_BIDIR_EP|macro|NUM_BIDIR_EP
DECL|NUM_IN_EP|macro|NUM_IN_EP
DECL|NUM_OUT_EP|macro|NUM_OUT_EP
DECL|SETUP_SIZE|macro|SETUP_SIZE
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|USB_BTABLE_SIZE|macro|USB_BTABLE_SIZE
DECL|cb|member|usb_dc_ep_callback cb; /** Endpoint callback function */
DECL|ep_buf|member|u8_t ep_buf[NUM_OUT_EP][EP_MPS];
DECL|ep_mps|member|u16_t ep_mps; /** Endpoint max packet size */
DECL|ep_stalled|member|u8_t ep_stalled; /** Endpoint stall flag */
DECL|ep_type|member|u8_t ep_type; /** Endpoint type (STM32 HAL enum) */
DECL|in_ep_state|member|struct usb_dc_stm32_ep_state in_ep_state[NUM_IN_EP];
DECL|out_ep_state|member|struct usb_dc_stm32_ep_state out_ep_state[NUM_OUT_EP];
DECL|pcd|member|PCD_HandleTypeDef pcd; /* Storage for the HAL_PCD api */
DECL|pma_offset|member|u32_t pma_offset;
DECL|read_count|member|u32_t read_count; /** Number of bytes in read buffer */
DECL|read_offset|member|u32_t read_offset; /** Current offset in read buffer */
DECL|status_cb|member|usb_dc_status_callback status_cb; /* Status callback */
DECL|usb_dc_attach|function|int usb_dc_attach(void)
DECL|usb_dc_ep_clear_stall|function|int usb_dc_ep_clear_stall(const u8_t ep)
DECL|usb_dc_ep_configure|function|int usb_dc_ep_configure(const struct usb_dc_ep_cfg_data * const ep_cfg)
DECL|usb_dc_ep_disable|function|int usb_dc_ep_disable(const u8_t ep)
DECL|usb_dc_ep_enable|function|int usb_dc_ep_enable(const u8_t ep)
DECL|usb_dc_ep_get_read_count|function|int usb_dc_ep_get_read_count(u8_t ep, u32_t *read_bytes)
DECL|usb_dc_ep_is_stalled|function|int usb_dc_ep_is_stalled(const u8_t ep, u8_t *const stalled)
DECL|usb_dc_ep_mps|function|int usb_dc_ep_mps(const u8_t ep)
DECL|usb_dc_ep_read_continue|function|int usb_dc_ep_read_continue(u8_t ep)
DECL|usb_dc_ep_read_wait|function|int usb_dc_ep_read_wait(u8_t ep, u8_t *data, u32_t max_data_len,u32_t *read_bytes)
DECL|usb_dc_ep_read|function|int usb_dc_ep_read(const u8_t ep, u8_t *const data, const u32_t max_data_len, u32_t * const read_bytes)
DECL|usb_dc_ep_set_callback|function|int usb_dc_ep_set_callback(const u8_t ep, const usb_dc_ep_callback cb)
DECL|usb_dc_ep_set_stall|function|int usb_dc_ep_set_stall(const u8_t ep)
DECL|usb_dc_ep_start_read|function|int usb_dc_ep_start_read(u8_t ep, u8_t *data, u32_t max_data_len)
DECL|usb_dc_ep_write|function|int usb_dc_ep_write(const u8_t ep, const u8_t *const data, const u32_t data_len, u32_t * const ret_bytes)
DECL|usb_dc_set_address|function|int usb_dc_set_address(const u8_t addr)
DECL|usb_dc_set_status_callback|function|int usb_dc_set_status_callback(const usb_dc_status_callback cb)
DECL|usb_dc_stm32_clock_enable|function|static int usb_dc_stm32_clock_enable(void)
DECL|usb_dc_stm32_ep_state|struct|struct usb_dc_stm32_ep_state {
DECL|usb_dc_stm32_get_ep_state|function|static struct usb_dc_stm32_ep_state *usb_dc_stm32_get_ep_state(u8_t ep)
DECL|usb_dc_stm32_init|function|static int usb_dc_stm32_init(void)
DECL|usb_dc_stm32_isr|function|static void usb_dc_stm32_isr(void *arg)
DECL|usb_dc_stm32_state|struct|struct usb_dc_stm32_state {
DECL|usb_dc_stm32_state|variable|usb_dc_stm32_state
DECL|write_sem|member|struct k_sem write_sem; /** Write boolean semaphore */
