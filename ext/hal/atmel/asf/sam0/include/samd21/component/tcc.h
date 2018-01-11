DECL|ALOCK|member|uint32_t ALOCK:1; /*!< bit: 14 Auto Lock */
DECL|BLANKVAL|member|uint32_t BLANKVAL:8; /*!< bit: 16..23 Fault A Blanking Time */
DECL|BLANKVAL|member|uint32_t BLANKVAL:8; /*!< bit: 16..23 Fault B Blanking Time */
DECL|BLANK|member|uint32_t BLANK:2; /*!< bit: 5.. 6 Fault A Blanking Mode */
DECL|BLANK|member|uint32_t BLANK:2; /*!< bit: 5.. 6 Fault B Blanking Mode */
DECL|CAPTURE|member|uint32_t CAPTURE:3; /*!< bit: 12..14 Fault A Capture Action */
DECL|CAPTURE|member|uint32_t CAPTURE:3; /*!< bit: 12..14 Fault B Capture Action */
DECL|CC0|member|uint32_t CC0:1; /*!< bit: 8 Compare Channel 0 Busy */
DECL|CC1|member|uint32_t CC1:1; /*!< bit: 9 Compare Channel 1 Busy */
DECL|CC2|member|uint32_t CC2:1; /*!< bit: 10 Compare Channel 2 Busy */
DECL|CC3|member|uint32_t CC3:1; /*!< bit: 11 Compare Channel 3 Busy */
DECL|CCB0|member|uint32_t CCB0:1; /*!< bit: 19 Compare Channel Buffer 0 Busy */
DECL|CCB1|member|uint32_t CCB1:1; /*!< bit: 20 Compare Channel Buffer 1 Busy */
DECL|CCB2|member|uint32_t CCB2:1; /*!< bit: 21 Compare Channel Buffer 2 Busy */
DECL|CCB3|member|uint32_t CCB3:1; /*!< bit: 22 Compare Channel Buffer 3 Busy */
DECL|CCBV0|member|uint32_t CCBV0:1; /*!< bit: 16 Compare Channel 0 Buffer Valid */
DECL|CCBV1|member|uint32_t CCBV1:1; /*!< bit: 17 Compare Channel 1 Buffer Valid */
DECL|CCBV2|member|uint32_t CCBV2:1; /*!< bit: 18 Compare Channel 2 Buffer Valid */
DECL|CCBV3|member|uint32_t CCBV3:1; /*!< bit: 19 Compare Channel 3 Buffer Valid */
DECL|CCBV|member|uint32_t CCBV:4; /*!< bit: 16..19 Compare Channel x Buffer Valid */
DECL|CCB|member|__IO TCC_CCB_Type CCB[4]; /**< \brief Offset: 0x70 (R/W 32) Compare and Capture Buffer */
DECL|CCB|member|uint32_t CCB:18; /*!< bit: 6..23 Channel Compare/Capture Buffer Value */
DECL|CCB|member|uint32_t CCB:19; /*!< bit: 5..23 Channel Compare/Capture Buffer Value */
DECL|CCB|member|uint32_t CCB:20; /*!< bit: 4..23 Channel Compare/Capture Buffer Value */
DECL|CCB|member|uint32_t CCB:24; /*!< bit: 0..23 Channel Compare/Capture Buffer Value */
DECL|CCB|member|uint32_t CCB:4; /*!< bit: 19..22 Compare Channel Buffer x Busy */
DECL|CC|member|__IO TCC_CC_Type CC[4]; /**< \brief Offset: 0x44 (R/W 32) Compare and Capture */
DECL|CC|member|uint32_t CC:18; /*!< bit: 6..23 Channel Compare/Capture Value */
DECL|CC|member|uint32_t CC:19; /*!< bit: 5..23 Channel Compare/Capture Value */
DECL|CC|member|uint32_t CC:20; /*!< bit: 4..23 Channel Compare/Capture Value */
DECL|CC|member|uint32_t CC:24; /*!< bit: 0..23 Channel Compare/Capture Value */
DECL|CC|member|uint32_t CC:4; /*!< bit: 8..11 Compare Channel x Busy */
DECL|CHSEL|member|uint32_t CHSEL:2; /*!< bit: 10..11 Fault A Capture Channel */
DECL|CHSEL|member|uint32_t CHSEL:2; /*!< bit: 10..11 Fault B Capture Channel */
DECL|CICCEN0|member|uint32_t CICCEN0:1; /*!< bit: 8 Circular Channel 0 Enable */
DECL|CICCEN1|member|uint32_t CICCEN1:1; /*!< bit: 9 Circular Channel 1 Enable */
DECL|CICCEN2|member|uint32_t CICCEN2:1; /*!< bit: 10 Circular Channel 2 Enable */
DECL|CICCEN3|member|uint32_t CICCEN3:1; /*!< bit: 11 Circular Channel 3 Enable */
DECL|CICCENB0|member|uint32_t CICCENB0:1; /*!< bit: 8 Circular Channel 0 Enable Buffer */
DECL|CICCENB1|member|uint32_t CICCENB1:1; /*!< bit: 9 Circular Channel 1 Enable Buffer */
DECL|CICCENB2|member|uint32_t CICCENB2:1; /*!< bit: 10 Circular Channel 2 Enable Buffer */
DECL|CICCENB3|member|uint32_t CICCENB3:1; /*!< bit: 11 Circular Channel 3 Enable Buffer */
DECL|CICCENB|member|uint32_t CICCENB:4; /*!< bit: 8..11 Circular Channel x Enable Buffer */
DECL|CICCEN|member|uint32_t CICCEN:4; /*!< bit: 8..11 Circular Channel x Enable */
DECL|CIPERENB|member|uint32_t CIPERENB:1; /*!< bit: 7 Circular Period Enable Buffer */
DECL|CIPEREN|member|uint32_t CIPEREN:1; /*!< bit: 7 Circular period Enable */
DECL|CMD|member|uint8_t CMD:3; /*!< bit: 5.. 7 TCC Command */
DECL|CMD|member|uint8_t CMD:3; /*!< bit: 5.. 7 TCC Command */
DECL|CMP0|member|uint32_t CMP0:1; /*!< bit: 24 Compare Channel 0 Value */
DECL|CMP1|member|uint32_t CMP1:1; /*!< bit: 25 Compare Channel 1 Value */
DECL|CMP2|member|uint32_t CMP2:1; /*!< bit: 26 Compare Channel 2 Value */
DECL|CMP3|member|uint32_t CMP3:1; /*!< bit: 27 Compare Channel 3 Value */
DECL|CMP|member|uint32_t CMP:4; /*!< bit: 24..27 Compare Channel x Value */
DECL|CNTEO|member|uint32_t CNTEO:1; /*!< bit: 10 Timer/counter Output Event Enable */
DECL|CNTSEL|member|uint32_t CNTSEL:2; /*!< bit: 6.. 7 Timer/counter Output Event Mode */
DECL|CNT|member|__I uint32_t CNT:1; /*!< bit: 2 Counter */
DECL|CNT|member|uint32_t CNT:1; /*!< bit: 2 Counter Interrupt Enable */
DECL|CNT|member|uint32_t CNT:1; /*!< bit: 2 Counter Interrupt Enable */
DECL|COUNT|member|__IO TCC_COUNT_Type COUNT; /**< \brief Offset: 0x34 (R/W 32) Count */
DECL|COUNT|member|uint32_t COUNT:18; /*!< bit: 6..23 Counter Value */
DECL|COUNT|member|uint32_t COUNT:19; /*!< bit: 5..23 Counter Value */
DECL|COUNT|member|uint32_t COUNT:1; /*!< bit: 4 Count Busy */
DECL|COUNT|member|uint32_t COUNT:20; /*!< bit: 4..23 Counter Value */
DECL|COUNT|member|uint32_t COUNT:24; /*!< bit: 0..23 Counter Value */
DECL|CPTEN0|member|uint32_t CPTEN0:1; /*!< bit: 24 Capture Channel 0 Enable */
DECL|CPTEN1|member|uint32_t CPTEN1:1; /*!< bit: 25 Capture Channel 1 Enable */
DECL|CPTEN2|member|uint32_t CPTEN2:1; /*!< bit: 26 Capture Channel 2 Enable */
DECL|CPTEN3|member|uint32_t CPTEN3:1; /*!< bit: 27 Capture Channel 3 Enable */
DECL|CPTEN|member|uint32_t CPTEN:4; /*!< bit: 24..27 Capture Channel x Enable */
DECL|CTRLA|member|__IO TCC_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 32) Control A */
DECL|CTRLBCLR|member|__IO TCC_CTRLBCLR_Type CTRLBCLR; /**< \brief Offset: 0x04 (R/W 8) Control B Clear */
DECL|CTRLBSET|member|__IO TCC_CTRLBSET_Type CTRLBSET; /**< \brief Offset: 0x05 (R/W 8) Control B Set */
DECL|CTRLB|member|uint32_t CTRLB:1; /*!< bit: 2 Ctrlb Busy */
DECL|DBGCTRL|member|__IO TCC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x1E (R/W 8) Debug Control */
DECL|DBGRUN|member|uint8_t DBGRUN:1; /*!< bit: 0 Debug Running Mode */
DECL|DFS|member|__I uint32_t DFS:1; /*!< bit: 11 Non-Recoverable Debug Fault */
DECL|DFS|member|uint32_t DFS:1; /*!< bit: 11 Non-Recoverable Debug Fault Interrupt Enable */
DECL|DFS|member|uint32_t DFS:1; /*!< bit: 11 Non-Recoverable Debug Fault Interrupt Enable */
DECL|DFS|member|uint32_t DFS:1; /*!< bit: 3 Non-Recoverable Debug Fault State */
DECL|DIR|member|uint8_t DIR:1; /*!< bit: 0 Counter Direction */
DECL|DIR|member|uint8_t DIR:1; /*!< bit: 0 Counter Direction */
DECL|DITH4|member|} DITH4; /*!< Structure used for DITH4 */
DECL|DITH4|member|} DITH4; /*!< Structure used for DITH4 */
DECL|DITH4|member|} DITH4; /*!< Structure used for DITH4 */
DECL|DITH4|member|} DITH4; /*!< Structure used for DITH4 */
DECL|DITH4|member|} DITH4; /*!< Structure used for DITH4 */
DECL|DITH5|member|} DITH5; /*!< Structure used for DITH5 */
DECL|DITH5|member|} DITH5; /*!< Structure used for DITH5 */
DECL|DITH5|member|} DITH5; /*!< Structure used for DITH5 */
DECL|DITH5|member|} DITH5; /*!< Structure used for DITH5 */
DECL|DITH5|member|} DITH5; /*!< Structure used for DITH5 */
DECL|DITH6|member|} DITH6; /*!< Structure used for DITH6 */
DECL|DITH6|member|} DITH6; /*!< Structure used for DITH6 */
DECL|DITH6|member|} DITH6; /*!< Structure used for DITH6 */
DECL|DITH6|member|} DITH6; /*!< Structure used for DITH6 */
DECL|DITH6|member|} DITH6; /*!< Structure used for DITH6 */
DECL|DITHERCYB|member|uint32_t DITHERCYB:4; /*!< bit: 0.. 3 Dithering Buffer Cycle Number */
DECL|DITHERCYB|member|uint32_t DITHERCYB:4; /*!< bit: 0.. 3 Dithering Buffer Cycle Number */
DECL|DITHERCYB|member|uint32_t DITHERCYB:5; /*!< bit: 0.. 4 Dithering Buffer Cycle Number */
DECL|DITHERCYB|member|uint32_t DITHERCYB:5; /*!< bit: 0.. 4 Dithering Buffer Cycle Number */
DECL|DITHERCYB|member|uint32_t DITHERCYB:6; /*!< bit: 0.. 5 Dithering Buffer Cycle Number */
DECL|DITHERCYB|member|uint32_t DITHERCYB:6; /*!< bit: 0.. 5 Dithering Buffer Cycle Number */
DECL|DITHERCY|member|uint32_t DITHERCY:4; /*!< bit: 0.. 3 Dithering Cycle Number */
DECL|DITHERCY|member|uint32_t DITHERCY:4; /*!< bit: 0.. 3 Dithering Cycle Number */
DECL|DITHERCY|member|uint32_t DITHERCY:5; /*!< bit: 0.. 4 Dithering Cycle Number */
DECL|DITHERCY|member|uint32_t DITHERCY:5; /*!< bit: 0.. 4 Dithering Cycle Number */
DECL|DITHERCY|member|uint32_t DITHERCY:6; /*!< bit: 0.. 5 Dithering Cycle Number */
DECL|DITHERCY|member|uint32_t DITHERCY:6; /*!< bit: 0.. 5 Dithering Cycle Number */
DECL|DRVCTRL|member|__IO TCC_DRVCTRL_Type DRVCTRL; /**< \brief Offset: 0x18 (R/W 32) Driver Control */
DECL|DTHS|member|uint32_t DTHS:8; /*!< bit: 24..31 Dead-time High Side Outputs Value */
DECL|DTIEN0|member|uint32_t DTIEN0:1; /*!< bit: 8 Dead-time Insertion Generator 0 Enable */
DECL|DTIEN1|member|uint32_t DTIEN1:1; /*!< bit: 9 Dead-time Insertion Generator 1 Enable */
DECL|DTIEN2|member|uint32_t DTIEN2:1; /*!< bit: 10 Dead-time Insertion Generator 2 Enable */
DECL|DTIEN3|member|uint32_t DTIEN3:1; /*!< bit: 11 Dead-time Insertion Generator 3 Enable */
DECL|DTIEN|member|uint32_t DTIEN:4; /*!< bit: 8..11 Dead-time Insertion Generator x Enable */
DECL|DTLS|member|uint32_t DTLS:8; /*!< bit: 16..23 Dead-time Low Side Outputs Value */
DECL|ENABLE|member|uint32_t ENABLE:1; /*!< bit: 1 Enable */
DECL|ENABLE|member|uint32_t ENABLE:1; /*!< bit: 1 Enable Busy */
DECL|ERR|member|__I uint32_t ERR:1; /*!< bit: 3 Error */
DECL|ERR|member|uint32_t ERR:1; /*!< bit: 3 Error Interrupt Enable */
DECL|ERR|member|uint32_t ERR:1; /*!< bit: 3 Error Interrupt Enable */
DECL|EVACT0|member|uint32_t EVACT0:3; /*!< bit: 0.. 2 Timer/counter Input Event0 Action */
DECL|EVACT1|member|uint32_t EVACT1:3; /*!< bit: 3.. 5 Timer/counter Input Event1 Action */
DECL|EVCTRL|member|__IO TCC_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x20 (R/W 32) Event Control */
DECL|FAULT0IN|member|uint32_t FAULT0IN:1; /*!< bit: 10 Non-Recoverable Fault0 Input */
DECL|FAULT0|member|__I uint32_t FAULT0:1; /*!< bit: 14 Non-Recoverable Fault 0 */
DECL|FAULT0|member|uint32_t FAULT0:1; /*!< bit: 14 Non-Recoverable Fault 0 Interrupt Enable */
DECL|FAULT0|member|uint32_t FAULT0:1; /*!< bit: 14 Non-Recoverable Fault 0 Interrupt Enable */
DECL|FAULT0|member|uint32_t FAULT0:1; /*!< bit: 14 Non-Recoverable Fault 0 State */
DECL|FAULT1IN|member|uint32_t FAULT1IN:1; /*!< bit: 11 Non-Recoverable Fault1 Input */
DECL|FAULT1|member|__I uint32_t FAULT1:1; /*!< bit: 15 Non-Recoverable Fault 1 */
DECL|FAULT1|member|uint32_t FAULT1:1; /*!< bit: 15 Non-Recoverable Fault 1 Interrupt Enable */
DECL|FAULT1|member|uint32_t FAULT1:1; /*!< bit: 15 Non-Recoverable Fault 1 Interrupt Enable */
DECL|FAULT1|member|uint32_t FAULT1:1; /*!< bit: 15 Non-Recoverable Fault 1 State */
DECL|FAULTAIN|member|uint32_t FAULTAIN:1; /*!< bit: 8 Recoverable Fault A Input */
DECL|FAULTA|member|__I uint32_t FAULTA:1; /*!< bit: 12 Recoverable Fault A */
DECL|FAULTA|member|uint32_t FAULTA:1; /*!< bit: 12 Recoverable Fault A Interrupt Enable */
DECL|FAULTA|member|uint32_t FAULTA:1; /*!< bit: 12 Recoverable Fault A Interrupt Enable */
DECL|FAULTA|member|uint32_t FAULTA:1; /*!< bit: 12 Recoverable Fault A State */
DECL|FAULTBIN|member|uint32_t FAULTBIN:1; /*!< bit: 9 Recoverable Fault B Input */
DECL|FAULTB|member|__I uint32_t FAULTB:1; /*!< bit: 13 Recoverable Fault B */
DECL|FAULTB|member|uint32_t FAULTB:1; /*!< bit: 13 Recoverable Fault B Interrupt Enable */
DECL|FAULTB|member|uint32_t FAULTB:1; /*!< bit: 13 Recoverable Fault B Interrupt Enable */
DECL|FAULTB|member|uint32_t FAULTB:1; /*!< bit: 13 Recoverable Fault B State */
DECL|FCTRLA|member|__IO TCC_FCTRLA_Type FCTRLA; /**< \brief Offset: 0x0C (R/W 32) Recoverable Fault A Configuration */
DECL|FCTRLB|member|__IO TCC_FCTRLB_Type FCTRLB; /**< \brief Offset: 0x10 (R/W 32) Recoverable Fault B Configuration */
DECL|FDDBD|member|uint8_t FDDBD:1; /*!< bit: 2 Fault Detection on Debug Break Detection */
DECL|FILTERVAL0|member|uint32_t FILTERVAL0:4; /*!< bit: 24..27 Non-Recoverable Fault Input 0 Filter Value */
DECL|FILTERVAL1|member|uint32_t FILTERVAL1:4; /*!< bit: 28..31 Non-Recoverable Fault Input 1 Filter Value */
DECL|FILTERVAL|member|uint32_t FILTERVAL:4; /*!< bit: 24..27 Fault A Filter Value */
DECL|FILTERVAL|member|uint32_t FILTERVAL:4; /*!< bit: 24..27 Fault B Filter Value */
DECL|HALT|member|uint32_t HALT:2; /*!< bit: 8.. 9 Fault A Halt Mode */
DECL|HALT|member|uint32_t HALT:2; /*!< bit: 8.. 9 Fault B Halt Mode */
DECL|IDXCMD|member|uint8_t IDXCMD:2; /*!< bit: 3.. 4 Ramp Index Command */
DECL|IDXCMD|member|uint8_t IDXCMD:2; /*!< bit: 3.. 4 Ramp Index Command */
DECL|IDX|member|uint32_t IDX:1; /*!< bit: 1 Ramp */
DECL|INTENCLR|member|__IO TCC_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x24 (R/W 32) Interrupt Enable Clear */
DECL|INTENSET|member|__IO TCC_INTENSET_Type INTENSET; /**< \brief Offset: 0x28 (R/W 32) Interrupt Enable Set */
DECL|INTFLAG|member|__IO TCC_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x2C (R/W 32) Interrupt Flag Status and Clear */
DECL|INVEN0|member|uint32_t INVEN0:1; /*!< bit: 16 Output Waveform 0 Inversion */
DECL|INVEN1|member|uint32_t INVEN1:1; /*!< bit: 17 Output Waveform 1 Inversion */
DECL|INVEN2|member|uint32_t INVEN2:1; /*!< bit: 18 Output Waveform 2 Inversion */
DECL|INVEN3|member|uint32_t INVEN3:1; /*!< bit: 19 Output Waveform 3 Inversion */
DECL|INVEN4|member|uint32_t INVEN4:1; /*!< bit: 20 Output Waveform 4 Inversion */
DECL|INVEN5|member|uint32_t INVEN5:1; /*!< bit: 21 Output Waveform 5 Inversion */
DECL|INVEN6|member|uint32_t INVEN6:1; /*!< bit: 22 Output Waveform 6 Inversion */
DECL|INVEN7|member|uint32_t INVEN7:1; /*!< bit: 23 Output Waveform 7 Inversion */
DECL|INVEN|member|uint32_t INVEN:8; /*!< bit: 16..23 Output Waveform x Inversion */
DECL|KEEP|member|uint32_t KEEP:1; /*!< bit: 3 Fault A Keeper */
DECL|KEEP|member|uint32_t KEEP:1; /*!< bit: 3 Fault B Keeper */
DECL|LUPD|member|uint8_t LUPD:1; /*!< bit: 1 Lock Update */
DECL|LUPD|member|uint8_t LUPD:1; /*!< bit: 1 Lock Update */
DECL|MC0|member|__I uint32_t MC0:1; /*!< bit: 16 Match or Capture 0 */
DECL|MC0|member|uint32_t MC0:1; /*!< bit: 16 Match or Capture Channel 0 Interrupt Enable */
DECL|MC0|member|uint32_t MC0:1; /*!< bit: 16 Match or Capture Channel 0 Interrupt Enable */
DECL|MC1|member|__I uint32_t MC1:1; /*!< bit: 17 Match or Capture 1 */
DECL|MC1|member|uint32_t MC1:1; /*!< bit: 17 Match or Capture Channel 1 Interrupt Enable */
DECL|MC1|member|uint32_t MC1:1; /*!< bit: 17 Match or Capture Channel 1 Interrupt Enable */
DECL|MC2|member|__I uint32_t MC2:1; /*!< bit: 18 Match or Capture 2 */
DECL|MC2|member|uint32_t MC2:1; /*!< bit: 18 Match or Capture Channel 2 Interrupt Enable */
DECL|MC2|member|uint32_t MC2:1; /*!< bit: 18 Match or Capture Channel 2 Interrupt Enable */
DECL|MC3|member|__I uint32_t MC3:1; /*!< bit: 19 Match or Capture 3 */
DECL|MC3|member|uint32_t MC3:1; /*!< bit: 19 Match or Capture Channel 3 Interrupt Enable */
DECL|MC3|member|uint32_t MC3:1; /*!< bit: 19 Match or Capture Channel 3 Interrupt Enable */
DECL|MCEI0|member|uint32_t MCEI0:1; /*!< bit: 16 Match or Capture Channel 0 Event Input Enable */
DECL|MCEI1|member|uint32_t MCEI1:1; /*!< bit: 17 Match or Capture Channel 1 Event Input Enable */
DECL|MCEI2|member|uint32_t MCEI2:1; /*!< bit: 18 Match or Capture Channel 2 Event Input Enable */
DECL|MCEI3|member|uint32_t MCEI3:1; /*!< bit: 19 Match or Capture Channel 3 Event Input Enable */
DECL|MCEI|member|uint32_t MCEI:4; /*!< bit: 16..19 Match or Capture Channel x Event Input Enable */
DECL|MCEO0|member|uint32_t MCEO0:1; /*!< bit: 24 Match or Capture Channel 0 Event Output Enable */
DECL|MCEO1|member|uint32_t MCEO1:1; /*!< bit: 25 Match or Capture Channel 1 Event Output Enable */
DECL|MCEO2|member|uint32_t MCEO2:1; /*!< bit: 26 Match or Capture Channel 2 Event Output Enable */
DECL|MCEO3|member|uint32_t MCEO3:1; /*!< bit: 27 Match or Capture Channel 3 Event Output Enable */
DECL|MCEO|member|uint32_t MCEO:4; /*!< bit: 24..27 Match or Capture Channel x Event Output Enable */
DECL|MC|member|__I uint32_t MC:4; /*!< bit: 16..19 Match or Capture x */
DECL|MC|member|uint32_t MC:4; /*!< bit: 16..19 Match or Capture Channel x Interrupt Enable */
DECL|MC|member|uint32_t MC:4; /*!< bit: 16..19 Match or Capture Channel x Interrupt Enable */
DECL|NRE0|member|uint32_t NRE0:1; /*!< bit: 0 Non-Recoverable State 0 Output Enable */
DECL|NRE1|member|uint32_t NRE1:1; /*!< bit: 1 Non-Recoverable State 1 Output Enable */
DECL|NRE2|member|uint32_t NRE2:1; /*!< bit: 2 Non-Recoverable State 2 Output Enable */
DECL|NRE3|member|uint32_t NRE3:1; /*!< bit: 3 Non-Recoverable State 3 Output Enable */
DECL|NRE4|member|uint32_t NRE4:1; /*!< bit: 4 Non-Recoverable State 4 Output Enable */
DECL|NRE5|member|uint32_t NRE5:1; /*!< bit: 5 Non-Recoverable State 5 Output Enable */
DECL|NRE6|member|uint32_t NRE6:1; /*!< bit: 6 Non-Recoverable State 6 Output Enable */
DECL|NRE7|member|uint32_t NRE7:1; /*!< bit: 7 Non-Recoverable State 7 Output Enable */
DECL|NRE|member|uint32_t NRE:8; /*!< bit: 0.. 7 Non-Recoverable State x Output Enable */
DECL|NRV0|member|uint32_t NRV0:1; /*!< bit: 8 Non-Recoverable State 0 Output Value */
DECL|NRV1|member|uint32_t NRV1:1; /*!< bit: 9 Non-Recoverable State 1 Output Value */
DECL|NRV2|member|uint32_t NRV2:1; /*!< bit: 10 Non-Recoverable State 2 Output Value */
DECL|NRV3|member|uint32_t NRV3:1; /*!< bit: 11 Non-Recoverable State 3 Output Value */
DECL|NRV4|member|uint32_t NRV4:1; /*!< bit: 12 Non-Recoverable State 4 Output Value */
DECL|NRV5|member|uint32_t NRV5:1; /*!< bit: 13 Non-Recoverable State 5 Output Value */
DECL|NRV6|member|uint32_t NRV6:1; /*!< bit: 14 Non-Recoverable State 6 Output Value */
DECL|NRV7|member|uint32_t NRV7:1; /*!< bit: 15 Non-Recoverable State 7 Output Value */
DECL|NRV|member|uint32_t NRV:8; /*!< bit: 8..15 Non-Recoverable State x Output Value */
DECL|ONESHOT|member|uint8_t ONESHOT:1; /*!< bit: 2 One-Shot */
DECL|ONESHOT|member|uint8_t ONESHOT:1; /*!< bit: 2 One-Shot */
DECL|OTMX|member|uint32_t OTMX:2; /*!< bit: 0.. 1 Output Matrix */
DECL|OVFEO|member|uint32_t OVFEO:1; /*!< bit: 8 Overflow/Underflow Output Event Enable */
DECL|OVF|member|__I uint32_t OVF:1; /*!< bit: 0 Overflow */
DECL|OVF|member|uint32_t OVF:1; /*!< bit: 0 Overflow Interrupt Enable */
DECL|OVF|member|uint32_t OVF:1; /*!< bit: 0 Overflow Interrupt Enable */
DECL|PATTBV|member|uint32_t PATTBV:1; /*!< bit: 5 Pattern Buffer Valid */
DECL|PATTB|member|__IO TCC_PATTB_Type PATTB; /**< \brief Offset: 0x64 (R/W 16) Pattern Buffer */
DECL|PATTB|member|uint32_t PATTB:1; /*!< bit: 16 Pattern Buffer Busy */
DECL|PATT|member|__IO TCC_PATT_Type PATT; /**< \brief Offset: 0x38 (R/W 16) Pattern */
DECL|PATT|member|uint32_t PATT:1; /*!< bit: 5 Pattern Busy */
DECL|PERBV|member|uint32_t PERBV:1; /*!< bit: 7 Period Buffer Valid */
DECL|PERB|member|__IO TCC_PERB_Type PERB; /**< \brief Offset: 0x6C (R/W 32) Period Buffer */
DECL|PERB|member|uint32_t PERB:18; /*!< bit: 6..23 Period Buffer Value */
DECL|PERB|member|uint32_t PERB:19; /*!< bit: 5..23 Period Buffer Value */
DECL|PERB|member|uint32_t PERB:1; /*!< bit: 18 Period Buffer Busy */
DECL|PERB|member|uint32_t PERB:20; /*!< bit: 4..23 Period Buffer Value */
DECL|PERB|member|uint32_t PERB:24; /*!< bit: 0..23 Period Buffer Value */
DECL|PER|member|__IO TCC_PER_Type PER; /**< \brief Offset: 0x40 (R/W 32) Period */
DECL|PER|member|uint32_t PER:18; /*!< bit: 6..23 Period Value */
DECL|PER|member|uint32_t PER:19; /*!< bit: 5..23 Period Value */
DECL|PER|member|uint32_t PER:1; /*!< bit: 7 Period busy */
DECL|PER|member|uint32_t PER:20; /*!< bit: 4..23 Period Value */
DECL|PER|member|uint32_t PER:24; /*!< bit: 0..23 Period Value */
DECL|PGE0|member|uint16_t PGE0:1; /*!< bit: 0 Pattern Generator 0 Output Enable */
DECL|PGE1|member|uint16_t PGE1:1; /*!< bit: 1 Pattern Generator 1 Output Enable */
DECL|PGE2|member|uint16_t PGE2:1; /*!< bit: 2 Pattern Generator 2 Output Enable */
DECL|PGE3|member|uint16_t PGE3:1; /*!< bit: 3 Pattern Generator 3 Output Enable */
DECL|PGE4|member|uint16_t PGE4:1; /*!< bit: 4 Pattern Generator 4 Output Enable */
DECL|PGE5|member|uint16_t PGE5:1; /*!< bit: 5 Pattern Generator 5 Output Enable */
DECL|PGE6|member|uint16_t PGE6:1; /*!< bit: 6 Pattern Generator 6 Output Enable */
DECL|PGE7|member|uint16_t PGE7:1; /*!< bit: 7 Pattern Generator 7 Output Enable */
DECL|PGEB0|member|uint16_t PGEB0:1; /*!< bit: 0 Pattern Generator 0 Output Enable Buffer */
DECL|PGEB1|member|uint16_t PGEB1:1; /*!< bit: 1 Pattern Generator 1 Output Enable Buffer */
DECL|PGEB2|member|uint16_t PGEB2:1; /*!< bit: 2 Pattern Generator 2 Output Enable Buffer */
DECL|PGEB3|member|uint16_t PGEB3:1; /*!< bit: 3 Pattern Generator 3 Output Enable Buffer */
DECL|PGEB4|member|uint16_t PGEB4:1; /*!< bit: 4 Pattern Generator 4 Output Enable Buffer */
DECL|PGEB5|member|uint16_t PGEB5:1; /*!< bit: 5 Pattern Generator 5 Output Enable Buffer */
DECL|PGEB6|member|uint16_t PGEB6:1; /*!< bit: 6 Pattern Generator 6 Output Enable Buffer */
DECL|PGEB7|member|uint16_t PGEB7:1; /*!< bit: 7 Pattern Generator 7 Output Enable Buffer */
DECL|PGEB|member|uint16_t PGEB:8; /*!< bit: 0.. 7 Pattern Generator x Output Enable Buffer */
DECL|PGE|member|uint16_t PGE:8; /*!< bit: 0.. 7 Pattern Generator x Output Enable */
DECL|PGV0|member|uint16_t PGV0:1; /*!< bit: 8 Pattern Generator 0 Output Value */
DECL|PGV1|member|uint16_t PGV1:1; /*!< bit: 9 Pattern Generator 1 Output Value */
DECL|PGV2|member|uint16_t PGV2:1; /*!< bit: 10 Pattern Generator 2 Output Value */
DECL|PGV3|member|uint16_t PGV3:1; /*!< bit: 11 Pattern Generator 3 Output Value */
DECL|PGV4|member|uint16_t PGV4:1; /*!< bit: 12 Pattern Generator 4 Output Value */
DECL|PGV5|member|uint16_t PGV5:1; /*!< bit: 13 Pattern Generator 5 Output Value */
DECL|PGV6|member|uint16_t PGV6:1; /*!< bit: 14 Pattern Generator 6 Output Value */
DECL|PGV7|member|uint16_t PGV7:1; /*!< bit: 15 Pattern Generator 7 Output Value */
DECL|PGVB0|member|uint16_t PGVB0:1; /*!< bit: 8 Pattern Generator 0 Output Enable */
DECL|PGVB1|member|uint16_t PGVB1:1; /*!< bit: 9 Pattern Generator 1 Output Enable */
DECL|PGVB2|member|uint16_t PGVB2:1; /*!< bit: 10 Pattern Generator 2 Output Enable */
DECL|PGVB3|member|uint16_t PGVB3:1; /*!< bit: 11 Pattern Generator 3 Output Enable */
DECL|PGVB4|member|uint16_t PGVB4:1; /*!< bit: 12 Pattern Generator 4 Output Enable */
DECL|PGVB5|member|uint16_t PGVB5:1; /*!< bit: 13 Pattern Generator 5 Output Enable */
DECL|PGVB6|member|uint16_t PGVB6:1; /*!< bit: 14 Pattern Generator 6 Output Enable */
DECL|PGVB7|member|uint16_t PGVB7:1; /*!< bit: 15 Pattern Generator 7 Output Enable */
DECL|PGVB|member|uint16_t PGVB:8; /*!< bit: 8..15 Pattern Generator x Output Enable */
DECL|PGV|member|uint16_t PGV:8; /*!< bit: 8..15 Pattern Generator x Output Value */
DECL|POL0|member|uint32_t POL0:1; /*!< bit: 16 Channel 0 Polarity */
DECL|POL1|member|uint32_t POL1:1; /*!< bit: 17 Channel 1 Polarity */
DECL|POL2|member|uint32_t POL2:1; /*!< bit: 18 Channel 2 Polarity */
DECL|POL3|member|uint32_t POL3:1; /*!< bit: 19 Channel 3 Polarity */
DECL|POLB0|member|uint32_t POLB0:1; /*!< bit: 16 Channel 0 Polarity Buffer */
DECL|POLB1|member|uint32_t POLB1:1; /*!< bit: 17 Channel 1 Polarity Buffer */
DECL|POLB2|member|uint32_t POLB2:1; /*!< bit: 18 Channel 2 Polarity Buffer */
DECL|POLB3|member|uint32_t POLB3:1; /*!< bit: 19 Channel 3 Polarity Buffer */
DECL|POLB|member|uint32_t POLB:4; /*!< bit: 16..19 Channel x Polarity Buffer */
DECL|POL|member|uint32_t POL:4; /*!< bit: 16..19 Channel x Polarity */
DECL|PRESCALER|member|uint32_t PRESCALER:3; /*!< bit: 8..10 Prescaler */
DECL|PRESCSYNC|member|uint32_t PRESCSYNC:2; /*!< bit: 12..13 Prescaler and Counter Synchronization Selection */
DECL|QUAL|member|uint32_t QUAL:1; /*!< bit: 4 Fault A Qualification */
DECL|QUAL|member|uint32_t QUAL:1; /*!< bit: 4 Fault B Qualification */
DECL|RAMPB|member|uint32_t RAMPB:2; /*!< bit: 4.. 5 Ramp Mode Buffer */
DECL|RAMP|member|uint32_t RAMP:2; /*!< bit: 4.. 5 Ramp Mode */
DECL|RESOLUTION|member|uint32_t RESOLUTION:2; /*!< bit: 5.. 6 Enhanced Resolution */
DECL|RESTART|member|uint32_t RESTART:1; /*!< bit: 7 Fault A Restart */
DECL|RESTART|member|uint32_t RESTART:1; /*!< bit: 7 Fault B Restart */
DECL|REV_TCC|macro|REV_TCC
DECL|RUNSTDBY|member|uint32_t RUNSTDBY:1; /*!< bit: 11 Run in Standby */
DECL|Reserved1|member|RoReg8 Reserved1[0x2];
DECL|Reserved2|member|RoReg8 Reserved2[0x2];
DECL|Reserved3|member|RoReg8 Reserved3[0x1];
DECL|Reserved4|member|RoReg8 Reserved4[0x2];
DECL|Reserved5|member|RoReg8 Reserved5[0x10];
DECL|Reserved6|member|RoReg8 Reserved6[0x2];
DECL|SLAVE|member|uint32_t SLAVE:1; /*!< bit: 4 Slave */
DECL|SRC|member|uint32_t SRC:2; /*!< bit: 0.. 1 Fault A Source */
DECL|SRC|member|uint32_t SRC:2; /*!< bit: 0.. 1 Fault B Source */
DECL|STATUS|member|__IO TCC_STATUS_Type STATUS; /**< \brief Offset: 0x30 (R/W 32) Status */
DECL|STATUS|member|uint32_t STATUS:1; /*!< bit: 3 Status Busy */
DECL|STOP|member|uint32_t STOP:1; /*!< bit: 0 Stop */
DECL|SWAP0|member|uint32_t SWAP0:1; /*!< bit: 24 Swap DTI Output Pair 0 */
DECL|SWAP1|member|uint32_t SWAP1:1; /*!< bit: 25 Swap DTI Output Pair 1 */
DECL|SWAP2|member|uint32_t SWAP2:1; /*!< bit: 26 Swap DTI Output Pair 2 */
DECL|SWAP3|member|uint32_t SWAP3:1; /*!< bit: 27 Swap DTI Output Pair 3 */
DECL|SWAPB0|member|uint32_t SWAPB0:1; /*!< bit: 24 Swap DTI Output Pair 0 Buffer */
DECL|SWAPB1|member|uint32_t SWAPB1:1; /*!< bit: 25 Swap DTI Output Pair 1 Buffer */
DECL|SWAPB2|member|uint32_t SWAPB2:1; /*!< bit: 26 Swap DTI Output Pair 2 Buffer */
DECL|SWAPB3|member|uint32_t SWAPB3:1; /*!< bit: 27 Swap DTI Output Pair 3 Buffer */
DECL|SWAPB|member|uint32_t SWAPB:4; /*!< bit: 24..27 Swap DTI Output Pair x Buffer */
DECL|SWAP|member|uint32_t SWAP:4; /*!< bit: 24..27 Swap DTI Output Pair x */
DECL|SWRST|member|uint32_t SWRST:1; /*!< bit: 0 Software Reset */
DECL|SWRST|member|uint32_t SWRST:1; /*!< bit: 0 Swrst Busy */
DECL|SYNCBUSY|member|__I TCC_SYNCBUSY_Type SYNCBUSY; /**< \brief Offset: 0x08 (R/ 32) Synchronization Busy */
DECL|TCC_CCB_CCB_Msk|macro|TCC_CCB_CCB_Msk
DECL|TCC_CCB_CCB_Pos|macro|TCC_CCB_CCB_Pos
DECL|TCC_CCB_CCB|macro|TCC_CCB_CCB
DECL|TCC_CCB_DITH4_CCB_Msk|macro|TCC_CCB_DITH4_CCB_Msk
DECL|TCC_CCB_DITH4_CCB_Pos|macro|TCC_CCB_DITH4_CCB_Pos
DECL|TCC_CCB_DITH4_CCB|macro|TCC_CCB_DITH4_CCB
DECL|TCC_CCB_DITH4_DITHERCYB_Msk|macro|TCC_CCB_DITH4_DITHERCYB_Msk
DECL|TCC_CCB_DITH4_DITHERCYB_Pos|macro|TCC_CCB_DITH4_DITHERCYB_Pos
DECL|TCC_CCB_DITH4_DITHERCYB|macro|TCC_CCB_DITH4_DITHERCYB
DECL|TCC_CCB_DITH4_MASK|macro|TCC_CCB_DITH4_MASK
DECL|TCC_CCB_DITH5_CCB_Msk|macro|TCC_CCB_DITH5_CCB_Msk
DECL|TCC_CCB_DITH5_CCB_Pos|macro|TCC_CCB_DITH5_CCB_Pos
DECL|TCC_CCB_DITH5_CCB|macro|TCC_CCB_DITH5_CCB
DECL|TCC_CCB_DITH5_DITHERCYB_Msk|macro|TCC_CCB_DITH5_DITHERCYB_Msk
DECL|TCC_CCB_DITH5_DITHERCYB_Pos|macro|TCC_CCB_DITH5_DITHERCYB_Pos
DECL|TCC_CCB_DITH5_DITHERCYB|macro|TCC_CCB_DITH5_DITHERCYB
DECL|TCC_CCB_DITH5_MASK|macro|TCC_CCB_DITH5_MASK
DECL|TCC_CCB_DITH6_CCB_Msk|macro|TCC_CCB_DITH6_CCB_Msk
DECL|TCC_CCB_DITH6_CCB_Pos|macro|TCC_CCB_DITH6_CCB_Pos
DECL|TCC_CCB_DITH6_CCB|macro|TCC_CCB_DITH6_CCB
DECL|TCC_CCB_DITH6_DITHERCYB_Msk|macro|TCC_CCB_DITH6_DITHERCYB_Msk
DECL|TCC_CCB_DITH6_DITHERCYB_Pos|macro|TCC_CCB_DITH6_DITHERCYB_Pos
DECL|TCC_CCB_DITH6_DITHERCYB|macro|TCC_CCB_DITH6_DITHERCYB
DECL|TCC_CCB_DITH6_MASK|macro|TCC_CCB_DITH6_MASK
DECL|TCC_CCB_MASK|macro|TCC_CCB_MASK
DECL|TCC_CCB_OFFSET|macro|TCC_CCB_OFFSET
DECL|TCC_CCB_RESETVALUE|macro|TCC_CCB_RESETVALUE
DECL|TCC_CCB_Type|typedef|} TCC_CCB_Type;
DECL|TCC_CC_CC_Msk|macro|TCC_CC_CC_Msk
DECL|TCC_CC_CC_Pos|macro|TCC_CC_CC_Pos
DECL|TCC_CC_CC|macro|TCC_CC_CC
DECL|TCC_CC_DITH4_CC_Msk|macro|TCC_CC_DITH4_CC_Msk
DECL|TCC_CC_DITH4_CC_Pos|macro|TCC_CC_DITH4_CC_Pos
DECL|TCC_CC_DITH4_CC|macro|TCC_CC_DITH4_CC
DECL|TCC_CC_DITH4_DITHERCY_Msk|macro|TCC_CC_DITH4_DITHERCY_Msk
DECL|TCC_CC_DITH4_DITHERCY_Pos|macro|TCC_CC_DITH4_DITHERCY_Pos
DECL|TCC_CC_DITH4_DITHERCY|macro|TCC_CC_DITH4_DITHERCY
DECL|TCC_CC_DITH4_MASK|macro|TCC_CC_DITH4_MASK
DECL|TCC_CC_DITH5_CC_Msk|macro|TCC_CC_DITH5_CC_Msk
DECL|TCC_CC_DITH5_CC_Pos|macro|TCC_CC_DITH5_CC_Pos
DECL|TCC_CC_DITH5_CC|macro|TCC_CC_DITH5_CC
DECL|TCC_CC_DITH5_DITHERCY_Msk|macro|TCC_CC_DITH5_DITHERCY_Msk
DECL|TCC_CC_DITH5_DITHERCY_Pos|macro|TCC_CC_DITH5_DITHERCY_Pos
DECL|TCC_CC_DITH5_DITHERCY|macro|TCC_CC_DITH5_DITHERCY
DECL|TCC_CC_DITH5_MASK|macro|TCC_CC_DITH5_MASK
DECL|TCC_CC_DITH6_CC_Msk|macro|TCC_CC_DITH6_CC_Msk
DECL|TCC_CC_DITH6_CC_Pos|macro|TCC_CC_DITH6_CC_Pos
DECL|TCC_CC_DITH6_CC|macro|TCC_CC_DITH6_CC
DECL|TCC_CC_DITH6_DITHERCY_Msk|macro|TCC_CC_DITH6_DITHERCY_Msk
DECL|TCC_CC_DITH6_DITHERCY_Pos|macro|TCC_CC_DITH6_DITHERCY_Pos
DECL|TCC_CC_DITH6_DITHERCY|macro|TCC_CC_DITH6_DITHERCY
DECL|TCC_CC_DITH6_MASK|macro|TCC_CC_DITH6_MASK
DECL|TCC_CC_MASK|macro|TCC_CC_MASK
DECL|TCC_CC_OFFSET|macro|TCC_CC_OFFSET
DECL|TCC_CC_RESETVALUE|macro|TCC_CC_RESETVALUE
DECL|TCC_CC_Type|typedef|} TCC_CC_Type;
DECL|TCC_COUNT_COUNT_Msk|macro|TCC_COUNT_COUNT_Msk
DECL|TCC_COUNT_COUNT_Pos|macro|TCC_COUNT_COUNT_Pos
DECL|TCC_COUNT_COUNT|macro|TCC_COUNT_COUNT
DECL|TCC_COUNT_DITH4_COUNT_Msk|macro|TCC_COUNT_DITH4_COUNT_Msk
DECL|TCC_COUNT_DITH4_COUNT_Pos|macro|TCC_COUNT_DITH4_COUNT_Pos
DECL|TCC_COUNT_DITH4_COUNT|macro|TCC_COUNT_DITH4_COUNT
DECL|TCC_COUNT_DITH4_MASK|macro|TCC_COUNT_DITH4_MASK
DECL|TCC_COUNT_DITH5_COUNT_Msk|macro|TCC_COUNT_DITH5_COUNT_Msk
DECL|TCC_COUNT_DITH5_COUNT_Pos|macro|TCC_COUNT_DITH5_COUNT_Pos
DECL|TCC_COUNT_DITH5_COUNT|macro|TCC_COUNT_DITH5_COUNT
DECL|TCC_COUNT_DITH5_MASK|macro|TCC_COUNT_DITH5_MASK
DECL|TCC_COUNT_DITH6_COUNT_Msk|macro|TCC_COUNT_DITH6_COUNT_Msk
DECL|TCC_COUNT_DITH6_COUNT_Pos|macro|TCC_COUNT_DITH6_COUNT_Pos
DECL|TCC_COUNT_DITH6_COUNT|macro|TCC_COUNT_DITH6_COUNT
DECL|TCC_COUNT_DITH6_MASK|macro|TCC_COUNT_DITH6_MASK
DECL|TCC_COUNT_MASK|macro|TCC_COUNT_MASK
DECL|TCC_COUNT_OFFSET|macro|TCC_COUNT_OFFSET
DECL|TCC_COUNT_RESETVALUE|macro|TCC_COUNT_RESETVALUE
DECL|TCC_COUNT_Type|typedef|} TCC_COUNT_Type;
DECL|TCC_CTRLA_ALOCK_Pos|macro|TCC_CTRLA_ALOCK_Pos
DECL|TCC_CTRLA_ALOCK|macro|TCC_CTRLA_ALOCK
DECL|TCC_CTRLA_CPTEN0_Pos|macro|TCC_CTRLA_CPTEN0_Pos
DECL|TCC_CTRLA_CPTEN0|macro|TCC_CTRLA_CPTEN0
DECL|TCC_CTRLA_CPTEN1_Pos|macro|TCC_CTRLA_CPTEN1_Pos
DECL|TCC_CTRLA_CPTEN1|macro|TCC_CTRLA_CPTEN1
DECL|TCC_CTRLA_CPTEN2_Pos|macro|TCC_CTRLA_CPTEN2_Pos
DECL|TCC_CTRLA_CPTEN2|macro|TCC_CTRLA_CPTEN2
DECL|TCC_CTRLA_CPTEN3_Pos|macro|TCC_CTRLA_CPTEN3_Pos
DECL|TCC_CTRLA_CPTEN3|macro|TCC_CTRLA_CPTEN3
DECL|TCC_CTRLA_CPTEN_Msk|macro|TCC_CTRLA_CPTEN_Msk
DECL|TCC_CTRLA_CPTEN_Pos|macro|TCC_CTRLA_CPTEN_Pos
DECL|TCC_CTRLA_CPTEN|macro|TCC_CTRLA_CPTEN
DECL|TCC_CTRLA_ENABLE_Pos|macro|TCC_CTRLA_ENABLE_Pos
DECL|TCC_CTRLA_ENABLE|macro|TCC_CTRLA_ENABLE
DECL|TCC_CTRLA_MASK|macro|TCC_CTRLA_MASK
DECL|TCC_CTRLA_OFFSET|macro|TCC_CTRLA_OFFSET
DECL|TCC_CTRLA_PRESCALER_DIV1024_Val|macro|TCC_CTRLA_PRESCALER_DIV1024_Val
DECL|TCC_CTRLA_PRESCALER_DIV1024|macro|TCC_CTRLA_PRESCALER_DIV1024
DECL|TCC_CTRLA_PRESCALER_DIV16_Val|macro|TCC_CTRLA_PRESCALER_DIV16_Val
DECL|TCC_CTRLA_PRESCALER_DIV16|macro|TCC_CTRLA_PRESCALER_DIV16
DECL|TCC_CTRLA_PRESCALER_DIV1_Val|macro|TCC_CTRLA_PRESCALER_DIV1_Val
DECL|TCC_CTRLA_PRESCALER_DIV1|macro|TCC_CTRLA_PRESCALER_DIV1
DECL|TCC_CTRLA_PRESCALER_DIV256_Val|macro|TCC_CTRLA_PRESCALER_DIV256_Val
DECL|TCC_CTRLA_PRESCALER_DIV256|macro|TCC_CTRLA_PRESCALER_DIV256
DECL|TCC_CTRLA_PRESCALER_DIV2_Val|macro|TCC_CTRLA_PRESCALER_DIV2_Val
DECL|TCC_CTRLA_PRESCALER_DIV2|macro|TCC_CTRLA_PRESCALER_DIV2
DECL|TCC_CTRLA_PRESCALER_DIV4_Val|macro|TCC_CTRLA_PRESCALER_DIV4_Val
DECL|TCC_CTRLA_PRESCALER_DIV4|macro|TCC_CTRLA_PRESCALER_DIV4
DECL|TCC_CTRLA_PRESCALER_DIV64_Val|macro|TCC_CTRLA_PRESCALER_DIV64_Val
DECL|TCC_CTRLA_PRESCALER_DIV64|macro|TCC_CTRLA_PRESCALER_DIV64
DECL|TCC_CTRLA_PRESCALER_DIV8_Val|macro|TCC_CTRLA_PRESCALER_DIV8_Val
DECL|TCC_CTRLA_PRESCALER_DIV8|macro|TCC_CTRLA_PRESCALER_DIV8
DECL|TCC_CTRLA_PRESCALER_Msk|macro|TCC_CTRLA_PRESCALER_Msk
DECL|TCC_CTRLA_PRESCALER_Pos|macro|TCC_CTRLA_PRESCALER_Pos
DECL|TCC_CTRLA_PRESCALER|macro|TCC_CTRLA_PRESCALER
DECL|TCC_CTRLA_PRESCSYNC_GCLK_Val|macro|TCC_CTRLA_PRESCSYNC_GCLK_Val
DECL|TCC_CTRLA_PRESCSYNC_GCLK|macro|TCC_CTRLA_PRESCSYNC_GCLK
DECL|TCC_CTRLA_PRESCSYNC_Msk|macro|TCC_CTRLA_PRESCSYNC_Msk
DECL|TCC_CTRLA_PRESCSYNC_PRESC_Val|macro|TCC_CTRLA_PRESCSYNC_PRESC_Val
DECL|TCC_CTRLA_PRESCSYNC_PRESC|macro|TCC_CTRLA_PRESCSYNC_PRESC
DECL|TCC_CTRLA_PRESCSYNC_Pos|macro|TCC_CTRLA_PRESCSYNC_Pos
DECL|TCC_CTRLA_PRESCSYNC_RESYNC_Val|macro|TCC_CTRLA_PRESCSYNC_RESYNC_Val
DECL|TCC_CTRLA_PRESCSYNC_RESYNC|macro|TCC_CTRLA_PRESCSYNC_RESYNC
DECL|TCC_CTRLA_PRESCSYNC|macro|TCC_CTRLA_PRESCSYNC
DECL|TCC_CTRLA_RESETVALUE|macro|TCC_CTRLA_RESETVALUE
DECL|TCC_CTRLA_RESOLUTION_DITH4_Val|macro|TCC_CTRLA_RESOLUTION_DITH4_Val
DECL|TCC_CTRLA_RESOLUTION_DITH4|macro|TCC_CTRLA_RESOLUTION_DITH4
DECL|TCC_CTRLA_RESOLUTION_DITH5_Val|macro|TCC_CTRLA_RESOLUTION_DITH5_Val
DECL|TCC_CTRLA_RESOLUTION_DITH5|macro|TCC_CTRLA_RESOLUTION_DITH5
DECL|TCC_CTRLA_RESOLUTION_DITH6_Val|macro|TCC_CTRLA_RESOLUTION_DITH6_Val
DECL|TCC_CTRLA_RESOLUTION_DITH6|macro|TCC_CTRLA_RESOLUTION_DITH6
DECL|TCC_CTRLA_RESOLUTION_Msk|macro|TCC_CTRLA_RESOLUTION_Msk
DECL|TCC_CTRLA_RESOLUTION_NONE_Val|macro|TCC_CTRLA_RESOLUTION_NONE_Val
DECL|TCC_CTRLA_RESOLUTION_NONE|macro|TCC_CTRLA_RESOLUTION_NONE
DECL|TCC_CTRLA_RESOLUTION_Pos|macro|TCC_CTRLA_RESOLUTION_Pos
DECL|TCC_CTRLA_RESOLUTION|macro|TCC_CTRLA_RESOLUTION
DECL|TCC_CTRLA_RUNSTDBY_Pos|macro|TCC_CTRLA_RUNSTDBY_Pos
DECL|TCC_CTRLA_RUNSTDBY|macro|TCC_CTRLA_RUNSTDBY
DECL|TCC_CTRLA_SWRST_Pos|macro|TCC_CTRLA_SWRST_Pos
DECL|TCC_CTRLA_SWRST|macro|TCC_CTRLA_SWRST
DECL|TCC_CTRLA_Type|typedef|} TCC_CTRLA_Type;
DECL|TCC_CTRLBCLR_CMD_Msk|macro|TCC_CTRLBCLR_CMD_Msk
DECL|TCC_CTRLBCLR_CMD_NONE_Val|macro|TCC_CTRLBCLR_CMD_NONE_Val
DECL|TCC_CTRLBCLR_CMD_NONE|macro|TCC_CTRLBCLR_CMD_NONE
DECL|TCC_CTRLBCLR_CMD_Pos|macro|TCC_CTRLBCLR_CMD_Pos
DECL|TCC_CTRLBCLR_CMD_READSYNC_Val|macro|TCC_CTRLBCLR_CMD_READSYNC_Val
DECL|TCC_CTRLBCLR_CMD_READSYNC|macro|TCC_CTRLBCLR_CMD_READSYNC
DECL|TCC_CTRLBCLR_CMD_RETRIGGER_Val|macro|TCC_CTRLBCLR_CMD_RETRIGGER_Val
DECL|TCC_CTRLBCLR_CMD_RETRIGGER|macro|TCC_CTRLBCLR_CMD_RETRIGGER
DECL|TCC_CTRLBCLR_CMD_STOP_Val|macro|TCC_CTRLBCLR_CMD_STOP_Val
DECL|TCC_CTRLBCLR_CMD_STOP|macro|TCC_CTRLBCLR_CMD_STOP
DECL|TCC_CTRLBCLR_CMD_UPDATE_Val|macro|TCC_CTRLBCLR_CMD_UPDATE_Val
DECL|TCC_CTRLBCLR_CMD_UPDATE|macro|TCC_CTRLBCLR_CMD_UPDATE
DECL|TCC_CTRLBCLR_CMD|macro|TCC_CTRLBCLR_CMD
DECL|TCC_CTRLBCLR_DIR_Pos|macro|TCC_CTRLBCLR_DIR_Pos
DECL|TCC_CTRLBCLR_DIR|macro|TCC_CTRLBCLR_DIR
DECL|TCC_CTRLBCLR_IDXCMD_CLEAR_Val|macro|TCC_CTRLBCLR_IDXCMD_CLEAR_Val
DECL|TCC_CTRLBCLR_IDXCMD_CLEAR|macro|TCC_CTRLBCLR_IDXCMD_CLEAR
DECL|TCC_CTRLBCLR_IDXCMD_DISABLE_Val|macro|TCC_CTRLBCLR_IDXCMD_DISABLE_Val
DECL|TCC_CTRLBCLR_IDXCMD_DISABLE|macro|TCC_CTRLBCLR_IDXCMD_DISABLE
DECL|TCC_CTRLBCLR_IDXCMD_HOLD_Val|macro|TCC_CTRLBCLR_IDXCMD_HOLD_Val
DECL|TCC_CTRLBCLR_IDXCMD_HOLD|macro|TCC_CTRLBCLR_IDXCMD_HOLD
DECL|TCC_CTRLBCLR_IDXCMD_Msk|macro|TCC_CTRLBCLR_IDXCMD_Msk
DECL|TCC_CTRLBCLR_IDXCMD_Pos|macro|TCC_CTRLBCLR_IDXCMD_Pos
DECL|TCC_CTRLBCLR_IDXCMD_SET_Val|macro|TCC_CTRLBCLR_IDXCMD_SET_Val
DECL|TCC_CTRLBCLR_IDXCMD_SET|macro|TCC_CTRLBCLR_IDXCMD_SET
DECL|TCC_CTRLBCLR_IDXCMD|macro|TCC_CTRLBCLR_IDXCMD
DECL|TCC_CTRLBCLR_LUPD_Pos|macro|TCC_CTRLBCLR_LUPD_Pos
DECL|TCC_CTRLBCLR_LUPD|macro|TCC_CTRLBCLR_LUPD
DECL|TCC_CTRLBCLR_MASK|macro|TCC_CTRLBCLR_MASK
DECL|TCC_CTRLBCLR_OFFSET|macro|TCC_CTRLBCLR_OFFSET
DECL|TCC_CTRLBCLR_ONESHOT_Pos|macro|TCC_CTRLBCLR_ONESHOT_Pos
DECL|TCC_CTRLBCLR_ONESHOT|macro|TCC_CTRLBCLR_ONESHOT
DECL|TCC_CTRLBCLR_RESETVALUE|macro|TCC_CTRLBCLR_RESETVALUE
DECL|TCC_CTRLBCLR_Type|typedef|} TCC_CTRLBCLR_Type;
DECL|TCC_CTRLBSET_CMD_Msk|macro|TCC_CTRLBSET_CMD_Msk
DECL|TCC_CTRLBSET_CMD_NONE_Val|macro|TCC_CTRLBSET_CMD_NONE_Val
DECL|TCC_CTRLBSET_CMD_NONE|macro|TCC_CTRLBSET_CMD_NONE
DECL|TCC_CTRLBSET_CMD_Pos|macro|TCC_CTRLBSET_CMD_Pos
DECL|TCC_CTRLBSET_CMD_READSYNC_Val|macro|TCC_CTRLBSET_CMD_READSYNC_Val
DECL|TCC_CTRLBSET_CMD_READSYNC|macro|TCC_CTRLBSET_CMD_READSYNC
DECL|TCC_CTRLBSET_CMD_RETRIGGER_Val|macro|TCC_CTRLBSET_CMD_RETRIGGER_Val
DECL|TCC_CTRLBSET_CMD_RETRIGGER|macro|TCC_CTRLBSET_CMD_RETRIGGER
DECL|TCC_CTRLBSET_CMD_STOP_Val|macro|TCC_CTRLBSET_CMD_STOP_Val
DECL|TCC_CTRLBSET_CMD_STOP|macro|TCC_CTRLBSET_CMD_STOP
DECL|TCC_CTRLBSET_CMD_UPDATE_Val|macro|TCC_CTRLBSET_CMD_UPDATE_Val
DECL|TCC_CTRLBSET_CMD_UPDATE|macro|TCC_CTRLBSET_CMD_UPDATE
DECL|TCC_CTRLBSET_CMD|macro|TCC_CTRLBSET_CMD
DECL|TCC_CTRLBSET_DIR_Pos|macro|TCC_CTRLBSET_DIR_Pos
DECL|TCC_CTRLBSET_DIR|macro|TCC_CTRLBSET_DIR
DECL|TCC_CTRLBSET_IDXCMD_CLEAR_Val|macro|TCC_CTRLBSET_IDXCMD_CLEAR_Val
DECL|TCC_CTRLBSET_IDXCMD_CLEAR|macro|TCC_CTRLBSET_IDXCMD_CLEAR
DECL|TCC_CTRLBSET_IDXCMD_DISABLE_Val|macro|TCC_CTRLBSET_IDXCMD_DISABLE_Val
DECL|TCC_CTRLBSET_IDXCMD_DISABLE|macro|TCC_CTRLBSET_IDXCMD_DISABLE
DECL|TCC_CTRLBSET_IDXCMD_HOLD_Val|macro|TCC_CTRLBSET_IDXCMD_HOLD_Val
DECL|TCC_CTRLBSET_IDXCMD_HOLD|macro|TCC_CTRLBSET_IDXCMD_HOLD
DECL|TCC_CTRLBSET_IDXCMD_Msk|macro|TCC_CTRLBSET_IDXCMD_Msk
DECL|TCC_CTRLBSET_IDXCMD_Pos|macro|TCC_CTRLBSET_IDXCMD_Pos
DECL|TCC_CTRLBSET_IDXCMD_SET_Val|macro|TCC_CTRLBSET_IDXCMD_SET_Val
DECL|TCC_CTRLBSET_IDXCMD_SET|macro|TCC_CTRLBSET_IDXCMD_SET
DECL|TCC_CTRLBSET_IDXCMD|macro|TCC_CTRLBSET_IDXCMD
DECL|TCC_CTRLBSET_LUPD_Pos|macro|TCC_CTRLBSET_LUPD_Pos
DECL|TCC_CTRLBSET_LUPD|macro|TCC_CTRLBSET_LUPD
DECL|TCC_CTRLBSET_MASK|macro|TCC_CTRLBSET_MASK
DECL|TCC_CTRLBSET_OFFSET|macro|TCC_CTRLBSET_OFFSET
DECL|TCC_CTRLBSET_ONESHOT_Pos|macro|TCC_CTRLBSET_ONESHOT_Pos
DECL|TCC_CTRLBSET_ONESHOT|macro|TCC_CTRLBSET_ONESHOT
DECL|TCC_CTRLBSET_RESETVALUE|macro|TCC_CTRLBSET_RESETVALUE
DECL|TCC_CTRLBSET_Type|typedef|} TCC_CTRLBSET_Type;
DECL|TCC_DBGCTRL_DBGRUN_Pos|macro|TCC_DBGCTRL_DBGRUN_Pos
DECL|TCC_DBGCTRL_DBGRUN|macro|TCC_DBGCTRL_DBGRUN
DECL|TCC_DBGCTRL_FDDBD_Pos|macro|TCC_DBGCTRL_FDDBD_Pos
DECL|TCC_DBGCTRL_FDDBD|macro|TCC_DBGCTRL_FDDBD
DECL|TCC_DBGCTRL_MASK|macro|TCC_DBGCTRL_MASK
DECL|TCC_DBGCTRL_OFFSET|macro|TCC_DBGCTRL_OFFSET
DECL|TCC_DBGCTRL_RESETVALUE|macro|TCC_DBGCTRL_RESETVALUE
DECL|TCC_DBGCTRL_Type|typedef|} TCC_DBGCTRL_Type;
DECL|TCC_DRVCTRL_FILTERVAL0_Msk|macro|TCC_DRVCTRL_FILTERVAL0_Msk
DECL|TCC_DRVCTRL_FILTERVAL0_Pos|macro|TCC_DRVCTRL_FILTERVAL0_Pos
DECL|TCC_DRVCTRL_FILTERVAL0|macro|TCC_DRVCTRL_FILTERVAL0
DECL|TCC_DRVCTRL_FILTERVAL1_Msk|macro|TCC_DRVCTRL_FILTERVAL1_Msk
DECL|TCC_DRVCTRL_FILTERVAL1_Pos|macro|TCC_DRVCTRL_FILTERVAL1_Pos
DECL|TCC_DRVCTRL_FILTERVAL1|macro|TCC_DRVCTRL_FILTERVAL1
DECL|TCC_DRVCTRL_INVEN0_Pos|macro|TCC_DRVCTRL_INVEN0_Pos
DECL|TCC_DRVCTRL_INVEN0|macro|TCC_DRVCTRL_INVEN0
DECL|TCC_DRVCTRL_INVEN1_Pos|macro|TCC_DRVCTRL_INVEN1_Pos
DECL|TCC_DRVCTRL_INVEN1|macro|TCC_DRVCTRL_INVEN1
DECL|TCC_DRVCTRL_INVEN2_Pos|macro|TCC_DRVCTRL_INVEN2_Pos
DECL|TCC_DRVCTRL_INVEN2|macro|TCC_DRVCTRL_INVEN2
DECL|TCC_DRVCTRL_INVEN3_Pos|macro|TCC_DRVCTRL_INVEN3_Pos
DECL|TCC_DRVCTRL_INVEN3|macro|TCC_DRVCTRL_INVEN3
DECL|TCC_DRVCTRL_INVEN4_Pos|macro|TCC_DRVCTRL_INVEN4_Pos
DECL|TCC_DRVCTRL_INVEN4|macro|TCC_DRVCTRL_INVEN4
DECL|TCC_DRVCTRL_INVEN5_Pos|macro|TCC_DRVCTRL_INVEN5_Pos
DECL|TCC_DRVCTRL_INVEN5|macro|TCC_DRVCTRL_INVEN5
DECL|TCC_DRVCTRL_INVEN6_Pos|macro|TCC_DRVCTRL_INVEN6_Pos
DECL|TCC_DRVCTRL_INVEN6|macro|TCC_DRVCTRL_INVEN6
DECL|TCC_DRVCTRL_INVEN7_Pos|macro|TCC_DRVCTRL_INVEN7_Pos
DECL|TCC_DRVCTRL_INVEN7|macro|TCC_DRVCTRL_INVEN7
DECL|TCC_DRVCTRL_INVEN_Msk|macro|TCC_DRVCTRL_INVEN_Msk
DECL|TCC_DRVCTRL_INVEN_Pos|macro|TCC_DRVCTRL_INVEN_Pos
DECL|TCC_DRVCTRL_INVEN|macro|TCC_DRVCTRL_INVEN
DECL|TCC_DRVCTRL_MASK|macro|TCC_DRVCTRL_MASK
DECL|TCC_DRVCTRL_NRE0_Pos|macro|TCC_DRVCTRL_NRE0_Pos
DECL|TCC_DRVCTRL_NRE0|macro|TCC_DRVCTRL_NRE0
DECL|TCC_DRVCTRL_NRE1_Pos|macro|TCC_DRVCTRL_NRE1_Pos
DECL|TCC_DRVCTRL_NRE1|macro|TCC_DRVCTRL_NRE1
DECL|TCC_DRVCTRL_NRE2_Pos|macro|TCC_DRVCTRL_NRE2_Pos
DECL|TCC_DRVCTRL_NRE2|macro|TCC_DRVCTRL_NRE2
DECL|TCC_DRVCTRL_NRE3_Pos|macro|TCC_DRVCTRL_NRE3_Pos
DECL|TCC_DRVCTRL_NRE3|macro|TCC_DRVCTRL_NRE3
DECL|TCC_DRVCTRL_NRE4_Pos|macro|TCC_DRVCTRL_NRE4_Pos
DECL|TCC_DRVCTRL_NRE4|macro|TCC_DRVCTRL_NRE4
DECL|TCC_DRVCTRL_NRE5_Pos|macro|TCC_DRVCTRL_NRE5_Pos
DECL|TCC_DRVCTRL_NRE5|macro|TCC_DRVCTRL_NRE5
DECL|TCC_DRVCTRL_NRE6_Pos|macro|TCC_DRVCTRL_NRE6_Pos
DECL|TCC_DRVCTRL_NRE6|macro|TCC_DRVCTRL_NRE6
DECL|TCC_DRVCTRL_NRE7_Pos|macro|TCC_DRVCTRL_NRE7_Pos
DECL|TCC_DRVCTRL_NRE7|macro|TCC_DRVCTRL_NRE7
DECL|TCC_DRVCTRL_NRE_Msk|macro|TCC_DRVCTRL_NRE_Msk
DECL|TCC_DRVCTRL_NRE_Pos|macro|TCC_DRVCTRL_NRE_Pos
DECL|TCC_DRVCTRL_NRE|macro|TCC_DRVCTRL_NRE
DECL|TCC_DRVCTRL_NRV0_Pos|macro|TCC_DRVCTRL_NRV0_Pos
DECL|TCC_DRVCTRL_NRV0|macro|TCC_DRVCTRL_NRV0
DECL|TCC_DRVCTRL_NRV1_Pos|macro|TCC_DRVCTRL_NRV1_Pos
DECL|TCC_DRVCTRL_NRV1|macro|TCC_DRVCTRL_NRV1
DECL|TCC_DRVCTRL_NRV2_Pos|macro|TCC_DRVCTRL_NRV2_Pos
DECL|TCC_DRVCTRL_NRV2|macro|TCC_DRVCTRL_NRV2
DECL|TCC_DRVCTRL_NRV3_Pos|macro|TCC_DRVCTRL_NRV3_Pos
DECL|TCC_DRVCTRL_NRV3|macro|TCC_DRVCTRL_NRV3
DECL|TCC_DRVCTRL_NRV4_Pos|macro|TCC_DRVCTRL_NRV4_Pos
DECL|TCC_DRVCTRL_NRV4|macro|TCC_DRVCTRL_NRV4
DECL|TCC_DRVCTRL_NRV5_Pos|macro|TCC_DRVCTRL_NRV5_Pos
DECL|TCC_DRVCTRL_NRV5|macro|TCC_DRVCTRL_NRV5
DECL|TCC_DRVCTRL_NRV6_Pos|macro|TCC_DRVCTRL_NRV6_Pos
DECL|TCC_DRVCTRL_NRV6|macro|TCC_DRVCTRL_NRV6
DECL|TCC_DRVCTRL_NRV7_Pos|macro|TCC_DRVCTRL_NRV7_Pos
DECL|TCC_DRVCTRL_NRV7|macro|TCC_DRVCTRL_NRV7
DECL|TCC_DRVCTRL_NRV_Msk|macro|TCC_DRVCTRL_NRV_Msk
DECL|TCC_DRVCTRL_NRV_Pos|macro|TCC_DRVCTRL_NRV_Pos
DECL|TCC_DRVCTRL_NRV|macro|TCC_DRVCTRL_NRV
DECL|TCC_DRVCTRL_OFFSET|macro|TCC_DRVCTRL_OFFSET
DECL|TCC_DRVCTRL_RESETVALUE|macro|TCC_DRVCTRL_RESETVALUE
DECL|TCC_DRVCTRL_Type|typedef|} TCC_DRVCTRL_Type;
DECL|TCC_EVCTRL_CNTEO_Pos|macro|TCC_EVCTRL_CNTEO_Pos
DECL|TCC_EVCTRL_CNTEO|macro|TCC_EVCTRL_CNTEO
DECL|TCC_EVCTRL_CNTSEL_BETWEEN_Val|macro|TCC_EVCTRL_CNTSEL_BETWEEN_Val
DECL|TCC_EVCTRL_CNTSEL_BETWEEN|macro|TCC_EVCTRL_CNTSEL_BETWEEN
DECL|TCC_EVCTRL_CNTSEL_BOUNDARY_Val|macro|TCC_EVCTRL_CNTSEL_BOUNDARY_Val
DECL|TCC_EVCTRL_CNTSEL_BOUNDARY|macro|TCC_EVCTRL_CNTSEL_BOUNDARY
DECL|TCC_EVCTRL_CNTSEL_END_Val|macro|TCC_EVCTRL_CNTSEL_END_Val
DECL|TCC_EVCTRL_CNTSEL_END|macro|TCC_EVCTRL_CNTSEL_END
DECL|TCC_EVCTRL_CNTSEL_Msk|macro|TCC_EVCTRL_CNTSEL_Msk
DECL|TCC_EVCTRL_CNTSEL_Pos|macro|TCC_EVCTRL_CNTSEL_Pos
DECL|TCC_EVCTRL_CNTSEL_START_Val|macro|TCC_EVCTRL_CNTSEL_START_Val
DECL|TCC_EVCTRL_CNTSEL_START|macro|TCC_EVCTRL_CNTSEL_START
DECL|TCC_EVCTRL_CNTSEL|macro|TCC_EVCTRL_CNTSEL
DECL|TCC_EVCTRL_EVACT0_COUNTEV_Val|macro|TCC_EVCTRL_EVACT0_COUNTEV_Val
DECL|TCC_EVCTRL_EVACT0_COUNTEV|macro|TCC_EVCTRL_EVACT0_COUNTEV
DECL|TCC_EVCTRL_EVACT0_COUNT_Val|macro|TCC_EVCTRL_EVACT0_COUNT_Val
DECL|TCC_EVCTRL_EVACT0_COUNT|macro|TCC_EVCTRL_EVACT0_COUNT
DECL|TCC_EVCTRL_EVACT0_FAULT_Val|macro|TCC_EVCTRL_EVACT0_FAULT_Val
DECL|TCC_EVCTRL_EVACT0_FAULT|macro|TCC_EVCTRL_EVACT0_FAULT
DECL|TCC_EVCTRL_EVACT0_INC_Val|macro|TCC_EVCTRL_EVACT0_INC_Val
DECL|TCC_EVCTRL_EVACT0_INC|macro|TCC_EVCTRL_EVACT0_INC
DECL|TCC_EVCTRL_EVACT0_Msk|macro|TCC_EVCTRL_EVACT0_Msk
DECL|TCC_EVCTRL_EVACT0_OFF_Val|macro|TCC_EVCTRL_EVACT0_OFF_Val
DECL|TCC_EVCTRL_EVACT0_OFF|macro|TCC_EVCTRL_EVACT0_OFF
DECL|TCC_EVCTRL_EVACT0_Pos|macro|TCC_EVCTRL_EVACT0_Pos
DECL|TCC_EVCTRL_EVACT0_RETRIGGER_Val|macro|TCC_EVCTRL_EVACT0_RETRIGGER_Val
DECL|TCC_EVCTRL_EVACT0_RETRIGGER|macro|TCC_EVCTRL_EVACT0_RETRIGGER
DECL|TCC_EVCTRL_EVACT0_START_Val|macro|TCC_EVCTRL_EVACT0_START_Val
DECL|TCC_EVCTRL_EVACT0_START|macro|TCC_EVCTRL_EVACT0_START
DECL|TCC_EVCTRL_EVACT0|macro|TCC_EVCTRL_EVACT0
DECL|TCC_EVCTRL_EVACT1_DEC_Val|macro|TCC_EVCTRL_EVACT1_DEC_Val
DECL|TCC_EVCTRL_EVACT1_DEC|macro|TCC_EVCTRL_EVACT1_DEC
DECL|TCC_EVCTRL_EVACT1_DIR_Val|macro|TCC_EVCTRL_EVACT1_DIR_Val
DECL|TCC_EVCTRL_EVACT1_DIR|macro|TCC_EVCTRL_EVACT1_DIR
DECL|TCC_EVCTRL_EVACT1_FAULT_Val|macro|TCC_EVCTRL_EVACT1_FAULT_Val
DECL|TCC_EVCTRL_EVACT1_FAULT|macro|TCC_EVCTRL_EVACT1_FAULT
DECL|TCC_EVCTRL_EVACT1_Msk|macro|TCC_EVCTRL_EVACT1_Msk
DECL|TCC_EVCTRL_EVACT1_OFF_Val|macro|TCC_EVCTRL_EVACT1_OFF_Val
DECL|TCC_EVCTRL_EVACT1_OFF|macro|TCC_EVCTRL_EVACT1_OFF
DECL|TCC_EVCTRL_EVACT1_PPW_Val|macro|TCC_EVCTRL_EVACT1_PPW_Val
DECL|TCC_EVCTRL_EVACT1_PPW|macro|TCC_EVCTRL_EVACT1_PPW
DECL|TCC_EVCTRL_EVACT1_PWP_Val|macro|TCC_EVCTRL_EVACT1_PWP_Val
DECL|TCC_EVCTRL_EVACT1_PWP|macro|TCC_EVCTRL_EVACT1_PWP
DECL|TCC_EVCTRL_EVACT1_Pos|macro|TCC_EVCTRL_EVACT1_Pos
DECL|TCC_EVCTRL_EVACT1_RETRIGGER_Val|macro|TCC_EVCTRL_EVACT1_RETRIGGER_Val
DECL|TCC_EVCTRL_EVACT1_RETRIGGER|macro|TCC_EVCTRL_EVACT1_RETRIGGER
DECL|TCC_EVCTRL_EVACT1_STOP_Val|macro|TCC_EVCTRL_EVACT1_STOP_Val
DECL|TCC_EVCTRL_EVACT1_STOP|macro|TCC_EVCTRL_EVACT1_STOP
DECL|TCC_EVCTRL_EVACT1|macro|TCC_EVCTRL_EVACT1
DECL|TCC_EVCTRL_MASK|macro|TCC_EVCTRL_MASK
DECL|TCC_EVCTRL_MCEI0_Pos|macro|TCC_EVCTRL_MCEI0_Pos
DECL|TCC_EVCTRL_MCEI0|macro|TCC_EVCTRL_MCEI0
DECL|TCC_EVCTRL_MCEI1_Pos|macro|TCC_EVCTRL_MCEI1_Pos
DECL|TCC_EVCTRL_MCEI1|macro|TCC_EVCTRL_MCEI1
DECL|TCC_EVCTRL_MCEI2_Pos|macro|TCC_EVCTRL_MCEI2_Pos
DECL|TCC_EVCTRL_MCEI2|macro|TCC_EVCTRL_MCEI2
DECL|TCC_EVCTRL_MCEI3_Pos|macro|TCC_EVCTRL_MCEI3_Pos
DECL|TCC_EVCTRL_MCEI3|macro|TCC_EVCTRL_MCEI3
DECL|TCC_EVCTRL_MCEI_Msk|macro|TCC_EVCTRL_MCEI_Msk
DECL|TCC_EVCTRL_MCEI_Pos|macro|TCC_EVCTRL_MCEI_Pos
DECL|TCC_EVCTRL_MCEI|macro|TCC_EVCTRL_MCEI
DECL|TCC_EVCTRL_MCEO0_Pos|macro|TCC_EVCTRL_MCEO0_Pos
DECL|TCC_EVCTRL_MCEO0|macro|TCC_EVCTRL_MCEO0
DECL|TCC_EVCTRL_MCEO1_Pos|macro|TCC_EVCTRL_MCEO1_Pos
DECL|TCC_EVCTRL_MCEO1|macro|TCC_EVCTRL_MCEO1
DECL|TCC_EVCTRL_MCEO2_Pos|macro|TCC_EVCTRL_MCEO2_Pos
DECL|TCC_EVCTRL_MCEO2|macro|TCC_EVCTRL_MCEO2
DECL|TCC_EVCTRL_MCEO3_Pos|macro|TCC_EVCTRL_MCEO3_Pos
DECL|TCC_EVCTRL_MCEO3|macro|TCC_EVCTRL_MCEO3
DECL|TCC_EVCTRL_MCEO_Msk|macro|TCC_EVCTRL_MCEO_Msk
DECL|TCC_EVCTRL_MCEO_Pos|macro|TCC_EVCTRL_MCEO_Pos
DECL|TCC_EVCTRL_MCEO|macro|TCC_EVCTRL_MCEO
DECL|TCC_EVCTRL_OFFSET|macro|TCC_EVCTRL_OFFSET
DECL|TCC_EVCTRL_OVFEO_Pos|macro|TCC_EVCTRL_OVFEO_Pos
DECL|TCC_EVCTRL_OVFEO|macro|TCC_EVCTRL_OVFEO
DECL|TCC_EVCTRL_RESETVALUE|macro|TCC_EVCTRL_RESETVALUE
DECL|TCC_EVCTRL_TCEI0_Pos|macro|TCC_EVCTRL_TCEI0_Pos
DECL|TCC_EVCTRL_TCEI0|macro|TCC_EVCTRL_TCEI0
DECL|TCC_EVCTRL_TCEI1_Pos|macro|TCC_EVCTRL_TCEI1_Pos
DECL|TCC_EVCTRL_TCEI1|macro|TCC_EVCTRL_TCEI1
DECL|TCC_EVCTRL_TCEI_Msk|macro|TCC_EVCTRL_TCEI_Msk
DECL|TCC_EVCTRL_TCEI_Pos|macro|TCC_EVCTRL_TCEI_Pos
DECL|TCC_EVCTRL_TCEI|macro|TCC_EVCTRL_TCEI
DECL|TCC_EVCTRL_TCINV0_Pos|macro|TCC_EVCTRL_TCINV0_Pos
DECL|TCC_EVCTRL_TCINV0|macro|TCC_EVCTRL_TCINV0
DECL|TCC_EVCTRL_TCINV1_Pos|macro|TCC_EVCTRL_TCINV1_Pos
DECL|TCC_EVCTRL_TCINV1|macro|TCC_EVCTRL_TCINV1
DECL|TCC_EVCTRL_TCINV_Msk|macro|TCC_EVCTRL_TCINV_Msk
DECL|TCC_EVCTRL_TCINV_Pos|macro|TCC_EVCTRL_TCINV_Pos
DECL|TCC_EVCTRL_TCINV|macro|TCC_EVCTRL_TCINV
DECL|TCC_EVCTRL_TRGEO_Pos|macro|TCC_EVCTRL_TRGEO_Pos
DECL|TCC_EVCTRL_TRGEO|macro|TCC_EVCTRL_TRGEO
DECL|TCC_EVCTRL_Type|typedef|} TCC_EVCTRL_Type;
DECL|TCC_FCTRLA_BLANKVAL_Msk|macro|TCC_FCTRLA_BLANKVAL_Msk
DECL|TCC_FCTRLA_BLANKVAL_Pos|macro|TCC_FCTRLA_BLANKVAL_Pos
DECL|TCC_FCTRLA_BLANKVAL|macro|TCC_FCTRLA_BLANKVAL
DECL|TCC_FCTRLA_BLANK_BOTH_Val|macro|TCC_FCTRLA_BLANK_BOTH_Val
DECL|TCC_FCTRLA_BLANK_BOTH|macro|TCC_FCTRLA_BLANK_BOTH
DECL|TCC_FCTRLA_BLANK_FALL_Val|macro|TCC_FCTRLA_BLANK_FALL_Val
DECL|TCC_FCTRLA_BLANK_FALL|macro|TCC_FCTRLA_BLANK_FALL
DECL|TCC_FCTRLA_BLANK_Msk|macro|TCC_FCTRLA_BLANK_Msk
DECL|TCC_FCTRLA_BLANK_NONE_Val|macro|TCC_FCTRLA_BLANK_NONE_Val
DECL|TCC_FCTRLA_BLANK_NONE|macro|TCC_FCTRLA_BLANK_NONE
DECL|TCC_FCTRLA_BLANK_Pos|macro|TCC_FCTRLA_BLANK_Pos
DECL|TCC_FCTRLA_BLANK_RISE_Val|macro|TCC_FCTRLA_BLANK_RISE_Val
DECL|TCC_FCTRLA_BLANK_RISE|macro|TCC_FCTRLA_BLANK_RISE
DECL|TCC_FCTRLA_BLANK|macro|TCC_FCTRLA_BLANK
DECL|TCC_FCTRLA_CAPTURE_CAPTMAX_Val|macro|TCC_FCTRLA_CAPTURE_CAPTMAX_Val
DECL|TCC_FCTRLA_CAPTURE_CAPTMAX|macro|TCC_FCTRLA_CAPTURE_CAPTMAX
DECL|TCC_FCTRLA_CAPTURE_CAPTMIN_Val|macro|TCC_FCTRLA_CAPTURE_CAPTMIN_Val
DECL|TCC_FCTRLA_CAPTURE_CAPTMIN|macro|TCC_FCTRLA_CAPTURE_CAPTMIN
DECL|TCC_FCTRLA_CAPTURE_CAPT_Val|macro|TCC_FCTRLA_CAPTURE_CAPT_Val
DECL|TCC_FCTRLA_CAPTURE_CAPT|macro|TCC_FCTRLA_CAPTURE_CAPT
DECL|TCC_FCTRLA_CAPTURE_DERIV0_Val|macro|TCC_FCTRLA_CAPTURE_DERIV0_Val
DECL|TCC_FCTRLA_CAPTURE_DERIV0|macro|TCC_FCTRLA_CAPTURE_DERIV0
DECL|TCC_FCTRLA_CAPTURE_DISABLE_Val|macro|TCC_FCTRLA_CAPTURE_DISABLE_Val
DECL|TCC_FCTRLA_CAPTURE_DISABLE|macro|TCC_FCTRLA_CAPTURE_DISABLE
DECL|TCC_FCTRLA_CAPTURE_LOCMAX_Val|macro|TCC_FCTRLA_CAPTURE_LOCMAX_Val
DECL|TCC_FCTRLA_CAPTURE_LOCMAX|macro|TCC_FCTRLA_CAPTURE_LOCMAX
DECL|TCC_FCTRLA_CAPTURE_LOCMIN_Val|macro|TCC_FCTRLA_CAPTURE_LOCMIN_Val
DECL|TCC_FCTRLA_CAPTURE_LOCMIN|macro|TCC_FCTRLA_CAPTURE_LOCMIN
DECL|TCC_FCTRLA_CAPTURE_Msk|macro|TCC_FCTRLA_CAPTURE_Msk
DECL|TCC_FCTRLA_CAPTURE_Pos|macro|TCC_FCTRLA_CAPTURE_Pos
DECL|TCC_FCTRLA_CAPTURE|macro|TCC_FCTRLA_CAPTURE
DECL|TCC_FCTRLA_CHSEL_CC0_Val|macro|TCC_FCTRLA_CHSEL_CC0_Val
DECL|TCC_FCTRLA_CHSEL_CC0|macro|TCC_FCTRLA_CHSEL_CC0
DECL|TCC_FCTRLA_CHSEL_CC1_Val|macro|TCC_FCTRLA_CHSEL_CC1_Val
DECL|TCC_FCTRLA_CHSEL_CC1|macro|TCC_FCTRLA_CHSEL_CC1
DECL|TCC_FCTRLA_CHSEL_CC2_Val|macro|TCC_FCTRLA_CHSEL_CC2_Val
DECL|TCC_FCTRLA_CHSEL_CC2|macro|TCC_FCTRLA_CHSEL_CC2
DECL|TCC_FCTRLA_CHSEL_CC3_Val|macro|TCC_FCTRLA_CHSEL_CC3_Val
DECL|TCC_FCTRLA_CHSEL_CC3|macro|TCC_FCTRLA_CHSEL_CC3
DECL|TCC_FCTRLA_CHSEL_Msk|macro|TCC_FCTRLA_CHSEL_Msk
DECL|TCC_FCTRLA_CHSEL_Pos|macro|TCC_FCTRLA_CHSEL_Pos
DECL|TCC_FCTRLA_CHSEL|macro|TCC_FCTRLA_CHSEL
DECL|TCC_FCTRLA_FILTERVAL_Msk|macro|TCC_FCTRLA_FILTERVAL_Msk
DECL|TCC_FCTRLA_FILTERVAL_Pos|macro|TCC_FCTRLA_FILTERVAL_Pos
DECL|TCC_FCTRLA_FILTERVAL|macro|TCC_FCTRLA_FILTERVAL
DECL|TCC_FCTRLA_HALT_DISABLE_Val|macro|TCC_FCTRLA_HALT_DISABLE_Val
DECL|TCC_FCTRLA_HALT_DISABLE|macro|TCC_FCTRLA_HALT_DISABLE
DECL|TCC_FCTRLA_HALT_HW_Val|macro|TCC_FCTRLA_HALT_HW_Val
DECL|TCC_FCTRLA_HALT_HW|macro|TCC_FCTRLA_HALT_HW
DECL|TCC_FCTRLA_HALT_Msk|macro|TCC_FCTRLA_HALT_Msk
DECL|TCC_FCTRLA_HALT_NR_Val|macro|TCC_FCTRLA_HALT_NR_Val
DECL|TCC_FCTRLA_HALT_NR|macro|TCC_FCTRLA_HALT_NR
DECL|TCC_FCTRLA_HALT_Pos|macro|TCC_FCTRLA_HALT_Pos
DECL|TCC_FCTRLA_HALT_SW_Val|macro|TCC_FCTRLA_HALT_SW_Val
DECL|TCC_FCTRLA_HALT_SW|macro|TCC_FCTRLA_HALT_SW
DECL|TCC_FCTRLA_HALT|macro|TCC_FCTRLA_HALT
DECL|TCC_FCTRLA_KEEP_Pos|macro|TCC_FCTRLA_KEEP_Pos
DECL|TCC_FCTRLA_KEEP|macro|TCC_FCTRLA_KEEP
DECL|TCC_FCTRLA_MASK|macro|TCC_FCTRLA_MASK
DECL|TCC_FCTRLA_OFFSET|macro|TCC_FCTRLA_OFFSET
DECL|TCC_FCTRLA_QUAL_Pos|macro|TCC_FCTRLA_QUAL_Pos
DECL|TCC_FCTRLA_QUAL|macro|TCC_FCTRLA_QUAL
DECL|TCC_FCTRLA_RESETVALUE|macro|TCC_FCTRLA_RESETVALUE
DECL|TCC_FCTRLA_RESTART_Pos|macro|TCC_FCTRLA_RESTART_Pos
DECL|TCC_FCTRLA_RESTART|macro|TCC_FCTRLA_RESTART
DECL|TCC_FCTRLA_SRC_ALTFAULT_Val|macro|TCC_FCTRLA_SRC_ALTFAULT_Val
DECL|TCC_FCTRLA_SRC_ALTFAULT|macro|TCC_FCTRLA_SRC_ALTFAULT
DECL|TCC_FCTRLA_SRC_DISABLE_Val|macro|TCC_FCTRLA_SRC_DISABLE_Val
DECL|TCC_FCTRLA_SRC_DISABLE|macro|TCC_FCTRLA_SRC_DISABLE
DECL|TCC_FCTRLA_SRC_ENABLE_Val|macro|TCC_FCTRLA_SRC_ENABLE_Val
DECL|TCC_FCTRLA_SRC_ENABLE|macro|TCC_FCTRLA_SRC_ENABLE
DECL|TCC_FCTRLA_SRC_INVERT_Val|macro|TCC_FCTRLA_SRC_INVERT_Val
DECL|TCC_FCTRLA_SRC_INVERT|macro|TCC_FCTRLA_SRC_INVERT
DECL|TCC_FCTRLA_SRC_Msk|macro|TCC_FCTRLA_SRC_Msk
DECL|TCC_FCTRLA_SRC_Pos|macro|TCC_FCTRLA_SRC_Pos
DECL|TCC_FCTRLA_SRC|macro|TCC_FCTRLA_SRC
DECL|TCC_FCTRLA_Type|typedef|} TCC_FCTRLA_Type;
DECL|TCC_FCTRLB_BLANKVAL_Msk|macro|TCC_FCTRLB_BLANKVAL_Msk
DECL|TCC_FCTRLB_BLANKVAL_Pos|macro|TCC_FCTRLB_BLANKVAL_Pos
DECL|TCC_FCTRLB_BLANKVAL|macro|TCC_FCTRLB_BLANKVAL
DECL|TCC_FCTRLB_BLANK_BOTH_Val|macro|TCC_FCTRLB_BLANK_BOTH_Val
DECL|TCC_FCTRLB_BLANK_BOTH|macro|TCC_FCTRLB_BLANK_BOTH
DECL|TCC_FCTRLB_BLANK_FALL_Val|macro|TCC_FCTRLB_BLANK_FALL_Val
DECL|TCC_FCTRLB_BLANK_FALL|macro|TCC_FCTRLB_BLANK_FALL
DECL|TCC_FCTRLB_BLANK_Msk|macro|TCC_FCTRLB_BLANK_Msk
DECL|TCC_FCTRLB_BLANK_NONE_Val|macro|TCC_FCTRLB_BLANK_NONE_Val
DECL|TCC_FCTRLB_BLANK_NONE|macro|TCC_FCTRLB_BLANK_NONE
DECL|TCC_FCTRLB_BLANK_Pos|macro|TCC_FCTRLB_BLANK_Pos
DECL|TCC_FCTRLB_BLANK_RISE_Val|macro|TCC_FCTRLB_BLANK_RISE_Val
DECL|TCC_FCTRLB_BLANK_RISE|macro|TCC_FCTRLB_BLANK_RISE
DECL|TCC_FCTRLB_BLANK|macro|TCC_FCTRLB_BLANK
DECL|TCC_FCTRLB_CAPTURE_CAPTMAX_Val|macro|TCC_FCTRLB_CAPTURE_CAPTMAX_Val
DECL|TCC_FCTRLB_CAPTURE_CAPTMAX|macro|TCC_FCTRLB_CAPTURE_CAPTMAX
DECL|TCC_FCTRLB_CAPTURE_CAPTMIN_Val|macro|TCC_FCTRLB_CAPTURE_CAPTMIN_Val
DECL|TCC_FCTRLB_CAPTURE_CAPTMIN|macro|TCC_FCTRLB_CAPTURE_CAPTMIN
DECL|TCC_FCTRLB_CAPTURE_CAPT_Val|macro|TCC_FCTRLB_CAPTURE_CAPT_Val
DECL|TCC_FCTRLB_CAPTURE_CAPT|macro|TCC_FCTRLB_CAPTURE_CAPT
DECL|TCC_FCTRLB_CAPTURE_DERIV0_Val|macro|TCC_FCTRLB_CAPTURE_DERIV0_Val
DECL|TCC_FCTRLB_CAPTURE_DERIV0|macro|TCC_FCTRLB_CAPTURE_DERIV0
DECL|TCC_FCTRLB_CAPTURE_DISABLE_Val|macro|TCC_FCTRLB_CAPTURE_DISABLE_Val
DECL|TCC_FCTRLB_CAPTURE_DISABLE|macro|TCC_FCTRLB_CAPTURE_DISABLE
DECL|TCC_FCTRLB_CAPTURE_LOCMAX_Val|macro|TCC_FCTRLB_CAPTURE_LOCMAX_Val
DECL|TCC_FCTRLB_CAPTURE_LOCMAX|macro|TCC_FCTRLB_CAPTURE_LOCMAX
DECL|TCC_FCTRLB_CAPTURE_LOCMIN_Val|macro|TCC_FCTRLB_CAPTURE_LOCMIN_Val
DECL|TCC_FCTRLB_CAPTURE_LOCMIN|macro|TCC_FCTRLB_CAPTURE_LOCMIN
DECL|TCC_FCTRLB_CAPTURE_Msk|macro|TCC_FCTRLB_CAPTURE_Msk
DECL|TCC_FCTRLB_CAPTURE_Pos|macro|TCC_FCTRLB_CAPTURE_Pos
DECL|TCC_FCTRLB_CAPTURE|macro|TCC_FCTRLB_CAPTURE
DECL|TCC_FCTRLB_CHSEL_CC0_Val|macro|TCC_FCTRLB_CHSEL_CC0_Val
DECL|TCC_FCTRLB_CHSEL_CC0|macro|TCC_FCTRLB_CHSEL_CC0
DECL|TCC_FCTRLB_CHSEL_CC1_Val|macro|TCC_FCTRLB_CHSEL_CC1_Val
DECL|TCC_FCTRLB_CHSEL_CC1|macro|TCC_FCTRLB_CHSEL_CC1
DECL|TCC_FCTRLB_CHSEL_CC2_Val|macro|TCC_FCTRLB_CHSEL_CC2_Val
DECL|TCC_FCTRLB_CHSEL_CC2|macro|TCC_FCTRLB_CHSEL_CC2
DECL|TCC_FCTRLB_CHSEL_CC3_Val|macro|TCC_FCTRLB_CHSEL_CC3_Val
DECL|TCC_FCTRLB_CHSEL_CC3|macro|TCC_FCTRLB_CHSEL_CC3
DECL|TCC_FCTRLB_CHSEL_Msk|macro|TCC_FCTRLB_CHSEL_Msk
DECL|TCC_FCTRLB_CHSEL_Pos|macro|TCC_FCTRLB_CHSEL_Pos
DECL|TCC_FCTRLB_CHSEL|macro|TCC_FCTRLB_CHSEL
DECL|TCC_FCTRLB_FILTERVAL_Msk|macro|TCC_FCTRLB_FILTERVAL_Msk
DECL|TCC_FCTRLB_FILTERVAL_Pos|macro|TCC_FCTRLB_FILTERVAL_Pos
DECL|TCC_FCTRLB_FILTERVAL|macro|TCC_FCTRLB_FILTERVAL
DECL|TCC_FCTRLB_HALT_DISABLE_Val|macro|TCC_FCTRLB_HALT_DISABLE_Val
DECL|TCC_FCTRLB_HALT_DISABLE|macro|TCC_FCTRLB_HALT_DISABLE
DECL|TCC_FCTRLB_HALT_HW_Val|macro|TCC_FCTRLB_HALT_HW_Val
DECL|TCC_FCTRLB_HALT_HW|macro|TCC_FCTRLB_HALT_HW
DECL|TCC_FCTRLB_HALT_Msk|macro|TCC_FCTRLB_HALT_Msk
DECL|TCC_FCTRLB_HALT_NR_Val|macro|TCC_FCTRLB_HALT_NR_Val
DECL|TCC_FCTRLB_HALT_NR|macro|TCC_FCTRLB_HALT_NR
DECL|TCC_FCTRLB_HALT_Pos|macro|TCC_FCTRLB_HALT_Pos
DECL|TCC_FCTRLB_HALT_SW_Val|macro|TCC_FCTRLB_HALT_SW_Val
DECL|TCC_FCTRLB_HALT_SW|macro|TCC_FCTRLB_HALT_SW
DECL|TCC_FCTRLB_HALT|macro|TCC_FCTRLB_HALT
DECL|TCC_FCTRLB_KEEP_Pos|macro|TCC_FCTRLB_KEEP_Pos
DECL|TCC_FCTRLB_KEEP|macro|TCC_FCTRLB_KEEP
DECL|TCC_FCTRLB_MASK|macro|TCC_FCTRLB_MASK
DECL|TCC_FCTRLB_OFFSET|macro|TCC_FCTRLB_OFFSET
DECL|TCC_FCTRLB_QUAL_Pos|macro|TCC_FCTRLB_QUAL_Pos
DECL|TCC_FCTRLB_QUAL|macro|TCC_FCTRLB_QUAL
DECL|TCC_FCTRLB_RESETVALUE|macro|TCC_FCTRLB_RESETVALUE
DECL|TCC_FCTRLB_RESTART_Pos|macro|TCC_FCTRLB_RESTART_Pos
DECL|TCC_FCTRLB_RESTART|macro|TCC_FCTRLB_RESTART
DECL|TCC_FCTRLB_SRC_ALTFAULT_Val|macro|TCC_FCTRLB_SRC_ALTFAULT_Val
DECL|TCC_FCTRLB_SRC_ALTFAULT|macro|TCC_FCTRLB_SRC_ALTFAULT
DECL|TCC_FCTRLB_SRC_DISABLE_Val|macro|TCC_FCTRLB_SRC_DISABLE_Val
DECL|TCC_FCTRLB_SRC_DISABLE|macro|TCC_FCTRLB_SRC_DISABLE
DECL|TCC_FCTRLB_SRC_ENABLE_Val|macro|TCC_FCTRLB_SRC_ENABLE_Val
DECL|TCC_FCTRLB_SRC_ENABLE|macro|TCC_FCTRLB_SRC_ENABLE
DECL|TCC_FCTRLB_SRC_INVERT_Val|macro|TCC_FCTRLB_SRC_INVERT_Val
DECL|TCC_FCTRLB_SRC_INVERT|macro|TCC_FCTRLB_SRC_INVERT
DECL|TCC_FCTRLB_SRC_Msk|macro|TCC_FCTRLB_SRC_Msk
DECL|TCC_FCTRLB_SRC_Pos|macro|TCC_FCTRLB_SRC_Pos
DECL|TCC_FCTRLB_SRC|macro|TCC_FCTRLB_SRC
DECL|TCC_FCTRLB_Type|typedef|} TCC_FCTRLB_Type;
DECL|TCC_INTENCLR_CNT_Pos|macro|TCC_INTENCLR_CNT_Pos
DECL|TCC_INTENCLR_CNT|macro|TCC_INTENCLR_CNT
DECL|TCC_INTENCLR_DFS_Pos|macro|TCC_INTENCLR_DFS_Pos
DECL|TCC_INTENCLR_DFS|macro|TCC_INTENCLR_DFS
DECL|TCC_INTENCLR_ERR_Pos|macro|TCC_INTENCLR_ERR_Pos
DECL|TCC_INTENCLR_ERR|macro|TCC_INTENCLR_ERR
DECL|TCC_INTENCLR_FAULT0_Pos|macro|TCC_INTENCLR_FAULT0_Pos
DECL|TCC_INTENCLR_FAULT0|macro|TCC_INTENCLR_FAULT0
DECL|TCC_INTENCLR_FAULT1_Pos|macro|TCC_INTENCLR_FAULT1_Pos
DECL|TCC_INTENCLR_FAULT1|macro|TCC_INTENCLR_FAULT1
DECL|TCC_INTENCLR_FAULTA_Pos|macro|TCC_INTENCLR_FAULTA_Pos
DECL|TCC_INTENCLR_FAULTA|macro|TCC_INTENCLR_FAULTA
DECL|TCC_INTENCLR_FAULTB_Pos|macro|TCC_INTENCLR_FAULTB_Pos
DECL|TCC_INTENCLR_FAULTB|macro|TCC_INTENCLR_FAULTB
DECL|TCC_INTENCLR_MASK|macro|TCC_INTENCLR_MASK
DECL|TCC_INTENCLR_MC0_Pos|macro|TCC_INTENCLR_MC0_Pos
DECL|TCC_INTENCLR_MC0|macro|TCC_INTENCLR_MC0
DECL|TCC_INTENCLR_MC1_Pos|macro|TCC_INTENCLR_MC1_Pos
DECL|TCC_INTENCLR_MC1|macro|TCC_INTENCLR_MC1
DECL|TCC_INTENCLR_MC2_Pos|macro|TCC_INTENCLR_MC2_Pos
DECL|TCC_INTENCLR_MC2|macro|TCC_INTENCLR_MC2
DECL|TCC_INTENCLR_MC3_Pos|macro|TCC_INTENCLR_MC3_Pos
DECL|TCC_INTENCLR_MC3|macro|TCC_INTENCLR_MC3
DECL|TCC_INTENCLR_MC_Msk|macro|TCC_INTENCLR_MC_Msk
DECL|TCC_INTENCLR_MC_Pos|macro|TCC_INTENCLR_MC_Pos
DECL|TCC_INTENCLR_MC|macro|TCC_INTENCLR_MC
DECL|TCC_INTENCLR_OFFSET|macro|TCC_INTENCLR_OFFSET
DECL|TCC_INTENCLR_OVF_Pos|macro|TCC_INTENCLR_OVF_Pos
DECL|TCC_INTENCLR_OVF|macro|TCC_INTENCLR_OVF
DECL|TCC_INTENCLR_RESETVALUE|macro|TCC_INTENCLR_RESETVALUE
DECL|TCC_INTENCLR_TRG_Pos|macro|TCC_INTENCLR_TRG_Pos
DECL|TCC_INTENCLR_TRG|macro|TCC_INTENCLR_TRG
DECL|TCC_INTENCLR_Type|typedef|} TCC_INTENCLR_Type;
DECL|TCC_INTENSET_CNT_Pos|macro|TCC_INTENSET_CNT_Pos
DECL|TCC_INTENSET_CNT|macro|TCC_INTENSET_CNT
DECL|TCC_INTENSET_DFS_Pos|macro|TCC_INTENSET_DFS_Pos
DECL|TCC_INTENSET_DFS|macro|TCC_INTENSET_DFS
DECL|TCC_INTENSET_ERR_Pos|macro|TCC_INTENSET_ERR_Pos
DECL|TCC_INTENSET_ERR|macro|TCC_INTENSET_ERR
DECL|TCC_INTENSET_FAULT0_Pos|macro|TCC_INTENSET_FAULT0_Pos
DECL|TCC_INTENSET_FAULT0|macro|TCC_INTENSET_FAULT0
DECL|TCC_INTENSET_FAULT1_Pos|macro|TCC_INTENSET_FAULT1_Pos
DECL|TCC_INTENSET_FAULT1|macro|TCC_INTENSET_FAULT1
DECL|TCC_INTENSET_FAULTA_Pos|macro|TCC_INTENSET_FAULTA_Pos
DECL|TCC_INTENSET_FAULTA|macro|TCC_INTENSET_FAULTA
DECL|TCC_INTENSET_FAULTB_Pos|macro|TCC_INTENSET_FAULTB_Pos
DECL|TCC_INTENSET_FAULTB|macro|TCC_INTENSET_FAULTB
DECL|TCC_INTENSET_MASK|macro|TCC_INTENSET_MASK
DECL|TCC_INTENSET_MC0_Pos|macro|TCC_INTENSET_MC0_Pos
DECL|TCC_INTENSET_MC0|macro|TCC_INTENSET_MC0
DECL|TCC_INTENSET_MC1_Pos|macro|TCC_INTENSET_MC1_Pos
DECL|TCC_INTENSET_MC1|macro|TCC_INTENSET_MC1
DECL|TCC_INTENSET_MC2_Pos|macro|TCC_INTENSET_MC2_Pos
DECL|TCC_INTENSET_MC2|macro|TCC_INTENSET_MC2
DECL|TCC_INTENSET_MC3_Pos|macro|TCC_INTENSET_MC3_Pos
DECL|TCC_INTENSET_MC3|macro|TCC_INTENSET_MC3
DECL|TCC_INTENSET_MC_Msk|macro|TCC_INTENSET_MC_Msk
DECL|TCC_INTENSET_MC_Pos|macro|TCC_INTENSET_MC_Pos
DECL|TCC_INTENSET_MC|macro|TCC_INTENSET_MC
DECL|TCC_INTENSET_OFFSET|macro|TCC_INTENSET_OFFSET
DECL|TCC_INTENSET_OVF_Pos|macro|TCC_INTENSET_OVF_Pos
DECL|TCC_INTENSET_OVF|macro|TCC_INTENSET_OVF
DECL|TCC_INTENSET_RESETVALUE|macro|TCC_INTENSET_RESETVALUE
DECL|TCC_INTENSET_TRG_Pos|macro|TCC_INTENSET_TRG_Pos
DECL|TCC_INTENSET_TRG|macro|TCC_INTENSET_TRG
DECL|TCC_INTENSET_Type|typedef|} TCC_INTENSET_Type;
DECL|TCC_INTFLAG_CNT_Pos|macro|TCC_INTFLAG_CNT_Pos
DECL|TCC_INTFLAG_CNT|macro|TCC_INTFLAG_CNT
DECL|TCC_INTFLAG_DFS_Pos|macro|TCC_INTFLAG_DFS_Pos
DECL|TCC_INTFLAG_DFS|macro|TCC_INTFLAG_DFS
DECL|TCC_INTFLAG_ERR_Pos|macro|TCC_INTFLAG_ERR_Pos
DECL|TCC_INTFLAG_ERR|macro|TCC_INTFLAG_ERR
DECL|TCC_INTFLAG_FAULT0_Pos|macro|TCC_INTFLAG_FAULT0_Pos
DECL|TCC_INTFLAG_FAULT0|macro|TCC_INTFLAG_FAULT0
DECL|TCC_INTFLAG_FAULT1_Pos|macro|TCC_INTFLAG_FAULT1_Pos
DECL|TCC_INTFLAG_FAULT1|macro|TCC_INTFLAG_FAULT1
DECL|TCC_INTFLAG_FAULTA_Pos|macro|TCC_INTFLAG_FAULTA_Pos
DECL|TCC_INTFLAG_FAULTA|macro|TCC_INTFLAG_FAULTA
DECL|TCC_INTFLAG_FAULTB_Pos|macro|TCC_INTFLAG_FAULTB_Pos
DECL|TCC_INTFLAG_FAULTB|macro|TCC_INTFLAG_FAULTB
DECL|TCC_INTFLAG_MASK|macro|TCC_INTFLAG_MASK
DECL|TCC_INTFLAG_MC0_Pos|macro|TCC_INTFLAG_MC0_Pos
DECL|TCC_INTFLAG_MC0|macro|TCC_INTFLAG_MC0
DECL|TCC_INTFLAG_MC1_Pos|macro|TCC_INTFLAG_MC1_Pos
DECL|TCC_INTFLAG_MC1|macro|TCC_INTFLAG_MC1
DECL|TCC_INTFLAG_MC2_Pos|macro|TCC_INTFLAG_MC2_Pos
DECL|TCC_INTFLAG_MC2|macro|TCC_INTFLAG_MC2
DECL|TCC_INTFLAG_MC3_Pos|macro|TCC_INTFLAG_MC3_Pos
DECL|TCC_INTFLAG_MC3|macro|TCC_INTFLAG_MC3
DECL|TCC_INTFLAG_MC_Msk|macro|TCC_INTFLAG_MC_Msk
DECL|TCC_INTFLAG_MC_Pos|macro|TCC_INTFLAG_MC_Pos
DECL|TCC_INTFLAG_MC|macro|TCC_INTFLAG_MC
DECL|TCC_INTFLAG_OFFSET|macro|TCC_INTFLAG_OFFSET
DECL|TCC_INTFLAG_OVF_Pos|macro|TCC_INTFLAG_OVF_Pos
DECL|TCC_INTFLAG_OVF|macro|TCC_INTFLAG_OVF
DECL|TCC_INTFLAG_RESETVALUE|macro|TCC_INTFLAG_RESETVALUE
DECL|TCC_INTFLAG_TRG_Pos|macro|TCC_INTFLAG_TRG_Pos
DECL|TCC_INTFLAG_TRG|macro|TCC_INTFLAG_TRG
DECL|TCC_INTFLAG_Type|typedef|} TCC_INTFLAG_Type;
DECL|TCC_PATTB_MASK|macro|TCC_PATTB_MASK
DECL|TCC_PATTB_OFFSET|macro|TCC_PATTB_OFFSET
DECL|TCC_PATTB_PGEB0_Pos|macro|TCC_PATTB_PGEB0_Pos
DECL|TCC_PATTB_PGEB0|macro|TCC_PATTB_PGEB0
DECL|TCC_PATTB_PGEB1_Pos|macro|TCC_PATTB_PGEB1_Pos
DECL|TCC_PATTB_PGEB1|macro|TCC_PATTB_PGEB1
DECL|TCC_PATTB_PGEB2_Pos|macro|TCC_PATTB_PGEB2_Pos
DECL|TCC_PATTB_PGEB2|macro|TCC_PATTB_PGEB2
DECL|TCC_PATTB_PGEB3_Pos|macro|TCC_PATTB_PGEB3_Pos
DECL|TCC_PATTB_PGEB3|macro|TCC_PATTB_PGEB3
DECL|TCC_PATTB_PGEB4_Pos|macro|TCC_PATTB_PGEB4_Pos
DECL|TCC_PATTB_PGEB4|macro|TCC_PATTB_PGEB4
DECL|TCC_PATTB_PGEB5_Pos|macro|TCC_PATTB_PGEB5_Pos
DECL|TCC_PATTB_PGEB5|macro|TCC_PATTB_PGEB5
DECL|TCC_PATTB_PGEB6_Pos|macro|TCC_PATTB_PGEB6_Pos
DECL|TCC_PATTB_PGEB6|macro|TCC_PATTB_PGEB6
DECL|TCC_PATTB_PGEB7_Pos|macro|TCC_PATTB_PGEB7_Pos
DECL|TCC_PATTB_PGEB7|macro|TCC_PATTB_PGEB7
DECL|TCC_PATTB_PGEB_Msk|macro|TCC_PATTB_PGEB_Msk
DECL|TCC_PATTB_PGEB_Pos|macro|TCC_PATTB_PGEB_Pos
DECL|TCC_PATTB_PGEB|macro|TCC_PATTB_PGEB
DECL|TCC_PATTB_PGVB0_Pos|macro|TCC_PATTB_PGVB0_Pos
DECL|TCC_PATTB_PGVB0|macro|TCC_PATTB_PGVB0
DECL|TCC_PATTB_PGVB1_Pos|macro|TCC_PATTB_PGVB1_Pos
DECL|TCC_PATTB_PGVB1|macro|TCC_PATTB_PGVB1
DECL|TCC_PATTB_PGVB2_Pos|macro|TCC_PATTB_PGVB2_Pos
DECL|TCC_PATTB_PGVB2|macro|TCC_PATTB_PGVB2
DECL|TCC_PATTB_PGVB3_Pos|macro|TCC_PATTB_PGVB3_Pos
DECL|TCC_PATTB_PGVB3|macro|TCC_PATTB_PGVB3
DECL|TCC_PATTB_PGVB4_Pos|macro|TCC_PATTB_PGVB4_Pos
DECL|TCC_PATTB_PGVB4|macro|TCC_PATTB_PGVB4
DECL|TCC_PATTB_PGVB5_Pos|macro|TCC_PATTB_PGVB5_Pos
DECL|TCC_PATTB_PGVB5|macro|TCC_PATTB_PGVB5
DECL|TCC_PATTB_PGVB6_Pos|macro|TCC_PATTB_PGVB6_Pos
DECL|TCC_PATTB_PGVB6|macro|TCC_PATTB_PGVB6
DECL|TCC_PATTB_PGVB7_Pos|macro|TCC_PATTB_PGVB7_Pos
DECL|TCC_PATTB_PGVB7|macro|TCC_PATTB_PGVB7
DECL|TCC_PATTB_PGVB_Msk|macro|TCC_PATTB_PGVB_Msk
DECL|TCC_PATTB_PGVB_Pos|macro|TCC_PATTB_PGVB_Pos
DECL|TCC_PATTB_PGVB|macro|TCC_PATTB_PGVB
DECL|TCC_PATTB_RESETVALUE|macro|TCC_PATTB_RESETVALUE
DECL|TCC_PATTB_Type|typedef|} TCC_PATTB_Type;
DECL|TCC_PATT_MASK|macro|TCC_PATT_MASK
DECL|TCC_PATT_OFFSET|macro|TCC_PATT_OFFSET
DECL|TCC_PATT_PGE0_Pos|macro|TCC_PATT_PGE0_Pos
DECL|TCC_PATT_PGE0|macro|TCC_PATT_PGE0
DECL|TCC_PATT_PGE1_Pos|macro|TCC_PATT_PGE1_Pos
DECL|TCC_PATT_PGE1|macro|TCC_PATT_PGE1
DECL|TCC_PATT_PGE2_Pos|macro|TCC_PATT_PGE2_Pos
DECL|TCC_PATT_PGE2|macro|TCC_PATT_PGE2
DECL|TCC_PATT_PGE3_Pos|macro|TCC_PATT_PGE3_Pos
DECL|TCC_PATT_PGE3|macro|TCC_PATT_PGE3
DECL|TCC_PATT_PGE4_Pos|macro|TCC_PATT_PGE4_Pos
DECL|TCC_PATT_PGE4|macro|TCC_PATT_PGE4
DECL|TCC_PATT_PGE5_Pos|macro|TCC_PATT_PGE5_Pos
DECL|TCC_PATT_PGE5|macro|TCC_PATT_PGE5
DECL|TCC_PATT_PGE6_Pos|macro|TCC_PATT_PGE6_Pos
DECL|TCC_PATT_PGE6|macro|TCC_PATT_PGE6
DECL|TCC_PATT_PGE7_Pos|macro|TCC_PATT_PGE7_Pos
DECL|TCC_PATT_PGE7|macro|TCC_PATT_PGE7
DECL|TCC_PATT_PGE_Msk|macro|TCC_PATT_PGE_Msk
DECL|TCC_PATT_PGE_Pos|macro|TCC_PATT_PGE_Pos
DECL|TCC_PATT_PGE|macro|TCC_PATT_PGE
DECL|TCC_PATT_PGV0_Pos|macro|TCC_PATT_PGV0_Pos
DECL|TCC_PATT_PGV0|macro|TCC_PATT_PGV0
DECL|TCC_PATT_PGV1_Pos|macro|TCC_PATT_PGV1_Pos
DECL|TCC_PATT_PGV1|macro|TCC_PATT_PGV1
DECL|TCC_PATT_PGV2_Pos|macro|TCC_PATT_PGV2_Pos
DECL|TCC_PATT_PGV2|macro|TCC_PATT_PGV2
DECL|TCC_PATT_PGV3_Pos|macro|TCC_PATT_PGV3_Pos
DECL|TCC_PATT_PGV3|macro|TCC_PATT_PGV3
DECL|TCC_PATT_PGV4_Pos|macro|TCC_PATT_PGV4_Pos
DECL|TCC_PATT_PGV4|macro|TCC_PATT_PGV4
DECL|TCC_PATT_PGV5_Pos|macro|TCC_PATT_PGV5_Pos
DECL|TCC_PATT_PGV5|macro|TCC_PATT_PGV5
DECL|TCC_PATT_PGV6_Pos|macro|TCC_PATT_PGV6_Pos
DECL|TCC_PATT_PGV6|macro|TCC_PATT_PGV6
DECL|TCC_PATT_PGV7_Pos|macro|TCC_PATT_PGV7_Pos
DECL|TCC_PATT_PGV7|macro|TCC_PATT_PGV7
DECL|TCC_PATT_PGV_Msk|macro|TCC_PATT_PGV_Msk
DECL|TCC_PATT_PGV_Pos|macro|TCC_PATT_PGV_Pos
DECL|TCC_PATT_PGV|macro|TCC_PATT_PGV
DECL|TCC_PATT_RESETVALUE|macro|TCC_PATT_RESETVALUE
DECL|TCC_PATT_Type|typedef|} TCC_PATT_Type;
DECL|TCC_PERB_DITH4_DITHERCYB_Msk|macro|TCC_PERB_DITH4_DITHERCYB_Msk
DECL|TCC_PERB_DITH4_DITHERCYB_Pos|macro|TCC_PERB_DITH4_DITHERCYB_Pos
DECL|TCC_PERB_DITH4_DITHERCYB|macro|TCC_PERB_DITH4_DITHERCYB
DECL|TCC_PERB_DITH4_MASK|macro|TCC_PERB_DITH4_MASK
DECL|TCC_PERB_DITH4_PERB_Msk|macro|TCC_PERB_DITH4_PERB_Msk
DECL|TCC_PERB_DITH4_PERB_Pos|macro|TCC_PERB_DITH4_PERB_Pos
DECL|TCC_PERB_DITH4_PERB|macro|TCC_PERB_DITH4_PERB
DECL|TCC_PERB_DITH5_DITHERCYB_Msk|macro|TCC_PERB_DITH5_DITHERCYB_Msk
DECL|TCC_PERB_DITH5_DITHERCYB_Pos|macro|TCC_PERB_DITH5_DITHERCYB_Pos
DECL|TCC_PERB_DITH5_DITHERCYB|macro|TCC_PERB_DITH5_DITHERCYB
DECL|TCC_PERB_DITH5_MASK|macro|TCC_PERB_DITH5_MASK
DECL|TCC_PERB_DITH5_PERB_Msk|macro|TCC_PERB_DITH5_PERB_Msk
DECL|TCC_PERB_DITH5_PERB_Pos|macro|TCC_PERB_DITH5_PERB_Pos
DECL|TCC_PERB_DITH5_PERB|macro|TCC_PERB_DITH5_PERB
DECL|TCC_PERB_DITH6_DITHERCYB_Msk|macro|TCC_PERB_DITH6_DITHERCYB_Msk
DECL|TCC_PERB_DITH6_DITHERCYB_Pos|macro|TCC_PERB_DITH6_DITHERCYB_Pos
DECL|TCC_PERB_DITH6_DITHERCYB|macro|TCC_PERB_DITH6_DITHERCYB
DECL|TCC_PERB_DITH6_MASK|macro|TCC_PERB_DITH6_MASK
DECL|TCC_PERB_DITH6_PERB_Msk|macro|TCC_PERB_DITH6_PERB_Msk
DECL|TCC_PERB_DITH6_PERB_Pos|macro|TCC_PERB_DITH6_PERB_Pos
DECL|TCC_PERB_DITH6_PERB|macro|TCC_PERB_DITH6_PERB
DECL|TCC_PERB_MASK|macro|TCC_PERB_MASK
DECL|TCC_PERB_OFFSET|macro|TCC_PERB_OFFSET
DECL|TCC_PERB_PERB_Msk|macro|TCC_PERB_PERB_Msk
DECL|TCC_PERB_PERB_Pos|macro|TCC_PERB_PERB_Pos
DECL|TCC_PERB_PERB|macro|TCC_PERB_PERB
DECL|TCC_PERB_RESETVALUE|macro|TCC_PERB_RESETVALUE
DECL|TCC_PERB_Type|typedef|} TCC_PERB_Type;
DECL|TCC_PER_DITH4_DITHERCY_Msk|macro|TCC_PER_DITH4_DITHERCY_Msk
DECL|TCC_PER_DITH4_DITHERCY_Pos|macro|TCC_PER_DITH4_DITHERCY_Pos
DECL|TCC_PER_DITH4_DITHERCY|macro|TCC_PER_DITH4_DITHERCY
DECL|TCC_PER_DITH4_MASK|macro|TCC_PER_DITH4_MASK
DECL|TCC_PER_DITH4_PER_Msk|macro|TCC_PER_DITH4_PER_Msk
DECL|TCC_PER_DITH4_PER_Pos|macro|TCC_PER_DITH4_PER_Pos
DECL|TCC_PER_DITH4_PER|macro|TCC_PER_DITH4_PER
DECL|TCC_PER_DITH5_DITHERCY_Msk|macro|TCC_PER_DITH5_DITHERCY_Msk
DECL|TCC_PER_DITH5_DITHERCY_Pos|macro|TCC_PER_DITH5_DITHERCY_Pos
DECL|TCC_PER_DITH5_DITHERCY|macro|TCC_PER_DITH5_DITHERCY
DECL|TCC_PER_DITH5_MASK|macro|TCC_PER_DITH5_MASK
DECL|TCC_PER_DITH5_PER_Msk|macro|TCC_PER_DITH5_PER_Msk
DECL|TCC_PER_DITH5_PER_Pos|macro|TCC_PER_DITH5_PER_Pos
DECL|TCC_PER_DITH5_PER|macro|TCC_PER_DITH5_PER
DECL|TCC_PER_DITH6_DITHERCY_Msk|macro|TCC_PER_DITH6_DITHERCY_Msk
DECL|TCC_PER_DITH6_DITHERCY_Pos|macro|TCC_PER_DITH6_DITHERCY_Pos
DECL|TCC_PER_DITH6_DITHERCY|macro|TCC_PER_DITH6_DITHERCY
DECL|TCC_PER_DITH6_MASK|macro|TCC_PER_DITH6_MASK
DECL|TCC_PER_DITH6_PER_Msk|macro|TCC_PER_DITH6_PER_Msk
DECL|TCC_PER_DITH6_PER_Pos|macro|TCC_PER_DITH6_PER_Pos
DECL|TCC_PER_DITH6_PER|macro|TCC_PER_DITH6_PER
DECL|TCC_PER_MASK|macro|TCC_PER_MASK
DECL|TCC_PER_OFFSET|macro|TCC_PER_OFFSET
DECL|TCC_PER_PER_Msk|macro|TCC_PER_PER_Msk
DECL|TCC_PER_PER_Pos|macro|TCC_PER_PER_Pos
DECL|TCC_PER_PER|macro|TCC_PER_PER
DECL|TCC_PER_RESETVALUE|macro|TCC_PER_RESETVALUE
DECL|TCC_PER_Type|typedef|} TCC_PER_Type;
DECL|TCC_STATUS_CCBV0_Pos|macro|TCC_STATUS_CCBV0_Pos
DECL|TCC_STATUS_CCBV0|macro|TCC_STATUS_CCBV0
DECL|TCC_STATUS_CCBV1_Pos|macro|TCC_STATUS_CCBV1_Pos
DECL|TCC_STATUS_CCBV1|macro|TCC_STATUS_CCBV1
DECL|TCC_STATUS_CCBV2_Pos|macro|TCC_STATUS_CCBV2_Pos
DECL|TCC_STATUS_CCBV2|macro|TCC_STATUS_CCBV2
DECL|TCC_STATUS_CCBV3_Pos|macro|TCC_STATUS_CCBV3_Pos
DECL|TCC_STATUS_CCBV3|macro|TCC_STATUS_CCBV3
DECL|TCC_STATUS_CCBV_Msk|macro|TCC_STATUS_CCBV_Msk
DECL|TCC_STATUS_CCBV_Pos|macro|TCC_STATUS_CCBV_Pos
DECL|TCC_STATUS_CCBV|macro|TCC_STATUS_CCBV
DECL|TCC_STATUS_CMP0_Pos|macro|TCC_STATUS_CMP0_Pos
DECL|TCC_STATUS_CMP0|macro|TCC_STATUS_CMP0
DECL|TCC_STATUS_CMP1_Pos|macro|TCC_STATUS_CMP1_Pos
DECL|TCC_STATUS_CMP1|macro|TCC_STATUS_CMP1
DECL|TCC_STATUS_CMP2_Pos|macro|TCC_STATUS_CMP2_Pos
DECL|TCC_STATUS_CMP2|macro|TCC_STATUS_CMP2
DECL|TCC_STATUS_CMP3_Pos|macro|TCC_STATUS_CMP3_Pos
DECL|TCC_STATUS_CMP3|macro|TCC_STATUS_CMP3
DECL|TCC_STATUS_CMP_Msk|macro|TCC_STATUS_CMP_Msk
DECL|TCC_STATUS_CMP_Pos|macro|TCC_STATUS_CMP_Pos
DECL|TCC_STATUS_CMP|macro|TCC_STATUS_CMP
DECL|TCC_STATUS_DFS_Pos|macro|TCC_STATUS_DFS_Pos
DECL|TCC_STATUS_DFS|macro|TCC_STATUS_DFS
DECL|TCC_STATUS_FAULT0IN_Pos|macro|TCC_STATUS_FAULT0IN_Pos
DECL|TCC_STATUS_FAULT0IN|macro|TCC_STATUS_FAULT0IN
DECL|TCC_STATUS_FAULT0_Pos|macro|TCC_STATUS_FAULT0_Pos
DECL|TCC_STATUS_FAULT0|macro|TCC_STATUS_FAULT0
DECL|TCC_STATUS_FAULT1IN_Pos|macro|TCC_STATUS_FAULT1IN_Pos
DECL|TCC_STATUS_FAULT1IN|macro|TCC_STATUS_FAULT1IN
DECL|TCC_STATUS_FAULT1_Pos|macro|TCC_STATUS_FAULT1_Pos
DECL|TCC_STATUS_FAULT1|macro|TCC_STATUS_FAULT1
DECL|TCC_STATUS_FAULTAIN_Pos|macro|TCC_STATUS_FAULTAIN_Pos
DECL|TCC_STATUS_FAULTAIN|macro|TCC_STATUS_FAULTAIN
DECL|TCC_STATUS_FAULTA_Pos|macro|TCC_STATUS_FAULTA_Pos
DECL|TCC_STATUS_FAULTA|macro|TCC_STATUS_FAULTA
DECL|TCC_STATUS_FAULTBIN_Pos|macro|TCC_STATUS_FAULTBIN_Pos
DECL|TCC_STATUS_FAULTBIN|macro|TCC_STATUS_FAULTBIN
DECL|TCC_STATUS_FAULTB_Pos|macro|TCC_STATUS_FAULTB_Pos
DECL|TCC_STATUS_FAULTB|macro|TCC_STATUS_FAULTB
DECL|TCC_STATUS_IDX_Pos|macro|TCC_STATUS_IDX_Pos
DECL|TCC_STATUS_IDX|macro|TCC_STATUS_IDX
DECL|TCC_STATUS_MASK|macro|TCC_STATUS_MASK
DECL|TCC_STATUS_OFFSET|macro|TCC_STATUS_OFFSET
DECL|TCC_STATUS_PATTBV_Pos|macro|TCC_STATUS_PATTBV_Pos
DECL|TCC_STATUS_PATTBV|macro|TCC_STATUS_PATTBV
DECL|TCC_STATUS_PERBV_Pos|macro|TCC_STATUS_PERBV_Pos
DECL|TCC_STATUS_PERBV|macro|TCC_STATUS_PERBV
DECL|TCC_STATUS_RESETVALUE|macro|TCC_STATUS_RESETVALUE
DECL|TCC_STATUS_SLAVE_Pos|macro|TCC_STATUS_SLAVE_Pos
DECL|TCC_STATUS_SLAVE|macro|TCC_STATUS_SLAVE
DECL|TCC_STATUS_STOP_Pos|macro|TCC_STATUS_STOP_Pos
DECL|TCC_STATUS_STOP|macro|TCC_STATUS_STOP
DECL|TCC_STATUS_Type|typedef|} TCC_STATUS_Type;
DECL|TCC_STATUS_WAVEBV_Pos|macro|TCC_STATUS_WAVEBV_Pos
DECL|TCC_STATUS_WAVEBV|macro|TCC_STATUS_WAVEBV
DECL|TCC_SYNCBUSY_CC0_Pos|macro|TCC_SYNCBUSY_CC0_Pos
DECL|TCC_SYNCBUSY_CC0|macro|TCC_SYNCBUSY_CC0
DECL|TCC_SYNCBUSY_CC1_Pos|macro|TCC_SYNCBUSY_CC1_Pos
DECL|TCC_SYNCBUSY_CC1|macro|TCC_SYNCBUSY_CC1
DECL|TCC_SYNCBUSY_CC2_Pos|macro|TCC_SYNCBUSY_CC2_Pos
DECL|TCC_SYNCBUSY_CC2|macro|TCC_SYNCBUSY_CC2
DECL|TCC_SYNCBUSY_CC3_Pos|macro|TCC_SYNCBUSY_CC3_Pos
DECL|TCC_SYNCBUSY_CC3|macro|TCC_SYNCBUSY_CC3
DECL|TCC_SYNCBUSY_CCB0_Pos|macro|TCC_SYNCBUSY_CCB0_Pos
DECL|TCC_SYNCBUSY_CCB0|macro|TCC_SYNCBUSY_CCB0
DECL|TCC_SYNCBUSY_CCB1_Pos|macro|TCC_SYNCBUSY_CCB1_Pos
DECL|TCC_SYNCBUSY_CCB1|macro|TCC_SYNCBUSY_CCB1
DECL|TCC_SYNCBUSY_CCB2_Pos|macro|TCC_SYNCBUSY_CCB2_Pos
DECL|TCC_SYNCBUSY_CCB2|macro|TCC_SYNCBUSY_CCB2
DECL|TCC_SYNCBUSY_CCB3_Pos|macro|TCC_SYNCBUSY_CCB3_Pos
DECL|TCC_SYNCBUSY_CCB3|macro|TCC_SYNCBUSY_CCB3
DECL|TCC_SYNCBUSY_CCB_Msk|macro|TCC_SYNCBUSY_CCB_Msk
DECL|TCC_SYNCBUSY_CCB_Pos|macro|TCC_SYNCBUSY_CCB_Pos
DECL|TCC_SYNCBUSY_CCB|macro|TCC_SYNCBUSY_CCB
DECL|TCC_SYNCBUSY_CC_Msk|macro|TCC_SYNCBUSY_CC_Msk
DECL|TCC_SYNCBUSY_CC_Pos|macro|TCC_SYNCBUSY_CC_Pos
DECL|TCC_SYNCBUSY_CC|macro|TCC_SYNCBUSY_CC
DECL|TCC_SYNCBUSY_COUNT_Pos|macro|TCC_SYNCBUSY_COUNT_Pos
DECL|TCC_SYNCBUSY_COUNT|macro|TCC_SYNCBUSY_COUNT
DECL|TCC_SYNCBUSY_CTRLB_Pos|macro|TCC_SYNCBUSY_CTRLB_Pos
DECL|TCC_SYNCBUSY_CTRLB|macro|TCC_SYNCBUSY_CTRLB
DECL|TCC_SYNCBUSY_ENABLE_Pos|macro|TCC_SYNCBUSY_ENABLE_Pos
DECL|TCC_SYNCBUSY_ENABLE|macro|TCC_SYNCBUSY_ENABLE
DECL|TCC_SYNCBUSY_MASK|macro|TCC_SYNCBUSY_MASK
DECL|TCC_SYNCBUSY_OFFSET|macro|TCC_SYNCBUSY_OFFSET
DECL|TCC_SYNCBUSY_PATTB_Pos|macro|TCC_SYNCBUSY_PATTB_Pos
DECL|TCC_SYNCBUSY_PATTB|macro|TCC_SYNCBUSY_PATTB
DECL|TCC_SYNCBUSY_PATT_Pos|macro|TCC_SYNCBUSY_PATT_Pos
DECL|TCC_SYNCBUSY_PATT|macro|TCC_SYNCBUSY_PATT
DECL|TCC_SYNCBUSY_PERB_Pos|macro|TCC_SYNCBUSY_PERB_Pos
DECL|TCC_SYNCBUSY_PERB|macro|TCC_SYNCBUSY_PERB
DECL|TCC_SYNCBUSY_PER_Pos|macro|TCC_SYNCBUSY_PER_Pos
DECL|TCC_SYNCBUSY_PER|macro|TCC_SYNCBUSY_PER
DECL|TCC_SYNCBUSY_RESETVALUE|macro|TCC_SYNCBUSY_RESETVALUE
DECL|TCC_SYNCBUSY_STATUS_Pos|macro|TCC_SYNCBUSY_STATUS_Pos
DECL|TCC_SYNCBUSY_STATUS|macro|TCC_SYNCBUSY_STATUS
DECL|TCC_SYNCBUSY_SWRST_Pos|macro|TCC_SYNCBUSY_SWRST_Pos
DECL|TCC_SYNCBUSY_SWRST|macro|TCC_SYNCBUSY_SWRST
DECL|TCC_SYNCBUSY_Type|typedef|} TCC_SYNCBUSY_Type;
DECL|TCC_SYNCBUSY_WAVEB_Pos|macro|TCC_SYNCBUSY_WAVEB_Pos
DECL|TCC_SYNCBUSY_WAVEB|macro|TCC_SYNCBUSY_WAVEB
DECL|TCC_SYNCBUSY_WAVE_Pos|macro|TCC_SYNCBUSY_WAVE_Pos
DECL|TCC_SYNCBUSY_WAVE|macro|TCC_SYNCBUSY_WAVE
DECL|TCC_U2213|macro|TCC_U2213
DECL|TCC_WAVEB_CICCENB0_Pos|macro|TCC_WAVEB_CICCENB0_Pos
DECL|TCC_WAVEB_CICCENB0|macro|TCC_WAVEB_CICCENB0
DECL|TCC_WAVEB_CICCENB1_Pos|macro|TCC_WAVEB_CICCENB1_Pos
DECL|TCC_WAVEB_CICCENB1|macro|TCC_WAVEB_CICCENB1
DECL|TCC_WAVEB_CICCENB2_Pos|macro|TCC_WAVEB_CICCENB2_Pos
DECL|TCC_WAVEB_CICCENB2|macro|TCC_WAVEB_CICCENB2
DECL|TCC_WAVEB_CICCENB3_Pos|macro|TCC_WAVEB_CICCENB3_Pos
DECL|TCC_WAVEB_CICCENB3|macro|TCC_WAVEB_CICCENB3
DECL|TCC_WAVEB_CICCENB_Msk|macro|TCC_WAVEB_CICCENB_Msk
DECL|TCC_WAVEB_CICCENB_Pos|macro|TCC_WAVEB_CICCENB_Pos
DECL|TCC_WAVEB_CICCENB|macro|TCC_WAVEB_CICCENB
DECL|TCC_WAVEB_CIPERENB_Pos|macro|TCC_WAVEB_CIPERENB_Pos
DECL|TCC_WAVEB_CIPERENB|macro|TCC_WAVEB_CIPERENB
DECL|TCC_WAVEB_MASK|macro|TCC_WAVEB_MASK
DECL|TCC_WAVEB_OFFSET|macro|TCC_WAVEB_OFFSET
DECL|TCC_WAVEB_POLB0_Pos|macro|TCC_WAVEB_POLB0_Pos
DECL|TCC_WAVEB_POLB0|macro|TCC_WAVEB_POLB0
DECL|TCC_WAVEB_POLB1_Pos|macro|TCC_WAVEB_POLB1_Pos
DECL|TCC_WAVEB_POLB1|macro|TCC_WAVEB_POLB1
DECL|TCC_WAVEB_POLB2_Pos|macro|TCC_WAVEB_POLB2_Pos
DECL|TCC_WAVEB_POLB2|macro|TCC_WAVEB_POLB2
DECL|TCC_WAVEB_POLB3_Pos|macro|TCC_WAVEB_POLB3_Pos
DECL|TCC_WAVEB_POLB3|macro|TCC_WAVEB_POLB3
DECL|TCC_WAVEB_POLB_Msk|macro|TCC_WAVEB_POLB_Msk
DECL|TCC_WAVEB_POLB_Pos|macro|TCC_WAVEB_POLB_Pos
DECL|TCC_WAVEB_POLB|macro|TCC_WAVEB_POLB
DECL|TCC_WAVEB_RAMPB_Msk|macro|TCC_WAVEB_RAMPB_Msk
DECL|TCC_WAVEB_RAMPB_Pos|macro|TCC_WAVEB_RAMPB_Pos
DECL|TCC_WAVEB_RAMPB_RAMP1_Val|macro|TCC_WAVEB_RAMPB_RAMP1_Val
DECL|TCC_WAVEB_RAMPB_RAMP1|macro|TCC_WAVEB_RAMPB_RAMP1
DECL|TCC_WAVEB_RAMPB_RAMP2A_Val|macro|TCC_WAVEB_RAMPB_RAMP2A_Val
DECL|TCC_WAVEB_RAMPB_RAMP2A|macro|TCC_WAVEB_RAMPB_RAMP2A
DECL|TCC_WAVEB_RAMPB_RAMP2_Val|macro|TCC_WAVEB_RAMPB_RAMP2_Val
DECL|TCC_WAVEB_RAMPB_RAMP2|macro|TCC_WAVEB_RAMPB_RAMP2
DECL|TCC_WAVEB_RAMPB|macro|TCC_WAVEB_RAMPB
DECL|TCC_WAVEB_RESETVALUE|macro|TCC_WAVEB_RESETVALUE
DECL|TCC_WAVEB_SWAPB0_Pos|macro|TCC_WAVEB_SWAPB0_Pos
DECL|TCC_WAVEB_SWAPB0|macro|TCC_WAVEB_SWAPB0
DECL|TCC_WAVEB_SWAPB1_Pos|macro|TCC_WAVEB_SWAPB1_Pos
DECL|TCC_WAVEB_SWAPB1|macro|TCC_WAVEB_SWAPB1
DECL|TCC_WAVEB_SWAPB2_Pos|macro|TCC_WAVEB_SWAPB2_Pos
DECL|TCC_WAVEB_SWAPB2|macro|TCC_WAVEB_SWAPB2
DECL|TCC_WAVEB_SWAPB3_Pos|macro|TCC_WAVEB_SWAPB3_Pos
DECL|TCC_WAVEB_SWAPB3|macro|TCC_WAVEB_SWAPB3
DECL|TCC_WAVEB_SWAPB_Msk|macro|TCC_WAVEB_SWAPB_Msk
DECL|TCC_WAVEB_SWAPB_Pos|macro|TCC_WAVEB_SWAPB_Pos
DECL|TCC_WAVEB_SWAPB|macro|TCC_WAVEB_SWAPB
DECL|TCC_WAVEB_Type|typedef|} TCC_WAVEB_Type;
DECL|TCC_WAVEB_WAVEGENB_DSBOTH_Val|macro|TCC_WAVEB_WAVEGENB_DSBOTH_Val
DECL|TCC_WAVEB_WAVEGENB_DSBOTH|macro|TCC_WAVEB_WAVEGENB_DSBOTH
DECL|TCC_WAVEB_WAVEGENB_DSBOTTOM_Val|macro|TCC_WAVEB_WAVEGENB_DSBOTTOM_Val
DECL|TCC_WAVEB_WAVEGENB_DSBOTTOM|macro|TCC_WAVEB_WAVEGENB_DSBOTTOM
DECL|TCC_WAVEB_WAVEGENB_DSCRITICAL_Val|macro|TCC_WAVEB_WAVEGENB_DSCRITICAL_Val
DECL|TCC_WAVEB_WAVEGENB_DSCRITICAL|macro|TCC_WAVEB_WAVEGENB_DSCRITICAL
DECL|TCC_WAVEB_WAVEGENB_DSTOP_Val|macro|TCC_WAVEB_WAVEGENB_DSTOP_Val
DECL|TCC_WAVEB_WAVEGENB_DSTOP|macro|TCC_WAVEB_WAVEGENB_DSTOP
DECL|TCC_WAVEB_WAVEGENB_MFRQ_Val|macro|TCC_WAVEB_WAVEGENB_MFRQ_Val
DECL|TCC_WAVEB_WAVEGENB_MFRQ|macro|TCC_WAVEB_WAVEGENB_MFRQ
DECL|TCC_WAVEB_WAVEGENB_Msk|macro|TCC_WAVEB_WAVEGENB_Msk
DECL|TCC_WAVEB_WAVEGENB_NFRQ_Val|macro|TCC_WAVEB_WAVEGENB_NFRQ_Val
DECL|TCC_WAVEB_WAVEGENB_NFRQ|macro|TCC_WAVEB_WAVEGENB_NFRQ
DECL|TCC_WAVEB_WAVEGENB_NPWM_Val|macro|TCC_WAVEB_WAVEGENB_NPWM_Val
DECL|TCC_WAVEB_WAVEGENB_NPWM|macro|TCC_WAVEB_WAVEGENB_NPWM
DECL|TCC_WAVEB_WAVEGENB_Pos|macro|TCC_WAVEB_WAVEGENB_Pos
DECL|TCC_WAVEB_WAVEGENB|macro|TCC_WAVEB_WAVEGENB
DECL|TCC_WAVE_CICCEN0_Pos|macro|TCC_WAVE_CICCEN0_Pos
DECL|TCC_WAVE_CICCEN0|macro|TCC_WAVE_CICCEN0
DECL|TCC_WAVE_CICCEN1_Pos|macro|TCC_WAVE_CICCEN1_Pos
DECL|TCC_WAVE_CICCEN1|macro|TCC_WAVE_CICCEN1
DECL|TCC_WAVE_CICCEN2_Pos|macro|TCC_WAVE_CICCEN2_Pos
DECL|TCC_WAVE_CICCEN2|macro|TCC_WAVE_CICCEN2
DECL|TCC_WAVE_CICCEN3_Pos|macro|TCC_WAVE_CICCEN3_Pos
DECL|TCC_WAVE_CICCEN3|macro|TCC_WAVE_CICCEN3
DECL|TCC_WAVE_CICCEN_Msk|macro|TCC_WAVE_CICCEN_Msk
DECL|TCC_WAVE_CICCEN_Pos|macro|TCC_WAVE_CICCEN_Pos
DECL|TCC_WAVE_CICCEN|macro|TCC_WAVE_CICCEN
DECL|TCC_WAVE_CIPEREN_Pos|macro|TCC_WAVE_CIPEREN_Pos
DECL|TCC_WAVE_CIPEREN|macro|TCC_WAVE_CIPEREN
DECL|TCC_WAVE_MASK|macro|TCC_WAVE_MASK
DECL|TCC_WAVE_OFFSET|macro|TCC_WAVE_OFFSET
DECL|TCC_WAVE_POL0_Pos|macro|TCC_WAVE_POL0_Pos
DECL|TCC_WAVE_POL0|macro|TCC_WAVE_POL0
DECL|TCC_WAVE_POL1_Pos|macro|TCC_WAVE_POL1_Pos
DECL|TCC_WAVE_POL1|macro|TCC_WAVE_POL1
DECL|TCC_WAVE_POL2_Pos|macro|TCC_WAVE_POL2_Pos
DECL|TCC_WAVE_POL2|macro|TCC_WAVE_POL2
DECL|TCC_WAVE_POL3_Pos|macro|TCC_WAVE_POL3_Pos
DECL|TCC_WAVE_POL3|macro|TCC_WAVE_POL3
DECL|TCC_WAVE_POL_Msk|macro|TCC_WAVE_POL_Msk
DECL|TCC_WAVE_POL_Pos|macro|TCC_WAVE_POL_Pos
DECL|TCC_WAVE_POL|macro|TCC_WAVE_POL
DECL|TCC_WAVE_RAMP_Msk|macro|TCC_WAVE_RAMP_Msk
DECL|TCC_WAVE_RAMP_Pos|macro|TCC_WAVE_RAMP_Pos
DECL|TCC_WAVE_RAMP_RAMP1_Val|macro|TCC_WAVE_RAMP_RAMP1_Val
DECL|TCC_WAVE_RAMP_RAMP1|macro|TCC_WAVE_RAMP_RAMP1
DECL|TCC_WAVE_RAMP_RAMP2A_Val|macro|TCC_WAVE_RAMP_RAMP2A_Val
DECL|TCC_WAVE_RAMP_RAMP2A|macro|TCC_WAVE_RAMP_RAMP2A
DECL|TCC_WAVE_RAMP_RAMP2_Val|macro|TCC_WAVE_RAMP_RAMP2_Val
DECL|TCC_WAVE_RAMP_RAMP2|macro|TCC_WAVE_RAMP_RAMP2
DECL|TCC_WAVE_RAMP|macro|TCC_WAVE_RAMP
DECL|TCC_WAVE_RESETVALUE|macro|TCC_WAVE_RESETVALUE
DECL|TCC_WAVE_SWAP0_Pos|macro|TCC_WAVE_SWAP0_Pos
DECL|TCC_WAVE_SWAP0|macro|TCC_WAVE_SWAP0
DECL|TCC_WAVE_SWAP1_Pos|macro|TCC_WAVE_SWAP1_Pos
DECL|TCC_WAVE_SWAP1|macro|TCC_WAVE_SWAP1
DECL|TCC_WAVE_SWAP2_Pos|macro|TCC_WAVE_SWAP2_Pos
DECL|TCC_WAVE_SWAP2|macro|TCC_WAVE_SWAP2
DECL|TCC_WAVE_SWAP3_Pos|macro|TCC_WAVE_SWAP3_Pos
DECL|TCC_WAVE_SWAP3|macro|TCC_WAVE_SWAP3
DECL|TCC_WAVE_SWAP_Msk|macro|TCC_WAVE_SWAP_Msk
DECL|TCC_WAVE_SWAP_Pos|macro|TCC_WAVE_SWAP_Pos
DECL|TCC_WAVE_SWAP|macro|TCC_WAVE_SWAP
DECL|TCC_WAVE_Type|typedef|} TCC_WAVE_Type;
DECL|TCC_WAVE_WAVEGEN_DSBOTH_Val|macro|TCC_WAVE_WAVEGEN_DSBOTH_Val
DECL|TCC_WAVE_WAVEGEN_DSBOTH|macro|TCC_WAVE_WAVEGEN_DSBOTH
DECL|TCC_WAVE_WAVEGEN_DSBOTTOM_Val|macro|TCC_WAVE_WAVEGEN_DSBOTTOM_Val
DECL|TCC_WAVE_WAVEGEN_DSBOTTOM|macro|TCC_WAVE_WAVEGEN_DSBOTTOM
DECL|TCC_WAVE_WAVEGEN_DSCRITICAL_Val|macro|TCC_WAVE_WAVEGEN_DSCRITICAL_Val
DECL|TCC_WAVE_WAVEGEN_DSCRITICAL|macro|TCC_WAVE_WAVEGEN_DSCRITICAL
DECL|TCC_WAVE_WAVEGEN_DSTOP_Val|macro|TCC_WAVE_WAVEGEN_DSTOP_Val
DECL|TCC_WAVE_WAVEGEN_DSTOP|macro|TCC_WAVE_WAVEGEN_DSTOP
DECL|TCC_WAVE_WAVEGEN_MFRQ_Val|macro|TCC_WAVE_WAVEGEN_MFRQ_Val
DECL|TCC_WAVE_WAVEGEN_MFRQ|macro|TCC_WAVE_WAVEGEN_MFRQ
DECL|TCC_WAVE_WAVEGEN_Msk|macro|TCC_WAVE_WAVEGEN_Msk
DECL|TCC_WAVE_WAVEGEN_NFRQ_Val|macro|TCC_WAVE_WAVEGEN_NFRQ_Val
DECL|TCC_WAVE_WAVEGEN_NFRQ|macro|TCC_WAVE_WAVEGEN_NFRQ
DECL|TCC_WAVE_WAVEGEN_NPWM_Val|macro|TCC_WAVE_WAVEGEN_NPWM_Val
DECL|TCC_WAVE_WAVEGEN_NPWM|macro|TCC_WAVE_WAVEGEN_NPWM
DECL|TCC_WAVE_WAVEGEN_Pos|macro|TCC_WAVE_WAVEGEN_Pos
DECL|TCC_WAVE_WAVEGEN|macro|TCC_WAVE_WAVEGEN
DECL|TCC_WEXCTRL_DTHS_Msk|macro|TCC_WEXCTRL_DTHS_Msk
DECL|TCC_WEXCTRL_DTHS_Pos|macro|TCC_WEXCTRL_DTHS_Pos
DECL|TCC_WEXCTRL_DTHS|macro|TCC_WEXCTRL_DTHS
DECL|TCC_WEXCTRL_DTIEN0_Pos|macro|TCC_WEXCTRL_DTIEN0_Pos
DECL|TCC_WEXCTRL_DTIEN0|macro|TCC_WEXCTRL_DTIEN0
DECL|TCC_WEXCTRL_DTIEN1_Pos|macro|TCC_WEXCTRL_DTIEN1_Pos
DECL|TCC_WEXCTRL_DTIEN1|macro|TCC_WEXCTRL_DTIEN1
DECL|TCC_WEXCTRL_DTIEN2_Pos|macro|TCC_WEXCTRL_DTIEN2_Pos
DECL|TCC_WEXCTRL_DTIEN2|macro|TCC_WEXCTRL_DTIEN2
DECL|TCC_WEXCTRL_DTIEN3_Pos|macro|TCC_WEXCTRL_DTIEN3_Pos
DECL|TCC_WEXCTRL_DTIEN3|macro|TCC_WEXCTRL_DTIEN3
DECL|TCC_WEXCTRL_DTIEN_Msk|macro|TCC_WEXCTRL_DTIEN_Msk
DECL|TCC_WEXCTRL_DTIEN_Pos|macro|TCC_WEXCTRL_DTIEN_Pos
DECL|TCC_WEXCTRL_DTIEN|macro|TCC_WEXCTRL_DTIEN
DECL|TCC_WEXCTRL_DTLS_Msk|macro|TCC_WEXCTRL_DTLS_Msk
DECL|TCC_WEXCTRL_DTLS_Pos|macro|TCC_WEXCTRL_DTLS_Pos
DECL|TCC_WEXCTRL_DTLS|macro|TCC_WEXCTRL_DTLS
DECL|TCC_WEXCTRL_MASK|macro|TCC_WEXCTRL_MASK
DECL|TCC_WEXCTRL_OFFSET|macro|TCC_WEXCTRL_OFFSET
DECL|TCC_WEXCTRL_OTMX_Msk|macro|TCC_WEXCTRL_OTMX_Msk
DECL|TCC_WEXCTRL_OTMX_Pos|macro|TCC_WEXCTRL_OTMX_Pos
DECL|TCC_WEXCTRL_OTMX|macro|TCC_WEXCTRL_OTMX
DECL|TCC_WEXCTRL_RESETVALUE|macro|TCC_WEXCTRL_RESETVALUE
DECL|TCC_WEXCTRL_Type|typedef|} TCC_WEXCTRL_Type;
DECL|TCEI0|member|uint32_t TCEI0:1; /*!< bit: 14 Timer/counter Event 0 Input Enable */
DECL|TCEI1|member|uint32_t TCEI1:1; /*!< bit: 15 Timer/counter Event 1 Input Enable */
DECL|TCEI|member|uint32_t TCEI:2; /*!< bit: 14..15 Timer/counter Event x Input Enable */
DECL|TCINV0|member|uint32_t TCINV0:1; /*!< bit: 12 Inverted Event 0 Input Enable */
DECL|TCINV1|member|uint32_t TCINV1:1; /*!< bit: 13 Inverted Event 1 Input Enable */
DECL|TCINV|member|uint32_t TCINV:2; /*!< bit: 12..13 Inverted Event x Input Enable */
DECL|TRGEO|member|uint32_t TRGEO:1; /*!< bit: 9 Retrigger Output Event Enable */
DECL|TRG|member|__I uint32_t TRG:1; /*!< bit: 1 Retrigger */
DECL|TRG|member|uint32_t TRG:1; /*!< bit: 1 Retrigger Interrupt Enable */
DECL|TRG|member|uint32_t TRG:1; /*!< bit: 1 Retrigger Interrupt Enable */
DECL|Tcc|typedef|} Tcc;
DECL|WAVEBV|member|uint32_t WAVEBV:1; /*!< bit: 6 Wave Buffer Valid */
DECL|WAVEB|member|__IO TCC_WAVEB_Type WAVEB; /**< \brief Offset: 0x68 (R/W 32) Waveform Control Buffer */
DECL|WAVEB|member|uint32_t WAVEB:1; /*!< bit: 17 Wave Buffer Busy */
DECL|WAVEGENB|member|uint32_t WAVEGENB:3; /*!< bit: 0.. 2 Waveform Generation Buffer */
DECL|WAVEGEN|member|uint32_t WAVEGEN:3; /*!< bit: 0.. 2 Waveform Generation */
DECL|WAVE|member|__IO TCC_WAVE_Type WAVE; /**< \brief Offset: 0x3C (R/W 32) Waveform Control */
DECL|WAVE|member|uint32_t WAVE:1; /*!< bit: 6 Wave Busy */
DECL|WEXCTRL|member|__IO TCC_WEXCTRL_Type WEXCTRL; /**< \brief Offset: 0x14 (R/W 32) Waveform Extension Configuration */
DECL|_SAMD21_TCC_COMPONENT_|macro|_SAMD21_TCC_COMPONENT_
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
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|uint32_t|member|__I uint32_t :12; /*!< bit: 20..31 Reserved */
DECL|uint32_t|member|__I uint32_t :12; /*!< bit: 20..31 Reserved */
DECL|uint32_t|member|__I uint32_t :16; /*!< bit: 0..15 Reserved */
DECL|uint32_t|member|__I uint32_t :7; /*!< bit: 4..10 Reserved */
DECL|uint32_t|member|uint32_t :12; /*!< bit: 0..11 Reserved */
DECL|uint32_t|member|uint32_t :12; /*!< bit: 20..31 Reserved */
DECL|uint32_t|member|uint32_t :12; /*!< bit: 20..31 Reserved */
DECL|uint32_t|member|uint32_t :12; /*!< bit: 20..31 Reserved */
DECL|uint32_t|member|uint32_t :12; /*!< bit: 20..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /*!< bit: 0..15 Reserved */
DECL|uint32_t|member|uint32_t :16; /*!< bit: 0..15 Reserved */
DECL|uint32_t|member|uint32_t :16; /*!< bit: 0..15 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 11 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 2 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 2 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 2 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 3 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 3 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 6 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 6 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :20; /*!< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /*!< bit: 0..23 Reserved */
DECL|uint32_t|member|uint32_t :3; /*!< bit: 2.. 4 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 0.. 3 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :5; /*!< bit: 0.. 4 Reserved */
DECL|uint32_t|member|uint32_t :6; /*!< bit: 0.. 5 Reserved */
DECL|uint32_t|member|uint32_t :6; /*!< bit: 2.. 7 Reserved */
DECL|uint32_t|member|uint32_t :7; /*!< bit: 12..18 Reserved */
DECL|uint32_t|member|uint32_t :7; /*!< bit: 4..10 Reserved */
DECL|uint32_t|member|uint32_t :7; /*!< bit: 4..10 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 0.. 7 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 0.. 7 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 0.. 7 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 0.. 7 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /*!< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :9; /*!< bit: 15..23 Reserved */
DECL|uint32_t|member|uint32_t :9; /*!< bit: 23..31 Reserved */
DECL|uint32_t|member|uint32_t :9; /*!< bit: 23..31 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 1 Reserved */
DECL|uint8_t|member|uint8_t :5; /*!< bit: 3.. 7 Reserved */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
