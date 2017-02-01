DECL|ASCD|member|uint32_t ASCD:1; /**< bit: 8 Automatic Switch To Compare Digest */
DECL|BBC|member|uint32_t BBC:4; /**< bit: 4..7 Bus Burden Control */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|DASA|member|uint32_t DASA:26; /**< bit: 6..31 Descriptor Area Start Address */
DECL|DISABLE|member|uint32_t DISABLE:1; /**< bit: 1 ICM Disable Register */
DECL|DUALBUFF|member|uint32_t DUALBUFF:1; /**< bit: 9 Dual Input Buffer */
DECL|ENABLE|member|uint32_t ENABLE:1; /**< bit: 0 ICM Controller Enable Register */
DECL|ENABLE|member|uint32_t ENABLE:1; /**< bit: 0 ICM Enable */
DECL|EOMDIS|member|uint32_t EOMDIS:1; /**< bit: 1 End of Monitoring Disable */
DECL|HASA|member|uint32_t HASA:25; /**< bit: 7..31 Hash Area Start Address */
DECL|ICM_11105|macro|ICM_11105
DECL|ICM_CFG_ASCD_Msk|macro|ICM_CFG_ASCD_Msk
DECL|ICM_CFG_ASCD_Pos|macro|ICM_CFG_ASCD_Pos
DECL|ICM_CFG_ASCD|macro|ICM_CFG_ASCD
DECL|ICM_CFG_BBC_Msk|macro|ICM_CFG_BBC_Msk
DECL|ICM_CFG_BBC_Pos|macro|ICM_CFG_BBC_Pos
DECL|ICM_CFG_BBC|macro|ICM_CFG_BBC
DECL|ICM_CFG_DUALBUFF_Msk|macro|ICM_CFG_DUALBUFF_Msk
DECL|ICM_CFG_DUALBUFF_Pos|macro|ICM_CFG_DUALBUFF_Pos
DECL|ICM_CFG_DUALBUFF|macro|ICM_CFG_DUALBUFF
DECL|ICM_CFG_EOMDIS_Msk|macro|ICM_CFG_EOMDIS_Msk
DECL|ICM_CFG_EOMDIS_Pos|macro|ICM_CFG_EOMDIS_Pos
DECL|ICM_CFG_EOMDIS|macro|ICM_CFG_EOMDIS
DECL|ICM_CFG_MASK|macro|ICM_CFG_MASK
DECL|ICM_CFG_Msk|macro|ICM_CFG_Msk
DECL|ICM_CFG_OFFSET|macro|ICM_CFG_OFFSET
DECL|ICM_CFG_SLBDIS_Msk|macro|ICM_CFG_SLBDIS_Msk
DECL|ICM_CFG_SLBDIS_Pos|macro|ICM_CFG_SLBDIS_Pos
DECL|ICM_CFG_SLBDIS|macro|ICM_CFG_SLBDIS
DECL|ICM_CFG_Type|typedef|} ICM_CFG_Type;
DECL|ICM_CFG_UALGO_Msk|macro|ICM_CFG_UALGO_Msk
DECL|ICM_CFG_UALGO_Pos|macro|ICM_CFG_UALGO_Pos
DECL|ICM_CFG_UALGO_SHA1_Val|macro|ICM_CFG_UALGO_SHA1_Val
DECL|ICM_CFG_UALGO_SHA1|macro|ICM_CFG_UALGO_SHA1
DECL|ICM_CFG_UALGO_SHA224_Val|macro|ICM_CFG_UALGO_SHA224_Val
DECL|ICM_CFG_UALGO_SHA224|macro|ICM_CFG_UALGO_SHA224
DECL|ICM_CFG_UALGO_SHA256_Val|macro|ICM_CFG_UALGO_SHA256_Val
DECL|ICM_CFG_UALGO_SHA256|macro|ICM_CFG_UALGO_SHA256
DECL|ICM_CFG_UALGO|macro|ICM_CFG_UALGO
DECL|ICM_CFG_UIHASH_Msk|macro|ICM_CFG_UIHASH_Msk
DECL|ICM_CFG_UIHASH_Pos|macro|ICM_CFG_UIHASH_Pos
DECL|ICM_CFG_UIHASH|macro|ICM_CFG_UIHASH
DECL|ICM_CFG_WBDIS_Msk|macro|ICM_CFG_WBDIS_Msk
DECL|ICM_CFG_WBDIS_Pos|macro|ICM_CFG_WBDIS_Pos
DECL|ICM_CFG_WBDIS|macro|ICM_CFG_WBDIS
DECL|ICM_CFG|member|__IO ICM_CFG_Type ICM_CFG; /**< Offset: 0x00 (R/W 32) Configuration Register */
DECL|ICM_CFG|member|__IO uint32_t ICM_CFG; /**< (ICM Offset: 0x00) Configuration Register */
DECL|ICM_CTRL_DISABLE_Msk|macro|ICM_CTRL_DISABLE_Msk
DECL|ICM_CTRL_DISABLE_Pos|macro|ICM_CTRL_DISABLE_Pos
DECL|ICM_CTRL_DISABLE|macro|ICM_CTRL_DISABLE
DECL|ICM_CTRL_ENABLE_Msk|macro|ICM_CTRL_ENABLE_Msk
DECL|ICM_CTRL_ENABLE_Pos|macro|ICM_CTRL_ENABLE_Pos
DECL|ICM_CTRL_ENABLE|macro|ICM_CTRL_ENABLE
DECL|ICM_CTRL_MASK|macro|ICM_CTRL_MASK
DECL|ICM_CTRL_Msk|macro|ICM_CTRL_Msk
DECL|ICM_CTRL_OFFSET|macro|ICM_CTRL_OFFSET
DECL|ICM_CTRL_REHASH_Msk|macro|ICM_CTRL_REHASH_Msk
DECL|ICM_CTRL_REHASH_Pos|macro|ICM_CTRL_REHASH_Pos
DECL|ICM_CTRL_REHASH|macro|ICM_CTRL_REHASH
DECL|ICM_CTRL_RMDIS_Msk|macro|ICM_CTRL_RMDIS_Msk
DECL|ICM_CTRL_RMDIS_Pos|macro|ICM_CTRL_RMDIS_Pos
DECL|ICM_CTRL_RMDIS|macro|ICM_CTRL_RMDIS
DECL|ICM_CTRL_RMEN_Msk|macro|ICM_CTRL_RMEN_Msk
DECL|ICM_CTRL_RMEN_Pos|macro|ICM_CTRL_RMEN_Pos
DECL|ICM_CTRL_RMEN|macro|ICM_CTRL_RMEN
DECL|ICM_CTRL_SWRST_Msk|macro|ICM_CTRL_SWRST_Msk
DECL|ICM_CTRL_SWRST_Pos|macro|ICM_CTRL_SWRST_Pos
DECL|ICM_CTRL_SWRST|macro|ICM_CTRL_SWRST
DECL|ICM_CTRL_Type|typedef|} ICM_CTRL_Type;
DECL|ICM_CTRL|member|__O ICM_CTRL_Type ICM_CTRL; /**< Offset: 0x04 ( /W 32) Control Register */
DECL|ICM_CTRL|member|__O uint32_t ICM_CTRL; /**< (ICM Offset: 0x04) Control Register */
DECL|ICM_DSCR_DASA_Msk|macro|ICM_DSCR_DASA_Msk
DECL|ICM_DSCR_DASA_Pos|macro|ICM_DSCR_DASA_Pos
DECL|ICM_DSCR_DASA|macro|ICM_DSCR_DASA
DECL|ICM_DSCR_MASK|macro|ICM_DSCR_MASK
DECL|ICM_DSCR_Msk|macro|ICM_DSCR_Msk
DECL|ICM_DSCR_OFFSET|macro|ICM_DSCR_OFFSET
DECL|ICM_DSCR_Type|typedef|} ICM_DSCR_Type;
DECL|ICM_DSCR|member|__IO ICM_DSCR_Type ICM_DSCR; /**< Offset: 0x30 (R/W 32) Region Descriptor Area Start Address Register */
DECL|ICM_DSCR|member|__IO uint32_t ICM_DSCR; /**< (ICM Offset: 0x30) Region Descriptor Area Start Address Register */
DECL|ICM_HASH_HASA_Msk|macro|ICM_HASH_HASA_Msk
DECL|ICM_HASH_HASA_Pos|macro|ICM_HASH_HASA_Pos
DECL|ICM_HASH_HASA|macro|ICM_HASH_HASA
DECL|ICM_HASH_MASK|macro|ICM_HASH_MASK
DECL|ICM_HASH_Msk|macro|ICM_HASH_Msk
DECL|ICM_HASH_OFFSET|macro|ICM_HASH_OFFSET
DECL|ICM_HASH_Type|typedef|} ICM_HASH_Type;
DECL|ICM_HASH|member|__IO ICM_HASH_Type ICM_HASH; /**< Offset: 0x34 (R/W 32) Region Hash Area Start Address Register */
DECL|ICM_HASH|member|__IO uint32_t ICM_HASH; /**< (ICM Offset: 0x34) Region Hash Area Start Address Register */
DECL|ICM_IDR_MASK|macro|ICM_IDR_MASK
DECL|ICM_IDR_Msk|macro|ICM_IDR_Msk
DECL|ICM_IDR_OFFSET|macro|ICM_IDR_OFFSET
DECL|ICM_IDR_RBE_Msk|macro|ICM_IDR_RBE_Msk
DECL|ICM_IDR_RBE_Pos|macro|ICM_IDR_RBE_Pos
DECL|ICM_IDR_RBE|macro|ICM_IDR_RBE
DECL|ICM_IDR_RDM_Msk|macro|ICM_IDR_RDM_Msk
DECL|ICM_IDR_RDM_Pos|macro|ICM_IDR_RDM_Pos
DECL|ICM_IDR_RDM|macro|ICM_IDR_RDM
DECL|ICM_IDR_REC_Msk|macro|ICM_IDR_REC_Msk
DECL|ICM_IDR_REC_Pos|macro|ICM_IDR_REC_Pos
DECL|ICM_IDR_REC|macro|ICM_IDR_REC
DECL|ICM_IDR_RHC_Msk|macro|ICM_IDR_RHC_Msk
DECL|ICM_IDR_RHC_Pos|macro|ICM_IDR_RHC_Pos
DECL|ICM_IDR_RHC|macro|ICM_IDR_RHC
DECL|ICM_IDR_RSU_Msk|macro|ICM_IDR_RSU_Msk
DECL|ICM_IDR_RSU_Pos|macro|ICM_IDR_RSU_Pos
DECL|ICM_IDR_RSU|macro|ICM_IDR_RSU
DECL|ICM_IDR_RWC_Msk|macro|ICM_IDR_RWC_Msk
DECL|ICM_IDR_RWC_Pos|macro|ICM_IDR_RWC_Pos
DECL|ICM_IDR_RWC|macro|ICM_IDR_RWC
DECL|ICM_IDR_Type|typedef|} ICM_IDR_Type;
DECL|ICM_IDR_URAD_Msk|macro|ICM_IDR_URAD_Msk
DECL|ICM_IDR_URAD_Pos|macro|ICM_IDR_URAD_Pos
DECL|ICM_IDR_URAD|macro|ICM_IDR_URAD
DECL|ICM_IDR|member|__O ICM_IDR_Type ICM_IDR; /**< Offset: 0x14 ( /W 32) Interrupt Disable Register */
DECL|ICM_IDR|member|__O uint32_t ICM_IDR; /**< (ICM Offset: 0x14) Interrupt Disable Register */
DECL|ICM_IER_MASK|macro|ICM_IER_MASK
DECL|ICM_IER_Msk|macro|ICM_IER_Msk
DECL|ICM_IER_OFFSET|macro|ICM_IER_OFFSET
DECL|ICM_IER_RBE_Msk|macro|ICM_IER_RBE_Msk
DECL|ICM_IER_RBE_Pos|macro|ICM_IER_RBE_Pos
DECL|ICM_IER_RBE|macro|ICM_IER_RBE
DECL|ICM_IER_RDM_Msk|macro|ICM_IER_RDM_Msk
DECL|ICM_IER_RDM_Pos|macro|ICM_IER_RDM_Pos
DECL|ICM_IER_RDM|macro|ICM_IER_RDM
DECL|ICM_IER_REC_Msk|macro|ICM_IER_REC_Msk
DECL|ICM_IER_REC_Pos|macro|ICM_IER_REC_Pos
DECL|ICM_IER_REC|macro|ICM_IER_REC
DECL|ICM_IER_RHC_Msk|macro|ICM_IER_RHC_Msk
DECL|ICM_IER_RHC_Pos|macro|ICM_IER_RHC_Pos
DECL|ICM_IER_RHC|macro|ICM_IER_RHC
DECL|ICM_IER_RSU_Msk|macro|ICM_IER_RSU_Msk
DECL|ICM_IER_RSU_Pos|macro|ICM_IER_RSU_Pos
DECL|ICM_IER_RSU|macro|ICM_IER_RSU
DECL|ICM_IER_RWC_Msk|macro|ICM_IER_RWC_Msk
DECL|ICM_IER_RWC_Pos|macro|ICM_IER_RWC_Pos
DECL|ICM_IER_RWC|macro|ICM_IER_RWC
DECL|ICM_IER_Type|typedef|} ICM_IER_Type;
DECL|ICM_IER_URAD_Msk|macro|ICM_IER_URAD_Msk
DECL|ICM_IER_URAD_Pos|macro|ICM_IER_URAD_Pos
DECL|ICM_IER_URAD|macro|ICM_IER_URAD
DECL|ICM_IER|member|__O ICM_IER_Type ICM_IER; /**< Offset: 0x10 ( /W 32) Interrupt Enable Register */
DECL|ICM_IER|member|__O uint32_t ICM_IER; /**< (ICM Offset: 0x10) Interrupt Enable Register */
DECL|ICM_IMR_MASK|macro|ICM_IMR_MASK
DECL|ICM_IMR_Msk|macro|ICM_IMR_Msk
DECL|ICM_IMR_OFFSET|macro|ICM_IMR_OFFSET
DECL|ICM_IMR_RBE_Msk|macro|ICM_IMR_RBE_Msk
DECL|ICM_IMR_RBE_Pos|macro|ICM_IMR_RBE_Pos
DECL|ICM_IMR_RBE|macro|ICM_IMR_RBE
DECL|ICM_IMR_RDM_Msk|macro|ICM_IMR_RDM_Msk
DECL|ICM_IMR_RDM_Pos|macro|ICM_IMR_RDM_Pos
DECL|ICM_IMR_RDM|macro|ICM_IMR_RDM
DECL|ICM_IMR_REC_Msk|macro|ICM_IMR_REC_Msk
DECL|ICM_IMR_REC_Pos|macro|ICM_IMR_REC_Pos
DECL|ICM_IMR_REC|macro|ICM_IMR_REC
DECL|ICM_IMR_RHC_Msk|macro|ICM_IMR_RHC_Msk
DECL|ICM_IMR_RHC_Pos|macro|ICM_IMR_RHC_Pos
DECL|ICM_IMR_RHC|macro|ICM_IMR_RHC
DECL|ICM_IMR_RSU_Msk|macro|ICM_IMR_RSU_Msk
DECL|ICM_IMR_RSU_Pos|macro|ICM_IMR_RSU_Pos
DECL|ICM_IMR_RSU|macro|ICM_IMR_RSU
DECL|ICM_IMR_RWC_Msk|macro|ICM_IMR_RWC_Msk
DECL|ICM_IMR_RWC_Pos|macro|ICM_IMR_RWC_Pos
DECL|ICM_IMR_RWC|macro|ICM_IMR_RWC
DECL|ICM_IMR_Type|typedef|} ICM_IMR_Type;
DECL|ICM_IMR_URAD_Msk|macro|ICM_IMR_URAD_Msk
DECL|ICM_IMR_URAD_Pos|macro|ICM_IMR_URAD_Pos
DECL|ICM_IMR_URAD|macro|ICM_IMR_URAD
DECL|ICM_IMR|member|__I ICM_IMR_Type ICM_IMR; /**< Offset: 0x18 (R/ 32) Interrupt Mask Register */
DECL|ICM_IMR|member|__I uint32_t ICM_IMR; /**< (ICM Offset: 0x18) Interrupt Mask Register */
DECL|ICM_ISR_MASK|macro|ICM_ISR_MASK
DECL|ICM_ISR_Msk|macro|ICM_ISR_Msk
DECL|ICM_ISR_OFFSET|macro|ICM_ISR_OFFSET
DECL|ICM_ISR_RBE_Msk|macro|ICM_ISR_RBE_Msk
DECL|ICM_ISR_RBE_Pos|macro|ICM_ISR_RBE_Pos
DECL|ICM_ISR_RBE|macro|ICM_ISR_RBE
DECL|ICM_ISR_RDM_Msk|macro|ICM_ISR_RDM_Msk
DECL|ICM_ISR_RDM_Pos|macro|ICM_ISR_RDM_Pos
DECL|ICM_ISR_RDM|macro|ICM_ISR_RDM
DECL|ICM_ISR_REC_Msk|macro|ICM_ISR_REC_Msk
DECL|ICM_ISR_REC_Pos|macro|ICM_ISR_REC_Pos
DECL|ICM_ISR_REC|macro|ICM_ISR_REC
DECL|ICM_ISR_RHC_Msk|macro|ICM_ISR_RHC_Msk
DECL|ICM_ISR_RHC_Pos|macro|ICM_ISR_RHC_Pos
DECL|ICM_ISR_RHC|macro|ICM_ISR_RHC
DECL|ICM_ISR_RSU_Msk|macro|ICM_ISR_RSU_Msk
DECL|ICM_ISR_RSU_Pos|macro|ICM_ISR_RSU_Pos
DECL|ICM_ISR_RSU|macro|ICM_ISR_RSU
DECL|ICM_ISR_RWC_Msk|macro|ICM_ISR_RWC_Msk
DECL|ICM_ISR_RWC_Pos|macro|ICM_ISR_RWC_Pos
DECL|ICM_ISR_RWC|macro|ICM_ISR_RWC
DECL|ICM_ISR_Type|typedef|} ICM_ISR_Type;
DECL|ICM_ISR_URAD_Msk|macro|ICM_ISR_URAD_Msk
DECL|ICM_ISR_URAD_Pos|macro|ICM_ISR_URAD_Pos
DECL|ICM_ISR_URAD|macro|ICM_ISR_URAD
DECL|ICM_ISR|member|__I ICM_ISR_Type ICM_ISR; /**< Offset: 0x1C (R/ 32) Interrupt Status Register */
DECL|ICM_ISR|member|__I uint32_t ICM_ISR; /**< (ICM Offset: 0x1C) Interrupt Status Register */
DECL|ICM_SR_ENABLE_Msk|macro|ICM_SR_ENABLE_Msk
DECL|ICM_SR_ENABLE_Pos|macro|ICM_SR_ENABLE_Pos
DECL|ICM_SR_ENABLE|macro|ICM_SR_ENABLE
DECL|ICM_SR_MASK|macro|ICM_SR_MASK
DECL|ICM_SR_Msk|macro|ICM_SR_Msk
DECL|ICM_SR_OFFSET|macro|ICM_SR_OFFSET
DECL|ICM_SR_RAWRMDIS_Msk|macro|ICM_SR_RAWRMDIS_Msk
DECL|ICM_SR_RAWRMDIS_Pos|macro|ICM_SR_RAWRMDIS_Pos
DECL|ICM_SR_RAWRMDIS|macro|ICM_SR_RAWRMDIS
DECL|ICM_SR_RMDIS_Msk|macro|ICM_SR_RMDIS_Msk
DECL|ICM_SR_RMDIS_Pos|macro|ICM_SR_RMDIS_Pos
DECL|ICM_SR_RMDIS|macro|ICM_SR_RMDIS
DECL|ICM_SR_Type|typedef|} ICM_SR_Type;
DECL|ICM_SR|member|__O ICM_SR_Type ICM_SR; /**< Offset: 0x08 ( /W 32) Status Register */
DECL|ICM_SR|member|__O uint32_t ICM_SR; /**< (ICM Offset: 0x08) Status Register */
DECL|ICM_UASR_MASK|macro|ICM_UASR_MASK
DECL|ICM_UASR_Msk|macro|ICM_UASR_Msk
DECL|ICM_UASR_OFFSET|macro|ICM_UASR_OFFSET
DECL|ICM_UASR_Type|typedef|} ICM_UASR_Type;
DECL|ICM_UASR_URAT_ICM_CFG_MODIFIED_Val|macro|ICM_UASR_URAT_ICM_CFG_MODIFIED_Val
DECL|ICM_UASR_URAT_ICM_CFG_MODIFIED|macro|ICM_UASR_URAT_ICM_CFG_MODIFIED
DECL|ICM_UASR_URAT_ICM_DSCR_MODIFIED_Val|macro|ICM_UASR_URAT_ICM_DSCR_MODIFIED_Val
DECL|ICM_UASR_URAT_ICM_DSCR_MODIFIED|macro|ICM_UASR_URAT_ICM_DSCR_MODIFIED
DECL|ICM_UASR_URAT_ICM_HASH_MODIFIED_Val|macro|ICM_UASR_URAT_ICM_HASH_MODIFIED_Val
DECL|ICM_UASR_URAT_ICM_HASH_MODIFIED|macro|ICM_UASR_URAT_ICM_HASH_MODIFIED
DECL|ICM_UASR_URAT_Msk|macro|ICM_UASR_URAT_Msk
DECL|ICM_UASR_URAT_Pos|macro|ICM_UASR_URAT_Pos
DECL|ICM_UASR_URAT_READ_ACCESS_Val|macro|ICM_UASR_URAT_READ_ACCESS_Val
DECL|ICM_UASR_URAT_READ_ACCESS|macro|ICM_UASR_URAT_READ_ACCESS
DECL|ICM_UASR_URAT_UNSPEC_STRUCT_MEMBER_Val|macro|ICM_UASR_URAT_UNSPEC_STRUCT_MEMBER_Val
DECL|ICM_UASR_URAT_UNSPEC_STRUCT_MEMBER|macro|ICM_UASR_URAT_UNSPEC_STRUCT_MEMBER
DECL|ICM_UASR_URAT|macro|ICM_UASR_URAT
DECL|ICM_UASR|member|__I ICM_UASR_Type ICM_UASR; /**< Offset: 0x20 (R/ 32) Undefined Access Status Register */
DECL|ICM_UASR|member|__I uint32_t ICM_UASR; /**< (ICM Offset: 0x20) Undefined Access Status Register */
DECL|ICM_UIHVAL_MASK|macro|ICM_UIHVAL_MASK
DECL|ICM_UIHVAL_Msk|macro|ICM_UIHVAL_Msk
DECL|ICM_UIHVAL_OFFSET|macro|ICM_UIHVAL_OFFSET
DECL|ICM_UIHVAL_Type|typedef|} ICM_UIHVAL_Type;
DECL|ICM_UIHVAL_VAL_Msk|macro|ICM_UIHVAL_VAL_Msk
DECL|ICM_UIHVAL_VAL_Pos|macro|ICM_UIHVAL_VAL_Pos
DECL|ICM_UIHVAL_VAL|macro|ICM_UIHVAL_VAL
DECL|ICM_UIHVAL|member|__O ICM_UIHVAL_Type ICM_UIHVAL[8]; /**< Offset: 0x38 ( /W 32) User Initial Hash Value 0 Register 0 */
DECL|ICM_UIHVAL|member|__O uint32_t ICM_UIHVAL[8]; /**< (ICM Offset: 0x38) User Initial Hash Value 0 Register 0 */
DECL|Icm|typedef|} Icm;
DECL|Icm|typedef|} Icm;
DECL|RAWRMDIS|member|uint32_t RAWRMDIS:4; /**< bit: 8..11 Region Monitoring Disabled Raw Status */
DECL|RBE|member|uint32_t RBE:4; /**< bit: 8..11 Region Bus Error */
DECL|RBE|member|uint32_t RBE:4; /**< bit: 8..11 Region Bus Error Interrupt Disable */
DECL|RBE|member|uint32_t RBE:4; /**< bit: 8..11 Region Bus Error Interrupt Enable */
DECL|RBE|member|uint32_t RBE:4; /**< bit: 8..11 Region Bus Error Interrupt Mask */
DECL|RDM|member|uint32_t RDM:4; /**< bit: 4..7 Region Digest Mismatch */
DECL|RDM|member|uint32_t RDM:4; /**< bit: 4..7 Region Digest Mismatch Interrupt Disable */
DECL|RDM|member|uint32_t RDM:4; /**< bit: 4..7 Region Digest Mismatch Interrupt Enable */
DECL|RDM|member|uint32_t RDM:4; /**< bit: 4..7 Region Digest Mismatch Interrupt Mask */
DECL|REC|member|uint32_t REC:4; /**< bit: 16..19 Region End bit Condition Detected */
DECL|REC|member|uint32_t REC:4; /**< bit: 16..19 Region End bit Condition Detected Interrupt Enable */
DECL|REC|member|uint32_t REC:4; /**< bit: 16..19 Region End bit Condition Detected Interrupt Mask */
DECL|REC|member|uint32_t REC:4; /**< bit: 16..19 Region End bit Condition detected Interrupt Disable */
DECL|REHASH|member|uint32_t REHASH:4; /**< bit: 4..7 Recompute Internal Hash */
DECL|REV_ICM|macro|REV_ICM
DECL|RHC|member|uint32_t RHC:4; /**< bit: 0..3 Region Hash Completed */
DECL|RHC|member|uint32_t RHC:4; /**< bit: 0..3 Region Hash Completed Interrupt Disable */
DECL|RHC|member|uint32_t RHC:4; /**< bit: 0..3 Region Hash Completed Interrupt Enable */
DECL|RHC|member|uint32_t RHC:4; /**< bit: 0..3 Region Hash Completed Interrupt Mask */
DECL|RMDIS|member|uint32_t RMDIS:4; /**< bit: 12..15 Region Monitoring Disabled Status */
DECL|RMDIS|member|uint32_t RMDIS:4; /**< bit: 8..11 Region Monitoring Disable */
DECL|RMEN|member|uint32_t RMEN:4; /**< bit: 12..15 Region Monitoring Enable */
DECL|RSU|member|uint32_t RSU:4; /**< bit: 20..23 Region Status Updated Detected */
DECL|RSU|member|uint32_t RSU:4; /**< bit: 20..23 Region Status Updated Interrupt Disable */
DECL|RSU|member|uint32_t RSU:4; /**< bit: 20..23 Region Status Updated Interrupt Disable */
DECL|RSU|member|uint32_t RSU:4; /**< bit: 20..23 Region Status Updated Interrupt Mask */
DECL|RWC|member|uint32_t RWC:4; /**< bit: 12..15 Region Wrap Condition Detected */
DECL|RWC|member|uint32_t RWC:4; /**< bit: 12..15 Region Wrap Condition Detected Interrupt Disable */
DECL|RWC|member|uint32_t RWC:4; /**< bit: 12..15 Region Wrap Condition Detected Interrupt Mask */
DECL|RWC|member|uint32_t RWC:4; /**< bit: 12..15 Region Wrap Condition detected Interrupt Enable */
DECL|Reserved1|member|RoReg8 Reserved1[0x4];
DECL|Reserved1|member|__I uint32_t Reserved1[1];
DECL|Reserved2|member|RoReg8 Reserved2[0xC];
DECL|Reserved2|member|__I uint32_t Reserved2[3];
DECL|SLBDIS|member|uint32_t SLBDIS:1; /**< bit: 2 Secondary List Branching Disable */
DECL|SWRST|member|uint32_t SWRST:1; /**< bit: 2 Software Reset */
DECL|UALGO|member|uint32_t UALGO:3; /**< bit: 13..15 User SHA Algorithm */
DECL|UIHASH|member|uint32_t UIHASH:1; /**< bit: 12 User Initial Hash Value */
DECL|URAD|member|uint32_t URAD:1; /**< bit: 24 Undefined Register Access Detection Interrupt Disable */
DECL|URAD|member|uint32_t URAD:1; /**< bit: 24 Undefined Register Access Detection Interrupt Enable */
DECL|URAD|member|uint32_t URAD:1; /**< bit: 24 Undefined Register Access Detection Interrupt Mask */
DECL|URAD|member|uint32_t URAD:1; /**< bit: 24 Undefined Register Access Detection Status */
DECL|URAT|member|uint32_t URAT:3; /**< bit: 0..2 Undefined Register Access Trace */
DECL|VAL|member|uint32_t VAL:32; /**< bit: 0..31 Initial Hash Value */
DECL|WBDIS|member|uint32_t WBDIS:1; /**< bit: 0 Write Back Disable */
DECL|_SAME70_ICM_COMPONENT_H_|macro|_SAME70_ICM_COMPONENT_H_
DECL|_SAME70_ICM_COMPONENT_|macro|_SAME70_ICM_COMPONENT_
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 3 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 3 Reserved */
DECL|uint32_t|member|uint32_t :29; /**< bit: 3..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 10..11 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 0..5 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
