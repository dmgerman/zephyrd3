DECL|ACMDIS|member|uint32_t ACMDIS:1; /**< bit: 17 Alternative Command Mode Disable */
DECL|ACMEN|member|uint32_t ACMEN:1; /**< bit: 16 Alternative Command Mode Enable */
DECL|ARBLST|member|uint32_t ARBLST:1; /**< bit: 9 Arbitration Lost (cleared on read) */
DECL|ARBLST|member|uint32_t ARBLST:1; /**< bit: 9 Arbitration Lost Interrupt Disable */
DECL|ARBLST|member|uint32_t ARBLST:1; /**< bit: 9 Arbitration Lost Interrupt Enable */
DECL|ARBLST|member|uint32_t ARBLST:1; /**< bit: 9 Arbitration Lost Interrupt Mask */
DECL|CHDIV|member|uint32_t CHDIV:8; /**< bit: 8..15 Clock High Divider */
DECL|CKDIV|member|uint32_t CKDIV:3; /**< bit: 16..18 Clock Divider */
DECL|CKSRC|member|uint32_t CKSRC:1; /**< bit: 20 Transfer Rate Clock Source */
DECL|CLDIV|member|uint32_t CLDIV:8; /**< bit: 0..7 Clock Low Divider */
DECL|CLEAR|member|uint32_t CLEAR:1; /**< bit: 15 Bus CLEAR Command */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|DADR|member|uint32_t DADR:7; /**< bit: 16..22 Device Address */
DECL|DATAMEN|member|uint32_t DATAMEN:1; /**< bit: 31 Data Matching Enable */
DECL|DATAM|member|uint32_t DATAM:8; /**< bit: 24..31 Data Match */
DECL|EOSACC|member|uint32_t EOSACC:1; /**< bit: 11 End Of Slave Access (cleared on read) */
DECL|EOSACC|member|uint32_t EOSACC:1; /**< bit: 11 End Of Slave Access Interrupt Disable */
DECL|EOSACC|member|uint32_t EOSACC:1; /**< bit: 11 End Of Slave Access Interrupt Enable */
DECL|EOSACC|member|uint32_t EOSACC:1; /**< bit: 11 End Of Slave Access Interrupt Mask */
DECL|FIFODIS|member|uint32_t FIFODIS:1; /**< bit: 29 FIFO Disable */
DECL|FIFOEN|member|uint32_t FIFOEN:1; /**< bit: 28 FIFO Enable */
DECL|FILT|member|uint32_t FILT:1; /**< bit: 0 RX Digital Filter */
DECL|GACC|member|uint32_t GACC:1; /**< bit: 5 General Call Access (cleared on read) */
DECL|GACC|member|uint32_t GACC:1; /**< bit: 5 General Call Access Interrupt Disable */
DECL|GACC|member|uint32_t GACC:1; /**< bit: 5 General Call Access Interrupt Enable */
DECL|GACC|member|uint32_t GACC:1; /**< bit: 5 General Call Access Interrupt Mask */
DECL|HOLD|member|uint32_t HOLD:5; /**< bit: 24..28 TWD Hold Time Versus TWCK Falling */
DECL|HSDIS|member|uint32_t HSDIS:1; /**< bit: 9 TWIHS High-Speed Mode Disabled */
DECL|HSEN|member|uint32_t HSEN:1; /**< bit: 8 TWIHS High-Speed Mode Enabled */
DECL|IADRSZ|member|uint32_t IADRSZ:2; /**< bit: 8..9 Internal Device Address Size */
DECL|IADR|member|uint32_t IADR:24; /**< bit: 0..23 Internal Address */
DECL|LOCKCLR|member|uint32_t LOCKCLR:1; /**< bit: 26 Lock Clear */
DECL|MASK|member|uint32_t MASK:7; /**< bit: 8..14 Slave Address Mask */
DECL|MCACK|member|uint32_t MCACK:1; /**< bit: 16 Master Code Acknowledge (cleared on read) */
DECL|MCACK|member|uint32_t MCACK:1; /**< bit: 16 Master Code Acknowledge Interrupt Disable */
DECL|MCACK|member|uint32_t MCACK:1; /**< bit: 16 Master Code Acknowledge Interrupt Enable */
DECL|MCACK|member|uint32_t MCACK:1; /**< bit: 16 Master Code Acknowledge Interrupt Mask */
DECL|MREAD|member|uint32_t MREAD:1; /**< bit: 12 Master Read Direction */
DECL|MSDIS|member|uint32_t MSDIS:1; /**< bit: 3 TWIHS Master Mode Disabled */
DECL|MSEN|member|uint32_t MSEN:1; /**< bit: 2 TWIHS Master Mode Enabled */
DECL|NACKEN|member|uint32_t NACKEN:1; /**< bit: 0 Slave Receiver Data Phase NACK enable */
DECL|NACK|member|uint32_t NACK:1; /**< bit: 8 Not Acknowledge Interrupt Disable */
DECL|NACK|member|uint32_t NACK:1; /**< bit: 8 Not Acknowledge Interrupt Enable */
DECL|NACK|member|uint32_t NACK:1; /**< bit: 8 Not Acknowledge Interrupt Mask */
DECL|NACK|member|uint32_t NACK:1; /**< bit: 8 Not Acknowledged (cleared on read) */
DECL|OVRE|member|uint32_t OVRE:1; /**< bit: 6 Overrun Error (cleared on read) */
DECL|OVRE|member|uint32_t OVRE:1; /**< bit: 6 Overrun Error Interrupt Disable */
DECL|OVRE|member|uint32_t OVRE:1; /**< bit: 6 Overrun Error Interrupt Enable */
DECL|OVRE|member|uint32_t OVRE:1; /**< bit: 6 Overrun Error Interrupt Mask */
DECL|PADFCFG|member|uint32_t PADFCFG:1; /**< bit: 2 PAD Filter Config */
DECL|PADFEN|member|uint32_t PADFEN:1; /**< bit: 1 PAD Filter Enable */
DECL|PECDIS|member|uint32_t PECDIS:1; /**< bit: 13 Packet Error Checking Disable */
DECL|PECEN|member|uint32_t PECEN:1; /**< bit: 12 Packet Error Checking Enable */
DECL|PECERR|member|uint32_t PECERR:1; /**< bit: 19 PEC Error (cleared on read) */
DECL|PECERR|member|uint32_t PECERR:1; /**< bit: 19 PEC Error Interrupt Disable */
DECL|PECERR|member|uint32_t PECERR:1; /**< bit: 19 PEC Error Interrupt Enable */
DECL|PECERR|member|uint32_t PECERR:1; /**< bit: 19 PEC Error Interrupt Mask */
DECL|PECRQ|member|uint32_t PECRQ:1; /**< bit: 14 PEC Request */
DECL|PRESC|member|uint32_t PRESC:4; /**< bit: 0..3 SMBus Clock Prescaler */
DECL|QUICK|member|uint32_t QUICK:1; /**< bit: 6 SMBus Quick Command */
DECL|REV_TWIHS|macro|REV_TWIHS
DECL|RXDATA|member|uint32_t RXDATA:8; /**< bit: 0..7 Master or Slave Receive Holding Data */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 1 Receive Holding Register Ready (cleared by reading TWIHS_RHR) */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 1 Receive Holding Register Ready Interrupt Disable */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 1 Receive Holding Register Ready Interrupt Enable */
DECL|RXRDY|member|uint32_t RXRDY:1; /**< bit: 1 Receive Holding Register Ready Interrupt Mask */
DECL|Reserved1|member|RoReg8 Reserved1[0xC];
DECL|Reserved1|member|__I uint32_t Reserved1[3];
DECL|Reserved2|member|RoReg8 Reserved2[0x8];
DECL|Reserved2|member|__I uint32_t Reserved2[2];
DECL|Reserved3|member|RoReg8 Reserved3[0x4];
DECL|Reserved3|member|__I uint32_t Reserved3[1];
DECL|Reserved4|member|RoReg8 Reserved4[0x94];
DECL|Reserved4|member|__I uint32_t Reserved4[37];
DECL|SADR1EN|member|uint32_t SADR1EN:1; /**< bit: 28 Slave Address 1 Enable */
DECL|SADR1|member|uint32_t SADR1:7; /**< bit: 0..6 Slave Address 1 */
DECL|SADR2EN|member|uint32_t SADR2EN:1; /**< bit: 29 Slave Address 2 Enable */
DECL|SADR2|member|uint32_t SADR2:7; /**< bit: 8..14 Slave Address 2 */
DECL|SADR3EN|member|uint32_t SADR3EN:1; /**< bit: 30 Slave Address 3 Enable */
DECL|SADR3|member|uint32_t SADR3:7; /**< bit: 16..22 Slave Address 3 */
DECL|SADR|member|uint32_t SADR:7; /**< bit: 16..22 Slave Address */
DECL|SCLWSDIS|member|uint32_t SCLWSDIS:1; /**< bit: 6 Clock Wait State Disable */
DECL|SCLWS|member|uint32_t SCLWS:1; /**< bit: 10 Clock Wait State */
DECL|SCL_WS|member|uint32_t SCL_WS:1; /**< bit: 10 Clock Wait State Interrupt Disable */
DECL|SCL_WS|member|uint32_t SCL_WS:1; /**< bit: 10 Clock Wait State Interrupt Enable */
DECL|SCL_WS|member|uint32_t SCL_WS:1; /**< bit: 10 Clock Wait State Interrupt Mask */
DECL|SCL|member|uint32_t SCL:1; /**< bit: 24 SCL Line Value */
DECL|SDA|member|uint32_t SDA:1; /**< bit: 25 SDA Line Value */
DECL|SMBDAM|member|uint32_t SMBDAM:1; /**< bit: 20 SMBus Default Address Match (cleared on read) */
DECL|SMBDAM|member|uint32_t SMBDAM:1; /**< bit: 20 SMBus Default Address Match Interrupt Disable */
DECL|SMBDAM|member|uint32_t SMBDAM:1; /**< bit: 20 SMBus Default Address Match Interrupt Enable */
DECL|SMBDAM|member|uint32_t SMBDAM:1; /**< bit: 20 SMBus Default Address Match Interrupt Mask */
DECL|SMBDIS|member|uint32_t SMBDIS:1; /**< bit: 11 SMBus Mode Disabled */
DECL|SMBEN|member|uint32_t SMBEN:1; /**< bit: 10 SMBus Mode Enabled */
DECL|SMBHHM|member|uint32_t SMBHHM:1; /**< bit: 21 SMBus Host Header Address Match (cleared on read) */
DECL|SMBHHM|member|uint32_t SMBHHM:1; /**< bit: 21 SMBus Host Header Address Match Interrupt Disable */
DECL|SMBHHM|member|uint32_t SMBHHM:1; /**< bit: 21 SMBus Host Header Address Match Interrupt Enable */
DECL|SMBHHM|member|uint32_t SMBHHM:1; /**< bit: 21 SMBus Host Header Address Match Interrupt Mask */
DECL|SMDA|member|uint32_t SMDA:1; /**< bit: 2 SMBus Default Address */
DECL|SMHH|member|uint32_t SMHH:1; /**< bit: 3 SMBus Host Header */
DECL|START|member|uint32_t START:1; /**< bit: 0 Send a START Condition */
DECL|STOP|member|uint32_t STOP:1; /**< bit: 1 Send a STOP Condition */
DECL|SVACC|member|uint32_t SVACC:1; /**< bit: 4 Slave Access */
DECL|SVACC|member|uint32_t SVACC:1; /**< bit: 4 Slave Access Interrupt Disable */
DECL|SVACC|member|uint32_t SVACC:1; /**< bit: 4 Slave Access Interrupt Enable */
DECL|SVACC|member|uint32_t SVACC:1; /**< bit: 4 Slave Access Interrupt Mask */
DECL|SVDIS|member|uint32_t SVDIS:1; /**< bit: 5 TWIHS Slave Mode Disabled */
DECL|SVEN|member|uint32_t SVEN:1; /**< bit: 4 TWIHS Slave Mode Enabled */
DECL|SVREAD|member|uint32_t SVREAD:1; /**< bit: 3 Slave Read */
DECL|SWRST|member|uint32_t SWRST:1; /**< bit: 7 Software Reset */
DECL|THMAX|member|uint32_t THMAX:8; /**< bit: 24..31 Clock High Maximum Cycles */
DECL|THRCLR|member|uint32_t THRCLR:1; /**< bit: 24 Transmit Holding Register Clear */
DECL|THRES|member|uint32_t THRES:3; /**< bit: 8..10 Digital Filter Threshold */
DECL|TLOWM|member|uint32_t TLOWM:8; /**< bit: 16..23 Master Clock Stretch Maximum Cycles */
DECL|TLOWS|member|uint32_t TLOWS:8; /**< bit: 8..15 Slave Clock Stretch Maximum Cycles */
DECL|TOUT|member|uint32_t TOUT:1; /**< bit: 18 Timeout Error (cleared on read) */
DECL|TOUT|member|uint32_t TOUT:1; /**< bit: 18 Timeout Error Interrupt Disable */
DECL|TOUT|member|uint32_t TOUT:1; /**< bit: 18 Timeout Error Interrupt Enable */
DECL|TOUT|member|uint32_t TOUT:1; /**< bit: 18 Timeout Error Interrupt Mask */
DECL|TWIHS_11210|macro|TWIHS_11210
DECL|TWIHS_CR_ACMDIS_Msk|macro|TWIHS_CR_ACMDIS_Msk
DECL|TWIHS_CR_ACMDIS_Pos|macro|TWIHS_CR_ACMDIS_Pos
DECL|TWIHS_CR_ACMDIS|macro|TWIHS_CR_ACMDIS
DECL|TWIHS_CR_ACMEN_Msk|macro|TWIHS_CR_ACMEN_Msk
DECL|TWIHS_CR_ACMEN_Pos|macro|TWIHS_CR_ACMEN_Pos
DECL|TWIHS_CR_ACMEN|macro|TWIHS_CR_ACMEN
DECL|TWIHS_CR_CLEAR_Msk|macro|TWIHS_CR_CLEAR_Msk
DECL|TWIHS_CR_CLEAR_Pos|macro|TWIHS_CR_CLEAR_Pos
DECL|TWIHS_CR_CLEAR|macro|TWIHS_CR_CLEAR
DECL|TWIHS_CR_FIFODIS_Msk|macro|TWIHS_CR_FIFODIS_Msk
DECL|TWIHS_CR_FIFODIS_Pos|macro|TWIHS_CR_FIFODIS_Pos
DECL|TWIHS_CR_FIFODIS|macro|TWIHS_CR_FIFODIS
DECL|TWIHS_CR_FIFOEN_Msk|macro|TWIHS_CR_FIFOEN_Msk
DECL|TWIHS_CR_FIFOEN_Pos|macro|TWIHS_CR_FIFOEN_Pos
DECL|TWIHS_CR_FIFOEN|macro|TWIHS_CR_FIFOEN
DECL|TWIHS_CR_HSDIS_Msk|macro|TWIHS_CR_HSDIS_Msk
DECL|TWIHS_CR_HSDIS_Pos|macro|TWIHS_CR_HSDIS_Pos
DECL|TWIHS_CR_HSDIS|macro|TWIHS_CR_HSDIS
DECL|TWIHS_CR_HSEN_Msk|macro|TWIHS_CR_HSEN_Msk
DECL|TWIHS_CR_HSEN_Pos|macro|TWIHS_CR_HSEN_Pos
DECL|TWIHS_CR_HSEN|macro|TWIHS_CR_HSEN
DECL|TWIHS_CR_LOCKCLR_Msk|macro|TWIHS_CR_LOCKCLR_Msk
DECL|TWIHS_CR_LOCKCLR_Pos|macro|TWIHS_CR_LOCKCLR_Pos
DECL|TWIHS_CR_LOCKCLR|macro|TWIHS_CR_LOCKCLR
DECL|TWIHS_CR_MASK|macro|TWIHS_CR_MASK
DECL|TWIHS_CR_MSDIS_Msk|macro|TWIHS_CR_MSDIS_Msk
DECL|TWIHS_CR_MSDIS_Pos|macro|TWIHS_CR_MSDIS_Pos
DECL|TWIHS_CR_MSDIS|macro|TWIHS_CR_MSDIS
DECL|TWIHS_CR_MSEN_Msk|macro|TWIHS_CR_MSEN_Msk
DECL|TWIHS_CR_MSEN_Pos|macro|TWIHS_CR_MSEN_Pos
DECL|TWIHS_CR_MSEN|macro|TWIHS_CR_MSEN
DECL|TWIHS_CR_Msk|macro|TWIHS_CR_Msk
DECL|TWIHS_CR_OFFSET|macro|TWIHS_CR_OFFSET
DECL|TWIHS_CR_PECDIS_Msk|macro|TWIHS_CR_PECDIS_Msk
DECL|TWIHS_CR_PECDIS_Pos|macro|TWIHS_CR_PECDIS_Pos
DECL|TWIHS_CR_PECDIS|macro|TWIHS_CR_PECDIS
DECL|TWIHS_CR_PECEN_Msk|macro|TWIHS_CR_PECEN_Msk
DECL|TWIHS_CR_PECEN_Pos|macro|TWIHS_CR_PECEN_Pos
DECL|TWIHS_CR_PECEN|macro|TWIHS_CR_PECEN
DECL|TWIHS_CR_PECRQ_Msk|macro|TWIHS_CR_PECRQ_Msk
DECL|TWIHS_CR_PECRQ_Pos|macro|TWIHS_CR_PECRQ_Pos
DECL|TWIHS_CR_PECRQ|macro|TWIHS_CR_PECRQ
DECL|TWIHS_CR_QUICK_Msk|macro|TWIHS_CR_QUICK_Msk
DECL|TWIHS_CR_QUICK_Pos|macro|TWIHS_CR_QUICK_Pos
DECL|TWIHS_CR_QUICK|macro|TWIHS_CR_QUICK
DECL|TWIHS_CR_SMBDIS_Msk|macro|TWIHS_CR_SMBDIS_Msk
DECL|TWIHS_CR_SMBDIS_Pos|macro|TWIHS_CR_SMBDIS_Pos
DECL|TWIHS_CR_SMBDIS|macro|TWIHS_CR_SMBDIS
DECL|TWIHS_CR_SMBEN_Msk|macro|TWIHS_CR_SMBEN_Msk
DECL|TWIHS_CR_SMBEN_Pos|macro|TWIHS_CR_SMBEN_Pos
DECL|TWIHS_CR_SMBEN|macro|TWIHS_CR_SMBEN
DECL|TWIHS_CR_START_Msk|macro|TWIHS_CR_START_Msk
DECL|TWIHS_CR_START_Pos|macro|TWIHS_CR_START_Pos
DECL|TWIHS_CR_START|macro|TWIHS_CR_START
DECL|TWIHS_CR_STOP_Msk|macro|TWIHS_CR_STOP_Msk
DECL|TWIHS_CR_STOP_Pos|macro|TWIHS_CR_STOP_Pos
DECL|TWIHS_CR_STOP|macro|TWIHS_CR_STOP
DECL|TWIHS_CR_SVDIS_Msk|macro|TWIHS_CR_SVDIS_Msk
DECL|TWIHS_CR_SVDIS_Pos|macro|TWIHS_CR_SVDIS_Pos
DECL|TWIHS_CR_SVDIS|macro|TWIHS_CR_SVDIS
DECL|TWIHS_CR_SVEN_Msk|macro|TWIHS_CR_SVEN_Msk
DECL|TWIHS_CR_SVEN_Pos|macro|TWIHS_CR_SVEN_Pos
DECL|TWIHS_CR_SVEN|macro|TWIHS_CR_SVEN
DECL|TWIHS_CR_SWRST_Msk|macro|TWIHS_CR_SWRST_Msk
DECL|TWIHS_CR_SWRST_Pos|macro|TWIHS_CR_SWRST_Pos
DECL|TWIHS_CR_SWRST|macro|TWIHS_CR_SWRST
DECL|TWIHS_CR_THRCLR_Msk|macro|TWIHS_CR_THRCLR_Msk
DECL|TWIHS_CR_THRCLR_Pos|macro|TWIHS_CR_THRCLR_Pos
DECL|TWIHS_CR_THRCLR|macro|TWIHS_CR_THRCLR
DECL|TWIHS_CR_Type|typedef|} TWIHS_CR_Type;
DECL|TWIHS_CR|member|__O TWIHS_CR_Type TWIHS_CR; /**< Offset: 0x00 ( /W 32) Control Register */
DECL|TWIHS_CR|member|__O uint32_t TWIHS_CR; /**< (TWIHS Offset: 0x00) Control Register */
DECL|TWIHS_CWGR_CHDIV_Msk|macro|TWIHS_CWGR_CHDIV_Msk
DECL|TWIHS_CWGR_CHDIV_Pos|macro|TWIHS_CWGR_CHDIV_Pos
DECL|TWIHS_CWGR_CHDIV|macro|TWIHS_CWGR_CHDIV
DECL|TWIHS_CWGR_CKDIV_Msk|macro|TWIHS_CWGR_CKDIV_Msk
DECL|TWIHS_CWGR_CKDIV_Pos|macro|TWIHS_CWGR_CKDIV_Pos
DECL|TWIHS_CWGR_CKDIV|macro|TWIHS_CWGR_CKDIV
DECL|TWIHS_CWGR_CKSRC_Msk|macro|TWIHS_CWGR_CKSRC_Msk
DECL|TWIHS_CWGR_CKSRC_Pos|macro|TWIHS_CWGR_CKSRC_Pos
DECL|TWIHS_CWGR_CKSRC|macro|TWIHS_CWGR_CKSRC
DECL|TWIHS_CWGR_CLDIV_Msk|macro|TWIHS_CWGR_CLDIV_Msk
DECL|TWIHS_CWGR_CLDIV_Pos|macro|TWIHS_CWGR_CLDIV_Pos
DECL|TWIHS_CWGR_CLDIV|macro|TWIHS_CWGR_CLDIV
DECL|TWIHS_CWGR_HOLD_Msk|macro|TWIHS_CWGR_HOLD_Msk
DECL|TWIHS_CWGR_HOLD_Pos|macro|TWIHS_CWGR_HOLD_Pos
DECL|TWIHS_CWGR_HOLD|macro|TWIHS_CWGR_HOLD
DECL|TWIHS_CWGR_MASK|macro|TWIHS_CWGR_MASK
DECL|TWIHS_CWGR_Msk|macro|TWIHS_CWGR_Msk
DECL|TWIHS_CWGR_OFFSET|macro|TWIHS_CWGR_OFFSET
DECL|TWIHS_CWGR_Type|typedef|} TWIHS_CWGR_Type;
DECL|TWIHS_CWGR|member|__IO TWIHS_CWGR_Type TWIHS_CWGR; /**< Offset: 0x10 (R/W 32) Clock Waveform Generator Register */
DECL|TWIHS_CWGR|member|__IO uint32_t TWIHS_CWGR; /**< (TWIHS Offset: 0x10) Clock Waveform Generator Register */
DECL|TWIHS_FILTR_FILT_Msk|macro|TWIHS_FILTR_FILT_Msk
DECL|TWIHS_FILTR_FILT_Pos|macro|TWIHS_FILTR_FILT_Pos
DECL|TWIHS_FILTR_FILT|macro|TWIHS_FILTR_FILT
DECL|TWIHS_FILTR_MASK|macro|TWIHS_FILTR_MASK
DECL|TWIHS_FILTR_Msk|macro|TWIHS_FILTR_Msk
DECL|TWIHS_FILTR_OFFSET|macro|TWIHS_FILTR_OFFSET
DECL|TWIHS_FILTR_PADFCFG_Msk|macro|TWIHS_FILTR_PADFCFG_Msk
DECL|TWIHS_FILTR_PADFCFG_Pos|macro|TWIHS_FILTR_PADFCFG_Pos
DECL|TWIHS_FILTR_PADFCFG|macro|TWIHS_FILTR_PADFCFG
DECL|TWIHS_FILTR_PADFEN_Msk|macro|TWIHS_FILTR_PADFEN_Msk
DECL|TWIHS_FILTR_PADFEN_Pos|macro|TWIHS_FILTR_PADFEN_Pos
DECL|TWIHS_FILTR_PADFEN|macro|TWIHS_FILTR_PADFEN
DECL|TWIHS_FILTR_THRES_Msk|macro|TWIHS_FILTR_THRES_Msk
DECL|TWIHS_FILTR_THRES_Pos|macro|TWIHS_FILTR_THRES_Pos
DECL|TWIHS_FILTR_THRES|macro|TWIHS_FILTR_THRES
DECL|TWIHS_FILTR_Type|typedef|} TWIHS_FILTR_Type;
DECL|TWIHS_FILTR|member|__IO TWIHS_FILTR_Type TWIHS_FILTR; /**< Offset: 0x44 (R/W 32) Filter Register */
DECL|TWIHS_FILTR|member|__IO uint32_t TWIHS_FILTR; /**< (TWIHS Offset: 0x44) Filter Register */
DECL|TWIHS_IADR_IADR_Msk|macro|TWIHS_IADR_IADR_Msk
DECL|TWIHS_IADR_IADR_Pos|macro|TWIHS_IADR_IADR_Pos
DECL|TWIHS_IADR_IADR|macro|TWIHS_IADR_IADR
DECL|TWIHS_IADR_MASK|macro|TWIHS_IADR_MASK
DECL|TWIHS_IADR_Msk|macro|TWIHS_IADR_Msk
DECL|TWIHS_IADR_OFFSET|macro|TWIHS_IADR_OFFSET
DECL|TWIHS_IADR_Type|typedef|} TWIHS_IADR_Type;
DECL|TWIHS_IADR|member|__IO TWIHS_IADR_Type TWIHS_IADR; /**< Offset: 0x0C (R/W 32) Internal Address Register */
DECL|TWIHS_IADR|member|__IO uint32_t TWIHS_IADR; /**< (TWIHS Offset: 0x0C) Internal Address Register */
DECL|TWIHS_IDR_ARBLST_Msk|macro|TWIHS_IDR_ARBLST_Msk
DECL|TWIHS_IDR_ARBLST_Pos|macro|TWIHS_IDR_ARBLST_Pos
DECL|TWIHS_IDR_ARBLST|macro|TWIHS_IDR_ARBLST
DECL|TWIHS_IDR_EOSACC_Msk|macro|TWIHS_IDR_EOSACC_Msk
DECL|TWIHS_IDR_EOSACC_Pos|macro|TWIHS_IDR_EOSACC_Pos
DECL|TWIHS_IDR_EOSACC|macro|TWIHS_IDR_EOSACC
DECL|TWIHS_IDR_GACC_Msk|macro|TWIHS_IDR_GACC_Msk
DECL|TWIHS_IDR_GACC_Pos|macro|TWIHS_IDR_GACC_Pos
DECL|TWIHS_IDR_GACC|macro|TWIHS_IDR_GACC
DECL|TWIHS_IDR_MASK|macro|TWIHS_IDR_MASK
DECL|TWIHS_IDR_MCACK_Msk|macro|TWIHS_IDR_MCACK_Msk
DECL|TWIHS_IDR_MCACK_Pos|macro|TWIHS_IDR_MCACK_Pos
DECL|TWIHS_IDR_MCACK|macro|TWIHS_IDR_MCACK
DECL|TWIHS_IDR_Msk|macro|TWIHS_IDR_Msk
DECL|TWIHS_IDR_NACK_Msk|macro|TWIHS_IDR_NACK_Msk
DECL|TWIHS_IDR_NACK_Pos|macro|TWIHS_IDR_NACK_Pos
DECL|TWIHS_IDR_NACK|macro|TWIHS_IDR_NACK
DECL|TWIHS_IDR_OFFSET|macro|TWIHS_IDR_OFFSET
DECL|TWIHS_IDR_OVRE_Msk|macro|TWIHS_IDR_OVRE_Msk
DECL|TWIHS_IDR_OVRE_Pos|macro|TWIHS_IDR_OVRE_Pos
DECL|TWIHS_IDR_OVRE|macro|TWIHS_IDR_OVRE
DECL|TWIHS_IDR_PECERR_Msk|macro|TWIHS_IDR_PECERR_Msk
DECL|TWIHS_IDR_PECERR_Pos|macro|TWIHS_IDR_PECERR_Pos
DECL|TWIHS_IDR_PECERR|macro|TWIHS_IDR_PECERR
DECL|TWIHS_IDR_RXRDY_Msk|macro|TWIHS_IDR_RXRDY_Msk
DECL|TWIHS_IDR_RXRDY_Pos|macro|TWIHS_IDR_RXRDY_Pos
DECL|TWIHS_IDR_RXRDY|macro|TWIHS_IDR_RXRDY
DECL|TWIHS_IDR_SCL_WS_Msk|macro|TWIHS_IDR_SCL_WS_Msk
DECL|TWIHS_IDR_SCL_WS_Pos|macro|TWIHS_IDR_SCL_WS_Pos
DECL|TWIHS_IDR_SCL_WS|macro|TWIHS_IDR_SCL_WS
DECL|TWIHS_IDR_SMBDAM_Msk|macro|TWIHS_IDR_SMBDAM_Msk
DECL|TWIHS_IDR_SMBDAM_Pos|macro|TWIHS_IDR_SMBDAM_Pos
DECL|TWIHS_IDR_SMBDAM|macro|TWIHS_IDR_SMBDAM
DECL|TWIHS_IDR_SMBHHM_Msk|macro|TWIHS_IDR_SMBHHM_Msk
DECL|TWIHS_IDR_SMBHHM_Pos|macro|TWIHS_IDR_SMBHHM_Pos
DECL|TWIHS_IDR_SMBHHM|macro|TWIHS_IDR_SMBHHM
DECL|TWIHS_IDR_SVACC_Msk|macro|TWIHS_IDR_SVACC_Msk
DECL|TWIHS_IDR_SVACC_Pos|macro|TWIHS_IDR_SVACC_Pos
DECL|TWIHS_IDR_SVACC|macro|TWIHS_IDR_SVACC
DECL|TWIHS_IDR_TOUT_Msk|macro|TWIHS_IDR_TOUT_Msk
DECL|TWIHS_IDR_TOUT_Pos|macro|TWIHS_IDR_TOUT_Pos
DECL|TWIHS_IDR_TOUT|macro|TWIHS_IDR_TOUT
DECL|TWIHS_IDR_TXCOMP_Msk|macro|TWIHS_IDR_TXCOMP_Msk
DECL|TWIHS_IDR_TXCOMP_Pos|macro|TWIHS_IDR_TXCOMP_Pos
DECL|TWIHS_IDR_TXCOMP|macro|TWIHS_IDR_TXCOMP
DECL|TWIHS_IDR_TXRDY_Msk|macro|TWIHS_IDR_TXRDY_Msk
DECL|TWIHS_IDR_TXRDY_Pos|macro|TWIHS_IDR_TXRDY_Pos
DECL|TWIHS_IDR_TXRDY|macro|TWIHS_IDR_TXRDY
DECL|TWIHS_IDR_Type|typedef|} TWIHS_IDR_Type;
DECL|TWIHS_IDR_UNRE_Msk|macro|TWIHS_IDR_UNRE_Msk
DECL|TWIHS_IDR_UNRE_Pos|macro|TWIHS_IDR_UNRE_Pos
DECL|TWIHS_IDR_UNRE|macro|TWIHS_IDR_UNRE
DECL|TWIHS_IDR|member|__O TWIHS_IDR_Type TWIHS_IDR; /**< Offset: 0x28 ( /W 32) Interrupt Disable Register */
DECL|TWIHS_IDR|member|__O uint32_t TWIHS_IDR; /**< (TWIHS Offset: 0x28) Interrupt Disable Register */
DECL|TWIHS_IER_ARBLST_Msk|macro|TWIHS_IER_ARBLST_Msk
DECL|TWIHS_IER_ARBLST_Pos|macro|TWIHS_IER_ARBLST_Pos
DECL|TWIHS_IER_ARBLST|macro|TWIHS_IER_ARBLST
DECL|TWIHS_IER_EOSACC_Msk|macro|TWIHS_IER_EOSACC_Msk
DECL|TWIHS_IER_EOSACC_Pos|macro|TWIHS_IER_EOSACC_Pos
DECL|TWIHS_IER_EOSACC|macro|TWIHS_IER_EOSACC
DECL|TWIHS_IER_GACC_Msk|macro|TWIHS_IER_GACC_Msk
DECL|TWIHS_IER_GACC_Pos|macro|TWIHS_IER_GACC_Pos
DECL|TWIHS_IER_GACC|macro|TWIHS_IER_GACC
DECL|TWIHS_IER_MASK|macro|TWIHS_IER_MASK
DECL|TWIHS_IER_MCACK_Msk|macro|TWIHS_IER_MCACK_Msk
DECL|TWIHS_IER_MCACK_Pos|macro|TWIHS_IER_MCACK_Pos
DECL|TWIHS_IER_MCACK|macro|TWIHS_IER_MCACK
DECL|TWIHS_IER_Msk|macro|TWIHS_IER_Msk
DECL|TWIHS_IER_NACK_Msk|macro|TWIHS_IER_NACK_Msk
DECL|TWIHS_IER_NACK_Pos|macro|TWIHS_IER_NACK_Pos
DECL|TWIHS_IER_NACK|macro|TWIHS_IER_NACK
DECL|TWIHS_IER_OFFSET|macro|TWIHS_IER_OFFSET
DECL|TWIHS_IER_OVRE_Msk|macro|TWIHS_IER_OVRE_Msk
DECL|TWIHS_IER_OVRE_Pos|macro|TWIHS_IER_OVRE_Pos
DECL|TWIHS_IER_OVRE|macro|TWIHS_IER_OVRE
DECL|TWIHS_IER_PECERR_Msk|macro|TWIHS_IER_PECERR_Msk
DECL|TWIHS_IER_PECERR_Pos|macro|TWIHS_IER_PECERR_Pos
DECL|TWIHS_IER_PECERR|macro|TWIHS_IER_PECERR
DECL|TWIHS_IER_RXRDY_Msk|macro|TWIHS_IER_RXRDY_Msk
DECL|TWIHS_IER_RXRDY_Pos|macro|TWIHS_IER_RXRDY_Pos
DECL|TWIHS_IER_RXRDY|macro|TWIHS_IER_RXRDY
DECL|TWIHS_IER_SCL_WS_Msk|macro|TWIHS_IER_SCL_WS_Msk
DECL|TWIHS_IER_SCL_WS_Pos|macro|TWIHS_IER_SCL_WS_Pos
DECL|TWIHS_IER_SCL_WS|macro|TWIHS_IER_SCL_WS
DECL|TWIHS_IER_SMBDAM_Msk|macro|TWIHS_IER_SMBDAM_Msk
DECL|TWIHS_IER_SMBDAM_Pos|macro|TWIHS_IER_SMBDAM_Pos
DECL|TWIHS_IER_SMBDAM|macro|TWIHS_IER_SMBDAM
DECL|TWIHS_IER_SMBHHM_Msk|macro|TWIHS_IER_SMBHHM_Msk
DECL|TWIHS_IER_SMBHHM_Pos|macro|TWIHS_IER_SMBHHM_Pos
DECL|TWIHS_IER_SMBHHM|macro|TWIHS_IER_SMBHHM
DECL|TWIHS_IER_SVACC_Msk|macro|TWIHS_IER_SVACC_Msk
DECL|TWIHS_IER_SVACC_Pos|macro|TWIHS_IER_SVACC_Pos
DECL|TWIHS_IER_SVACC|macro|TWIHS_IER_SVACC
DECL|TWIHS_IER_TOUT_Msk|macro|TWIHS_IER_TOUT_Msk
DECL|TWIHS_IER_TOUT_Pos|macro|TWIHS_IER_TOUT_Pos
DECL|TWIHS_IER_TOUT|macro|TWIHS_IER_TOUT
DECL|TWIHS_IER_TXCOMP_Msk|macro|TWIHS_IER_TXCOMP_Msk
DECL|TWIHS_IER_TXCOMP_Pos|macro|TWIHS_IER_TXCOMP_Pos
DECL|TWIHS_IER_TXCOMP|macro|TWIHS_IER_TXCOMP
DECL|TWIHS_IER_TXRDY_Msk|macro|TWIHS_IER_TXRDY_Msk
DECL|TWIHS_IER_TXRDY_Pos|macro|TWIHS_IER_TXRDY_Pos
DECL|TWIHS_IER_TXRDY|macro|TWIHS_IER_TXRDY
DECL|TWIHS_IER_Type|typedef|} TWIHS_IER_Type;
DECL|TWIHS_IER_UNRE_Msk|macro|TWIHS_IER_UNRE_Msk
DECL|TWIHS_IER_UNRE_Pos|macro|TWIHS_IER_UNRE_Pos
DECL|TWIHS_IER_UNRE|macro|TWIHS_IER_UNRE
DECL|TWIHS_IER|member|__O TWIHS_IER_Type TWIHS_IER; /**< Offset: 0x24 ( /W 32) Interrupt Enable Register */
DECL|TWIHS_IER|member|__O uint32_t TWIHS_IER; /**< (TWIHS Offset: 0x24) Interrupt Enable Register */
DECL|TWIHS_IMR_ARBLST_Msk|macro|TWIHS_IMR_ARBLST_Msk
DECL|TWIHS_IMR_ARBLST_Pos|macro|TWIHS_IMR_ARBLST_Pos
DECL|TWIHS_IMR_ARBLST|macro|TWIHS_IMR_ARBLST
DECL|TWIHS_IMR_EOSACC_Msk|macro|TWIHS_IMR_EOSACC_Msk
DECL|TWIHS_IMR_EOSACC_Pos|macro|TWIHS_IMR_EOSACC_Pos
DECL|TWIHS_IMR_EOSACC|macro|TWIHS_IMR_EOSACC
DECL|TWIHS_IMR_GACC_Msk|macro|TWIHS_IMR_GACC_Msk
DECL|TWIHS_IMR_GACC_Pos|macro|TWIHS_IMR_GACC_Pos
DECL|TWIHS_IMR_GACC|macro|TWIHS_IMR_GACC
DECL|TWIHS_IMR_MASK|macro|TWIHS_IMR_MASK
DECL|TWIHS_IMR_MCACK_Msk|macro|TWIHS_IMR_MCACK_Msk
DECL|TWIHS_IMR_MCACK_Pos|macro|TWIHS_IMR_MCACK_Pos
DECL|TWIHS_IMR_MCACK|macro|TWIHS_IMR_MCACK
DECL|TWIHS_IMR_Msk|macro|TWIHS_IMR_Msk
DECL|TWIHS_IMR_NACK_Msk|macro|TWIHS_IMR_NACK_Msk
DECL|TWIHS_IMR_NACK_Pos|macro|TWIHS_IMR_NACK_Pos
DECL|TWIHS_IMR_NACK|macro|TWIHS_IMR_NACK
DECL|TWIHS_IMR_OFFSET|macro|TWIHS_IMR_OFFSET
DECL|TWIHS_IMR_OVRE_Msk|macro|TWIHS_IMR_OVRE_Msk
DECL|TWIHS_IMR_OVRE_Pos|macro|TWIHS_IMR_OVRE_Pos
DECL|TWIHS_IMR_OVRE|macro|TWIHS_IMR_OVRE
DECL|TWIHS_IMR_PECERR_Msk|macro|TWIHS_IMR_PECERR_Msk
DECL|TWIHS_IMR_PECERR_Pos|macro|TWIHS_IMR_PECERR_Pos
DECL|TWIHS_IMR_PECERR|macro|TWIHS_IMR_PECERR
DECL|TWIHS_IMR_RXRDY_Msk|macro|TWIHS_IMR_RXRDY_Msk
DECL|TWIHS_IMR_RXRDY_Pos|macro|TWIHS_IMR_RXRDY_Pos
DECL|TWIHS_IMR_RXRDY|macro|TWIHS_IMR_RXRDY
DECL|TWIHS_IMR_SCL_WS_Msk|macro|TWIHS_IMR_SCL_WS_Msk
DECL|TWIHS_IMR_SCL_WS_Pos|macro|TWIHS_IMR_SCL_WS_Pos
DECL|TWIHS_IMR_SCL_WS|macro|TWIHS_IMR_SCL_WS
DECL|TWIHS_IMR_SMBDAM_Msk|macro|TWIHS_IMR_SMBDAM_Msk
DECL|TWIHS_IMR_SMBDAM_Pos|macro|TWIHS_IMR_SMBDAM_Pos
DECL|TWIHS_IMR_SMBDAM|macro|TWIHS_IMR_SMBDAM
DECL|TWIHS_IMR_SMBHHM_Msk|macro|TWIHS_IMR_SMBHHM_Msk
DECL|TWIHS_IMR_SMBHHM_Pos|macro|TWIHS_IMR_SMBHHM_Pos
DECL|TWIHS_IMR_SMBHHM|macro|TWIHS_IMR_SMBHHM
DECL|TWIHS_IMR_SVACC_Msk|macro|TWIHS_IMR_SVACC_Msk
DECL|TWIHS_IMR_SVACC_Pos|macro|TWIHS_IMR_SVACC_Pos
DECL|TWIHS_IMR_SVACC|macro|TWIHS_IMR_SVACC
DECL|TWIHS_IMR_TOUT_Msk|macro|TWIHS_IMR_TOUT_Msk
DECL|TWIHS_IMR_TOUT_Pos|macro|TWIHS_IMR_TOUT_Pos
DECL|TWIHS_IMR_TOUT|macro|TWIHS_IMR_TOUT
DECL|TWIHS_IMR_TXCOMP_Msk|macro|TWIHS_IMR_TXCOMP_Msk
DECL|TWIHS_IMR_TXCOMP_Pos|macro|TWIHS_IMR_TXCOMP_Pos
DECL|TWIHS_IMR_TXCOMP|macro|TWIHS_IMR_TXCOMP
DECL|TWIHS_IMR_TXRDY_Msk|macro|TWIHS_IMR_TXRDY_Msk
DECL|TWIHS_IMR_TXRDY_Pos|macro|TWIHS_IMR_TXRDY_Pos
DECL|TWIHS_IMR_TXRDY|macro|TWIHS_IMR_TXRDY
DECL|TWIHS_IMR_Type|typedef|} TWIHS_IMR_Type;
DECL|TWIHS_IMR_UNRE_Msk|macro|TWIHS_IMR_UNRE_Msk
DECL|TWIHS_IMR_UNRE_Pos|macro|TWIHS_IMR_UNRE_Pos
DECL|TWIHS_IMR_UNRE|macro|TWIHS_IMR_UNRE
DECL|TWIHS_IMR|member|__I TWIHS_IMR_Type TWIHS_IMR; /**< Offset: 0x2C (R/ 32) Interrupt Mask Register */
DECL|TWIHS_IMR|member|__I uint32_t TWIHS_IMR; /**< (TWIHS Offset: 0x2C) Interrupt Mask Register */
DECL|TWIHS_MMR_DADR_Msk|macro|TWIHS_MMR_DADR_Msk
DECL|TWIHS_MMR_DADR_Pos|macro|TWIHS_MMR_DADR_Pos
DECL|TWIHS_MMR_DADR|macro|TWIHS_MMR_DADR
DECL|TWIHS_MMR_IADRSZ_1_BYTE_Val|macro|TWIHS_MMR_IADRSZ_1_BYTE_Val
DECL|TWIHS_MMR_IADRSZ_1_BYTE|macro|TWIHS_MMR_IADRSZ_1_BYTE
DECL|TWIHS_MMR_IADRSZ_2_BYTE_Val|macro|TWIHS_MMR_IADRSZ_2_BYTE_Val
DECL|TWIHS_MMR_IADRSZ_2_BYTE|macro|TWIHS_MMR_IADRSZ_2_BYTE
DECL|TWIHS_MMR_IADRSZ_3_BYTE_Val|macro|TWIHS_MMR_IADRSZ_3_BYTE_Val
DECL|TWIHS_MMR_IADRSZ_3_BYTE|macro|TWIHS_MMR_IADRSZ_3_BYTE
DECL|TWIHS_MMR_IADRSZ_Msk|macro|TWIHS_MMR_IADRSZ_Msk
DECL|TWIHS_MMR_IADRSZ_NONE_Val|macro|TWIHS_MMR_IADRSZ_NONE_Val
DECL|TWIHS_MMR_IADRSZ_NONE|macro|TWIHS_MMR_IADRSZ_NONE
DECL|TWIHS_MMR_IADRSZ_Pos|macro|TWIHS_MMR_IADRSZ_Pos
DECL|TWIHS_MMR_IADRSZ|macro|TWIHS_MMR_IADRSZ
DECL|TWIHS_MMR_MASK|macro|TWIHS_MMR_MASK
DECL|TWIHS_MMR_MREAD_Msk|macro|TWIHS_MMR_MREAD_Msk
DECL|TWIHS_MMR_MREAD_Pos|macro|TWIHS_MMR_MREAD_Pos
DECL|TWIHS_MMR_MREAD|macro|TWIHS_MMR_MREAD
DECL|TWIHS_MMR_Msk|macro|TWIHS_MMR_Msk
DECL|TWIHS_MMR_OFFSET|macro|TWIHS_MMR_OFFSET
DECL|TWIHS_MMR_Type|typedef|} TWIHS_MMR_Type;
DECL|TWIHS_MMR|member|__IO TWIHS_MMR_Type TWIHS_MMR; /**< Offset: 0x04 (R/W 32) Master Mode Register */
DECL|TWIHS_MMR|member|__IO uint32_t TWIHS_MMR; /**< (TWIHS Offset: 0x04) Master Mode Register */
DECL|TWIHS_RHR_MASK|macro|TWIHS_RHR_MASK
DECL|TWIHS_RHR_Msk|macro|TWIHS_RHR_Msk
DECL|TWIHS_RHR_OFFSET|macro|TWIHS_RHR_OFFSET
DECL|TWIHS_RHR_RXDATA_Msk|macro|TWIHS_RHR_RXDATA_Msk
DECL|TWIHS_RHR_RXDATA_Pos|macro|TWIHS_RHR_RXDATA_Pos
DECL|TWIHS_RHR_RXDATA|macro|TWIHS_RHR_RXDATA
DECL|TWIHS_RHR_Type|typedef|} TWIHS_RHR_Type;
DECL|TWIHS_RHR|member|__I TWIHS_RHR_Type TWIHS_RHR; /**< Offset: 0x30 (R/ 32) Receive Holding Register */
DECL|TWIHS_RHR|member|__I uint32_t TWIHS_RHR; /**< (TWIHS Offset: 0x30) Receive Holding Register */
DECL|TWIHS_SMBTR_MASK|macro|TWIHS_SMBTR_MASK
DECL|TWIHS_SMBTR_Msk|macro|TWIHS_SMBTR_Msk
DECL|TWIHS_SMBTR_OFFSET|macro|TWIHS_SMBTR_OFFSET
DECL|TWIHS_SMBTR_PRESC_Msk|macro|TWIHS_SMBTR_PRESC_Msk
DECL|TWIHS_SMBTR_PRESC_Pos|macro|TWIHS_SMBTR_PRESC_Pos
DECL|TWIHS_SMBTR_PRESC|macro|TWIHS_SMBTR_PRESC
DECL|TWIHS_SMBTR_THMAX_Msk|macro|TWIHS_SMBTR_THMAX_Msk
DECL|TWIHS_SMBTR_THMAX_Pos|macro|TWIHS_SMBTR_THMAX_Pos
DECL|TWIHS_SMBTR_THMAX|macro|TWIHS_SMBTR_THMAX
DECL|TWIHS_SMBTR_TLOWM_Msk|macro|TWIHS_SMBTR_TLOWM_Msk
DECL|TWIHS_SMBTR_TLOWM_Pos|macro|TWIHS_SMBTR_TLOWM_Pos
DECL|TWIHS_SMBTR_TLOWM|macro|TWIHS_SMBTR_TLOWM
DECL|TWIHS_SMBTR_TLOWS_Msk|macro|TWIHS_SMBTR_TLOWS_Msk
DECL|TWIHS_SMBTR_TLOWS_Pos|macro|TWIHS_SMBTR_TLOWS_Pos
DECL|TWIHS_SMBTR_TLOWS|macro|TWIHS_SMBTR_TLOWS
DECL|TWIHS_SMBTR_Type|typedef|} TWIHS_SMBTR_Type;
DECL|TWIHS_SMBTR|member|__IO TWIHS_SMBTR_Type TWIHS_SMBTR; /**< Offset: 0x38 (R/W 32) SMBus Timing Register */
DECL|TWIHS_SMBTR|member|__IO uint32_t TWIHS_SMBTR; /**< (TWIHS Offset: 0x38) SMBus Timing Register */
DECL|TWIHS_SMR_DATAMEN_Msk|macro|TWIHS_SMR_DATAMEN_Msk
DECL|TWIHS_SMR_DATAMEN_Pos|macro|TWIHS_SMR_DATAMEN_Pos
DECL|TWIHS_SMR_DATAMEN|macro|TWIHS_SMR_DATAMEN
DECL|TWIHS_SMR_MASK_Msk|macro|TWIHS_SMR_MASK_Msk
DECL|TWIHS_SMR_MASK_Pos|macro|TWIHS_SMR_MASK_Pos
DECL|TWIHS_SMR_MASK|macro|TWIHS_SMR_MASK
DECL|TWIHS_SMR_Msk|macro|TWIHS_SMR_Msk
DECL|TWIHS_SMR_NACKEN_Msk|macro|TWIHS_SMR_NACKEN_Msk
DECL|TWIHS_SMR_NACKEN_Pos|macro|TWIHS_SMR_NACKEN_Pos
DECL|TWIHS_SMR_NACKEN|macro|TWIHS_SMR_NACKEN
DECL|TWIHS_SMR_OFFSET|macro|TWIHS_SMR_OFFSET
DECL|TWIHS_SMR_SADR1EN_Msk|macro|TWIHS_SMR_SADR1EN_Msk
DECL|TWIHS_SMR_SADR1EN_Pos|macro|TWIHS_SMR_SADR1EN_Pos
DECL|TWIHS_SMR_SADR1EN|macro|TWIHS_SMR_SADR1EN
DECL|TWIHS_SMR_SADR2EN_Msk|macro|TWIHS_SMR_SADR2EN_Msk
DECL|TWIHS_SMR_SADR2EN_Pos|macro|TWIHS_SMR_SADR2EN_Pos
DECL|TWIHS_SMR_SADR2EN|macro|TWIHS_SMR_SADR2EN
DECL|TWIHS_SMR_SADR3EN_Msk|macro|TWIHS_SMR_SADR3EN_Msk
DECL|TWIHS_SMR_SADR3EN_Pos|macro|TWIHS_SMR_SADR3EN_Pos
DECL|TWIHS_SMR_SADR3EN|macro|TWIHS_SMR_SADR3EN
DECL|TWIHS_SMR_SADR_Msk|macro|TWIHS_SMR_SADR_Msk
DECL|TWIHS_SMR_SADR_Pos|macro|TWIHS_SMR_SADR_Pos
DECL|TWIHS_SMR_SADR|macro|TWIHS_SMR_SADR
DECL|TWIHS_SMR_SCLWSDIS_Msk|macro|TWIHS_SMR_SCLWSDIS_Msk
DECL|TWIHS_SMR_SCLWSDIS_Pos|macro|TWIHS_SMR_SCLWSDIS_Pos
DECL|TWIHS_SMR_SCLWSDIS|macro|TWIHS_SMR_SCLWSDIS
DECL|TWIHS_SMR_SMDA_Msk|macro|TWIHS_SMR_SMDA_Msk
DECL|TWIHS_SMR_SMDA_Pos|macro|TWIHS_SMR_SMDA_Pos
DECL|TWIHS_SMR_SMDA|macro|TWIHS_SMR_SMDA
DECL|TWIHS_SMR_SMHH_Msk|macro|TWIHS_SMR_SMHH_Msk
DECL|TWIHS_SMR_SMHH_Pos|macro|TWIHS_SMR_SMHH_Pos
DECL|TWIHS_SMR_SMHH|macro|TWIHS_SMR_SMHH
DECL|TWIHS_SMR_Type|typedef|} TWIHS_SMR_Type;
DECL|TWIHS_SMR|member|__IO TWIHS_SMR_Type TWIHS_SMR; /**< Offset: 0x08 (R/W 32) Slave Mode Register */
DECL|TWIHS_SMR|member|__IO uint32_t TWIHS_SMR; /**< (TWIHS Offset: 0x08) Slave Mode Register */
DECL|TWIHS_SR_ARBLST_Msk|macro|TWIHS_SR_ARBLST_Msk
DECL|TWIHS_SR_ARBLST_Pos|macro|TWIHS_SR_ARBLST_Pos
DECL|TWIHS_SR_ARBLST|macro|TWIHS_SR_ARBLST
DECL|TWIHS_SR_EOSACC_Msk|macro|TWIHS_SR_EOSACC_Msk
DECL|TWIHS_SR_EOSACC_Pos|macro|TWIHS_SR_EOSACC_Pos
DECL|TWIHS_SR_EOSACC|macro|TWIHS_SR_EOSACC
DECL|TWIHS_SR_GACC_Msk|macro|TWIHS_SR_GACC_Msk
DECL|TWIHS_SR_GACC_Pos|macro|TWIHS_SR_GACC_Pos
DECL|TWIHS_SR_GACC|macro|TWIHS_SR_GACC
DECL|TWIHS_SR_MASK|macro|TWIHS_SR_MASK
DECL|TWIHS_SR_MCACK_Msk|macro|TWIHS_SR_MCACK_Msk
DECL|TWIHS_SR_MCACK_Pos|macro|TWIHS_SR_MCACK_Pos
DECL|TWIHS_SR_MCACK|macro|TWIHS_SR_MCACK
DECL|TWIHS_SR_Msk|macro|TWIHS_SR_Msk
DECL|TWIHS_SR_NACK_Msk|macro|TWIHS_SR_NACK_Msk
DECL|TWIHS_SR_NACK_Pos|macro|TWIHS_SR_NACK_Pos
DECL|TWIHS_SR_NACK|macro|TWIHS_SR_NACK
DECL|TWIHS_SR_OFFSET|macro|TWIHS_SR_OFFSET
DECL|TWIHS_SR_OVRE_Msk|macro|TWIHS_SR_OVRE_Msk
DECL|TWIHS_SR_OVRE_Pos|macro|TWIHS_SR_OVRE_Pos
DECL|TWIHS_SR_OVRE|macro|TWIHS_SR_OVRE
DECL|TWIHS_SR_PECERR_Msk|macro|TWIHS_SR_PECERR_Msk
DECL|TWIHS_SR_PECERR_Pos|macro|TWIHS_SR_PECERR_Pos
DECL|TWIHS_SR_PECERR|macro|TWIHS_SR_PECERR
DECL|TWIHS_SR_RXRDY_Msk|macro|TWIHS_SR_RXRDY_Msk
DECL|TWIHS_SR_RXRDY_Pos|macro|TWIHS_SR_RXRDY_Pos
DECL|TWIHS_SR_RXRDY|macro|TWIHS_SR_RXRDY
DECL|TWIHS_SR_SCLWS_Msk|macro|TWIHS_SR_SCLWS_Msk
DECL|TWIHS_SR_SCLWS_Pos|macro|TWIHS_SR_SCLWS_Pos
DECL|TWIHS_SR_SCLWS|macro|TWIHS_SR_SCLWS
DECL|TWIHS_SR_SCL_Msk|macro|TWIHS_SR_SCL_Msk
DECL|TWIHS_SR_SCL_Pos|macro|TWIHS_SR_SCL_Pos
DECL|TWIHS_SR_SCL|macro|TWIHS_SR_SCL
DECL|TWIHS_SR_SDA_Msk|macro|TWIHS_SR_SDA_Msk
DECL|TWIHS_SR_SDA_Pos|macro|TWIHS_SR_SDA_Pos
DECL|TWIHS_SR_SDA|macro|TWIHS_SR_SDA
DECL|TWIHS_SR_SMBDAM_Msk|macro|TWIHS_SR_SMBDAM_Msk
DECL|TWIHS_SR_SMBDAM_Pos|macro|TWIHS_SR_SMBDAM_Pos
DECL|TWIHS_SR_SMBDAM|macro|TWIHS_SR_SMBDAM
DECL|TWIHS_SR_SMBHHM_Msk|macro|TWIHS_SR_SMBHHM_Msk
DECL|TWIHS_SR_SMBHHM_Pos|macro|TWIHS_SR_SMBHHM_Pos
DECL|TWIHS_SR_SMBHHM|macro|TWIHS_SR_SMBHHM
DECL|TWIHS_SR_SVACC_Msk|macro|TWIHS_SR_SVACC_Msk
DECL|TWIHS_SR_SVACC_Pos|macro|TWIHS_SR_SVACC_Pos
DECL|TWIHS_SR_SVACC|macro|TWIHS_SR_SVACC
DECL|TWIHS_SR_SVREAD_Msk|macro|TWIHS_SR_SVREAD_Msk
DECL|TWIHS_SR_SVREAD_Pos|macro|TWIHS_SR_SVREAD_Pos
DECL|TWIHS_SR_SVREAD|macro|TWIHS_SR_SVREAD
DECL|TWIHS_SR_TOUT_Msk|macro|TWIHS_SR_TOUT_Msk
DECL|TWIHS_SR_TOUT_Pos|macro|TWIHS_SR_TOUT_Pos
DECL|TWIHS_SR_TOUT|macro|TWIHS_SR_TOUT
DECL|TWIHS_SR_TXCOMP_Msk|macro|TWIHS_SR_TXCOMP_Msk
DECL|TWIHS_SR_TXCOMP_Pos|macro|TWIHS_SR_TXCOMP_Pos
DECL|TWIHS_SR_TXCOMP|macro|TWIHS_SR_TXCOMP
DECL|TWIHS_SR_TXRDY_Msk|macro|TWIHS_SR_TXRDY_Msk
DECL|TWIHS_SR_TXRDY_Pos|macro|TWIHS_SR_TXRDY_Pos
DECL|TWIHS_SR_TXRDY|macro|TWIHS_SR_TXRDY
DECL|TWIHS_SR_Type|typedef|} TWIHS_SR_Type;
DECL|TWIHS_SR_UNRE_Msk|macro|TWIHS_SR_UNRE_Msk
DECL|TWIHS_SR_UNRE_Pos|macro|TWIHS_SR_UNRE_Pos
DECL|TWIHS_SR_UNRE|macro|TWIHS_SR_UNRE
DECL|TWIHS_SR|member|__I TWIHS_SR_Type TWIHS_SR; /**< Offset: 0x20 (R/ 32) Status Register */
DECL|TWIHS_SR|member|__I uint32_t TWIHS_SR; /**< (TWIHS Offset: 0x20) Status Register */
DECL|TWIHS_SWMR_DATAM_Msk|macro|TWIHS_SWMR_DATAM_Msk
DECL|TWIHS_SWMR_DATAM_Pos|macro|TWIHS_SWMR_DATAM_Pos
DECL|TWIHS_SWMR_DATAM|macro|TWIHS_SWMR_DATAM
DECL|TWIHS_SWMR_MASK|macro|TWIHS_SWMR_MASK
DECL|TWIHS_SWMR_Msk|macro|TWIHS_SWMR_Msk
DECL|TWIHS_SWMR_OFFSET|macro|TWIHS_SWMR_OFFSET
DECL|TWIHS_SWMR_SADR1_Msk|macro|TWIHS_SWMR_SADR1_Msk
DECL|TWIHS_SWMR_SADR1_Pos|macro|TWIHS_SWMR_SADR1_Pos
DECL|TWIHS_SWMR_SADR1|macro|TWIHS_SWMR_SADR1
DECL|TWIHS_SWMR_SADR2_Msk|macro|TWIHS_SWMR_SADR2_Msk
DECL|TWIHS_SWMR_SADR2_Pos|macro|TWIHS_SWMR_SADR2_Pos
DECL|TWIHS_SWMR_SADR2|macro|TWIHS_SWMR_SADR2
DECL|TWIHS_SWMR_SADR3_Msk|macro|TWIHS_SWMR_SADR3_Msk
DECL|TWIHS_SWMR_SADR3_Pos|macro|TWIHS_SWMR_SADR3_Pos
DECL|TWIHS_SWMR_SADR3|macro|TWIHS_SWMR_SADR3
DECL|TWIHS_SWMR_Type|typedef|} TWIHS_SWMR_Type;
DECL|TWIHS_SWMR|member|__IO TWIHS_SWMR_Type TWIHS_SWMR; /**< Offset: 0x4C (R/W 32) SleepWalking Matching Register */
DECL|TWIHS_SWMR|member|__IO uint32_t TWIHS_SWMR; /**< (TWIHS Offset: 0x4C) SleepWalking Matching Register */
DECL|TWIHS_THR_MASK|macro|TWIHS_THR_MASK
DECL|TWIHS_THR_Msk|macro|TWIHS_THR_Msk
DECL|TWIHS_THR_OFFSET|macro|TWIHS_THR_OFFSET
DECL|TWIHS_THR_TXDATA_Msk|macro|TWIHS_THR_TXDATA_Msk
DECL|TWIHS_THR_TXDATA_Pos|macro|TWIHS_THR_TXDATA_Pos
DECL|TWIHS_THR_TXDATA|macro|TWIHS_THR_TXDATA
DECL|TWIHS_THR_Type|typedef|} TWIHS_THR_Type;
DECL|TWIHS_THR|member|__O TWIHS_THR_Type TWIHS_THR; /**< Offset: 0x34 ( /W 32) Transmit Holding Register */
DECL|TWIHS_THR|member|__O uint32_t TWIHS_THR; /**< (TWIHS Offset: 0x34) Transmit Holding Register */
DECL|TWIHS_WPMR_MASK|macro|TWIHS_WPMR_MASK
DECL|TWIHS_WPMR_Msk|macro|TWIHS_WPMR_Msk
DECL|TWIHS_WPMR_OFFSET|macro|TWIHS_WPMR_OFFSET
DECL|TWIHS_WPMR_Type|typedef|} TWIHS_WPMR_Type;
DECL|TWIHS_WPMR_WPEN_Msk|macro|TWIHS_WPMR_WPEN_Msk
DECL|TWIHS_WPMR_WPEN_Pos|macro|TWIHS_WPMR_WPEN_Pos
DECL|TWIHS_WPMR_WPEN|macro|TWIHS_WPMR_WPEN
DECL|TWIHS_WPMR_WPKEY_Msk|macro|TWIHS_WPMR_WPKEY_Msk
DECL|TWIHS_WPMR_WPKEY_PASSWD_Val|macro|TWIHS_WPMR_WPKEY_PASSWD_Val
DECL|TWIHS_WPMR_WPKEY_PASSWD|macro|TWIHS_WPMR_WPKEY_PASSWD
DECL|TWIHS_WPMR_WPKEY_Pos|macro|TWIHS_WPMR_WPKEY_Pos
DECL|TWIHS_WPMR_WPKEY|macro|TWIHS_WPMR_WPKEY
DECL|TWIHS_WPMR|member|__IO TWIHS_WPMR_Type TWIHS_WPMR; /**< Offset: 0xE4 (R/W 32) Write Protection Mode Register */
DECL|TWIHS_WPMR|member|__IO uint32_t TWIHS_WPMR; /**< (TWIHS Offset: 0xE4) Write Protection Mode Register */
DECL|TWIHS_WPSR_MASK|macro|TWIHS_WPSR_MASK
DECL|TWIHS_WPSR_Msk|macro|TWIHS_WPSR_Msk
DECL|TWIHS_WPSR_OFFSET|macro|TWIHS_WPSR_OFFSET
DECL|TWIHS_WPSR_Type|typedef|} TWIHS_WPSR_Type;
DECL|TWIHS_WPSR_WPVSRC_Msk|macro|TWIHS_WPSR_WPVSRC_Msk
DECL|TWIHS_WPSR_WPVSRC_Pos|macro|TWIHS_WPSR_WPVSRC_Pos
DECL|TWIHS_WPSR_WPVSRC|macro|TWIHS_WPSR_WPVSRC
DECL|TWIHS_WPSR_WPVS_Msk|macro|TWIHS_WPSR_WPVS_Msk
DECL|TWIHS_WPSR_WPVS_Pos|macro|TWIHS_WPSR_WPVS_Pos
DECL|TWIHS_WPSR_WPVS|macro|TWIHS_WPSR_WPVS
DECL|TWIHS_WPSR|member|__I TWIHS_WPSR_Type TWIHS_WPSR; /**< Offset: 0xE8 (R/ 32) Write Protection Status Register */
DECL|TWIHS_WPSR|member|__I uint32_t TWIHS_WPSR; /**< (TWIHS Offset: 0xE8) Write Protection Status Register */
DECL|TXCOMP|member|uint32_t TXCOMP:1; /**< bit: 0 Transmission Completed (cleared by writing TWIHS_THR) */
DECL|TXCOMP|member|uint32_t TXCOMP:1; /**< bit: 0 Transmission Completed Interrupt Disable */
DECL|TXCOMP|member|uint32_t TXCOMP:1; /**< bit: 0 Transmission Completed Interrupt Enable */
DECL|TXCOMP|member|uint32_t TXCOMP:1; /**< bit: 0 Transmission Completed Interrupt Mask */
DECL|TXDATA|member|uint32_t TXDATA:8; /**< bit: 0..7 Master or Slave Transmit Holding Data */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 2 Transmit Holding Register Ready (cleared by writing TWIHS_THR) */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 2 Transmit Holding Register Ready Interrupt Disable */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 2 Transmit Holding Register Ready Interrupt Enable */
DECL|TXRDY|member|uint32_t TXRDY:1; /**< bit: 2 Transmit Holding Register Ready Interrupt Mask */
DECL|Twihs|typedef|} Twihs;
DECL|Twihs|typedef|} Twihs;
DECL|UNRE|member|uint32_t UNRE:1; /**< bit: 7 Underrun Error (cleared on read) */
DECL|UNRE|member|uint32_t UNRE:1; /**< bit: 7 Underrun Error Interrupt Disable */
DECL|UNRE|member|uint32_t UNRE:1; /**< bit: 7 Underrun Error Interrupt Enable */
DECL|UNRE|member|uint32_t UNRE:1; /**< bit: 7 Underrun Error Interrupt Mask */
DECL|WPEN|member|uint32_t WPEN:1; /**< bit: 0 Write Protection Enable */
DECL|WPKEY|member|uint32_t WPKEY:24; /**< bit: 8..31 Write Protection Key */
DECL|WPVSRC|member|uint32_t WPVSRC:24; /**< bit: 8..31 Write Protection Violation Source */
DECL|WPVS|member|uint32_t WPVS:1; /**< bit: 0 Write Protection Violation Status */
DECL|_SAME70_TWIHS_COMPONENT_H_|macro|_SAME70_TWIHS_COMPONENT_H_
DECL|_SAME70_TWIHS_COMPONENT_|macro|_SAME70_TWIHS_COMPONENT_
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
DECL|uint32_t|member|uint32_t :10; /**< bit: 22..31 Reserved */
DECL|uint32_t|member|uint32_t :10; /**< bit: 22..31 Reserved */
DECL|uint32_t|member|uint32_t :10; /**< bit: 22..31 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 1 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 17 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 17 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 17 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 17 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 19 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 23 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 25 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 27 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 3 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 3 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 3 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :21; /**< bit: 11..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /**< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /**< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 10..11 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 22..23 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 30..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 4..5 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 13..15 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 21..23 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 29..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 4..7 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 23..27 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 3..7 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 18..23 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 26..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 0..7 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :9; /**< bit: 23..31 Reserved */
