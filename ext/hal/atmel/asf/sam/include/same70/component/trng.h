DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|DATRDY|member|uint32_t DATRDY:1; /**< bit: 0 Data Ready */
DECL|DATRDY|member|uint32_t DATRDY:1; /**< bit: 0 Data Ready Interrupt Disable */
DECL|DATRDY|member|uint32_t DATRDY:1; /**< bit: 0 Data Ready Interrupt Enable */
DECL|DATRDY|member|uint32_t DATRDY:1; /**< bit: 0 Data Ready Interrupt Mask */
DECL|ENABLE|member|uint32_t ENABLE:1; /**< bit: 0 Enables the TRNG to Provide Random Values */
DECL|KEY|member|uint32_t KEY:24; /**< bit: 8..31 Security Key */
DECL|ODATA|member|uint32_t ODATA:32; /**< bit: 0..31 Output Data */
DECL|REV_TRNG|macro|REV_TRNG
DECL|Reserved1|member|RoReg8 Reserved1[0xC];
DECL|Reserved1|member|__I uint32_t Reserved1[3];
DECL|Reserved2|member|RoReg8 Reserved2[0x30];
DECL|Reserved2|member|__I uint32_t Reserved2[12];
DECL|TRNG_6334|macro|TRNG_6334
DECL|TRNG_CR_ENABLE_Msk|macro|TRNG_CR_ENABLE_Msk
DECL|TRNG_CR_ENABLE_Pos|macro|TRNG_CR_ENABLE_Pos
DECL|TRNG_CR_ENABLE|macro|TRNG_CR_ENABLE
DECL|TRNG_CR_KEY_Msk|macro|TRNG_CR_KEY_Msk
DECL|TRNG_CR_KEY_PASSWD_Val|macro|TRNG_CR_KEY_PASSWD_Val
DECL|TRNG_CR_KEY_PASSWD|macro|TRNG_CR_KEY_PASSWD
DECL|TRNG_CR_KEY_Pos|macro|TRNG_CR_KEY_Pos
DECL|TRNG_CR_KEY|macro|TRNG_CR_KEY
DECL|TRNG_CR_MASK|macro|TRNG_CR_MASK
DECL|TRNG_CR_Msk|macro|TRNG_CR_Msk
DECL|TRNG_CR_OFFSET|macro|TRNG_CR_OFFSET
DECL|TRNG_CR_Type|typedef|} TRNG_CR_Type;
DECL|TRNG_CR|member|__O TRNG_CR_Type TRNG_CR; /**< Offset: 0x00 ( /W 32) Control Register */
DECL|TRNG_CR|member|__O uint32_t TRNG_CR; /**< (TRNG Offset: 0x00) Control Register */
DECL|TRNG_IDR_DATRDY_Msk|macro|TRNG_IDR_DATRDY_Msk
DECL|TRNG_IDR_DATRDY_Pos|macro|TRNG_IDR_DATRDY_Pos
DECL|TRNG_IDR_DATRDY|macro|TRNG_IDR_DATRDY
DECL|TRNG_IDR_MASK|macro|TRNG_IDR_MASK
DECL|TRNG_IDR_Msk|macro|TRNG_IDR_Msk
DECL|TRNG_IDR_OFFSET|macro|TRNG_IDR_OFFSET
DECL|TRNG_IDR_Type|typedef|} TRNG_IDR_Type;
DECL|TRNG_IDR|member|__O TRNG_IDR_Type TRNG_IDR; /**< Offset: 0x14 ( /W 32) Interrupt Disable Register */
DECL|TRNG_IDR|member|__O uint32_t TRNG_IDR; /**< (TRNG Offset: 0x14) Interrupt Disable Register */
DECL|TRNG_IER_DATRDY_Msk|macro|TRNG_IER_DATRDY_Msk
DECL|TRNG_IER_DATRDY_Pos|macro|TRNG_IER_DATRDY_Pos
DECL|TRNG_IER_DATRDY|macro|TRNG_IER_DATRDY
DECL|TRNG_IER_MASK|macro|TRNG_IER_MASK
DECL|TRNG_IER_Msk|macro|TRNG_IER_Msk
DECL|TRNG_IER_OFFSET|macro|TRNG_IER_OFFSET
DECL|TRNG_IER_Type|typedef|} TRNG_IER_Type;
DECL|TRNG_IER|member|__O TRNG_IER_Type TRNG_IER; /**< Offset: 0x10 ( /W 32) Interrupt Enable Register */
DECL|TRNG_IER|member|__O uint32_t TRNG_IER; /**< (TRNG Offset: 0x10) Interrupt Enable Register */
DECL|TRNG_IMR_DATRDY_Msk|macro|TRNG_IMR_DATRDY_Msk
DECL|TRNG_IMR_DATRDY_Pos|macro|TRNG_IMR_DATRDY_Pos
DECL|TRNG_IMR_DATRDY|macro|TRNG_IMR_DATRDY
DECL|TRNG_IMR_MASK|macro|TRNG_IMR_MASK
DECL|TRNG_IMR_Msk|macro|TRNG_IMR_Msk
DECL|TRNG_IMR_OFFSET|macro|TRNG_IMR_OFFSET
DECL|TRNG_IMR_Type|typedef|} TRNG_IMR_Type;
DECL|TRNG_IMR|member|__I TRNG_IMR_Type TRNG_IMR; /**< Offset: 0x18 (R/ 32) Interrupt Mask Register */
DECL|TRNG_IMR|member|__I uint32_t TRNG_IMR; /**< (TRNG Offset: 0x18) Interrupt Mask Register */
DECL|TRNG_ISR_DATRDY_Msk|macro|TRNG_ISR_DATRDY_Msk
DECL|TRNG_ISR_DATRDY_Pos|macro|TRNG_ISR_DATRDY_Pos
DECL|TRNG_ISR_DATRDY|macro|TRNG_ISR_DATRDY
DECL|TRNG_ISR_MASK|macro|TRNG_ISR_MASK
DECL|TRNG_ISR_Msk|macro|TRNG_ISR_Msk
DECL|TRNG_ISR_OFFSET|macro|TRNG_ISR_OFFSET
DECL|TRNG_ISR_Type|typedef|} TRNG_ISR_Type;
DECL|TRNG_ISR|member|__I TRNG_ISR_Type TRNG_ISR; /**< Offset: 0x1C (R/ 32) Interrupt Status Register */
DECL|TRNG_ISR|member|__I uint32_t TRNG_ISR; /**< (TRNG Offset: 0x1C) Interrupt Status Register */
DECL|TRNG_ODATA_MASK|macro|TRNG_ODATA_MASK
DECL|TRNG_ODATA_Msk|macro|TRNG_ODATA_Msk
DECL|TRNG_ODATA_ODATA_Msk|macro|TRNG_ODATA_ODATA_Msk
DECL|TRNG_ODATA_ODATA_Pos|macro|TRNG_ODATA_ODATA_Pos
DECL|TRNG_ODATA_ODATA|macro|TRNG_ODATA_ODATA
DECL|TRNG_ODATA_OFFSET|macro|TRNG_ODATA_OFFSET
DECL|TRNG_ODATA_Type|typedef|} TRNG_ODATA_Type;
DECL|TRNG_ODATA|member|__I TRNG_ODATA_Type TRNG_ODATA; /**< Offset: 0x50 (R/ 32) Output Data Register */
DECL|TRNG_ODATA|member|__I uint32_t TRNG_ODATA; /**< (TRNG Offset: 0x50) Output Data Register */
DECL|Trng|typedef|} Trng;
DECL|Trng|typedef|} Trng;
DECL|_SAME70_TRNG_COMPONENT_H_|macro|_SAME70_TRNG_COMPONENT_H_
DECL|_SAME70_TRNG_COMPONENT_|macro|_SAME70_TRNG_COMPONENT_
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
DECL|uint32_t|member|uint32_t :31; /**< bit: 1..31 Reserved */
DECL|uint32_t|member|uint32_t :31; /**< bit: 1..31 Reserved */
DECL|uint32_t|member|uint32_t :31; /**< bit: 1..31 Reserved */
DECL|uint32_t|member|uint32_t :31; /**< bit: 1..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
