DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|ERSTL|member|uint32_t ERSTL:4; /**< bit: 8..11 External Reset Length */
DECL|EXTRST|member|uint32_t EXTRST:1; /**< bit: 3 External Reset */
DECL|KEY|member|uint32_t KEY:8; /**< bit: 24..31 System Reset Key */
DECL|KEY|member|uint32_t KEY:8; /**< bit: 24..31 Write Access Password */
DECL|NRSTL|member|uint32_t NRSTL:1; /**< bit: 16 NRST Pin Level */
DECL|PROCRST|member|uint32_t PROCRST:1; /**< bit: 0 Processor Reset */
DECL|REV_RSTC|macro|REV_RSTC
DECL|RSTC_11009|macro|RSTC_11009
DECL|RSTC_CR_EXTRST_Msk|macro|RSTC_CR_EXTRST_Msk
DECL|RSTC_CR_EXTRST_Pos|macro|RSTC_CR_EXTRST_Pos
DECL|RSTC_CR_EXTRST|macro|RSTC_CR_EXTRST
DECL|RSTC_CR_KEY_Msk|macro|RSTC_CR_KEY_Msk
DECL|RSTC_CR_KEY_PASSWD_Val|macro|RSTC_CR_KEY_PASSWD_Val
DECL|RSTC_CR_KEY_PASSWD|macro|RSTC_CR_KEY_PASSWD
DECL|RSTC_CR_KEY_Pos|macro|RSTC_CR_KEY_Pos
DECL|RSTC_CR_KEY|macro|RSTC_CR_KEY
DECL|RSTC_CR_MASK|macro|RSTC_CR_MASK
DECL|RSTC_CR_Msk|macro|RSTC_CR_Msk
DECL|RSTC_CR_OFFSET|macro|RSTC_CR_OFFSET
DECL|RSTC_CR_PROCRST_Msk|macro|RSTC_CR_PROCRST_Msk
DECL|RSTC_CR_PROCRST_Pos|macro|RSTC_CR_PROCRST_Pos
DECL|RSTC_CR_PROCRST|macro|RSTC_CR_PROCRST
DECL|RSTC_CR_Type|typedef|} RSTC_CR_Type;
DECL|RSTC_CR|member|__O RSTC_CR_Type RSTC_CR; /**< Offset: 0x00 ( /W 32) Control Register */
DECL|RSTC_CR|member|__O uint32_t RSTC_CR; /**< (RSTC Offset: 0x00) Control Register */
DECL|RSTC_MR_ERSTL_Msk|macro|RSTC_MR_ERSTL_Msk
DECL|RSTC_MR_ERSTL_Pos|macro|RSTC_MR_ERSTL_Pos
DECL|RSTC_MR_ERSTL|macro|RSTC_MR_ERSTL
DECL|RSTC_MR_KEY_Msk|macro|RSTC_MR_KEY_Msk
DECL|RSTC_MR_KEY_PASSWD_Val|macro|RSTC_MR_KEY_PASSWD_Val
DECL|RSTC_MR_KEY_PASSWD|macro|RSTC_MR_KEY_PASSWD
DECL|RSTC_MR_KEY_Pos|macro|RSTC_MR_KEY_Pos
DECL|RSTC_MR_KEY|macro|RSTC_MR_KEY
DECL|RSTC_MR_MASK|macro|RSTC_MR_MASK
DECL|RSTC_MR_Msk|macro|RSTC_MR_Msk
DECL|RSTC_MR_OFFSET|macro|RSTC_MR_OFFSET
DECL|RSTC_MR_Type|typedef|} RSTC_MR_Type;
DECL|RSTC_MR_URSTEN_Msk|macro|RSTC_MR_URSTEN_Msk
DECL|RSTC_MR_URSTEN_Pos|macro|RSTC_MR_URSTEN_Pos
DECL|RSTC_MR_URSTEN|macro|RSTC_MR_URSTEN
DECL|RSTC_MR_URSTIEN_Msk|macro|RSTC_MR_URSTIEN_Msk
DECL|RSTC_MR_URSTIEN_Pos|macro|RSTC_MR_URSTIEN_Pos
DECL|RSTC_MR_URSTIEN|macro|RSTC_MR_URSTIEN
DECL|RSTC_MR|member|__IO RSTC_MR_Type RSTC_MR; /**< Offset: 0x08 (R/W 32) Mode Register */
DECL|RSTC_MR|member|__IO uint32_t RSTC_MR; /**< (RSTC Offset: 0x08) Mode Register */
DECL|RSTC_SR_MASK|macro|RSTC_SR_MASK
DECL|RSTC_SR_Msk|macro|RSTC_SR_Msk
DECL|RSTC_SR_NRSTL_Msk|macro|RSTC_SR_NRSTL_Msk
DECL|RSTC_SR_NRSTL_Pos|macro|RSTC_SR_NRSTL_Pos
DECL|RSTC_SR_NRSTL|macro|RSTC_SR_NRSTL
DECL|RSTC_SR_OFFSET|macro|RSTC_SR_OFFSET
DECL|RSTC_SR_RSTTYP_BACKUP_RST_Val|macro|RSTC_SR_RSTTYP_BACKUP_RST_Val
DECL|RSTC_SR_RSTTYP_BACKUP_RST|macro|RSTC_SR_RSTTYP_BACKUP_RST
DECL|RSTC_SR_RSTTYP_GENERAL_RST_Val|macro|RSTC_SR_RSTTYP_GENERAL_RST_Val
DECL|RSTC_SR_RSTTYP_GENERAL_RST|macro|RSTC_SR_RSTTYP_GENERAL_RST
DECL|RSTC_SR_RSTTYP_Msk|macro|RSTC_SR_RSTTYP_Msk
DECL|RSTC_SR_RSTTYP_Pos|macro|RSTC_SR_RSTTYP_Pos
DECL|RSTC_SR_RSTTYP_SOFT_RST_Val|macro|RSTC_SR_RSTTYP_SOFT_RST_Val
DECL|RSTC_SR_RSTTYP_SOFT_RST|macro|RSTC_SR_RSTTYP_SOFT_RST
DECL|RSTC_SR_RSTTYP_USER_RST_Val|macro|RSTC_SR_RSTTYP_USER_RST_Val
DECL|RSTC_SR_RSTTYP_USER_RST|macro|RSTC_SR_RSTTYP_USER_RST
DECL|RSTC_SR_RSTTYP_WDT_RST_Val|macro|RSTC_SR_RSTTYP_WDT_RST_Val
DECL|RSTC_SR_RSTTYP_WDT_RST|macro|RSTC_SR_RSTTYP_WDT_RST
DECL|RSTC_SR_RSTTYP|macro|RSTC_SR_RSTTYP
DECL|RSTC_SR_SRCMP_Msk|macro|RSTC_SR_SRCMP_Msk
DECL|RSTC_SR_SRCMP_Pos|macro|RSTC_SR_SRCMP_Pos
DECL|RSTC_SR_SRCMP|macro|RSTC_SR_SRCMP
DECL|RSTC_SR_Type|typedef|} RSTC_SR_Type;
DECL|RSTC_SR_URSTS_Msk|macro|RSTC_SR_URSTS_Msk
DECL|RSTC_SR_URSTS_Pos|macro|RSTC_SR_URSTS_Pos
DECL|RSTC_SR_URSTS|macro|RSTC_SR_URSTS
DECL|RSTC_SR|member|__I RSTC_SR_Type RSTC_SR; /**< Offset: 0x04 (R/ 32) Status Register */
DECL|RSTC_SR|member|__I uint32_t RSTC_SR; /**< (RSTC Offset: 0x04) Status Register */
DECL|RSTTYP|member|uint32_t RSTTYP:3; /**< bit: 8..10 Reset Type */
DECL|Rstc|typedef|} Rstc;
DECL|Rstc|typedef|} Rstc;
DECL|SRCMP|member|uint32_t SRCMP:1; /**< bit: 17 Software Reset Command in Progress */
DECL|URSTEN|member|uint32_t URSTEN:1; /**< bit: 0 User Reset Enable */
DECL|URSTIEN|member|uint32_t URSTIEN:1; /**< bit: 4 User Reset Interrupt Enable */
DECL|URSTS|member|uint32_t URSTS:1; /**< bit: 0 User Reset Status */
DECL|_SAME70_RSTC_COMPONENT_H_|macro|_SAME70_RSTC_COMPONENT_H_
DECL|_SAME70_RSTC_COMPONENT_|macro|_SAME70_RSTC_COMPONENT_
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :12; /**< bit: 12..23 Reserved */
DECL|uint32_t|member|uint32_t :14; /**< bit: 18..31 Reserved */
DECL|uint32_t|member|uint32_t :20; /**< bit: 4..23 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 1..2 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 1..3 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 5..7 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 11..15 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
