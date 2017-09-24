DECL|ARGC_MAX|macro|ARGC_MAX
DECL|CANONICALIZE_ARGS|macro|CANONICALIZE_ARGS
DECL|ERASE_HELP|macro|ERASE_HELP
DECL|ERASE_PAGE_HELP|macro|ERASE_PAGE_HELP
DECL|FLASH_DRIVER_NAME|macro|FLASH_DRIVER_NAME
DECL|PAGE_COUNT_HELP|macro|PAGE_COUNT_HELP
DECL|PAGE_LAYOUT_HELP|macro|PAGE_LAYOUT_HELP
DECL|READ_HELP|macro|READ_HELP
DECL|READ_PAGE_HELP|macro|READ_PAGE_HELP
DECL|SET_DEVICE_HELP|macro|SET_DEVICE_HELP
DECL|THIS_MODULE_NAME|macro|THIS_MODULE_NAME
DECL|WRITE_BLOCK_SIZE_HELP|macro|WRITE_BLOCK_SIZE_HELP
DECL|WRITE_HELP|macro|WRITE_HELP
DECL|WRITE_PAGE_HELP|macro|WRITE_PAGE_HELP
DECL|check_flash_device|function|static int check_flash_device(void)
DECL|commands|variable|commands
DECL|do_erase|function|static int do_erase(off_t offset, size_t size)
DECL|do_read|function|static int do_read(off_t offset, size_t len)
DECL|do_write|function|static int do_write(off_t offset, u8_t *buf, size_t len, bool read_back)
DECL|dump_buffer|function|static void dump_buffer(u8_t *buf, size_t size)
DECL|end_page|member|long unsigned int end_page;
DECL|flash_device|variable|flash_device
DECL|flash_shell_erase_page|function|static int flash_shell_erase_page(int argc, char *argv[])
DECL|flash_shell_erase|function|static int flash_shell_erase(int argc, char *argv[])
DECL|flash_shell_page_count|function|static int flash_shell_page_count(int argc, char *argv[])
DECL|flash_shell_page_layout|function|static int flash_shell_page_layout(int argc, char *argv[])
DECL|flash_shell_read_page|function|static int flash_shell_read_page(int argc, char *argv[])
DECL|flash_shell_read|function|static int flash_shell_read(int argc, char *argv[])
DECL|flash_shell_set_device|function|static int flash_shell_set_device(int argc, char *argv[])
DECL|flash_shell_write_block_size|function|static int flash_shell_write_block_size(int argc, char *argv[])
DECL|flash_shell_write_page|function|static int flash_shell_write_page(int argc, char *argv[])
DECL|flash_shell_write|function|static int flash_shell_write(int argc, char *argv[])
DECL|main|function|void main(void)
DECL|page_layout_cb|function|static bool page_layout_cb(const struct flash_pages_info *info, void *datav)
DECL|page_layout_data|struct|struct page_layout_data {
DECL|parse_u8|function|static int parse_u8(const char *str, u8_t *result)
DECL|parse_ul|function|static int parse_ul(const char *str, unsigned long *result)
DECL|start_page|member|long unsigned int start_page;
