DECL|ADDR|member|uint16_t ADDR:5; /*!< bit: 0.. 4 Address */
DECL|CC|member|__IO TC_COUNT16_CC_Type CC[2]; /**< \brief Offset: 0x18 (R/W 16) COUNT16 Compare/Capture */
DECL|CC|member|__IO TC_COUNT32_CC_Type CC[2]; /**< \brief Offset: 0x18 (R/W 32) COUNT32 Compare/Capture */
DECL|CC|member|__IO TC_COUNT8_CC_Type CC[2]; /**< \brief Offset: 0x18 (R/W 8) COUNT8 Compare/Capture */
DECL|CC|member|uint16_t CC:16; /*!< bit: 0..15 Compare/Capture Value */
DECL|CC|member|uint32_t CC:32; /*!< bit: 0..31 Compare/Capture Value */
DECL|CC|member|uint8_t CC:8; /*!< bit: 0.. 7 Compare/Capture Value */
DECL|CMD|member|uint8_t CMD:2; /*!< bit: 6.. 7 Command */
DECL|CMD|member|uint8_t CMD:2; /*!< bit: 6.. 7 Command */
DECL|COUNT16|member|TcCount16 COUNT16; /**< \brief Offset: 0x00 16-bit Counter Mode */
DECL|COUNT32|member|TcCount32 COUNT32; /**< \brief Offset: 0x00 32-bit Counter Mode */
DECL|COUNT8|member|TcCount8 COUNT8; /**< \brief Offset: 0x00 8-bit Counter Mode */
DECL|COUNT|member|__IO TC_COUNT16_COUNT_Type COUNT; /**< \brief Offset: 0x10 (R/W 16) COUNT16 Counter Value */
DECL|COUNT|member|__IO TC_COUNT32_COUNT_Type COUNT; /**< \brief Offset: 0x10 (R/W 32) COUNT32 Counter Value */
DECL|COUNT|member|__IO TC_COUNT8_COUNT_Type COUNT; /**< \brief Offset: 0x10 (R/W 8) COUNT8 Counter Value */
DECL|COUNT|member|uint16_t COUNT:16; /*!< bit: 0..15 Counter Value */
DECL|COUNT|member|uint32_t COUNT:32; /*!< bit: 0..31 Counter Value */
DECL|COUNT|member|uint8_t COUNT:8; /*!< bit: 0.. 7 Counter Value */
DECL|CPTEN0|member|uint8_t CPTEN0:1; /*!< bit: 4 Capture Channel 0 Enable */
DECL|CPTEN1|member|uint8_t CPTEN1:1; /*!< bit: 5 Capture Channel 1 Enable */
DECL|CPTEN|member|uint8_t CPTEN:2; /*!< bit: 4.. 5 Capture Channel x Enable */
DECL|CTRLA|member|__IO TC_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 16) Control A */
DECL|CTRLA|member|__IO TC_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 16) Control A */
DECL|CTRLA|member|__IO TC_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 16) Control A */
DECL|CTRLBCLR|member|__IO TC_CTRLBCLR_Type CTRLBCLR; /**< \brief Offset: 0x04 (R/W 8) Control B Clear */
DECL|CTRLBCLR|member|__IO TC_CTRLBCLR_Type CTRLBCLR; /**< \brief Offset: 0x04 (R/W 8) Control B Clear */
DECL|CTRLBCLR|member|__IO TC_CTRLBCLR_Type CTRLBCLR; /**< \brief Offset: 0x04 (R/W 8) Control B Clear */
DECL|CTRLBSET|member|__IO TC_CTRLBSET_Type CTRLBSET; /**< \brief Offset: 0x05 (R/W 8) Control B Set */
DECL|CTRLBSET|member|__IO TC_CTRLBSET_Type CTRLBSET; /**< \brief Offset: 0x05 (R/W 8) Control B Set */
DECL|CTRLBSET|member|__IO TC_CTRLBSET_Type CTRLBSET; /**< \brief Offset: 0x05 (R/W 8) Control B Set */
DECL|CTRLC|member|__IO TC_CTRLC_Type CTRLC; /**< \brief Offset: 0x06 (R/W 8) Control C */
DECL|CTRLC|member|__IO TC_CTRLC_Type CTRLC; /**< \brief Offset: 0x06 (R/W 8) Control C */
DECL|CTRLC|member|__IO TC_CTRLC_Type CTRLC; /**< \brief Offset: 0x06 (R/W 8) Control C */
DECL|DBGCTRL|member|__IO TC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x08 (R/W 8) Debug Control */
DECL|DBGCTRL|member|__IO TC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x08 (R/W 8) Debug Control */
DECL|DBGCTRL|member|__IO TC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x08 (R/W 8) Debug Control */
DECL|DBGRUN|member|uint8_t DBGRUN:1; /*!< bit: 0 Debug Run Mode */
DECL|DIR|member|uint8_t DIR:1; /*!< bit: 0 Counter Direction */
DECL|DIR|member|uint8_t DIR:1; /*!< bit: 0 Counter Direction */
DECL|ENABLE|member|uint16_t ENABLE:1; /*!< bit: 1 Enable */
DECL|ERR|member|__I uint8_t ERR:1; /*!< bit: 1 Error */
DECL|ERR|member|uint8_t ERR:1; /*!< bit: 1 Error Interrupt Enable */
DECL|ERR|member|uint8_t ERR:1; /*!< bit: 1 Error Interrupt Enable */
DECL|EVACT|member|uint16_t EVACT:3; /*!< bit: 0.. 2 Event Action */
DECL|EVCTRL|member|__IO TC_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x0A (R/W 16) Event Control */
DECL|EVCTRL|member|__IO TC_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x0A (R/W 16) Event Control */
DECL|EVCTRL|member|__IO TC_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x0A (R/W 16) Event Control */
DECL|INTENCLR|member|__IO TC_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x0C (R/W 8) Interrupt Enable Clear */
DECL|INTENCLR|member|__IO TC_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x0C (R/W 8) Interrupt Enable Clear */
DECL|INTENCLR|member|__IO TC_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x0C (R/W 8) Interrupt Enable Clear */
DECL|INTENSET|member|__IO TC_INTENSET_Type INTENSET; /**< \brief Offset: 0x0D (R/W 8) Interrupt Enable Set */
DECL|INTENSET|member|__IO TC_INTENSET_Type INTENSET; /**< \brief Offset: 0x0D (R/W 8) Interrupt Enable Set */
DECL|INTENSET|member|__IO TC_INTENSET_Type INTENSET; /**< \brief Offset: 0x0D (R/W 8) Interrupt Enable Set */
DECL|INTFLAG|member|__IO TC_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x0E (R/W 8) Interrupt Flag Status and Clear */
DECL|INTFLAG|member|__IO TC_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x0E (R/W 8) Interrupt Flag Status and Clear */
DECL|INTFLAG|member|__IO TC_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x0E (R/W 8) Interrupt Flag Status and Clear */
DECL|INVEN0|member|uint8_t INVEN0:1; /*!< bit: 0 Output Waveform 0 Invert Enable */
DECL|INVEN1|member|uint8_t INVEN1:1; /*!< bit: 1 Output Waveform 1 Invert Enable */
DECL|INVEN|member|uint8_t INVEN:2; /*!< bit: 0.. 1 Output Waveform x Invert Enable */
DECL|MC0|member|__I uint8_t MC0:1; /*!< bit: 4 Match or Capture Channel 0 */
DECL|MC0|member|uint8_t MC0:1; /*!< bit: 4 Match or Capture Channel 0 Interrupt Enable */
DECL|MC0|member|uint8_t MC0:1; /*!< bit: 4 Match or Capture Channel 0 Interrupt Enable */
DECL|MC1|member|__I uint8_t MC1:1; /*!< bit: 5 Match or Capture Channel 1 */
DECL|MC1|member|uint8_t MC1:1; /*!< bit: 5 Match or Capture Channel 1 Interrupt Enable */
DECL|MC1|member|uint8_t MC1:1; /*!< bit: 5 Match or Capture Channel 1 Interrupt Enable */
DECL|MCEO0|member|uint16_t MCEO0:1; /*!< bit: 12 Match or Capture Channel 0 Event Output Enable */
DECL|MCEO1|member|uint16_t MCEO1:1; /*!< bit: 13 Match or Capture Channel 1 Event Output Enable */
DECL|MCEO|member|uint16_t MCEO:2; /*!< bit: 12..13 Match or Capture Channel x Event Output Enable */
DECL|MC|member|__I uint8_t MC:2; /*!< bit: 4.. 5 Match or Capture Channel x */
DECL|MC|member|uint8_t MC:2; /*!< bit: 4.. 5 Match or Capture Channel x Interrupt Enable */
DECL|MC|member|uint8_t MC:2; /*!< bit: 4.. 5 Match or Capture Channel x Interrupt Enable */
DECL|MODE|member|uint16_t MODE:2; /*!< bit: 2.. 3 TC Mode */
DECL|ONESHOT|member|uint8_t ONESHOT:1; /*!< bit: 2 One-Shot */
DECL|ONESHOT|member|uint8_t ONESHOT:1; /*!< bit: 2 One-shot */
DECL|OVFEO|member|uint16_t OVFEO:1; /*!< bit: 8 Overflow/Underflow Event Output Enable */
DECL|OVF|member|__I uint8_t OVF:1; /*!< bit: 0 Overflow */
DECL|OVF|member|uint8_t OVF:1; /*!< bit: 0 Overflow Interrupt Enable */
DECL|OVF|member|uint8_t OVF:1; /*!< bit: 0 Overflow Interrupt Enable */
DECL|PER|member|__IO TC_COUNT8_PER_Type PER; /**< \brief Offset: 0x14 (R/W 8) COUNT8 Period Value */
DECL|PER|member|uint8_t PER:8; /*!< bit: 0.. 7 Period Value */
DECL|PRESCALER|member|uint16_t PRESCALER:3; /*!< bit: 8..10 Prescaler */
DECL|PRESCSYNC|member|uint16_t PRESCSYNC:2; /*!< bit: 12..13 Prescaler and Counter Synchronization */
DECL|RCONT|member|uint16_t RCONT:1; /*!< bit: 14 Read Continuously */
DECL|READREQ|member|__IO TC_READREQ_Type READREQ; /**< \brief Offset: 0x02 (R/W 16) Read Request */
DECL|READREQ|member|__IO TC_READREQ_Type READREQ; /**< \brief Offset: 0x02 (R/W 16) Read Request */
DECL|READREQ|member|__IO TC_READREQ_Type READREQ; /**< \brief Offset: 0x02 (R/W 16) Read Request */
DECL|REV_TC|macro|REV_TC
DECL|RREQ|member|uint16_t RREQ:1; /*!< bit: 15 Read Request */
DECL|RUNSTDBY|member|uint16_t RUNSTDBY:1; /*!< bit: 11 Run in Standby */
DECL|Reserved1|member|RoReg8 Reserved1[0x1];
DECL|Reserved1|member|RoReg8 Reserved1[0x1];
DECL|Reserved1|member|RoReg8 Reserved1[0x1];
DECL|Reserved2|member|RoReg8 Reserved2[0x1];
DECL|Reserved2|member|RoReg8 Reserved2[0x1];
DECL|Reserved2|member|RoReg8 Reserved2[0x1];
DECL|Reserved3|member|RoReg8 Reserved3[0x3];
DECL|Reserved3|member|RoReg8 Reserved3[0x4];
DECL|Reserved3|member|RoReg8 Reserved3[0x6];
DECL|Reserved4|member|RoReg8 Reserved4[0x3];
DECL|SLAVE|member|uint8_t SLAVE:1; /*!< bit: 4 Slave */
DECL|STATUS|member|__I TC_STATUS_Type STATUS; /**< \brief Offset: 0x0F (R/ 8) Status */
DECL|STATUS|member|__I TC_STATUS_Type STATUS; /**< \brief Offset: 0x0F (R/ 8) Status */
DECL|STATUS|member|__I TC_STATUS_Type STATUS; /**< \brief Offset: 0x0F (R/ 8) Status */
DECL|STOP|member|uint8_t STOP:1; /*!< bit: 3 Stop */
DECL|SWRST|member|uint16_t SWRST:1; /*!< bit: 0 Software Reset */
DECL|SYNCBUSY|member|uint8_t SYNCBUSY:1; /*!< bit: 7 Synchronization Busy */
DECL|SYNCRDY|member|__I uint8_t SYNCRDY:1; /*!< bit: 3 Synchronization Ready */
DECL|SYNCRDY|member|uint8_t SYNCRDY:1; /*!< bit: 3 Synchronization Ready Interrupt Enable */
DECL|SYNCRDY|member|uint8_t SYNCRDY:1; /*!< bit: 3 Synchronization Ready Interrupt Enable */
DECL|TCEI|member|uint16_t TCEI:1; /*!< bit: 5 TC Event Input */
DECL|TCINV|member|uint16_t TCINV:1; /*!< bit: 4 TC Inverted Event Input */
DECL|TC_COUNT16_CC_CC_Msk|macro|TC_COUNT16_CC_CC_Msk
DECL|TC_COUNT16_CC_CC_Pos|macro|TC_COUNT16_CC_CC_Pos
DECL|TC_COUNT16_CC_CC|macro|TC_COUNT16_CC_CC
DECL|TC_COUNT16_CC_MASK|macro|TC_COUNT16_CC_MASK
DECL|TC_COUNT16_CC_OFFSET|macro|TC_COUNT16_CC_OFFSET
DECL|TC_COUNT16_CC_RESETVALUE|macro|TC_COUNT16_CC_RESETVALUE
DECL|TC_COUNT16_CC_Type|typedef|} TC_COUNT16_CC_Type;
DECL|TC_COUNT16_COUNT_COUNT_Msk|macro|TC_COUNT16_COUNT_COUNT_Msk
DECL|TC_COUNT16_COUNT_COUNT_Pos|macro|TC_COUNT16_COUNT_COUNT_Pos
DECL|TC_COUNT16_COUNT_COUNT|macro|TC_COUNT16_COUNT_COUNT
DECL|TC_COUNT16_COUNT_MASK|macro|TC_COUNT16_COUNT_MASK
DECL|TC_COUNT16_COUNT_OFFSET|macro|TC_COUNT16_COUNT_OFFSET
DECL|TC_COUNT16_COUNT_RESETVALUE|macro|TC_COUNT16_COUNT_RESETVALUE
DECL|TC_COUNT16_COUNT_Type|typedef|} TC_COUNT16_COUNT_Type;
DECL|TC_COUNT32_CC_CC_Msk|macro|TC_COUNT32_CC_CC_Msk
DECL|TC_COUNT32_CC_CC_Pos|macro|TC_COUNT32_CC_CC_Pos
DECL|TC_COUNT32_CC_CC|macro|TC_COUNT32_CC_CC
DECL|TC_COUNT32_CC_MASK|macro|TC_COUNT32_CC_MASK
DECL|TC_COUNT32_CC_OFFSET|macro|TC_COUNT32_CC_OFFSET
DECL|TC_COUNT32_CC_RESETVALUE|macro|TC_COUNT32_CC_RESETVALUE
DECL|TC_COUNT32_CC_Type|typedef|} TC_COUNT32_CC_Type;
DECL|TC_COUNT32_COUNT_COUNT_Msk|macro|TC_COUNT32_COUNT_COUNT_Msk
DECL|TC_COUNT32_COUNT_COUNT_Pos|macro|TC_COUNT32_COUNT_COUNT_Pos
DECL|TC_COUNT32_COUNT_COUNT|macro|TC_COUNT32_COUNT_COUNT
DECL|TC_COUNT32_COUNT_MASK|macro|TC_COUNT32_COUNT_MASK
DECL|TC_COUNT32_COUNT_OFFSET|macro|TC_COUNT32_COUNT_OFFSET
DECL|TC_COUNT32_COUNT_RESETVALUE|macro|TC_COUNT32_COUNT_RESETVALUE
DECL|TC_COUNT32_COUNT_Type|typedef|} TC_COUNT32_COUNT_Type;
DECL|TC_COUNT8_CC_CC_Msk|macro|TC_COUNT8_CC_CC_Msk
DECL|TC_COUNT8_CC_CC_Pos|macro|TC_COUNT8_CC_CC_Pos
DECL|TC_COUNT8_CC_CC|macro|TC_COUNT8_CC_CC
DECL|TC_COUNT8_CC_MASK|macro|TC_COUNT8_CC_MASK
DECL|TC_COUNT8_CC_OFFSET|macro|TC_COUNT8_CC_OFFSET
DECL|TC_COUNT8_CC_RESETVALUE|macro|TC_COUNT8_CC_RESETVALUE
DECL|TC_COUNT8_CC_Type|typedef|} TC_COUNT8_CC_Type;
DECL|TC_COUNT8_COUNT_COUNT_Msk|macro|TC_COUNT8_COUNT_COUNT_Msk
DECL|TC_COUNT8_COUNT_COUNT_Pos|macro|TC_COUNT8_COUNT_COUNT_Pos
DECL|TC_COUNT8_COUNT_COUNT|macro|TC_COUNT8_COUNT_COUNT
DECL|TC_COUNT8_COUNT_MASK|macro|TC_COUNT8_COUNT_MASK
DECL|TC_COUNT8_COUNT_OFFSET|macro|TC_COUNT8_COUNT_OFFSET
DECL|TC_COUNT8_COUNT_RESETVALUE|macro|TC_COUNT8_COUNT_RESETVALUE
DECL|TC_COUNT8_COUNT_Type|typedef|} TC_COUNT8_COUNT_Type;
DECL|TC_COUNT8_PER_MASK|macro|TC_COUNT8_PER_MASK
DECL|TC_COUNT8_PER_OFFSET|macro|TC_COUNT8_PER_OFFSET
DECL|TC_COUNT8_PER_PER_Msk|macro|TC_COUNT8_PER_PER_Msk
DECL|TC_COUNT8_PER_PER_Pos|macro|TC_COUNT8_PER_PER_Pos
DECL|TC_COUNT8_PER_PER|macro|TC_COUNT8_PER_PER
DECL|TC_COUNT8_PER_RESETVALUE|macro|TC_COUNT8_PER_RESETVALUE
DECL|TC_COUNT8_PER_Type|typedef|} TC_COUNT8_PER_Type;
DECL|TC_CTRLA_ENABLE_Pos|macro|TC_CTRLA_ENABLE_Pos
DECL|TC_CTRLA_ENABLE|macro|TC_CTRLA_ENABLE
DECL|TC_CTRLA_MASK|macro|TC_CTRLA_MASK
DECL|TC_CTRLA_MODE_COUNT16_Val|macro|TC_CTRLA_MODE_COUNT16_Val
DECL|TC_CTRLA_MODE_COUNT16|macro|TC_CTRLA_MODE_COUNT16
DECL|TC_CTRLA_MODE_COUNT32_Val|macro|TC_CTRLA_MODE_COUNT32_Val
DECL|TC_CTRLA_MODE_COUNT32|macro|TC_CTRLA_MODE_COUNT32
DECL|TC_CTRLA_MODE_COUNT8_Val|macro|TC_CTRLA_MODE_COUNT8_Val
DECL|TC_CTRLA_MODE_COUNT8|macro|TC_CTRLA_MODE_COUNT8
DECL|TC_CTRLA_MODE_Msk|macro|TC_CTRLA_MODE_Msk
DECL|TC_CTRLA_MODE_Pos|macro|TC_CTRLA_MODE_Pos
DECL|TC_CTRLA_MODE|macro|TC_CTRLA_MODE
DECL|TC_CTRLA_OFFSET|macro|TC_CTRLA_OFFSET
DECL|TC_CTRLA_PRESCALER_DIV1024_Val|macro|TC_CTRLA_PRESCALER_DIV1024_Val
DECL|TC_CTRLA_PRESCALER_DIV1024|macro|TC_CTRLA_PRESCALER_DIV1024
DECL|TC_CTRLA_PRESCALER_DIV16_Val|macro|TC_CTRLA_PRESCALER_DIV16_Val
DECL|TC_CTRLA_PRESCALER_DIV16|macro|TC_CTRLA_PRESCALER_DIV16
DECL|TC_CTRLA_PRESCALER_DIV1_Val|macro|TC_CTRLA_PRESCALER_DIV1_Val
DECL|TC_CTRLA_PRESCALER_DIV1|macro|TC_CTRLA_PRESCALER_DIV1
DECL|TC_CTRLA_PRESCALER_DIV256_Val|macro|TC_CTRLA_PRESCALER_DIV256_Val
DECL|TC_CTRLA_PRESCALER_DIV256|macro|TC_CTRLA_PRESCALER_DIV256
DECL|TC_CTRLA_PRESCALER_DIV2_Val|macro|TC_CTRLA_PRESCALER_DIV2_Val
DECL|TC_CTRLA_PRESCALER_DIV2|macro|TC_CTRLA_PRESCALER_DIV2
DECL|TC_CTRLA_PRESCALER_DIV4_Val|macro|TC_CTRLA_PRESCALER_DIV4_Val
DECL|TC_CTRLA_PRESCALER_DIV4|macro|TC_CTRLA_PRESCALER_DIV4
DECL|TC_CTRLA_PRESCALER_DIV64_Val|macro|TC_CTRLA_PRESCALER_DIV64_Val
DECL|TC_CTRLA_PRESCALER_DIV64|macro|TC_CTRLA_PRESCALER_DIV64
DECL|TC_CTRLA_PRESCALER_DIV8_Val|macro|TC_CTRLA_PRESCALER_DIV8_Val
DECL|TC_CTRLA_PRESCALER_DIV8|macro|TC_CTRLA_PRESCALER_DIV8
DECL|TC_CTRLA_PRESCALER_Msk|macro|TC_CTRLA_PRESCALER_Msk
DECL|TC_CTRLA_PRESCALER_Pos|macro|TC_CTRLA_PRESCALER_Pos
DECL|TC_CTRLA_PRESCALER|macro|TC_CTRLA_PRESCALER
DECL|TC_CTRLA_PRESCSYNC_GCLK_Val|macro|TC_CTRLA_PRESCSYNC_GCLK_Val
DECL|TC_CTRLA_PRESCSYNC_GCLK|macro|TC_CTRLA_PRESCSYNC_GCLK
DECL|TC_CTRLA_PRESCSYNC_Msk|macro|TC_CTRLA_PRESCSYNC_Msk
DECL|TC_CTRLA_PRESCSYNC_PRESC_Val|macro|TC_CTRLA_PRESCSYNC_PRESC_Val
DECL|TC_CTRLA_PRESCSYNC_PRESC|macro|TC_CTRLA_PRESCSYNC_PRESC
DECL|TC_CTRLA_PRESCSYNC_Pos|macro|TC_CTRLA_PRESCSYNC_Pos
DECL|TC_CTRLA_PRESCSYNC_RESYNC_Val|macro|TC_CTRLA_PRESCSYNC_RESYNC_Val
DECL|TC_CTRLA_PRESCSYNC_RESYNC|macro|TC_CTRLA_PRESCSYNC_RESYNC
DECL|TC_CTRLA_PRESCSYNC|macro|TC_CTRLA_PRESCSYNC
DECL|TC_CTRLA_RESETVALUE|macro|TC_CTRLA_RESETVALUE
DECL|TC_CTRLA_RUNSTDBY_Pos|macro|TC_CTRLA_RUNSTDBY_Pos
DECL|TC_CTRLA_RUNSTDBY|macro|TC_CTRLA_RUNSTDBY
DECL|TC_CTRLA_SWRST_Pos|macro|TC_CTRLA_SWRST_Pos
DECL|TC_CTRLA_SWRST|macro|TC_CTRLA_SWRST
DECL|TC_CTRLA_Type|typedef|} TC_CTRLA_Type;
DECL|TC_CTRLA_WAVEGEN_MFRQ_Val|macro|TC_CTRLA_WAVEGEN_MFRQ_Val
DECL|TC_CTRLA_WAVEGEN_MFRQ|macro|TC_CTRLA_WAVEGEN_MFRQ
DECL|TC_CTRLA_WAVEGEN_MPWM_Val|macro|TC_CTRLA_WAVEGEN_MPWM_Val
DECL|TC_CTRLA_WAVEGEN_MPWM|macro|TC_CTRLA_WAVEGEN_MPWM
DECL|TC_CTRLA_WAVEGEN_Msk|macro|TC_CTRLA_WAVEGEN_Msk
DECL|TC_CTRLA_WAVEGEN_NFRQ_Val|macro|TC_CTRLA_WAVEGEN_NFRQ_Val
DECL|TC_CTRLA_WAVEGEN_NFRQ|macro|TC_CTRLA_WAVEGEN_NFRQ
DECL|TC_CTRLA_WAVEGEN_NPWM_Val|macro|TC_CTRLA_WAVEGEN_NPWM_Val
DECL|TC_CTRLA_WAVEGEN_NPWM|macro|TC_CTRLA_WAVEGEN_NPWM
DECL|TC_CTRLA_WAVEGEN_Pos|macro|TC_CTRLA_WAVEGEN_Pos
DECL|TC_CTRLA_WAVEGEN|macro|TC_CTRLA_WAVEGEN
DECL|TC_CTRLBCLR_CMD_Msk|macro|TC_CTRLBCLR_CMD_Msk
DECL|TC_CTRLBCLR_CMD_NONE_Val|macro|TC_CTRLBCLR_CMD_NONE_Val
DECL|TC_CTRLBCLR_CMD_NONE|macro|TC_CTRLBCLR_CMD_NONE
DECL|TC_CTRLBCLR_CMD_Pos|macro|TC_CTRLBCLR_CMD_Pos
DECL|TC_CTRLBCLR_CMD_RETRIGGER_Val|macro|TC_CTRLBCLR_CMD_RETRIGGER_Val
DECL|TC_CTRLBCLR_CMD_RETRIGGER|macro|TC_CTRLBCLR_CMD_RETRIGGER
DECL|TC_CTRLBCLR_CMD_STOP_Val|macro|TC_CTRLBCLR_CMD_STOP_Val
DECL|TC_CTRLBCLR_CMD_STOP|macro|TC_CTRLBCLR_CMD_STOP
DECL|TC_CTRLBCLR_CMD|macro|TC_CTRLBCLR_CMD
DECL|TC_CTRLBCLR_DIR_Pos|macro|TC_CTRLBCLR_DIR_Pos
DECL|TC_CTRLBCLR_DIR|macro|TC_CTRLBCLR_DIR
DECL|TC_CTRLBCLR_MASK|macro|TC_CTRLBCLR_MASK
DECL|TC_CTRLBCLR_OFFSET|macro|TC_CTRLBCLR_OFFSET
DECL|TC_CTRLBCLR_ONESHOT_Pos|macro|TC_CTRLBCLR_ONESHOT_Pos
DECL|TC_CTRLBCLR_ONESHOT|macro|TC_CTRLBCLR_ONESHOT
DECL|TC_CTRLBCLR_RESETVALUE|macro|TC_CTRLBCLR_RESETVALUE
DECL|TC_CTRLBCLR_Type|typedef|} TC_CTRLBCLR_Type;
DECL|TC_CTRLBSET_CMD_Msk|macro|TC_CTRLBSET_CMD_Msk
DECL|TC_CTRLBSET_CMD_NONE_Val|macro|TC_CTRLBSET_CMD_NONE_Val
DECL|TC_CTRLBSET_CMD_NONE|macro|TC_CTRLBSET_CMD_NONE
DECL|TC_CTRLBSET_CMD_Pos|macro|TC_CTRLBSET_CMD_Pos
DECL|TC_CTRLBSET_CMD_RETRIGGER_Val|macro|TC_CTRLBSET_CMD_RETRIGGER_Val
DECL|TC_CTRLBSET_CMD_RETRIGGER|macro|TC_CTRLBSET_CMD_RETRIGGER
DECL|TC_CTRLBSET_CMD_STOP_Val|macro|TC_CTRLBSET_CMD_STOP_Val
DECL|TC_CTRLBSET_CMD_STOP|macro|TC_CTRLBSET_CMD_STOP
DECL|TC_CTRLBSET_CMD|macro|TC_CTRLBSET_CMD
DECL|TC_CTRLBSET_DIR_Pos|macro|TC_CTRLBSET_DIR_Pos
DECL|TC_CTRLBSET_DIR|macro|TC_CTRLBSET_DIR
DECL|TC_CTRLBSET_MASK|macro|TC_CTRLBSET_MASK
DECL|TC_CTRLBSET_OFFSET|macro|TC_CTRLBSET_OFFSET
DECL|TC_CTRLBSET_ONESHOT_Pos|macro|TC_CTRLBSET_ONESHOT_Pos
DECL|TC_CTRLBSET_ONESHOT|macro|TC_CTRLBSET_ONESHOT
DECL|TC_CTRLBSET_RESETVALUE|macro|TC_CTRLBSET_RESETVALUE
DECL|TC_CTRLBSET_Type|typedef|} TC_CTRLBSET_Type;
DECL|TC_CTRLC_CPTEN0_Pos|macro|TC_CTRLC_CPTEN0_Pos
DECL|TC_CTRLC_CPTEN0|macro|TC_CTRLC_CPTEN0
DECL|TC_CTRLC_CPTEN1_Pos|macro|TC_CTRLC_CPTEN1_Pos
DECL|TC_CTRLC_CPTEN1|macro|TC_CTRLC_CPTEN1
DECL|TC_CTRLC_CPTEN_Msk|macro|TC_CTRLC_CPTEN_Msk
DECL|TC_CTRLC_CPTEN_Pos|macro|TC_CTRLC_CPTEN_Pos
DECL|TC_CTRLC_CPTEN|macro|TC_CTRLC_CPTEN
DECL|TC_CTRLC_INVEN0_Pos|macro|TC_CTRLC_INVEN0_Pos
DECL|TC_CTRLC_INVEN0|macro|TC_CTRLC_INVEN0
DECL|TC_CTRLC_INVEN1_Pos|macro|TC_CTRLC_INVEN1_Pos
DECL|TC_CTRLC_INVEN1|macro|TC_CTRLC_INVEN1
DECL|TC_CTRLC_INVEN_Msk|macro|TC_CTRLC_INVEN_Msk
DECL|TC_CTRLC_INVEN_Pos|macro|TC_CTRLC_INVEN_Pos
DECL|TC_CTRLC_INVEN|macro|TC_CTRLC_INVEN
DECL|TC_CTRLC_MASK|macro|TC_CTRLC_MASK
DECL|TC_CTRLC_OFFSET|macro|TC_CTRLC_OFFSET
DECL|TC_CTRLC_RESETVALUE|macro|TC_CTRLC_RESETVALUE
DECL|TC_CTRLC_Type|typedef|} TC_CTRLC_Type;
DECL|TC_DBGCTRL_DBGRUN_Pos|macro|TC_DBGCTRL_DBGRUN_Pos
DECL|TC_DBGCTRL_DBGRUN|macro|TC_DBGCTRL_DBGRUN
DECL|TC_DBGCTRL_MASK|macro|TC_DBGCTRL_MASK
DECL|TC_DBGCTRL_OFFSET|macro|TC_DBGCTRL_OFFSET
DECL|TC_DBGCTRL_RESETVALUE|macro|TC_DBGCTRL_RESETVALUE
DECL|TC_DBGCTRL_Type|typedef|} TC_DBGCTRL_Type;
DECL|TC_EVCTRL_EVACT_COUNT_Val|macro|TC_EVCTRL_EVACT_COUNT_Val
DECL|TC_EVCTRL_EVACT_COUNT|macro|TC_EVCTRL_EVACT_COUNT
DECL|TC_EVCTRL_EVACT_Msk|macro|TC_EVCTRL_EVACT_Msk
DECL|TC_EVCTRL_EVACT_OFF_Val|macro|TC_EVCTRL_EVACT_OFF_Val
DECL|TC_EVCTRL_EVACT_OFF|macro|TC_EVCTRL_EVACT_OFF
DECL|TC_EVCTRL_EVACT_PPW_Val|macro|TC_EVCTRL_EVACT_PPW_Val
DECL|TC_EVCTRL_EVACT_PPW|macro|TC_EVCTRL_EVACT_PPW
DECL|TC_EVCTRL_EVACT_PWP_Val|macro|TC_EVCTRL_EVACT_PWP_Val
DECL|TC_EVCTRL_EVACT_PWP|macro|TC_EVCTRL_EVACT_PWP
DECL|TC_EVCTRL_EVACT_Pos|macro|TC_EVCTRL_EVACT_Pos
DECL|TC_EVCTRL_EVACT_RETRIGGER_Val|macro|TC_EVCTRL_EVACT_RETRIGGER_Val
DECL|TC_EVCTRL_EVACT_RETRIGGER|macro|TC_EVCTRL_EVACT_RETRIGGER
DECL|TC_EVCTRL_EVACT_START_Val|macro|TC_EVCTRL_EVACT_START_Val
DECL|TC_EVCTRL_EVACT_START|macro|TC_EVCTRL_EVACT_START
DECL|TC_EVCTRL_EVACT|macro|TC_EVCTRL_EVACT
DECL|TC_EVCTRL_MASK|macro|TC_EVCTRL_MASK
DECL|TC_EVCTRL_MCEO0_Pos|macro|TC_EVCTRL_MCEO0_Pos
DECL|TC_EVCTRL_MCEO0|macro|TC_EVCTRL_MCEO0
DECL|TC_EVCTRL_MCEO1_Pos|macro|TC_EVCTRL_MCEO1_Pos
DECL|TC_EVCTRL_MCEO1|macro|TC_EVCTRL_MCEO1
DECL|TC_EVCTRL_MCEO_Msk|macro|TC_EVCTRL_MCEO_Msk
DECL|TC_EVCTRL_MCEO_Pos|macro|TC_EVCTRL_MCEO_Pos
DECL|TC_EVCTRL_MCEO|macro|TC_EVCTRL_MCEO
DECL|TC_EVCTRL_OFFSET|macro|TC_EVCTRL_OFFSET
DECL|TC_EVCTRL_OVFEO_Pos|macro|TC_EVCTRL_OVFEO_Pos
DECL|TC_EVCTRL_OVFEO|macro|TC_EVCTRL_OVFEO
DECL|TC_EVCTRL_RESETVALUE|macro|TC_EVCTRL_RESETVALUE
DECL|TC_EVCTRL_TCEI_Pos|macro|TC_EVCTRL_TCEI_Pos
DECL|TC_EVCTRL_TCEI|macro|TC_EVCTRL_TCEI
DECL|TC_EVCTRL_TCINV_Pos|macro|TC_EVCTRL_TCINV_Pos
DECL|TC_EVCTRL_TCINV|macro|TC_EVCTRL_TCINV
DECL|TC_EVCTRL_Type|typedef|} TC_EVCTRL_Type;
DECL|TC_INTENCLR_ERR_Pos|macro|TC_INTENCLR_ERR_Pos
DECL|TC_INTENCLR_ERR|macro|TC_INTENCLR_ERR
DECL|TC_INTENCLR_MASK|macro|TC_INTENCLR_MASK
DECL|TC_INTENCLR_MC0_Pos|macro|TC_INTENCLR_MC0_Pos
DECL|TC_INTENCLR_MC0|macro|TC_INTENCLR_MC0
DECL|TC_INTENCLR_MC1_Pos|macro|TC_INTENCLR_MC1_Pos
DECL|TC_INTENCLR_MC1|macro|TC_INTENCLR_MC1
DECL|TC_INTENCLR_MC_Msk|macro|TC_INTENCLR_MC_Msk
DECL|TC_INTENCLR_MC_Pos|macro|TC_INTENCLR_MC_Pos
DECL|TC_INTENCLR_MC|macro|TC_INTENCLR_MC
DECL|TC_INTENCLR_OFFSET|macro|TC_INTENCLR_OFFSET
DECL|TC_INTENCLR_OVF_Pos|macro|TC_INTENCLR_OVF_Pos
DECL|TC_INTENCLR_OVF|macro|TC_INTENCLR_OVF
DECL|TC_INTENCLR_RESETVALUE|macro|TC_INTENCLR_RESETVALUE
DECL|TC_INTENCLR_SYNCRDY_Pos|macro|TC_INTENCLR_SYNCRDY_Pos
DECL|TC_INTENCLR_SYNCRDY|macro|TC_INTENCLR_SYNCRDY
DECL|TC_INTENCLR_Type|typedef|} TC_INTENCLR_Type;
DECL|TC_INTENSET_ERR_Pos|macro|TC_INTENSET_ERR_Pos
DECL|TC_INTENSET_ERR|macro|TC_INTENSET_ERR
DECL|TC_INTENSET_MASK|macro|TC_INTENSET_MASK
DECL|TC_INTENSET_MC0_Pos|macro|TC_INTENSET_MC0_Pos
DECL|TC_INTENSET_MC0|macro|TC_INTENSET_MC0
DECL|TC_INTENSET_MC1_Pos|macro|TC_INTENSET_MC1_Pos
DECL|TC_INTENSET_MC1|macro|TC_INTENSET_MC1
DECL|TC_INTENSET_MC_Msk|macro|TC_INTENSET_MC_Msk
DECL|TC_INTENSET_MC_Pos|macro|TC_INTENSET_MC_Pos
DECL|TC_INTENSET_MC|macro|TC_INTENSET_MC
DECL|TC_INTENSET_OFFSET|macro|TC_INTENSET_OFFSET
DECL|TC_INTENSET_OVF_Pos|macro|TC_INTENSET_OVF_Pos
DECL|TC_INTENSET_OVF|macro|TC_INTENSET_OVF
DECL|TC_INTENSET_RESETVALUE|macro|TC_INTENSET_RESETVALUE
DECL|TC_INTENSET_SYNCRDY_Pos|macro|TC_INTENSET_SYNCRDY_Pos
DECL|TC_INTENSET_SYNCRDY|macro|TC_INTENSET_SYNCRDY
DECL|TC_INTENSET_Type|typedef|} TC_INTENSET_Type;
DECL|TC_INTFLAG_ERR_Pos|macro|TC_INTFLAG_ERR_Pos
DECL|TC_INTFLAG_ERR|macro|TC_INTFLAG_ERR
DECL|TC_INTFLAG_MASK|macro|TC_INTFLAG_MASK
DECL|TC_INTFLAG_MC0_Pos|macro|TC_INTFLAG_MC0_Pos
DECL|TC_INTFLAG_MC0|macro|TC_INTFLAG_MC0
DECL|TC_INTFLAG_MC1_Pos|macro|TC_INTFLAG_MC1_Pos
DECL|TC_INTFLAG_MC1|macro|TC_INTFLAG_MC1
DECL|TC_INTFLAG_MC_Msk|macro|TC_INTFLAG_MC_Msk
DECL|TC_INTFLAG_MC_Pos|macro|TC_INTFLAG_MC_Pos
DECL|TC_INTFLAG_MC|macro|TC_INTFLAG_MC
DECL|TC_INTFLAG_OFFSET|macro|TC_INTFLAG_OFFSET
DECL|TC_INTFLAG_OVF_Pos|macro|TC_INTFLAG_OVF_Pos
DECL|TC_INTFLAG_OVF|macro|TC_INTFLAG_OVF
DECL|TC_INTFLAG_RESETVALUE|macro|TC_INTFLAG_RESETVALUE
DECL|TC_INTFLAG_SYNCRDY_Pos|macro|TC_INTFLAG_SYNCRDY_Pos
DECL|TC_INTFLAG_SYNCRDY|macro|TC_INTFLAG_SYNCRDY
DECL|TC_INTFLAG_Type|typedef|} TC_INTFLAG_Type;
DECL|TC_READREQ_ADDR_Msk|macro|TC_READREQ_ADDR_Msk
DECL|TC_READREQ_ADDR_Pos|macro|TC_READREQ_ADDR_Pos
DECL|TC_READREQ_ADDR|macro|TC_READREQ_ADDR
DECL|TC_READREQ_MASK|macro|TC_READREQ_MASK
DECL|TC_READREQ_OFFSET|macro|TC_READREQ_OFFSET
DECL|TC_READREQ_RCONT_Pos|macro|TC_READREQ_RCONT_Pos
DECL|TC_READREQ_RCONT|macro|TC_READREQ_RCONT
DECL|TC_READREQ_RESETVALUE|macro|TC_READREQ_RESETVALUE
DECL|TC_READREQ_RREQ_Pos|macro|TC_READREQ_RREQ_Pos
DECL|TC_READREQ_RREQ|macro|TC_READREQ_RREQ
DECL|TC_READREQ_Type|typedef|} TC_READREQ_Type;
DECL|TC_STATUS_MASK|macro|TC_STATUS_MASK
DECL|TC_STATUS_OFFSET|macro|TC_STATUS_OFFSET
DECL|TC_STATUS_RESETVALUE|macro|TC_STATUS_RESETVALUE
DECL|TC_STATUS_SLAVE_Pos|macro|TC_STATUS_SLAVE_Pos
DECL|TC_STATUS_SLAVE|macro|TC_STATUS_SLAVE
DECL|TC_STATUS_STOP_Pos|macro|TC_STATUS_STOP_Pos
DECL|TC_STATUS_STOP|macro|TC_STATUS_STOP
DECL|TC_STATUS_SYNCBUSY_Pos|macro|TC_STATUS_SYNCBUSY_Pos
DECL|TC_STATUS_SYNCBUSY|macro|TC_STATUS_SYNCBUSY
DECL|TC_STATUS_Type|typedef|} TC_STATUS_Type;
DECL|TC_U2212|macro|TC_U2212
DECL|TcCount16|typedef|} TcCount16;
DECL|TcCount32|typedef|} TcCount32;
DECL|TcCount8|typedef|} TcCount8;
DECL|Tc|typedef|} Tc;
DECL|WAVEGEN|member|uint16_t WAVEGEN:2; /*!< bit: 5.. 6 Waveform Generation Operation */
DECL|_SAMD20_TC_COMPONENT_|macro|_SAMD20_TC_COMPONENT_
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|uint16_t|member|uint16_t :12; /*!< bit: 0..11 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 3 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 4 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 7 Reserved */
DECL|uint16_t|member|uint16_t :2; /*!< bit: 14..15 Reserved */
DECL|uint16_t|member|uint16_t :2; /*!< bit: 14..15 Reserved */
DECL|uint16_t|member|uint16_t :2; /*!< bit: 14..15 Reserved */
DECL|uint16_t|member|uint16_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint16_t|member|uint16_t :3; /*!< bit: 9..11 Reserved */
DECL|uint16_t|member|uint16_t :9; /*!< bit: 5..13 Reserved */
DECL|uint8_t|member|__I uint8_t :1; /*!< bit: 2 Reserved */
DECL|uint8_t|member|__I uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|__I uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|__I uint8_t :4; /*!< bit: 0.. 3 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 1 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 1 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 2 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 2 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 2.. 3 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 2.. 3 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 5.. 6 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|uint8_t :3; /*!< bit: 0.. 2 Reserved */
DECL|uint8_t|member|uint8_t :3; /*!< bit: 3.. 5 Reserved */
DECL|uint8_t|member|uint8_t :3; /*!< bit: 3.. 5 Reserved */
DECL|uint8_t|member|uint8_t :4; /*!< bit: 0.. 3 Reserved */
DECL|uint8_t|member|uint8_t :4; /*!< bit: 0.. 3 Reserved */
DECL|uint8_t|member|uint8_t :7; /*!< bit: 1.. 7 Reserved */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
