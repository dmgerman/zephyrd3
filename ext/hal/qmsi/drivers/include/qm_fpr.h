DECL|FPR_VIOL_MODE_INTERRUPT|enumerator|FPR_VIOL_MODE_INTERRUPT = 0, /**< Generate interrupt on violation. */
DECL|FPR_VIOL_MODE_PROBE|enumerator|FPR_VIOL_MODE_PROBE /**< Enter probe mode on violation. */
DECL|FPR_VIOL_MODE_RESET|enumerator|FPR_VIOL_MODE_RESET, /**< Reset SoC on violation. */
DECL|QM_FPR_AGENT_MASK_DMA|macro|QM_FPR_AGENT_MASK_DMA
DECL|QM_FPR_AGENT_MASK_HOST|macro|QM_FPR_AGENT_MASK_HOST
DECL|QM_FPR_AGENT_MASK_OTHER|macro|QM_FPR_AGENT_MASK_OTHER
DECL|QM_FPR_AGENT_MASK_SS|macro|QM_FPR_AGENT_MASK_SS
DECL|QM_FPR_DISABLE|enumerator|QM_FPR_DISABLE, /**< Disable FPR. */
DECL|QM_FPR_DMA|enumerator|QM_FPR_DMA = BIT(2), /**< Allow DMA to access flash region. */
DECL|QM_FPR_ENABLE_MASK|macro|QM_FPR_ENABLE_MASK
DECL|QM_FPR_ENABLE_OFFSET|macro|QM_FPR_ENABLE_OFFSET
DECL|QM_FPR_ENABLE|enumerator|QM_FPR_ENABLE, /**< Enable FPR. */
DECL|QM_FPR_EN_MASK_ENABLE|macro|QM_FPR_EN_MASK_ENABLE
DECL|QM_FPR_EN_MASK_LOCK|macro|QM_FPR_EN_MASK_LOCK
DECL|QM_FPR_FPR0_REG_OFFSET|macro|QM_FPR_FPR0_REG_OFFSET
DECL|QM_FPR_HOST_PROCESSOR|enumerator|QM_FPR_HOST_PROCESSOR =
DECL|QM_FPR_LOCK_DISABLE|enumerator|QM_FPR_LOCK_DISABLE, /**< Disable FPR lock. */
DECL|QM_FPR_LOCK_ENABLE|enumerator|QM_FPR_LOCK_ENABLE /**< Enable FPR lock. */
DECL|QM_FPR_LOCK|macro|QM_FPR_LOCK
DECL|QM_FPR_LOW_BOUND_MASK|macro|QM_FPR_LOW_BOUND_MASK
DECL|QM_FPR_MPR_VSTS_VALID|macro|QM_FPR_MPR_VSTS_VALID
DECL|QM_FPR_OTHER_AGENTS|enumerator|QM_FPR_OTHER_AGENTS =
DECL|QM_FPR_RD_ALLOW_MASK|macro|QM_FPR_RD_ALLOW_MASK
DECL|QM_FPR_RD_ALLOW_OFFSET|macro|QM_FPR_RD_ALLOW_OFFSET
DECL|QM_FPR_SENSOR_SUBSYSTEM|enumerator|QM_FPR_SENSOR_SUBSYSTEM =
DECL|QM_FPR_UPPER_BOUND_MASK|macro|QM_FPR_UPPER_BOUND_MASK
DECL|QM_FPR_UPPER_BOUND_OFFSET|macro|QM_FPR_UPPER_BOUND_OFFSET
DECL|QM_FPR_WRITE_LOCK_OFFSET|macro|QM_FPR_WRITE_LOCK_OFFSET
DECL|QM_MAIN_FLASH_DATA|enumerator|QM_MAIN_FLASH_DATA, /**< Data flash region. */
DECL|QM_MAIN_FLASH_NUM|enumerator|QM_MAIN_FLASH_NUM, /**< Number of flash regions. */
DECL|QM_MAIN_FLASH_SYSTEM|enumerator|QM_MAIN_FLASH_SYSTEM = 0, /**< System flash region. */
DECL|__QM_FPR_H__|macro|__QM_FPR_H__
DECL|allow_agents|member|qm_fpr_read_allow_t allow_agents; /**< Per-agent read enable bitmask. */
DECL|en_mask|member|qm_fpr_en_t en_mask; /**< Enable/lock bitmask. */
DECL|low_bound|member|uint8_t low_bound; /**< 1KB-aligned lower Flash phys addr. */
DECL|qm_flash_region_type_t|typedef|} qm_flash_region_type_t;
DECL|qm_fpr_callback_t|typedef|typedef void (*qm_fpr_callback_t)(void *data);
DECL|qm_fpr_config_t|typedef|} qm_fpr_config_t;
DECL|qm_fpr_en_t|typedef|} qm_fpr_en_t;
DECL|qm_fpr_read_allow_t|typedef|} qm_fpr_read_allow_t;
DECL|qm_fpr_viol_mode_t|typedef|} qm_fpr_viol_mode_t;
DECL|up_bound|member|uint8_t up_bound; /**< 1KB-aligned upper Flash phys addr. */
