DECL|HMATRIXB_I7638|macro|HMATRIXB_I7638
DECL|HMATRIXB_PRAS_MASK|macro|HMATRIXB_PRAS_MASK
DECL|HMATRIXB_PRAS_OFFSET|macro|HMATRIXB_PRAS_OFFSET
DECL|HMATRIXB_PRAS_RESETVALUE|macro|HMATRIXB_PRAS_RESETVALUE
DECL|HMATRIXB_PRAS_Type|typedef|} HMATRIXB_PRAS_Type;
DECL|HMATRIXB_PRBS_MASK|macro|HMATRIXB_PRBS_MASK
DECL|HMATRIXB_PRBS_OFFSET|macro|HMATRIXB_PRBS_OFFSET
DECL|HMATRIXB_PRBS_RESETVALUE|macro|HMATRIXB_PRBS_RESETVALUE
DECL|HMATRIXB_PRBS_Type|typedef|} HMATRIXB_PRBS_Type;
DECL|HMATRIXB_SFR_MASK|macro|HMATRIXB_SFR_MASK
DECL|HMATRIXB_SFR_OFFSET|macro|HMATRIXB_SFR_OFFSET
DECL|HMATRIXB_SFR_RESETVALUE|macro|HMATRIXB_SFR_RESETVALUE
DECL|HMATRIXB_SFR_SFR_Msk|macro|HMATRIXB_SFR_SFR_Msk
DECL|HMATRIXB_SFR_SFR_Pos|macro|HMATRIXB_SFR_SFR_Pos
DECL|HMATRIXB_SFR_SFR|macro|HMATRIXB_SFR_SFR
DECL|HMATRIXB_SFR_Type|typedef|} HMATRIXB_SFR_Type;
DECL|HmatrixbPrs|typedef|} HmatrixbPrs;
DECL|Hmatrixb|typedef|} Hmatrixb;
DECL|PRAS|member|__IO HMATRIXB_PRAS_Type PRAS; /**< \brief Offset: 0x000 (R/W 32) Priority A for Slave */
DECL|PRBS|member|__IO HMATRIXB_PRBS_Type PRBS; /**< \brief Offset: 0x004 (R/W 32) Priority B for Slave */
DECL|Prs|member|HmatrixbPrs Prs[16]; /**< \brief Offset: 0x080 HmatrixbPrs groups */
DECL|REV_HMATRIXB|macro|REV_HMATRIXB
DECL|Reserved1|member|RoReg8 Reserved1[0x80];
DECL|Reserved2|member|RoReg8 Reserved2[0x10];
DECL|SFR|member|__IO HMATRIXB_SFR_Type SFR[16]; /**< \brief Offset: 0x110 (R/W 32) Special Function */
DECL|SFR|member|uint32_t SFR:32; /*!< bit: 0..31 Special Function Register */
DECL|_SAMD21_HMATRIXB_COMPONENT_|macro|_SAMD21_HMATRIXB_COMPONENT_
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
