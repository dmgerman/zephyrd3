DECL|__NVS_H_|macro|__NVS_H_
DECL|entry_sector|member|u8_t entry_sector; /* oldest sector in use */
DECL|flash_device|member|struct device *flash_device;
DECL|free_space|member|u16_t free_space; /* Indicator for available space in the file system.
DECL|magic|member|u32_t magic; /* filesystem magic, repeated at start of each sector */
DECL|max_len|member|u16_t max_len; /* maximum size of stored item, set to sector_size/4 */
DECL|nvs_fs|struct|struct nvs_fs {
DECL|nvs_lock|member|struct k_mutex nvs_lock;
DECL|offset|member|off_t offset; /* filesystem offset in flash */
DECL|sector_count|member|u8_t sector_count; /* how many sectors in the filesystem */
DECL|sector_id|member|u16_t sector_id; /* sector id, a counter for each created sector */
DECL|sector_size|member|u16_t sector_size; /* filesystem is divided into sectors,
DECL|write_block_size|member|u8_t write_block_size; /* write block size for alignment */
DECL|write_location|member|off_t write_location; /* next write location for entry header */
