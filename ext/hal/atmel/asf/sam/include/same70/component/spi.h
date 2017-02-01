DECL|BITS|member|uint32_t BITS:4; /**< bit: 4..7 Bits Per Transfer */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|CPOL|member|uint32_t CPOL:1; /**< bit: 0 Clock Polarity */
DECL|CSAAT|member|uint32_t CSAAT:1; /**< bit: 3 Chip Select Active After Transfer */
DECL|CSNAAT|member|uint32_t CSNAAT:1; /**< bit: 2 Chip Select Not Active After Transfer (Ignored if CSAAT = 1) */
DECL|DLYBCS|member|uint32_t DLYBCS:8; /**< bit: 24..31 Delay Between Chip Selects */
DECL|DLYBCT|member|uint32_t DLYBCT:8; /**< bit: 24..31 Delay Between Consecutive Transfers */
DECL|DLYBS|member|uint32_t DLYBS:8; /**< bit: 16..23 Delay Before SPCK */
DECL|FIFODIS|member|uint32_t FIFODIS:1; /**< bit: 31 FIFO Disable */
DECL|FIFOEN|member|uint32_t FIFOEN:1; /**< bit: 30 FIFO Enable */
DECL|LASTXFER|member|uint32_t LASTXFER:1; /**< bit: 24 Last Transfer */
DECL|LASTXFER|member|uint32_t LASTXFER:1; /**< bit: 24 Last Transfer */
DECL|LLB|member|uint32_t LLB:1; /**< bit: 7 Local Loopback Enable */
DECL|MODFDIS|member|uint32_t MODFDIS:1; /**< bit: 4 Mode Fault Detection */
DECL|MODF|member|uint32_t MODF:1; /**< bit: 2 Mode Fault Error (cleared on read) */
DECL|MODF|member|uint32_t MODF:1; /**< bit: 2 Mode Fault Error Interrupt Disable */
DECL|MODF|member|uint32_t MODF:1; /**< bit: 2 Mode Fault Error Interrupt Enable */
DECL|MODF|member|uint32_t MODF:1; /**< bit: 2 Mode Fault Error Interrupt Mask */
DECL|MSTR|member|uint32_t MSTR:1; /**< bit: 0 Master/Slave Mode */
DECL|NCPHA|member|uint32_t NCPHA:1; /**< bit: 1 Clock Phase */
DECL|NSSR|member|uint32_t NSSR:1; /**< bit: 8 NSS Rising (cleared on read) */
DECL|NSSR|member|uint32_t NSSR:1; /**< bit: 8 NSS Rising Interrupt Disable */
DECL|NSSR|member|uint32_t NSSR:1; /**< bit: 8 NSS Rising Interrupt Enable */
DECL|NSSR|member|uint32_t NSSR:1; /**< bit: 8 NSS Rising Interrupt Mask */
DECL|OVRES|member|uint32_t OVRES:1; /**< bit: 3 Overrun Error Interrupt Disable */
DECL|OVRES|member|uint32_t OVRES:1; /**< bit: 3 Overrun Error Interrupt Enable */
DECL|OVRES|member|uint32_t OVRES:1; /**< bit: 3 Overrun Error Interrupt Mask */
DECL|OVRES|member|uint32_t OVRES:1; /**< bit: 3 Overrun Error Status (cleared on read) */
DECL|PCSDEC|member|uint32_t PCSDEC:1; /**< bit: 2 Chip Select Decode */
DECL|PCS|member|uint32_t PCS:4; /**< bit: 16..19 Peripheral Chip Select */
DECL|PCS|member|uint32_t PCS:4; /**< bit: 16..19 Peripheral Chip Select */
DECL|PCS|member|uint32_t PCS:4; /**< bit: 16..19 Peripheral Chip Select */
DECL|PS|member|uint32_t PS:1; /**< bit: 1 Peripheral Select */
DECL|RDRF|member|uint32_t RDRF:1; /**< bit: 0 Receive Data Register Full (cleared by reading SPI_RDR) */
DECL|RDRF|member|uint32_t RDRF:1; /**< bit: 0 Receive Data Register Full Interrupt Disable */
DECL|RDRF|member|uint32_t RDRF:1; /**< bit: 0 Receive Data Register Full Interrupt Enable */
DECL|RDRF|member|uint32_t RDRF:1; /**< bit: 0 Receive Data Register Full Interrupt Mask */
DECL|RD|member|uint32_t RD:16; /**< bit: 0..15 Receive Data */
DECL|REQCLR|member|uint32_t REQCLR:1; /**< bit: 12 Request to Clear the Comparison Trigger */
DECL|REV_SPI|macro|REV_SPI
DECL|RXFCLR|member|uint32_t RXFCLR:1; /**< bit: 17 Receive FIFO Clear */
DECL|Reserved1|member|RoReg8 Reserved1[0x10];
DECL|Reserved1|member|__I uint32_t Reserved1[4];
DECL|Reserved2|member|RoReg8 Reserved2[0xA4];
DECL|Reserved2|member|__I uint32_t Reserved2[41];
DECL|SCBR|member|uint32_t SCBR:8; /**< bit: 8..15 Serial Clock Bit Rate */
DECL|SPIDIS|member|uint32_t SPIDIS:1; /**< bit: 1 SPI Disable */
DECL|SPIENS|member|uint32_t SPIENS:1; /**< bit: 16 SPI Enable Status */
DECL|SPIEN|member|uint32_t SPIEN:1; /**< bit: 0 SPI Enable */
DECL|SPI_6088|macro|SPI_6088
DECL|SPI_CR_FIFODIS_Msk|macro|SPI_CR_FIFODIS_Msk
DECL|SPI_CR_FIFODIS_Pos|macro|SPI_CR_FIFODIS_Pos
DECL|SPI_CR_FIFODIS|macro|SPI_CR_FIFODIS
DECL|SPI_CR_FIFOEN_Msk|macro|SPI_CR_FIFOEN_Msk
DECL|SPI_CR_FIFOEN_Pos|macro|SPI_CR_FIFOEN_Pos
DECL|SPI_CR_FIFOEN|macro|SPI_CR_FIFOEN
DECL|SPI_CR_LASTXFER_Msk|macro|SPI_CR_LASTXFER_Msk
DECL|SPI_CR_LASTXFER_Pos|macro|SPI_CR_LASTXFER_Pos
DECL|SPI_CR_LASTXFER|macro|SPI_CR_LASTXFER
DECL|SPI_CR_MASK|macro|SPI_CR_MASK
DECL|SPI_CR_Msk|macro|SPI_CR_Msk
DECL|SPI_CR_OFFSET|macro|SPI_CR_OFFSET
DECL|SPI_CR_REQCLR_Msk|macro|SPI_CR_REQCLR_Msk
DECL|SPI_CR_REQCLR_Pos|macro|SPI_CR_REQCLR_Pos
DECL|SPI_CR_REQCLR|macro|SPI_CR_REQCLR
DECL|SPI_CR_RXFCLR_Msk|macro|SPI_CR_RXFCLR_Msk
DECL|SPI_CR_RXFCLR_Pos|macro|SPI_CR_RXFCLR_Pos
DECL|SPI_CR_RXFCLR|macro|SPI_CR_RXFCLR
DECL|SPI_CR_SPIDIS_Msk|macro|SPI_CR_SPIDIS_Msk
DECL|SPI_CR_SPIDIS_Pos|macro|SPI_CR_SPIDIS_Pos
DECL|SPI_CR_SPIDIS|macro|SPI_CR_SPIDIS
DECL|SPI_CR_SPIEN_Msk|macro|SPI_CR_SPIEN_Msk
DECL|SPI_CR_SPIEN_Pos|macro|SPI_CR_SPIEN_Pos
DECL|SPI_CR_SPIEN|macro|SPI_CR_SPIEN
DECL|SPI_CR_SWRST_Msk|macro|SPI_CR_SWRST_Msk
DECL|SPI_CR_SWRST_Pos|macro|SPI_CR_SWRST_Pos
DECL|SPI_CR_SWRST|macro|SPI_CR_SWRST
DECL|SPI_CR_TXFCLR_Msk|macro|SPI_CR_TXFCLR_Msk
DECL|SPI_CR_TXFCLR_Pos|macro|SPI_CR_TXFCLR_Pos
DECL|SPI_CR_TXFCLR|macro|SPI_CR_TXFCLR
DECL|SPI_CR_Type|typedef|} SPI_CR_Type;
DECL|SPI_CR|member|__O SPI_CR_Type SPI_CR; /**< Offset: 0x00 ( /W 32) Control Register */
DECL|SPI_CR|member|__O uint32_t SPI_CR; /**< (SPI Offset: 0x00) Control Register */
DECL|SPI_CSR_BITS_10_BIT_Val|macro|SPI_CSR_BITS_10_BIT_Val
DECL|SPI_CSR_BITS_10_BIT|macro|SPI_CSR_BITS_10_BIT
DECL|SPI_CSR_BITS_11_BIT_Val|macro|SPI_CSR_BITS_11_BIT_Val
DECL|SPI_CSR_BITS_11_BIT|macro|SPI_CSR_BITS_11_BIT
DECL|SPI_CSR_BITS_12_BIT_Val|macro|SPI_CSR_BITS_12_BIT_Val
DECL|SPI_CSR_BITS_12_BIT|macro|SPI_CSR_BITS_12_BIT
DECL|SPI_CSR_BITS_13_BIT_Val|macro|SPI_CSR_BITS_13_BIT_Val
DECL|SPI_CSR_BITS_13_BIT|macro|SPI_CSR_BITS_13_BIT
DECL|SPI_CSR_BITS_14_BIT_Val|macro|SPI_CSR_BITS_14_BIT_Val
DECL|SPI_CSR_BITS_14_BIT|macro|SPI_CSR_BITS_14_BIT
DECL|SPI_CSR_BITS_15_BIT_Val|macro|SPI_CSR_BITS_15_BIT_Val
DECL|SPI_CSR_BITS_15_BIT|macro|SPI_CSR_BITS_15_BIT
DECL|SPI_CSR_BITS_16_BIT_Val|macro|SPI_CSR_BITS_16_BIT_Val
DECL|SPI_CSR_BITS_16_BIT|macro|SPI_CSR_BITS_16_BIT
DECL|SPI_CSR_BITS_8_BIT_Val|macro|SPI_CSR_BITS_8_BIT_Val
DECL|SPI_CSR_BITS_8_BIT|macro|SPI_CSR_BITS_8_BIT
DECL|SPI_CSR_BITS_9_BIT_Val|macro|SPI_CSR_BITS_9_BIT_Val
DECL|SPI_CSR_BITS_9_BIT|macro|SPI_CSR_BITS_9_BIT
DECL|SPI_CSR_BITS_Msk|macro|SPI_CSR_BITS_Msk
DECL|SPI_CSR_BITS_Pos|macro|SPI_CSR_BITS_Pos
DECL|SPI_CSR_BITS|macro|SPI_CSR_BITS
DECL|SPI_CSR_CPOL_Msk|macro|SPI_CSR_CPOL_Msk
DECL|SPI_CSR_CPOL_Pos|macro|SPI_CSR_CPOL_Pos
DECL|SPI_CSR_CPOL|macro|SPI_CSR_CPOL
DECL|SPI_CSR_CSAAT_Msk|macro|SPI_CSR_CSAAT_Msk
DECL|SPI_CSR_CSAAT_Pos|macro|SPI_CSR_CSAAT_Pos
DECL|SPI_CSR_CSAAT|macro|SPI_CSR_CSAAT
DECL|SPI_CSR_CSNAAT_Msk|macro|SPI_CSR_CSNAAT_Msk
DECL|SPI_CSR_CSNAAT_Pos|macro|SPI_CSR_CSNAAT_Pos
DECL|SPI_CSR_CSNAAT|macro|SPI_CSR_CSNAAT
DECL|SPI_CSR_DLYBCT_Msk|macro|SPI_CSR_DLYBCT_Msk
DECL|SPI_CSR_DLYBCT_Pos|macro|SPI_CSR_DLYBCT_Pos
DECL|SPI_CSR_DLYBCT|macro|SPI_CSR_DLYBCT
DECL|SPI_CSR_DLYBS_Msk|macro|SPI_CSR_DLYBS_Msk
DECL|SPI_CSR_DLYBS_Pos|macro|SPI_CSR_DLYBS_Pos
DECL|SPI_CSR_DLYBS|macro|SPI_CSR_DLYBS
DECL|SPI_CSR_MASK|macro|SPI_CSR_MASK
DECL|SPI_CSR_Msk|macro|SPI_CSR_Msk
DECL|SPI_CSR_NCPHA_Msk|macro|SPI_CSR_NCPHA_Msk
DECL|SPI_CSR_NCPHA_Pos|macro|SPI_CSR_NCPHA_Pos
DECL|SPI_CSR_NCPHA|macro|SPI_CSR_NCPHA
DECL|SPI_CSR_OFFSET|macro|SPI_CSR_OFFSET
DECL|SPI_CSR_SCBR_Msk|macro|SPI_CSR_SCBR_Msk
DECL|SPI_CSR_SCBR_Pos|macro|SPI_CSR_SCBR_Pos
DECL|SPI_CSR_SCBR|macro|SPI_CSR_SCBR
DECL|SPI_CSR_Type|typedef|} SPI_CSR_Type;
DECL|SPI_CSR|member|__IO SPI_CSR_Type SPI_CSR[4]; /**< Offset: 0x30 (R/W 32) Chip Select Register 0 */
DECL|SPI_CSR|member|__IO uint32_t SPI_CSR[4]; /**< (SPI Offset: 0x30) Chip Select Register 0 */
DECL|SPI_IDR_MASK|macro|SPI_IDR_MASK
DECL|SPI_IDR_MODF_Msk|macro|SPI_IDR_MODF_Msk
DECL|SPI_IDR_MODF_Pos|macro|SPI_IDR_MODF_Pos
DECL|SPI_IDR_MODF|macro|SPI_IDR_MODF
DECL|SPI_IDR_Msk|macro|SPI_IDR_Msk
DECL|SPI_IDR_NSSR_Msk|macro|SPI_IDR_NSSR_Msk
DECL|SPI_IDR_NSSR_Pos|macro|SPI_IDR_NSSR_Pos
DECL|SPI_IDR_NSSR|macro|SPI_IDR_NSSR
DECL|SPI_IDR_OFFSET|macro|SPI_IDR_OFFSET
DECL|SPI_IDR_OVRES_Msk|macro|SPI_IDR_OVRES_Msk
DECL|SPI_IDR_OVRES_Pos|macro|SPI_IDR_OVRES_Pos
DECL|SPI_IDR_OVRES|macro|SPI_IDR_OVRES
DECL|SPI_IDR_RDRF_Msk|macro|SPI_IDR_RDRF_Msk
DECL|SPI_IDR_RDRF_Pos|macro|SPI_IDR_RDRF_Pos
DECL|SPI_IDR_RDRF|macro|SPI_IDR_RDRF
DECL|SPI_IDR_TDRE_Msk|macro|SPI_IDR_TDRE_Msk
DECL|SPI_IDR_TDRE_Pos|macro|SPI_IDR_TDRE_Pos
DECL|SPI_IDR_TDRE|macro|SPI_IDR_TDRE
DECL|SPI_IDR_TXEMPTY_Msk|macro|SPI_IDR_TXEMPTY_Msk
DECL|SPI_IDR_TXEMPTY_Pos|macro|SPI_IDR_TXEMPTY_Pos
DECL|SPI_IDR_TXEMPTY|macro|SPI_IDR_TXEMPTY
DECL|SPI_IDR_Type|typedef|} SPI_IDR_Type;
DECL|SPI_IDR_UNDES_Msk|macro|SPI_IDR_UNDES_Msk
DECL|SPI_IDR_UNDES_Pos|macro|SPI_IDR_UNDES_Pos
DECL|SPI_IDR_UNDES|macro|SPI_IDR_UNDES
DECL|SPI_IDR|member|__O SPI_IDR_Type SPI_IDR; /**< Offset: 0x18 ( /W 32) Interrupt Disable Register */
DECL|SPI_IDR|member|__O uint32_t SPI_IDR; /**< (SPI Offset: 0x18) Interrupt Disable Register */
DECL|SPI_IER_MASK|macro|SPI_IER_MASK
DECL|SPI_IER_MODF_Msk|macro|SPI_IER_MODF_Msk
DECL|SPI_IER_MODF_Pos|macro|SPI_IER_MODF_Pos
DECL|SPI_IER_MODF|macro|SPI_IER_MODF
DECL|SPI_IER_Msk|macro|SPI_IER_Msk
DECL|SPI_IER_NSSR_Msk|macro|SPI_IER_NSSR_Msk
DECL|SPI_IER_NSSR_Pos|macro|SPI_IER_NSSR_Pos
DECL|SPI_IER_NSSR|macro|SPI_IER_NSSR
DECL|SPI_IER_OFFSET|macro|SPI_IER_OFFSET
DECL|SPI_IER_OVRES_Msk|macro|SPI_IER_OVRES_Msk
DECL|SPI_IER_OVRES_Pos|macro|SPI_IER_OVRES_Pos
DECL|SPI_IER_OVRES|macro|SPI_IER_OVRES
DECL|SPI_IER_RDRF_Msk|macro|SPI_IER_RDRF_Msk
DECL|SPI_IER_RDRF_Pos|macro|SPI_IER_RDRF_Pos
DECL|SPI_IER_RDRF|macro|SPI_IER_RDRF
DECL|SPI_IER_TDRE_Msk|macro|SPI_IER_TDRE_Msk
DECL|SPI_IER_TDRE_Pos|macro|SPI_IER_TDRE_Pos
DECL|SPI_IER_TDRE|macro|SPI_IER_TDRE
DECL|SPI_IER_TXEMPTY_Msk|macro|SPI_IER_TXEMPTY_Msk
DECL|SPI_IER_TXEMPTY_Pos|macro|SPI_IER_TXEMPTY_Pos
DECL|SPI_IER_TXEMPTY|macro|SPI_IER_TXEMPTY
DECL|SPI_IER_Type|typedef|} SPI_IER_Type;
DECL|SPI_IER_UNDES_Msk|macro|SPI_IER_UNDES_Msk
DECL|SPI_IER_UNDES_Pos|macro|SPI_IER_UNDES_Pos
DECL|SPI_IER_UNDES|macro|SPI_IER_UNDES
DECL|SPI_IER|member|__O SPI_IER_Type SPI_IER; /**< Offset: 0x14 ( /W 32) Interrupt Enable Register */
DECL|SPI_IER|member|__O uint32_t SPI_IER; /**< (SPI Offset: 0x14) Interrupt Enable Register */
DECL|SPI_IMR_MASK|macro|SPI_IMR_MASK
DECL|SPI_IMR_MODF_Msk|macro|SPI_IMR_MODF_Msk
DECL|SPI_IMR_MODF_Pos|macro|SPI_IMR_MODF_Pos
DECL|SPI_IMR_MODF|macro|SPI_IMR_MODF
DECL|SPI_IMR_Msk|macro|SPI_IMR_Msk
DECL|SPI_IMR_NSSR_Msk|macro|SPI_IMR_NSSR_Msk
DECL|SPI_IMR_NSSR_Pos|macro|SPI_IMR_NSSR_Pos
DECL|SPI_IMR_NSSR|macro|SPI_IMR_NSSR
DECL|SPI_IMR_OFFSET|macro|SPI_IMR_OFFSET
DECL|SPI_IMR_OVRES_Msk|macro|SPI_IMR_OVRES_Msk
DECL|SPI_IMR_OVRES_Pos|macro|SPI_IMR_OVRES_Pos
DECL|SPI_IMR_OVRES|macro|SPI_IMR_OVRES
DECL|SPI_IMR_RDRF_Msk|macro|SPI_IMR_RDRF_Msk
DECL|SPI_IMR_RDRF_Pos|macro|SPI_IMR_RDRF_Pos
DECL|SPI_IMR_RDRF|macro|SPI_IMR_RDRF
DECL|SPI_IMR_TDRE_Msk|macro|SPI_IMR_TDRE_Msk
DECL|SPI_IMR_TDRE_Pos|macro|SPI_IMR_TDRE_Pos
DECL|SPI_IMR_TDRE|macro|SPI_IMR_TDRE
DECL|SPI_IMR_TXEMPTY_Msk|macro|SPI_IMR_TXEMPTY_Msk
DECL|SPI_IMR_TXEMPTY_Pos|macro|SPI_IMR_TXEMPTY_Pos
DECL|SPI_IMR_TXEMPTY|macro|SPI_IMR_TXEMPTY
DECL|SPI_IMR_Type|typedef|} SPI_IMR_Type;
DECL|SPI_IMR_UNDES_Msk|macro|SPI_IMR_UNDES_Msk
DECL|SPI_IMR_UNDES_Pos|macro|SPI_IMR_UNDES_Pos
DECL|SPI_IMR_UNDES|macro|SPI_IMR_UNDES
DECL|SPI_IMR|member|__I SPI_IMR_Type SPI_IMR; /**< Offset: 0x1C (R/ 32) Interrupt Mask Register */
DECL|SPI_IMR|member|__I uint32_t SPI_IMR; /**< (SPI Offset: 0x1C) Interrupt Mask Register */
DECL|SPI_MR_DLYBCS_Msk|macro|SPI_MR_DLYBCS_Msk
DECL|SPI_MR_DLYBCS_Pos|macro|SPI_MR_DLYBCS_Pos
DECL|SPI_MR_DLYBCS|macro|SPI_MR_DLYBCS
DECL|SPI_MR_LLB_Msk|macro|SPI_MR_LLB_Msk
DECL|SPI_MR_LLB_Pos|macro|SPI_MR_LLB_Pos
DECL|SPI_MR_LLB|macro|SPI_MR_LLB
DECL|SPI_MR_MASK|macro|SPI_MR_MASK
DECL|SPI_MR_MODFDIS_Msk|macro|SPI_MR_MODFDIS_Msk
DECL|SPI_MR_MODFDIS_Pos|macro|SPI_MR_MODFDIS_Pos
DECL|SPI_MR_MODFDIS|macro|SPI_MR_MODFDIS
DECL|SPI_MR_MSTR_Msk|macro|SPI_MR_MSTR_Msk
DECL|SPI_MR_MSTR_Pos|macro|SPI_MR_MSTR_Pos
DECL|SPI_MR_MSTR|macro|SPI_MR_MSTR
DECL|SPI_MR_Msk|macro|SPI_MR_Msk
DECL|SPI_MR_OFFSET|macro|SPI_MR_OFFSET
DECL|SPI_MR_PCSDEC_Msk|macro|SPI_MR_PCSDEC_Msk
DECL|SPI_MR_PCSDEC_Pos|macro|SPI_MR_PCSDEC_Pos
DECL|SPI_MR_PCSDEC|macro|SPI_MR_PCSDEC
DECL|SPI_MR_PCS_Msk|macro|SPI_MR_PCS_Msk
DECL|SPI_MR_PCS_Pos|macro|SPI_MR_PCS_Pos
DECL|SPI_MR_PCS|macro|SPI_MR_PCS
DECL|SPI_MR_PS_Msk|macro|SPI_MR_PS_Msk
DECL|SPI_MR_PS_Pos|macro|SPI_MR_PS_Pos
DECL|SPI_MR_PS|macro|SPI_MR_PS
DECL|SPI_MR_Type|typedef|} SPI_MR_Type;
DECL|SPI_MR_WDRBT_Msk|macro|SPI_MR_WDRBT_Msk
DECL|SPI_MR_WDRBT_Pos|macro|SPI_MR_WDRBT_Pos
DECL|SPI_MR_WDRBT|macro|SPI_MR_WDRBT
DECL|SPI_MR|member|__IO SPI_MR_Type SPI_MR; /**< Offset: 0x04 (R/W 32) Mode Register */
DECL|SPI_MR|member|__IO uint32_t SPI_MR; /**< (SPI Offset: 0x04) Mode Register */
DECL|SPI_RDR_MASK|macro|SPI_RDR_MASK
DECL|SPI_RDR_Msk|macro|SPI_RDR_Msk
DECL|SPI_RDR_OFFSET|macro|SPI_RDR_OFFSET
DECL|SPI_RDR_PCS_Msk|macro|SPI_RDR_PCS_Msk
DECL|SPI_RDR_PCS_Pos|macro|SPI_RDR_PCS_Pos
DECL|SPI_RDR_PCS|macro|SPI_RDR_PCS
DECL|SPI_RDR_RD_Msk|macro|SPI_RDR_RD_Msk
DECL|SPI_RDR_RD_Pos|macro|SPI_RDR_RD_Pos
DECL|SPI_RDR_RD|macro|SPI_RDR_RD
DECL|SPI_RDR_Type|typedef|} SPI_RDR_Type;
DECL|SPI_RDR|member|__I SPI_RDR_Type SPI_RDR; /**< Offset: 0x08 (R/ 32) Receive Data Register */
DECL|SPI_RDR|member|__I uint32_t SPI_RDR; /**< (SPI Offset: 0x08) Receive Data Register */
DECL|SPI_SR_MASK|macro|SPI_SR_MASK
DECL|SPI_SR_MODF_Msk|macro|SPI_SR_MODF_Msk
DECL|SPI_SR_MODF_Pos|macro|SPI_SR_MODF_Pos
DECL|SPI_SR_MODF|macro|SPI_SR_MODF
DECL|SPI_SR_Msk|macro|SPI_SR_Msk
DECL|SPI_SR_NSSR_Msk|macro|SPI_SR_NSSR_Msk
DECL|SPI_SR_NSSR_Pos|macro|SPI_SR_NSSR_Pos
DECL|SPI_SR_NSSR|macro|SPI_SR_NSSR
DECL|SPI_SR_OFFSET|macro|SPI_SR_OFFSET
DECL|SPI_SR_OVRES_Msk|macro|SPI_SR_OVRES_Msk
DECL|SPI_SR_OVRES_Pos|macro|SPI_SR_OVRES_Pos
DECL|SPI_SR_OVRES|macro|SPI_SR_OVRES
DECL|SPI_SR_RDRF_Msk|macro|SPI_SR_RDRF_Msk
DECL|SPI_SR_RDRF_Pos|macro|SPI_SR_RDRF_Pos
DECL|SPI_SR_RDRF|macro|SPI_SR_RDRF
DECL|SPI_SR_SPIENS_Msk|macro|SPI_SR_SPIENS_Msk
DECL|SPI_SR_SPIENS_Pos|macro|SPI_SR_SPIENS_Pos
DECL|SPI_SR_SPIENS|macro|SPI_SR_SPIENS
DECL|SPI_SR_TDRE_Msk|macro|SPI_SR_TDRE_Msk
DECL|SPI_SR_TDRE_Pos|macro|SPI_SR_TDRE_Pos
DECL|SPI_SR_TDRE|macro|SPI_SR_TDRE
DECL|SPI_SR_TXEMPTY_Msk|macro|SPI_SR_TXEMPTY_Msk
DECL|SPI_SR_TXEMPTY_Pos|macro|SPI_SR_TXEMPTY_Pos
DECL|SPI_SR_TXEMPTY|macro|SPI_SR_TXEMPTY
DECL|SPI_SR_Type|typedef|} SPI_SR_Type;
DECL|SPI_SR_UNDES_Msk|macro|SPI_SR_UNDES_Msk
DECL|SPI_SR_UNDES_Pos|macro|SPI_SR_UNDES_Pos
DECL|SPI_SR_UNDES|macro|SPI_SR_UNDES
DECL|SPI_SR|member|__I SPI_SR_Type SPI_SR; /**< Offset: 0x10 (R/ 32) Status Register */
DECL|SPI_SR|member|__I uint32_t SPI_SR; /**< (SPI Offset: 0x10) Status Register */
DECL|SPI_TDR_LASTXFER_Msk|macro|SPI_TDR_LASTXFER_Msk
DECL|SPI_TDR_LASTXFER_Pos|macro|SPI_TDR_LASTXFER_Pos
DECL|SPI_TDR_LASTXFER|macro|SPI_TDR_LASTXFER
DECL|SPI_TDR_MASK|macro|SPI_TDR_MASK
DECL|SPI_TDR_Msk|macro|SPI_TDR_Msk
DECL|SPI_TDR_OFFSET|macro|SPI_TDR_OFFSET
DECL|SPI_TDR_PCS_Msk|macro|SPI_TDR_PCS_Msk
DECL|SPI_TDR_PCS_Pos|macro|SPI_TDR_PCS_Pos
DECL|SPI_TDR_PCS|macro|SPI_TDR_PCS
DECL|SPI_TDR_TD_Msk|macro|SPI_TDR_TD_Msk
DECL|SPI_TDR_TD_Pos|macro|SPI_TDR_TD_Pos
DECL|SPI_TDR_TD|macro|SPI_TDR_TD
DECL|SPI_TDR_Type|typedef|} SPI_TDR_Type;
DECL|SPI_TDR|member|__O SPI_TDR_Type SPI_TDR; /**< Offset: 0x0C ( /W 32) Transmit Data Register */
DECL|SPI_TDR|member|__O uint32_t SPI_TDR; /**< (SPI Offset: 0x0C) Transmit Data Register */
DECL|SPI_WPMR_MASK|macro|SPI_WPMR_MASK
DECL|SPI_WPMR_Msk|macro|SPI_WPMR_Msk
DECL|SPI_WPMR_OFFSET|macro|SPI_WPMR_OFFSET
DECL|SPI_WPMR_Type|typedef|} SPI_WPMR_Type;
DECL|SPI_WPMR_WPEN_Msk|macro|SPI_WPMR_WPEN_Msk
DECL|SPI_WPMR_WPEN_Pos|macro|SPI_WPMR_WPEN_Pos
DECL|SPI_WPMR_WPEN|macro|SPI_WPMR_WPEN
DECL|SPI_WPMR_WPKEY_Msk|macro|SPI_WPMR_WPKEY_Msk
DECL|SPI_WPMR_WPKEY_PASSWD_Val|macro|SPI_WPMR_WPKEY_PASSWD_Val
DECL|SPI_WPMR_WPKEY_PASSWD|macro|SPI_WPMR_WPKEY_PASSWD
DECL|SPI_WPMR_WPKEY_Pos|macro|SPI_WPMR_WPKEY_Pos
DECL|SPI_WPMR_WPKEY|macro|SPI_WPMR_WPKEY
DECL|SPI_WPMR|member|__IO SPI_WPMR_Type SPI_WPMR; /**< Offset: 0xE4 (R/W 32) Write Protection Mode Register */
DECL|SPI_WPMR|member|__IO uint32_t SPI_WPMR; /**< (SPI Offset: 0xE4) Write Protection Mode Register */
DECL|SPI_WPSR_MASK|macro|SPI_WPSR_MASK
DECL|SPI_WPSR_Msk|macro|SPI_WPSR_Msk
DECL|SPI_WPSR_OFFSET|macro|SPI_WPSR_OFFSET
DECL|SPI_WPSR_Type|typedef|} SPI_WPSR_Type;
DECL|SPI_WPSR_WPVSRC_Msk|macro|SPI_WPSR_WPVSRC_Msk
DECL|SPI_WPSR_WPVSRC_Pos|macro|SPI_WPSR_WPVSRC_Pos
DECL|SPI_WPSR_WPVSRC|macro|SPI_WPSR_WPVSRC
DECL|SPI_WPSR_WPVS_Msk|macro|SPI_WPSR_WPVS_Msk
DECL|SPI_WPSR_WPVS_Pos|macro|SPI_WPSR_WPVS_Pos
DECL|SPI_WPSR_WPVS|macro|SPI_WPSR_WPVS
DECL|SPI_WPSR|member|__I SPI_WPSR_Type SPI_WPSR; /**< Offset: 0xE8 (R/ 32) Write Protection Status Register */
DECL|SPI_WPSR|member|__I uint32_t SPI_WPSR; /**< (SPI Offset: 0xE8) Write Protection Status Register */
DECL|SWRST|member|uint32_t SWRST:1; /**< bit: 7 SPI Software Reset */
DECL|Spi|typedef|} Spi;
DECL|Spi|typedef|} Spi;
DECL|TDRE|member|uint32_t TDRE:1; /**< bit: 1 SPI Transmit Data Register Empty Interrupt Disable */
DECL|TDRE|member|uint32_t TDRE:1; /**< bit: 1 SPI Transmit Data Register Empty Interrupt Enable */
DECL|TDRE|member|uint32_t TDRE:1; /**< bit: 1 SPI Transmit Data Register Empty Interrupt Mask */
DECL|TDRE|member|uint32_t TDRE:1; /**< bit: 1 Transmit Data Register Empty (cleared by writing SPI_TDR) */
DECL|TD|member|uint32_t TD:16; /**< bit: 0..15 Transmit Data */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 9 Transmission Registers Empty (cleared by writing SPI_TDR) */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 9 Transmission Registers Empty Disable */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 9 Transmission Registers Empty Enable */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 9 Transmission Registers Empty Mask */
DECL|TXFCLR|member|uint32_t TXFCLR:1; /**< bit: 16 Transmit FIFO Clear */
DECL|UNDES|member|uint32_t UNDES:1; /**< bit: 10 Underrun Error Interrupt Disable */
DECL|UNDES|member|uint32_t UNDES:1; /**< bit: 10 Underrun Error Interrupt Enable */
DECL|UNDES|member|uint32_t UNDES:1; /**< bit: 10 Underrun Error Interrupt Mask */
DECL|UNDES|member|uint32_t UNDES:1; /**< bit: 10 Underrun Error Status (Slave mode only) (cleared on read) */
DECL|WDRBT|member|uint32_t WDRBT:1; /**< bit: 5 Wait Data Read Before Transfer */
DECL|WPEN|member|uint32_t WPEN:1; /**< bit: 0 Write Protection Enable */
DECL|WPKEY|member|uint32_t WPKEY:24; /**< bit: 8..31 Write Protection Key */
DECL|WPVSRC|member|uint32_t WPVSRC:8; /**< bit: 8..15 Write Protection Violation Source */
DECL|WPVS|member|uint32_t WPVS:1; /**< bit: 0 Write Protection Violation Status */
DECL|_SAME70_SPI_COMPONENT_H_|macro|_SAME70_SPI_COMPONENT_H_
DECL|_SAME70_SPI_COMPONENT_|macro|_SAME70_SPI_COMPONENT_
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
DECL|uint32_t|member|uint32_t :12; /**< bit: 20..31 Reserved */
DECL|uint32_t|member|uint32_t :15; /**< bit: 17..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 3 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 6 Reserved */
DECL|uint32_t|member|uint32_t :21; /**< bit: 11..31 Reserved */
DECL|uint32_t|member|uint32_t :21; /**< bit: 11..31 Reserved */
DECL|uint32_t|member|uint32_t :21; /**< bit: 11..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 13..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 4..7 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 4..7 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 4..7 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 4..7 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 8..11 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 11..15 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 2..6 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 25..29 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 18..23 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 8..15 Reserved */
