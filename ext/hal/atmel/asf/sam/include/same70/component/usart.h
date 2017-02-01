DECL|ALTP|member|uint32_t ALTP:1; /**< bit: 6 LON Alternate Path Bit */
DECL|BETA1RX|member|uint32_t BETA1RX:24; /**< bit: 0..23 LON Beta1 Length after Reception */
DECL|BETA1TX|member|uint32_t BETA1TX:24; /**< bit: 0..23 LON Beta1 Length after Transmission */
DECL|BLI|member|uint32_t BLI:6; /**< bit: 0..5 LON Backlog Increment */
DECL|CDTAIL|member|uint32_t CDTAIL:1; /**< bit: 3 LON Collision Detection on Frame Tail */
DECL|CD|member|uint32_t CD:16; /**< bit: 0..15 Clock Divider */
DECL|CHKDIS|member|uint32_t CHKDIS:1; /**< bit: 3 Checksum Disable */
DECL|CHKTYP|member|uint32_t CHKTYP:1; /**< bit: 4 Checksum Type */
DECL|CHMODE|member|uint32_t CHMODE:2; /**< bit: 14..15 Channel Mode */
DECL|CHRL|member|uint32_t CHRL:2; /**< bit: 6..7 Character Length */
DECL|CLKO|member|uint32_t CLKO:1; /**< bit: 18 Clock Output Select */
DECL|COLDET|member|uint32_t COLDET:1; /**< bit: 1 LON Collision Detection Feature */
DECL|COMMT|member|uint32_t COMMT:1; /**< bit: 0 LON comm_type Parameter Value */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|CTSIC|member|uint32_t CTSIC:1; /**< bit: 19 Clear to Send Input Change Flag (cleared on read) */
DECL|CTSIC|member|uint32_t CTSIC:1; /**< bit: 19 Clear to Send Input Change Interrupt Disable */
DECL|CTSIC|member|uint32_t CTSIC:1; /**< bit: 19 Clear to Send Input Change Interrupt Enable */
DECL|CTSIC|member|uint32_t CTSIC:1; /**< bit: 19 Clear to Send Input Change Interrupt Mask */
DECL|CTS|member|uint32_t CTS:1; /**< bit: 23 Image of CTS Input */
DECL|DCDIC|member|uint32_t DCDIC:1; /**< bit: 18 Data Carrier Detect Input Change Flag (cleared on read) */
DECL|DCDIC|member|uint32_t DCDIC:1; /**< bit: 18 Data Carrier Detect Input Change Interrupt Disable */
DECL|DCDIC|member|uint32_t DCDIC:1; /**< bit: 18 Data Carrier Detect Input Change Interrupt Enable */
DECL|DCDIC|member|uint32_t DCDIC:1; /**< bit: 18 Data Carrier Detect Input Change Interrupt Mask */
DECL|DCD|member|uint32_t DCD:1; /**< bit: 22 Image of DCD Input */
DECL|DLC|member|uint32_t DLC:8; /**< bit: 8..15 Data Length Control */
DECL|DLM|member|uint32_t DLM:1; /**< bit: 5 Data Length Mode */
DECL|DMAM|member|uint32_t DMAM:1; /**< bit: 4 LON DMA Mode */
DECL|DRIFT|member|uint32_t DRIFT:1; /**< bit: 30 Drift Compensation */
DECL|DSNACK|member|uint32_t DSNACK:1; /**< bit: 21 Disable Successive NACK */
DECL|DSRIC|member|uint32_t DSRIC:1; /**< bit: 17 Data Set Ready Input Change Disable */
DECL|DSRIC|member|uint32_t DSRIC:1; /**< bit: 17 Data Set Ready Input Change Enable */
DECL|DSRIC|member|uint32_t DSRIC:1; /**< bit: 17 Data Set Ready Input Change Flag (cleared on read) */
DECL|DSRIC|member|uint32_t DSRIC:1; /**< bit: 17 Data Set Ready Input Change Mask */
DECL|DSR|member|uint32_t DSR:1; /**< bit: 21 Image of DSR Input */
DECL|DTRDIS|member|uint32_t DTRDIS:1; /**< bit: 17 Data Terminal Ready Disable */
DECL|DTREN|member|uint32_t DTREN:1; /**< bit: 16 Data Terminal Ready Enable */
DECL|EOFS|member|uint32_t EOFS:8; /**< bit: 16..23 End of Frame Condition Size */
DECL|FILTER|member|uint32_t FILTER:1; /**< bit: 28 Receive Line Filter */
DECL|FI_DI_RATIO|member|uint32_t FI_DI_RATIO:16; /**< bit: 0..15 FI Over DI Ratio Value */
DECL|FP|member|uint32_t FP:3; /**< bit: 16..18 Fractional Part */
DECL|FRAME|member|uint32_t FRAME:1; /**< bit: 6 Framing Error (cleared by writing a one to bit US_CR.RSTSTA) */
DECL|FRAME|member|uint32_t FRAME:1; /**< bit: 6 Framing Error Interrupt Disable */
DECL|FRAME|member|uint32_t FRAME:1; /**< bit: 6 Framing Error Interrupt Enable */
DECL|FRAME|member|uint32_t FRAME:1; /**< bit: 6 Framing Error Interrupt Mask */
DECL|FSDIS|member|uint32_t FSDIS:1; /**< bit: 6 Frame Slot Mode Disable */
DECL|ICDIFF|member|uint32_t ICDIFF:4; /**< bit: 0..3 IC Differentiator Number */
DECL|IDCHR|member|uint32_t IDCHR:8; /**< bit: 0..7 Identifier Character */
DECL|IDTRX|member|uint32_t IDTRX:24; /**< bit: 0..23 LON Indeterminate Time after Reception (comm_type = 1 mode only) */
DECL|IDTTX|member|uint32_t IDTTX:24; /**< bit: 0..23 LON Indeterminate Time after Transmission (comm_type = 1 mode only) */
DECL|INACK|member|uint32_t INACK:1; /**< bit: 20 Inhibit Non Acknowledge */
DECL|INVDATA|member|uint32_t INVDATA:1; /**< bit: 23 Inverted Data */
DECL|IRDA_FILTER|member|uint32_t IRDA_FILTER:8; /**< bit: 0..7 IrDA Filter */
DECL|ITER|member|uint32_t ITER:1; /**< bit: 10 Max Number of Repetitions Reached (cleared by writing a one to bit US_CR.RSTIT) */
DECL|ITER|member|uint32_t ITER:1; /**< bit: 10 Max Number of Repetitions Reached Interrupt Disable */
DECL|ITER|member|uint32_t ITER:1; /**< bit: 10 Max Number of Repetitions Reached Interrupt Mask */
DECL|ITER|member|uint32_t ITER:1; /**< bit: 10 Max number of Repetitions Reached Interrupt Enable */
DECL|LCDS|member|uint32_t LCDS:1; /**< bit: 5 LON Collision Detection Source */
DECL|LINABT|member|uint32_t LINABT:1; /**< bit: 20 Abort LIN Transmission */
DECL|LINCD|member|uint32_t LINCD:16; /**< bit: 0..15 Clock Divider after Synchronization */
DECL|LINFP|member|uint32_t LINFP:3; /**< bit: 16..18 Fractional Part after Synchronization */
DECL|LINWKUP|member|uint32_t LINWKUP:1; /**< bit: 21 Send LIN Wakeup Signal */
DECL|LONBL|member|uint32_t LONBL:6; /**< bit: 0..5 LON Node Backlog Value */
DECL|LONDL|member|uint32_t LONDL:8; /**< bit: 0..7 LON Data Length */
DECL|LONPL|member|uint32_t LONPL:14; /**< bit: 0..13 LON Preamble Length */
DECL|MANERR|member|uint32_t MANERR:1; /**< bit: 24 Manchester Error (cleared by writing a one to the bit US_CR.RSTSTA) */
DECL|MANE|member|uint32_t MANE:1; /**< bit: 24 Manchester Error Interrupt Disable */
DECL|MANE|member|uint32_t MANE:1; /**< bit: 24 Manchester Error Interrupt Enable */
DECL|MANE|member|uint32_t MANE:1; /**< bit: 24 Manchester Error Interrupt Mask */
DECL|MAN|member|uint32_t MAN:1; /**< bit: 29 Manchester Encoder/Decoder Enable */
DECL|MAX_ITERATION|member|uint32_t MAX_ITERATION:3; /**< bit: 24..26 Maximum Number of Automatic Iteration */
DECL|MODE9|member|uint32_t MODE9:1; /**< bit: 17 9-bit Character Length */
DECL|MODSYNC|member|uint32_t MODSYNC:1; /**< bit: 30 Manchester Synchronization Mode */
DECL|MSBF|member|uint32_t MSBF:1; /**< bit: 16 Bit Order */
DECL|NACK|member|uint32_t NACK:1; /**< bit: 13 Non Acknowledge Interrupt (cleared by writing a one to bit US_CR.RSTNACK) */
DECL|NACK|member|uint32_t NACK:1; /**< bit: 13 Non Acknowledge Interrupt Disable */
DECL|NACK|member|uint32_t NACK:1; /**< bit: 13 Non Acknowledge Interrupt Enable */
DECL|NACK|member|uint32_t NACK:1; /**< bit: 13 Non Acknowledge Interrupt Mask */
DECL|NACT|member|uint32_t NACT:2; /**< bit: 0..1 LIN Node Action */
DECL|NBSTOP|member|uint32_t NBSTOP:2; /**< bit: 12..13 Number of Stop Bits */
DECL|NB_ERRORS|member|uint32_t NB_ERRORS:8; /**< bit: 0..7 Number of Errors */
DECL|NPS|member|uint32_t NPS:7; /**< bit: 8..14 LON Node Priority Slot */
DECL|ONEBIT|member|uint32_t ONEBIT:1; /**< bit: 31 Start Frame Delimiter Selector */
DECL|ONE|member|uint32_t ONE:1; /**< bit: 29 Must Be Set to 1 */
DECL|OVER|member|uint32_t OVER:1; /**< bit: 19 Oversampling Mode */
DECL|OVRE|member|uint32_t OVRE:1; /**< bit: 5 Overrun Error (cleared by writing a one to bit US_CR.RSTSTA) */
DECL|OVRE|member|uint32_t OVRE:1; /**< bit: 5 Overrun Error Interrupt Enable */
DECL|OVRE|member|uint32_t OVRE:1; /**< bit: 5 Overrun Error Interrupt Enable */
DECL|OVRE|member|uint32_t OVRE:1; /**< bit: 5 Overrun Error Interrupt Mask */
DECL|PARDIS|member|uint32_t PARDIS:1; /**< bit: 2 Parity Disable */
DECL|PARE|member|uint32_t PARE:1; /**< bit: 7 Parity Error (cleared by writing a one to bit US_CR.RSTSTA) */
DECL|PARE|member|uint32_t PARE:1; /**< bit: 7 Parity Error Interrupt Disable */
DECL|PARE|member|uint32_t PARE:1; /**< bit: 7 Parity Error Interrupt Enable */
DECL|PARE|member|uint32_t PARE:1; /**< bit: 7 Parity Error Interrupt Mask */
DECL|PAR|member|uint32_t PAR:3; /**< bit: 9..11 Parity Type */
DECL|PB|member|uint32_t PB:1; /**< bit: 7 LON Priority Bit */
DECL|PDCM|member|uint32_t PDCM:1; /**< bit: 16 DMAC Mode */
DECL|PSNB|member|uint32_t PSNB:7; /**< bit: 0..6 LON Priority Slot Number */
DECL|RETTO|member|uint32_t RETTO:1; /**< bit: 15 Start Time-out Immediately */
DECL|REV_USART|macro|REV_USART
DECL|RIIC|member|uint32_t RIIC:1; /**< bit: 16 Ring Indicator Input Change Disable */
DECL|RIIC|member|uint32_t RIIC:1; /**< bit: 16 Ring Indicator Input Change Enable */
DECL|RIIC|member|uint32_t RIIC:1; /**< bit: 16 Ring Indicator Input Change Flag (cleared on read) */
DECL|RIIC|member|uint32_t RIIC:1; /**< bit: 16 Ring Indicator Input Change Mask */
DECL|RI|member|uint32_t RI:1; /**< bit: 20 Image of RI Input */
DECL|RSTIT|member|uint32_t RSTIT:1; /**< bit: 13 Reset Iterations */
DECL|RSTNACK|member|uint32_t RSTNACK:1; /**< bit: 14 Reset Non Acknowledge */
DECL|RSTRX|member|uint32_t RSTRX:1; /**< bit: 2 Reset Receiver */
DECL|RSTSTA|member|uint32_t RSTSTA:1; /**< bit: 8 Reset Status Bits */
DECL|RSTTX|member|uint32_t RSTTX:1; /**< bit: 3 Reset Transmitter */
DECL|RTSDIS|member|uint32_t RTSDIS:1; /**< bit: 19 Request to Send Pin Control */
DECL|RTSEN|member|uint32_t RTSEN:1; /**< bit: 18 Request to Send Pin Control */
DECL|RXBRK|member|uint32_t RXBRK:1; /**< bit: 2 Break Received/End of Break (cleared by writing a one to bit US_CR.RSTSTA) */
DECL|RXBRK|member|uint32_t RXBRK:1; /**< bit: 2 Receiver Break Interrupt Disable */
DECL|RXBRK|member|uint32_t RXBRK:1; /**< bit: 2 Receiver Break Interrupt Enable */
DECL|RXBRK|member|uint32_t RXBRK:1; /**< bit: 2 Receiver Break Interrupt Mask */
DECL|RXCHR|member|uint32_t RXCHR:9; /**< bit: 0..8 Received Character */
DECL|RXDIS|member|uint32_t RXDIS:1; /**< bit: 5 Receiver Disable */
DECL|RXEN|member|uint32_t RXEN:1; /**< bit: 4 Receiver Enable */
DECL|RXIDLEV|member|uint32_t RXIDLEV:1; /**< bit: 31 */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 0 RXRDY Interrupt Disable */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 0 RXRDY Interrupt Enable */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 0 RXRDY Interrupt Mask */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 0 Receiver Ready (cleared by reading US_RHR) */
DECL|RXSYNH|member|uint32_t RXSYNH:1; /**< bit: 15 Received Sync */
DECL|RX_MPOL|member|uint32_t RX_MPOL:1; /**< bit: 28 Receiver Manchester Polarity */
DECL|RX_PL|member|uint32_t RX_PL:4; /**< bit: 16..19 Receiver Preamble Length */
DECL|RX_PP|member|uint32_t RX_PP:2; /**< bit: 24..25 Receiver Preamble Pattern detected */
DECL|Reserved1|member|RoReg8 Reserved1[0x14];
DECL|Reserved1|member|__I uint32_t Reserved1[5];
DECL|Reserved2|member|RoReg8 Reserved2[0x4];
DECL|Reserved2|member|__I uint32_t Reserved2[1];
DECL|Reserved3|member|RoReg8 Reserved3[0x58];
DECL|Reserved3|member|__I uint32_t Reserved3[22];
DECL|SENDA|member|uint32_t SENDA:1; /**< bit: 12 Send Address */
DECL|STPBRK|member|uint32_t STPBRK:1; /**< bit: 10 Stop Break */
DECL|STTBRK|member|uint32_t STTBRK:1; /**< bit: 9 Start Break */
DECL|STTTO|member|uint32_t STTTO:1; /**< bit: 11 Clear TIMEOUT Flag and Start Time-out After Next Character Received */
DECL|SYNCDIS|member|uint32_t SYNCDIS:1; /**< bit: 17 Synchronization Disable */
DECL|SYNC|member|uint32_t SYNC:1; /**< bit: 8 Synchronous Mode Select */
DECL|TCOL|member|uint32_t TCOL:1; /**< bit: 2 Terminate Frame upon Collision Notification */
DECL|TG|member|uint32_t TG:8; /**< bit: 0..7 Timeguard Value */
DECL|TIMEOUT|member|uint32_t TIMEOUT:1; /**< bit: 8 Receiver Time-out (cleared by writing a one to bit US_CR.STTTO) */
DECL|TIMEOUT|member|uint32_t TIMEOUT:1; /**< bit: 8 Time-out Interrupt Disable */
DECL|TIMEOUT|member|uint32_t TIMEOUT:1; /**< bit: 8 Time-out Interrupt Enable */
DECL|TIMEOUT|member|uint32_t TIMEOUT:1; /**< bit: 8 Time-out Interrupt Mask */
DECL|TO|member|uint32_t TO:17; /**< bit: 0..16 Time-out Value */
DECL|TXCHR|member|uint32_t TXCHR:9; /**< bit: 0..8 Character to be Transmitted */
DECL|TXDIS|member|uint32_t TXDIS:1; /**< bit: 7 Transmitter Disable */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 9 TXEMPTY Interrupt Disable */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 9 TXEMPTY Interrupt Enable */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 9 TXEMPTY Interrupt Mask */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 9 Transmitter Empty (cleared by writing US_THR) */
DECL|TXEN|member|uint32_t TXEN:1; /**< bit: 6 Transmitter Enable */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 1 TXRDY Interrupt Disable */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 1 TXRDY Interrupt Enable */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 1 TXRDY Interrupt Mask */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 1 Transmitter Ready (cleared by writing US_THR) */
DECL|TXSYNH|member|uint32_t TXSYNH:1; /**< bit: 15 Sync Field to be Transmitted */
DECL|TX_MPOL|member|uint32_t TX_MPOL:1; /**< bit: 12 Transmitter Manchester Polarity */
DECL|TX_PL|member|uint32_t TX_PL:4; /**< bit: 0..3 Transmitter Preamble Length */
DECL|TX_PP|member|uint32_t TX_PP:2; /**< bit: 8..9 Transmitter Preamble Pattern */
DECL|USART_6089|macro|USART_6089
DECL|USART_MODE|member|uint32_t USART_MODE:4; /**< bit: 0..3 USART Mode of Operation */
DECL|USCLKS|member|uint32_t USCLKS:2; /**< bit: 4..5 Clock Selection */
DECL|US_BRGR_CD_Msk|macro|US_BRGR_CD_Msk
DECL|US_BRGR_CD_Pos|macro|US_BRGR_CD_Pos
DECL|US_BRGR_CD|macro|US_BRGR_CD
DECL|US_BRGR_FP_Msk|macro|US_BRGR_FP_Msk
DECL|US_BRGR_FP_Pos|macro|US_BRGR_FP_Pos
DECL|US_BRGR_FP|macro|US_BRGR_FP
DECL|US_BRGR_MASK|macro|US_BRGR_MASK
DECL|US_BRGR_Msk|macro|US_BRGR_Msk
DECL|US_BRGR_OFFSET|macro|US_BRGR_OFFSET
DECL|US_BRGR_Type|typedef|} US_BRGR_Type;
DECL|US_BRGR|member|__IO US_BRGR_Type US_BRGR; /**< Offset: 0x20 (R/W 32) Baud Rate Generator Register */
DECL|US_BRGR|member|__IO uint32_t US_BRGR; /**< (USART Offset: 0x20) Baud Rate Generator Register */
DECL|US_CR_DTRDIS_Msk|macro|US_CR_DTRDIS_Msk
DECL|US_CR_DTRDIS_Pos|macro|US_CR_DTRDIS_Pos
DECL|US_CR_DTRDIS|macro|US_CR_DTRDIS
DECL|US_CR_DTREN_Msk|macro|US_CR_DTREN_Msk
DECL|US_CR_DTREN_Pos|macro|US_CR_DTREN_Pos
DECL|US_CR_DTREN|macro|US_CR_DTREN
DECL|US_CR_LINABT_Msk|macro|US_CR_LINABT_Msk
DECL|US_CR_LINABT_Pos|macro|US_CR_LINABT_Pos
DECL|US_CR_LINABT|macro|US_CR_LINABT
DECL|US_CR_LINWKUP_Msk|macro|US_CR_LINWKUP_Msk
DECL|US_CR_LINWKUP_Pos|macro|US_CR_LINWKUP_Pos
DECL|US_CR_LINWKUP|macro|US_CR_LINWKUP
DECL|US_CR_MASK|macro|US_CR_MASK
DECL|US_CR_Msk|macro|US_CR_Msk
DECL|US_CR_OFFSET|macro|US_CR_OFFSET
DECL|US_CR_RETTO_Msk|macro|US_CR_RETTO_Msk
DECL|US_CR_RETTO_Pos|macro|US_CR_RETTO_Pos
DECL|US_CR_RETTO|macro|US_CR_RETTO
DECL|US_CR_RSTIT_Msk|macro|US_CR_RSTIT_Msk
DECL|US_CR_RSTIT_Pos|macro|US_CR_RSTIT_Pos
DECL|US_CR_RSTIT|macro|US_CR_RSTIT
DECL|US_CR_RSTNACK_Msk|macro|US_CR_RSTNACK_Msk
DECL|US_CR_RSTNACK_Pos|macro|US_CR_RSTNACK_Pos
DECL|US_CR_RSTNACK|macro|US_CR_RSTNACK
DECL|US_CR_RSTRX_Msk|macro|US_CR_RSTRX_Msk
DECL|US_CR_RSTRX_Pos|macro|US_CR_RSTRX_Pos
DECL|US_CR_RSTRX|macro|US_CR_RSTRX
DECL|US_CR_RSTSTA_Msk|macro|US_CR_RSTSTA_Msk
DECL|US_CR_RSTSTA_Pos|macro|US_CR_RSTSTA_Pos
DECL|US_CR_RSTSTA|macro|US_CR_RSTSTA
DECL|US_CR_RSTTX_Msk|macro|US_CR_RSTTX_Msk
DECL|US_CR_RSTTX_Pos|macro|US_CR_RSTTX_Pos
DECL|US_CR_RSTTX|macro|US_CR_RSTTX
DECL|US_CR_RTSDIS_Msk|macro|US_CR_RTSDIS_Msk
DECL|US_CR_RTSDIS_Pos|macro|US_CR_RTSDIS_Pos
DECL|US_CR_RTSDIS|macro|US_CR_RTSDIS
DECL|US_CR_RTSEN_Msk|macro|US_CR_RTSEN_Msk
DECL|US_CR_RTSEN_Pos|macro|US_CR_RTSEN_Pos
DECL|US_CR_RTSEN|macro|US_CR_RTSEN
DECL|US_CR_RXDIS_Msk|macro|US_CR_RXDIS_Msk
DECL|US_CR_RXDIS_Pos|macro|US_CR_RXDIS_Pos
DECL|US_CR_RXDIS|macro|US_CR_RXDIS
DECL|US_CR_RXEN_Msk|macro|US_CR_RXEN_Msk
DECL|US_CR_RXEN_Pos|macro|US_CR_RXEN_Pos
DECL|US_CR_RXEN|macro|US_CR_RXEN
DECL|US_CR_SENDA_Msk|macro|US_CR_SENDA_Msk
DECL|US_CR_SENDA_Pos|macro|US_CR_SENDA_Pos
DECL|US_CR_SENDA|macro|US_CR_SENDA
DECL|US_CR_STPBRK_Msk|macro|US_CR_STPBRK_Msk
DECL|US_CR_STPBRK_Pos|macro|US_CR_STPBRK_Pos
DECL|US_CR_STPBRK|macro|US_CR_STPBRK
DECL|US_CR_STTBRK_Msk|macro|US_CR_STTBRK_Msk
DECL|US_CR_STTBRK_Pos|macro|US_CR_STTBRK_Pos
DECL|US_CR_STTBRK|macro|US_CR_STTBRK
DECL|US_CR_STTTO_Msk|macro|US_CR_STTTO_Msk
DECL|US_CR_STTTO_Pos|macro|US_CR_STTTO_Pos
DECL|US_CR_STTTO|macro|US_CR_STTTO
DECL|US_CR_TXDIS_Msk|macro|US_CR_TXDIS_Msk
DECL|US_CR_TXDIS_Pos|macro|US_CR_TXDIS_Pos
DECL|US_CR_TXDIS|macro|US_CR_TXDIS
DECL|US_CR_TXEN_Msk|macro|US_CR_TXEN_Msk
DECL|US_CR_TXEN_Pos|macro|US_CR_TXEN_Pos
DECL|US_CR_TXEN|macro|US_CR_TXEN
DECL|US_CR_Type|typedef|} US_CR_Type;
DECL|US_CR|member|__O US_CR_Type US_CR; /**< Offset: 0x00 ( /W 32) Control Register */
DECL|US_CR|member|__O uint32_t US_CR; /**< (USART Offset: 0x00) Control Register */
DECL|US_CSR_CTSIC_Msk|macro|US_CSR_CTSIC_Msk
DECL|US_CSR_CTSIC_Pos|macro|US_CSR_CTSIC_Pos
DECL|US_CSR_CTSIC|macro|US_CSR_CTSIC
DECL|US_CSR_CTS_Msk|macro|US_CSR_CTS_Msk
DECL|US_CSR_CTS_Pos|macro|US_CSR_CTS_Pos
DECL|US_CSR_CTS|macro|US_CSR_CTS
DECL|US_CSR_DCDIC_Msk|macro|US_CSR_DCDIC_Msk
DECL|US_CSR_DCDIC_Pos|macro|US_CSR_DCDIC_Pos
DECL|US_CSR_DCDIC|macro|US_CSR_DCDIC
DECL|US_CSR_DCD_Msk|macro|US_CSR_DCD_Msk
DECL|US_CSR_DCD_Pos|macro|US_CSR_DCD_Pos
DECL|US_CSR_DCD|macro|US_CSR_DCD
DECL|US_CSR_DSRIC_Msk|macro|US_CSR_DSRIC_Msk
DECL|US_CSR_DSRIC_Pos|macro|US_CSR_DSRIC_Pos
DECL|US_CSR_DSRIC|macro|US_CSR_DSRIC
DECL|US_CSR_DSR_Msk|macro|US_CSR_DSR_Msk
DECL|US_CSR_DSR_Pos|macro|US_CSR_DSR_Pos
DECL|US_CSR_DSR|macro|US_CSR_DSR
DECL|US_CSR_FRAME_Msk|macro|US_CSR_FRAME_Msk
DECL|US_CSR_FRAME_Pos|macro|US_CSR_FRAME_Pos
DECL|US_CSR_FRAME|macro|US_CSR_FRAME
DECL|US_CSR_ITER_Msk|macro|US_CSR_ITER_Msk
DECL|US_CSR_ITER_Pos|macro|US_CSR_ITER_Pos
DECL|US_CSR_ITER|macro|US_CSR_ITER
DECL|US_CSR_MANERR_Msk|macro|US_CSR_MANERR_Msk
DECL|US_CSR_MANERR_Pos|macro|US_CSR_MANERR_Pos
DECL|US_CSR_MANERR|macro|US_CSR_MANERR
DECL|US_CSR_MASK|macro|US_CSR_MASK
DECL|US_CSR_Msk|macro|US_CSR_Msk
DECL|US_CSR_NACK_Msk|macro|US_CSR_NACK_Msk
DECL|US_CSR_NACK_Pos|macro|US_CSR_NACK_Pos
DECL|US_CSR_NACK|macro|US_CSR_NACK
DECL|US_CSR_OFFSET|macro|US_CSR_OFFSET
DECL|US_CSR_OVRE_Msk|macro|US_CSR_OVRE_Msk
DECL|US_CSR_OVRE_Pos|macro|US_CSR_OVRE_Pos
DECL|US_CSR_OVRE|macro|US_CSR_OVRE
DECL|US_CSR_PARE_Msk|macro|US_CSR_PARE_Msk
DECL|US_CSR_PARE_Pos|macro|US_CSR_PARE_Pos
DECL|US_CSR_PARE|macro|US_CSR_PARE
DECL|US_CSR_RIIC_Msk|macro|US_CSR_RIIC_Msk
DECL|US_CSR_RIIC_Pos|macro|US_CSR_RIIC_Pos
DECL|US_CSR_RIIC|macro|US_CSR_RIIC
DECL|US_CSR_RI_Msk|macro|US_CSR_RI_Msk
DECL|US_CSR_RI_Pos|macro|US_CSR_RI_Pos
DECL|US_CSR_RI|macro|US_CSR_RI
DECL|US_CSR_RXBRK_Msk|macro|US_CSR_RXBRK_Msk
DECL|US_CSR_RXBRK_Pos|macro|US_CSR_RXBRK_Pos
DECL|US_CSR_RXBRK|macro|US_CSR_RXBRK
DECL|US_CSR_RXRDY_Msk|macro|US_CSR_RXRDY_Msk
DECL|US_CSR_RXRDY_Pos|macro|US_CSR_RXRDY_Pos
DECL|US_CSR_RXRDY|macro|US_CSR_RXRDY
DECL|US_CSR_TIMEOUT_Msk|macro|US_CSR_TIMEOUT_Msk
DECL|US_CSR_TIMEOUT_Pos|macro|US_CSR_TIMEOUT_Pos
DECL|US_CSR_TIMEOUT|macro|US_CSR_TIMEOUT
DECL|US_CSR_TXEMPTY_Msk|macro|US_CSR_TXEMPTY_Msk
DECL|US_CSR_TXEMPTY_Pos|macro|US_CSR_TXEMPTY_Pos
DECL|US_CSR_TXEMPTY|macro|US_CSR_TXEMPTY
DECL|US_CSR_TXRDY_Msk|macro|US_CSR_TXRDY_Msk
DECL|US_CSR_TXRDY_Pos|macro|US_CSR_TXRDY_Pos
DECL|US_CSR_TXRDY|macro|US_CSR_TXRDY
DECL|US_CSR_Type|typedef|} US_CSR_Type;
DECL|US_CSR|member|__I US_CSR_Type US_CSR; /**< Offset: 0x14 (R/ 32) Channel Status Register */
DECL|US_CSR|member|__I uint32_t US_CSR; /**< (USART Offset: 0x14) Channel Status Register */
DECL|US_FIDI_FI_DI_RATIO_Msk|macro|US_FIDI_FI_DI_RATIO_Msk
DECL|US_FIDI_FI_DI_RATIO_Pos|macro|US_FIDI_FI_DI_RATIO_Pos
DECL|US_FIDI_FI_DI_RATIO|macro|US_FIDI_FI_DI_RATIO
DECL|US_FIDI_MASK|macro|US_FIDI_MASK
DECL|US_FIDI_Msk|macro|US_FIDI_Msk
DECL|US_FIDI_OFFSET|macro|US_FIDI_OFFSET
DECL|US_FIDI_Type|typedef|} US_FIDI_Type;
DECL|US_FIDI|member|__IO US_FIDI_Type US_FIDI; /**< Offset: 0x40 (R/W 32) FI DI Ratio Register */
DECL|US_FIDI|member|__IO uint32_t US_FIDI; /**< (USART Offset: 0x40) FI DI Ratio Register */
DECL|US_ICDIFF_ICDIFF_Msk|macro|US_ICDIFF_ICDIFF_Msk
DECL|US_ICDIFF_ICDIFF_Pos|macro|US_ICDIFF_ICDIFF_Pos
DECL|US_ICDIFF_ICDIFF|macro|US_ICDIFF_ICDIFF
DECL|US_ICDIFF_MASK|macro|US_ICDIFF_MASK
DECL|US_ICDIFF_Msk|macro|US_ICDIFF_Msk
DECL|US_ICDIFF_OFFSET|macro|US_ICDIFF_OFFSET
DECL|US_ICDIFF_Type|typedef|} US_ICDIFF_Type;
DECL|US_ICDIFF|member|__IO US_ICDIFF_Type US_ICDIFF; /**< Offset: 0x88 (R/W 32) IC DIFF Register */
DECL|US_ICDIFF|member|__IO uint32_t US_ICDIFF; /**< (USART Offset: 0x88) IC DIFF Register */
DECL|US_IDR_CTSIC_Msk|macro|US_IDR_CTSIC_Msk
DECL|US_IDR_CTSIC_Pos|macro|US_IDR_CTSIC_Pos
DECL|US_IDR_CTSIC|macro|US_IDR_CTSIC
DECL|US_IDR_DCDIC_Msk|macro|US_IDR_DCDIC_Msk
DECL|US_IDR_DCDIC_Pos|macro|US_IDR_DCDIC_Pos
DECL|US_IDR_DCDIC|macro|US_IDR_DCDIC
DECL|US_IDR_DSRIC_Msk|macro|US_IDR_DSRIC_Msk
DECL|US_IDR_DSRIC_Pos|macro|US_IDR_DSRIC_Pos
DECL|US_IDR_DSRIC|macro|US_IDR_DSRIC
DECL|US_IDR_FRAME_Msk|macro|US_IDR_FRAME_Msk
DECL|US_IDR_FRAME_Pos|macro|US_IDR_FRAME_Pos
DECL|US_IDR_FRAME|macro|US_IDR_FRAME
DECL|US_IDR_ITER_Msk|macro|US_IDR_ITER_Msk
DECL|US_IDR_ITER_Pos|macro|US_IDR_ITER_Pos
DECL|US_IDR_ITER|macro|US_IDR_ITER
DECL|US_IDR_MANE_Msk|macro|US_IDR_MANE_Msk
DECL|US_IDR_MANE_Pos|macro|US_IDR_MANE_Pos
DECL|US_IDR_MANE|macro|US_IDR_MANE
DECL|US_IDR_MASK|macro|US_IDR_MASK
DECL|US_IDR_Msk|macro|US_IDR_Msk
DECL|US_IDR_NACK_Msk|macro|US_IDR_NACK_Msk
DECL|US_IDR_NACK_Pos|macro|US_IDR_NACK_Pos
DECL|US_IDR_NACK|macro|US_IDR_NACK
DECL|US_IDR_OFFSET|macro|US_IDR_OFFSET
DECL|US_IDR_OVRE_Msk|macro|US_IDR_OVRE_Msk
DECL|US_IDR_OVRE_Pos|macro|US_IDR_OVRE_Pos
DECL|US_IDR_OVRE|macro|US_IDR_OVRE
DECL|US_IDR_PARE_Msk|macro|US_IDR_PARE_Msk
DECL|US_IDR_PARE_Pos|macro|US_IDR_PARE_Pos
DECL|US_IDR_PARE|macro|US_IDR_PARE
DECL|US_IDR_RIIC_Msk|macro|US_IDR_RIIC_Msk
DECL|US_IDR_RIIC_Pos|macro|US_IDR_RIIC_Pos
DECL|US_IDR_RIIC|macro|US_IDR_RIIC
DECL|US_IDR_RXBRK_Msk|macro|US_IDR_RXBRK_Msk
DECL|US_IDR_RXBRK_Pos|macro|US_IDR_RXBRK_Pos
DECL|US_IDR_RXBRK|macro|US_IDR_RXBRK
DECL|US_IDR_RXRDY_Msk|macro|US_IDR_RXRDY_Msk
DECL|US_IDR_RXRDY_Pos|macro|US_IDR_RXRDY_Pos
DECL|US_IDR_RXRDY|macro|US_IDR_RXRDY
DECL|US_IDR_TIMEOUT_Msk|macro|US_IDR_TIMEOUT_Msk
DECL|US_IDR_TIMEOUT_Pos|macro|US_IDR_TIMEOUT_Pos
DECL|US_IDR_TIMEOUT|macro|US_IDR_TIMEOUT
DECL|US_IDR_TXEMPTY_Msk|macro|US_IDR_TXEMPTY_Msk
DECL|US_IDR_TXEMPTY_Pos|macro|US_IDR_TXEMPTY_Pos
DECL|US_IDR_TXEMPTY|macro|US_IDR_TXEMPTY
DECL|US_IDR_TXRDY_Msk|macro|US_IDR_TXRDY_Msk
DECL|US_IDR_TXRDY_Pos|macro|US_IDR_TXRDY_Pos
DECL|US_IDR_TXRDY|macro|US_IDR_TXRDY
DECL|US_IDR_Type|typedef|} US_IDR_Type;
DECL|US_IDR|member|__O US_IDR_Type US_IDR; /**< Offset: 0x0C ( /W 32) Interrupt Disable Register */
DECL|US_IDR|member|__O uint32_t US_IDR; /**< (USART Offset: 0x0C) Interrupt Disable Register */
DECL|US_IDTRX_IDTRX_Msk|macro|US_IDTRX_IDTRX_Msk
DECL|US_IDTRX_IDTRX_Pos|macro|US_IDTRX_IDTRX_Pos
DECL|US_IDTRX_IDTRX|macro|US_IDTRX_IDTRX
DECL|US_IDTRX_MASK|macro|US_IDTRX_MASK
DECL|US_IDTRX_Msk|macro|US_IDTRX_Msk
DECL|US_IDTRX_OFFSET|macro|US_IDTRX_OFFSET
DECL|US_IDTRX_Type|typedef|} US_IDTRX_Type;
DECL|US_IDTRX|member|__IO US_IDTRX_Type US_IDTRX; /**< Offset: 0x84 (R/W 32) LON IDT Rx Register */
DECL|US_IDTRX|member|__IO uint32_t US_IDTRX; /**< (USART Offset: 0x84) LON IDT Rx Register */
DECL|US_IDTTX_IDTTX_Msk|macro|US_IDTTX_IDTTX_Msk
DECL|US_IDTTX_IDTTX_Pos|macro|US_IDTTX_IDTTX_Pos
DECL|US_IDTTX_IDTTX|macro|US_IDTTX_IDTTX
DECL|US_IDTTX_MASK|macro|US_IDTTX_MASK
DECL|US_IDTTX_Msk|macro|US_IDTTX_Msk
DECL|US_IDTTX_OFFSET|macro|US_IDTTX_OFFSET
DECL|US_IDTTX_Type|typedef|} US_IDTTX_Type;
DECL|US_IDTTX|member|__IO US_IDTTX_Type US_IDTTX; /**< Offset: 0x80 (R/W 32) LON IDT Tx Register */
DECL|US_IDTTX|member|__IO uint32_t US_IDTTX; /**< (USART Offset: 0x80) LON IDT Tx Register */
DECL|US_IER_CTSIC_Msk|macro|US_IER_CTSIC_Msk
DECL|US_IER_CTSIC_Pos|macro|US_IER_CTSIC_Pos
DECL|US_IER_CTSIC|macro|US_IER_CTSIC
DECL|US_IER_DCDIC_Msk|macro|US_IER_DCDIC_Msk
DECL|US_IER_DCDIC_Pos|macro|US_IER_DCDIC_Pos
DECL|US_IER_DCDIC|macro|US_IER_DCDIC
DECL|US_IER_DSRIC_Msk|macro|US_IER_DSRIC_Msk
DECL|US_IER_DSRIC_Pos|macro|US_IER_DSRIC_Pos
DECL|US_IER_DSRIC|macro|US_IER_DSRIC
DECL|US_IER_FRAME_Msk|macro|US_IER_FRAME_Msk
DECL|US_IER_FRAME_Pos|macro|US_IER_FRAME_Pos
DECL|US_IER_FRAME|macro|US_IER_FRAME
DECL|US_IER_ITER_Msk|macro|US_IER_ITER_Msk
DECL|US_IER_ITER_Pos|macro|US_IER_ITER_Pos
DECL|US_IER_ITER|macro|US_IER_ITER
DECL|US_IER_MANE_Msk|macro|US_IER_MANE_Msk
DECL|US_IER_MANE_Pos|macro|US_IER_MANE_Pos
DECL|US_IER_MANE|macro|US_IER_MANE
DECL|US_IER_MASK|macro|US_IER_MASK
DECL|US_IER_Msk|macro|US_IER_Msk
DECL|US_IER_NACK_Msk|macro|US_IER_NACK_Msk
DECL|US_IER_NACK_Pos|macro|US_IER_NACK_Pos
DECL|US_IER_NACK|macro|US_IER_NACK
DECL|US_IER_OFFSET|macro|US_IER_OFFSET
DECL|US_IER_OVRE_Msk|macro|US_IER_OVRE_Msk
DECL|US_IER_OVRE_Pos|macro|US_IER_OVRE_Pos
DECL|US_IER_OVRE|macro|US_IER_OVRE
DECL|US_IER_PARE_Msk|macro|US_IER_PARE_Msk
DECL|US_IER_PARE_Pos|macro|US_IER_PARE_Pos
DECL|US_IER_PARE|macro|US_IER_PARE
DECL|US_IER_RIIC_Msk|macro|US_IER_RIIC_Msk
DECL|US_IER_RIIC_Pos|macro|US_IER_RIIC_Pos
DECL|US_IER_RIIC|macro|US_IER_RIIC
DECL|US_IER_RXBRK_Msk|macro|US_IER_RXBRK_Msk
DECL|US_IER_RXBRK_Pos|macro|US_IER_RXBRK_Pos
DECL|US_IER_RXBRK|macro|US_IER_RXBRK
DECL|US_IER_RXRDY_Msk|macro|US_IER_RXRDY_Msk
DECL|US_IER_RXRDY_Pos|macro|US_IER_RXRDY_Pos
DECL|US_IER_RXRDY|macro|US_IER_RXRDY
DECL|US_IER_TIMEOUT_Msk|macro|US_IER_TIMEOUT_Msk
DECL|US_IER_TIMEOUT_Pos|macro|US_IER_TIMEOUT_Pos
DECL|US_IER_TIMEOUT|macro|US_IER_TIMEOUT
DECL|US_IER_TXEMPTY_Msk|macro|US_IER_TXEMPTY_Msk
DECL|US_IER_TXEMPTY_Pos|macro|US_IER_TXEMPTY_Pos
DECL|US_IER_TXEMPTY|macro|US_IER_TXEMPTY
DECL|US_IER_TXRDY_Msk|macro|US_IER_TXRDY_Msk
DECL|US_IER_TXRDY_Pos|macro|US_IER_TXRDY_Pos
DECL|US_IER_TXRDY|macro|US_IER_TXRDY
DECL|US_IER_Type|typedef|} US_IER_Type;
DECL|US_IER|member|__O US_IER_Type US_IER; /**< Offset: 0x08 ( /W 32) Interrupt Enable Register */
DECL|US_IER|member|__O uint32_t US_IER; /**< (USART Offset: 0x08) Interrupt Enable Register */
DECL|US_IF_IRDA_FILTER_Msk|macro|US_IF_IRDA_FILTER_Msk
DECL|US_IF_IRDA_FILTER_Pos|macro|US_IF_IRDA_FILTER_Pos
DECL|US_IF_IRDA_FILTER|macro|US_IF_IRDA_FILTER
DECL|US_IF_MASK|macro|US_IF_MASK
DECL|US_IF_Msk|macro|US_IF_Msk
DECL|US_IF_OFFSET|macro|US_IF_OFFSET
DECL|US_IF_Type|typedef|} US_IF_Type;
DECL|US_IF|member|__IO US_IF_Type US_IF; /**< Offset: 0x4C (R/W 32) IrDA Filter Register */
DECL|US_IF|member|__IO uint32_t US_IF; /**< (USART Offset: 0x4C) IrDA Filter Register */
DECL|US_IMR_CTSIC_Msk|macro|US_IMR_CTSIC_Msk
DECL|US_IMR_CTSIC_Pos|macro|US_IMR_CTSIC_Pos
DECL|US_IMR_CTSIC|macro|US_IMR_CTSIC
DECL|US_IMR_DCDIC_Msk|macro|US_IMR_DCDIC_Msk
DECL|US_IMR_DCDIC_Pos|macro|US_IMR_DCDIC_Pos
DECL|US_IMR_DCDIC|macro|US_IMR_DCDIC
DECL|US_IMR_DSRIC_Msk|macro|US_IMR_DSRIC_Msk
DECL|US_IMR_DSRIC_Pos|macro|US_IMR_DSRIC_Pos
DECL|US_IMR_DSRIC|macro|US_IMR_DSRIC
DECL|US_IMR_FRAME_Msk|macro|US_IMR_FRAME_Msk
DECL|US_IMR_FRAME_Pos|macro|US_IMR_FRAME_Pos
DECL|US_IMR_FRAME|macro|US_IMR_FRAME
DECL|US_IMR_ITER_Msk|macro|US_IMR_ITER_Msk
DECL|US_IMR_ITER_Pos|macro|US_IMR_ITER_Pos
DECL|US_IMR_ITER|macro|US_IMR_ITER
DECL|US_IMR_MANE_Msk|macro|US_IMR_MANE_Msk
DECL|US_IMR_MANE_Pos|macro|US_IMR_MANE_Pos
DECL|US_IMR_MANE|macro|US_IMR_MANE
DECL|US_IMR_MASK|macro|US_IMR_MASK
DECL|US_IMR_Msk|macro|US_IMR_Msk
DECL|US_IMR_NACK_Msk|macro|US_IMR_NACK_Msk
DECL|US_IMR_NACK_Pos|macro|US_IMR_NACK_Pos
DECL|US_IMR_NACK|macro|US_IMR_NACK
DECL|US_IMR_OFFSET|macro|US_IMR_OFFSET
DECL|US_IMR_OVRE_Msk|macro|US_IMR_OVRE_Msk
DECL|US_IMR_OVRE_Pos|macro|US_IMR_OVRE_Pos
DECL|US_IMR_OVRE|macro|US_IMR_OVRE
DECL|US_IMR_PARE_Msk|macro|US_IMR_PARE_Msk
DECL|US_IMR_PARE_Pos|macro|US_IMR_PARE_Pos
DECL|US_IMR_PARE|macro|US_IMR_PARE
DECL|US_IMR_RIIC_Msk|macro|US_IMR_RIIC_Msk
DECL|US_IMR_RIIC_Pos|macro|US_IMR_RIIC_Pos
DECL|US_IMR_RIIC|macro|US_IMR_RIIC
DECL|US_IMR_RXBRK_Msk|macro|US_IMR_RXBRK_Msk
DECL|US_IMR_RXBRK_Pos|macro|US_IMR_RXBRK_Pos
DECL|US_IMR_RXBRK|macro|US_IMR_RXBRK
DECL|US_IMR_RXRDY_Msk|macro|US_IMR_RXRDY_Msk
DECL|US_IMR_RXRDY_Pos|macro|US_IMR_RXRDY_Pos
DECL|US_IMR_RXRDY|macro|US_IMR_RXRDY
DECL|US_IMR_TIMEOUT_Msk|macro|US_IMR_TIMEOUT_Msk
DECL|US_IMR_TIMEOUT_Pos|macro|US_IMR_TIMEOUT_Pos
DECL|US_IMR_TIMEOUT|macro|US_IMR_TIMEOUT
DECL|US_IMR_TXEMPTY_Msk|macro|US_IMR_TXEMPTY_Msk
DECL|US_IMR_TXEMPTY_Pos|macro|US_IMR_TXEMPTY_Pos
DECL|US_IMR_TXEMPTY|macro|US_IMR_TXEMPTY
DECL|US_IMR_TXRDY_Msk|macro|US_IMR_TXRDY_Msk
DECL|US_IMR_TXRDY_Pos|macro|US_IMR_TXRDY_Pos
DECL|US_IMR_TXRDY|macro|US_IMR_TXRDY
DECL|US_IMR_Type|typedef|} US_IMR_Type;
DECL|US_IMR|member|__I US_IMR_Type US_IMR; /**< Offset: 0x10 (R/ 32) Interrupt Mask Register */
DECL|US_IMR|member|__I uint32_t US_IMR; /**< (USART Offset: 0x10) Interrupt Mask Register */
DECL|US_LINBRR_LINCD_Msk|macro|US_LINBRR_LINCD_Msk
DECL|US_LINBRR_LINCD_Pos|macro|US_LINBRR_LINCD_Pos
DECL|US_LINBRR_LINCD|macro|US_LINBRR_LINCD
DECL|US_LINBRR_LINFP_Msk|macro|US_LINBRR_LINFP_Msk
DECL|US_LINBRR_LINFP_Pos|macro|US_LINBRR_LINFP_Pos
DECL|US_LINBRR_LINFP|macro|US_LINBRR_LINFP
DECL|US_LINBRR_MASK|macro|US_LINBRR_MASK
DECL|US_LINBRR_Msk|macro|US_LINBRR_Msk
DECL|US_LINBRR_OFFSET|macro|US_LINBRR_OFFSET
DECL|US_LINBRR_Type|typedef|} US_LINBRR_Type;
DECL|US_LINBRR|member|__I US_LINBRR_Type US_LINBRR; /**< Offset: 0x5C (R/ 32) LIN Baud Rate Register */
DECL|US_LINBRR|member|__I uint32_t US_LINBRR; /**< (USART Offset: 0x5C) LIN Baud Rate Register */
DECL|US_LINIR_IDCHR_Msk|macro|US_LINIR_IDCHR_Msk
DECL|US_LINIR_IDCHR_Pos|macro|US_LINIR_IDCHR_Pos
DECL|US_LINIR_IDCHR|macro|US_LINIR_IDCHR
DECL|US_LINIR_MASK|macro|US_LINIR_MASK
DECL|US_LINIR_Msk|macro|US_LINIR_Msk
DECL|US_LINIR_OFFSET|macro|US_LINIR_OFFSET
DECL|US_LINIR_Type|typedef|} US_LINIR_Type;
DECL|US_LINIR|member|__IO US_LINIR_Type US_LINIR; /**< Offset: 0x58 (R/W 32) LIN Identifier Register */
DECL|US_LINIR|member|__IO uint32_t US_LINIR; /**< (USART Offset: 0x58) LIN Identifier Register */
DECL|US_LINMR_CHKDIS_Msk|macro|US_LINMR_CHKDIS_Msk
DECL|US_LINMR_CHKDIS_Pos|macro|US_LINMR_CHKDIS_Pos
DECL|US_LINMR_CHKDIS|macro|US_LINMR_CHKDIS
DECL|US_LINMR_CHKTYP_Msk|macro|US_LINMR_CHKTYP_Msk
DECL|US_LINMR_CHKTYP_Pos|macro|US_LINMR_CHKTYP_Pos
DECL|US_LINMR_CHKTYP|macro|US_LINMR_CHKTYP
DECL|US_LINMR_DLC_Msk|macro|US_LINMR_DLC_Msk
DECL|US_LINMR_DLC_Pos|macro|US_LINMR_DLC_Pos
DECL|US_LINMR_DLC|macro|US_LINMR_DLC
DECL|US_LINMR_DLM_Msk|macro|US_LINMR_DLM_Msk
DECL|US_LINMR_DLM_Pos|macro|US_LINMR_DLM_Pos
DECL|US_LINMR_DLM|macro|US_LINMR_DLM
DECL|US_LINMR_FSDIS_Msk|macro|US_LINMR_FSDIS_Msk
DECL|US_LINMR_FSDIS_Pos|macro|US_LINMR_FSDIS_Pos
DECL|US_LINMR_FSDIS|macro|US_LINMR_FSDIS
DECL|US_LINMR_MASK|macro|US_LINMR_MASK
DECL|US_LINMR_Msk|macro|US_LINMR_Msk
DECL|US_LINMR_NACT_IGNORE_Val|macro|US_LINMR_NACT_IGNORE_Val
DECL|US_LINMR_NACT_IGNORE|macro|US_LINMR_NACT_IGNORE
DECL|US_LINMR_NACT_Msk|macro|US_LINMR_NACT_Msk
DECL|US_LINMR_NACT_PUBLISH_Val|macro|US_LINMR_NACT_PUBLISH_Val
DECL|US_LINMR_NACT_PUBLISH|macro|US_LINMR_NACT_PUBLISH
DECL|US_LINMR_NACT_Pos|macro|US_LINMR_NACT_Pos
DECL|US_LINMR_NACT_SUBSCRIBE_Val|macro|US_LINMR_NACT_SUBSCRIBE_Val
DECL|US_LINMR_NACT_SUBSCRIBE|macro|US_LINMR_NACT_SUBSCRIBE
DECL|US_LINMR_NACT|macro|US_LINMR_NACT
DECL|US_LINMR_OFFSET|macro|US_LINMR_OFFSET
DECL|US_LINMR_PARDIS_Msk|macro|US_LINMR_PARDIS_Msk
DECL|US_LINMR_PARDIS_Pos|macro|US_LINMR_PARDIS_Pos
DECL|US_LINMR_PARDIS|macro|US_LINMR_PARDIS
DECL|US_LINMR_PDCM_Msk|macro|US_LINMR_PDCM_Msk
DECL|US_LINMR_PDCM_Pos|macro|US_LINMR_PDCM_Pos
DECL|US_LINMR_PDCM|macro|US_LINMR_PDCM
DECL|US_LINMR_SYNCDIS_Msk|macro|US_LINMR_SYNCDIS_Msk
DECL|US_LINMR_SYNCDIS_Pos|macro|US_LINMR_SYNCDIS_Pos
DECL|US_LINMR_SYNCDIS|macro|US_LINMR_SYNCDIS
DECL|US_LINMR_Type|typedef|} US_LINMR_Type;
DECL|US_LINMR_WKUPTYP_Msk|macro|US_LINMR_WKUPTYP_Msk
DECL|US_LINMR_WKUPTYP_Pos|macro|US_LINMR_WKUPTYP_Pos
DECL|US_LINMR_WKUPTYP|macro|US_LINMR_WKUPTYP
DECL|US_LINMR|member|__IO US_LINMR_Type US_LINMR; /**< Offset: 0x54 (R/W 32) LIN Mode Register */
DECL|US_LINMR|member|__IO uint32_t US_LINMR; /**< (USART Offset: 0x54) LIN Mode Register */
DECL|US_LONB1RX_BETA1RX_Msk|macro|US_LONB1RX_BETA1RX_Msk
DECL|US_LONB1RX_BETA1RX_Pos|macro|US_LONB1RX_BETA1RX_Pos
DECL|US_LONB1RX_BETA1RX|macro|US_LONB1RX_BETA1RX
DECL|US_LONB1RX_MASK|macro|US_LONB1RX_MASK
DECL|US_LONB1RX_Msk|macro|US_LONB1RX_Msk
DECL|US_LONB1RX_OFFSET|macro|US_LONB1RX_OFFSET
DECL|US_LONB1RX_Type|typedef|} US_LONB1RX_Type;
DECL|US_LONB1RX|member|__IO US_LONB1RX_Type US_LONB1RX; /**< Offset: 0x78 (R/W 32) LON Beta1 Rx Register */
DECL|US_LONB1RX|member|__IO uint32_t US_LONB1RX; /**< (USART Offset: 0x78) LON Beta1 Rx Register */
DECL|US_LONB1TX_BETA1TX_Msk|macro|US_LONB1TX_BETA1TX_Msk
DECL|US_LONB1TX_BETA1TX_Pos|macro|US_LONB1TX_BETA1TX_Pos
DECL|US_LONB1TX_BETA1TX|macro|US_LONB1TX_BETA1TX
DECL|US_LONB1TX_MASK|macro|US_LONB1TX_MASK
DECL|US_LONB1TX_Msk|macro|US_LONB1TX_Msk
DECL|US_LONB1TX_OFFSET|macro|US_LONB1TX_OFFSET
DECL|US_LONB1TX_Type|typedef|} US_LONB1TX_Type;
DECL|US_LONB1TX|member|__IO US_LONB1TX_Type US_LONB1TX; /**< Offset: 0x74 (R/W 32) LON Beta1 Tx Register */
DECL|US_LONB1TX|member|__IO uint32_t US_LONB1TX; /**< (USART Offset: 0x74) LON Beta1 Tx Register */
DECL|US_LONBL_LONBL_Msk|macro|US_LONBL_LONBL_Msk
DECL|US_LONBL_LONBL_Pos|macro|US_LONBL_LONBL_Pos
DECL|US_LONBL_LONBL|macro|US_LONBL_LONBL
DECL|US_LONBL_MASK|macro|US_LONBL_MASK
DECL|US_LONBL_Msk|macro|US_LONBL_Msk
DECL|US_LONBL_OFFSET|macro|US_LONBL_OFFSET
DECL|US_LONBL_Type|typedef|} US_LONBL_Type;
DECL|US_LONBL|member|__I US_LONBL_Type US_LONBL; /**< Offset: 0x70 (R/ 32) LON Backlog Register */
DECL|US_LONBL|member|__I uint32_t US_LONBL; /**< (USART Offset: 0x70) LON Backlog Register */
DECL|US_LONDL_LONDL_Msk|macro|US_LONDL_LONDL_Msk
DECL|US_LONDL_LONDL_Pos|macro|US_LONDL_LONDL_Pos
DECL|US_LONDL_LONDL|macro|US_LONDL_LONDL
DECL|US_LONDL_MASK|macro|US_LONDL_MASK
DECL|US_LONDL_Msk|macro|US_LONDL_Msk
DECL|US_LONDL_OFFSET|macro|US_LONDL_OFFSET
DECL|US_LONDL_Type|typedef|} US_LONDL_Type;
DECL|US_LONDL|member|__IO US_LONDL_Type US_LONDL; /**< Offset: 0x68 (R/W 32) LON Data Length Register */
DECL|US_LONDL|member|__IO uint32_t US_LONDL; /**< (USART Offset: 0x68) LON Data Length Register */
DECL|US_LONL2HDR_ALTP_Msk|macro|US_LONL2HDR_ALTP_Msk
DECL|US_LONL2HDR_ALTP_Pos|macro|US_LONL2HDR_ALTP_Pos
DECL|US_LONL2HDR_ALTP|macro|US_LONL2HDR_ALTP
DECL|US_LONL2HDR_BLI_Msk|macro|US_LONL2HDR_BLI_Msk
DECL|US_LONL2HDR_BLI_Pos|macro|US_LONL2HDR_BLI_Pos
DECL|US_LONL2HDR_BLI|macro|US_LONL2HDR_BLI
DECL|US_LONL2HDR_MASK|macro|US_LONL2HDR_MASK
DECL|US_LONL2HDR_Msk|macro|US_LONL2HDR_Msk
DECL|US_LONL2HDR_OFFSET|macro|US_LONL2HDR_OFFSET
DECL|US_LONL2HDR_PB_Msk|macro|US_LONL2HDR_PB_Msk
DECL|US_LONL2HDR_PB_Pos|macro|US_LONL2HDR_PB_Pos
DECL|US_LONL2HDR_PB|macro|US_LONL2HDR_PB
DECL|US_LONL2HDR_Type|typedef|} US_LONL2HDR_Type;
DECL|US_LONL2HDR|member|__IO US_LONL2HDR_Type US_LONL2HDR; /**< Offset: 0x6C (R/W 32) LON L2HDR Register */
DECL|US_LONL2HDR|member|__IO uint32_t US_LONL2HDR; /**< (USART Offset: 0x6C) LON L2HDR Register */
DECL|US_LONMR_CDTAIL_Msk|macro|US_LONMR_CDTAIL_Msk
DECL|US_LONMR_CDTAIL_Pos|macro|US_LONMR_CDTAIL_Pos
DECL|US_LONMR_CDTAIL|macro|US_LONMR_CDTAIL
DECL|US_LONMR_COLDET_Msk|macro|US_LONMR_COLDET_Msk
DECL|US_LONMR_COLDET_Pos|macro|US_LONMR_COLDET_Pos
DECL|US_LONMR_COLDET|macro|US_LONMR_COLDET
DECL|US_LONMR_COMMT_Msk|macro|US_LONMR_COMMT_Msk
DECL|US_LONMR_COMMT_Pos|macro|US_LONMR_COMMT_Pos
DECL|US_LONMR_COMMT|macro|US_LONMR_COMMT
DECL|US_LONMR_DMAM_Msk|macro|US_LONMR_DMAM_Msk
DECL|US_LONMR_DMAM_Pos|macro|US_LONMR_DMAM_Pos
DECL|US_LONMR_DMAM|macro|US_LONMR_DMAM
DECL|US_LONMR_EOFS_Msk|macro|US_LONMR_EOFS_Msk
DECL|US_LONMR_EOFS_Pos|macro|US_LONMR_EOFS_Pos
DECL|US_LONMR_EOFS|macro|US_LONMR_EOFS
DECL|US_LONMR_LCDS_Msk|macro|US_LONMR_LCDS_Msk
DECL|US_LONMR_LCDS_Pos|macro|US_LONMR_LCDS_Pos
DECL|US_LONMR_LCDS|macro|US_LONMR_LCDS
DECL|US_LONMR_MASK|macro|US_LONMR_MASK
DECL|US_LONMR_Msk|macro|US_LONMR_Msk
DECL|US_LONMR_OFFSET|macro|US_LONMR_OFFSET
DECL|US_LONMR_TCOL_Msk|macro|US_LONMR_TCOL_Msk
DECL|US_LONMR_TCOL_Pos|macro|US_LONMR_TCOL_Pos
DECL|US_LONMR_TCOL|macro|US_LONMR_TCOL
DECL|US_LONMR_Type|typedef|} US_LONMR_Type;
DECL|US_LONMR|member|__IO US_LONMR_Type US_LONMR; /**< Offset: 0x60 (R/W 32) LON Mode Register */
DECL|US_LONMR|member|__IO uint32_t US_LONMR; /**< (USART Offset: 0x60) LON Mode Register */
DECL|US_LONPRIO_MASK|macro|US_LONPRIO_MASK
DECL|US_LONPRIO_Msk|macro|US_LONPRIO_Msk
DECL|US_LONPRIO_NPS_Msk|macro|US_LONPRIO_NPS_Msk
DECL|US_LONPRIO_NPS_Pos|macro|US_LONPRIO_NPS_Pos
DECL|US_LONPRIO_NPS|macro|US_LONPRIO_NPS
DECL|US_LONPRIO_OFFSET|macro|US_LONPRIO_OFFSET
DECL|US_LONPRIO_PSNB_Msk|macro|US_LONPRIO_PSNB_Msk
DECL|US_LONPRIO_PSNB_Pos|macro|US_LONPRIO_PSNB_Pos
DECL|US_LONPRIO_PSNB|macro|US_LONPRIO_PSNB
DECL|US_LONPRIO_Type|typedef|} US_LONPRIO_Type;
DECL|US_LONPRIO|member|__IO US_LONPRIO_Type US_LONPRIO; /**< Offset: 0x7C (R/W 32) LON Priority Register */
DECL|US_LONPRIO|member|__IO uint32_t US_LONPRIO; /**< (USART Offset: 0x7C) LON Priority Register */
DECL|US_LONPR_LONPL_Msk|macro|US_LONPR_LONPL_Msk
DECL|US_LONPR_LONPL_Pos|macro|US_LONPR_LONPL_Pos
DECL|US_LONPR_LONPL|macro|US_LONPR_LONPL
DECL|US_LONPR_MASK|macro|US_LONPR_MASK
DECL|US_LONPR_Msk|macro|US_LONPR_Msk
DECL|US_LONPR_OFFSET|macro|US_LONPR_OFFSET
DECL|US_LONPR_Type|typedef|} US_LONPR_Type;
DECL|US_LONPR|member|__IO US_LONPR_Type US_LONPR; /**< Offset: 0x64 (R/W 32) LON Preamble Register */
DECL|US_LONPR|member|__IO uint32_t US_LONPR; /**< (USART Offset: 0x64) LON Preamble Register */
DECL|US_MAN_DRIFT_Msk|macro|US_MAN_DRIFT_Msk
DECL|US_MAN_DRIFT_Pos|macro|US_MAN_DRIFT_Pos
DECL|US_MAN_DRIFT|macro|US_MAN_DRIFT
DECL|US_MAN_MASK|macro|US_MAN_MASK
DECL|US_MAN_Msk|macro|US_MAN_Msk
DECL|US_MAN_OFFSET|macro|US_MAN_OFFSET
DECL|US_MAN_ONE_Msk|macro|US_MAN_ONE_Msk
DECL|US_MAN_ONE_Pos|macro|US_MAN_ONE_Pos
DECL|US_MAN_ONE|macro|US_MAN_ONE
DECL|US_MAN_RXIDLEV_Msk|macro|US_MAN_RXIDLEV_Msk
DECL|US_MAN_RXIDLEV_Pos|macro|US_MAN_RXIDLEV_Pos
DECL|US_MAN_RXIDLEV|macro|US_MAN_RXIDLEV
DECL|US_MAN_RX_MPOL_Msk|macro|US_MAN_RX_MPOL_Msk
DECL|US_MAN_RX_MPOL_Pos|macro|US_MAN_RX_MPOL_Pos
DECL|US_MAN_RX_MPOL|macro|US_MAN_RX_MPOL
DECL|US_MAN_RX_PL_Msk|macro|US_MAN_RX_PL_Msk
DECL|US_MAN_RX_PL_Pos|macro|US_MAN_RX_PL_Pos
DECL|US_MAN_RX_PL|macro|US_MAN_RX_PL
DECL|US_MAN_RX_PP_ALL_ONE_Val|macro|US_MAN_RX_PP_ALL_ONE_Val
DECL|US_MAN_RX_PP_ALL_ONE|macro|US_MAN_RX_PP_ALL_ONE
DECL|US_MAN_RX_PP_ALL_ZERO_Val|macro|US_MAN_RX_PP_ALL_ZERO_Val
DECL|US_MAN_RX_PP_ALL_ZERO|macro|US_MAN_RX_PP_ALL_ZERO
DECL|US_MAN_RX_PP_Msk|macro|US_MAN_RX_PP_Msk
DECL|US_MAN_RX_PP_ONE_ZERO_Val|macro|US_MAN_RX_PP_ONE_ZERO_Val
DECL|US_MAN_RX_PP_ONE_ZERO|macro|US_MAN_RX_PP_ONE_ZERO
DECL|US_MAN_RX_PP_Pos|macro|US_MAN_RX_PP_Pos
DECL|US_MAN_RX_PP_ZERO_ONE_Val|macro|US_MAN_RX_PP_ZERO_ONE_Val
DECL|US_MAN_RX_PP_ZERO_ONE|macro|US_MAN_RX_PP_ZERO_ONE
DECL|US_MAN_RX_PP|macro|US_MAN_RX_PP
DECL|US_MAN_TX_MPOL_Msk|macro|US_MAN_TX_MPOL_Msk
DECL|US_MAN_TX_MPOL_Pos|macro|US_MAN_TX_MPOL_Pos
DECL|US_MAN_TX_MPOL|macro|US_MAN_TX_MPOL
DECL|US_MAN_TX_PL_Msk|macro|US_MAN_TX_PL_Msk
DECL|US_MAN_TX_PL_Pos|macro|US_MAN_TX_PL_Pos
DECL|US_MAN_TX_PL|macro|US_MAN_TX_PL
DECL|US_MAN_TX_PP_ALL_ONE_Val|macro|US_MAN_TX_PP_ALL_ONE_Val
DECL|US_MAN_TX_PP_ALL_ONE|macro|US_MAN_TX_PP_ALL_ONE
DECL|US_MAN_TX_PP_ALL_ZERO_Val|macro|US_MAN_TX_PP_ALL_ZERO_Val
DECL|US_MAN_TX_PP_ALL_ZERO|macro|US_MAN_TX_PP_ALL_ZERO
DECL|US_MAN_TX_PP_Msk|macro|US_MAN_TX_PP_Msk
DECL|US_MAN_TX_PP_ONE_ZERO_Val|macro|US_MAN_TX_PP_ONE_ZERO_Val
DECL|US_MAN_TX_PP_ONE_ZERO|macro|US_MAN_TX_PP_ONE_ZERO
DECL|US_MAN_TX_PP_Pos|macro|US_MAN_TX_PP_Pos
DECL|US_MAN_TX_PP_ZERO_ONE_Val|macro|US_MAN_TX_PP_ZERO_ONE_Val
DECL|US_MAN_TX_PP_ZERO_ONE|macro|US_MAN_TX_PP_ZERO_ONE
DECL|US_MAN_TX_PP|macro|US_MAN_TX_PP
DECL|US_MAN_Type|typedef|} US_MAN_Type;
DECL|US_MAN|member|__IO US_MAN_Type US_MAN; /**< Offset: 0x50 (R/W 32) Manchester Configuration Register */
DECL|US_MAN|member|__IO uint32_t US_MAN; /**< (USART Offset: 0x50) Manchester Configuration Register */
DECL|US_MR_CHMODE_AUTOMATIC_Val|macro|US_MR_CHMODE_AUTOMATIC_Val
DECL|US_MR_CHMODE_AUTOMATIC|macro|US_MR_CHMODE_AUTOMATIC
DECL|US_MR_CHMODE_LOCAL_LOOPBACK_Val|macro|US_MR_CHMODE_LOCAL_LOOPBACK_Val
DECL|US_MR_CHMODE_LOCAL_LOOPBACK|macro|US_MR_CHMODE_LOCAL_LOOPBACK
DECL|US_MR_CHMODE_Msk|macro|US_MR_CHMODE_Msk
DECL|US_MR_CHMODE_NORMAL_Val|macro|US_MR_CHMODE_NORMAL_Val
DECL|US_MR_CHMODE_NORMAL|macro|US_MR_CHMODE_NORMAL
DECL|US_MR_CHMODE_Pos|macro|US_MR_CHMODE_Pos
DECL|US_MR_CHMODE_REMOTE_LOOPBACK_Val|macro|US_MR_CHMODE_REMOTE_LOOPBACK_Val
DECL|US_MR_CHMODE_REMOTE_LOOPBACK|macro|US_MR_CHMODE_REMOTE_LOOPBACK
DECL|US_MR_CHMODE|macro|US_MR_CHMODE
DECL|US_MR_CHRL_5_BIT_Val|macro|US_MR_CHRL_5_BIT_Val
DECL|US_MR_CHRL_5_BIT|macro|US_MR_CHRL_5_BIT
DECL|US_MR_CHRL_6_BIT_Val|macro|US_MR_CHRL_6_BIT_Val
DECL|US_MR_CHRL_6_BIT|macro|US_MR_CHRL_6_BIT
DECL|US_MR_CHRL_7_BIT_Val|macro|US_MR_CHRL_7_BIT_Val
DECL|US_MR_CHRL_7_BIT|macro|US_MR_CHRL_7_BIT
DECL|US_MR_CHRL_8_BIT_Val|macro|US_MR_CHRL_8_BIT_Val
DECL|US_MR_CHRL_8_BIT|macro|US_MR_CHRL_8_BIT
DECL|US_MR_CHRL_Msk|macro|US_MR_CHRL_Msk
DECL|US_MR_CHRL_Pos|macro|US_MR_CHRL_Pos
DECL|US_MR_CHRL|macro|US_MR_CHRL
DECL|US_MR_CLKO_Msk|macro|US_MR_CLKO_Msk
DECL|US_MR_CLKO_Pos|macro|US_MR_CLKO_Pos
DECL|US_MR_CLKO|macro|US_MR_CLKO
DECL|US_MR_DSNACK_Msk|macro|US_MR_DSNACK_Msk
DECL|US_MR_DSNACK_Pos|macro|US_MR_DSNACK_Pos
DECL|US_MR_DSNACK|macro|US_MR_DSNACK
DECL|US_MR_FILTER_Msk|macro|US_MR_FILTER_Msk
DECL|US_MR_FILTER_Pos|macro|US_MR_FILTER_Pos
DECL|US_MR_FILTER|macro|US_MR_FILTER
DECL|US_MR_INACK_Msk|macro|US_MR_INACK_Msk
DECL|US_MR_INACK_Pos|macro|US_MR_INACK_Pos
DECL|US_MR_INACK|macro|US_MR_INACK
DECL|US_MR_INVDATA_Msk|macro|US_MR_INVDATA_Msk
DECL|US_MR_INVDATA_Pos|macro|US_MR_INVDATA_Pos
DECL|US_MR_INVDATA|macro|US_MR_INVDATA
DECL|US_MR_MAN_Msk|macro|US_MR_MAN_Msk
DECL|US_MR_MAN_Pos|macro|US_MR_MAN_Pos
DECL|US_MR_MAN|macro|US_MR_MAN
DECL|US_MR_MASK|macro|US_MR_MASK
DECL|US_MR_MAX_ITERATION_Msk|macro|US_MR_MAX_ITERATION_Msk
DECL|US_MR_MAX_ITERATION_Pos|macro|US_MR_MAX_ITERATION_Pos
DECL|US_MR_MAX_ITERATION|macro|US_MR_MAX_ITERATION
DECL|US_MR_MODE9_Msk|macro|US_MR_MODE9_Msk
DECL|US_MR_MODE9_Pos|macro|US_MR_MODE9_Pos
DECL|US_MR_MODE9|macro|US_MR_MODE9
DECL|US_MR_MODSYNC_Msk|macro|US_MR_MODSYNC_Msk
DECL|US_MR_MODSYNC_Pos|macro|US_MR_MODSYNC_Pos
DECL|US_MR_MODSYNC|macro|US_MR_MODSYNC
DECL|US_MR_MSBF_Msk|macro|US_MR_MSBF_Msk
DECL|US_MR_MSBF_Pos|macro|US_MR_MSBF_Pos
DECL|US_MR_MSBF|macro|US_MR_MSBF
DECL|US_MR_Msk|macro|US_MR_Msk
DECL|US_MR_NBSTOP_1_5_BIT_Val|macro|US_MR_NBSTOP_1_5_BIT_Val
DECL|US_MR_NBSTOP_1_5_BIT|macro|US_MR_NBSTOP_1_5_BIT
DECL|US_MR_NBSTOP_1_BIT_Val|macro|US_MR_NBSTOP_1_BIT_Val
DECL|US_MR_NBSTOP_1_BIT|macro|US_MR_NBSTOP_1_BIT
DECL|US_MR_NBSTOP_2_BIT_Val|macro|US_MR_NBSTOP_2_BIT_Val
DECL|US_MR_NBSTOP_2_BIT|macro|US_MR_NBSTOP_2_BIT
DECL|US_MR_NBSTOP_Msk|macro|US_MR_NBSTOP_Msk
DECL|US_MR_NBSTOP_Pos|macro|US_MR_NBSTOP_Pos
DECL|US_MR_NBSTOP|macro|US_MR_NBSTOP
DECL|US_MR_OFFSET|macro|US_MR_OFFSET
DECL|US_MR_ONEBIT_Msk|macro|US_MR_ONEBIT_Msk
DECL|US_MR_ONEBIT_Pos|macro|US_MR_ONEBIT_Pos
DECL|US_MR_ONEBIT|macro|US_MR_ONEBIT
DECL|US_MR_OVER_Msk|macro|US_MR_OVER_Msk
DECL|US_MR_OVER_Pos|macro|US_MR_OVER_Pos
DECL|US_MR_OVER|macro|US_MR_OVER
DECL|US_MR_PAR_EVEN_Val|macro|US_MR_PAR_EVEN_Val
DECL|US_MR_PAR_EVEN|macro|US_MR_PAR_EVEN
DECL|US_MR_PAR_MARK_Val|macro|US_MR_PAR_MARK_Val
DECL|US_MR_PAR_MARK|macro|US_MR_PAR_MARK
DECL|US_MR_PAR_MULTIDROP_Val|macro|US_MR_PAR_MULTIDROP_Val
DECL|US_MR_PAR_MULTIDROP|macro|US_MR_PAR_MULTIDROP
DECL|US_MR_PAR_Msk|macro|US_MR_PAR_Msk
DECL|US_MR_PAR_NO_Val|macro|US_MR_PAR_NO_Val
DECL|US_MR_PAR_NO|macro|US_MR_PAR_NO
DECL|US_MR_PAR_ODD_Val|macro|US_MR_PAR_ODD_Val
DECL|US_MR_PAR_ODD|macro|US_MR_PAR_ODD
DECL|US_MR_PAR_Pos|macro|US_MR_PAR_Pos
DECL|US_MR_PAR_SPACE_Val|macro|US_MR_PAR_SPACE_Val
DECL|US_MR_PAR_SPACE|macro|US_MR_PAR_SPACE
DECL|US_MR_PAR|macro|US_MR_PAR
DECL|US_MR_SYNC_Msk|macro|US_MR_SYNC_Msk
DECL|US_MR_SYNC_Pos|macro|US_MR_SYNC_Pos
DECL|US_MR_SYNC|macro|US_MR_SYNC
DECL|US_MR_Type|typedef|} US_MR_Type;
DECL|US_MR_USART_MODE_HW_HANDSHAKING_Val|macro|US_MR_USART_MODE_HW_HANDSHAKING_Val
DECL|US_MR_USART_MODE_HW_HANDSHAKING|macro|US_MR_USART_MODE_HW_HANDSHAKING
DECL|US_MR_USART_MODE_IRDA_Val|macro|US_MR_USART_MODE_IRDA_Val
DECL|US_MR_USART_MODE_IRDA|macro|US_MR_USART_MODE_IRDA
DECL|US_MR_USART_MODE_IS07816_T_0_Val|macro|US_MR_USART_MODE_IS07816_T_0_Val
DECL|US_MR_USART_MODE_IS07816_T_0|macro|US_MR_USART_MODE_IS07816_T_0
DECL|US_MR_USART_MODE_IS07816_T_1_Val|macro|US_MR_USART_MODE_IS07816_T_1_Val
DECL|US_MR_USART_MODE_IS07816_T_1|macro|US_MR_USART_MODE_IS07816_T_1
DECL|US_MR_USART_MODE_LON_Val|macro|US_MR_USART_MODE_LON_Val
DECL|US_MR_USART_MODE_LON|macro|US_MR_USART_MODE_LON
DECL|US_MR_USART_MODE_MODEM_Val|macro|US_MR_USART_MODE_MODEM_Val
DECL|US_MR_USART_MODE_MODEM|macro|US_MR_USART_MODE_MODEM
DECL|US_MR_USART_MODE_Msk|macro|US_MR_USART_MODE_Msk
DECL|US_MR_USART_MODE_NORMAL_Val|macro|US_MR_USART_MODE_NORMAL_Val
DECL|US_MR_USART_MODE_NORMAL|macro|US_MR_USART_MODE_NORMAL
DECL|US_MR_USART_MODE_Pos|macro|US_MR_USART_MODE_Pos
DECL|US_MR_USART_MODE_RS485_Val|macro|US_MR_USART_MODE_RS485_Val
DECL|US_MR_USART_MODE_RS485|macro|US_MR_USART_MODE_RS485
DECL|US_MR_USART_MODE_SPI_MASTER_Val|macro|US_MR_USART_MODE_SPI_MASTER_Val
DECL|US_MR_USART_MODE_SPI_MASTER|macro|US_MR_USART_MODE_SPI_MASTER
DECL|US_MR_USART_MODE_SPI_SLAVE_Val|macro|US_MR_USART_MODE_SPI_SLAVE_Val
DECL|US_MR_USART_MODE_SPI_SLAVE|macro|US_MR_USART_MODE_SPI_SLAVE
DECL|US_MR_USART_MODE|macro|US_MR_USART_MODE
DECL|US_MR_USCLKS_DIV_Val|macro|US_MR_USCLKS_DIV_Val
DECL|US_MR_USCLKS_DIV|macro|US_MR_USCLKS_DIV
DECL|US_MR_USCLKS_MCK_Val|macro|US_MR_USCLKS_MCK_Val
DECL|US_MR_USCLKS_MCK|macro|US_MR_USCLKS_MCK
DECL|US_MR_USCLKS_Msk|macro|US_MR_USCLKS_Msk
DECL|US_MR_USCLKS_PCK_Val|macro|US_MR_USCLKS_PCK_Val
DECL|US_MR_USCLKS_PCK|macro|US_MR_USCLKS_PCK
DECL|US_MR_USCLKS_Pos|macro|US_MR_USCLKS_Pos
DECL|US_MR_USCLKS_SCK_Val|macro|US_MR_USCLKS_SCK_Val
DECL|US_MR_USCLKS_SCK|macro|US_MR_USCLKS_SCK
DECL|US_MR_USCLKS|macro|US_MR_USCLKS
DECL|US_MR_VAR_SYNC_Msk|macro|US_MR_VAR_SYNC_Msk
DECL|US_MR_VAR_SYNC_Pos|macro|US_MR_VAR_SYNC_Pos
DECL|US_MR_VAR_SYNC|macro|US_MR_VAR_SYNC
DECL|US_MR|member|__IO US_MR_Type US_MR; /**< Offset: 0x04 (R/W 32) Mode Register */
DECL|US_MR|member|__IO uint32_t US_MR; /**< (USART Offset: 0x04) Mode Register */
DECL|US_NER_MASK|macro|US_NER_MASK
DECL|US_NER_Msk|macro|US_NER_Msk
DECL|US_NER_NB_ERRORS_Msk|macro|US_NER_NB_ERRORS_Msk
DECL|US_NER_NB_ERRORS_Pos|macro|US_NER_NB_ERRORS_Pos
DECL|US_NER_NB_ERRORS|macro|US_NER_NB_ERRORS
DECL|US_NER_OFFSET|macro|US_NER_OFFSET
DECL|US_NER_Type|typedef|} US_NER_Type;
DECL|US_NER|member|__I US_NER_Type US_NER; /**< Offset: 0x44 (R/ 32) Number of Errors Register */
DECL|US_NER|member|__I uint32_t US_NER; /**< (USART Offset: 0x44) Number of Errors Register */
DECL|US_RHR_MASK|macro|US_RHR_MASK
DECL|US_RHR_Msk|macro|US_RHR_Msk
DECL|US_RHR_OFFSET|macro|US_RHR_OFFSET
DECL|US_RHR_RXCHR_Msk|macro|US_RHR_RXCHR_Msk
DECL|US_RHR_RXCHR_Pos|macro|US_RHR_RXCHR_Pos
DECL|US_RHR_RXCHR|macro|US_RHR_RXCHR
DECL|US_RHR_RXSYNH_Msk|macro|US_RHR_RXSYNH_Msk
DECL|US_RHR_RXSYNH_Pos|macro|US_RHR_RXSYNH_Pos
DECL|US_RHR_RXSYNH|macro|US_RHR_RXSYNH
DECL|US_RHR_Type|typedef|} US_RHR_Type;
DECL|US_RHR|member|__I US_RHR_Type US_RHR; /**< Offset: 0x18 (R/ 32) Receive Holding Register */
DECL|US_RHR|member|__I uint32_t US_RHR; /**< (USART Offset: 0x18) Receive Holding Register */
DECL|US_RTOR_MASK|macro|US_RTOR_MASK
DECL|US_RTOR_Msk|macro|US_RTOR_Msk
DECL|US_RTOR_OFFSET|macro|US_RTOR_OFFSET
DECL|US_RTOR_TO_Msk|macro|US_RTOR_TO_Msk
DECL|US_RTOR_TO_Pos|macro|US_RTOR_TO_Pos
DECL|US_RTOR_TO|macro|US_RTOR_TO
DECL|US_RTOR_Type|typedef|} US_RTOR_Type;
DECL|US_RTOR|member|__IO US_RTOR_Type US_RTOR; /**< Offset: 0x24 (R/W 32) Receiver Time-out Register */
DECL|US_RTOR|member|__IO uint32_t US_RTOR; /**< (USART Offset: 0x24) Receiver Time-out Register */
DECL|US_THR_MASK|macro|US_THR_MASK
DECL|US_THR_Msk|macro|US_THR_Msk
DECL|US_THR_OFFSET|macro|US_THR_OFFSET
DECL|US_THR_TXCHR_Msk|macro|US_THR_TXCHR_Msk
DECL|US_THR_TXCHR_Pos|macro|US_THR_TXCHR_Pos
DECL|US_THR_TXCHR|macro|US_THR_TXCHR
DECL|US_THR_TXSYNH_Msk|macro|US_THR_TXSYNH_Msk
DECL|US_THR_TXSYNH_Pos|macro|US_THR_TXSYNH_Pos
DECL|US_THR_TXSYNH|macro|US_THR_TXSYNH
DECL|US_THR_Type|typedef|} US_THR_Type;
DECL|US_THR|member|__O US_THR_Type US_THR; /**< Offset: 0x1C ( /W 32) Transmit Holding Register */
DECL|US_THR|member|__O uint32_t US_THR; /**< (USART Offset: 0x1C) Transmit Holding Register */
DECL|US_TTGR_MASK|macro|US_TTGR_MASK
DECL|US_TTGR_Msk|macro|US_TTGR_Msk
DECL|US_TTGR_OFFSET|macro|US_TTGR_OFFSET
DECL|US_TTGR_TG_Msk|macro|US_TTGR_TG_Msk
DECL|US_TTGR_TG_Pos|macro|US_TTGR_TG_Pos
DECL|US_TTGR_TG|macro|US_TTGR_TG
DECL|US_TTGR_Type|typedef|} US_TTGR_Type;
DECL|US_TTGR|member|__IO US_TTGR_Type US_TTGR; /**< Offset: 0x28 (R/W 32) Transmitter Timeguard Register */
DECL|US_TTGR|member|__IO uint32_t US_TTGR; /**< (USART Offset: 0x28) Transmitter Timeguard Register */
DECL|US_WPMR_MASK|macro|US_WPMR_MASK
DECL|US_WPMR_Msk|macro|US_WPMR_Msk
DECL|US_WPMR_OFFSET|macro|US_WPMR_OFFSET
DECL|US_WPMR_Type|typedef|} US_WPMR_Type;
DECL|US_WPMR_WPEN_Msk|macro|US_WPMR_WPEN_Msk
DECL|US_WPMR_WPEN_Pos|macro|US_WPMR_WPEN_Pos
DECL|US_WPMR_WPEN|macro|US_WPMR_WPEN
DECL|US_WPMR_WPKEY_Msk|macro|US_WPMR_WPKEY_Msk
DECL|US_WPMR_WPKEY_PASSWD_Val|macro|US_WPMR_WPKEY_PASSWD_Val
DECL|US_WPMR_WPKEY_PASSWD|macro|US_WPMR_WPKEY_PASSWD
DECL|US_WPMR_WPKEY_Pos|macro|US_WPMR_WPKEY_Pos
DECL|US_WPMR_WPKEY|macro|US_WPMR_WPKEY
DECL|US_WPMR|member|__IO US_WPMR_Type US_WPMR; /**< Offset: 0xE4 (R/W 32) Write Protection Mode Register */
DECL|US_WPMR|member|__IO uint32_t US_WPMR; /**< (USART Offset: 0xE4) Write Protection Mode Register */
DECL|US_WPSR_MASK|macro|US_WPSR_MASK
DECL|US_WPSR_Msk|macro|US_WPSR_Msk
DECL|US_WPSR_OFFSET|macro|US_WPSR_OFFSET
DECL|US_WPSR_Type|typedef|} US_WPSR_Type;
DECL|US_WPSR_WPVSRC_Msk|macro|US_WPSR_WPVSRC_Msk
DECL|US_WPSR_WPVSRC_Pos|macro|US_WPSR_WPVSRC_Pos
DECL|US_WPSR_WPVSRC|macro|US_WPSR_WPVSRC
DECL|US_WPSR_WPVS_Msk|macro|US_WPSR_WPVS_Msk
DECL|US_WPSR_WPVS_Pos|macro|US_WPSR_WPVS_Pos
DECL|US_WPSR_WPVS|macro|US_WPSR_WPVS
DECL|US_WPSR|member|__I US_WPSR_Type US_WPSR; /**< Offset: 0xE8 (R/ 32) Write Protection Status Register */
DECL|US_WPSR|member|__I uint32_t US_WPSR; /**< (USART Offset: 0xE8) Write Protection Status Register */
DECL|Usart|typedef|} Usart;
DECL|Usart|typedef|} Usart;
DECL|VAR_SYNC|member|uint32_t VAR_SYNC:1; /**< bit: 22 Variable Synchronization of Command/Data Sync Start Frame Delimiter */
DECL|WKUPTYP|member|uint32_t WKUPTYP:1; /**< bit: 7 Wakeup Signal Type */
DECL|WPEN|member|uint32_t WPEN:1; /**< bit: 0 Write Protection Enable */
DECL|WPKEY|member|uint32_t WPKEY:24; /**< bit: 8..31 Write Protection Key */
DECL|WPVSRC|member|uint32_t WPVSRC:16; /**< bit: 8..23 Write Protection Violation Source */
DECL|WPVS|member|uint32_t WPVS:1; /**< bit: 0 Write Protection Violation Status */
DECL|_SAME70_USART_COMPONENT_H_|macro|_SAME70_USART_COMPONENT_H_
DECL|_SAME70_USART_COMPONENT_|macro|_SAME70_USART_COMPONENT_
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
DECL|uint32_t|member|uint32_t :10; /**< bit: 22..31 Reserved */
DECL|uint32_t|member|uint32_t :10; /**< bit: 6..15 Reserved */
DECL|uint32_t|member|uint32_t :13; /**< bit: 19..31 Reserved */
DECL|uint32_t|member|uint32_t :13; /**< bit: 19..31 Reserved */
DECL|uint32_t|member|uint32_t :14; /**< bit: 18..31 Reserved */
DECL|uint32_t|member|uint32_t :15; /**< bit: 17..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :17; /**< bit: 15..31 Reserved */
DECL|uint32_t|member|uint32_t :18; /**< bit: 14..31 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 27 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :24; /**< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /**< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /**< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /**< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /**< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /**< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :28; /**< bit: 4..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 0..1 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 10..11 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 11..12 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 11..12 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 11..12 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 11..12 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 14..15 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 14..15 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 14..15 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 14..15 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 26..27 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 3..4 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 3..4 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 3..4 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 3..4 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 13..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 4..7 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 9..14 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 9..14 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
