DECL|FLASH_INTERVAL_ERASE|macro|FLASH_INTERVAL_ERASE
DECL|FLASH_INTERVAL_WRITE|macro|FLASH_INTERVAL_WRITE
DECL|FLASH_OP_DONE|macro|FLASH_OP_DONE
DECL|FLASH_OP_ONGOING|macro|FLASH_OP_ONGOING
DECL|FLASH_RADIO_ABORT_DELAY_US|macro|FLASH_RADIO_ABORT_DELAY_US
DECL|FLASH_SLOT_ERASE|macro|FLASH_SLOT_ERASE
DECL|FLASH_SLOT_WRITE|macro|FLASH_SLOT_WRITE
DECL|FLASH_TIMEOUT_MS|macro|FLASH_TIMEOUT_MS
DECL|SYNC_INIT|macro|SYNC_INIT
DECL|SYNC_INIT|macro|SYNC_INIT
DECL|SYNC_LOCK|macro|SYNC_LOCK
DECL|SYNC_LOCK|macro|SYNC_LOCK
DECL|SYNC_UNLOCK|macro|SYNC_UNLOCK
DECL|SYNC_UNLOCK|macro|SYNC_UNLOCK
DECL|context|member|struct flash_context *context; /* [in,out] */
DECL|data_addr|member|u32_t data_addr; /* Address of data to write. */
DECL|dev_layout|variable|dev_layout
DECL|enable_time_limit|member|u8_t enable_time_limit; /* execution limited to timeslot. */
DECL|erase_in_timeslice|function|static int erase_in_timeslice(u32_t addr, u32_t size)
DECL|erase_op|function|static int erase_op(void *context)
DECL|erase|function|static int erase(u32_t addr, u32_t size)
DECL|flash_addr|member|u32_t flash_addr; /* Address of flash to write or erase. */
DECL|flash_context|struct|struct flash_context {
DECL|flash_nrf_api|variable|flash_nrf_api
DECL|flash_nrf_erase|function|static int flash_nrf_erase(struct device *dev, off_t addr, size_t size)
DECL|flash_nrf_pages_layout|function|static void flash_nrf_pages_layout(struct device *dev, const struct flash_pages_layout **layout, size_t *layout_size)
DECL|flash_nrf_read|function|static int flash_nrf_read(struct device *dev, off_t addr, void *data, size_t len)
DECL|flash_nrf_write_protection|function|static int flash_nrf_write_protection(struct device *dev, bool enable)
DECL|flash_nrf_write|function|static int flash_nrf_write(struct device *dev, off_t addr, const void *data, size_t len)
DECL|flash_op_desc|struct|struct flash_op_desc {
DECL|flash_op_handler_t|typedef|typedef int (*flash_op_handler_t) (void *context);
DECL|handler|member|flash_op_handler_t handler;
DECL|interval|member|u32_t interval; /* timeslot interval. */
DECL|is_addr_valid|function|static inline bool is_addr_valid(off_t addr, size_t len)
DECL|is_aligned_32|function|static inline bool is_aligned_32(u32_t data)
DECL|len|member|u32_t len; /* Size off data to write or erase [B]. */
DECL|nrf_flash_init|function|static int nrf_flash_init(struct device *dev)
DECL|nvmc_wait_ready|function|static void nvmc_wait_ready(void)
DECL|result|member|int result;
DECL|sem_lock|variable|sem_lock
DECL|sem_sync|variable|sem_sync
DECL|shift_write_context|function|static void shift_write_context(u32_t shift, struct flash_context *w_ctx)
DECL|slot|member|u32_t slot; /* timeslot length. */
DECL|time_slot_callback_helper|function|static void time_slot_callback_helper(u32_t ticks_at_expire, u32_t remainder,u16_t lazy, void *context)
DECL|time_slot_callback_work|function|static void time_slot_callback_work(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, void *context)
DECL|work_in_time_slice|function|static int work_in_time_slice(struct flash_op_desc *p_flash_op_desc)
DECL|write_in_timeslice|function|static int write_in_timeslice(off_t addr, const void *data, size_t len)
DECL|write_op|function|static int write_op(void *context)
DECL|write|function|static int write(off_t addr, const void *data, size_t len)
