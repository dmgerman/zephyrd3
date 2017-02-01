DECL|CKG|member|uint32_t CKG:2; /**< bit: 6..7 Receive Clock Gating Selection */
DECL|CKG|member|uint32_t CKG:2; /**< bit: 6..7 Transmit Clock Gating Selection */
DECL|CKI|member|uint32_t CKI:1; /**< bit: 5 Receive Clock Inversion */
DECL|CKI|member|uint32_t CKI:1; /**< bit: 5 Transmit Clock Inversion */
DECL|CKO|member|uint32_t CKO:3; /**< bit: 2..4 Receive Clock Output Mode Selection */
DECL|CKO|member|uint32_t CKO:3; /**< bit: 2..4 Transmit Clock Output Mode Selection */
DECL|CKS|member|uint32_t CKS:2; /**< bit: 0..1 Receive Clock Selection */
DECL|CKS|member|uint32_t CKS:2; /**< bit: 0..1 Transmit Clock Selection */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|CP0|member|uint32_t CP0:16; /**< bit: 0..15 Receive Compare Data 0 */
DECL|CP0|member|uint32_t CP0:1; /**< bit: 8 Compare 0 */
DECL|CP0|member|uint32_t CP0:1; /**< bit: 8 Compare 0 Interrupt Disable */
DECL|CP0|member|uint32_t CP0:1; /**< bit: 8 Compare 0 Interrupt Enable */
DECL|CP0|member|uint32_t CP0:1; /**< bit: 8 Compare 0 Interrupt Mask */
DECL|CP1|member|uint32_t CP1:16; /**< bit: 0..15 Receive Compare Data 1 */
DECL|CP1|member|uint32_t CP1:1; /**< bit: 9 Compare 1 */
DECL|CP1|member|uint32_t CP1:1; /**< bit: 9 Compare 1 Interrupt Disable */
DECL|CP1|member|uint32_t CP1:1; /**< bit: 9 Compare 1 Interrupt Enable */
DECL|CP1|member|uint32_t CP1:1; /**< bit: 9 Compare 1 Interrupt Mask */
DECL|DATDEF|member|uint32_t DATDEF:1; /**< bit: 5 Data Default Value */
DECL|DATLEN|member|uint32_t DATLEN:5; /**< bit: 0..4 Data Length */
DECL|DATLEN|member|uint32_t DATLEN:5; /**< bit: 0..4 Data Length */
DECL|DATNB|member|uint32_t DATNB:4; /**< bit: 8..11 Data Number per Frame */
DECL|DATNB|member|uint32_t DATNB:4; /**< bit: 8..11 Data Number per Frame */
DECL|DIV|member|uint32_t DIV:12; /**< bit: 0..11 Clock Divider */
DECL|FSDEN|member|uint32_t FSDEN:1; /**< bit: 23 Frame Sync Data Enable */
DECL|FSEDGE|member|uint32_t FSEDGE:1; /**< bit: 24 Frame Sync Edge Detection */
DECL|FSEDGE|member|uint32_t FSEDGE:1; /**< bit: 24 Frame Sync Edge Detection */
DECL|FSLEN_EXT|member|uint32_t FSLEN_EXT:4; /**< bit: 28..31 FSLEN Field Extension */
DECL|FSLEN_EXT|member|uint32_t FSLEN_EXT:4; /**< bit: 28..31 FSLEN Field Extension */
DECL|FSLEN|member|uint32_t FSLEN:4; /**< bit: 16..19 Receive Frame Sync Length */
DECL|FSLEN|member|uint32_t FSLEN:4; /**< bit: 16..19 Transmit Frame Sync Length */
DECL|FSOS|member|uint32_t FSOS:3; /**< bit: 20..22 Receive Frame Sync Output Selection */
DECL|FSOS|member|uint32_t FSOS:3; /**< bit: 20..22 Transmit Frame Sync Output Selection */
DECL|LOOP|member|uint32_t LOOP:1; /**< bit: 5 Loop Mode */
DECL|MSBF|member|uint32_t MSBF:1; /**< bit: 7 Most Significant Bit First */
DECL|MSBF|member|uint32_t MSBF:1; /**< bit: 7 Most Significant Bit First */
DECL|OVRUN|member|uint32_t OVRUN:1; /**< bit: 5 Receive Overrun */
DECL|OVRUN|member|uint32_t OVRUN:1; /**< bit: 5 Receive Overrun Interrupt Disable */
DECL|OVRUN|member|uint32_t OVRUN:1; /**< bit: 5 Receive Overrun Interrupt Enable */
DECL|OVRUN|member|uint32_t OVRUN:1; /**< bit: 5 Receive Overrun Interrupt Mask */
DECL|PERIOD|member|uint32_t PERIOD:8; /**< bit: 24..31 Receive Period Divider Selection */
DECL|PERIOD|member|uint32_t PERIOD:8; /**< bit: 24..31 Transmit Period Divider Selection */
DECL|RDAT|member|uint32_t RDAT:32; /**< bit: 0..31 Receive Data */
DECL|REV_SSC|macro|REV_SSC
DECL|RSDAT|member|uint32_t RSDAT:16; /**< bit: 0..15 Receive Synchronization Data */
DECL|RXDIS|member|uint32_t RXDIS:1; /**< bit: 1 Receive Disable */
DECL|RXEN|member|uint32_t RXEN:1; /**< bit: 0 Receive Enable */
DECL|RXEN|member|uint32_t RXEN:1; /**< bit: 17 Receive Enable */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 4 Receive Ready */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 4 Receive Ready Interrupt Disable */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 4 Receive Ready Interrupt Enable */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 4 Receive Ready Interrupt Mask */
DECL|RXSYN|member|uint32_t RXSYN:1; /**< bit: 11 Receive Sync */
DECL|RXSYN|member|uint32_t RXSYN:1; /**< bit: 11 Rx Sync Interrupt Enable */
DECL|RXSYN|member|uint32_t RXSYN:1; /**< bit: 11 Rx Sync Interrupt Enable */
DECL|RXSYN|member|uint32_t RXSYN:1; /**< bit: 11 Rx Sync Interrupt Mask */
DECL|Reserved1|member|RoReg8 Reserved1[0x8];
DECL|Reserved1|member|__I uint32_t Reserved1[2];
DECL|Reserved2|member|RoReg8 Reserved2[0x8];
DECL|Reserved2|member|__I uint32_t Reserved2[2];
DECL|Reserved3|member|RoReg8 Reserved3[0x94];
DECL|Reserved3|member|__I uint32_t Reserved3[37];
DECL|SSC_6078|macro|SSC_6078
DECL|SSC_CMR_DIV_Msk|macro|SSC_CMR_DIV_Msk
DECL|SSC_CMR_DIV_Pos|macro|SSC_CMR_DIV_Pos
DECL|SSC_CMR_DIV|macro|SSC_CMR_DIV
DECL|SSC_CMR_MASK|macro|SSC_CMR_MASK
DECL|SSC_CMR_Msk|macro|SSC_CMR_Msk
DECL|SSC_CMR_OFFSET|macro|SSC_CMR_OFFSET
DECL|SSC_CMR_Type|typedef|} SSC_CMR_Type;
DECL|SSC_CMR|member|__IO SSC_CMR_Type SSC_CMR; /**< Offset: 0x04 (R/W 32) Clock Mode Register */
DECL|SSC_CMR|member|__IO uint32_t SSC_CMR; /**< (SSC Offset: 0x04) Clock Mode Register */
DECL|SSC_CR_MASK|macro|SSC_CR_MASK
DECL|SSC_CR_Msk|macro|SSC_CR_Msk
DECL|SSC_CR_OFFSET|macro|SSC_CR_OFFSET
DECL|SSC_CR_RXDIS_Msk|macro|SSC_CR_RXDIS_Msk
DECL|SSC_CR_RXDIS_Pos|macro|SSC_CR_RXDIS_Pos
DECL|SSC_CR_RXDIS|macro|SSC_CR_RXDIS
DECL|SSC_CR_RXEN_Msk|macro|SSC_CR_RXEN_Msk
DECL|SSC_CR_RXEN_Pos|macro|SSC_CR_RXEN_Pos
DECL|SSC_CR_RXEN|macro|SSC_CR_RXEN
DECL|SSC_CR_SWRST_Msk|macro|SSC_CR_SWRST_Msk
DECL|SSC_CR_SWRST_Pos|macro|SSC_CR_SWRST_Pos
DECL|SSC_CR_SWRST|macro|SSC_CR_SWRST
DECL|SSC_CR_TXDIS_Msk|macro|SSC_CR_TXDIS_Msk
DECL|SSC_CR_TXDIS_Pos|macro|SSC_CR_TXDIS_Pos
DECL|SSC_CR_TXDIS|macro|SSC_CR_TXDIS
DECL|SSC_CR_TXEN_Msk|macro|SSC_CR_TXEN_Msk
DECL|SSC_CR_TXEN_Pos|macro|SSC_CR_TXEN_Pos
DECL|SSC_CR_TXEN|macro|SSC_CR_TXEN
DECL|SSC_CR_Type|typedef|} SSC_CR_Type;
DECL|SSC_CR|member|__O SSC_CR_Type SSC_CR; /**< Offset: 0x00 ( /W 32) Control Register */
DECL|SSC_CR|member|__O uint32_t SSC_CR; /**< (SSC Offset: 0x00) Control Register */
DECL|SSC_IDR_CP0_Msk|macro|SSC_IDR_CP0_Msk
DECL|SSC_IDR_CP0_Pos|macro|SSC_IDR_CP0_Pos
DECL|SSC_IDR_CP0|macro|SSC_IDR_CP0
DECL|SSC_IDR_CP1_Msk|macro|SSC_IDR_CP1_Msk
DECL|SSC_IDR_CP1_Pos|macro|SSC_IDR_CP1_Pos
DECL|SSC_IDR_CP1|macro|SSC_IDR_CP1
DECL|SSC_IDR_MASK|macro|SSC_IDR_MASK
DECL|SSC_IDR_Msk|macro|SSC_IDR_Msk
DECL|SSC_IDR_OFFSET|macro|SSC_IDR_OFFSET
DECL|SSC_IDR_OVRUN_Msk|macro|SSC_IDR_OVRUN_Msk
DECL|SSC_IDR_OVRUN_Pos|macro|SSC_IDR_OVRUN_Pos
DECL|SSC_IDR_OVRUN|macro|SSC_IDR_OVRUN
DECL|SSC_IDR_RXRDY_Msk|macro|SSC_IDR_RXRDY_Msk
DECL|SSC_IDR_RXRDY_Pos|macro|SSC_IDR_RXRDY_Pos
DECL|SSC_IDR_RXRDY|macro|SSC_IDR_RXRDY
DECL|SSC_IDR_RXSYN_Msk|macro|SSC_IDR_RXSYN_Msk
DECL|SSC_IDR_RXSYN_Pos|macro|SSC_IDR_RXSYN_Pos
DECL|SSC_IDR_RXSYN|macro|SSC_IDR_RXSYN
DECL|SSC_IDR_TXEMPTY_Msk|macro|SSC_IDR_TXEMPTY_Msk
DECL|SSC_IDR_TXEMPTY_Pos|macro|SSC_IDR_TXEMPTY_Pos
DECL|SSC_IDR_TXEMPTY|macro|SSC_IDR_TXEMPTY
DECL|SSC_IDR_TXRDY_Msk|macro|SSC_IDR_TXRDY_Msk
DECL|SSC_IDR_TXRDY_Pos|macro|SSC_IDR_TXRDY_Pos
DECL|SSC_IDR_TXRDY|macro|SSC_IDR_TXRDY
DECL|SSC_IDR_TXSYN_Msk|macro|SSC_IDR_TXSYN_Msk
DECL|SSC_IDR_TXSYN_Pos|macro|SSC_IDR_TXSYN_Pos
DECL|SSC_IDR_TXSYN|macro|SSC_IDR_TXSYN
DECL|SSC_IDR_Type|typedef|} SSC_IDR_Type;
DECL|SSC_IDR|member|__O SSC_IDR_Type SSC_IDR; /**< Offset: 0x48 ( /W 32) Interrupt Disable Register */
DECL|SSC_IDR|member|__O uint32_t SSC_IDR; /**< (SSC Offset: 0x48) Interrupt Disable Register */
DECL|SSC_IER_CP0_Msk|macro|SSC_IER_CP0_Msk
DECL|SSC_IER_CP0_Pos|macro|SSC_IER_CP0_Pos
DECL|SSC_IER_CP0|macro|SSC_IER_CP0
DECL|SSC_IER_CP1_Msk|macro|SSC_IER_CP1_Msk
DECL|SSC_IER_CP1_Pos|macro|SSC_IER_CP1_Pos
DECL|SSC_IER_CP1|macro|SSC_IER_CP1
DECL|SSC_IER_MASK|macro|SSC_IER_MASK
DECL|SSC_IER_Msk|macro|SSC_IER_Msk
DECL|SSC_IER_OFFSET|macro|SSC_IER_OFFSET
DECL|SSC_IER_OVRUN_Msk|macro|SSC_IER_OVRUN_Msk
DECL|SSC_IER_OVRUN_Pos|macro|SSC_IER_OVRUN_Pos
DECL|SSC_IER_OVRUN|macro|SSC_IER_OVRUN
DECL|SSC_IER_RXRDY_Msk|macro|SSC_IER_RXRDY_Msk
DECL|SSC_IER_RXRDY_Pos|macro|SSC_IER_RXRDY_Pos
DECL|SSC_IER_RXRDY|macro|SSC_IER_RXRDY
DECL|SSC_IER_RXSYN_Msk|macro|SSC_IER_RXSYN_Msk
DECL|SSC_IER_RXSYN_Pos|macro|SSC_IER_RXSYN_Pos
DECL|SSC_IER_RXSYN|macro|SSC_IER_RXSYN
DECL|SSC_IER_TXEMPTY_Msk|macro|SSC_IER_TXEMPTY_Msk
DECL|SSC_IER_TXEMPTY_Pos|macro|SSC_IER_TXEMPTY_Pos
DECL|SSC_IER_TXEMPTY|macro|SSC_IER_TXEMPTY
DECL|SSC_IER_TXRDY_Msk|macro|SSC_IER_TXRDY_Msk
DECL|SSC_IER_TXRDY_Pos|macro|SSC_IER_TXRDY_Pos
DECL|SSC_IER_TXRDY|macro|SSC_IER_TXRDY
DECL|SSC_IER_TXSYN_Msk|macro|SSC_IER_TXSYN_Msk
DECL|SSC_IER_TXSYN_Pos|macro|SSC_IER_TXSYN_Pos
DECL|SSC_IER_TXSYN|macro|SSC_IER_TXSYN
DECL|SSC_IER_Type|typedef|} SSC_IER_Type;
DECL|SSC_IER|member|__O SSC_IER_Type SSC_IER; /**< Offset: 0x44 ( /W 32) Interrupt Enable Register */
DECL|SSC_IER|member|__O uint32_t SSC_IER; /**< (SSC Offset: 0x44) Interrupt Enable Register */
DECL|SSC_IMR_CP0_Msk|macro|SSC_IMR_CP0_Msk
DECL|SSC_IMR_CP0_Pos|macro|SSC_IMR_CP0_Pos
DECL|SSC_IMR_CP0|macro|SSC_IMR_CP0
DECL|SSC_IMR_CP1_Msk|macro|SSC_IMR_CP1_Msk
DECL|SSC_IMR_CP1_Pos|macro|SSC_IMR_CP1_Pos
DECL|SSC_IMR_CP1|macro|SSC_IMR_CP1
DECL|SSC_IMR_MASK|macro|SSC_IMR_MASK
DECL|SSC_IMR_Msk|macro|SSC_IMR_Msk
DECL|SSC_IMR_OFFSET|macro|SSC_IMR_OFFSET
DECL|SSC_IMR_OVRUN_Msk|macro|SSC_IMR_OVRUN_Msk
DECL|SSC_IMR_OVRUN_Pos|macro|SSC_IMR_OVRUN_Pos
DECL|SSC_IMR_OVRUN|macro|SSC_IMR_OVRUN
DECL|SSC_IMR_RXRDY_Msk|macro|SSC_IMR_RXRDY_Msk
DECL|SSC_IMR_RXRDY_Pos|macro|SSC_IMR_RXRDY_Pos
DECL|SSC_IMR_RXRDY|macro|SSC_IMR_RXRDY
DECL|SSC_IMR_RXSYN_Msk|macro|SSC_IMR_RXSYN_Msk
DECL|SSC_IMR_RXSYN_Pos|macro|SSC_IMR_RXSYN_Pos
DECL|SSC_IMR_RXSYN|macro|SSC_IMR_RXSYN
DECL|SSC_IMR_TXEMPTY_Msk|macro|SSC_IMR_TXEMPTY_Msk
DECL|SSC_IMR_TXEMPTY_Pos|macro|SSC_IMR_TXEMPTY_Pos
DECL|SSC_IMR_TXEMPTY|macro|SSC_IMR_TXEMPTY
DECL|SSC_IMR_TXRDY_Msk|macro|SSC_IMR_TXRDY_Msk
DECL|SSC_IMR_TXRDY_Pos|macro|SSC_IMR_TXRDY_Pos
DECL|SSC_IMR_TXRDY|macro|SSC_IMR_TXRDY
DECL|SSC_IMR_TXSYN_Msk|macro|SSC_IMR_TXSYN_Msk
DECL|SSC_IMR_TXSYN_Pos|macro|SSC_IMR_TXSYN_Pos
DECL|SSC_IMR_TXSYN|macro|SSC_IMR_TXSYN
DECL|SSC_IMR_Type|typedef|} SSC_IMR_Type;
DECL|SSC_IMR|member|__I SSC_IMR_Type SSC_IMR; /**< Offset: 0x4C (R/ 32) Interrupt Mask Register */
DECL|SSC_IMR|member|__I uint32_t SSC_IMR; /**< (SSC Offset: 0x4C) Interrupt Mask Register */
DECL|SSC_RC0R_CP0_Msk|macro|SSC_RC0R_CP0_Msk
DECL|SSC_RC0R_CP0_Pos|macro|SSC_RC0R_CP0_Pos
DECL|SSC_RC0R_CP0|macro|SSC_RC0R_CP0
DECL|SSC_RC0R_MASK|macro|SSC_RC0R_MASK
DECL|SSC_RC0R_Msk|macro|SSC_RC0R_Msk
DECL|SSC_RC0R_OFFSET|macro|SSC_RC0R_OFFSET
DECL|SSC_RC0R_Type|typedef|} SSC_RC0R_Type;
DECL|SSC_RC0R|member|__IO SSC_RC0R_Type SSC_RC0R; /**< Offset: 0x38 (R/W 32) Receive Compare 0 Register */
DECL|SSC_RC0R|member|__IO uint32_t SSC_RC0R; /**< (SSC Offset: 0x38) Receive Compare 0 Register */
DECL|SSC_RC1R_CP1_Msk|macro|SSC_RC1R_CP1_Msk
DECL|SSC_RC1R_CP1_Pos|macro|SSC_RC1R_CP1_Pos
DECL|SSC_RC1R_CP1|macro|SSC_RC1R_CP1
DECL|SSC_RC1R_MASK|macro|SSC_RC1R_MASK
DECL|SSC_RC1R_Msk|macro|SSC_RC1R_Msk
DECL|SSC_RC1R_OFFSET|macro|SSC_RC1R_OFFSET
DECL|SSC_RC1R_Type|typedef|} SSC_RC1R_Type;
DECL|SSC_RC1R|member|__IO SSC_RC1R_Type SSC_RC1R; /**< Offset: 0x3C (R/W 32) Receive Compare 1 Register */
DECL|SSC_RC1R|member|__IO uint32_t SSC_RC1R; /**< (SSC Offset: 0x3C) Receive Compare 1 Register */
DECL|SSC_RCMR_CKG_CONTINUOUS_Val|macro|SSC_RCMR_CKG_CONTINUOUS_Val
DECL|SSC_RCMR_CKG_CONTINUOUS|macro|SSC_RCMR_CKG_CONTINUOUS
DECL|SSC_RCMR_CKG_EN_RF_HIGH_Val|macro|SSC_RCMR_CKG_EN_RF_HIGH_Val
DECL|SSC_RCMR_CKG_EN_RF_HIGH|macro|SSC_RCMR_CKG_EN_RF_HIGH
DECL|SSC_RCMR_CKG_EN_RF_LOW_Val|macro|SSC_RCMR_CKG_EN_RF_LOW_Val
DECL|SSC_RCMR_CKG_EN_RF_LOW|macro|SSC_RCMR_CKG_EN_RF_LOW
DECL|SSC_RCMR_CKG_Msk|macro|SSC_RCMR_CKG_Msk
DECL|SSC_RCMR_CKG_Pos|macro|SSC_RCMR_CKG_Pos
DECL|SSC_RCMR_CKG|macro|SSC_RCMR_CKG
DECL|SSC_RCMR_CKI_Msk|macro|SSC_RCMR_CKI_Msk
DECL|SSC_RCMR_CKI_Pos|macro|SSC_RCMR_CKI_Pos
DECL|SSC_RCMR_CKI|macro|SSC_RCMR_CKI
DECL|SSC_RCMR_CKO_CONTINUOUS_Val|macro|SSC_RCMR_CKO_CONTINUOUS_Val
DECL|SSC_RCMR_CKO_CONTINUOUS|macro|SSC_RCMR_CKO_CONTINUOUS
DECL|SSC_RCMR_CKO_Msk|macro|SSC_RCMR_CKO_Msk
DECL|SSC_RCMR_CKO_NONE_Val|macro|SSC_RCMR_CKO_NONE_Val
DECL|SSC_RCMR_CKO_NONE|macro|SSC_RCMR_CKO_NONE
DECL|SSC_RCMR_CKO_Pos|macro|SSC_RCMR_CKO_Pos
DECL|SSC_RCMR_CKO_TRANSFER_Val|macro|SSC_RCMR_CKO_TRANSFER_Val
DECL|SSC_RCMR_CKO_TRANSFER|macro|SSC_RCMR_CKO_TRANSFER
DECL|SSC_RCMR_CKO|macro|SSC_RCMR_CKO
DECL|SSC_RCMR_CKS_MCK_Val|macro|SSC_RCMR_CKS_MCK_Val
DECL|SSC_RCMR_CKS_MCK|macro|SSC_RCMR_CKS_MCK
DECL|SSC_RCMR_CKS_Msk|macro|SSC_RCMR_CKS_Msk
DECL|SSC_RCMR_CKS_Pos|macro|SSC_RCMR_CKS_Pos
DECL|SSC_RCMR_CKS_RK_Val|macro|SSC_RCMR_CKS_RK_Val
DECL|SSC_RCMR_CKS_RK|macro|SSC_RCMR_CKS_RK
DECL|SSC_RCMR_CKS_TK_Val|macro|SSC_RCMR_CKS_TK_Val
DECL|SSC_RCMR_CKS_TK|macro|SSC_RCMR_CKS_TK
DECL|SSC_RCMR_CKS|macro|SSC_RCMR_CKS
DECL|SSC_RCMR_MASK|macro|SSC_RCMR_MASK
DECL|SSC_RCMR_Msk|macro|SSC_RCMR_Msk
DECL|SSC_RCMR_OFFSET|macro|SSC_RCMR_OFFSET
DECL|SSC_RCMR_PERIOD_Msk|macro|SSC_RCMR_PERIOD_Msk
DECL|SSC_RCMR_PERIOD_Pos|macro|SSC_RCMR_PERIOD_Pos
DECL|SSC_RCMR_PERIOD|macro|SSC_RCMR_PERIOD
DECL|SSC_RCMR_START_CMP_0_Val|macro|SSC_RCMR_START_CMP_0_Val
DECL|SSC_RCMR_START_CMP_0|macro|SSC_RCMR_START_CMP_0
DECL|SSC_RCMR_START_CONTINUOUS_Val|macro|SSC_RCMR_START_CONTINUOUS_Val
DECL|SSC_RCMR_START_CONTINUOUS|macro|SSC_RCMR_START_CONTINUOUS
DECL|SSC_RCMR_START_Msk|macro|SSC_RCMR_START_Msk
DECL|SSC_RCMR_START_Pos|macro|SSC_RCMR_START_Pos
DECL|SSC_RCMR_START_RF_EDGE_Val|macro|SSC_RCMR_START_RF_EDGE_Val
DECL|SSC_RCMR_START_RF_EDGE|macro|SSC_RCMR_START_RF_EDGE
DECL|SSC_RCMR_START_RF_FALLING_Val|macro|SSC_RCMR_START_RF_FALLING_Val
DECL|SSC_RCMR_START_RF_FALLING|macro|SSC_RCMR_START_RF_FALLING
DECL|SSC_RCMR_START_RF_HIGH_Val|macro|SSC_RCMR_START_RF_HIGH_Val
DECL|SSC_RCMR_START_RF_HIGH|macro|SSC_RCMR_START_RF_HIGH
DECL|SSC_RCMR_START_RF_LEVEL_Val|macro|SSC_RCMR_START_RF_LEVEL_Val
DECL|SSC_RCMR_START_RF_LEVEL|macro|SSC_RCMR_START_RF_LEVEL
DECL|SSC_RCMR_START_RF_LOW_Val|macro|SSC_RCMR_START_RF_LOW_Val
DECL|SSC_RCMR_START_RF_LOW|macro|SSC_RCMR_START_RF_LOW
DECL|SSC_RCMR_START_RF_RISING_Val|macro|SSC_RCMR_START_RF_RISING_Val
DECL|SSC_RCMR_START_RF_RISING|macro|SSC_RCMR_START_RF_RISING
DECL|SSC_RCMR_START_TRANSMIT_Val|macro|SSC_RCMR_START_TRANSMIT_Val
DECL|SSC_RCMR_START_TRANSMIT|macro|SSC_RCMR_START_TRANSMIT
DECL|SSC_RCMR_START|macro|SSC_RCMR_START
DECL|SSC_RCMR_STOP_Msk|macro|SSC_RCMR_STOP_Msk
DECL|SSC_RCMR_STOP_Pos|macro|SSC_RCMR_STOP_Pos
DECL|SSC_RCMR_STOP|macro|SSC_RCMR_STOP
DECL|SSC_RCMR_STTDLY_Msk|macro|SSC_RCMR_STTDLY_Msk
DECL|SSC_RCMR_STTDLY_Pos|macro|SSC_RCMR_STTDLY_Pos
DECL|SSC_RCMR_STTDLY|macro|SSC_RCMR_STTDLY
DECL|SSC_RCMR_Type|typedef|} SSC_RCMR_Type;
DECL|SSC_RCMR|member|__IO SSC_RCMR_Type SSC_RCMR; /**< Offset: 0x10 (R/W 32) Receive Clock Mode Register */
DECL|SSC_RCMR|member|__IO uint32_t SSC_RCMR; /**< (SSC Offset: 0x10) Receive Clock Mode Register */
DECL|SSC_RFMR_DATLEN_Msk|macro|SSC_RFMR_DATLEN_Msk
DECL|SSC_RFMR_DATLEN_Pos|macro|SSC_RFMR_DATLEN_Pos
DECL|SSC_RFMR_DATLEN|macro|SSC_RFMR_DATLEN
DECL|SSC_RFMR_DATNB_Msk|macro|SSC_RFMR_DATNB_Msk
DECL|SSC_RFMR_DATNB_Pos|macro|SSC_RFMR_DATNB_Pos
DECL|SSC_RFMR_DATNB|macro|SSC_RFMR_DATNB
DECL|SSC_RFMR_FSEDGE_Msk|macro|SSC_RFMR_FSEDGE_Msk
DECL|SSC_RFMR_FSEDGE_NEGATIVE_Val|macro|SSC_RFMR_FSEDGE_NEGATIVE_Val
DECL|SSC_RFMR_FSEDGE_NEGATIVE|macro|SSC_RFMR_FSEDGE_NEGATIVE
DECL|SSC_RFMR_FSEDGE_POSITIVE_Val|macro|SSC_RFMR_FSEDGE_POSITIVE_Val
DECL|SSC_RFMR_FSEDGE_POSITIVE|macro|SSC_RFMR_FSEDGE_POSITIVE
DECL|SSC_RFMR_FSEDGE_Pos|macro|SSC_RFMR_FSEDGE_Pos
DECL|SSC_RFMR_FSEDGE|macro|SSC_RFMR_FSEDGE
DECL|SSC_RFMR_FSLEN_EXT_Msk|macro|SSC_RFMR_FSLEN_EXT_Msk
DECL|SSC_RFMR_FSLEN_EXT_Pos|macro|SSC_RFMR_FSLEN_EXT_Pos
DECL|SSC_RFMR_FSLEN_EXT|macro|SSC_RFMR_FSLEN_EXT
DECL|SSC_RFMR_FSLEN_Msk|macro|SSC_RFMR_FSLEN_Msk
DECL|SSC_RFMR_FSLEN_Pos|macro|SSC_RFMR_FSLEN_Pos
DECL|SSC_RFMR_FSLEN|macro|SSC_RFMR_FSLEN
DECL|SSC_RFMR_FSOS_HIGH_Val|macro|SSC_RFMR_FSOS_HIGH_Val
DECL|SSC_RFMR_FSOS_HIGH|macro|SSC_RFMR_FSOS_HIGH
DECL|SSC_RFMR_FSOS_LOW_Val|macro|SSC_RFMR_FSOS_LOW_Val
DECL|SSC_RFMR_FSOS_LOW|macro|SSC_RFMR_FSOS_LOW
DECL|SSC_RFMR_FSOS_Msk|macro|SSC_RFMR_FSOS_Msk
DECL|SSC_RFMR_FSOS_NEGATIVE_Val|macro|SSC_RFMR_FSOS_NEGATIVE_Val
DECL|SSC_RFMR_FSOS_NEGATIVE|macro|SSC_RFMR_FSOS_NEGATIVE
DECL|SSC_RFMR_FSOS_NONE_Val|macro|SSC_RFMR_FSOS_NONE_Val
DECL|SSC_RFMR_FSOS_NONE|macro|SSC_RFMR_FSOS_NONE
DECL|SSC_RFMR_FSOS_POSITIVE_Val|macro|SSC_RFMR_FSOS_POSITIVE_Val
DECL|SSC_RFMR_FSOS_POSITIVE|macro|SSC_RFMR_FSOS_POSITIVE
DECL|SSC_RFMR_FSOS_Pos|macro|SSC_RFMR_FSOS_Pos
DECL|SSC_RFMR_FSOS_TOGGLING_Val|macro|SSC_RFMR_FSOS_TOGGLING_Val
DECL|SSC_RFMR_FSOS_TOGGLING|macro|SSC_RFMR_FSOS_TOGGLING
DECL|SSC_RFMR_FSOS|macro|SSC_RFMR_FSOS
DECL|SSC_RFMR_LOOP_Msk|macro|SSC_RFMR_LOOP_Msk
DECL|SSC_RFMR_LOOP_Pos|macro|SSC_RFMR_LOOP_Pos
DECL|SSC_RFMR_LOOP|macro|SSC_RFMR_LOOP
DECL|SSC_RFMR_MASK|macro|SSC_RFMR_MASK
DECL|SSC_RFMR_MSBF_Msk|macro|SSC_RFMR_MSBF_Msk
DECL|SSC_RFMR_MSBF_Pos|macro|SSC_RFMR_MSBF_Pos
DECL|SSC_RFMR_MSBF|macro|SSC_RFMR_MSBF
DECL|SSC_RFMR_Msk|macro|SSC_RFMR_Msk
DECL|SSC_RFMR_OFFSET|macro|SSC_RFMR_OFFSET
DECL|SSC_RFMR_Type|typedef|} SSC_RFMR_Type;
DECL|SSC_RFMR|member|__IO SSC_RFMR_Type SSC_RFMR; /**< Offset: 0x14 (R/W 32) Receive Frame Mode Register */
DECL|SSC_RFMR|member|__IO uint32_t SSC_RFMR; /**< (SSC Offset: 0x14) Receive Frame Mode Register */
DECL|SSC_RHR_MASK|macro|SSC_RHR_MASK
DECL|SSC_RHR_Msk|macro|SSC_RHR_Msk
DECL|SSC_RHR_OFFSET|macro|SSC_RHR_OFFSET
DECL|SSC_RHR_RDAT_Msk|macro|SSC_RHR_RDAT_Msk
DECL|SSC_RHR_RDAT_Pos|macro|SSC_RHR_RDAT_Pos
DECL|SSC_RHR_RDAT|macro|SSC_RHR_RDAT
DECL|SSC_RHR_Type|typedef|} SSC_RHR_Type;
DECL|SSC_RHR|member|__I SSC_RHR_Type SSC_RHR; /**< Offset: 0x20 (R/ 32) Receive Holding Register */
DECL|SSC_RHR|member|__I uint32_t SSC_RHR; /**< (SSC Offset: 0x20) Receive Holding Register */
DECL|SSC_RSHR_MASK|macro|SSC_RSHR_MASK
DECL|SSC_RSHR_Msk|macro|SSC_RSHR_Msk
DECL|SSC_RSHR_OFFSET|macro|SSC_RSHR_OFFSET
DECL|SSC_RSHR_RSDAT_Msk|macro|SSC_RSHR_RSDAT_Msk
DECL|SSC_RSHR_RSDAT_Pos|macro|SSC_RSHR_RSDAT_Pos
DECL|SSC_RSHR_RSDAT|macro|SSC_RSHR_RSDAT
DECL|SSC_RSHR_Type|typedef|} SSC_RSHR_Type;
DECL|SSC_RSHR|member|__I SSC_RSHR_Type SSC_RSHR; /**< Offset: 0x30 (R/ 32) Receive Sync. Holding Register */
DECL|SSC_RSHR|member|__I uint32_t SSC_RSHR; /**< (SSC Offset: 0x30) Receive Sync. Holding Register */
DECL|SSC_SR_CP0_Msk|macro|SSC_SR_CP0_Msk
DECL|SSC_SR_CP0_Pos|macro|SSC_SR_CP0_Pos
DECL|SSC_SR_CP0|macro|SSC_SR_CP0
DECL|SSC_SR_CP1_Msk|macro|SSC_SR_CP1_Msk
DECL|SSC_SR_CP1_Pos|macro|SSC_SR_CP1_Pos
DECL|SSC_SR_CP1|macro|SSC_SR_CP1
DECL|SSC_SR_MASK|macro|SSC_SR_MASK
DECL|SSC_SR_Msk|macro|SSC_SR_Msk
DECL|SSC_SR_OFFSET|macro|SSC_SR_OFFSET
DECL|SSC_SR_OVRUN_Msk|macro|SSC_SR_OVRUN_Msk
DECL|SSC_SR_OVRUN_Pos|macro|SSC_SR_OVRUN_Pos
DECL|SSC_SR_OVRUN|macro|SSC_SR_OVRUN
DECL|SSC_SR_RXEN_Msk|macro|SSC_SR_RXEN_Msk
DECL|SSC_SR_RXEN_Pos|macro|SSC_SR_RXEN_Pos
DECL|SSC_SR_RXEN|macro|SSC_SR_RXEN
DECL|SSC_SR_RXRDY_Msk|macro|SSC_SR_RXRDY_Msk
DECL|SSC_SR_RXRDY_Pos|macro|SSC_SR_RXRDY_Pos
DECL|SSC_SR_RXRDY|macro|SSC_SR_RXRDY
DECL|SSC_SR_RXSYN_Msk|macro|SSC_SR_RXSYN_Msk
DECL|SSC_SR_RXSYN_Pos|macro|SSC_SR_RXSYN_Pos
DECL|SSC_SR_RXSYN|macro|SSC_SR_RXSYN
DECL|SSC_SR_TXEMPTY_Msk|macro|SSC_SR_TXEMPTY_Msk
DECL|SSC_SR_TXEMPTY_Pos|macro|SSC_SR_TXEMPTY_Pos
DECL|SSC_SR_TXEMPTY|macro|SSC_SR_TXEMPTY
DECL|SSC_SR_TXEN_Msk|macro|SSC_SR_TXEN_Msk
DECL|SSC_SR_TXEN_Pos|macro|SSC_SR_TXEN_Pos
DECL|SSC_SR_TXEN|macro|SSC_SR_TXEN
DECL|SSC_SR_TXRDY_Msk|macro|SSC_SR_TXRDY_Msk
DECL|SSC_SR_TXRDY_Pos|macro|SSC_SR_TXRDY_Pos
DECL|SSC_SR_TXRDY|macro|SSC_SR_TXRDY
DECL|SSC_SR_TXSYN_Msk|macro|SSC_SR_TXSYN_Msk
DECL|SSC_SR_TXSYN_Pos|macro|SSC_SR_TXSYN_Pos
DECL|SSC_SR_TXSYN|macro|SSC_SR_TXSYN
DECL|SSC_SR_Type|typedef|} SSC_SR_Type;
DECL|SSC_SR|member|__I SSC_SR_Type SSC_SR; /**< Offset: 0x40 (R/ 32) Status Register */
DECL|SSC_SR|member|__I uint32_t SSC_SR; /**< (SSC Offset: 0x40) Status Register */
DECL|SSC_TCMR_CKG_CONTINUOUS_Val|macro|SSC_TCMR_CKG_CONTINUOUS_Val
DECL|SSC_TCMR_CKG_CONTINUOUS|macro|SSC_TCMR_CKG_CONTINUOUS
DECL|SSC_TCMR_CKG_EN_TF_HIGH_Val|macro|SSC_TCMR_CKG_EN_TF_HIGH_Val
DECL|SSC_TCMR_CKG_EN_TF_HIGH|macro|SSC_TCMR_CKG_EN_TF_HIGH
DECL|SSC_TCMR_CKG_EN_TF_LOW_Val|macro|SSC_TCMR_CKG_EN_TF_LOW_Val
DECL|SSC_TCMR_CKG_EN_TF_LOW|macro|SSC_TCMR_CKG_EN_TF_LOW
DECL|SSC_TCMR_CKG_Msk|macro|SSC_TCMR_CKG_Msk
DECL|SSC_TCMR_CKG_Pos|macro|SSC_TCMR_CKG_Pos
DECL|SSC_TCMR_CKG|macro|SSC_TCMR_CKG
DECL|SSC_TCMR_CKI_Msk|macro|SSC_TCMR_CKI_Msk
DECL|SSC_TCMR_CKI_Pos|macro|SSC_TCMR_CKI_Pos
DECL|SSC_TCMR_CKI|macro|SSC_TCMR_CKI
DECL|SSC_TCMR_CKO_CONTINUOUS_Val|macro|SSC_TCMR_CKO_CONTINUOUS_Val
DECL|SSC_TCMR_CKO_CONTINUOUS|macro|SSC_TCMR_CKO_CONTINUOUS
DECL|SSC_TCMR_CKO_Msk|macro|SSC_TCMR_CKO_Msk
DECL|SSC_TCMR_CKO_NONE_Val|macro|SSC_TCMR_CKO_NONE_Val
DECL|SSC_TCMR_CKO_NONE|macro|SSC_TCMR_CKO_NONE
DECL|SSC_TCMR_CKO_Pos|macro|SSC_TCMR_CKO_Pos
DECL|SSC_TCMR_CKO_TRANSFER_Val|macro|SSC_TCMR_CKO_TRANSFER_Val
DECL|SSC_TCMR_CKO_TRANSFER|macro|SSC_TCMR_CKO_TRANSFER
DECL|SSC_TCMR_CKO|macro|SSC_TCMR_CKO
DECL|SSC_TCMR_CKS_MCK_Val|macro|SSC_TCMR_CKS_MCK_Val
DECL|SSC_TCMR_CKS_MCK|macro|SSC_TCMR_CKS_MCK
DECL|SSC_TCMR_CKS_Msk|macro|SSC_TCMR_CKS_Msk
DECL|SSC_TCMR_CKS_Pos|macro|SSC_TCMR_CKS_Pos
DECL|SSC_TCMR_CKS_RK_Val|macro|SSC_TCMR_CKS_RK_Val
DECL|SSC_TCMR_CKS_RK|macro|SSC_TCMR_CKS_RK
DECL|SSC_TCMR_CKS_TK_Val|macro|SSC_TCMR_CKS_TK_Val
DECL|SSC_TCMR_CKS_TK|macro|SSC_TCMR_CKS_TK
DECL|SSC_TCMR_CKS|macro|SSC_TCMR_CKS
DECL|SSC_TCMR_MASK|macro|SSC_TCMR_MASK
DECL|SSC_TCMR_Msk|macro|SSC_TCMR_Msk
DECL|SSC_TCMR_OFFSET|macro|SSC_TCMR_OFFSET
DECL|SSC_TCMR_PERIOD_Msk|macro|SSC_TCMR_PERIOD_Msk
DECL|SSC_TCMR_PERIOD_Pos|macro|SSC_TCMR_PERIOD_Pos
DECL|SSC_TCMR_PERIOD|macro|SSC_TCMR_PERIOD
DECL|SSC_TCMR_START_CONTINUOUS_Val|macro|SSC_TCMR_START_CONTINUOUS_Val
DECL|SSC_TCMR_START_CONTINUOUS|macro|SSC_TCMR_START_CONTINUOUS
DECL|SSC_TCMR_START_Msk|macro|SSC_TCMR_START_Msk
DECL|SSC_TCMR_START_Pos|macro|SSC_TCMR_START_Pos
DECL|SSC_TCMR_START_RECEIVE_Val|macro|SSC_TCMR_START_RECEIVE_Val
DECL|SSC_TCMR_START_RECEIVE|macro|SSC_TCMR_START_RECEIVE
DECL|SSC_TCMR_START_TF_EDGE_Val|macro|SSC_TCMR_START_TF_EDGE_Val
DECL|SSC_TCMR_START_TF_EDGE|macro|SSC_TCMR_START_TF_EDGE
DECL|SSC_TCMR_START_TF_FALLING_Val|macro|SSC_TCMR_START_TF_FALLING_Val
DECL|SSC_TCMR_START_TF_FALLING|macro|SSC_TCMR_START_TF_FALLING
DECL|SSC_TCMR_START_TF_HIGH_Val|macro|SSC_TCMR_START_TF_HIGH_Val
DECL|SSC_TCMR_START_TF_HIGH|macro|SSC_TCMR_START_TF_HIGH
DECL|SSC_TCMR_START_TF_LEVEL_Val|macro|SSC_TCMR_START_TF_LEVEL_Val
DECL|SSC_TCMR_START_TF_LEVEL|macro|SSC_TCMR_START_TF_LEVEL
DECL|SSC_TCMR_START_TF_LOW_Val|macro|SSC_TCMR_START_TF_LOW_Val
DECL|SSC_TCMR_START_TF_LOW|macro|SSC_TCMR_START_TF_LOW
DECL|SSC_TCMR_START_TF_RISING_Val|macro|SSC_TCMR_START_TF_RISING_Val
DECL|SSC_TCMR_START_TF_RISING|macro|SSC_TCMR_START_TF_RISING
DECL|SSC_TCMR_START|macro|SSC_TCMR_START
DECL|SSC_TCMR_STTDLY_Msk|macro|SSC_TCMR_STTDLY_Msk
DECL|SSC_TCMR_STTDLY_Pos|macro|SSC_TCMR_STTDLY_Pos
DECL|SSC_TCMR_STTDLY|macro|SSC_TCMR_STTDLY
DECL|SSC_TCMR_Type|typedef|} SSC_TCMR_Type;
DECL|SSC_TCMR|member|__IO SSC_TCMR_Type SSC_TCMR; /**< Offset: 0x18 (R/W 32) Transmit Clock Mode Register */
DECL|SSC_TCMR|member|__IO uint32_t SSC_TCMR; /**< (SSC Offset: 0x18) Transmit Clock Mode Register */
DECL|SSC_TFMR_DATDEF_Msk|macro|SSC_TFMR_DATDEF_Msk
DECL|SSC_TFMR_DATDEF_Pos|macro|SSC_TFMR_DATDEF_Pos
DECL|SSC_TFMR_DATDEF|macro|SSC_TFMR_DATDEF
DECL|SSC_TFMR_DATLEN_Msk|macro|SSC_TFMR_DATLEN_Msk
DECL|SSC_TFMR_DATLEN_Pos|macro|SSC_TFMR_DATLEN_Pos
DECL|SSC_TFMR_DATLEN|macro|SSC_TFMR_DATLEN
DECL|SSC_TFMR_DATNB_Msk|macro|SSC_TFMR_DATNB_Msk
DECL|SSC_TFMR_DATNB_Pos|macro|SSC_TFMR_DATNB_Pos
DECL|SSC_TFMR_DATNB|macro|SSC_TFMR_DATNB
DECL|SSC_TFMR_FSDEN_Msk|macro|SSC_TFMR_FSDEN_Msk
DECL|SSC_TFMR_FSDEN_Pos|macro|SSC_TFMR_FSDEN_Pos
DECL|SSC_TFMR_FSDEN|macro|SSC_TFMR_FSDEN
DECL|SSC_TFMR_FSEDGE_Msk|macro|SSC_TFMR_FSEDGE_Msk
DECL|SSC_TFMR_FSEDGE_NEGATIVE_Val|macro|SSC_TFMR_FSEDGE_NEGATIVE_Val
DECL|SSC_TFMR_FSEDGE_NEGATIVE|macro|SSC_TFMR_FSEDGE_NEGATIVE
DECL|SSC_TFMR_FSEDGE_POSITIVE_Val|macro|SSC_TFMR_FSEDGE_POSITIVE_Val
DECL|SSC_TFMR_FSEDGE_POSITIVE|macro|SSC_TFMR_FSEDGE_POSITIVE
DECL|SSC_TFMR_FSEDGE_Pos|macro|SSC_TFMR_FSEDGE_Pos
DECL|SSC_TFMR_FSEDGE|macro|SSC_TFMR_FSEDGE
DECL|SSC_TFMR_FSLEN_EXT_Msk|macro|SSC_TFMR_FSLEN_EXT_Msk
DECL|SSC_TFMR_FSLEN_EXT_Pos|macro|SSC_TFMR_FSLEN_EXT_Pos
DECL|SSC_TFMR_FSLEN_EXT|macro|SSC_TFMR_FSLEN_EXT
DECL|SSC_TFMR_FSLEN_Msk|macro|SSC_TFMR_FSLEN_Msk
DECL|SSC_TFMR_FSLEN_Pos|macro|SSC_TFMR_FSLEN_Pos
DECL|SSC_TFMR_FSLEN|macro|SSC_TFMR_FSLEN
DECL|SSC_TFMR_FSOS_HIGH_Val|macro|SSC_TFMR_FSOS_HIGH_Val
DECL|SSC_TFMR_FSOS_HIGH|macro|SSC_TFMR_FSOS_HIGH
DECL|SSC_TFMR_FSOS_LOW_Val|macro|SSC_TFMR_FSOS_LOW_Val
DECL|SSC_TFMR_FSOS_LOW|macro|SSC_TFMR_FSOS_LOW
DECL|SSC_TFMR_FSOS_Msk|macro|SSC_TFMR_FSOS_Msk
DECL|SSC_TFMR_FSOS_NEGATIVE_Val|macro|SSC_TFMR_FSOS_NEGATIVE_Val
DECL|SSC_TFMR_FSOS_NEGATIVE|macro|SSC_TFMR_FSOS_NEGATIVE
DECL|SSC_TFMR_FSOS_NONE_Val|macro|SSC_TFMR_FSOS_NONE_Val
DECL|SSC_TFMR_FSOS_NONE|macro|SSC_TFMR_FSOS_NONE
DECL|SSC_TFMR_FSOS_POSITIVE_Val|macro|SSC_TFMR_FSOS_POSITIVE_Val
DECL|SSC_TFMR_FSOS_POSITIVE|macro|SSC_TFMR_FSOS_POSITIVE
DECL|SSC_TFMR_FSOS_Pos|macro|SSC_TFMR_FSOS_Pos
DECL|SSC_TFMR_FSOS_TOGGLING_Val|macro|SSC_TFMR_FSOS_TOGGLING_Val
DECL|SSC_TFMR_FSOS_TOGGLING|macro|SSC_TFMR_FSOS_TOGGLING
DECL|SSC_TFMR_FSOS|macro|SSC_TFMR_FSOS
DECL|SSC_TFMR_MASK|macro|SSC_TFMR_MASK
DECL|SSC_TFMR_MSBF_Msk|macro|SSC_TFMR_MSBF_Msk
DECL|SSC_TFMR_MSBF_Pos|macro|SSC_TFMR_MSBF_Pos
DECL|SSC_TFMR_MSBF|macro|SSC_TFMR_MSBF
DECL|SSC_TFMR_Msk|macro|SSC_TFMR_Msk
DECL|SSC_TFMR_OFFSET|macro|SSC_TFMR_OFFSET
DECL|SSC_TFMR_Type|typedef|} SSC_TFMR_Type;
DECL|SSC_TFMR|member|__IO SSC_TFMR_Type SSC_TFMR; /**< Offset: 0x1C (R/W 32) Transmit Frame Mode Register */
DECL|SSC_TFMR|member|__IO uint32_t SSC_TFMR; /**< (SSC Offset: 0x1C) Transmit Frame Mode Register */
DECL|SSC_THR_MASK|macro|SSC_THR_MASK
DECL|SSC_THR_Msk|macro|SSC_THR_Msk
DECL|SSC_THR_OFFSET|macro|SSC_THR_OFFSET
DECL|SSC_THR_TDAT_Msk|macro|SSC_THR_TDAT_Msk
DECL|SSC_THR_TDAT_Pos|macro|SSC_THR_TDAT_Pos
DECL|SSC_THR_TDAT|macro|SSC_THR_TDAT
DECL|SSC_THR_Type|typedef|} SSC_THR_Type;
DECL|SSC_THR|member|__O SSC_THR_Type SSC_THR; /**< Offset: 0x24 ( /W 32) Transmit Holding Register */
DECL|SSC_THR|member|__O uint32_t SSC_THR; /**< (SSC Offset: 0x24) Transmit Holding Register */
DECL|SSC_TSHR_MASK|macro|SSC_TSHR_MASK
DECL|SSC_TSHR_Msk|macro|SSC_TSHR_Msk
DECL|SSC_TSHR_OFFSET|macro|SSC_TSHR_OFFSET
DECL|SSC_TSHR_TSDAT_Msk|macro|SSC_TSHR_TSDAT_Msk
DECL|SSC_TSHR_TSDAT_Pos|macro|SSC_TSHR_TSDAT_Pos
DECL|SSC_TSHR_TSDAT|macro|SSC_TSHR_TSDAT
DECL|SSC_TSHR_Type|typedef|} SSC_TSHR_Type;
DECL|SSC_TSHR|member|__IO SSC_TSHR_Type SSC_TSHR; /**< Offset: 0x34 (R/W 32) Transmit Sync. Holding Register */
DECL|SSC_TSHR|member|__IO uint32_t SSC_TSHR; /**< (SSC Offset: 0x34) Transmit Sync. Holding Register */
DECL|SSC_WPMR_MASK|macro|SSC_WPMR_MASK
DECL|SSC_WPMR_Msk|macro|SSC_WPMR_Msk
DECL|SSC_WPMR_OFFSET|macro|SSC_WPMR_OFFSET
DECL|SSC_WPMR_Type|typedef|} SSC_WPMR_Type;
DECL|SSC_WPMR_WPEN_Msk|macro|SSC_WPMR_WPEN_Msk
DECL|SSC_WPMR_WPEN_Pos|macro|SSC_WPMR_WPEN_Pos
DECL|SSC_WPMR_WPEN|macro|SSC_WPMR_WPEN
DECL|SSC_WPMR_WPKEY_Msk|macro|SSC_WPMR_WPKEY_Msk
DECL|SSC_WPMR_WPKEY_PASSWD_Val|macro|SSC_WPMR_WPKEY_PASSWD_Val
DECL|SSC_WPMR_WPKEY_PASSWD|macro|SSC_WPMR_WPKEY_PASSWD
DECL|SSC_WPMR_WPKEY_Pos|macro|SSC_WPMR_WPKEY_Pos
DECL|SSC_WPMR_WPKEY|macro|SSC_WPMR_WPKEY
DECL|SSC_WPMR|member|__IO SSC_WPMR_Type SSC_WPMR; /**< Offset: 0xE4 (R/W 32) Write Protection Mode Register */
DECL|SSC_WPMR|member|__IO uint32_t SSC_WPMR; /**< (SSC Offset: 0xE4) Write Protection Mode Register */
DECL|SSC_WPSR_MASK|macro|SSC_WPSR_MASK
DECL|SSC_WPSR_Msk|macro|SSC_WPSR_Msk
DECL|SSC_WPSR_OFFSET|macro|SSC_WPSR_OFFSET
DECL|SSC_WPSR_Type|typedef|} SSC_WPSR_Type;
DECL|SSC_WPSR_WPVSRC_Msk|macro|SSC_WPSR_WPVSRC_Msk
DECL|SSC_WPSR_WPVSRC_Pos|macro|SSC_WPSR_WPVSRC_Pos
DECL|SSC_WPSR_WPVSRC|macro|SSC_WPSR_WPVSRC
DECL|SSC_WPSR_WPVS_Msk|macro|SSC_WPSR_WPVS_Msk
DECL|SSC_WPSR_WPVS_Pos|macro|SSC_WPSR_WPVS_Pos
DECL|SSC_WPSR_WPVS|macro|SSC_WPSR_WPVS
DECL|SSC_WPSR|member|__I SSC_WPSR_Type SSC_WPSR; /**< Offset: 0xE8 (R/ 32) Write Protection Status Register */
DECL|SSC_WPSR|member|__I uint32_t SSC_WPSR; /**< (SSC Offset: 0xE8) Write Protection Status Register */
DECL|START|member|uint32_t START:4; /**< bit: 8..11 Receive Start Selection */
DECL|START|member|uint32_t START:4; /**< bit: 8..11 Transmit Start Selection */
DECL|STOP|member|uint32_t STOP:1; /**< bit: 12 Receive Stop Selection */
DECL|STTDLY|member|uint32_t STTDLY:8; /**< bit: 16..23 Receive Start Delay */
DECL|STTDLY|member|uint32_t STTDLY:8; /**< bit: 16..23 Transmit Start Delay */
DECL|SWRST|member|uint32_t SWRST:1; /**< bit: 15 Software Reset */
DECL|Ssc|typedef|} Ssc;
DECL|Ssc|typedef|} Ssc;
DECL|TDAT|member|uint32_t TDAT:32; /**< bit: 0..31 Transmit Data */
DECL|TSDAT|member|uint32_t TSDAT:16; /**< bit: 0..15 Transmit Synchronization Data */
DECL|TXDIS|member|uint32_t TXDIS:1; /**< bit: 9 Transmit Disable */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 1 Transmit Empty */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 1 Transmit Empty Interrupt Disable */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 1 Transmit Empty Interrupt Enable */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 1 Transmit Empty Interrupt Mask */
DECL|TXEN|member|uint32_t TXEN:1; /**< bit: 16 Transmit Enable */
DECL|TXEN|member|uint32_t TXEN:1; /**< bit: 8 Transmit Enable */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 0 Transmit Ready */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 0 Transmit Ready Interrupt Disable */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 0 Transmit Ready Interrupt Enable */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 0 Transmit Ready Interrupt Mask */
DECL|TXSYN|member|uint32_t TXSYN:1; /**< bit: 10 Transmit Sync */
DECL|TXSYN|member|uint32_t TXSYN:1; /**< bit: 10 Tx Sync Interrupt Enable */
DECL|TXSYN|member|uint32_t TXSYN:1; /**< bit: 10 Tx Sync Interrupt Enable */
DECL|TXSYN|member|uint32_t TXSYN:1; /**< bit: 10 Tx Sync Interrupt Mask */
DECL|WPEN|member|uint32_t WPEN:1; /**< bit: 0 Write Protection Enable */
DECL|WPKEY|member|uint32_t WPKEY:24; /**< bit: 8..31 Write Protection Key */
DECL|WPVSRC|member|uint32_t WPVSRC:16; /**< bit: 8..23 Write Protect Violation Source */
DECL|WPVS|member|uint32_t WPVS:1; /**< bit: 0 Write Protection Violation Status */
DECL|_SAME70_SSC_COMPONENT_H_|macro|_SAME70_SSC_COMPONENT_H_
DECL|_SAME70_SSC_COMPONENT_|macro|_SAME70_SSC_COMPONENT_
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
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :14; /**< bit: 18..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 23 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 6 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 6 Reserved */
DECL|uint32_t|member|uint32_t :20; /**< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :20; /**< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :20; /**< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :20; /**< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 6..7 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 6..7 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 6..7 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 6..7 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 13..15 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 25..27 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 25..27 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 10..14 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 2..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
