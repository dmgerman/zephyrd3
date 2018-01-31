DECL|BOOT_FLAG_COPY_DONE|macro|BOOT_FLAG_COPY_DONE
DECL|BOOT_FLAG_IMAGE_OK|macro|BOOT_FLAG_IMAGE_OK
DECL|BOOT_FLAG_SET|macro|BOOT_FLAG_SET
DECL|BOOT_FLAG_UNSET|macro|BOOT_FLAG_UNSET
DECL|BOOT_MAGIC_BAD|macro|BOOT_MAGIC_BAD
DECL|BOOT_MAGIC_GOOD|macro|BOOT_MAGIC_GOOD
DECL|BOOT_MAGIC_SZ|macro|BOOT_MAGIC_SZ
DECL|BOOT_MAGIC_UNSET|macro|BOOT_MAGIC_UNSET
DECL|BOOT_MAX_ALIGN|macro|BOOT_MAX_ALIGN
DECL|COPY_DONE_OFFS|macro|COPY_DONE_OFFS
DECL|FLASH_BANK0_OFFSET|macro|FLASH_BANK0_OFFSET
DECL|FLASH_BANK1_OFFSET|macro|FLASH_BANK1_OFFSET
DECL|FLASH_BANK_SIZE|macro|FLASH_BANK_SIZE
DECL|FLASH_MIN_WRITE_SIZE|macro|FLASH_MIN_WRITE_SIZE
DECL|FLASH_STATE_OFFSET|macro|FLASH_STATE_OFFSET
DECL|IMAGE_OK_OFFS|macro|IMAGE_OK_OFFS
DECL|MAGIC_OFFS|macro|MAGIC_OFFS
DECL|boot_erase_img_bank|function|int boot_erase_img_bank(u32_t bank_offset)
DECL|boot_flag_offs|function|static int boot_flag_offs(int flag, u32_t bank_offs, u32_t *offs)
DECL|boot_flag_read|function|static int boot_flag_read(int flag, u32_t bank_offs)
DECL|boot_flag_write|function|static int boot_flag_write(int flag, u32_t bank_offs)
DECL|boot_flash_write|function|static int boot_flash_write(off_t offs, const void *data, size_t len)
DECL|boot_image_ok_read|function|static int boot_image_ok_read(u32_t bank_offs)
DECL|boot_image_ok_write|function|static int boot_image_ok_write(u32_t bank_offs)
DECL|boot_img_magic|variable|boot_img_magic
DECL|boot_init|function|static int boot_init(struct device *dev)
DECL|boot_magic_write|function|static int boot_magic_write(u32_t bank_offs)
DECL|boot_request_upgrade|function|int boot_request_upgrade(int permanent)
DECL|boot_write_img_confirmed|function|int boot_write_img_confirmed(void)
DECL|flash_dev|variable|flash_dev
