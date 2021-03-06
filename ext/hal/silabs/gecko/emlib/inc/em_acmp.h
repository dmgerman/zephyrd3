DECL|ACMP_Accuracy_TypeDef|typedef|} ACMP_Accuracy_TypeDef;
DECL|ACMP_CAPSENSE_INIT_DEFAULT|macro|ACMP_CAPSENSE_INIT_DEFAULT
DECL|ACMP_CAPSENSE_INIT_DEFAULT|macro|ACMP_CAPSENSE_INIT_DEFAULT
DECL|ACMP_CAPSENSE_INIT_DEFAULT|macro|ACMP_CAPSENSE_INIT_DEFAULT
DECL|ACMP_CapsenseInit_TypeDef|typedef|} ACMP_CapsenseInit_TypeDef;
DECL|ACMP_CapsenseResistor_TypeDef|typedef|} ACMP_CapsenseResistor_TypeDef;
DECL|ACMP_Channel_TypeDef|typedef|} ACMP_Channel_TypeDef;
DECL|ACMP_Channel_TypeDef|typedef|} ACMP_Channel_TypeDef;
DECL|ACMP_ExternalInput_Typedef|typedef|} ACMP_ExternalInput_Typedef;
DECL|ACMP_HysteresisLevel_TypeDef|typedef|} ACMP_HysteresisLevel_TypeDef;
DECL|ACMP_INIT_DEFAULT|macro|ACMP_INIT_DEFAULT
DECL|ACMP_INIT_DEFAULT|macro|ACMP_INIT_DEFAULT
DECL|ACMP_INIT_DEFAULT|macro|ACMP_INIT_DEFAULT
DECL|ACMP_Init_TypeDef|typedef|} ACMP_Init_TypeDef;
DECL|ACMP_InputRange_TypeDef|typedef|} ACMP_InputRange_TypeDef;
DECL|ACMP_IntClear|function|__STATIC_INLINE void ACMP_IntClear(ACMP_TypeDef *acmp, uint32_t flags)
DECL|ACMP_IntDisable|function|__STATIC_INLINE void ACMP_IntDisable(ACMP_TypeDef *acmp, uint32_t flags)
DECL|ACMP_IntEnable|function|__STATIC_INLINE void ACMP_IntEnable(ACMP_TypeDef *acmp, uint32_t flags)
DECL|ACMP_IntGetEnabled|function|__STATIC_INLINE uint32_t ACMP_IntGetEnabled(ACMP_TypeDef *acmp)
DECL|ACMP_IntGet|function|__STATIC_INLINE uint32_t ACMP_IntGet(ACMP_TypeDef *acmp)
DECL|ACMP_IntSet|function|__STATIC_INLINE void ACMP_IntSet(ACMP_TypeDef *acmp, uint32_t flags)
DECL|ACMP_PowerSource_TypeDef|typedef|} ACMP_PowerSource_TypeDef;
DECL|ACMP_VACONFIG_DEFAULT|macro|ACMP_VACONFIG_DEFAULT
DECL|ACMP_VAConfig_TypeDef|typedef|} ACMP_VAConfig_TypeDef;
DECL|ACMP_VAInput_TypeDef|typedef|} ACMP_VAInput_TypeDef;
DECL|ACMP_VBCONFIG_DEFAULT|macro|ACMP_VBCONFIG_DEFAULT
DECL|ACMP_VBConfig_TypeDef|typedef|} ACMP_VBConfig_TypeDef;
DECL|ACMP_VBInput_TypeDef|typedef|} ACMP_VBInput_TypeDef;
DECL|ACMP_VLPInput_Typedef|typedef|} ACMP_VLPInput_Typedef;
DECL|ACMP_WarmTime_TypeDef|typedef|} ACMP_WarmTime_TypeDef;
DECL|EM_ACMP_H|macro|EM_ACMP_H
DECL|accuracy|member|ACMP_Accuracy_TypeDef accuracy;
DECL|acmpAccuracyHigh|enumerator|acmpAccuracyHigh = _ACMP_CTRL_ACCURACY_HIGH /**< High-accuracy mode but consume more current */
DECL|acmpAccuracyLow|enumerator|acmpAccuracyLow = _ACMP_CTRL_ACCURACY_LOW, /**< Low-accuracy mode but consume less current */
DECL|acmpChannel0|enumerator|acmpChannel0 = _ACMP_INPUTSEL_NEGSEL_CH0,
DECL|acmpChannel1V25|enumerator|acmpChannel1V25 = _ACMP_INPUTSEL_NEGSEL_1V25,
DECL|acmpChannel1|enumerator|acmpChannel1 = _ACMP_INPUTSEL_NEGSEL_CH1,
DECL|acmpChannel2V5|enumerator|acmpChannel2V5 = _ACMP_INPUTSEL_NEGSEL_2V5,
DECL|acmpChannel2|enumerator|acmpChannel2 = _ACMP_INPUTSEL_NEGSEL_CH2,
DECL|acmpChannel3|enumerator|acmpChannel3 = _ACMP_INPUTSEL_NEGSEL_CH3,
DECL|acmpChannel4|enumerator|acmpChannel4 = _ACMP_INPUTSEL_NEGSEL_CH4,
DECL|acmpChannel5|enumerator|acmpChannel5 = _ACMP_INPUTSEL_NEGSEL_CH5,
DECL|acmpChannel6|enumerator|acmpChannel6 = _ACMP_INPUTSEL_NEGSEL_CH6,
DECL|acmpChannel7|enumerator|acmpChannel7 = _ACMP_INPUTSEL_NEGSEL_CH7,
DECL|acmpChannelCapSense|enumerator|acmpChannelCapSense = _ACMP_INPUTSEL_NEGSEL_CAPSENSE,
DECL|acmpChannelDAC0Ch0|enumerator|acmpChannelDAC0Ch0 = _ACMP_INPUTSEL_NEGSEL_DAC0CH0,
DECL|acmpChannelDAC0Ch1|enumerator|acmpChannelDAC0Ch1 = _ACMP_INPUTSEL_NEGSEL_DAC0CH1,
DECL|acmpChannelVDD|enumerator|acmpChannelVDD = _ACMP_INPUTSEL_NEGSEL_VDD,
DECL|acmpExternalInputAPORT0X|enumerator|acmpExternalInputAPORT0X = _ACMP_EXTIFCTRL_APORTSEL_APORT0X,
DECL|acmpExternalInputAPORT0Y|enumerator|acmpExternalInputAPORT0Y = _ACMP_EXTIFCTRL_APORTSEL_APORT0Y,
DECL|acmpExternalInputAPORT1XY|enumerator|acmpExternalInputAPORT1XY = _ACMP_EXTIFCTRL_APORTSEL_APORT1XY,
DECL|acmpExternalInputAPORT1X|enumerator|acmpExternalInputAPORT1X = _ACMP_EXTIFCTRL_APORTSEL_APORT1X,
DECL|acmpExternalInputAPORT1Y|enumerator|acmpExternalInputAPORT1Y = _ACMP_EXTIFCTRL_APORTSEL_APORT1Y,
DECL|acmpExternalInputAPORT2X|enumerator|acmpExternalInputAPORT2X = _ACMP_EXTIFCTRL_APORTSEL_APORT2X,
DECL|acmpExternalInputAPORT2YX|enumerator|acmpExternalInputAPORT2YX = _ACMP_EXTIFCTRL_APORTSEL_APORT2YX,
DECL|acmpExternalInputAPORT2Y|enumerator|acmpExternalInputAPORT2Y = _ACMP_EXTIFCTRL_APORTSEL_APORT2Y,
DECL|acmpExternalInputAPORT3XY|enumerator|acmpExternalInputAPORT3XY = _ACMP_EXTIFCTRL_APORTSEL_APORT3XY,
DECL|acmpExternalInputAPORT3X|enumerator|acmpExternalInputAPORT3X = _ACMP_EXTIFCTRL_APORTSEL_APORT3X,
DECL|acmpExternalInputAPORT3Y|enumerator|acmpExternalInputAPORT3Y = _ACMP_EXTIFCTRL_APORTSEL_APORT3Y,
DECL|acmpExternalInputAPORT4X|enumerator|acmpExternalInputAPORT4X = _ACMP_EXTIFCTRL_APORTSEL_APORT4X,
DECL|acmpExternalInputAPORT4YX|enumerator|acmpExternalInputAPORT4YX = _ACMP_EXTIFCTRL_APORTSEL_APORT4YX,
DECL|acmpExternalInputAPORT4Y|enumerator|acmpExternalInputAPORT4Y = _ACMP_EXTIFCTRL_APORTSEL_APORT4Y,
DECL|acmpHysteresisLevel0|enumerator|acmpHysteresisLevel0 = _ACMP_CTRL_HYSTSEL_HYST0, /**< Hysteresis level 0 */
DECL|acmpHysteresisLevel10|enumerator|acmpHysteresisLevel10 = _ACMP_HYSTERESIS0_HYST_HYST10, /**< Hysteresis level 10 */
DECL|acmpHysteresisLevel11|enumerator|acmpHysteresisLevel11 = _ACMP_HYSTERESIS0_HYST_HYST11, /**< Hysteresis level 11 */
DECL|acmpHysteresisLevel12|enumerator|acmpHysteresisLevel12 = _ACMP_HYSTERESIS0_HYST_HYST12, /**< Hysteresis level 12 */
DECL|acmpHysteresisLevel13|enumerator|acmpHysteresisLevel13 = _ACMP_HYSTERESIS0_HYST_HYST13, /**< Hysteresis level 13 */
DECL|acmpHysteresisLevel14|enumerator|acmpHysteresisLevel14 = _ACMP_HYSTERESIS0_HYST_HYST14, /**< Hysteresis level 14 */
DECL|acmpHysteresisLevel15|enumerator|acmpHysteresisLevel15 = _ACMP_HYSTERESIS0_HYST_HYST15, /**< Hysteresis level 15 */
DECL|acmpHysteresisLevel1|enumerator|acmpHysteresisLevel1 = _ACMP_CTRL_HYSTSEL_HYST1, /**< Hysteresis level 1 */
DECL|acmpHysteresisLevel1|enumerator|acmpHysteresisLevel1 = _ACMP_HYSTERESIS0_HYST_HYST1, /**< Hysteresis level 1 */
DECL|acmpHysteresisLevel2|enumerator|acmpHysteresisLevel2 = _ACMP_CTRL_HYSTSEL_HYST2, /**< Hysteresis level 2 */
DECL|acmpHysteresisLevel2|enumerator|acmpHysteresisLevel2 = _ACMP_HYSTERESIS0_HYST_HYST2, /**< Hysteresis level 2 */
DECL|acmpHysteresisLevel3|enumerator|acmpHysteresisLevel3 = _ACMP_CTRL_HYSTSEL_HYST3, /**< Hysteresis level 3 */
DECL|acmpHysteresisLevel3|enumerator|acmpHysteresisLevel3 = _ACMP_HYSTERESIS0_HYST_HYST3, /**< Hysteresis level 3 */
DECL|acmpHysteresisLevel4|enumerator|acmpHysteresisLevel4 = _ACMP_CTRL_HYSTSEL_HYST4, /**< Hysteresis level 4 */
DECL|acmpHysteresisLevel4|enumerator|acmpHysteresisLevel4 = _ACMP_HYSTERESIS0_HYST_HYST4, /**< Hysteresis level 4 */
DECL|acmpHysteresisLevel5|enumerator|acmpHysteresisLevel5 = _ACMP_CTRL_HYSTSEL_HYST5, /**< Hysteresis level 5 */
DECL|acmpHysteresisLevel5|enumerator|acmpHysteresisLevel5 = _ACMP_HYSTERESIS0_HYST_HYST5, /**< Hysteresis level 5 */
DECL|acmpHysteresisLevel6|enumerator|acmpHysteresisLevel6 = _ACMP_CTRL_HYSTSEL_HYST6, /**< Hysteresis level 6 */
DECL|acmpHysteresisLevel6|enumerator|acmpHysteresisLevel6 = _ACMP_HYSTERESIS0_HYST_HYST6, /**< Hysteresis level 6 */
DECL|acmpHysteresisLevel7|enumerator|acmpHysteresisLevel7 = _ACMP_CTRL_HYSTSEL_HYST7 /**< Hysteresis level 7 */
DECL|acmpHysteresisLevel7|enumerator|acmpHysteresisLevel7 = _ACMP_HYSTERESIS0_HYST_HYST7, /**< Hysteresis level 7 */
DECL|acmpHysteresisLevel8|enumerator|acmpHysteresisLevel8 = _ACMP_HYSTERESIS0_HYST_HYST8, /**< Hysteresis level 8 */
DECL|acmpHysteresisLevel9|enumerator|acmpHysteresisLevel9 = _ACMP_HYSTERESIS0_HYST_HYST9, /**< Hysteresis level 9 */
DECL|acmpInputAPORT0XCH0|enumerator|acmpInputAPORT0XCH0 = _ACMP_INPUTSEL_POSSEL_APORT0XCH0,
DECL|acmpInputAPORT0XCH10|enumerator|acmpInputAPORT0XCH10 = _ACMP_INPUTSEL_POSSEL_APORT0XCH10,
DECL|acmpInputAPORT0XCH11|enumerator|acmpInputAPORT0XCH11 = _ACMP_INPUTSEL_POSSEL_APORT0XCH11,
DECL|acmpInputAPORT0XCH12|enumerator|acmpInputAPORT0XCH12 = _ACMP_INPUTSEL_POSSEL_APORT0XCH12,
DECL|acmpInputAPORT0XCH13|enumerator|acmpInputAPORT0XCH13 = _ACMP_INPUTSEL_POSSEL_APORT0XCH13,
DECL|acmpInputAPORT0XCH14|enumerator|acmpInputAPORT0XCH14 = _ACMP_INPUTSEL_POSSEL_APORT0XCH14,
DECL|acmpInputAPORT0XCH15|enumerator|acmpInputAPORT0XCH15 = _ACMP_INPUTSEL_POSSEL_APORT0XCH15,
DECL|acmpInputAPORT0XCH1|enumerator|acmpInputAPORT0XCH1 = _ACMP_INPUTSEL_POSSEL_APORT0XCH1,
DECL|acmpInputAPORT0XCH2|enumerator|acmpInputAPORT0XCH2 = _ACMP_INPUTSEL_POSSEL_APORT0XCH2,
DECL|acmpInputAPORT0XCH3|enumerator|acmpInputAPORT0XCH3 = _ACMP_INPUTSEL_POSSEL_APORT0XCH3,
DECL|acmpInputAPORT0XCH4|enumerator|acmpInputAPORT0XCH4 = _ACMP_INPUTSEL_POSSEL_APORT0XCH4,
DECL|acmpInputAPORT0XCH5|enumerator|acmpInputAPORT0XCH5 = _ACMP_INPUTSEL_POSSEL_APORT0XCH5,
DECL|acmpInputAPORT0XCH6|enumerator|acmpInputAPORT0XCH6 = _ACMP_INPUTSEL_POSSEL_APORT0XCH6,
DECL|acmpInputAPORT0XCH7|enumerator|acmpInputAPORT0XCH7 = _ACMP_INPUTSEL_POSSEL_APORT0XCH7,
DECL|acmpInputAPORT0XCH8|enumerator|acmpInputAPORT0XCH8 = _ACMP_INPUTSEL_POSSEL_APORT0XCH8,
DECL|acmpInputAPORT0XCH9|enumerator|acmpInputAPORT0XCH9 = _ACMP_INPUTSEL_POSSEL_APORT0XCH9,
DECL|acmpInputAPORT0YCH0|enumerator|acmpInputAPORT0YCH0 = _ACMP_INPUTSEL_POSSEL_APORT0YCH0,
DECL|acmpInputAPORT0YCH10|enumerator|acmpInputAPORT0YCH10 = _ACMP_INPUTSEL_POSSEL_APORT0YCH10,
DECL|acmpInputAPORT0YCH11|enumerator|acmpInputAPORT0YCH11 = _ACMP_INPUTSEL_POSSEL_APORT0YCH11,
DECL|acmpInputAPORT0YCH12|enumerator|acmpInputAPORT0YCH12 = _ACMP_INPUTSEL_POSSEL_APORT0YCH12,
DECL|acmpInputAPORT0YCH13|enumerator|acmpInputAPORT0YCH13 = _ACMP_INPUTSEL_POSSEL_APORT0YCH13,
DECL|acmpInputAPORT0YCH14|enumerator|acmpInputAPORT0YCH14 = _ACMP_INPUTSEL_POSSEL_APORT0YCH14,
DECL|acmpInputAPORT0YCH15|enumerator|acmpInputAPORT0YCH15 = _ACMP_INPUTSEL_POSSEL_APORT0YCH15,
DECL|acmpInputAPORT0YCH1|enumerator|acmpInputAPORT0YCH1 = _ACMP_INPUTSEL_POSSEL_APORT0YCH1,
DECL|acmpInputAPORT0YCH2|enumerator|acmpInputAPORT0YCH2 = _ACMP_INPUTSEL_POSSEL_APORT0YCH2,
DECL|acmpInputAPORT0YCH3|enumerator|acmpInputAPORT0YCH3 = _ACMP_INPUTSEL_POSSEL_APORT0YCH3,
DECL|acmpInputAPORT0YCH4|enumerator|acmpInputAPORT0YCH4 = _ACMP_INPUTSEL_POSSEL_APORT0YCH4,
DECL|acmpInputAPORT0YCH5|enumerator|acmpInputAPORT0YCH5 = _ACMP_INPUTSEL_POSSEL_APORT0YCH5,
DECL|acmpInputAPORT0YCH6|enumerator|acmpInputAPORT0YCH6 = _ACMP_INPUTSEL_POSSEL_APORT0YCH6,
DECL|acmpInputAPORT0YCH7|enumerator|acmpInputAPORT0YCH7 = _ACMP_INPUTSEL_POSSEL_APORT0YCH7,
DECL|acmpInputAPORT0YCH8|enumerator|acmpInputAPORT0YCH8 = _ACMP_INPUTSEL_POSSEL_APORT0YCH8,
DECL|acmpInputAPORT0YCH9|enumerator|acmpInputAPORT0YCH9 = _ACMP_INPUTSEL_POSSEL_APORT0YCH9,
DECL|acmpInputAPORT1XCH0|enumerator|acmpInputAPORT1XCH0 = _ACMP_INPUTSEL_POSSEL_APORT1XCH0,
DECL|acmpInputAPORT1XCH10|enumerator|acmpInputAPORT1XCH10 = _ACMP_INPUTSEL_POSSEL_APORT1XCH10,
DECL|acmpInputAPORT1XCH12|enumerator|acmpInputAPORT1XCH12 = _ACMP_INPUTSEL_POSSEL_APORT1XCH12,
DECL|acmpInputAPORT1XCH14|enumerator|acmpInputAPORT1XCH14 = _ACMP_INPUTSEL_POSSEL_APORT1XCH14,
DECL|acmpInputAPORT1XCH16|enumerator|acmpInputAPORT1XCH16 = _ACMP_INPUTSEL_POSSEL_APORT1XCH16,
DECL|acmpInputAPORT1XCH18|enumerator|acmpInputAPORT1XCH18 = _ACMP_INPUTSEL_POSSEL_APORT1XCH18,
DECL|acmpInputAPORT1XCH20|enumerator|acmpInputAPORT1XCH20 = _ACMP_INPUTSEL_POSSEL_APORT1XCH20,
DECL|acmpInputAPORT1XCH22|enumerator|acmpInputAPORT1XCH22 = _ACMP_INPUTSEL_POSSEL_APORT1XCH22,
DECL|acmpInputAPORT1XCH24|enumerator|acmpInputAPORT1XCH24 = _ACMP_INPUTSEL_POSSEL_APORT1XCH24,
DECL|acmpInputAPORT1XCH26|enumerator|acmpInputAPORT1XCH26 = _ACMP_INPUTSEL_POSSEL_APORT1XCH26,
DECL|acmpInputAPORT1XCH28|enumerator|acmpInputAPORT1XCH28 = _ACMP_INPUTSEL_POSSEL_APORT1XCH28,
DECL|acmpInputAPORT1XCH2|enumerator|acmpInputAPORT1XCH2 = _ACMP_INPUTSEL_POSSEL_APORT1XCH2,
DECL|acmpInputAPORT1XCH30|enumerator|acmpInputAPORT1XCH30 = _ACMP_INPUTSEL_POSSEL_APORT1XCH30,
DECL|acmpInputAPORT1XCH4|enumerator|acmpInputAPORT1XCH4 = _ACMP_INPUTSEL_POSSEL_APORT1XCH4,
DECL|acmpInputAPORT1XCH6|enumerator|acmpInputAPORT1XCH6 = _ACMP_INPUTSEL_POSSEL_APORT1XCH6,
DECL|acmpInputAPORT1XCH8|enumerator|acmpInputAPORT1XCH8 = _ACMP_INPUTSEL_POSSEL_APORT1XCH8,
DECL|acmpInputAPORT1YCH11|enumerator|acmpInputAPORT1YCH11 = _ACMP_INPUTSEL_POSSEL_APORT1YCH11,
DECL|acmpInputAPORT1YCH13|enumerator|acmpInputAPORT1YCH13 = _ACMP_INPUTSEL_POSSEL_APORT1YCH13,
DECL|acmpInputAPORT1YCH15|enumerator|acmpInputAPORT1YCH15 = _ACMP_INPUTSEL_POSSEL_APORT1YCH15,
DECL|acmpInputAPORT1YCH17|enumerator|acmpInputAPORT1YCH17 = _ACMP_INPUTSEL_POSSEL_APORT1YCH17,
DECL|acmpInputAPORT1YCH19|enumerator|acmpInputAPORT1YCH19 = _ACMP_INPUTSEL_POSSEL_APORT1YCH19,
DECL|acmpInputAPORT1YCH1|enumerator|acmpInputAPORT1YCH1 = _ACMP_INPUTSEL_POSSEL_APORT1YCH1,
DECL|acmpInputAPORT1YCH21|enumerator|acmpInputAPORT1YCH21 = _ACMP_INPUTSEL_POSSEL_APORT1YCH21,
DECL|acmpInputAPORT1YCH23|enumerator|acmpInputAPORT1YCH23 = _ACMP_INPUTSEL_POSSEL_APORT1YCH23,
DECL|acmpInputAPORT1YCH25|enumerator|acmpInputAPORT1YCH25 = _ACMP_INPUTSEL_POSSEL_APORT1YCH25,
DECL|acmpInputAPORT1YCH27|enumerator|acmpInputAPORT1YCH27 = _ACMP_INPUTSEL_POSSEL_APORT1YCH27,
DECL|acmpInputAPORT1YCH29|enumerator|acmpInputAPORT1YCH29 = _ACMP_INPUTSEL_POSSEL_APORT1YCH29,
DECL|acmpInputAPORT1YCH31|enumerator|acmpInputAPORT1YCH31 = _ACMP_INPUTSEL_POSSEL_APORT1YCH31,
DECL|acmpInputAPORT1YCH3|enumerator|acmpInputAPORT1YCH3 = _ACMP_INPUTSEL_POSSEL_APORT1YCH3,
DECL|acmpInputAPORT1YCH5|enumerator|acmpInputAPORT1YCH5 = _ACMP_INPUTSEL_POSSEL_APORT1YCH5,
DECL|acmpInputAPORT1YCH7|enumerator|acmpInputAPORT1YCH7 = _ACMP_INPUTSEL_POSSEL_APORT1YCH7,
DECL|acmpInputAPORT1YCH9|enumerator|acmpInputAPORT1YCH9 = _ACMP_INPUTSEL_POSSEL_APORT1YCH9,
DECL|acmpInputAPORT2XCH11|enumerator|acmpInputAPORT2XCH11 = _ACMP_INPUTSEL_POSSEL_APORT2XCH11,
DECL|acmpInputAPORT2XCH13|enumerator|acmpInputAPORT2XCH13 = _ACMP_INPUTSEL_POSSEL_APORT2XCH13,
DECL|acmpInputAPORT2XCH15|enumerator|acmpInputAPORT2XCH15 = _ACMP_INPUTSEL_POSSEL_APORT2XCH15,
DECL|acmpInputAPORT2XCH17|enumerator|acmpInputAPORT2XCH17 = _ACMP_INPUTSEL_POSSEL_APORT2XCH17,
DECL|acmpInputAPORT2XCH19|enumerator|acmpInputAPORT2XCH19 = _ACMP_INPUTSEL_POSSEL_APORT2XCH19,
DECL|acmpInputAPORT2XCH1|enumerator|acmpInputAPORT2XCH1 = _ACMP_INPUTSEL_POSSEL_APORT2XCH1,
DECL|acmpInputAPORT2XCH21|enumerator|acmpInputAPORT2XCH21 = _ACMP_INPUTSEL_POSSEL_APORT2XCH21,
DECL|acmpInputAPORT2XCH23|enumerator|acmpInputAPORT2XCH23 = _ACMP_INPUTSEL_POSSEL_APORT2XCH23,
DECL|acmpInputAPORT2XCH25|enumerator|acmpInputAPORT2XCH25 = _ACMP_INPUTSEL_POSSEL_APORT2XCH25,
DECL|acmpInputAPORT2XCH27|enumerator|acmpInputAPORT2XCH27 = _ACMP_INPUTSEL_POSSEL_APORT2XCH27,
DECL|acmpInputAPORT2XCH29|enumerator|acmpInputAPORT2XCH29 = _ACMP_INPUTSEL_POSSEL_APORT2XCH29,
DECL|acmpInputAPORT2XCH31|enumerator|acmpInputAPORT2XCH31 = _ACMP_INPUTSEL_POSSEL_APORT2XCH31,
DECL|acmpInputAPORT2XCH3|enumerator|acmpInputAPORT2XCH3 = _ACMP_INPUTSEL_POSSEL_APORT2XCH3,
DECL|acmpInputAPORT2XCH5|enumerator|acmpInputAPORT2XCH5 = _ACMP_INPUTSEL_POSSEL_APORT2XCH5,
DECL|acmpInputAPORT2XCH7|enumerator|acmpInputAPORT2XCH7 = _ACMP_INPUTSEL_POSSEL_APORT2XCH7,
DECL|acmpInputAPORT2XCH9|enumerator|acmpInputAPORT2XCH9 = _ACMP_INPUTSEL_POSSEL_APORT2XCH9,
DECL|acmpInputAPORT2YCH0|enumerator|acmpInputAPORT2YCH0 = _ACMP_INPUTSEL_POSSEL_APORT2YCH0,
DECL|acmpInputAPORT2YCH10|enumerator|acmpInputAPORT2YCH10 = _ACMP_INPUTSEL_POSSEL_APORT2YCH10,
DECL|acmpInputAPORT2YCH12|enumerator|acmpInputAPORT2YCH12 = _ACMP_INPUTSEL_POSSEL_APORT2YCH12,
DECL|acmpInputAPORT2YCH14|enumerator|acmpInputAPORT2YCH14 = _ACMP_INPUTSEL_POSSEL_APORT2YCH14,
DECL|acmpInputAPORT2YCH16|enumerator|acmpInputAPORT2YCH16 = _ACMP_INPUTSEL_POSSEL_APORT2YCH16,
DECL|acmpInputAPORT2YCH18|enumerator|acmpInputAPORT2YCH18 = _ACMP_INPUTSEL_POSSEL_APORT2YCH18,
DECL|acmpInputAPORT2YCH20|enumerator|acmpInputAPORT2YCH20 = _ACMP_INPUTSEL_POSSEL_APORT2YCH20,
DECL|acmpInputAPORT2YCH22|enumerator|acmpInputAPORT2YCH22 = _ACMP_INPUTSEL_POSSEL_APORT2YCH22,
DECL|acmpInputAPORT2YCH24|enumerator|acmpInputAPORT2YCH24 = _ACMP_INPUTSEL_POSSEL_APORT2YCH24,
DECL|acmpInputAPORT2YCH26|enumerator|acmpInputAPORT2YCH26 = _ACMP_INPUTSEL_POSSEL_APORT2YCH26,
DECL|acmpInputAPORT2YCH28|enumerator|acmpInputAPORT2YCH28 = _ACMP_INPUTSEL_POSSEL_APORT2YCH28,
DECL|acmpInputAPORT2YCH2|enumerator|acmpInputAPORT2YCH2 = _ACMP_INPUTSEL_POSSEL_APORT2YCH2,
DECL|acmpInputAPORT2YCH30|enumerator|acmpInputAPORT2YCH30 = _ACMP_INPUTSEL_POSSEL_APORT2YCH30,
DECL|acmpInputAPORT2YCH4|enumerator|acmpInputAPORT2YCH4 = _ACMP_INPUTSEL_POSSEL_APORT2YCH4,
DECL|acmpInputAPORT2YCH6|enumerator|acmpInputAPORT2YCH6 = _ACMP_INPUTSEL_POSSEL_APORT2YCH6,
DECL|acmpInputAPORT2YCH8|enumerator|acmpInputAPORT2YCH8 = _ACMP_INPUTSEL_POSSEL_APORT2YCH8,
DECL|acmpInputAPORT3XCH0|enumerator|acmpInputAPORT3XCH0 = _ACMP_INPUTSEL_POSSEL_APORT3XCH0,
DECL|acmpInputAPORT3XCH10|enumerator|acmpInputAPORT3XCH10 = _ACMP_INPUTSEL_POSSEL_APORT3XCH10,
DECL|acmpInputAPORT3XCH12|enumerator|acmpInputAPORT3XCH12 = _ACMP_INPUTSEL_POSSEL_APORT3XCH12,
DECL|acmpInputAPORT3XCH14|enumerator|acmpInputAPORT3XCH14 = _ACMP_INPUTSEL_POSSEL_APORT3XCH14,
DECL|acmpInputAPORT3XCH16|enumerator|acmpInputAPORT3XCH16 = _ACMP_INPUTSEL_POSSEL_APORT3XCH16,
DECL|acmpInputAPORT3XCH18|enumerator|acmpInputAPORT3XCH18 = _ACMP_INPUTSEL_POSSEL_APORT3XCH18,
DECL|acmpInputAPORT3XCH20|enumerator|acmpInputAPORT3XCH20 = _ACMP_INPUTSEL_POSSEL_APORT3XCH20,
DECL|acmpInputAPORT3XCH22|enumerator|acmpInputAPORT3XCH22 = _ACMP_INPUTSEL_POSSEL_APORT3XCH22,
DECL|acmpInputAPORT3XCH24|enumerator|acmpInputAPORT3XCH24 = _ACMP_INPUTSEL_POSSEL_APORT3XCH24,
DECL|acmpInputAPORT3XCH26|enumerator|acmpInputAPORT3XCH26 = _ACMP_INPUTSEL_POSSEL_APORT3XCH26,
DECL|acmpInputAPORT3XCH28|enumerator|acmpInputAPORT3XCH28 = _ACMP_INPUTSEL_POSSEL_APORT3XCH28,
DECL|acmpInputAPORT3XCH2|enumerator|acmpInputAPORT3XCH2 = _ACMP_INPUTSEL_POSSEL_APORT3XCH2,
DECL|acmpInputAPORT3XCH30|enumerator|acmpInputAPORT3XCH30 = _ACMP_INPUTSEL_POSSEL_APORT3XCH30,
DECL|acmpInputAPORT3XCH4|enumerator|acmpInputAPORT3XCH4 = _ACMP_INPUTSEL_POSSEL_APORT3XCH4,
DECL|acmpInputAPORT3XCH6|enumerator|acmpInputAPORT3XCH6 = _ACMP_INPUTSEL_POSSEL_APORT3XCH6,
DECL|acmpInputAPORT3XCH8|enumerator|acmpInputAPORT3XCH8 = _ACMP_INPUTSEL_POSSEL_APORT3XCH8,
DECL|acmpInputAPORT3YCH11|enumerator|acmpInputAPORT3YCH11 = _ACMP_INPUTSEL_POSSEL_APORT3YCH11,
DECL|acmpInputAPORT3YCH13|enumerator|acmpInputAPORT3YCH13 = _ACMP_INPUTSEL_POSSEL_APORT3YCH13,
DECL|acmpInputAPORT3YCH15|enumerator|acmpInputAPORT3YCH15 = _ACMP_INPUTSEL_POSSEL_APORT3YCH15,
DECL|acmpInputAPORT3YCH17|enumerator|acmpInputAPORT3YCH17 = _ACMP_INPUTSEL_POSSEL_APORT3YCH17,
DECL|acmpInputAPORT3YCH19|enumerator|acmpInputAPORT3YCH19 = _ACMP_INPUTSEL_POSSEL_APORT3YCH19,
DECL|acmpInputAPORT3YCH1|enumerator|acmpInputAPORT3YCH1 = _ACMP_INPUTSEL_POSSEL_APORT3YCH1,
DECL|acmpInputAPORT3YCH21|enumerator|acmpInputAPORT3YCH21 = _ACMP_INPUTSEL_POSSEL_APORT3YCH21,
DECL|acmpInputAPORT3YCH23|enumerator|acmpInputAPORT3YCH23 = _ACMP_INPUTSEL_POSSEL_APORT3YCH23,
DECL|acmpInputAPORT3YCH25|enumerator|acmpInputAPORT3YCH25 = _ACMP_INPUTSEL_POSSEL_APORT3YCH25,
DECL|acmpInputAPORT3YCH27|enumerator|acmpInputAPORT3YCH27 = _ACMP_INPUTSEL_POSSEL_APORT3YCH27,
DECL|acmpInputAPORT3YCH29|enumerator|acmpInputAPORT3YCH29 = _ACMP_INPUTSEL_POSSEL_APORT3YCH29,
DECL|acmpInputAPORT3YCH31|enumerator|acmpInputAPORT3YCH31 = _ACMP_INPUTSEL_POSSEL_APORT3YCH31,
DECL|acmpInputAPORT3YCH3|enumerator|acmpInputAPORT3YCH3 = _ACMP_INPUTSEL_POSSEL_APORT3YCH3,
DECL|acmpInputAPORT3YCH5|enumerator|acmpInputAPORT3YCH5 = _ACMP_INPUTSEL_POSSEL_APORT3YCH5,
DECL|acmpInputAPORT3YCH7|enumerator|acmpInputAPORT3YCH7 = _ACMP_INPUTSEL_POSSEL_APORT3YCH7,
DECL|acmpInputAPORT3YCH9|enumerator|acmpInputAPORT3YCH9 = _ACMP_INPUTSEL_POSSEL_APORT3YCH9,
DECL|acmpInputAPORT4XCH11|enumerator|acmpInputAPORT4XCH11 = _ACMP_INPUTSEL_POSSEL_APORT4XCH11,
DECL|acmpInputAPORT4XCH13|enumerator|acmpInputAPORT4XCH13 = _ACMP_INPUTSEL_POSSEL_APORT4XCH13,
DECL|acmpInputAPORT4XCH15|enumerator|acmpInputAPORT4XCH15 = _ACMP_INPUTSEL_POSSEL_APORT4XCH15,
DECL|acmpInputAPORT4XCH17|enumerator|acmpInputAPORT4XCH17 = _ACMP_INPUTSEL_POSSEL_APORT4XCH17,
DECL|acmpInputAPORT4XCH19|enumerator|acmpInputAPORT4XCH19 = _ACMP_INPUTSEL_POSSEL_APORT4XCH19,
DECL|acmpInputAPORT4XCH1|enumerator|acmpInputAPORT4XCH1 = _ACMP_INPUTSEL_POSSEL_APORT4XCH1,
DECL|acmpInputAPORT4XCH21|enumerator|acmpInputAPORT4XCH21 = _ACMP_INPUTSEL_POSSEL_APORT4XCH21,
DECL|acmpInputAPORT4XCH23|enumerator|acmpInputAPORT4XCH23 = _ACMP_INPUTSEL_POSSEL_APORT4XCH23,
DECL|acmpInputAPORT4XCH25|enumerator|acmpInputAPORT4XCH25 = _ACMP_INPUTSEL_POSSEL_APORT4XCH25,
DECL|acmpInputAPORT4XCH27|enumerator|acmpInputAPORT4XCH27 = _ACMP_INPUTSEL_POSSEL_APORT4XCH27,
DECL|acmpInputAPORT4XCH29|enumerator|acmpInputAPORT4XCH29 = _ACMP_INPUTSEL_POSSEL_APORT4XCH29,
DECL|acmpInputAPORT4XCH31|enumerator|acmpInputAPORT4XCH31 = _ACMP_INPUTSEL_POSSEL_APORT4XCH31,
DECL|acmpInputAPORT4XCH3|enumerator|acmpInputAPORT4XCH3 = _ACMP_INPUTSEL_POSSEL_APORT4XCH3,
DECL|acmpInputAPORT4XCH5|enumerator|acmpInputAPORT4XCH5 = _ACMP_INPUTSEL_POSSEL_APORT4XCH5,
DECL|acmpInputAPORT4XCH7|enumerator|acmpInputAPORT4XCH7 = _ACMP_INPUTSEL_POSSEL_APORT4XCH7,
DECL|acmpInputAPORT4XCH9|enumerator|acmpInputAPORT4XCH9 = _ACMP_INPUTSEL_POSSEL_APORT4XCH9,
DECL|acmpInputAPORT4YCH0|enumerator|acmpInputAPORT4YCH0 = _ACMP_INPUTSEL_POSSEL_APORT4YCH0,
DECL|acmpInputAPORT4YCH10|enumerator|acmpInputAPORT4YCH10 = _ACMP_INPUTSEL_POSSEL_APORT4YCH10,
DECL|acmpInputAPORT4YCH12|enumerator|acmpInputAPORT4YCH12 = _ACMP_INPUTSEL_POSSEL_APORT4YCH12,
DECL|acmpInputAPORT4YCH14|enumerator|acmpInputAPORT4YCH14 = _ACMP_INPUTSEL_POSSEL_APORT4YCH14,
DECL|acmpInputAPORT4YCH16|enumerator|acmpInputAPORT4YCH16 = _ACMP_INPUTSEL_POSSEL_APORT4YCH16,
DECL|acmpInputAPORT4YCH18|enumerator|acmpInputAPORT4YCH18 = _ACMP_INPUTSEL_POSSEL_APORT4YCH18,
DECL|acmpInputAPORT4YCH20|enumerator|acmpInputAPORT4YCH20 = _ACMP_INPUTSEL_POSSEL_APORT4YCH20,
DECL|acmpInputAPORT4YCH22|enumerator|acmpInputAPORT4YCH22 = _ACMP_INPUTSEL_POSSEL_APORT4YCH22,
DECL|acmpInputAPORT4YCH24|enumerator|acmpInputAPORT4YCH24 = _ACMP_INPUTSEL_POSSEL_APORT4YCH24,
DECL|acmpInputAPORT4YCH26|enumerator|acmpInputAPORT4YCH26 = _ACMP_INPUTSEL_POSSEL_APORT4YCH26,
DECL|acmpInputAPORT4YCH28|enumerator|acmpInputAPORT4YCH28 = _ACMP_INPUTSEL_POSSEL_APORT4YCH28,
DECL|acmpInputAPORT4YCH2|enumerator|acmpInputAPORT4YCH2 = _ACMP_INPUTSEL_POSSEL_APORT4YCH2,
DECL|acmpInputAPORT4YCH30|enumerator|acmpInputAPORT4YCH30 = _ACMP_INPUTSEL_POSSEL_APORT4YCH30,
DECL|acmpInputAPORT4YCH4|enumerator|acmpInputAPORT4YCH4 = _ACMP_INPUTSEL_POSSEL_APORT4YCH4,
DECL|acmpInputAPORT4YCH6|enumerator|acmpInputAPORT4YCH6 = _ACMP_INPUTSEL_POSSEL_APORT4YCH6,
DECL|acmpInputAPORT4YCH8|enumerator|acmpInputAPORT4YCH8 = _ACMP_INPUTSEL_POSSEL_APORT4YCH8,
DECL|acmpInputDACOUT0|enumerator|acmpInputDACOUT0 = _ACMP_INPUTSEL_POSSEL_DACOUT0,
DECL|acmpInputDACOUT1|enumerator|acmpInputDACOUT1 = _ACMP_INPUTSEL_POSSEL_DACOUT1,
DECL|acmpInputRangeFull|enumerator|acmpInputRangeFull = _ACMP_CTRL_INPUTRANGE_FULL, /**< Input can be from 0 to Vdd */
DECL|acmpInputRangeHigh|enumerator|acmpInputRangeHigh = _ACMP_CTRL_INPUTRANGE_GTVDDDIV2, /**< Input will always be greater than Vdd/2 */
DECL|acmpInputRangeLow|enumerator|acmpInputRangeLow = _ACMP_CTRL_INPUTRANGE_LTVDDDIV2 /**< Input will always be less than Vdd/2 */
DECL|acmpInputVADIV|enumerator|acmpInputVADIV = _ACMP_INPUTSEL_POSSEL_VADIV,
DECL|acmpInputVBDIV|enumerator|acmpInputVBDIV = _ACMP_INPUTSEL_POSSEL_VBDIV,
DECL|acmpInputVDD|enumerator|acmpInputVDD = _ACMP_INPUTSEL_POSSEL_VDD,
DECL|acmpInputVLP|enumerator|acmpInputVLP = _ACMP_INPUTSEL_POSSEL_VLP,
DECL|acmpInputVSS|enumerator|acmpInputVSS = _ACMP_INPUTSEL_POSSEL_VSS,
DECL|acmpPowerSourceAvdd|enumerator|acmpPowerSourceAvdd = _ACMP_CTRL_PWRSEL_AVDD, /**< Power the ACMP using the AVDD supply */
DECL|acmpPowerSourceIOVdd0|enumerator|acmpPowerSourceIOVdd0 = _ACMP_CTRL_PWRSEL_IOVDD0, /**< Power the ACMP using the IOVDD/IOVDD0 supply */
DECL|acmpPowerSourceIOVdd1|enumerator|acmpPowerSourceIOVdd1 = _ACMP_CTRL_PWRSEL_IOVDD1, /**< Power the ACMP using the IOVDD1 supply (if part has two I/O voltages) */
DECL|acmpPowerSourceVddVreg|enumerator|acmpPowerSourceVddVreg = _ACMP_CTRL_PWRSEL_VREGVDD, /**< Power the ACMP using the VREGVDD supply */
DECL|acmpResistor0|enumerator|acmpResistor0 = _ACMP_INPUTSEL_CSRESSEL_RES0, /**< Resistor value 0 */
DECL|acmpResistor1|enumerator|acmpResistor1 = _ACMP_INPUTSEL_CSRESSEL_RES1, /**< Resistor value 1 */
DECL|acmpResistor2|enumerator|acmpResistor2 = _ACMP_INPUTSEL_CSRESSEL_RES2, /**< Resistor value 2 */
DECL|acmpResistor3|enumerator|acmpResistor3 = _ACMP_INPUTSEL_CSRESSEL_RES3, /**< Resistor value 3 */
DECL|acmpResistor4|enumerator|acmpResistor4 = _ACMP_INPUTSEL_CSRESSEL_RES4, /**< Resistor value 4 */
DECL|acmpResistor5|enumerator|acmpResistor5 = _ACMP_INPUTSEL_CSRESSEL_RES5, /**< Resistor value 5 */
DECL|acmpResistor6|enumerator|acmpResistor6 = _ACMP_INPUTSEL_CSRESSEL_RES6, /**< Resistor value 6 */
DECL|acmpResistor7|enumerator|acmpResistor7 = _ACMP_INPUTSEL_CSRESSEL_RES7, /**< Resistor value 7 */
DECL|acmpVAInputAPORT1XCH0|enumerator|acmpVAInputAPORT1XCH0 = _ACMP_INPUTSEL_VASEL_APORT1XCH0,
DECL|acmpVAInputAPORT1XCH10|enumerator|acmpVAInputAPORT1XCH10 = _ACMP_INPUTSEL_VASEL_APORT1XCH10,
DECL|acmpVAInputAPORT1XCH12|enumerator|acmpVAInputAPORT1XCH12 = _ACMP_INPUTSEL_VASEL_APORT1XCH12,
DECL|acmpVAInputAPORT1XCH14|enumerator|acmpVAInputAPORT1XCH14 = _ACMP_INPUTSEL_VASEL_APORT1XCH14,
DECL|acmpVAInputAPORT1XCH16|enumerator|acmpVAInputAPORT1XCH16 = _ACMP_INPUTSEL_VASEL_APORT1XCH16,
DECL|acmpVAInputAPORT1XCH18|enumerator|acmpVAInputAPORT1XCH18 = _ACMP_INPUTSEL_VASEL_APORT1XCH18,
DECL|acmpVAInputAPORT1XCH20|enumerator|acmpVAInputAPORT1XCH20 = _ACMP_INPUTSEL_VASEL_APORT1XCH20,
DECL|acmpVAInputAPORT1XCH22|enumerator|acmpVAInputAPORT1XCH22 = _ACMP_INPUTSEL_VASEL_APORT1XCH22,
DECL|acmpVAInputAPORT1XCH24|enumerator|acmpVAInputAPORT1XCH24 = _ACMP_INPUTSEL_VASEL_APORT1XCH24,
DECL|acmpVAInputAPORT1XCH26|enumerator|acmpVAInputAPORT1XCH26 = _ACMP_INPUTSEL_VASEL_APORT1XCH26,
DECL|acmpVAInputAPORT1XCH28|enumerator|acmpVAInputAPORT1XCH28 = _ACMP_INPUTSEL_VASEL_APORT1XCH28,
DECL|acmpVAInputAPORT1XCH2|enumerator|acmpVAInputAPORT1XCH2 = _ACMP_INPUTSEL_VASEL_APORT1XCH2,
DECL|acmpVAInputAPORT1XCH30|enumerator|acmpVAInputAPORT1XCH30 = _ACMP_INPUTSEL_VASEL_APORT1XCH30,
DECL|acmpVAInputAPORT1XCH4|enumerator|acmpVAInputAPORT1XCH4 = _ACMP_INPUTSEL_VASEL_APORT1XCH4,
DECL|acmpVAInputAPORT1XCH6|enumerator|acmpVAInputAPORT1XCH6 = _ACMP_INPUTSEL_VASEL_APORT1XCH6,
DECL|acmpVAInputAPORT1XCH8|enumerator|acmpVAInputAPORT1XCH8 = _ACMP_INPUTSEL_VASEL_APORT1XCH8,
DECL|acmpVAInputAPORT1YCH11|enumerator|acmpVAInputAPORT1YCH11 = _ACMP_INPUTSEL_VASEL_APORT1YCH11,
DECL|acmpVAInputAPORT1YCH13|enumerator|acmpVAInputAPORT1YCH13 = _ACMP_INPUTSEL_VASEL_APORT1YCH13,
DECL|acmpVAInputAPORT1YCH15|enumerator|acmpVAInputAPORT1YCH15 = _ACMP_INPUTSEL_VASEL_APORT1YCH15,
DECL|acmpVAInputAPORT1YCH17|enumerator|acmpVAInputAPORT1YCH17 = _ACMP_INPUTSEL_VASEL_APORT1YCH17,
DECL|acmpVAInputAPORT1YCH19|enumerator|acmpVAInputAPORT1YCH19 = _ACMP_INPUTSEL_VASEL_APORT1YCH19,
DECL|acmpVAInputAPORT1YCH1|enumerator|acmpVAInputAPORT1YCH1 = _ACMP_INPUTSEL_VASEL_APORT1YCH1,
DECL|acmpVAInputAPORT1YCH21|enumerator|acmpVAInputAPORT1YCH21 = _ACMP_INPUTSEL_VASEL_APORT1YCH21,
DECL|acmpVAInputAPORT1YCH23|enumerator|acmpVAInputAPORT1YCH23 = _ACMP_INPUTSEL_VASEL_APORT1YCH23,
DECL|acmpVAInputAPORT1YCH25|enumerator|acmpVAInputAPORT1YCH25 = _ACMP_INPUTSEL_VASEL_APORT1YCH25,
DECL|acmpVAInputAPORT1YCH27|enumerator|acmpVAInputAPORT1YCH27 = _ACMP_INPUTSEL_VASEL_APORT1YCH27,
DECL|acmpVAInputAPORT1YCH29|enumerator|acmpVAInputAPORT1YCH29 = _ACMP_INPUTSEL_VASEL_APORT1YCH29,
DECL|acmpVAInputAPORT1YCH31|enumerator|acmpVAInputAPORT1YCH31 = _ACMP_INPUTSEL_VASEL_APORT1YCH31
DECL|acmpVAInputAPORT1YCH3|enumerator|acmpVAInputAPORT1YCH3 = _ACMP_INPUTSEL_VASEL_APORT1YCH3,
DECL|acmpVAInputAPORT1YCH5|enumerator|acmpVAInputAPORT1YCH5 = _ACMP_INPUTSEL_VASEL_APORT1YCH5,
DECL|acmpVAInputAPORT1YCH7|enumerator|acmpVAInputAPORT1YCH7 = _ACMP_INPUTSEL_VASEL_APORT1YCH7,
DECL|acmpVAInputAPORT1YCH9|enumerator|acmpVAInputAPORT1YCH9 = _ACMP_INPUTSEL_VASEL_APORT1YCH9,
DECL|acmpVAInputAPORT2YCH0|enumerator|acmpVAInputAPORT2YCH0 = _ACMP_INPUTSEL_VASEL_APORT2YCH0,
DECL|acmpVAInputAPORT2YCH10|enumerator|acmpVAInputAPORT2YCH10 = _ACMP_INPUTSEL_VASEL_APORT2YCH10,
DECL|acmpVAInputAPORT2YCH12|enumerator|acmpVAInputAPORT2YCH12 = _ACMP_INPUTSEL_VASEL_APORT2YCH12,
DECL|acmpVAInputAPORT2YCH14|enumerator|acmpVAInputAPORT2YCH14 = _ACMP_INPUTSEL_VASEL_APORT2YCH14,
DECL|acmpVAInputAPORT2YCH16|enumerator|acmpVAInputAPORT2YCH16 = _ACMP_INPUTSEL_VASEL_APORT2YCH16,
DECL|acmpVAInputAPORT2YCH18|enumerator|acmpVAInputAPORT2YCH18 = _ACMP_INPUTSEL_VASEL_APORT2YCH18,
DECL|acmpVAInputAPORT2YCH20|enumerator|acmpVAInputAPORT2YCH20 = _ACMP_INPUTSEL_VASEL_APORT2YCH20,
DECL|acmpVAInputAPORT2YCH22|enumerator|acmpVAInputAPORT2YCH22 = _ACMP_INPUTSEL_VASEL_APORT2YCH22,
DECL|acmpVAInputAPORT2YCH24|enumerator|acmpVAInputAPORT2YCH24 = _ACMP_INPUTSEL_VASEL_APORT2YCH24,
DECL|acmpVAInputAPORT2YCH26|enumerator|acmpVAInputAPORT2YCH26 = _ACMP_INPUTSEL_VASEL_APORT2YCH26,
DECL|acmpVAInputAPORT2YCH28|enumerator|acmpVAInputAPORT2YCH28 = _ACMP_INPUTSEL_VASEL_APORT2YCH28,
DECL|acmpVAInputAPORT2YCH2|enumerator|acmpVAInputAPORT2YCH2 = _ACMP_INPUTSEL_VASEL_APORT2YCH2,
DECL|acmpVAInputAPORT2YCH30|enumerator|acmpVAInputAPORT2YCH30 = _ACMP_INPUTSEL_VASEL_APORT2YCH30,
DECL|acmpVAInputAPORT2YCH4|enumerator|acmpVAInputAPORT2YCH4 = _ACMP_INPUTSEL_VASEL_APORT2YCH4,
DECL|acmpVAInputAPORT2YCH6|enumerator|acmpVAInputAPORT2YCH6 = _ACMP_INPUTSEL_VASEL_APORT2YCH6,
DECL|acmpVAInputAPORT2YCH8|enumerator|acmpVAInputAPORT2YCH8 = _ACMP_INPUTSEL_VASEL_APORT2YCH8,
DECL|acmpVAInputVDD|enumerator|acmpVAInputVDD = _ACMP_INPUTSEL_VASEL_VDD,
DECL|acmpVBInput1V25|enumerator|acmpVBInput1V25 = _ACMP_INPUTSEL_VBSEL_1V25,
DECL|acmpVBInput2V5|enumerator|acmpVBInput2V5 = _ACMP_INPUTSEL_VBSEL_2V5
DECL|acmpVLPInputVADIV|enumerator|acmpVLPInputVADIV = _ACMP_INPUTSEL_VLPSEL_VADIV,
DECL|acmpVLPInputVBDIV|enumerator|acmpVLPInputVBDIV = _ACMP_INPUTSEL_VLPSEL_VBDIV
DECL|acmpWarmTime128|enumerator|acmpWarmTime128 = _ACMP_CTRL_WARMTIME_128CYCLES,
DECL|acmpWarmTime16|enumerator|acmpWarmTime16 = _ACMP_CTRL_WARMTIME_16CYCLES,
DECL|acmpWarmTime256|enumerator|acmpWarmTime256 = _ACMP_CTRL_WARMTIME_256CYCLES,
DECL|acmpWarmTime32|enumerator|acmpWarmTime32 = _ACMP_CTRL_WARMTIME_32CYCLES,
DECL|acmpWarmTime4|enumerator|acmpWarmTime4 = _ACMP_CTRL_WARMTIME_4CYCLES,
DECL|acmpWarmTime512|enumerator|acmpWarmTime512 = _ACMP_CTRL_WARMTIME_512CYCLES
DECL|acmpWarmTime64|enumerator|acmpWarmTime64 = _ACMP_CTRL_WARMTIME_64CYCLES,
DECL|acmpWarmTime8|enumerator|acmpWarmTime8 = _ACMP_CTRL_WARMTIME_8CYCLES,
DECL|biasProg|member|uint32_t biasProg;
DECL|biasProg|member|uint32_t biasProg;
DECL|div0|member|uint32_t div0;
DECL|div0|member|uint32_t div0;
DECL|div1|member|uint32_t div1;
DECL|div1|member|uint32_t div1;
DECL|enable|member|bool enable;
DECL|enable|member|bool enable;
DECL|fullBias|member|bool fullBias;
DECL|fullBias|member|bool fullBias;
DECL|halfBias|member|bool halfBias;
DECL|halfBias|member|bool halfBias;
DECL|hysteresisLevel_0|member|ACMP_HysteresisLevel_TypeDef hysteresisLevel_0;
DECL|hysteresisLevel_0|member|ACMP_HysteresisLevel_TypeDef hysteresisLevel_0;
DECL|hysteresisLevel_1|member|ACMP_HysteresisLevel_TypeDef hysteresisLevel_1;
DECL|hysteresisLevel_1|member|ACMP_HysteresisLevel_TypeDef hysteresisLevel_1;
DECL|hysteresisLevel|member|ACMP_HysteresisLevel_TypeDef hysteresisLevel;
DECL|hysteresisLevel|member|ACMP_HysteresisLevel_TypeDef hysteresisLevel;
DECL|inactiveValue|member|bool inactiveValue;
DECL|inputRange|member|ACMP_InputRange_TypeDef inputRange;
DECL|input|member|ACMP_VAInput_TypeDef input; /**< VA voltage input source */
DECL|input|member|ACMP_VBInput_TypeDef input; /**< VB Voltage input source */
DECL|interruptOnFallingEdge|member|bool interruptOnFallingEdge;
DECL|interruptOnRisingEdge|member|bool interruptOnRisingEdge;
DECL|lowPowerReferenceEnabled|member|bool lowPowerReferenceEnabled;
DECL|lowPowerReferenceEnabled|member|bool lowPowerReferenceEnabled;
DECL|powerSource|member|ACMP_PowerSource_TypeDef powerSource;
DECL|resistor|member|ACMP_CapsenseResistor_TypeDef resistor;
DECL|vddLevelHigh|member|uint32_t vddLevelHigh;
DECL|vddLevelLow|member|uint32_t vddLevelLow;
DECL|vddLevel|member|uint32_t vddLevel;
DECL|vddLevel|member|uint32_t vddLevel;
DECL|vlpInput|member|ACMP_VLPInput_Typedef vlpInput;
DECL|warmTime|member|ACMP_WarmTime_TypeDef warmTime;
DECL|warmTime|member|ACMP_WarmTime_TypeDef warmTime;
