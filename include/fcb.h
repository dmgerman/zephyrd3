DECL|FCB_ENTRY_FA_DATA_OFF|macro|FCB_ENTRY_FA_DATA_OFF
DECL|FCB_ERR_ARGS|macro|FCB_ERR_ARGS
DECL|FCB_ERR_CRC|macro|FCB_ERR_CRC
DECL|FCB_ERR_FLASH|macro|FCB_ERR_FLASH
DECL|FCB_ERR_MAGIC|macro|FCB_ERR_MAGIC
DECL|FCB_ERR_NOMEM|macro|FCB_ERR_NOMEM
DECL|FCB_ERR_NOSPACE|macro|FCB_ERR_NOSPACE
DECL|FCB_ERR_NOVAR|macro|FCB_ERR_NOVAR
DECL|FCB_MAX_LEN|macro|FCB_MAX_LEN
DECL|FCB_OK|macro|FCB_OK
DECL|ZEPHYR_INCLUDE_FCB_H_|macro|ZEPHYR_INCLUDE_FCB_H_
DECL|f_active_id|member|u16_t f_active_id;
DECL|f_active|member|struct fcb_entry f_active;
DECL|f_align|member|u8_t f_align; /* writes to flash have to aligned to this */
DECL|f_magic|member|u32_t f_magic; /* As placed on the disk */
DECL|f_mtx|member|struct k_mutex f_mtx; /* Locking for accessing the FCB data */
DECL|f_oldest|member|struct flash_sector *f_oldest;
DECL|f_scratch_cnt|member|u8_t f_scratch_cnt; /* How many sectors should be kept empty */
DECL|f_sector_cnt|member|u8_t f_sector_cnt; /* Number of elements in sector array */
DECL|f_sectors|member|struct flash_sector *f_sectors; /* Array of sectors, */
DECL|f_version|member|u8_t f_version; /* Current version number of the data */
DECL|fap|member|const struct flash_area *fap;
DECL|fap|member|const struct flash_area *fap; /* Flash area used by the fcb instance */
DECL|fcb_entry_ctx|struct|struct fcb_entry_ctx {
DECL|fcb_entry|struct|struct fcb_entry {
DECL|fcb_walk_cb|typedef|typedef int (*fcb_walk_cb)(struct fcb_entry_ctx *loc_ctx, void *arg);
DECL|fcb|struct|struct fcb {
DECL|fe_data_len|member|u16_t fe_data_len; /* size of data area */
DECL|fe_data_off|member|u32_t fe_data_off; /* start of data */
DECL|fe_elem_off|member|u32_t fe_elem_off; /* start of entry */
DECL|fe_sector|member|struct flash_sector *fe_sector; /* ptr to sector */
DECL|loc|member|struct fcb_entry loc;
