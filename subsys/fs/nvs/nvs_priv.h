DECL|ADDR_OFFS_MASK|macro|ADDR_OFFS_MASK
DECL|ADDR_SECT_MASK|macro|ADDR_SECT_MASK
DECL|ADDR_SECT_SHIFT|macro|ADDR_SECT_SHIFT
DECL|NVS_BLOCK_SIZE|macro|NVS_BLOCK_SIZE
DECL|NVS_STATUS_NOSPACE|macro|NVS_STATUS_NOSPACE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|__NVS_PRIV_H_|macro|__NVS_PRIV_H_
DECL|crc8|member|u8_t crc8; /* crc8 check of the entry */
DECL|id|member|u16_t id; /* data id */
DECL|len|member|u16_t len; /* data len in sector */
DECL|nvs_ate|struct|struct nvs_ate {
DECL|offset|member|u16_t offset; /* data offset in sector */
DECL|part|member|u8_t part; /* part of a multipart data - future extension */
