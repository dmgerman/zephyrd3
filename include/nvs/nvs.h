DECL|__NVS_H_|macro|__NVS_H_
DECL|entry_location|member|off_t entry_location; /* start of the filesystem */
DECL|flash_device|member|struct device *flash_device;
DECL|locked|member|bool locked; /* the filesystem is locked after an error occurred
DECL|max_len|member|u16_t max_len; /* maximum size of stored item, set to sector_size/4 */
DECL|nvs_fs|struct|struct nvs_fs {
DECL|nvs_lock|member|struct k_mutex nvs_lock;
DECL|offset|member|off_t offset; /* filesystem offset in flash */
DECL|sector_count|member|u8_t sector_count; /* how many sectors in the filesystem */
DECL|sector_size|member|u16_t sector_size; /* filesystem is divided into sectors,
DECL|write_block_size|member|u8_t write_block_size; /* write block size for alignment */
DECL|write_location|member|off_t write_location; /* next write location */
