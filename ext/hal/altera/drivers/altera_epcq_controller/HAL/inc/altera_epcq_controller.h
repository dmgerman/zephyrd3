DECL|ALTERA_EPCQ_CONTROLLER_AVL_MEM_AVL_CSR_INSTANCE|macro|ALTERA_EPCQ_CONTROLLER_AVL_MEM_AVL_CSR_INSTANCE
DECL|ALTERA_EPCQ_CONTROLLER_INIT|macro|ALTERA_EPCQ_CONTROLLER_INIT
DECL|__ALT_EPCQ_CONTROLLER_H__|macro|__ALT_EPCQ_CONTROLLER_H__
DECL|alt_epcq_controller_dev|struct|typedef struct alt_epcq_controller_dev
DECL|alt_epcq_controller_dev|typedef|} alt_epcq_controller_dev;
DECL|csr_base|member|alt_u32 csr_base; /** base address of CSR slave */
DECL|data_base|member|alt_u32 data_base; /** base address of data slave */
DECL|data_end|member|alt_u32 data_end; /** end address of data slave (not inclusive) */
DECL|dev|member|alt_flash_dev dev;
DECL|is_epcs|member|alt_u32 is_epcs; /** 1 if device is an EPCS device */
DECL|number_of_sectors|member|alt_u32 number_of_sectors; /** number of flash sectors */
DECL|page_size|member|alt_u32 page_size; /** page size */
DECL|sector_size|member|alt_u32 sector_size; /** size of each flash sector */
DECL|silicon_id|member|alt_u32 silicon_id; /** ID of silicon used with EPCQ IP */
DECL|size_in_bytes|member|alt_u32 size_in_bytes; /** size of memory in bytes */
