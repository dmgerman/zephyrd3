DECL|QM_FLASH_REGION_DATA|enumerator|QM_FLASH_REGION_DATA, /**< Flash Data region (Quark D2000 only). */
DECL|QM_FLASH_REGION_NUM|enumerator|QM_FLASH_REGION_NUM /**< Total number of flash regions. */
DECL|QM_FLASH_REGION_OTP|enumerator|QM_FLASH_REGION_OTP = 0, /**< Flash OTP region. */
DECL|QM_FLASH_REGION_SYS|enumerator|QM_FLASH_REGION_SYS, /**< Flash System region. */
DECL|QM_FLASH_WRITE_DISABLE|enumerator|QM_FLASH_WRITE_DISABLE /**< Flash write disable. */
DECL|QM_FLASH_WRITE_ENABLE|enumerator|QM_FLASH_WRITE_ENABLE = 0, /**< Flash write enable. */
DECL|__QM_FLASH_H__|macro|__QM_FLASH_H__
DECL|qm_flash_config_t|typedef|} qm_flash_config_t;
DECL|qm_flash_disable_t|typedef|} qm_flash_disable_t;
DECL|qm_flash_region_t|typedef|} qm_flash_region_t;
DECL|us_count|member|uint8_t us_count;
DECL|wait_states|member|uint8_t wait_states; /**< Read wait state. */
DECL|write_disable|member|qm_flash_disable_t write_disable; /**< Write disable. */
