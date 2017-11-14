DECL|alt_epcq_controller_erase_block|function|int alt_epcq_controller_erase_block(alt_flash_dev *flash_info, int block_offset)
DECL|alt_epcq_controller_get_info|function|int alt_epcq_controller_get_info( alt_flash_fd *fd, /** flash device descriptor */ flash_region **info, /** pointer to flash_region will be stored here */ int *number_of_regions /** number of regions will be stored here */
DECL|alt_epcq_controller_lock|function|int alt_epcq_controller_lock(alt_flash_dev *flash_info, alt_u32 sectors_to_lock)
DECL|alt_epcq_controller_read|function|int alt_epcq_controller_read( alt_flash_dev *flash_info, /** device info */ int offset, /** offset of read from base address */ void *dest_addr, /** destination buffer */
DECL|alt_epcq_controller_write_block|function|int alt_epcq_controller_write_block( alt_flash_dev *flash_info, /** flash device info */ int block_offset, /** sector/block offset in byte addressing */ int data_offset, /** offset of write from base address */
DECL|alt_epcq_controller_write|function|int alt_epcq_controller_write( alt_flash_dev *flash_info, /** device info */ int offset, /** offset of write from base address */ const void *src_addr, /** source buffer */ int length /** size of writing */
DECL|alt_epcq_poll_for_write_in_progress|function|alt_32 static alt_epcq_poll_for_write_in_progress(alt_epcq_controller_dev* epcq_flash_info)
DECL|alt_epcq_validate_read_write_arguments|function|ALT_INLINE alt_32 static alt_epcq_validate_read_write_arguments( alt_epcq_controller_dev *flash_info, /** device info */ alt_u32 offset, /** offset of read/write */ alt_u32 length /** length of read/write */
DECL|altera_epcq_controller_init|function|alt_32 altera_epcq_controller_init(alt_epcq_controller_dev *flash)
