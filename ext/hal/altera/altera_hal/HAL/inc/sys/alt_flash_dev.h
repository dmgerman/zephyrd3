DECL|__ALT_FLASH_DEV_H__|macro|__ALT_FLASH_DEV_H__
DECL|alt_flash_close|typedef|typedef int (*alt_flash_close)(alt_flash_dev* flash_info);
DECL|alt_flash_device_register|function|static ALT_INLINE int alt_flash_device_register( alt_flash_fd* fd)
DECL|alt_flash_dev|struct|struct alt_flash_dev
DECL|alt_flash_dev|typedef|typedef struct alt_flash_dev alt_flash_dev;
DECL|alt_flash_erase_block|typedef|typedef int (*alt_flash_erase_block)( alt_flash_dev* flash, int offset);
DECL|alt_flash_fd|typedef|typedef alt_flash_dev alt_flash_fd;
DECL|alt_flash_get_flash_info|typedef|typedef int (*alt_flash_get_flash_info)( alt_flash_dev* flash, flash_region** info,
DECL|alt_flash_lock|typedef|typedef int (*alt_flash_lock)(alt_flash_dev* flash, alt_u32 sectors_to_lock);
DECL|alt_flash_open|typedef|typedef alt_flash_dev* (*alt_flash_open)(alt_flash_dev* flash,
DECL|alt_flash_read|typedef|typedef int (*alt_flash_read)(alt_flash_dev* flash, int offset,
DECL|alt_flash_write_block|typedef|typedef int (*alt_flash_write_block)( alt_flash_dev* flash, int block_offset,
DECL|alt_flash_write|typedef|typedef int (*alt_flash_write)( alt_flash_dev* flash, int offset,
DECL|base_addr|member|void* base_addr;
DECL|close|member|alt_flash_close close;
DECL|erase_block|member|alt_flash_erase_block erase_block;
DECL|get_info|member|alt_flash_get_flash_info get_info;
DECL|length|member|int length;
DECL|llist|member|alt_llist llist;
DECL|lock|member|alt_flash_lock lock;
DECL|name|member|const char* name;
DECL|number_of_regions|member|int number_of_regions;
DECL|open|member|alt_flash_open open;
DECL|read|member|alt_flash_read read;
DECL|region_info|member|flash_region region_info[ALT_MAX_NUMBER_OF_FLASH_REGIONS];
DECL|write_block|member|alt_flash_write_block write_block;
DECL|write|member|alt_flash_write write;
