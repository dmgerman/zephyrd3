DECL|FunctionalMode|member|uint32_t FunctionalMode; /*!< Set OPAMP functional mode by setting internal connections: OPAMP operation in standalone, follower, ...
DECL|InputInverting|member|uint32_t InputInverting; /*!< Set OPAMP inverting input connection.
DECL|InputNonInverting|member|uint32_t InputNonInverting; /*!< Set OPAMP input non-inverting connection.
DECL|LL_OPAMP_DELAY_STARTUP_US|macro|LL_OPAMP_DELAY_STARTUP_US
DECL|LL_OPAMP_Disable|function|__STATIC_INLINE void LL_OPAMP_Disable(OPAMP_TypeDef *OPAMPx)
DECL|LL_OPAMP_Enable|function|__STATIC_INLINE void LL_OPAMP_Enable(OPAMP_TypeDef *OPAMPx)
DECL|LL_OPAMP_GetCalibrationSelection|function|__STATIC_INLINE uint32_t LL_OPAMP_GetCalibrationSelection(OPAMP_TypeDef *OPAMPx)
DECL|LL_OPAMP_GetCommonPowerRange|function|__STATIC_INLINE uint32_t LL_OPAMP_GetCommonPowerRange(OPAMP_Common_TypeDef *OPAMPxy_COMMON)
DECL|LL_OPAMP_GetFunctionalMode|function|__STATIC_INLINE uint32_t LL_OPAMP_GetFunctionalMode(OPAMP_TypeDef *OPAMPx)
DECL|LL_OPAMP_GetInputInverting|function|__STATIC_INLINE uint32_t LL_OPAMP_GetInputInverting(OPAMP_TypeDef *OPAMPx)
DECL|LL_OPAMP_GetInputNonInverting|function|__STATIC_INLINE uint32_t LL_OPAMP_GetInputNonInverting(OPAMP_TypeDef *OPAMPx)
DECL|LL_OPAMP_GetMode|function|__STATIC_INLINE uint32_t LL_OPAMP_GetMode(OPAMP_TypeDef *OPAMPx)
DECL|LL_OPAMP_GetPGAGain|function|__STATIC_INLINE uint32_t LL_OPAMP_GetPGAGain(OPAMP_TypeDef *OPAMPx)
DECL|LL_OPAMP_GetPowerMode|function|__STATIC_INLINE uint32_t LL_OPAMP_GetPowerMode(OPAMP_TypeDef *OPAMPx)
DECL|LL_OPAMP_GetTrimmingMode|function|__STATIC_INLINE uint32_t LL_OPAMP_GetTrimmingMode(OPAMP_TypeDef *OPAMPx)
DECL|LL_OPAMP_GetTrimmingValue|function|__STATIC_INLINE uint32_t LL_OPAMP_GetTrimmingValue(OPAMP_TypeDef* OPAMPx, uint32_t PowerMode, uint32_t TransistorsDiffPair)
DECL|LL_OPAMP_INPUT_INVERT_CONNECT_NO|macro|LL_OPAMP_INPUT_INVERT_CONNECT_NO
DECL|LL_OPAMP_INPUT_INVERT_IO0|macro|LL_OPAMP_INPUT_INVERT_IO0
DECL|LL_OPAMP_INPUT_INVERT_IO1|macro|LL_OPAMP_INPUT_INVERT_IO1
DECL|LL_OPAMP_INPUT_NONINVERT_DAC1_CH1|macro|LL_OPAMP_INPUT_NONINVERT_DAC1_CH1
DECL|LL_OPAMP_INPUT_NONINVERT_IO0|macro|LL_OPAMP_INPUT_NONINVERT_IO0
DECL|LL_OPAMP_INPUT_NONINV_DAC1_CH1|macro|LL_OPAMP_INPUT_NONINV_DAC1_CH1
DECL|LL_OPAMP_INVERTINGINPUT_CONNECT_NO|macro|LL_OPAMP_INVERTINGINPUT_CONNECT_NO
DECL|LL_OPAMP_INVERTINGINPUT_IO0|macro|LL_OPAMP_INVERTINGINPUT_IO0
DECL|LL_OPAMP_INVERTINGINPUT_IO1|macro|LL_OPAMP_INVERTINGINPUT_IO1
DECL|LL_OPAMP_InitTypeDef|typedef|} LL_OPAMP_InitTypeDef;
DECL|LL_OPAMP_IsCalibrationOutputSet|function|__STATIC_INLINE uint32_t LL_OPAMP_IsCalibrationOutputSet(OPAMP_TypeDef *OPAMPx)
DECL|LL_OPAMP_IsEnabled|function|__STATIC_INLINE uint32_t LL_OPAMP_IsEnabled(OPAMP_TypeDef *OPAMPx)
DECL|LL_OPAMP_MODE_CALIBRATION|macro|LL_OPAMP_MODE_CALIBRATION
DECL|LL_OPAMP_MODE_FOLLOWER|macro|LL_OPAMP_MODE_FOLLOWER
DECL|LL_OPAMP_MODE_FUNCTIONAL|macro|LL_OPAMP_MODE_FUNCTIONAL
DECL|LL_OPAMP_MODE_PGA|macro|LL_OPAMP_MODE_PGA
DECL|LL_OPAMP_MODE_STANDALONE|macro|LL_OPAMP_MODE_STANDALONE
DECL|LL_OPAMP_NONINVERTINGINPUT_DAC_CH|macro|LL_OPAMP_NONINVERTINGINPUT_DAC_CH
DECL|LL_OPAMP_NONINVERTINGINPUT_IO0|macro|LL_OPAMP_NONINVERTINGINPUT_IO0
DECL|LL_OPAMP_PGA_GAIN_16|macro|LL_OPAMP_PGA_GAIN_16
DECL|LL_OPAMP_PGA_GAIN_2|macro|LL_OPAMP_PGA_GAIN_2
DECL|LL_OPAMP_PGA_GAIN_4|macro|LL_OPAMP_PGA_GAIN_4
DECL|LL_OPAMP_PGA_GAIN_8|macro|LL_OPAMP_PGA_GAIN_8
DECL|LL_OPAMP_POWERMODE_LOWPOWER|macro|LL_OPAMP_POWERMODE_LOWPOWER
DECL|LL_OPAMP_POWERMODE_NORMAL|macro|LL_OPAMP_POWERMODE_NORMAL
DECL|LL_OPAMP_POWERSUPPLY_RANGE_HIGH|macro|LL_OPAMP_POWERSUPPLY_RANGE_HIGH
DECL|LL_OPAMP_POWERSUPPLY_RANGE_LOW|macro|LL_OPAMP_POWERSUPPLY_RANGE_LOW
DECL|LL_OPAMP_ReadReg|macro|LL_OPAMP_ReadReg
DECL|LL_OPAMP_SetCalibrationSelection|function|__STATIC_INLINE void LL_OPAMP_SetCalibrationSelection(OPAMP_TypeDef *OPAMPx, uint32_t TransistorsDiffPair)
DECL|LL_OPAMP_SetCommonPowerRange|function|__STATIC_INLINE void LL_OPAMP_SetCommonPowerRange(OPAMP_Common_TypeDef *OPAMPxy_COMMON, uint32_t PowerRange)
DECL|LL_OPAMP_SetFunctionalMode|function|__STATIC_INLINE void LL_OPAMP_SetFunctionalMode(OPAMP_TypeDef *OPAMPx, uint32_t FunctionalMode)
DECL|LL_OPAMP_SetInputInverting|function|__STATIC_INLINE void LL_OPAMP_SetInputInverting(OPAMP_TypeDef *OPAMPx, uint32_t InputInverting)
DECL|LL_OPAMP_SetInputNonInverting|function|__STATIC_INLINE void LL_OPAMP_SetInputNonInverting(OPAMP_TypeDef *OPAMPx, uint32_t InputNonInverting)
DECL|LL_OPAMP_SetInvertingInput|function|__STATIC_INLINE void LL_OPAMP_SetInvertingInput(OPAMP_TypeDef *OPAMPx, uint32_t InvertingInput)
DECL|LL_OPAMP_SetMode|function|__STATIC_INLINE void LL_OPAMP_SetMode(OPAMP_TypeDef *OPAMPx, uint32_t Mode)
DECL|LL_OPAMP_SetNonInvertingInput|function|__STATIC_INLINE void LL_OPAMP_SetNonInvertingInput(OPAMP_TypeDef *OPAMPx, uint32_t NonInvertingInput)
DECL|LL_OPAMP_SetPGAGain|function|__STATIC_INLINE void LL_OPAMP_SetPGAGain(OPAMP_TypeDef *OPAMPx, uint32_t PGAGain)
DECL|LL_OPAMP_SetPowerMode|function|__STATIC_INLINE void LL_OPAMP_SetPowerMode(OPAMP_TypeDef *OPAMPx, uint32_t PowerMode)
DECL|LL_OPAMP_SetTrimmingMode|function|__STATIC_INLINE void LL_OPAMP_SetTrimmingMode(OPAMP_TypeDef *OPAMPx, uint32_t TrimmingMode)
DECL|LL_OPAMP_SetTrimmingValue|function|__STATIC_INLINE void LL_OPAMP_SetTrimmingValue(OPAMP_TypeDef* OPAMPx, uint32_t PowerMode, uint32_t TransistorsDiffPair, uint32_t TrimmingValue)
DECL|LL_OPAMP_TRIMMING_FACTORY|macro|LL_OPAMP_TRIMMING_FACTORY
DECL|LL_OPAMP_TRIMMING_NMOS|macro|LL_OPAMP_TRIMMING_NMOS
DECL|LL_OPAMP_TRIMMING_PMOS|macro|LL_OPAMP_TRIMMING_PMOS
DECL|LL_OPAMP_TRIMMING_USER|macro|LL_OPAMP_TRIMMING_USER
DECL|LL_OPAMP_WriteReg|macro|LL_OPAMP_WriteReg
DECL|OPAMP_POWERMODE_CSR_BIT_MASK|macro|OPAMP_POWERMODE_CSR_BIT_MASK
DECL|OPAMP_POWERMODE_LPOTR_REGOFFSET|macro|OPAMP_POWERMODE_LPOTR_REGOFFSET
DECL|OPAMP_POWERMODE_OTR_REGOFFSET_MASK|macro|OPAMP_POWERMODE_OTR_REGOFFSET_MASK
DECL|OPAMP_POWERMODE_OTR_REGOFFSET|macro|OPAMP_POWERMODE_OTR_REGOFFSET
DECL|OPAMP_TRIMMING_SELECT_MASK|macro|OPAMP_TRIMMING_SELECT_MASK
DECL|OPAMP_TRIMMING_VALUE_MASK|macro|OPAMP_TRIMMING_VALUE_MASK
DECL|PowerMode|member|uint32_t PowerMode; /*!< Set OPAMP power mode.
DECL|__LL_OPAMP_COMMON_INSTANCE|macro|__LL_OPAMP_COMMON_INSTANCE
DECL|__LL_OPAMP_COMMON_INSTANCE|macro|__LL_OPAMP_COMMON_INSTANCE
DECL|__LL_OPAMP_IS_ENABLED_ALL_COMMON_INSTANCE|macro|__LL_OPAMP_IS_ENABLED_ALL_COMMON_INSTANCE
DECL|__LL_OPAMP_IS_ENABLED_ALL_COMMON_INSTANCE|macro|__LL_OPAMP_IS_ENABLED_ALL_COMMON_INSTANCE
DECL|__OPAMP_PTR_REG_OFFSET|macro|__OPAMP_PTR_REG_OFFSET
DECL|__STM32L4xx_LL_OPAMP_H|macro|__STM32L4xx_LL_OPAMP_H
