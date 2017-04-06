DECL|CSEN_AccMode_TypeDef|typedef|} CSEN_AccMode_TypeDef;
DECL|CSEN_CmpMode_TypeDef|typedef|} CSEN_CmpMode_TypeDef;
DECL|CSEN_ConvSel_TypeDef|typedef|} CSEN_ConvSel_TypeDef;
DECL|CSEN_DMRes_TypeDef|typedef|} CSEN_DMRes_TypeDef;
DECL|CSEN_DataGet|function|__STATIC_INLINE uint32_t CSEN_DataGet(CSEN_TypeDef *csen)
DECL|CSEN_Disable|function|__STATIC_INLINE void CSEN_Disable(CSEN_TypeDef *csen)
DECL|CSEN_DriveSel_TypeDef|typedef|} CSEN_DriveSel_TypeDef;
DECL|CSEN_EMAGet|function|__STATIC_INLINE uint32_t CSEN_EMAGet(CSEN_TypeDef *csen)
DECL|CSEN_EMASample_TypeDef|typedef|} CSEN_EMASample_TypeDef;
DECL|CSEN_EMASet|function|__STATIC_INLINE void CSEN_EMASet(CSEN_TypeDef *csen, uint32_t ema)
DECL|CSEN_Enable|function|__STATIC_INLINE void CSEN_Enable(CSEN_TypeDef *csen)
DECL|CSEN_GainSel_TypeDef|typedef|} CSEN_GainSel_TypeDef;
DECL|CSEN_INITMODE_DEFAULT|macro|CSEN_INITMODE_DEFAULT
DECL|CSEN_INIT_DEFAULT|macro|CSEN_INIT_DEFAULT
DECL|CSEN_InitMode_TypeDef|typedef|} CSEN_InitMode_TypeDef;
DECL|CSEN_Init_TypeDef|typedef|} CSEN_Init_TypeDef;
DECL|CSEN_InputSel_TypeDef|typedef|} CSEN_InputSel_TypeDef;
DECL|CSEN_IntClear|function|__STATIC_INLINE void CSEN_IntClear(CSEN_TypeDef *csen, uint32_t flags)
DECL|CSEN_IntDisable|function|__STATIC_INLINE void CSEN_IntDisable(CSEN_TypeDef *csen, uint32_t flags)
DECL|CSEN_IntEnable|function|__STATIC_INLINE void CSEN_IntEnable(CSEN_TypeDef *csen, uint32_t flags)
DECL|CSEN_IntGetEnabled|function|__STATIC_INLINE uint32_t CSEN_IntGetEnabled(CSEN_TypeDef *csen)
DECL|CSEN_IntGet|function|__STATIC_INLINE uint32_t CSEN_IntGet(CSEN_TypeDef *csen)
DECL|CSEN_IntSet|function|__STATIC_INLINE void CSEN_IntSet(CSEN_TypeDef *csen, uint32_t flags)
DECL|CSEN_IsBusy|function|__STATIC_INLINE bool CSEN_IsBusy(CSEN_TypeDef *csen)
DECL|CSEN_PCPrescale_TypeDef|typedef|} CSEN_PCPrescale_TypeDef;
DECL|CSEN_PRSSel_TypeDef|typedef|} CSEN_PRSSel_TypeDef;
DECL|CSEN_ResetPhaseSel_TypeDef|typedef|} CSEN_ResetPhaseSel_TypeDef;
DECL|CSEN_SARRes_TypeDef|typedef|} CSEN_SARRes_TypeDef;
DECL|CSEN_SampleMode_TypeDef|typedef|} CSEN_SampleMode_TypeDef;
DECL|CSEN_SingleSel_TypeDef|typedef|} CSEN_SingleSel_TypeDef;
DECL|CSEN_Start|function|__STATIC_INLINE void CSEN_Start(CSEN_TypeDef *csen)
DECL|CSEN_TrigSel_TypeDef|typedef|} CSEN_TrigSel_TypeDef;
DECL|EM_CSEN_H|macro|EM_CSEN_H
DECL|accMode|member|CSEN_AccMode_TypeDef accMode;
DECL|autoGnd|member|bool autoGnd;
DECL|cmpMode|member|CSEN_CmpMode_TypeDef cmpMode;
DECL|cmpThr|member|uint16_t cmpThr;
DECL|convSel|member|CSEN_ConvSel_TypeDef convSel;
DECL|cpAccuracyHi|member|bool cpAccuracyHi;
DECL|csenAccMode16|enumerator|csenAccMode16 = _CSEN_CTRL_ACU_ACC16, /**< Accumulate 16 samples. */
DECL|csenAccMode1|enumerator|csenAccMode1 = _CSEN_CTRL_ACU_ACC1, /**< Accumulate 1 sample. */
DECL|csenAccMode2|enumerator|csenAccMode2 = _CSEN_CTRL_ACU_ACC2, /**< Accumulate 2 samples. */
DECL|csenAccMode32|enumerator|csenAccMode32 = _CSEN_CTRL_ACU_ACC32, /**< Accumulate 32 samples. */
DECL|csenAccMode4|enumerator|csenAccMode4 = _CSEN_CTRL_ACU_ACC4, /**< Accumulate 4 samples. */
DECL|csenAccMode64|enumerator|csenAccMode64 = _CSEN_CTRL_ACU_ACC64, /**< Accumulate 64 samples. */
DECL|csenAccMode8|enumerator|csenAccMode8 = _CSEN_CTRL_ACU_ACC8, /**< Accumulate 8 samples. */
DECL|csenCmpModeDisabled|enumerator|csenCmpModeDisabled = 0,
DECL|csenCmpModeEMAWindow|enumerator|csenCmpModeEMAWindow = CSEN_CTRL_EMACMPEN,
DECL|csenCmpModeGreater|enumerator|csenCmpModeGreater = CSEN_CTRL_CMPEN | CSEN_CTRL_CMPPOL_GT,
DECL|csenCmpModeLessOrEqual|enumerator|csenCmpModeLessOrEqual = CSEN_CTRL_CMPEN | CSEN_CTRL_CMPPOL_LTE,
DECL|csenConvSelDMChop|enumerator|csenConvSelDMChop = CSEN_CTRL_CONVSEL_DM | CSEN_CTRL_CHOPEN_ENABLE,
DECL|csenConvSelDM|enumerator|csenConvSelDM = CSEN_CTRL_CONVSEL_DM,
DECL|csenConvSelSARChop|enumerator|csenConvSelSARChop = CSEN_CTRL_CONVSEL_SAR | CSEN_CTRL_CHOPEN_ENABLE,
DECL|csenConvSelSAR|enumerator|csenConvSelSAR = CSEN_CTRL_CONVSEL_SAR,
DECL|csenDMRes10|enumerator|csenDMRes10 = _CSEN_DMCFG_CRMODE_DM10, /**< 10-bit resolution. */
DECL|csenDMRes12|enumerator|csenDMRes12 = _CSEN_DMCFG_CRMODE_DM12, /**< 12-bit resolution. */
DECL|csenDMRes14|enumerator|csenDMRes14 = _CSEN_DMCFG_CRMODE_DM14, /**< 14-bit resolution. */
DECL|csenDMRes16|enumerator|csenDMRes16 = _CSEN_DMCFG_CRMODE_DM16, /**< 16-bit resolution. */
DECL|csenDriveSel1|enumerator|csenDriveSel1 = 1, /**< Drive strength = 1/8 full scale. */
DECL|csenDriveSel2|enumerator|csenDriveSel2 = 2, /**< Drive strength = 1/4 full scale. */
DECL|csenDriveSel3|enumerator|csenDriveSel3 = 3, /**< Drive strength = 3/8 full scale. */
DECL|csenDriveSel4|enumerator|csenDriveSel4 = 4, /**< Drive strength = 1/2 full scale. */
DECL|csenDriveSel5|enumerator|csenDriveSel5 = 5, /**< Drive strength = 5/8 full scale. */
DECL|csenDriveSel6|enumerator|csenDriveSel6 = 6, /**< Drive strength = 3/4 full scale. */
DECL|csenDriveSel7|enumerator|csenDriveSel7 = 7, /**< Drive strength = 7/8 full scale. */
DECL|csenDriveSelFull|enumerator|csenDriveSelFull = 0, /**< Drive strength = fully on. */
DECL|csenEMASampleW16|enumerator|csenEMASampleW16 = _CSEN_EMACTRL_EMASAMPLE_W16, /**< Weight 16. */
DECL|csenEMASampleW1|enumerator|csenEMASampleW1 = _CSEN_EMACTRL_EMASAMPLE_W1, /**< Weight 1. */
DECL|csenEMASampleW2|enumerator|csenEMASampleW2 = _CSEN_EMACTRL_EMASAMPLE_W2, /**< Weight 2. */
DECL|csenEMASampleW32|enumerator|csenEMASampleW32 = _CSEN_EMACTRL_EMASAMPLE_W32, /**< Weight 32. */
DECL|csenEMASampleW4|enumerator|csenEMASampleW4 = _CSEN_EMACTRL_EMASAMPLE_W4, /**< Weight 4. */
DECL|csenEMASampleW64|enumerator|csenEMASampleW64 = _CSEN_EMACTRL_EMASAMPLE_W64, /**< Weight 64. */
DECL|csenEMASampleW8|enumerator|csenEMASampleW8 = _CSEN_EMACTRL_EMASAMPLE_W8, /**< Weight 8. */
DECL|csenGainSel1X|enumerator|csenGainSel1X = 0, /**< Gain = 1x. */
DECL|csenGainSel2X|enumerator|csenGainSel2X = 1, /**< Gain = 2x. */
DECL|csenGainSel3X|enumerator|csenGainSel3X = 2, /**< Gain = 3x. */
DECL|csenGainSel4X|enumerator|csenGainSel4X = 3, /**< Gain = 4x. */
DECL|csenGainSel5X|enumerator|csenGainSel5X = 4, /**< Gain = 5x. */
DECL|csenGainSel6X|enumerator|csenGainSel6X = 5, /**< Gain = 6x. */
DECL|csenGainSel7X|enumerator|csenGainSel7X = 6, /**< Gain = 7x. */
DECL|csenGainSel8X|enumerator|csenGainSel8X = 7, /**< Gain = 8x. */
DECL|csenInputSelAPORT1CH0TO7|enumerator|csenInputSelAPORT1CH0TO7 = _CSEN_SCANINPUTSEL0_INPUT0TO7SEL_APORT1CH0TO7,
DECL|csenInputSelAPORT1CH16TO23|enumerator|csenInputSelAPORT1CH16TO23 = _CSEN_SCANINPUTSEL0_INPUT0TO7SEL_APORT1CH16TO23,
DECL|csenInputSelAPORT1CH24TO31|enumerator|csenInputSelAPORT1CH24TO31 = _CSEN_SCANINPUTSEL0_INPUT0TO7SEL_APORT1CH24TO31,
DECL|csenInputSelAPORT1CH8TO15|enumerator|csenInputSelAPORT1CH8TO15 = _CSEN_SCANINPUTSEL0_INPUT0TO7SEL_APORT1CH8TO15,
DECL|csenInputSelAPORT3CH0TO7|enumerator|csenInputSelAPORT3CH0TO7 = _CSEN_SCANINPUTSEL0_INPUT0TO7SEL_APORT3CH0TO7,
DECL|csenInputSelAPORT3CH16TO23|enumerator|csenInputSelAPORT3CH16TO23 = _CSEN_SCANINPUTSEL0_INPUT0TO7SEL_APORT3CH16TO23,
DECL|csenInputSelAPORT3CH24TO31|enumerator|csenInputSelAPORT3CH24TO31 = _CSEN_SCANINPUTSEL0_INPUT0TO7SEL_APORT3CH24TO31,
DECL|csenInputSelAPORT3CH8TO15|enumerator|csenInputSelAPORT3CH8TO15 = _CSEN_SCANINPUTSEL0_INPUT0TO7SEL_APORT3CH8TO15,
DECL|csenInputSelDefault|enumerator|csenInputSelDefault = _CSEN_SCANINPUTSEL0_INPUT0TO7SEL_DEFAULT,
DECL|csenPCPrescaleDiv128|enumerator|csenPCPrescaleDiv128 = _CSEN_TIMCTRL_PCPRESC_DIV128, /**< Divide by 128. */
DECL|csenPCPrescaleDiv16|enumerator|csenPCPrescaleDiv16 = _CSEN_TIMCTRL_PCPRESC_DIV16, /**< Divide by 16. */
DECL|csenPCPrescaleDiv1|enumerator|csenPCPrescaleDiv1 = _CSEN_TIMCTRL_PCPRESC_DIV1, /**< Divide by 1. */
DECL|csenPCPrescaleDiv2|enumerator|csenPCPrescaleDiv2 = _CSEN_TIMCTRL_PCPRESC_DIV2, /**< Divide by 2. */
DECL|csenPCPrescaleDiv32|enumerator|csenPCPrescaleDiv32 = _CSEN_TIMCTRL_PCPRESC_DIV32, /**< Divide by 32. */
DECL|csenPCPrescaleDiv4|enumerator|csenPCPrescaleDiv4 = _CSEN_TIMCTRL_PCPRESC_DIV4, /**< Divide by 4. */
DECL|csenPCPrescaleDiv64|enumerator|csenPCPrescaleDiv64 = _CSEN_TIMCTRL_PCPRESC_DIV64, /**< Divide by 64. */
DECL|csenPCPrescaleDiv8|enumerator|csenPCPrescaleDiv8 = _CSEN_TIMCTRL_PCPRESC_DIV8, /**< Divide by 8. */
DECL|csenPRSSELCh0|enumerator|csenPRSSELCh0 = _CSEN_PRSSEL_PRSSEL_PRSCH0, /**< PRS channel 0. */
DECL|csenPRSSELCh10|enumerator|csenPRSSELCh10 = _CSEN_PRSSEL_PRSSEL_PRSCH10, /**< PRS channel 10. */
DECL|csenPRSSELCh11|enumerator|csenPRSSELCh11 = _CSEN_PRSSEL_PRSSEL_PRSCH11, /**< PRS channel 11. */
DECL|csenPRSSELCh1|enumerator|csenPRSSELCh1 = _CSEN_PRSSEL_PRSSEL_PRSCH1, /**< PRS channel 1. */
DECL|csenPRSSELCh2|enumerator|csenPRSSELCh2 = _CSEN_PRSSEL_PRSSEL_PRSCH2, /**< PRS channel 2. */
DECL|csenPRSSELCh3|enumerator|csenPRSSELCh3 = _CSEN_PRSSEL_PRSSEL_PRSCH3, /**< PRS channel 3. */
DECL|csenPRSSELCh4|enumerator|csenPRSSELCh4 = _CSEN_PRSSEL_PRSSEL_PRSCH4, /**< PRS channel 4. */
DECL|csenPRSSELCh5|enumerator|csenPRSSELCh5 = _CSEN_PRSSEL_PRSSEL_PRSCH5, /**< PRS channel 5. */
DECL|csenPRSSELCh6|enumerator|csenPRSSELCh6 = _CSEN_PRSSEL_PRSSEL_PRSCH6, /**< PRS channel 6. */
DECL|csenPRSSELCh7|enumerator|csenPRSSELCh7 = _CSEN_PRSSEL_PRSSEL_PRSCH7, /**< PRS channel 7. */
DECL|csenPRSSELCh8|enumerator|csenPRSSELCh8 = _CSEN_PRSSEL_PRSSEL_PRSCH8, /**< PRS channel 8. */
DECL|csenPRSSELCh9|enumerator|csenPRSSELCh9 = _CSEN_PRSSEL_PRSSEL_PRSCH9, /**< PRS channel 9. */
DECL|csenResetPhaseSel0|enumerator|csenResetPhaseSel0 = 0, /**< Reset phase time = 0.75 usec. */
DECL|csenResetPhaseSel1|enumerator|csenResetPhaseSel1 = 1, /**< Reset phase time = 1.00 usec. */
DECL|csenResetPhaseSel2|enumerator|csenResetPhaseSel2 = 2, /**< Reset phase time = 1.20 usec. */
DECL|csenResetPhaseSel3|enumerator|csenResetPhaseSel3 = 3, /**< Reset phase time = 1.50 usec. */
DECL|csenResetPhaseSel4|enumerator|csenResetPhaseSel4 = 4, /**< Reset phase time = 2.00 usec. */
DECL|csenResetPhaseSel5|enumerator|csenResetPhaseSel5 = 5, /**< Reset phase time = 3.00 usec. */
DECL|csenResetPhaseSel6|enumerator|csenResetPhaseSel6 = 6, /**< Reset phase time = 6.00 usec. */
DECL|csenResetPhaseSel7|enumerator|csenResetPhaseSel7 = 7, /**< Reset phase time = 12.0 usec. */
DECL|csenSARRes10|enumerator|csenSARRes10 = _CSEN_CTRL_SARCR_CLK10, /**< 10-bit resolution. */
DECL|csenSARRes12|enumerator|csenSARRes12 = _CSEN_CTRL_SARCR_CLK12, /**< 12-bit resolution. */
DECL|csenSARRes14|enumerator|csenSARRes14 = _CSEN_CTRL_SARCR_CLK14, /**< 14-bit resolution. */
DECL|csenSARRes16|enumerator|csenSARRes16 = _CSEN_CTRL_SARCR_CLK16, /**< 16-bit resolution. */
DECL|csenSampleModeBonded|enumerator|csenSampleModeBonded = CSEN_CTRL_CM_SGL | CSEN_CTRL_MCEN_ENABLE,
DECL|csenSampleModeContBonded|enumerator|csenSampleModeContBonded = CSEN_CTRL_CM_CONTSGL | CSEN_CTRL_MCEN_ENABLE,
DECL|csenSampleModeContScan|enumerator|csenSampleModeContScan = CSEN_CTRL_CM_CONTSCAN,
DECL|csenSampleModeContSingle|enumerator|csenSampleModeContSingle = CSEN_CTRL_CM_CONTSGL,
DECL|csenSampleModeScan|enumerator|csenSampleModeScan = CSEN_CTRL_CM_SCAN,
DECL|csenSampleModeSingle|enumerator|csenSampleModeSingle = CSEN_CTRL_CM_SGL,
DECL|csenSingleSelAPORT1XCH0|enumerator|csenSingleSelAPORT1XCH0 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH0,
DECL|csenSingleSelAPORT1XCH10|enumerator|csenSingleSelAPORT1XCH10 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH10,
DECL|csenSingleSelAPORT1XCH12|enumerator|csenSingleSelAPORT1XCH12 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH12,
DECL|csenSingleSelAPORT1XCH14|enumerator|csenSingleSelAPORT1XCH14 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH14,
DECL|csenSingleSelAPORT1XCH16|enumerator|csenSingleSelAPORT1XCH16 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH16,
DECL|csenSingleSelAPORT1XCH18|enumerator|csenSingleSelAPORT1XCH18 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH18,
DECL|csenSingleSelAPORT1XCH20|enumerator|csenSingleSelAPORT1XCH20 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH20,
DECL|csenSingleSelAPORT1XCH22|enumerator|csenSingleSelAPORT1XCH22 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH22,
DECL|csenSingleSelAPORT1XCH24|enumerator|csenSingleSelAPORT1XCH24 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH24,
DECL|csenSingleSelAPORT1XCH26|enumerator|csenSingleSelAPORT1XCH26 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH26,
DECL|csenSingleSelAPORT1XCH28|enumerator|csenSingleSelAPORT1XCH28 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH28,
DECL|csenSingleSelAPORT1XCH2|enumerator|csenSingleSelAPORT1XCH2 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH2,
DECL|csenSingleSelAPORT1XCH30|enumerator|csenSingleSelAPORT1XCH30 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH30,
DECL|csenSingleSelAPORT1XCH4|enumerator|csenSingleSelAPORT1XCH4 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH4,
DECL|csenSingleSelAPORT1XCH6|enumerator|csenSingleSelAPORT1XCH6 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH6,
DECL|csenSingleSelAPORT1XCH8|enumerator|csenSingleSelAPORT1XCH8 = _CSEN_SINGLECTRL_SINGLESEL_APORT1XCH8,
DECL|csenSingleSelAPORT1YCH11|enumerator|csenSingleSelAPORT1YCH11 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH11,
DECL|csenSingleSelAPORT1YCH13|enumerator|csenSingleSelAPORT1YCH13 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH13,
DECL|csenSingleSelAPORT1YCH15|enumerator|csenSingleSelAPORT1YCH15 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH15,
DECL|csenSingleSelAPORT1YCH17|enumerator|csenSingleSelAPORT1YCH17 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH17,
DECL|csenSingleSelAPORT1YCH19|enumerator|csenSingleSelAPORT1YCH19 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH19,
DECL|csenSingleSelAPORT1YCH1|enumerator|csenSingleSelAPORT1YCH1 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH1,
DECL|csenSingleSelAPORT1YCH21|enumerator|csenSingleSelAPORT1YCH21 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH21,
DECL|csenSingleSelAPORT1YCH23|enumerator|csenSingleSelAPORT1YCH23 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH23,
DECL|csenSingleSelAPORT1YCH25|enumerator|csenSingleSelAPORT1YCH25 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH25,
DECL|csenSingleSelAPORT1YCH27|enumerator|csenSingleSelAPORT1YCH27 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH27,
DECL|csenSingleSelAPORT1YCH29|enumerator|csenSingleSelAPORT1YCH29 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH29,
DECL|csenSingleSelAPORT1YCH31|enumerator|csenSingleSelAPORT1YCH31 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH31,
DECL|csenSingleSelAPORT1YCH3|enumerator|csenSingleSelAPORT1YCH3 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH3,
DECL|csenSingleSelAPORT1YCH5|enumerator|csenSingleSelAPORT1YCH5 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH5,
DECL|csenSingleSelAPORT1YCH7|enumerator|csenSingleSelAPORT1YCH7 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH7,
DECL|csenSingleSelAPORT1YCH9|enumerator|csenSingleSelAPORT1YCH9 = _CSEN_SINGLECTRL_SINGLESEL_APORT1YCH9,
DECL|csenSingleSelAPORT3XCH0|enumerator|csenSingleSelAPORT3XCH0 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH0,
DECL|csenSingleSelAPORT3XCH10|enumerator|csenSingleSelAPORT3XCH10 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH10,
DECL|csenSingleSelAPORT3XCH12|enumerator|csenSingleSelAPORT3XCH12 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH12,
DECL|csenSingleSelAPORT3XCH14|enumerator|csenSingleSelAPORT3XCH14 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH14,
DECL|csenSingleSelAPORT3XCH16|enumerator|csenSingleSelAPORT3XCH16 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH16,
DECL|csenSingleSelAPORT3XCH18|enumerator|csenSingleSelAPORT3XCH18 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH18,
DECL|csenSingleSelAPORT3XCH20|enumerator|csenSingleSelAPORT3XCH20 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH20,
DECL|csenSingleSelAPORT3XCH22|enumerator|csenSingleSelAPORT3XCH22 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH22,
DECL|csenSingleSelAPORT3XCH24|enumerator|csenSingleSelAPORT3XCH24 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH24,
DECL|csenSingleSelAPORT3XCH26|enumerator|csenSingleSelAPORT3XCH26 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH26,
DECL|csenSingleSelAPORT3XCH28|enumerator|csenSingleSelAPORT3XCH28 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH28,
DECL|csenSingleSelAPORT3XCH2|enumerator|csenSingleSelAPORT3XCH2 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH2,
DECL|csenSingleSelAPORT3XCH30|enumerator|csenSingleSelAPORT3XCH30 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH30,
DECL|csenSingleSelAPORT3XCH4|enumerator|csenSingleSelAPORT3XCH4 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH4,
DECL|csenSingleSelAPORT3XCH6|enumerator|csenSingleSelAPORT3XCH6 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH6,
DECL|csenSingleSelAPORT3XCH8|enumerator|csenSingleSelAPORT3XCH8 = _CSEN_SINGLECTRL_SINGLESEL_APORT3XCH8,
DECL|csenSingleSelAPORT3YCH11|enumerator|csenSingleSelAPORT3YCH11 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH11,
DECL|csenSingleSelAPORT3YCH13|enumerator|csenSingleSelAPORT3YCH13 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH13,
DECL|csenSingleSelAPORT3YCH15|enumerator|csenSingleSelAPORT3YCH15 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH15,
DECL|csenSingleSelAPORT3YCH17|enumerator|csenSingleSelAPORT3YCH17 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH17,
DECL|csenSingleSelAPORT3YCH19|enumerator|csenSingleSelAPORT3YCH19 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH19,
DECL|csenSingleSelAPORT3YCH1|enumerator|csenSingleSelAPORT3YCH1 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH1,
DECL|csenSingleSelAPORT3YCH21|enumerator|csenSingleSelAPORT3YCH21 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH21,
DECL|csenSingleSelAPORT3YCH23|enumerator|csenSingleSelAPORT3YCH23 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH23,
DECL|csenSingleSelAPORT3YCH25|enumerator|csenSingleSelAPORT3YCH25 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH25,
DECL|csenSingleSelAPORT3YCH27|enumerator|csenSingleSelAPORT3YCH27 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH27,
DECL|csenSingleSelAPORT3YCH29|enumerator|csenSingleSelAPORT3YCH29 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH29,
DECL|csenSingleSelAPORT3YCH31|enumerator|csenSingleSelAPORT3YCH31 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH31,
DECL|csenSingleSelAPORT3YCH3|enumerator|csenSingleSelAPORT3YCH3 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH3,
DECL|csenSingleSelAPORT3YCH5|enumerator|csenSingleSelAPORT3YCH5 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH5,
DECL|csenSingleSelAPORT3YCH7|enumerator|csenSingleSelAPORT3YCH7 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH7,
DECL|csenSingleSelAPORT3YCH9|enumerator|csenSingleSelAPORT3YCH9 = _CSEN_SINGLECTRL_SINGLESEL_APORT3YCH9,
DECL|csenSingleSelDefault|enumerator|csenSingleSelDefault = _CSEN_SINGLECTRL_SINGLESEL_DEFAULT,
DECL|csenTrigSelPRS|enumerator|csenTrigSelPRS = _CSEN_CTRL_STM_PRS, /**< PRS system. */
DECL|csenTrigSelStart|enumerator|csenTrigSelStart = _CSEN_CTRL_STM_START, /**< Start bit. */
DECL|csenTrigSelTimer|enumerator|csenTrigSelTimer = _CSEN_CTRL_STM_TIMER, /**< CSEN PC timer. */
DECL|dmCycles|member|uint8_t dmCycles;
DECL|dmDelta|member|uint8_t dmDelta;
DECL|dmFixedDelta|member|bool dmFixedDelta;
DECL|dmIterPerCycle|member|uint8_t dmIterPerCycle;
DECL|dmRes|member|CSEN_DMRes_TypeDef dmRes;
DECL|driveSel|member|CSEN_DriveSel_TypeDef driveSel;
DECL|emaSample|member|CSEN_EMASample_TypeDef emaSample;
DECL|enableDma|member|bool enableDma;
DECL|gainSel|member|CSEN_GainSel_TypeDef gainSel;
DECL|input0To7|member|CSEN_InputSel_TypeDef input0To7;
DECL|input16To23|member|CSEN_InputSel_TypeDef input16To23;
DECL|input24To31|member|CSEN_InputSel_TypeDef input24To31;
DECL|input32To39|member|CSEN_InputSel_TypeDef input32To39;
DECL|input40To47|member|CSEN_InputSel_TypeDef input40To47;
DECL|input48To55|member|CSEN_InputSel_TypeDef input48To55;
DECL|input56To63|member|CSEN_InputSel_TypeDef input56To63;
DECL|input8To15|member|CSEN_InputSel_TypeDef input8To15;
DECL|inputMask0|member|uint32_t inputMask0;
DECL|inputMask1|member|uint32_t inputMask1;
DECL|keepWarm|member|bool keepWarm;
DECL|localSense|member|bool localSense;
DECL|pcPrescale|member|CSEN_PCPrescale_TypeDef pcPrescale;
DECL|pcReload|member|uint8_t pcReload;
DECL|prsSel|member|CSEN_PRSSel_TypeDef prsSel;
DECL|resetPhase|member|CSEN_ResetPhaseSel_TypeDef resetPhase;
DECL|sampleMode|member|CSEN_SampleMode_TypeDef sampleMode;
DECL|sarRes|member|CSEN_SARRes_TypeDef sarRes;
DECL|singleSel|member|CSEN_SingleSel_TypeDef singleSel;
DECL|sumOnly|member|bool sumOnly;
DECL|trigSel|member|CSEN_TrigSel_TypeDef trigSel;
DECL|warmUpCount|member|uint8_t warmUpCount;
