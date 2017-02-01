DECL|CH0|member|uint32_t CH0:1; /**< bit: 0 Channel 0 Disable */
DECL|CH0|member|uint32_t CH0:1; /**< bit: 0 Channel 0 Enable */
DECL|CH0|member|uint32_t CH0:1; /**< bit: 0 Channel 0 Status */
DECL|CH1|member|uint32_t CH1:1; /**< bit: 1 Channel 1 Disable */
DECL|CH1|member|uint32_t CH1:1; /**< bit: 1 Channel 1 Enable */
DECL|CH1|member|uint32_t CH1:1; /**< bit: 1 Channel 1 Status */
DECL|CH|member|uint32_t CH:2; /**< bit: 0..1 Channel x Disable */
DECL|CH|member|uint32_t CH:2; /**< bit: 0..1 Channel x Enable */
DECL|CH|member|uint32_t CH:2; /**< bit: 0..1 Channel x Status */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|DACC_11246|macro|DACC_11246
DECL|DACC_ACR_IBCTLCH0_Msk|macro|DACC_ACR_IBCTLCH0_Msk
DECL|DACC_ACR_IBCTLCH0_Pos|macro|DACC_ACR_IBCTLCH0_Pos
DECL|DACC_ACR_IBCTLCH0|macro|DACC_ACR_IBCTLCH0
DECL|DACC_ACR_IBCTLCH1_Msk|macro|DACC_ACR_IBCTLCH1_Msk
DECL|DACC_ACR_IBCTLCH1_Pos|macro|DACC_ACR_IBCTLCH1_Pos
DECL|DACC_ACR_IBCTLCH1|macro|DACC_ACR_IBCTLCH1
DECL|DACC_ACR_MASK|macro|DACC_ACR_MASK
DECL|DACC_ACR_Msk|macro|DACC_ACR_Msk
DECL|DACC_ACR_OFFSET|macro|DACC_ACR_OFFSET
DECL|DACC_ACR_Type|typedef|} DACC_ACR_Type;
DECL|DACC_ACR|member|__IO DACC_ACR_Type DACC_ACR; /**< Offset: 0x94 (R/W 32) Analog Current Register */
DECL|DACC_ACR|member|__IO uint32_t DACC_ACR; /**< (DACC Offset: 0x94) Analog Current Register */
DECL|DACC_CDR_DATA0_Msk|macro|DACC_CDR_DATA0_Msk
DECL|DACC_CDR_DATA0_Pos|macro|DACC_CDR_DATA0_Pos
DECL|DACC_CDR_DATA0|macro|DACC_CDR_DATA0
DECL|DACC_CDR_DATA1_Msk|macro|DACC_CDR_DATA1_Msk
DECL|DACC_CDR_DATA1_Pos|macro|DACC_CDR_DATA1_Pos
DECL|DACC_CDR_DATA1|macro|DACC_CDR_DATA1
DECL|DACC_CDR_MASK|macro|DACC_CDR_MASK
DECL|DACC_CDR_Msk|macro|DACC_CDR_Msk
DECL|DACC_CDR_OFFSET|macro|DACC_CDR_OFFSET
DECL|DACC_CDR_Type|typedef|} DACC_CDR_Type;
DECL|DACC_CDR|member|__O DACC_CDR_Type DACC_CDR[2]; /**< Offset: 0x1C ( /W 32) Conversion Data Register 0 */
DECL|DACC_CDR|member|__O uint32_t DACC_CDR[2]; /**< (DACC Offset: 0x1C) Conversion Data Register 0 */
DECL|DACC_CHDR_CH0_Msk|macro|DACC_CHDR_CH0_Msk
DECL|DACC_CHDR_CH0_Pos|macro|DACC_CHDR_CH0_Pos
DECL|DACC_CHDR_CH0|macro|DACC_CHDR_CH0
DECL|DACC_CHDR_CH1_Msk|macro|DACC_CHDR_CH1_Msk
DECL|DACC_CHDR_CH1_Pos|macro|DACC_CHDR_CH1_Pos
DECL|DACC_CHDR_CH1|macro|DACC_CHDR_CH1
DECL|DACC_CHDR_CH_Msk|macro|DACC_CHDR_CH_Msk
DECL|DACC_CHDR_CH_Pos|macro|DACC_CHDR_CH_Pos
DECL|DACC_CHDR_CH|macro|DACC_CHDR_CH
DECL|DACC_CHDR_MASK|macro|DACC_CHDR_MASK
DECL|DACC_CHDR_Msk|macro|DACC_CHDR_Msk
DECL|DACC_CHDR_OFFSET|macro|DACC_CHDR_OFFSET
DECL|DACC_CHDR_Type|typedef|} DACC_CHDR_Type;
DECL|DACC_CHDR|member|__O DACC_CHDR_Type DACC_CHDR; /**< Offset: 0x14 ( /W 32) Channel Disable Register */
DECL|DACC_CHDR|member|__O uint32_t DACC_CHDR; /**< (DACC Offset: 0x14) Channel Disable Register */
DECL|DACC_CHER_CH0_Msk|macro|DACC_CHER_CH0_Msk
DECL|DACC_CHER_CH0_Pos|macro|DACC_CHER_CH0_Pos
DECL|DACC_CHER_CH0|macro|DACC_CHER_CH0
DECL|DACC_CHER_CH1_Msk|macro|DACC_CHER_CH1_Msk
DECL|DACC_CHER_CH1_Pos|macro|DACC_CHER_CH1_Pos
DECL|DACC_CHER_CH1|macro|DACC_CHER_CH1
DECL|DACC_CHER_CH_Msk|macro|DACC_CHER_CH_Msk
DECL|DACC_CHER_CH_Pos|macro|DACC_CHER_CH_Pos
DECL|DACC_CHER_CH|macro|DACC_CHER_CH
DECL|DACC_CHER_MASK|macro|DACC_CHER_MASK
DECL|DACC_CHER_Msk|macro|DACC_CHER_Msk
DECL|DACC_CHER_OFFSET|macro|DACC_CHER_OFFSET
DECL|DACC_CHER_Type|typedef|} DACC_CHER_Type;
DECL|DACC_CHER|member|__O DACC_CHER_Type DACC_CHER; /**< Offset: 0x10 ( /W 32) Channel Enable Register */
DECL|DACC_CHER|member|__O uint32_t DACC_CHER; /**< (DACC Offset: 0x10) Channel Enable Register */
DECL|DACC_CHSR_CH0_Msk|macro|DACC_CHSR_CH0_Msk
DECL|DACC_CHSR_CH0_Pos|macro|DACC_CHSR_CH0_Pos
DECL|DACC_CHSR_CH0|macro|DACC_CHSR_CH0
DECL|DACC_CHSR_CH1_Msk|macro|DACC_CHSR_CH1_Msk
DECL|DACC_CHSR_CH1_Pos|macro|DACC_CHSR_CH1_Pos
DECL|DACC_CHSR_CH1|macro|DACC_CHSR_CH1
DECL|DACC_CHSR_CH_Msk|macro|DACC_CHSR_CH_Msk
DECL|DACC_CHSR_CH_Pos|macro|DACC_CHSR_CH_Pos
DECL|DACC_CHSR_CH|macro|DACC_CHSR_CH
DECL|DACC_CHSR_DACRDY0_Msk|macro|DACC_CHSR_DACRDY0_Msk
DECL|DACC_CHSR_DACRDY0_Pos|macro|DACC_CHSR_DACRDY0_Pos
DECL|DACC_CHSR_DACRDY0|macro|DACC_CHSR_DACRDY0
DECL|DACC_CHSR_DACRDY1_Msk|macro|DACC_CHSR_DACRDY1_Msk
DECL|DACC_CHSR_DACRDY1_Pos|macro|DACC_CHSR_DACRDY1_Pos
DECL|DACC_CHSR_DACRDY1|macro|DACC_CHSR_DACRDY1
DECL|DACC_CHSR_DACRDY_Msk|macro|DACC_CHSR_DACRDY_Msk
DECL|DACC_CHSR_DACRDY_Pos|macro|DACC_CHSR_DACRDY_Pos
DECL|DACC_CHSR_DACRDY|macro|DACC_CHSR_DACRDY
DECL|DACC_CHSR_MASK|macro|DACC_CHSR_MASK
DECL|DACC_CHSR_Msk|macro|DACC_CHSR_Msk
DECL|DACC_CHSR_OFFSET|macro|DACC_CHSR_OFFSET
DECL|DACC_CHSR_Type|typedef|} DACC_CHSR_Type;
DECL|DACC_CHSR|member|__I DACC_CHSR_Type DACC_CHSR; /**< Offset: 0x18 (R/ 32) Channel Status Register */
DECL|DACC_CHSR|member|__I uint32_t DACC_CHSR; /**< (DACC Offset: 0x18) Channel Status Register */
DECL|DACC_CR_MASK|macro|DACC_CR_MASK
DECL|DACC_CR_Msk|macro|DACC_CR_Msk
DECL|DACC_CR_OFFSET|macro|DACC_CR_OFFSET
DECL|DACC_CR_SWRST_Msk|macro|DACC_CR_SWRST_Msk
DECL|DACC_CR_SWRST_Pos|macro|DACC_CR_SWRST_Pos
DECL|DACC_CR_SWRST|macro|DACC_CR_SWRST
DECL|DACC_CR_Type|typedef|} DACC_CR_Type;
DECL|DACC_CR|member|__O DACC_CR_Type DACC_CR; /**< Offset: 0x00 ( /W 32) Control Register */
DECL|DACC_CR|member|__O uint32_t DACC_CR; /**< (DACC Offset: 0x00) Control Register */
DECL|DACC_IDR_EOC0_Msk|macro|DACC_IDR_EOC0_Msk
DECL|DACC_IDR_EOC0_Pos|macro|DACC_IDR_EOC0_Pos
DECL|DACC_IDR_EOC0|macro|DACC_IDR_EOC0
DECL|DACC_IDR_EOC1_Msk|macro|DACC_IDR_EOC1_Msk
DECL|DACC_IDR_EOC1_Pos|macro|DACC_IDR_EOC1_Pos
DECL|DACC_IDR_EOC1|macro|DACC_IDR_EOC1
DECL|DACC_IDR_EOC_Msk|macro|DACC_IDR_EOC_Msk
DECL|DACC_IDR_EOC_Pos|macro|DACC_IDR_EOC_Pos
DECL|DACC_IDR_EOC|macro|DACC_IDR_EOC
DECL|DACC_IDR_MASK|macro|DACC_IDR_MASK
DECL|DACC_IDR_Msk|macro|DACC_IDR_Msk
DECL|DACC_IDR_OFFSET|macro|DACC_IDR_OFFSET
DECL|DACC_IDR_TXRDY0_Msk|macro|DACC_IDR_TXRDY0_Msk
DECL|DACC_IDR_TXRDY0_Pos|macro|DACC_IDR_TXRDY0_Pos
DECL|DACC_IDR_TXRDY0|macro|DACC_IDR_TXRDY0
DECL|DACC_IDR_TXRDY1_Msk|macro|DACC_IDR_TXRDY1_Msk
DECL|DACC_IDR_TXRDY1_Pos|macro|DACC_IDR_TXRDY1_Pos
DECL|DACC_IDR_TXRDY1|macro|DACC_IDR_TXRDY1
DECL|DACC_IDR_TXRDY_Msk|macro|DACC_IDR_TXRDY_Msk
DECL|DACC_IDR_TXRDY_Pos|macro|DACC_IDR_TXRDY_Pos
DECL|DACC_IDR_TXRDY|macro|DACC_IDR_TXRDY
DECL|DACC_IDR_Type|typedef|} DACC_IDR_Type;
DECL|DACC_IDR|member|__O DACC_IDR_Type DACC_IDR; /**< Offset: 0x28 ( /W 32) Interrupt Disable Register */
DECL|DACC_IDR|member|__O uint32_t DACC_IDR; /**< (DACC Offset: 0x28) Interrupt Disable Register */
DECL|DACC_IER_EOC0_Msk|macro|DACC_IER_EOC0_Msk
DECL|DACC_IER_EOC0_Pos|macro|DACC_IER_EOC0_Pos
DECL|DACC_IER_EOC0|macro|DACC_IER_EOC0
DECL|DACC_IER_EOC1_Msk|macro|DACC_IER_EOC1_Msk
DECL|DACC_IER_EOC1_Pos|macro|DACC_IER_EOC1_Pos
DECL|DACC_IER_EOC1|macro|DACC_IER_EOC1
DECL|DACC_IER_EOC_Msk|macro|DACC_IER_EOC_Msk
DECL|DACC_IER_EOC_Pos|macro|DACC_IER_EOC_Pos
DECL|DACC_IER_EOC|macro|DACC_IER_EOC
DECL|DACC_IER_MASK|macro|DACC_IER_MASK
DECL|DACC_IER_Msk|macro|DACC_IER_Msk
DECL|DACC_IER_OFFSET|macro|DACC_IER_OFFSET
DECL|DACC_IER_TXRDY0_Msk|macro|DACC_IER_TXRDY0_Msk
DECL|DACC_IER_TXRDY0_Pos|macro|DACC_IER_TXRDY0_Pos
DECL|DACC_IER_TXRDY0|macro|DACC_IER_TXRDY0
DECL|DACC_IER_TXRDY1_Msk|macro|DACC_IER_TXRDY1_Msk
DECL|DACC_IER_TXRDY1_Pos|macro|DACC_IER_TXRDY1_Pos
DECL|DACC_IER_TXRDY1|macro|DACC_IER_TXRDY1
DECL|DACC_IER_TXRDY_Msk|macro|DACC_IER_TXRDY_Msk
DECL|DACC_IER_TXRDY_Pos|macro|DACC_IER_TXRDY_Pos
DECL|DACC_IER_TXRDY|macro|DACC_IER_TXRDY
DECL|DACC_IER_Type|typedef|} DACC_IER_Type;
DECL|DACC_IER|member|__O DACC_IER_Type DACC_IER; /**< Offset: 0x24 ( /W 32) Interrupt Enable Register */
DECL|DACC_IER|member|__O uint32_t DACC_IER; /**< (DACC Offset: 0x24) Interrupt Enable Register */
DECL|DACC_IMR_EOC0_Msk|macro|DACC_IMR_EOC0_Msk
DECL|DACC_IMR_EOC0_Pos|macro|DACC_IMR_EOC0_Pos
DECL|DACC_IMR_EOC0|macro|DACC_IMR_EOC0
DECL|DACC_IMR_EOC1_Msk|macro|DACC_IMR_EOC1_Msk
DECL|DACC_IMR_EOC1_Pos|macro|DACC_IMR_EOC1_Pos
DECL|DACC_IMR_EOC1|macro|DACC_IMR_EOC1
DECL|DACC_IMR_EOC_Msk|macro|DACC_IMR_EOC_Msk
DECL|DACC_IMR_EOC_Pos|macro|DACC_IMR_EOC_Pos
DECL|DACC_IMR_EOC|macro|DACC_IMR_EOC
DECL|DACC_IMR_MASK|macro|DACC_IMR_MASK
DECL|DACC_IMR_Msk|macro|DACC_IMR_Msk
DECL|DACC_IMR_OFFSET|macro|DACC_IMR_OFFSET
DECL|DACC_IMR_TXRDY0_Msk|macro|DACC_IMR_TXRDY0_Msk
DECL|DACC_IMR_TXRDY0_Pos|macro|DACC_IMR_TXRDY0_Pos
DECL|DACC_IMR_TXRDY0|macro|DACC_IMR_TXRDY0
DECL|DACC_IMR_TXRDY1_Msk|macro|DACC_IMR_TXRDY1_Msk
DECL|DACC_IMR_TXRDY1_Pos|macro|DACC_IMR_TXRDY1_Pos
DECL|DACC_IMR_TXRDY1|macro|DACC_IMR_TXRDY1
DECL|DACC_IMR_TXRDY_Msk|macro|DACC_IMR_TXRDY_Msk
DECL|DACC_IMR_TXRDY_Pos|macro|DACC_IMR_TXRDY_Pos
DECL|DACC_IMR_TXRDY|macro|DACC_IMR_TXRDY
DECL|DACC_IMR_Type|typedef|} DACC_IMR_Type;
DECL|DACC_IMR|member|__I DACC_IMR_Type DACC_IMR; /**< Offset: 0x2C (R/ 32) Interrupt Mask Register */
DECL|DACC_IMR|member|__I uint32_t DACC_IMR; /**< (DACC Offset: 0x2C) Interrupt Mask Register */
DECL|DACC_ISR_EOC0_Msk|macro|DACC_ISR_EOC0_Msk
DECL|DACC_ISR_EOC0_Pos|macro|DACC_ISR_EOC0_Pos
DECL|DACC_ISR_EOC0|macro|DACC_ISR_EOC0
DECL|DACC_ISR_EOC1_Msk|macro|DACC_ISR_EOC1_Msk
DECL|DACC_ISR_EOC1_Pos|macro|DACC_ISR_EOC1_Pos
DECL|DACC_ISR_EOC1|macro|DACC_ISR_EOC1
DECL|DACC_ISR_EOC_Msk|macro|DACC_ISR_EOC_Msk
DECL|DACC_ISR_EOC_Pos|macro|DACC_ISR_EOC_Pos
DECL|DACC_ISR_EOC|macro|DACC_ISR_EOC
DECL|DACC_ISR_MASK|macro|DACC_ISR_MASK
DECL|DACC_ISR_Msk|macro|DACC_ISR_Msk
DECL|DACC_ISR_OFFSET|macro|DACC_ISR_OFFSET
DECL|DACC_ISR_TXRDY0_Msk|macro|DACC_ISR_TXRDY0_Msk
DECL|DACC_ISR_TXRDY0_Pos|macro|DACC_ISR_TXRDY0_Pos
DECL|DACC_ISR_TXRDY0|macro|DACC_ISR_TXRDY0
DECL|DACC_ISR_TXRDY1_Msk|macro|DACC_ISR_TXRDY1_Msk
DECL|DACC_ISR_TXRDY1_Pos|macro|DACC_ISR_TXRDY1_Pos
DECL|DACC_ISR_TXRDY1|macro|DACC_ISR_TXRDY1
DECL|DACC_ISR_TXRDY_Msk|macro|DACC_ISR_TXRDY_Msk
DECL|DACC_ISR_TXRDY_Pos|macro|DACC_ISR_TXRDY_Pos
DECL|DACC_ISR_TXRDY|macro|DACC_ISR_TXRDY
DECL|DACC_ISR_Type|typedef|} DACC_ISR_Type;
DECL|DACC_ISR|member|__I DACC_ISR_Type DACC_ISR; /**< Offset: 0x30 (R/ 32) Interrupt Status Register */
DECL|DACC_ISR|member|__I uint32_t DACC_ISR; /**< (DACC Offset: 0x30) Interrupt Status Register */
DECL|DACC_MR_DIFF_DISABLED_Val|macro|DACC_MR_DIFF_DISABLED_Val
DECL|DACC_MR_DIFF_DISABLED|macro|DACC_MR_DIFF_DISABLED
DECL|DACC_MR_DIFF_ENABLED_Val|macro|DACC_MR_DIFF_ENABLED_Val
DECL|DACC_MR_DIFF_ENABLED|macro|DACC_MR_DIFF_ENABLED
DECL|DACC_MR_DIFF_Msk|macro|DACC_MR_DIFF_Msk
DECL|DACC_MR_DIFF_Pos|macro|DACC_MR_DIFF_Pos
DECL|DACC_MR_DIFF|macro|DACC_MR_DIFF
DECL|DACC_MR_MASK|macro|DACC_MR_MASK
DECL|DACC_MR_MAXS0_MAXIMUM_Val|macro|DACC_MR_MAXS0_MAXIMUM_Val
DECL|DACC_MR_MAXS0_MAXIMUM|macro|DACC_MR_MAXS0_MAXIMUM
DECL|DACC_MR_MAXS0_Msk|macro|DACC_MR_MAXS0_Msk
DECL|DACC_MR_MAXS0_Pos|macro|DACC_MR_MAXS0_Pos
DECL|DACC_MR_MAXS0_TRIG_EVENT_Val|macro|DACC_MR_MAXS0_TRIG_EVENT_Val
DECL|DACC_MR_MAXS0_TRIG_EVENT|macro|DACC_MR_MAXS0_TRIG_EVENT
DECL|DACC_MR_MAXS0|macro|DACC_MR_MAXS0
DECL|DACC_MR_MAXS1_MAXIMUM_Val|macro|DACC_MR_MAXS1_MAXIMUM_Val
DECL|DACC_MR_MAXS1_MAXIMUM|macro|DACC_MR_MAXS1_MAXIMUM
DECL|DACC_MR_MAXS1_Msk|macro|DACC_MR_MAXS1_Msk
DECL|DACC_MR_MAXS1_Pos|macro|DACC_MR_MAXS1_Pos
DECL|DACC_MR_MAXS1_TRIG_EVENT_Val|macro|DACC_MR_MAXS1_TRIG_EVENT_Val
DECL|DACC_MR_MAXS1_TRIG_EVENT|macro|DACC_MR_MAXS1_TRIG_EVENT
DECL|DACC_MR_MAXS1|macro|DACC_MR_MAXS1
DECL|DACC_MR_Msk|macro|DACC_MR_Msk
DECL|DACC_MR_OFFSET|macro|DACC_MR_OFFSET
DECL|DACC_MR_PRESCALER_Msk|macro|DACC_MR_PRESCALER_Msk
DECL|DACC_MR_PRESCALER_Pos|macro|DACC_MR_PRESCALER_Pos
DECL|DACC_MR_PRESCALER|macro|DACC_MR_PRESCALER
DECL|DACC_MR_Type|typedef|} DACC_MR_Type;
DECL|DACC_MR_WORD_DISABLED_Val|macro|DACC_MR_WORD_DISABLED_Val
DECL|DACC_MR_WORD_DISABLED|macro|DACC_MR_WORD_DISABLED
DECL|DACC_MR_WORD_ENABLED_Val|macro|DACC_MR_WORD_ENABLED_Val
DECL|DACC_MR_WORD_ENABLED|macro|DACC_MR_WORD_ENABLED
DECL|DACC_MR_WORD_Msk|macro|DACC_MR_WORD_Msk
DECL|DACC_MR_WORD_Pos|macro|DACC_MR_WORD_Pos
DECL|DACC_MR_WORD|macro|DACC_MR_WORD
DECL|DACC_MR_ZERO_Msk|macro|DACC_MR_ZERO_Msk
DECL|DACC_MR_ZERO_Pos|macro|DACC_MR_ZERO_Pos
DECL|DACC_MR_ZERO|macro|DACC_MR_ZERO
DECL|DACC_MR|member|__IO DACC_MR_Type DACC_MR; /**< Offset: 0x04 (R/W 32) Mode Register */
DECL|DACC_MR|member|__IO uint32_t DACC_MR; /**< (DACC Offset: 0x04) Mode Register */
DECL|DACC_TRIGR_MASK|macro|DACC_TRIGR_MASK
DECL|DACC_TRIGR_Msk|macro|DACC_TRIGR_Msk
DECL|DACC_TRIGR_OFFSET|macro|DACC_TRIGR_OFFSET
DECL|DACC_TRIGR_OSR0_Msk|macro|DACC_TRIGR_OSR0_Msk
DECL|DACC_TRIGR_OSR0_OSR_16_Val|macro|DACC_TRIGR_OSR0_OSR_16_Val
DECL|DACC_TRIGR_OSR0_OSR_16|macro|DACC_TRIGR_OSR0_OSR_16
DECL|DACC_TRIGR_OSR0_OSR_1_Val|macro|DACC_TRIGR_OSR0_OSR_1_Val
DECL|DACC_TRIGR_OSR0_OSR_1|macro|DACC_TRIGR_OSR0_OSR_1
DECL|DACC_TRIGR_OSR0_OSR_2_Val|macro|DACC_TRIGR_OSR0_OSR_2_Val
DECL|DACC_TRIGR_OSR0_OSR_2|macro|DACC_TRIGR_OSR0_OSR_2
DECL|DACC_TRIGR_OSR0_OSR_32_Val|macro|DACC_TRIGR_OSR0_OSR_32_Val
DECL|DACC_TRIGR_OSR0_OSR_32|macro|DACC_TRIGR_OSR0_OSR_32
DECL|DACC_TRIGR_OSR0_OSR_4_Val|macro|DACC_TRIGR_OSR0_OSR_4_Val
DECL|DACC_TRIGR_OSR0_OSR_4|macro|DACC_TRIGR_OSR0_OSR_4
DECL|DACC_TRIGR_OSR0_OSR_8_Val|macro|DACC_TRIGR_OSR0_OSR_8_Val
DECL|DACC_TRIGR_OSR0_OSR_8|macro|DACC_TRIGR_OSR0_OSR_8
DECL|DACC_TRIGR_OSR0_Pos|macro|DACC_TRIGR_OSR0_Pos
DECL|DACC_TRIGR_OSR0|macro|DACC_TRIGR_OSR0
DECL|DACC_TRIGR_OSR1_Msk|macro|DACC_TRIGR_OSR1_Msk
DECL|DACC_TRIGR_OSR1_OSR_16_Val|macro|DACC_TRIGR_OSR1_OSR_16_Val
DECL|DACC_TRIGR_OSR1_OSR_16|macro|DACC_TRIGR_OSR1_OSR_16
DECL|DACC_TRIGR_OSR1_OSR_1_Val|macro|DACC_TRIGR_OSR1_OSR_1_Val
DECL|DACC_TRIGR_OSR1_OSR_1|macro|DACC_TRIGR_OSR1_OSR_1
DECL|DACC_TRIGR_OSR1_OSR_2_Val|macro|DACC_TRIGR_OSR1_OSR_2_Val
DECL|DACC_TRIGR_OSR1_OSR_2|macro|DACC_TRIGR_OSR1_OSR_2
DECL|DACC_TRIGR_OSR1_OSR_32_Val|macro|DACC_TRIGR_OSR1_OSR_32_Val
DECL|DACC_TRIGR_OSR1_OSR_32|macro|DACC_TRIGR_OSR1_OSR_32
DECL|DACC_TRIGR_OSR1_OSR_4_Val|macro|DACC_TRIGR_OSR1_OSR_4_Val
DECL|DACC_TRIGR_OSR1_OSR_4|macro|DACC_TRIGR_OSR1_OSR_4
DECL|DACC_TRIGR_OSR1_OSR_8_Val|macro|DACC_TRIGR_OSR1_OSR_8_Val
DECL|DACC_TRIGR_OSR1_OSR_8|macro|DACC_TRIGR_OSR1_OSR_8
DECL|DACC_TRIGR_OSR1_Pos|macro|DACC_TRIGR_OSR1_Pos
DECL|DACC_TRIGR_OSR1|macro|DACC_TRIGR_OSR1
DECL|DACC_TRIGR_TRGEN0_DIS_Val|macro|DACC_TRIGR_TRGEN0_DIS_Val
DECL|DACC_TRIGR_TRGEN0_DIS|macro|DACC_TRIGR_TRGEN0_DIS
DECL|DACC_TRIGR_TRGEN0_EN_Val|macro|DACC_TRIGR_TRGEN0_EN_Val
DECL|DACC_TRIGR_TRGEN0_EN|macro|DACC_TRIGR_TRGEN0_EN
DECL|DACC_TRIGR_TRGEN0_Msk|macro|DACC_TRIGR_TRGEN0_Msk
DECL|DACC_TRIGR_TRGEN0_Pos|macro|DACC_TRIGR_TRGEN0_Pos
DECL|DACC_TRIGR_TRGEN0|macro|DACC_TRIGR_TRGEN0
DECL|DACC_TRIGR_TRGEN1_DIS_Val|macro|DACC_TRIGR_TRGEN1_DIS_Val
DECL|DACC_TRIGR_TRGEN1_DIS|macro|DACC_TRIGR_TRGEN1_DIS
DECL|DACC_TRIGR_TRGEN1_EN_Val|macro|DACC_TRIGR_TRGEN1_EN_Val
DECL|DACC_TRIGR_TRGEN1_EN|macro|DACC_TRIGR_TRGEN1_EN
DECL|DACC_TRIGR_TRGEN1_Msk|macro|DACC_TRIGR_TRGEN1_Msk
DECL|DACC_TRIGR_TRGEN1_Pos|macro|DACC_TRIGR_TRGEN1_Pos
DECL|DACC_TRIGR_TRGEN1|macro|DACC_TRIGR_TRGEN1
DECL|DACC_TRIGR_TRGEN_Msk|macro|DACC_TRIGR_TRGEN_Msk
DECL|DACC_TRIGR_TRGEN_Pos|macro|DACC_TRIGR_TRGEN_Pos
DECL|DACC_TRIGR_TRGEN|macro|DACC_TRIGR_TRGEN
DECL|DACC_TRIGR_TRGSEL0_Msk|macro|DACC_TRIGR_TRGSEL0_Msk
DECL|DACC_TRIGR_TRGSEL0_Pos|macro|DACC_TRIGR_TRGSEL0_Pos
DECL|DACC_TRIGR_TRGSEL0_TRGSEL0_Val|macro|DACC_TRIGR_TRGSEL0_TRGSEL0_Val
DECL|DACC_TRIGR_TRGSEL0_TRGSEL0|macro|DACC_TRIGR_TRGSEL0_TRGSEL0
DECL|DACC_TRIGR_TRGSEL0_TRGSEL1_Val|macro|DACC_TRIGR_TRGSEL0_TRGSEL1_Val
DECL|DACC_TRIGR_TRGSEL0_TRGSEL1|macro|DACC_TRIGR_TRGSEL0_TRGSEL1
DECL|DACC_TRIGR_TRGSEL0_TRGSEL2_Val|macro|DACC_TRIGR_TRGSEL0_TRGSEL2_Val
DECL|DACC_TRIGR_TRGSEL0_TRGSEL2|macro|DACC_TRIGR_TRGSEL0_TRGSEL2
DECL|DACC_TRIGR_TRGSEL0_TRGSEL3_Val|macro|DACC_TRIGR_TRGSEL0_TRGSEL3_Val
DECL|DACC_TRIGR_TRGSEL0_TRGSEL3|macro|DACC_TRIGR_TRGSEL0_TRGSEL3
DECL|DACC_TRIGR_TRGSEL0_TRGSEL4_Val|macro|DACC_TRIGR_TRGSEL0_TRGSEL4_Val
DECL|DACC_TRIGR_TRGSEL0_TRGSEL4|macro|DACC_TRIGR_TRGSEL0_TRGSEL4
DECL|DACC_TRIGR_TRGSEL0_TRGSEL5_Val|macro|DACC_TRIGR_TRGSEL0_TRGSEL5_Val
DECL|DACC_TRIGR_TRGSEL0_TRGSEL5|macro|DACC_TRIGR_TRGSEL0_TRGSEL5
DECL|DACC_TRIGR_TRGSEL0_TRGSEL6_Val|macro|DACC_TRIGR_TRGSEL0_TRGSEL6_Val
DECL|DACC_TRIGR_TRGSEL0_TRGSEL6|macro|DACC_TRIGR_TRGSEL0_TRGSEL6
DECL|DACC_TRIGR_TRGSEL0_TRGSEL7_Val|macro|DACC_TRIGR_TRGSEL0_TRGSEL7_Val
DECL|DACC_TRIGR_TRGSEL0_TRGSEL7|macro|DACC_TRIGR_TRGSEL0_TRGSEL7
DECL|DACC_TRIGR_TRGSEL0|macro|DACC_TRIGR_TRGSEL0
DECL|DACC_TRIGR_TRGSEL1_Msk|macro|DACC_TRIGR_TRGSEL1_Msk
DECL|DACC_TRIGR_TRGSEL1_Pos|macro|DACC_TRIGR_TRGSEL1_Pos
DECL|DACC_TRIGR_TRGSEL1_TRGSEL0_Val|macro|DACC_TRIGR_TRGSEL1_TRGSEL0_Val
DECL|DACC_TRIGR_TRGSEL1_TRGSEL0|macro|DACC_TRIGR_TRGSEL1_TRGSEL0
DECL|DACC_TRIGR_TRGSEL1_TRGSEL1_Val|macro|DACC_TRIGR_TRGSEL1_TRGSEL1_Val
DECL|DACC_TRIGR_TRGSEL1_TRGSEL1|macro|DACC_TRIGR_TRGSEL1_TRGSEL1
DECL|DACC_TRIGR_TRGSEL1_TRGSEL2_Val|macro|DACC_TRIGR_TRGSEL1_TRGSEL2_Val
DECL|DACC_TRIGR_TRGSEL1_TRGSEL2|macro|DACC_TRIGR_TRGSEL1_TRGSEL2
DECL|DACC_TRIGR_TRGSEL1_TRGSEL3_Val|macro|DACC_TRIGR_TRGSEL1_TRGSEL3_Val
DECL|DACC_TRIGR_TRGSEL1_TRGSEL3|macro|DACC_TRIGR_TRGSEL1_TRGSEL3
DECL|DACC_TRIGR_TRGSEL1_TRGSEL4_Val|macro|DACC_TRIGR_TRGSEL1_TRGSEL4_Val
DECL|DACC_TRIGR_TRGSEL1_TRGSEL4|macro|DACC_TRIGR_TRGSEL1_TRGSEL4
DECL|DACC_TRIGR_TRGSEL1_TRGSEL5_Val|macro|DACC_TRIGR_TRGSEL1_TRGSEL5_Val
DECL|DACC_TRIGR_TRGSEL1_TRGSEL5|macro|DACC_TRIGR_TRGSEL1_TRGSEL5
DECL|DACC_TRIGR_TRGSEL1_TRGSEL6_Val|macro|DACC_TRIGR_TRGSEL1_TRGSEL6_Val
DECL|DACC_TRIGR_TRGSEL1_TRGSEL6|macro|DACC_TRIGR_TRGSEL1_TRGSEL6
DECL|DACC_TRIGR_TRGSEL1_TRGSEL7_Val|macro|DACC_TRIGR_TRGSEL1_TRGSEL7_Val
DECL|DACC_TRIGR_TRGSEL1_TRGSEL7|macro|DACC_TRIGR_TRGSEL1_TRGSEL7
DECL|DACC_TRIGR_TRGSEL1|macro|DACC_TRIGR_TRGSEL1
DECL|DACC_TRIGR_Type|typedef|} DACC_TRIGR_Type;
DECL|DACC_TRIGR|member|__IO DACC_TRIGR_Type DACC_TRIGR; /**< Offset: 0x08 (R/W 32) Trigger Register */
DECL|DACC_TRIGR|member|__IO uint32_t DACC_TRIGR; /**< (DACC Offset: 0x08) Trigger Register */
DECL|DACC_WPMR_MASK|macro|DACC_WPMR_MASK
DECL|DACC_WPMR_Msk|macro|DACC_WPMR_Msk
DECL|DACC_WPMR_OFFSET|macro|DACC_WPMR_OFFSET
DECL|DACC_WPMR_Type|typedef|} DACC_WPMR_Type;
DECL|DACC_WPMR_WPEN_Msk|macro|DACC_WPMR_WPEN_Msk
DECL|DACC_WPMR_WPEN_Pos|macro|DACC_WPMR_WPEN_Pos
DECL|DACC_WPMR_WPEN|macro|DACC_WPMR_WPEN
DECL|DACC_WPMR_WPKEY_Msk|macro|DACC_WPMR_WPKEY_Msk
DECL|DACC_WPMR_WPKEY_PASSWD_Val|macro|DACC_WPMR_WPKEY_PASSWD_Val
DECL|DACC_WPMR_WPKEY_PASSWD|macro|DACC_WPMR_WPKEY_PASSWD
DECL|DACC_WPMR_WPKEY_Pos|macro|DACC_WPMR_WPKEY_Pos
DECL|DACC_WPMR_WPKEY|macro|DACC_WPMR_WPKEY
DECL|DACC_WPMR|member|__IO DACC_WPMR_Type DACC_WPMR; /**< Offset: 0xE4 (R/W 32) Write Protection Mode Register */
DECL|DACC_WPMR|member|__IO uint32_t DACC_WPMR; /**< (DACC Offset: 0xE4) Write Protection Mode Register */
DECL|DACC_WPSR_MASK|macro|DACC_WPSR_MASK
DECL|DACC_WPSR_Msk|macro|DACC_WPSR_Msk
DECL|DACC_WPSR_OFFSET|macro|DACC_WPSR_OFFSET
DECL|DACC_WPSR_Type|typedef|} DACC_WPSR_Type;
DECL|DACC_WPSR_WPVSRC_Msk|macro|DACC_WPSR_WPVSRC_Msk
DECL|DACC_WPSR_WPVSRC_Pos|macro|DACC_WPSR_WPVSRC_Pos
DECL|DACC_WPSR_WPVSRC|macro|DACC_WPSR_WPVSRC
DECL|DACC_WPSR_WPVS_Msk|macro|DACC_WPSR_WPVS_Msk
DECL|DACC_WPSR_WPVS_Pos|macro|DACC_WPSR_WPVS_Pos
DECL|DACC_WPSR_WPVS|macro|DACC_WPSR_WPVS
DECL|DACC_WPSR|member|__I DACC_WPSR_Type DACC_WPSR; /**< Offset: 0xE8 (R/ 32) Write Protection Status Register */
DECL|DACC_WPSR|member|__I uint32_t DACC_WPSR; /**< (DACC Offset: 0xE8) Write Protection Status Register */
DECL|DACRDY0|member|uint32_t DACRDY0:1; /**< bit: 8 DAC Ready Flag */
DECL|DACRDY1|member|uint32_t DACRDY1:1; /**< bit: 9 DAC Ready Flag */
DECL|DACRDY|member|uint32_t DACRDY:2; /**< bit: 8..9 DAC Ready Flag */
DECL|DATA0|member|uint32_t DATA0:16; /**< bit: 0..15 Data to Convert for channel 0 */
DECL|DATA1|member|uint32_t DATA1:16; /**< bit: 16..31 Data to Convert for channel 1 */
DECL|DIFF|member|uint32_t DIFF:1; /**< bit: 23 Differential Mode */
DECL|Dacc|typedef|} Dacc;
DECL|Dacc|typedef|} Dacc;
DECL|EOC0|member|uint32_t EOC0:1; /**< bit: 4 End of Conversion Interrupt Disable of channel 0 */
DECL|EOC0|member|uint32_t EOC0:1; /**< bit: 4 End of Conversion Interrupt Enable of channel 0 */
DECL|EOC0|member|uint32_t EOC0:1; /**< bit: 4 End of Conversion Interrupt Flag of channel 0 */
DECL|EOC0|member|uint32_t EOC0:1; /**< bit: 4 End of Conversion Interrupt Mask of channel 0 */
DECL|EOC1|member|uint32_t EOC1:1; /**< bit: 5 End of Conversion Interrupt Disable of channel 1 */
DECL|EOC1|member|uint32_t EOC1:1; /**< bit: 5 End of Conversion Interrupt Enable of channel 1 */
DECL|EOC1|member|uint32_t EOC1:1; /**< bit: 5 End of Conversion Interrupt Flag of channel 1 */
DECL|EOC1|member|uint32_t EOC1:1; /**< bit: 5 End of Conversion Interrupt Mask of channel 1 */
DECL|EOC|member|uint32_t EOC:2; /**< bit: 4..5 End of Conversion Interrupt Disable of channel x */
DECL|EOC|member|uint32_t EOC:2; /**< bit: 4..5 End of Conversion Interrupt Enable of channel x */
DECL|EOC|member|uint32_t EOC:2; /**< bit: 4..5 End of Conversion Interrupt Flag of channel x */
DECL|EOC|member|uint32_t EOC:2; /**< bit: 4..5 End of Conversion Interrupt Mask of channel x */
DECL|IBCTLCH0|member|uint32_t IBCTLCH0:2; /**< bit: 0..1 Analog Output Current Control */
DECL|IBCTLCH1|member|uint32_t IBCTLCH1:2; /**< bit: 2..3 Analog Output Current Control */
DECL|MAXS0|member|uint32_t MAXS0:1; /**< bit: 0 Max Speed Mode for Channel 0 */
DECL|MAXS1|member|uint32_t MAXS1:1; /**< bit: 1 Max Speed Mode for Channel 1 */
DECL|OSR0|member|uint32_t OSR0:3; /**< bit: 16..18 Over Sampling Ratio of Channel 0 */
DECL|OSR1|member|uint32_t OSR1:3; /**< bit: 20..22 Over Sampling Ratio of Channel 1 */
DECL|PRESCALER|member|uint32_t PRESCALER:4; /**< bit: 24..27 Peripheral Clock to DAC Clock Ratio */
DECL|REV_DACC|macro|REV_DACC
DECL|Reserved1|member|RoReg8 Reserved1[0x4];
DECL|Reserved1|member|__I uint32_t Reserved1[1];
DECL|Reserved2|member|RoReg8 Reserved2[0x60];
DECL|Reserved2|member|__I uint32_t Reserved2[24];
DECL|Reserved3|member|RoReg8 Reserved3[0x4C];
DECL|Reserved3|member|__I uint32_t Reserved3[19];
DECL|SWRST|member|uint32_t SWRST:1; /**< bit: 0 Software Reset */
DECL|TRGEN0|member|uint32_t TRGEN0:1; /**< bit: 0 Trigger Enable of Channel 0 */
DECL|TRGEN1|member|uint32_t TRGEN1:1; /**< bit: 1 Trigger Enable of Channel 1 */
DECL|TRGEN|member|uint32_t TRGEN:2; /**< bit: 0..1 Trigger Enable of Channel x */
DECL|TRGSEL0|member|uint32_t TRGSEL0:3; /**< bit: 4..6 Trigger Selection of Channel 0 */
DECL|TRGSEL1|member|uint32_t TRGSEL1:3; /**< bit: 8..10 Trigger Selection of Channel 1 */
DECL|TXRDY0|member|uint32_t TXRDY0:1; /**< bit: 0 Transmit Ready Interrupt Disable of channel 0 */
DECL|TXRDY0|member|uint32_t TXRDY0:1; /**< bit: 0 Transmit Ready Interrupt Enable of channel 0 */
DECL|TXRDY0|member|uint32_t TXRDY0:1; /**< bit: 0 Transmit Ready Interrupt Flag of channel 0 */
DECL|TXRDY0|member|uint32_t TXRDY0:1; /**< bit: 0 Transmit Ready Interrupt Mask of channel 0 */
DECL|TXRDY1|member|uint32_t TXRDY1:1; /**< bit: 1 Transmit Ready Interrupt Disable of channel 1 */
DECL|TXRDY1|member|uint32_t TXRDY1:1; /**< bit: 1 Transmit Ready Interrupt Enable of channel 1 */
DECL|TXRDY1|member|uint32_t TXRDY1:1; /**< bit: 1 Transmit Ready Interrupt Flag of channel 1 */
DECL|TXRDY1|member|uint32_t TXRDY1:1; /**< bit: 1 Transmit Ready Interrupt Mask of channel 1 */
DECL|TXRDY|member|uint32_t TXRDY:2; /**< bit: 0..1 Transmit Ready Interrupt Disable of channel x */
DECL|TXRDY|member|uint32_t TXRDY:2; /**< bit: 0..1 Transmit Ready Interrupt Enable of channel x */
DECL|TXRDY|member|uint32_t TXRDY:2; /**< bit: 0..1 Transmit Ready Interrupt Flag of channel x */
DECL|TXRDY|member|uint32_t TXRDY:2; /**< bit: 0..1 Transmit Ready Interrupt Mask of channel x */
DECL|WORD|member|uint32_t WORD:1; /**< bit: 4 Word Transfer Mode */
DECL|WPEN|member|uint32_t WPEN:1; /**< bit: 0 Write Protection Enable */
DECL|WPKEY|member|uint32_t WPKEY:24; /**< bit: 8..31 Write Protect Key */
DECL|WPVSRC|member|uint32_t WPVSRC:8; /**< bit: 8..15 Write Protection Violation Source */
DECL|WPVS|member|uint32_t WPVS:1; /**< bit: 0 Write Protection Violation Status */
DECL|ZERO|member|uint32_t ZERO:1; /**< bit: 5 Must always be written to 0. */
DECL|_SAME70_DACC_COMPONENT_H_|macro|_SAME70_DACC_COMPONENT_H_
DECL|_SAME70_DACC_COMPONENT_|macro|_SAME70_DACC_COMPONENT_
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
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :17; /**< bit: 6..22 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 19 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :22; /**< bit: 10..31 Reserved */
DECL|uint32_t|member|uint32_t :22; /**< bit: 10..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :28; /**< bit: 4..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :30; /**< bit: 2..31 Reserved */
DECL|uint32_t|member|uint32_t :30; /**< bit: 2..31 Reserved */
DECL|uint32_t|member|uint32_t :30; /**< bit: 2..31 Reserved */
DECL|uint32_t|member|uint32_t :30; /**< bit: 2..31 Reserved */
DECL|uint32_t|member|uint32_t :30; /**< bit: 2..31 Reserved */
DECL|uint32_t|member|uint32_t :31; /**< bit: 1..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 11..15 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 2..7 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 2..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :9; /**< bit: 23..31 Reserved */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
