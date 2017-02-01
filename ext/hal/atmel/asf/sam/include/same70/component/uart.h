DECL|BRSRCCK|member|uint32_t BRSRCCK:1; /**< bit: 12 Baud Rate Source Clock */
DECL|CD|member|uint32_t CD:16; /**< bit: 0..15 Clock Divisor */
DECL|CHMODE|member|uint32_t CHMODE:2; /**< bit: 14..15 Channel Mode */
DECL|CMPMODE|member|uint32_t CMPMODE:1; /**< bit: 12 Comparison Mode */
DECL|CMPPAR|member|uint32_t CMPPAR:1; /**< bit: 14 Compare Parity */
DECL|CMP|member|uint32_t CMP:1; /**< bit: 15 Comparison Match */
DECL|CMP|member|uint32_t CMP:1; /**< bit: 15 Disable Comparison Interrupt */
DECL|CMP|member|uint32_t CMP:1; /**< bit: 15 Enable Comparison Interrupt */
DECL|CMP|member|uint32_t CMP:1; /**< bit: 15 Mask Comparison Interrupt */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|FILTER|member|uint32_t FILTER:1; /**< bit: 4 Receiver Digital Filter */
DECL|FRAME|member|uint32_t FRAME:1; /**< bit: 6 Disable Framing Error Interrupt */
DECL|FRAME|member|uint32_t FRAME:1; /**< bit: 6 Enable Framing Error Interrupt */
DECL|FRAME|member|uint32_t FRAME:1; /**< bit: 6 Framing Error */
DECL|FRAME|member|uint32_t FRAME:1; /**< bit: 6 Mask Framing Error Interrupt */
DECL|OVRE|member|uint32_t OVRE:1; /**< bit: 5 Disable Overrun Error Interrupt */
DECL|OVRE|member|uint32_t OVRE:1; /**< bit: 5 Enable Overrun Error Interrupt */
DECL|OVRE|member|uint32_t OVRE:1; /**< bit: 5 Mask Overrun Error Interrupt */
DECL|OVRE|member|uint32_t OVRE:1; /**< bit: 5 Overrun Error */
DECL|PARE|member|uint32_t PARE:1; /**< bit: 7 Disable Parity Error Interrupt */
DECL|PARE|member|uint32_t PARE:1; /**< bit: 7 Enable Parity Error Interrupt */
DECL|PARE|member|uint32_t PARE:1; /**< bit: 7 Mask Parity Error Interrupt */
DECL|PARE|member|uint32_t PARE:1; /**< bit: 7 Parity Error */
DECL|PAR|member|uint32_t PAR:3; /**< bit: 9..11 Parity Type */
DECL|REQCLR|member|uint32_t REQCLR:1; /**< bit: 12 Request Clear */
DECL|REV_UART|macro|REV_UART
DECL|RSTRX|member|uint32_t RSTRX:1; /**< bit: 2 Reset Receiver */
DECL|RSTSTA|member|uint32_t RSTSTA:1; /**< bit: 8 Reset Status */
DECL|RSTTX|member|uint32_t RSTTX:1; /**< bit: 3 Reset Transmitter */
DECL|RXCHR|member|uint32_t RXCHR:8; /**< bit: 0..7 Received Character */
DECL|RXDIS|member|uint32_t RXDIS:1; /**< bit: 5 Receiver Disable */
DECL|RXEN|member|uint32_t RXEN:1; /**< bit: 4 Receiver Enable */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 0 Disable RXRDY Interrupt */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 0 Enable RXRDY Interrupt */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 0 Mask RXRDY Interrupt */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 0 Receiver Ready */
DECL|Reserved1|member|RoReg8 Reserved1[0xBC];
DECL|Reserved1|member|__I uint32_t Reserved1[47];
DECL|TXCHR|member|uint32_t TXCHR:8; /**< bit: 0..7 Character to be Transmitted */
DECL|TXDIS|member|uint32_t TXDIS:1; /**< bit: 7 Transmitter Disable */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 9 Disable TXEMPTY Interrupt */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 9 Enable TXEMPTY Interrupt */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 9 Mask TXEMPTY Interrupt */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 9 Transmitter Empty */
DECL|TXEN|member|uint32_t TXEN:1; /**< bit: 6 Transmitter Enable */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 1 Disable TXRDY Interrupt */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 1 Disable TXRDY Interrupt */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 1 Enable TXRDY Interrupt */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 1 Transmitter Ready */
DECL|UART_6418|macro|UART_6418
DECL|UART_BRGR_CD_Msk|macro|UART_BRGR_CD_Msk
DECL|UART_BRGR_CD_Pos|macro|UART_BRGR_CD_Pos
DECL|UART_BRGR_CD|macro|UART_BRGR_CD
DECL|UART_BRGR_MASK|macro|UART_BRGR_MASK
DECL|UART_BRGR_Msk|macro|UART_BRGR_Msk
DECL|UART_BRGR_OFFSET|macro|UART_BRGR_OFFSET
DECL|UART_BRGR_Type|typedef|} UART_BRGR_Type;
DECL|UART_BRGR|member|__IO UART_BRGR_Type UART_BRGR; /**< Offset: 0x20 (R/W 32) Baud Rate Generator Register */
DECL|UART_BRGR|member|__IO uint32_t UART_BRGR; /**< (UART Offset: 0x20) Baud Rate Generator Register */
DECL|UART_CMPR_CMPMODE_FLAG_ONLY_Val|macro|UART_CMPR_CMPMODE_FLAG_ONLY_Val
DECL|UART_CMPR_CMPMODE_FLAG_ONLY|macro|UART_CMPR_CMPMODE_FLAG_ONLY
DECL|UART_CMPR_CMPMODE_Msk|macro|UART_CMPR_CMPMODE_Msk
DECL|UART_CMPR_CMPMODE_Pos|macro|UART_CMPR_CMPMODE_Pos
DECL|UART_CMPR_CMPMODE_START_CONDITION_Val|macro|UART_CMPR_CMPMODE_START_CONDITION_Val
DECL|UART_CMPR_CMPMODE_START_CONDITION|macro|UART_CMPR_CMPMODE_START_CONDITION
DECL|UART_CMPR_CMPMODE|macro|UART_CMPR_CMPMODE
DECL|UART_CMPR_CMPPAR_Msk|macro|UART_CMPR_CMPPAR_Msk
DECL|UART_CMPR_CMPPAR_Pos|macro|UART_CMPR_CMPPAR_Pos
DECL|UART_CMPR_CMPPAR|macro|UART_CMPR_CMPPAR
DECL|UART_CMPR_MASK|macro|UART_CMPR_MASK
DECL|UART_CMPR_Msk|macro|UART_CMPR_Msk
DECL|UART_CMPR_OFFSET|macro|UART_CMPR_OFFSET
DECL|UART_CMPR_Type|typedef|} UART_CMPR_Type;
DECL|UART_CMPR_VAL1_Msk|macro|UART_CMPR_VAL1_Msk
DECL|UART_CMPR_VAL1_Pos|macro|UART_CMPR_VAL1_Pos
DECL|UART_CMPR_VAL1|macro|UART_CMPR_VAL1
DECL|UART_CMPR_VAL2_Msk|macro|UART_CMPR_VAL2_Msk
DECL|UART_CMPR_VAL2_Pos|macro|UART_CMPR_VAL2_Pos
DECL|UART_CMPR_VAL2|macro|UART_CMPR_VAL2
DECL|UART_CMPR|member|__IO UART_CMPR_Type UART_CMPR; /**< Offset: 0x24 (R/W 32) Comparison Register */
DECL|UART_CMPR|member|__IO uint32_t UART_CMPR; /**< (UART Offset: 0x24) Comparison Register */
DECL|UART_CR_MASK|macro|UART_CR_MASK
DECL|UART_CR_Msk|macro|UART_CR_Msk
DECL|UART_CR_OFFSET|macro|UART_CR_OFFSET
DECL|UART_CR_REQCLR_Msk|macro|UART_CR_REQCLR_Msk
DECL|UART_CR_REQCLR_Pos|macro|UART_CR_REQCLR_Pos
DECL|UART_CR_REQCLR|macro|UART_CR_REQCLR
DECL|UART_CR_RSTRX_Msk|macro|UART_CR_RSTRX_Msk
DECL|UART_CR_RSTRX_Pos|macro|UART_CR_RSTRX_Pos
DECL|UART_CR_RSTRX|macro|UART_CR_RSTRX
DECL|UART_CR_RSTSTA_Msk|macro|UART_CR_RSTSTA_Msk
DECL|UART_CR_RSTSTA_Pos|macro|UART_CR_RSTSTA_Pos
DECL|UART_CR_RSTSTA|macro|UART_CR_RSTSTA
DECL|UART_CR_RSTTX_Msk|macro|UART_CR_RSTTX_Msk
DECL|UART_CR_RSTTX_Pos|macro|UART_CR_RSTTX_Pos
DECL|UART_CR_RSTTX|macro|UART_CR_RSTTX
DECL|UART_CR_RXDIS_Msk|macro|UART_CR_RXDIS_Msk
DECL|UART_CR_RXDIS_Pos|macro|UART_CR_RXDIS_Pos
DECL|UART_CR_RXDIS|macro|UART_CR_RXDIS
DECL|UART_CR_RXEN_Msk|macro|UART_CR_RXEN_Msk
DECL|UART_CR_RXEN_Pos|macro|UART_CR_RXEN_Pos
DECL|UART_CR_RXEN|macro|UART_CR_RXEN
DECL|UART_CR_TXDIS_Msk|macro|UART_CR_TXDIS_Msk
DECL|UART_CR_TXDIS_Pos|macro|UART_CR_TXDIS_Pos
DECL|UART_CR_TXDIS|macro|UART_CR_TXDIS
DECL|UART_CR_TXEN_Msk|macro|UART_CR_TXEN_Msk
DECL|UART_CR_TXEN_Pos|macro|UART_CR_TXEN_Pos
DECL|UART_CR_TXEN|macro|UART_CR_TXEN
DECL|UART_CR_Type|typedef|} UART_CR_Type;
DECL|UART_CR|member|__O UART_CR_Type UART_CR; /**< Offset: 0x00 ( /W 32) Control Register */
DECL|UART_CR|member|__O uint32_t UART_CR; /**< (UART Offset: 0x00) Control Register */
DECL|UART_IDR_CMP_Msk|macro|UART_IDR_CMP_Msk
DECL|UART_IDR_CMP_Pos|macro|UART_IDR_CMP_Pos
DECL|UART_IDR_CMP|macro|UART_IDR_CMP
DECL|UART_IDR_FRAME_Msk|macro|UART_IDR_FRAME_Msk
DECL|UART_IDR_FRAME_Pos|macro|UART_IDR_FRAME_Pos
DECL|UART_IDR_FRAME|macro|UART_IDR_FRAME
DECL|UART_IDR_MASK|macro|UART_IDR_MASK
DECL|UART_IDR_Msk|macro|UART_IDR_Msk
DECL|UART_IDR_OFFSET|macro|UART_IDR_OFFSET
DECL|UART_IDR_OVRE_Msk|macro|UART_IDR_OVRE_Msk
DECL|UART_IDR_OVRE_Pos|macro|UART_IDR_OVRE_Pos
DECL|UART_IDR_OVRE|macro|UART_IDR_OVRE
DECL|UART_IDR_PARE_Msk|macro|UART_IDR_PARE_Msk
DECL|UART_IDR_PARE_Pos|macro|UART_IDR_PARE_Pos
DECL|UART_IDR_PARE|macro|UART_IDR_PARE
DECL|UART_IDR_RXRDY_Msk|macro|UART_IDR_RXRDY_Msk
DECL|UART_IDR_RXRDY_Pos|macro|UART_IDR_RXRDY_Pos
DECL|UART_IDR_RXRDY|macro|UART_IDR_RXRDY
DECL|UART_IDR_TXEMPTY_Msk|macro|UART_IDR_TXEMPTY_Msk
DECL|UART_IDR_TXEMPTY_Pos|macro|UART_IDR_TXEMPTY_Pos
DECL|UART_IDR_TXEMPTY|macro|UART_IDR_TXEMPTY
DECL|UART_IDR_TXRDY_Msk|macro|UART_IDR_TXRDY_Msk
DECL|UART_IDR_TXRDY_Pos|macro|UART_IDR_TXRDY_Pos
DECL|UART_IDR_TXRDY|macro|UART_IDR_TXRDY
DECL|UART_IDR_Type|typedef|} UART_IDR_Type;
DECL|UART_IDR|member|__O UART_IDR_Type UART_IDR; /**< Offset: 0x0C ( /W 32) Interrupt Disable Register */
DECL|UART_IDR|member|__O uint32_t UART_IDR; /**< (UART Offset: 0x0C) Interrupt Disable Register */
DECL|UART_IER_CMP_Msk|macro|UART_IER_CMP_Msk
DECL|UART_IER_CMP_Pos|macro|UART_IER_CMP_Pos
DECL|UART_IER_CMP|macro|UART_IER_CMP
DECL|UART_IER_FRAME_Msk|macro|UART_IER_FRAME_Msk
DECL|UART_IER_FRAME_Pos|macro|UART_IER_FRAME_Pos
DECL|UART_IER_FRAME|macro|UART_IER_FRAME
DECL|UART_IER_MASK|macro|UART_IER_MASK
DECL|UART_IER_Msk|macro|UART_IER_Msk
DECL|UART_IER_OFFSET|macro|UART_IER_OFFSET
DECL|UART_IER_OVRE_Msk|macro|UART_IER_OVRE_Msk
DECL|UART_IER_OVRE_Pos|macro|UART_IER_OVRE_Pos
DECL|UART_IER_OVRE|macro|UART_IER_OVRE
DECL|UART_IER_PARE_Msk|macro|UART_IER_PARE_Msk
DECL|UART_IER_PARE_Pos|macro|UART_IER_PARE_Pos
DECL|UART_IER_PARE|macro|UART_IER_PARE
DECL|UART_IER_RXRDY_Msk|macro|UART_IER_RXRDY_Msk
DECL|UART_IER_RXRDY_Pos|macro|UART_IER_RXRDY_Pos
DECL|UART_IER_RXRDY|macro|UART_IER_RXRDY
DECL|UART_IER_TXEMPTY_Msk|macro|UART_IER_TXEMPTY_Msk
DECL|UART_IER_TXEMPTY_Pos|macro|UART_IER_TXEMPTY_Pos
DECL|UART_IER_TXEMPTY|macro|UART_IER_TXEMPTY
DECL|UART_IER_TXRDY_Msk|macro|UART_IER_TXRDY_Msk
DECL|UART_IER_TXRDY_Pos|macro|UART_IER_TXRDY_Pos
DECL|UART_IER_TXRDY|macro|UART_IER_TXRDY
DECL|UART_IER_Type|typedef|} UART_IER_Type;
DECL|UART_IER|member|__O UART_IER_Type UART_IER; /**< Offset: 0x08 ( /W 32) Interrupt Enable Register */
DECL|UART_IER|member|__O uint32_t UART_IER; /**< (UART Offset: 0x08) Interrupt Enable Register */
DECL|UART_IMR_CMP_Msk|macro|UART_IMR_CMP_Msk
DECL|UART_IMR_CMP_Pos|macro|UART_IMR_CMP_Pos
DECL|UART_IMR_CMP|macro|UART_IMR_CMP
DECL|UART_IMR_FRAME_Msk|macro|UART_IMR_FRAME_Msk
DECL|UART_IMR_FRAME_Pos|macro|UART_IMR_FRAME_Pos
DECL|UART_IMR_FRAME|macro|UART_IMR_FRAME
DECL|UART_IMR_MASK|macro|UART_IMR_MASK
DECL|UART_IMR_Msk|macro|UART_IMR_Msk
DECL|UART_IMR_OFFSET|macro|UART_IMR_OFFSET
DECL|UART_IMR_OVRE_Msk|macro|UART_IMR_OVRE_Msk
DECL|UART_IMR_OVRE_Pos|macro|UART_IMR_OVRE_Pos
DECL|UART_IMR_OVRE|macro|UART_IMR_OVRE
DECL|UART_IMR_PARE_Msk|macro|UART_IMR_PARE_Msk
DECL|UART_IMR_PARE_Pos|macro|UART_IMR_PARE_Pos
DECL|UART_IMR_PARE|macro|UART_IMR_PARE
DECL|UART_IMR_RXRDY_Msk|macro|UART_IMR_RXRDY_Msk
DECL|UART_IMR_RXRDY_Pos|macro|UART_IMR_RXRDY_Pos
DECL|UART_IMR_RXRDY|macro|UART_IMR_RXRDY
DECL|UART_IMR_TXEMPTY_Msk|macro|UART_IMR_TXEMPTY_Msk
DECL|UART_IMR_TXEMPTY_Pos|macro|UART_IMR_TXEMPTY_Pos
DECL|UART_IMR_TXEMPTY|macro|UART_IMR_TXEMPTY
DECL|UART_IMR_TXRDY_Msk|macro|UART_IMR_TXRDY_Msk
DECL|UART_IMR_TXRDY_Pos|macro|UART_IMR_TXRDY_Pos
DECL|UART_IMR_TXRDY|macro|UART_IMR_TXRDY
DECL|UART_IMR_Type|typedef|} UART_IMR_Type;
DECL|UART_IMR|member|__I UART_IMR_Type UART_IMR; /**< Offset: 0x10 (R/ 32) Interrupt Mask Register */
DECL|UART_IMR|member|__I uint32_t UART_IMR; /**< (UART Offset: 0x10) Interrupt Mask Register */
DECL|UART_MR_BRSRCCK_Msk|macro|UART_MR_BRSRCCK_Msk
DECL|UART_MR_BRSRCCK_PERIPH_CLK_Val|macro|UART_MR_BRSRCCK_PERIPH_CLK_Val
DECL|UART_MR_BRSRCCK_PERIPH_CLK|macro|UART_MR_BRSRCCK_PERIPH_CLK
DECL|UART_MR_BRSRCCK_PMC_PCK_Val|macro|UART_MR_BRSRCCK_PMC_PCK_Val
DECL|UART_MR_BRSRCCK_PMC_PCK|macro|UART_MR_BRSRCCK_PMC_PCK
DECL|UART_MR_BRSRCCK_Pos|macro|UART_MR_BRSRCCK_Pos
DECL|UART_MR_BRSRCCK|macro|UART_MR_BRSRCCK
DECL|UART_MR_CHMODE_AUTOMATIC_Val|macro|UART_MR_CHMODE_AUTOMATIC_Val
DECL|UART_MR_CHMODE_AUTOMATIC|macro|UART_MR_CHMODE_AUTOMATIC
DECL|UART_MR_CHMODE_LOCAL_LOOPBACK_Val|macro|UART_MR_CHMODE_LOCAL_LOOPBACK_Val
DECL|UART_MR_CHMODE_LOCAL_LOOPBACK|macro|UART_MR_CHMODE_LOCAL_LOOPBACK
DECL|UART_MR_CHMODE_Msk|macro|UART_MR_CHMODE_Msk
DECL|UART_MR_CHMODE_NORMAL_Val|macro|UART_MR_CHMODE_NORMAL_Val
DECL|UART_MR_CHMODE_NORMAL|macro|UART_MR_CHMODE_NORMAL
DECL|UART_MR_CHMODE_Pos|macro|UART_MR_CHMODE_Pos
DECL|UART_MR_CHMODE_REMOTE_LOOPBACK_Val|macro|UART_MR_CHMODE_REMOTE_LOOPBACK_Val
DECL|UART_MR_CHMODE_REMOTE_LOOPBACK|macro|UART_MR_CHMODE_REMOTE_LOOPBACK
DECL|UART_MR_CHMODE|macro|UART_MR_CHMODE
DECL|UART_MR_FILTER_DISABLED_Val|macro|UART_MR_FILTER_DISABLED_Val
DECL|UART_MR_FILTER_DISABLED|macro|UART_MR_FILTER_DISABLED
DECL|UART_MR_FILTER_ENABLED_Val|macro|UART_MR_FILTER_ENABLED_Val
DECL|UART_MR_FILTER_ENABLED|macro|UART_MR_FILTER_ENABLED
DECL|UART_MR_FILTER_Msk|macro|UART_MR_FILTER_Msk
DECL|UART_MR_FILTER_Pos|macro|UART_MR_FILTER_Pos
DECL|UART_MR_FILTER|macro|UART_MR_FILTER
DECL|UART_MR_MASK|macro|UART_MR_MASK
DECL|UART_MR_Msk|macro|UART_MR_Msk
DECL|UART_MR_OFFSET|macro|UART_MR_OFFSET
DECL|UART_MR_PAR_EVEN_Val|macro|UART_MR_PAR_EVEN_Val
DECL|UART_MR_PAR_EVEN|macro|UART_MR_PAR_EVEN
DECL|UART_MR_PAR_MARK_Val|macro|UART_MR_PAR_MARK_Val
DECL|UART_MR_PAR_MARK|macro|UART_MR_PAR_MARK
DECL|UART_MR_PAR_Msk|macro|UART_MR_PAR_Msk
DECL|UART_MR_PAR_NO_Val|macro|UART_MR_PAR_NO_Val
DECL|UART_MR_PAR_NO|macro|UART_MR_PAR_NO
DECL|UART_MR_PAR_ODD_Val|macro|UART_MR_PAR_ODD_Val
DECL|UART_MR_PAR_ODD|macro|UART_MR_PAR_ODD
DECL|UART_MR_PAR_Pos|macro|UART_MR_PAR_Pos
DECL|UART_MR_PAR_SPACE_Val|macro|UART_MR_PAR_SPACE_Val
DECL|UART_MR_PAR_SPACE|macro|UART_MR_PAR_SPACE
DECL|UART_MR_PAR|macro|UART_MR_PAR
DECL|UART_MR_Type|typedef|} UART_MR_Type;
DECL|UART_MR|member|__IO UART_MR_Type UART_MR; /**< Offset: 0x04 (R/W 32) Mode Register */
DECL|UART_MR|member|__IO uint32_t UART_MR; /**< (UART Offset: 0x04) Mode Register */
DECL|UART_RHR_MASK|macro|UART_RHR_MASK
DECL|UART_RHR_Msk|macro|UART_RHR_Msk
DECL|UART_RHR_OFFSET|macro|UART_RHR_OFFSET
DECL|UART_RHR_RXCHR_Msk|macro|UART_RHR_RXCHR_Msk
DECL|UART_RHR_RXCHR_Pos|macro|UART_RHR_RXCHR_Pos
DECL|UART_RHR_RXCHR|macro|UART_RHR_RXCHR
DECL|UART_RHR_Type|typedef|} UART_RHR_Type;
DECL|UART_RHR|member|__I UART_RHR_Type UART_RHR; /**< Offset: 0x18 (R/ 32) Receive Holding Register */
DECL|UART_RHR|member|__I uint32_t UART_RHR; /**< (UART Offset: 0x18) Receive Holding Register */
DECL|UART_SR_CMP_Msk|macro|UART_SR_CMP_Msk
DECL|UART_SR_CMP_Pos|macro|UART_SR_CMP_Pos
DECL|UART_SR_CMP|macro|UART_SR_CMP
DECL|UART_SR_FRAME_Msk|macro|UART_SR_FRAME_Msk
DECL|UART_SR_FRAME_Pos|macro|UART_SR_FRAME_Pos
DECL|UART_SR_FRAME|macro|UART_SR_FRAME
DECL|UART_SR_MASK|macro|UART_SR_MASK
DECL|UART_SR_Msk|macro|UART_SR_Msk
DECL|UART_SR_OFFSET|macro|UART_SR_OFFSET
DECL|UART_SR_OVRE_Msk|macro|UART_SR_OVRE_Msk
DECL|UART_SR_OVRE_Pos|macro|UART_SR_OVRE_Pos
DECL|UART_SR_OVRE|macro|UART_SR_OVRE
DECL|UART_SR_PARE_Msk|macro|UART_SR_PARE_Msk
DECL|UART_SR_PARE_Pos|macro|UART_SR_PARE_Pos
DECL|UART_SR_PARE|macro|UART_SR_PARE
DECL|UART_SR_RXRDY_Msk|macro|UART_SR_RXRDY_Msk
DECL|UART_SR_RXRDY_Pos|macro|UART_SR_RXRDY_Pos
DECL|UART_SR_RXRDY|macro|UART_SR_RXRDY
DECL|UART_SR_TXEMPTY_Msk|macro|UART_SR_TXEMPTY_Msk
DECL|UART_SR_TXEMPTY_Pos|macro|UART_SR_TXEMPTY_Pos
DECL|UART_SR_TXEMPTY|macro|UART_SR_TXEMPTY
DECL|UART_SR_TXRDY_Msk|macro|UART_SR_TXRDY_Msk
DECL|UART_SR_TXRDY_Pos|macro|UART_SR_TXRDY_Pos
DECL|UART_SR_TXRDY|macro|UART_SR_TXRDY
DECL|UART_SR_Type|typedef|} UART_SR_Type;
DECL|UART_SR|member|__I UART_SR_Type UART_SR; /**< Offset: 0x14 (R/ 32) Status Register */
DECL|UART_SR|member|__I uint32_t UART_SR; /**< (UART Offset: 0x14) Status Register */
DECL|UART_THR_MASK|macro|UART_THR_MASK
DECL|UART_THR_Msk|macro|UART_THR_Msk
DECL|UART_THR_OFFSET|macro|UART_THR_OFFSET
DECL|UART_THR_TXCHR_Msk|macro|UART_THR_TXCHR_Msk
DECL|UART_THR_TXCHR_Pos|macro|UART_THR_TXCHR_Pos
DECL|UART_THR_TXCHR|macro|UART_THR_TXCHR
DECL|UART_THR_Type|typedef|} UART_THR_Type;
DECL|UART_THR|member|__O UART_THR_Type UART_THR; /**< Offset: 0x1C ( /W 32) Transmit Holding Register */
DECL|UART_THR|member|__O uint32_t UART_THR; /**< (UART Offset: 0x1C) Transmit Holding Register */
DECL|UART_WPMR_MASK|macro|UART_WPMR_MASK
DECL|UART_WPMR_Msk|macro|UART_WPMR_Msk
DECL|UART_WPMR_OFFSET|macro|UART_WPMR_OFFSET
DECL|UART_WPMR_Type|typedef|} UART_WPMR_Type;
DECL|UART_WPMR_WPEN_Msk|macro|UART_WPMR_WPEN_Msk
DECL|UART_WPMR_WPEN_Pos|macro|UART_WPMR_WPEN_Pos
DECL|UART_WPMR_WPEN|macro|UART_WPMR_WPEN
DECL|UART_WPMR_WPKEY_Msk|macro|UART_WPMR_WPKEY_Msk
DECL|UART_WPMR_WPKEY_PASSWD_Val|macro|UART_WPMR_WPKEY_PASSWD_Val
DECL|UART_WPMR_WPKEY_PASSWD|macro|UART_WPMR_WPKEY_PASSWD
DECL|UART_WPMR_WPKEY_Pos|macro|UART_WPMR_WPKEY_Pos
DECL|UART_WPMR_WPKEY|macro|UART_WPMR_WPKEY
DECL|UART_WPMR|member|__IO UART_WPMR_Type UART_WPMR; /**< Offset: 0xE4 (R/W 32) Write Protection Mode Register */
DECL|UART_WPMR|member|__IO uint32_t UART_WPMR; /**< (UART Offset: 0xE4) Write Protection Mode Register */
DECL|Uart|typedef|} Uart;
DECL|Uart|typedef|} Uart;
DECL|VAL1|member|uint32_t VAL1:8; /**< bit: 0..7 First Comparison Value for Received Character */
DECL|VAL2|member|uint32_t VAL2:8; /**< bit: 16..23 Second Comparison Value for Received Character */
DECL|WPEN|member|uint32_t WPEN:1; /**< bit: 0 Write Protection Enable */
DECL|WPKEY|member|uint32_t WPKEY:24; /**< bit: 8..31 Write Protection Key */
DECL|_SAME70_UART_COMPONENT_H_|macro|_SAME70_UART_COMPONENT_H_
DECL|_SAME70_UART_COMPONENT_|macro|_SAME70_UART_COMPONENT_
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
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :19; /**< bit: 13..31 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 13 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 13 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 8 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 8 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 8 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 8 Reserved */
DECL|uint32_t|member|uint32_t :24; /**< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /**< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 0..1 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 2..4 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 2..4 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 2..4 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 2..4 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 9..11 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 0..3 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 5..8 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 8..11 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 10..14 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 10..14 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 10..14 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 10..14 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
