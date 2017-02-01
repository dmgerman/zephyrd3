DECL|ALLONES|member|uint32_t ALLONES:12; /**< bit: 16..27 Must Always Be Written with 0xFFF */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|KEY|member|uint32_t KEY:8; /**< bit: 24..31 Password */
DECL|REV_RSWDT|macro|REV_RSWDT
DECL|RSWDT_11110|macro|RSWDT_11110
DECL|RSWDT_CR_KEY_Msk|macro|RSWDT_CR_KEY_Msk
DECL|RSWDT_CR_KEY_PASSWD_Val|macro|RSWDT_CR_KEY_PASSWD_Val
DECL|RSWDT_CR_KEY_PASSWD|macro|RSWDT_CR_KEY_PASSWD
DECL|RSWDT_CR_KEY_Pos|macro|RSWDT_CR_KEY_Pos
DECL|RSWDT_CR_KEY|macro|RSWDT_CR_KEY
DECL|RSWDT_CR_MASK|macro|RSWDT_CR_MASK
DECL|RSWDT_CR_Msk|macro|RSWDT_CR_Msk
DECL|RSWDT_CR_OFFSET|macro|RSWDT_CR_OFFSET
DECL|RSWDT_CR_Type|typedef|} RSWDT_CR_Type;
DECL|RSWDT_CR_WDRSTT_Msk|macro|RSWDT_CR_WDRSTT_Msk
DECL|RSWDT_CR_WDRSTT_Pos|macro|RSWDT_CR_WDRSTT_Pos
DECL|RSWDT_CR_WDRSTT|macro|RSWDT_CR_WDRSTT
DECL|RSWDT_CR|member|__O RSWDT_CR_Type RSWDT_CR; /**< Offset: 0x00 ( /W 32) Control Register */
DECL|RSWDT_CR|member|__O uint32_t RSWDT_CR; /**< (RSWDT Offset: 0x00) Control Register */
DECL|RSWDT_MR_ALLONES_Msk|macro|RSWDT_MR_ALLONES_Msk
DECL|RSWDT_MR_ALLONES_Pos|macro|RSWDT_MR_ALLONES_Pos
DECL|RSWDT_MR_ALLONES|macro|RSWDT_MR_ALLONES
DECL|RSWDT_MR_MASK|macro|RSWDT_MR_MASK
DECL|RSWDT_MR_Msk|macro|RSWDT_MR_Msk
DECL|RSWDT_MR_OFFSET|macro|RSWDT_MR_OFFSET
DECL|RSWDT_MR_Type|typedef|} RSWDT_MR_Type;
DECL|RSWDT_MR_WDDBGHLT_Msk|macro|RSWDT_MR_WDDBGHLT_Msk
DECL|RSWDT_MR_WDDBGHLT_Pos|macro|RSWDT_MR_WDDBGHLT_Pos
DECL|RSWDT_MR_WDDBGHLT|macro|RSWDT_MR_WDDBGHLT
DECL|RSWDT_MR_WDDIS_Msk|macro|RSWDT_MR_WDDIS_Msk
DECL|RSWDT_MR_WDDIS_Pos|macro|RSWDT_MR_WDDIS_Pos
DECL|RSWDT_MR_WDDIS|macro|RSWDT_MR_WDDIS
DECL|RSWDT_MR_WDFIEN_Msk|macro|RSWDT_MR_WDFIEN_Msk
DECL|RSWDT_MR_WDFIEN_Pos|macro|RSWDT_MR_WDFIEN_Pos
DECL|RSWDT_MR_WDFIEN|macro|RSWDT_MR_WDFIEN
DECL|RSWDT_MR_WDIDLEHLT_Msk|macro|RSWDT_MR_WDIDLEHLT_Msk
DECL|RSWDT_MR_WDIDLEHLT_Pos|macro|RSWDT_MR_WDIDLEHLT_Pos
DECL|RSWDT_MR_WDIDLEHLT|macro|RSWDT_MR_WDIDLEHLT
DECL|RSWDT_MR_WDRSTEN_Msk|macro|RSWDT_MR_WDRSTEN_Msk
DECL|RSWDT_MR_WDRSTEN_Pos|macro|RSWDT_MR_WDRSTEN_Pos
DECL|RSWDT_MR_WDRSTEN|macro|RSWDT_MR_WDRSTEN
DECL|RSWDT_MR_WDV_Msk|macro|RSWDT_MR_WDV_Msk
DECL|RSWDT_MR_WDV_Pos|macro|RSWDT_MR_WDV_Pos
DECL|RSWDT_MR_WDV|macro|RSWDT_MR_WDV
DECL|RSWDT_MR|member|__IO RSWDT_MR_Type RSWDT_MR; /**< Offset: 0x04 (R/W 32) Mode Register */
DECL|RSWDT_MR|member|__IO uint32_t RSWDT_MR; /**< (RSWDT Offset: 0x04) Mode Register */
DECL|RSWDT_SR_MASK|macro|RSWDT_SR_MASK
DECL|RSWDT_SR_Msk|macro|RSWDT_SR_Msk
DECL|RSWDT_SR_OFFSET|macro|RSWDT_SR_OFFSET
DECL|RSWDT_SR_Type|typedef|} RSWDT_SR_Type;
DECL|RSWDT_SR_WDUNF_Msk|macro|RSWDT_SR_WDUNF_Msk
DECL|RSWDT_SR_WDUNF_Pos|macro|RSWDT_SR_WDUNF_Pos
DECL|RSWDT_SR_WDUNF|macro|RSWDT_SR_WDUNF
DECL|RSWDT_SR|member|__I RSWDT_SR_Type RSWDT_SR; /**< Offset: 0x08 (R/ 32) Status Register */
DECL|RSWDT_SR|member|__I uint32_t RSWDT_SR; /**< (RSWDT Offset: 0x08) Status Register */
DECL|Rswdt|typedef|} Rswdt;
DECL|Rswdt|typedef|} Rswdt;
DECL|WDDBGHLT|member|uint32_t WDDBGHLT:1; /**< bit: 28 Watchdog Debug Halt */
DECL|WDDIS|member|uint32_t WDDIS:1; /**< bit: 15 Watchdog Disable */
DECL|WDFIEN|member|uint32_t WDFIEN:1; /**< bit: 12 Watchdog Fault Interrupt Enable */
DECL|WDIDLEHLT|member|uint32_t WDIDLEHLT:1; /**< bit: 29 Watchdog Idle Halt */
DECL|WDRSTEN|member|uint32_t WDRSTEN:1; /**< bit: 13 Watchdog Reset Enable */
DECL|WDRSTT|member|uint32_t WDRSTT:1; /**< bit: 0 Watchdog Restart */
DECL|WDUNF|member|uint32_t WDUNF:1; /**< bit: 0 Watchdog Underflow */
DECL|WDV|member|uint32_t WDV:12; /**< bit: 0..11 Watchdog Counter Value */
DECL|_SAME70_RSWDT_COMPONENT_H_|macro|_SAME70_RSWDT_COMPONENT_H_
DECL|_SAME70_RSWDT_COMPONENT_|macro|_SAME70_RSWDT_COMPONENT_
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :1; /**< bit: 14 Reserved */
DECL|uint32_t|member|uint32_t :23; /**< bit: 1..23 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 30..31 Reserved */
DECL|uint32_t|member|uint32_t :31; /**< bit: 1..31 Reserved */
