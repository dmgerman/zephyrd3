DECL|BOOT_FLAG_COPY_DONE|macro|BOOT_FLAG_COPY_DONE
DECL|BOOT_FLAG_IMAGE_OK|macro|BOOT_FLAG_IMAGE_OK
DECL|BOOT_FLAG_SET|macro|BOOT_FLAG_SET
DECL|BOOT_FLAG_UNSET|macro|BOOT_FLAG_UNSET
DECL|BOOT_HEADER_MAGIC_V1|macro|BOOT_HEADER_MAGIC_V1
DECL|BOOT_HEADER_SIZE_V1|macro|BOOT_HEADER_SIZE_V1
DECL|BOOT_MAGIC_BAD|macro|BOOT_MAGIC_BAD
DECL|BOOT_MAGIC_GOOD|macro|BOOT_MAGIC_GOOD
DECL|BOOT_MAGIC_SZ|macro|BOOT_MAGIC_SZ
DECL|BOOT_MAGIC_UNSET|macro|BOOT_MAGIC_UNSET
DECL|BOOT_MAX_ALIGN|macro|BOOT_MAX_ALIGN
DECL|BOOT_SWAP_TABLES_COUNT|macro|BOOT_SWAP_TABLES_COUNT
DECL|COPY_DONE_OFFS|macro|COPY_DONE_OFFS
DECL|FLASH_BANK0_OFFSET|macro|FLASH_BANK0_OFFSET
DECL|FLASH_BANK1_OFFSET|macro|FLASH_BANK1_OFFSET
DECL|FLASH_BANK_SIZE|macro|FLASH_BANK_SIZE
DECL|FLASH_MIN_WRITE_SIZE|macro|FLASH_MIN_WRITE_SIZE
DECL|FLASH_STATE_OFFSET|macro|FLASH_STATE_OFFSET
DECL|IMAGE_OK_OFFS|macro|IMAGE_OK_OFFS
DECL|MAGIC_OFFS|macro|MAGIC_OFFS
DECL|VERSION_OFFSET|macro|VERSION_OFFSET
DECL|__packed|variable|__packed
DECL|boot_copy_done_read|function|static int boot_copy_done_read(u32_t bank_offs)
DECL|boot_current_image_version|function|int boot_current_image_version(struct image_version *out_ver)
DECL|boot_erase_img_bank|function|int boot_erase_img_bank(u32_t bank_offset)
DECL|boot_flag_offs|function|static int boot_flag_offs(int flag, u32_t bank_offs, u32_t *offs)
DECL|boot_flag_read|function|static int boot_flag_read(int flag, u32_t bank_offs)
DECL|boot_flag_write|function|static int boot_flag_write(int flag, u32_t bank_offs)
DECL|boot_flash_write|function|static int boot_flash_write(off_t offs, const void *data, size_t len)
DECL|boot_image_ok_read|function|static int boot_image_ok_read(u32_t bank_offs)
DECL|boot_image_ok_write|function|static int boot_image_ok_write(u32_t bank_offs)
DECL|boot_img_magic|variable|boot_img_magic
DECL|boot_init|function|static int boot_init(struct device *dev)
DECL|boot_is_img_confirmed|function|bool boot_is_img_confirmed(void)
DECL|boot_magic_code_check|function|static int boot_magic_code_check(const u32_t *magic)
DECL|boot_magic_state_read|function|static int boot_magic_state_read(u32_t bank_offs)
DECL|boot_magic_write|function|static int boot_magic_write(u32_t bank_offs)
DECL|boot_read_bank_header|function|int boot_read_bank_header(u32_t bank_offset, struct mcuboot_img_header *header, size_t header_size)
DECL|boot_read_swap_state|function|static int boot_read_swap_state(u32_t bank_offs, struct boot_swap_state *state)
DECL|boot_read_v1_header|function|static int boot_read_v1_header(u32_t bank_offset, struct mcuboot_v1_raw_header *v1_raw)
DECL|boot_request_upgrade|function|int boot_request_upgrade(int permanent)
DECL|boot_swap_state|struct|struct boot_swap_state {
DECL|boot_swap_tables|variable|boot_swap_tables
DECL|boot_swap_table|struct|struct boot_swap_table {
DECL|boot_swap_type|function|int boot_swap_type(void)
DECL|boot_version_read|function|static int boot_version_read(u32_t bank_offs, struct image_version *out_ver)
DECL|boot_write_img_confirmed|function|int boot_write_img_confirmed(void)
DECL|build_num|member|u32_t build_num;
DECL|copy_done_slot0|member|u8_t copy_done_slot0;
DECL|copy_done|member|u8_t copy_done;
DECL|flash_dev|variable|flash_dev
DECL|header_magic|member|u32_t header_magic;
DECL|header_size|member|u16_t header_size;
DECL|image_flags|member|u32_t image_flags;
DECL|image_load_address|member|u32_t image_load_address;
DECL|image_ok_slot0|member|u8_t image_ok_slot0;
DECL|image_ok_slot1|member|u8_t image_ok_slot1;
DECL|image_ok|member|u8_t image_ok;
DECL|image_size|member|u32_t image_size;
DECL|magic_slot0|member|u8_t magic_slot0;
DECL|magic_slot1|member|u8_t magic_slot1;
DECL|magic|member|u8_t magic; /* One of the BOOT_MAGIC_[...] values. */
DECL|major|member|u8_t major;
DECL|mcuboot_v1_raw_header|struct|struct mcuboot_v1_raw_header {
DECL|minor|member|u8_t minor;
DECL|pad2|member|u32_t pad2;
DECL|pad|member|u16_t pad;
DECL|revision|member|u16_t revision;
DECL|swap_type|member|u8_t swap_type;
DECL|version|member|} version;
