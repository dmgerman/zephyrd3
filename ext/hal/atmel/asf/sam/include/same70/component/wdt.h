DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|KEY|member|uint32_t KEY:8; /**< bit: 24..31 Password */
DECL|REV_WDT|macro|REV_WDT
DECL|WDDBGHLT|member|uint32_t WDDBGHLT:1; /**< bit: 28 Watchdog Debug Halt */
DECL|WDDIS|member|uint32_t WDDIS:1; /**< bit: 15 Watchdog Disable */
DECL|WDD|member|uint32_t WDD:12; /**< bit: 16..27 Watchdog Delta Value */
DECL|WDERR|member|uint32_t WDERR:1; /**< bit: 1 Watchdog Error (cleared on read) */
DECL|WDFIEN|member|uint32_t WDFIEN:1; /**< bit: 12 Watchdog Fault Interrupt Enable */
DECL|WDIDLEHLT|member|uint32_t WDIDLEHLT:1; /**< bit: 29 Watchdog Idle Halt */
DECL|WDRSTEN|member|uint32_t WDRSTEN:1; /**< bit: 13 Watchdog Reset Enable */
DECL|WDRSTT|member|uint32_t WDRSTT:1; /**< bit: 0 Watchdog Restart */
DECL|WDT_6080|macro|WDT_6080
DECL|WDT_CR_KEY_Msk|macro|WDT_CR_KEY_Msk
DECL|WDT_CR_KEY_PASSWD_Val|macro|WDT_CR_KEY_PASSWD_Val
DECL|WDT_CR_KEY_PASSWD|macro|WDT_CR_KEY_PASSWD
DECL|WDT_CR_KEY_Pos|macro|WDT_CR_KEY_Pos
DECL|WDT_CR_KEY|macro|WDT_CR_KEY
DECL|WDT_CR_MASK|macro|WDT_CR_MASK
DECL|WDT_CR_Msk|macro|WDT_CR_Msk
DECL|WDT_CR_OFFSET|macro|WDT_CR_OFFSET
DECL|WDT_CR_Type|typedef|} WDT_CR_Type;
DECL|WDT_CR_WDRSTT_Msk|macro|WDT_CR_WDRSTT_Msk
DECL|WDT_CR_WDRSTT_Pos|macro|WDT_CR_WDRSTT_Pos
DECL|WDT_CR_WDRSTT|macro|WDT_CR_WDRSTT
DECL|WDT_CR|member|__O WDT_CR_Type WDT_CR; /**< Offset: 0x00 ( /W 32) Control Register */
DECL|WDT_CR|member|__O uint32_t WDT_CR; /**< (WDT Offset: 0x00) Control Register */
DECL|WDT_MR_MASK|macro|WDT_MR_MASK
DECL|WDT_MR_Msk|macro|WDT_MR_Msk
DECL|WDT_MR_OFFSET|macro|WDT_MR_OFFSET
DECL|WDT_MR_Type|typedef|} WDT_MR_Type;
DECL|WDT_MR_WDDBGHLT_Msk|macro|WDT_MR_WDDBGHLT_Msk
DECL|WDT_MR_WDDBGHLT_Pos|macro|WDT_MR_WDDBGHLT_Pos
DECL|WDT_MR_WDDBGHLT|macro|WDT_MR_WDDBGHLT
DECL|WDT_MR_WDDIS_Msk|macro|WDT_MR_WDDIS_Msk
DECL|WDT_MR_WDDIS_Pos|macro|WDT_MR_WDDIS_Pos
DECL|WDT_MR_WDDIS|macro|WDT_MR_WDDIS
DECL|WDT_MR_WDD_Msk|macro|WDT_MR_WDD_Msk
DECL|WDT_MR_WDD_Pos|macro|WDT_MR_WDD_Pos
DECL|WDT_MR_WDD|macro|WDT_MR_WDD
DECL|WDT_MR_WDFIEN_Msk|macro|WDT_MR_WDFIEN_Msk
DECL|WDT_MR_WDFIEN_Pos|macro|WDT_MR_WDFIEN_Pos
DECL|WDT_MR_WDFIEN|macro|WDT_MR_WDFIEN
DECL|WDT_MR_WDIDLEHLT_Msk|macro|WDT_MR_WDIDLEHLT_Msk
DECL|WDT_MR_WDIDLEHLT_Pos|macro|WDT_MR_WDIDLEHLT_Pos
DECL|WDT_MR_WDIDLEHLT|macro|WDT_MR_WDIDLEHLT
DECL|WDT_MR_WDRSTEN_Msk|macro|WDT_MR_WDRSTEN_Msk
DECL|WDT_MR_WDRSTEN_Pos|macro|WDT_MR_WDRSTEN_Pos
DECL|WDT_MR_WDRSTEN|macro|WDT_MR_WDRSTEN
DECL|WDT_MR_WDV_Msk|macro|WDT_MR_WDV_Msk
DECL|WDT_MR_WDV_Pos|macro|WDT_MR_WDV_Pos
DECL|WDT_MR_WDV|macro|WDT_MR_WDV
DECL|WDT_MR|member|__IO WDT_MR_Type WDT_MR; /**< Offset: 0x04 (R/W 32) Mode Register */
DECL|WDT_MR|member|__IO uint32_t WDT_MR; /**< (WDT Offset: 0x04) Mode Register */
DECL|WDT_SR_MASK|macro|WDT_SR_MASK
DECL|WDT_SR_Msk|macro|WDT_SR_Msk
DECL|WDT_SR_OFFSET|macro|WDT_SR_OFFSET
DECL|WDT_SR_Type|typedef|} WDT_SR_Type;
DECL|WDT_SR_WDERR_Msk|macro|WDT_SR_WDERR_Msk
DECL|WDT_SR_WDERR_Pos|macro|WDT_SR_WDERR_Pos
DECL|WDT_SR_WDERR|macro|WDT_SR_WDERR
DECL|WDT_SR_WDUNF_Msk|macro|WDT_SR_WDUNF_Msk
DECL|WDT_SR_WDUNF_Pos|macro|WDT_SR_WDUNF_Pos
DECL|WDT_SR_WDUNF|macro|WDT_SR_WDUNF
DECL|WDT_SR|member|__I WDT_SR_Type WDT_SR; /**< Offset: 0x08 (R/ 32) Status Register */
DECL|WDT_SR|member|__I uint32_t WDT_SR; /**< (WDT Offset: 0x08) Status Register */
DECL|WDUNF|member|uint32_t WDUNF:1; /**< bit: 0 Watchdog Underflow (cleared on read) */
DECL|WDV|member|uint32_t WDV:12; /**< bit: 0..11 Watchdog Counter Value */
DECL|Wdt|typedef|} Wdt;
DECL|Wdt|typedef|} Wdt;
DECL|_SAME70_WDT_COMPONENT_H_|macro|_SAME70_WDT_COMPONENT_H_
DECL|_SAME70_WDT_COMPONENT_|macro|_SAME70_WDT_COMPONENT_
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :1; /**< bit: 14 Reserved */
DECL|uint32_t|member|uint32_t :23; /**< bit: 1..23 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 30..31 Reserved */
DECL|uint32_t|member|uint32_t :30; /**< bit: 2..31 Reserved */
