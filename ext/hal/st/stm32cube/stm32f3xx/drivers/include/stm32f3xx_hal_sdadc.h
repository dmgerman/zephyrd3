DECL|CommonMode|member|uint32_t CommonMode; /*!< Specifies the common mode setting (VSSA, VDDA, VDDA/2U).
DECL|ErrorCode|member|uint32_t ErrorCode; /*!< SDADC Error code */
DECL|ExtTriggerEdge|member|uint32_t ExtTriggerEdge; /*!< Rising, falling or both edges selected */
DECL|FastConversionMode|member|uint32_t FastConversionMode; /*!< Specifies if Fast conversion mode is enabled or not.
DECL|Gain|member|uint32_t Gain; /*!< Specifies the gain setting.
DECL|HAL_SDADC_STATE_CALIB|enumerator|HAL_SDADC_STATE_CALIB = 0x02U, /*!< SDADC calibration in progress */
DECL|HAL_SDADC_STATE_ERROR|enumerator|HAL_SDADC_STATE_ERROR = 0xFFU, /*!< SDADC state error */
DECL|HAL_SDADC_STATE_INJ|enumerator|HAL_SDADC_STATE_INJ = 0x04U, /*!< SDADC injected conversion in progress */
DECL|HAL_SDADC_STATE_READY|enumerator|HAL_SDADC_STATE_READY = 0x01U, /*!< SDADC initialized and ready for use */
DECL|HAL_SDADC_STATE_REG_INJ|enumerator|HAL_SDADC_STATE_REG_INJ = 0x05U, /*!< SDADC regular and injected conversions in progress */
DECL|HAL_SDADC_STATE_REG|enumerator|HAL_SDADC_STATE_REG = 0x03U, /*!< SDADC regular conversion in progress */
DECL|HAL_SDADC_STATE_RESET|enumerator|HAL_SDADC_STATE_RESET = 0x00U, /*!< SDADC not initialized */
DECL|HAL_SDADC_StateTypeDef|typedef|}HAL_SDADC_StateTypeDef;
DECL|IS_SDADC_CALIB_SEQUENCE|macro|IS_SDADC_CALIB_SEQUENCE
DECL|IS_SDADC_COMMON_MODE|macro|IS_SDADC_COMMON_MODE
DECL|IS_SDADC_CONF_INDEX|macro|IS_SDADC_CONF_INDEX
DECL|IS_SDADC_CONTINUOUS_MODE|macro|IS_SDADC_CONTINUOUS_MODE
DECL|IS_SDADC_EXT_INJEC_TRIG|macro|IS_SDADC_EXT_INJEC_TRIG
DECL|IS_SDADC_EXT_TRIG_EDGE|macro|IS_SDADC_EXT_TRIG_EDGE
DECL|IS_SDADC_FAST_CONV_MODE|macro|IS_SDADC_FAST_CONV_MODE
DECL|IS_SDADC_GAIN|macro|IS_SDADC_GAIN
DECL|IS_SDADC_INJECTED_CHANNEL|macro|IS_SDADC_INJECTED_CHANNEL
DECL|IS_SDADC_INJECTED_DELAY|macro|IS_SDADC_INJECTED_DELAY
DECL|IS_SDADC_INJECTED_TRIGGER|macro|IS_SDADC_INJECTED_TRIGGER
DECL|IS_SDADC_INPUT_MODE|macro|IS_SDADC_INPUT_MODE
DECL|IS_SDADC_LOWPOWER_MODE|macro|IS_SDADC_LOWPOWER_MODE
DECL|IS_SDADC_MULTIMODE_TYPE|macro|IS_SDADC_MULTIMODE_TYPE
DECL|IS_SDADC_OFFSET_VALUE|macro|IS_SDADC_OFFSET_VALUE
DECL|IS_SDADC_REGULAR_CHANNEL|macro|IS_SDADC_REGULAR_CHANNEL
DECL|IS_SDADC_REGULAR_TRIGGER|macro|IS_SDADC_REGULAR_TRIGGER
DECL|IS_SDADC_SLOW_CLOCK_MODE|macro|IS_SDADC_SLOW_CLOCK_MODE
DECL|IS_SDADC_VREF|macro|IS_SDADC_VREF
DECL|IdleLowPowerMode|member|uint32_t IdleLowPowerMode; /*!< Specifies if SDADC can enter in power down or standby when idle.
DECL|Init|member|SDADC_InitTypeDef Init; /*!< SDADC init parameters */
DECL|InjConvRemaining|member|uint32_t InjConvRemaining; /*!< Injected conversion remaining */
DECL|InjectedChannelsNbr|member|uint32_t InjectedChannelsNbr; /*!< Number of channels in injected sequence */
DECL|InjectedContMode|member|uint32_t InjectedContMode; /*!< Injected conversion continuous mode */
DECL|InjectedMultimode|member|uint32_t InjectedMultimode; /*!< Current type of injected multimode */
DECL|InjectedTrigger|member|uint32_t InjectedTrigger; /*!< Current trigger used for injected conversion */
DECL|InputMode|member|uint32_t InputMode; /*!< Specifies the input mode (single ended, differential...)
DECL|Instance|member|SDADC_TypeDef *Instance; /*!< SDADC registers base address */
DECL|Offset|member|uint32_t Offset; /*!< Specifies the 12-bit offset value.
DECL|ReferenceVoltage|member|uint32_t ReferenceVoltage; /*!< Specifies the reference voltage.
DECL|RegularContMode|member|uint32_t RegularContMode; /*!< Regular conversion continuous mode */
DECL|RegularMultimode|member|uint32_t RegularMultimode; /*!< current type of regular multimode */
DECL|RegularTrigger|member|uint32_t RegularTrigger; /*!< Current trigger used for regular conversion */
DECL|SDADC_CALIBRATION_SEQ_1|macro|SDADC_CALIBRATION_SEQ_1
DECL|SDADC_CALIBRATION_SEQ_2|macro|SDADC_CALIBRATION_SEQ_2
DECL|SDADC_CALIBRATION_SEQ_3|macro|SDADC_CALIBRATION_SEQ_3
DECL|SDADC_CHANNEL_0|macro|SDADC_CHANNEL_0
DECL|SDADC_CHANNEL_1|macro|SDADC_CHANNEL_1
DECL|SDADC_CHANNEL_2|macro|SDADC_CHANNEL_2
DECL|SDADC_CHANNEL_3|macro|SDADC_CHANNEL_3
DECL|SDADC_CHANNEL_4|macro|SDADC_CHANNEL_4
DECL|SDADC_CHANNEL_5|macro|SDADC_CHANNEL_5
DECL|SDADC_CHANNEL_6|macro|SDADC_CHANNEL_6
DECL|SDADC_CHANNEL_7|macro|SDADC_CHANNEL_7
DECL|SDADC_CHANNEL_8|macro|SDADC_CHANNEL_8
DECL|SDADC_COMMON_MODE_VDDA_2|macro|SDADC_COMMON_MODE_VDDA_2
DECL|SDADC_COMMON_MODE_VDDA|macro|SDADC_COMMON_MODE_VDDA
DECL|SDADC_COMMON_MODE_VSSA|macro|SDADC_COMMON_MODE_VSSA
DECL|SDADC_CONF_INDEX_0|macro|SDADC_CONF_INDEX_0
DECL|SDADC_CONF_INDEX_1|macro|SDADC_CONF_INDEX_1
DECL|SDADC_CONF_INDEX_2|macro|SDADC_CONF_INDEX_2
DECL|SDADC_CONTINUOUS_CONV_OFF|macro|SDADC_CONTINUOUS_CONV_OFF
DECL|SDADC_CONTINUOUS_CONV_ON|macro|SDADC_CONTINUOUS_CONV_ON
DECL|SDADC_ConfParamTypeDef|typedef|}SDADC_ConfParamTypeDef;
DECL|SDADC_ERROR_DMA|macro|SDADC_ERROR_DMA
DECL|SDADC_ERROR_INJECTED_OVERRUN|macro|SDADC_ERROR_INJECTED_OVERRUN
DECL|SDADC_ERROR_NONE|macro|SDADC_ERROR_NONE
DECL|SDADC_ERROR_REGULAR_OVERRUN|macro|SDADC_ERROR_REGULAR_OVERRUN
DECL|SDADC_EXTERNAL_TRIGGER|macro|SDADC_EXTERNAL_TRIGGER
DECL|SDADC_EXT_TRIG_BOTH_EDGES|macro|SDADC_EXT_TRIG_BOTH_EDGES
DECL|SDADC_EXT_TRIG_EXTI11|macro|SDADC_EXT_TRIG_EXTI11
DECL|SDADC_EXT_TRIG_EXTI15|macro|SDADC_EXT_TRIG_EXTI15
DECL|SDADC_EXT_TRIG_FALLING_EDGE|macro|SDADC_EXT_TRIG_FALLING_EDGE
DECL|SDADC_EXT_TRIG_RISING_EDGE|macro|SDADC_EXT_TRIG_RISING_EDGE
DECL|SDADC_EXT_TRIG_TIM12_CC1|macro|SDADC_EXT_TRIG_TIM12_CC1
DECL|SDADC_EXT_TRIG_TIM12_CC2|macro|SDADC_EXT_TRIG_TIM12_CC2
DECL|SDADC_EXT_TRIG_TIM13_CC1|macro|SDADC_EXT_TRIG_TIM13_CC1
DECL|SDADC_EXT_TRIG_TIM14_CC1|macro|SDADC_EXT_TRIG_TIM14_CC1
DECL|SDADC_EXT_TRIG_TIM15_CC2|macro|SDADC_EXT_TRIG_TIM15_CC2
DECL|SDADC_EXT_TRIG_TIM16_CC1|macro|SDADC_EXT_TRIG_TIM16_CC1
DECL|SDADC_EXT_TRIG_TIM17_CC1|macro|SDADC_EXT_TRIG_TIM17_CC1
DECL|SDADC_EXT_TRIG_TIM19_CC2|macro|SDADC_EXT_TRIG_TIM19_CC2
DECL|SDADC_EXT_TRIG_TIM19_CC3|macro|SDADC_EXT_TRIG_TIM19_CC3
DECL|SDADC_EXT_TRIG_TIM19_CC4|macro|SDADC_EXT_TRIG_TIM19_CC4
DECL|SDADC_EXT_TRIG_TIM2_CC3|macro|SDADC_EXT_TRIG_TIM2_CC3
DECL|SDADC_EXT_TRIG_TIM2_CC4|macro|SDADC_EXT_TRIG_TIM2_CC4
DECL|SDADC_EXT_TRIG_TIM3_CC1|macro|SDADC_EXT_TRIG_TIM3_CC1
DECL|SDADC_EXT_TRIG_TIM3_CC2|macro|SDADC_EXT_TRIG_TIM3_CC2
DECL|SDADC_EXT_TRIG_TIM3_CC3|macro|SDADC_EXT_TRIG_TIM3_CC3
DECL|SDADC_EXT_TRIG_TIM4_CC1|macro|SDADC_EXT_TRIG_TIM4_CC1
DECL|SDADC_EXT_TRIG_TIM4_CC2|macro|SDADC_EXT_TRIG_TIM4_CC2
DECL|SDADC_EXT_TRIG_TIM4_CC3|macro|SDADC_EXT_TRIG_TIM4_CC3
DECL|SDADC_FAST_CONV_DISABLE|macro|SDADC_FAST_CONV_DISABLE
DECL|SDADC_FAST_CONV_ENABLE|macro|SDADC_FAST_CONV_ENABLE
DECL|SDADC_FLAG_EOCAL|macro|SDADC_FLAG_EOCAL
DECL|SDADC_FLAG_JEOC|macro|SDADC_FLAG_JEOC
DECL|SDADC_FLAG_JOVR|macro|SDADC_FLAG_JOVR
DECL|SDADC_FLAG_REOC|macro|SDADC_FLAG_REOC
DECL|SDADC_FLAG_ROVR|macro|SDADC_FLAG_ROVR
DECL|SDADC_GAIN_16|macro|SDADC_GAIN_16
DECL|SDADC_GAIN_1_2|macro|SDADC_GAIN_1_2
DECL|SDADC_GAIN_1|macro|SDADC_GAIN_1
DECL|SDADC_GAIN_2|macro|SDADC_GAIN_2
DECL|SDADC_GAIN_32|macro|SDADC_GAIN_32
DECL|SDADC_GAIN_4|macro|SDADC_GAIN_4
DECL|SDADC_GAIN_8|macro|SDADC_GAIN_8
DECL|SDADC_HandleTypeDef|typedef|}SDADC_HandleTypeDef;
DECL|SDADC_INJECTED_DELAY_NONE|macro|SDADC_INJECTED_DELAY_NONE
DECL|SDADC_INJECTED_DELAY|macro|SDADC_INJECTED_DELAY
DECL|SDADC_INPUT_MODE_DIFF|macro|SDADC_INPUT_MODE_DIFF
DECL|SDADC_INPUT_MODE_SE_OFFSET|macro|SDADC_INPUT_MODE_SE_OFFSET
DECL|SDADC_INPUT_MODE_SE_ZERO_REFERENCE|macro|SDADC_INPUT_MODE_SE_ZERO_REFERENCE
DECL|SDADC_IT_EOCAL|macro|SDADC_IT_EOCAL
DECL|SDADC_IT_JEOC|macro|SDADC_IT_JEOC
DECL|SDADC_IT_JOVR|macro|SDADC_IT_JOVR
DECL|SDADC_IT_REOC|macro|SDADC_IT_REOC
DECL|SDADC_IT_ROVR|macro|SDADC_IT_ROVR
DECL|SDADC_InitTypeDef|typedef|}SDADC_InitTypeDef;
DECL|SDADC_LOWPOWER_NONE|macro|SDADC_LOWPOWER_NONE
DECL|SDADC_LOWPOWER_POWERDOWN|macro|SDADC_LOWPOWER_POWERDOWN
DECL|SDADC_LOWPOWER_STANDBY|macro|SDADC_LOWPOWER_STANDBY
DECL|SDADC_MULTIMODE_SDADC1_SDADC2|macro|SDADC_MULTIMODE_SDADC1_SDADC2
DECL|SDADC_MULTIMODE_SDADC1_SDADC3|macro|SDADC_MULTIMODE_SDADC1_SDADC3
DECL|SDADC_SLOW_CLOCK_DISABLE|macro|SDADC_SLOW_CLOCK_DISABLE
DECL|SDADC_SLOW_CLOCK_ENABLE|macro|SDADC_SLOW_CLOCK_ENABLE
DECL|SDADC_SOFTWARE_TRIGGER|macro|SDADC_SOFTWARE_TRIGGER
DECL|SDADC_SYNCHRONOUS_TRIGGER|macro|SDADC_SYNCHRONOUS_TRIGGER
DECL|SDADC_VREF_EXT|macro|SDADC_VREF_EXT
DECL|SDADC_VREF_VDDA|macro|SDADC_VREF_VDDA
DECL|SDADC_VREF_VREFINT1|macro|SDADC_VREF_VREFINT1
DECL|SDADC_VREF_VREFINT2|macro|SDADC_VREF_VREFINT2
DECL|SlowClockMode|member|uint32_t SlowClockMode; /*!< Specifies if slow clock mode is enabled or not.
DECL|State|member|HAL_SDADC_StateTypeDef State; /*!< SDADC state */
DECL|__HAL_SDADC_CLEAR_FLAG|macro|__HAL_SDADC_CLEAR_FLAG
DECL|__HAL_SDADC_DISABLE_IT|macro|__HAL_SDADC_DISABLE_IT
DECL|__HAL_SDADC_ENABLE_IT|macro|__HAL_SDADC_ENABLE_IT
DECL|__HAL_SDADC_GET_FLAG|macro|__HAL_SDADC_GET_FLAG
DECL|__HAL_SDADC_GET_IT_SOURCE|macro|__HAL_SDADC_GET_IT_SOURCE
DECL|__HAL_SDADC_RESET_HANDLE_STATE|macro|__HAL_SDADC_RESET_HANDLE_STATE
DECL|__STM32F3xx_SDADC_H|macro|__STM32F3xx_SDADC_H
DECL|hdma|member|DMA_HandleTypeDef *hdma; /*!< SDADC DMA Handle parameters */
