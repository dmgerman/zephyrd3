DECL|FLASH_MEM|macro|FLASH_MEM
DECL|LOCK_REGIONS|macro|LOCK_REGIONS
DECL|LOCK_REGION_SIZE|macro|LOCK_REGION_SIZE
DECL|PAGES_PER_ROW|macro|PAGES_PER_ROW
DECL|ROW_SIZE|macro|ROW_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|buf|member|u8_t buf[ROW_SIZE];
DECL|flash_sam0_api|variable|flash_sam0_api
DECL|flash_sam0_check_status|function|static int flash_sam0_check_status(off_t offset)
DECL|flash_sam0_commit|function|static int flash_sam0_commit(struct device *dev)
DECL|flash_sam0_data_0|variable|flash_sam0_data_0
DECL|flash_sam0_data|struct|struct flash_sam0_data {
DECL|flash_sam0_erase_row|function|static int flash_sam0_erase_row(struct device *dev, off_t offset)
DECL|flash_sam0_erase|function|static int flash_sam0_erase(struct device *dev, off_t offset, size_t size)
DECL|flash_sam0_init|function|static int flash_sam0_init(struct device *dev)
DECL|flash_sam0_page_layout|function|void flash_sam0_page_layout(struct device *dev, const struct flash_pages_layout **layout, size_t *layout_size)
DECL|flash_sam0_pages_layout|variable|flash_sam0_pages_layout
DECL|flash_sam0_read|function|static int flash_sam0_read(struct device *dev, off_t offset, void *data, size_t len)
DECL|flash_sam0_sem_give|function|static inline void flash_sam0_sem_give(struct device *dev)
DECL|flash_sam0_sem_take|function|static inline void flash_sam0_sem_take(struct device *dev)
DECL|flash_sam0_valid_range|function|static int flash_sam0_valid_range(off_t offset, size_t len)
DECL|flash_sam0_wait_ready|function|static void flash_sam0_wait_ready(void)
DECL|flash_sam0_write_page|function|static int flash_sam0_write_page(struct device *dev, off_t offset, const void *data)
DECL|flash_sam0_write_protection|function|static int flash_sam0_write_protection(struct device *dev, bool enable)
DECL|flash_sam0_write|function|static int flash_sam0_write(struct device *dev, off_t offset, const void *data, size_t len)
DECL|flash_sam0_write|function|static int flash_sam0_write(struct device *dev, off_t offset, const void *data, size_t len)
DECL|offset|member|off_t offset;
DECL|sem|member|struct k_sem sem;
