DECL|MPR_VIOL_MODE_INTERRUPT|enumerator|MPR_VIOL_MODE_INTERRUPT = 0,
DECL|MPR_VIOL_MODE_PROBE|enumerator|MPR_VIOL_MODE_PROBE
DECL|MPR_VIOL_MODE_RESET|enumerator|MPR_VIOL_MODE_RESET,
DECL|QM_SRAM_MPR_AGENT_MASK_DMA|macro|QM_SRAM_MPR_AGENT_MASK_DMA
DECL|QM_SRAM_MPR_AGENT_MASK_HOST|macro|QM_SRAM_MPR_AGENT_MASK_HOST
DECL|QM_SRAM_MPR_AGENT_MASK_SS|macro|QM_SRAM_MPR_AGENT_MASK_SS
DECL|QM_SRAM_MPR_EN_MASK_ENABLE|macro|QM_SRAM_MPR_EN_MASK_ENABLE
DECL|QM_SRAM_MPR_EN_MASK_LOCK|macro|QM_SRAM_MPR_EN_MASK_LOCK
DECL|__QM_MPR_H__|macro|__QM_MPR_H__
DECL|agent_read_en_mask|member|uint8_t agent_read_en_mask; /**< Per-agent read enable bitmask */
DECL|agent_write_en_mask|member|uint8_t agent_write_en_mask; /**< Per-agent write enable bitmask */
DECL|en_lock_mask|member|uint8_t en_lock_mask; /**< Enable/lock bitmask */
DECL|low_bound|member|uint8_t low_bound; /**< 1KB-aligned lower addr */
DECL|qm_mpr_callback_t|typedef|typedef void (*qm_mpr_callback_t)(void *);
DECL|qm_mpr_config_t|typedef|} qm_mpr_config_t;
DECL|qm_mpr_viol_mode_t|typedef|} qm_mpr_viol_mode_t;
DECL|up_bound|member|uint8_t up_bound; /**< 1KB-aligned upper addr */
