DECL|__ALT_FLASH_H__|macro|__ALT_FLASH_H__
DECL|alt_erase_flash_block|function|static __inline__ int __attribute__ ((always_inline)) alt_erase_flash_block( alt_flash_fd* fd, int offset, int length)
DECL|alt_get_flash_info|function|static __inline__ int __attribute__ ((always_inline)) alt_get_flash_info( alt_flash_fd* fd, flash_region** info, int* number_of_regions)
DECL|alt_lock_flash|function|static __inline__ int __attribute__ ((always_inline)) alt_lock_flash( alt_flash_fd* fd, alt_u32 sectors_to_lock)
DECL|alt_read_flash|function|static __inline__ int __attribute__ ((always_inline)) alt_read_flash( alt_flash_fd* fd, int offset, void* dest_addr, int length )
DECL|alt_write_flash_block|function|static __inline__ int __attribute__ ((always_inline)) alt_write_flash_block( alt_flash_fd* fd, int block_offset, int data_offset, const void *data, int length)
DECL|alt_write_flash|function|static __inline__ int __attribute__ ((always_inline)) alt_write_flash( alt_flash_fd* fd, int offset, const void* src_addr, int length )
