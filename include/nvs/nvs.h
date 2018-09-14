DECL|ZEPHYR_INCLUDE_NVS_NVS_H_|macro|ZEPHYR_INCLUDE_NVS_NVS_H_
DECL|ate_wra|member|u32_t ate_wra; /* next alloc table entry write address */
DECL|data_wra|member|u32_t data_wra; /* next data write address */
DECL|flash_device|member|struct device *flash_device;
DECL|free_space|member|u32_t free_space; /* free space available in file system */
DECL|locked|member|bool locked; /* the filesystem is locked after an error occurred
DECL|nvs_fs|struct|struct nvs_fs {
DECL|nvs_lock|member|struct k_mutex nvs_lock;
DECL|offset|member|off_t offset; /* filesystem offset in flash */
DECL|sector_count|member|u16_t sector_count; /* amount of sectors in the filesystem */
DECL|sector_size|member|u16_t sector_size; /* filesystem is divided into sectors,
DECL|write_block_size|member|u8_t write_block_size; /* write block size for alignment */
