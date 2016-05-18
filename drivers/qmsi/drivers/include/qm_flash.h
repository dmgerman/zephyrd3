DECL|ER_DONE|macro|ER_DONE
DECL|ER_REQ|macro|ER_REQ
DECL|MASS_ERASE_INFO|macro|MASS_ERASE_INFO
DECL|MASS_ERASE|macro|MASS_ERASE
DECL|QM_FLASH_ADDRESS_MASK|macro|QM_FLASH_ADDRESS_MASK
DECL|QM_FLASH_ADDR_INC|macro|QM_FLASH_ADDR_INC
DECL|QM_FLASH_MICRO_SEC_COUNT_MASK|macro|QM_FLASH_MICRO_SEC_COUNT_MASK
DECL|QM_FLASH_PAGE_SIZE_BITS|macro|QM_FLASH_PAGE_SIZE_BITS
DECL|QM_FLASH_PAGE_SIZE_BYTES|macro|QM_FLASH_PAGE_SIZE_BYTES
DECL|QM_FLASH_PAGE_SIZE_DWORDS|macro|QM_FLASH_PAGE_SIZE_DWORDS
DECL|QM_FLASH_REGION_DATA|enumerator|QM_FLASH_REGION_DATA, /**< Flash Data region (Quark D2000 only). */
DECL|QM_FLASH_REGION_NUM|enumerator|QM_FLASH_REGION_NUM /**< Total number of flash regions. */
DECL|QM_FLASH_REGION_OTP|enumerator|QM_FLASH_REGION_OTP = 0, /**< Flash OTP region. */
DECL|QM_FLASH_REGION_SYS|enumerator|QM_FLASH_REGION_SYS, /**< Flash System region. */
DECL|QM_FLASH_TMG_DEF_MASK|macro|QM_FLASH_TMG_DEF_MASK
DECL|QM_FLASH_WAIT_STATE_MASK|macro|QM_FLASH_WAIT_STATE_MASK
DECL|QM_FLASH_WAIT_STATE_OFFSET|macro|QM_FLASH_WAIT_STATE_OFFSET
DECL|QM_FLASH_WRITE_DISABLE_OFFSET|macro|QM_FLASH_WRITE_DISABLE_OFFSET
DECL|QM_FLASH_WRITE_DISABLE_VAL|macro|QM_FLASH_WRITE_DISABLE_VAL
DECL|QM_FLASH_WRITE_DISABLE|enumerator|QM_FLASH_WRITE_DISABLE /**< Flash write disable. */
DECL|QM_FLASH_WRITE_ENABLE|enumerator|QM_FLASH_WRITE_ENABLE, /**< Flash write enable. */
DECL|WR_ADDR_OFFSET|macro|WR_ADDR_OFFSET
DECL|WR_DONE|macro|WR_DONE
DECL|WR_REQ|macro|WR_REQ
DECL|__QM_FLASH_H__|macro|__QM_FLASH_H__
DECL|qm_flash_config_t|typedef|} qm_flash_config_t;
DECL|qm_flash_disable_t|typedef|} qm_flash_disable_t;
DECL|qm_flash_region_t|typedef|} qm_flash_region_t;
DECL|us_count|member|uint8_t us_count; /**< Number of clocks in a microsecond. */
DECL|wait_states|member|uint8_t wait_states; /**< Read wait state. */
DECL|write_disable|member|qm_flash_disable_t write_disable; /**< Write disable. */
