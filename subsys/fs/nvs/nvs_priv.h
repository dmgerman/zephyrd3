DECL|NVS_ID_EMPTY|macro|NVS_ID_EMPTY
DECL|NVS_ID_GT|macro|NVS_ID_GT
DECL|NVS_ID_SECTOR_END|macro|NVS_ID_SECTOR_END
DECL|NVS_MOVE_BLOCK_SIZE|macro|NVS_MOVE_BLOCK_SIZE
DECL|NVS_STATUS_NOSPACE|macro|NVS_STATUS_NOSPACE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|__NVS_PRIV_H_|macro|__NVS_PRIV_H_
DECL|_nvs_data_hdr|struct|struct _nvs_data_hdr {
DECL|_nvs_data_slt|struct|struct _nvs_data_slt {
DECL|_nvs_sector_hdr|struct|struct _nvs_sector_hdr {
DECL|crc16|member|u16_t crc16;
DECL|data_addr|member|off_t data_addr; /* address in flash to write data */
DECL|fd_id|member|u16_t fd_id;
DECL|fd_magic|member|u32_t fd_magic;
DECL|id|member|u16_t id;
DECL|id|member|u16_t id; /* entry id, is 0xFFFFF when empty, set to 0xFFFE
DECL|len|member|u16_t len;
DECL|len|member|u16_t len; /* entry length in bytes */
DECL|nvs_entry|struct|struct nvs_entry {
