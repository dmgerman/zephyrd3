DECL|AcquisitionMode|member|uint32_t AcquisitionMode; /*!< Acquisition mode */
DECL|CTPulseHighLength|member|uint32_t CTPulseHighLength; /*!< Charge-transfer high pulse length */
DECL|CTPulseLowLength|member|uint32_t CTPulseLowLength; /*!< Charge-transfer low pulse length */
DECL|ChannelIOs|member|uint32_t ChannelIOs; /*!< Channel IOs mask */
DECL|ChannelIOs|member|uint32_t ChannelIOs; /*!< Channel IOs mask */
DECL|HAL_TSC_STATE_BUSY|enumerator|HAL_TSC_STATE_BUSY = 0x02, /*!< TSC initialization or acquisition is on-going */
DECL|HAL_TSC_STATE_ERROR|enumerator|HAL_TSC_STATE_ERROR = 0x03 /*!< Acquisition is completed with max count error */
DECL|HAL_TSC_STATE_READY|enumerator|HAL_TSC_STATE_READY = 0x01, /*!< TSC registers are initialized or acquisition is completed with success */
DECL|HAL_TSC_STATE_RESET|enumerator|HAL_TSC_STATE_RESET = 0x00, /*!< TSC registers have their reset value */
DECL|HAL_TSC_StateTypeDef|typedef|} HAL_TSC_StateTypeDef;
DECL|IODefaultMode|member|uint32_t IODefaultMode; /*!< IO default mode */
DECL|IS_GROUP_INDEX|macro|IS_GROUP_INDEX
DECL|IS_TSC_ACQ_MODE|macro|IS_TSC_ACQ_MODE
DECL|IS_TSC_CTPH|macro|IS_TSC_CTPH
DECL|IS_TSC_CTPL|macro|IS_TSC_CTPL
DECL|IS_TSC_IODEF|macro|IS_TSC_IODEF
DECL|IS_TSC_IOMODE|macro|IS_TSC_IOMODE
DECL|IS_TSC_MCE_IT|macro|IS_TSC_MCE_IT
DECL|IS_TSC_MCV|macro|IS_TSC_MCV
DECL|IS_TSC_PG_PRESC|macro|IS_TSC_PG_PRESC
DECL|IS_TSC_SSD|macro|IS_TSC_SSD
DECL|IS_TSC_SS_PRESC|macro|IS_TSC_SS_PRESC
DECL|IS_TSC_SS|macro|IS_TSC_SS
DECL|IS_TSC_SYNC_POL|macro|IS_TSC_SYNC_POL
DECL|Init|member|TSC_InitTypeDef Init; /*!< Initialization parameters */
DECL|Instance|member|TSC_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< Lock feature */
DECL|MaxCountInterrupt|member|uint32_t MaxCountInterrupt; /*!< Max count interrupt activation */
DECL|MaxCountValue|member|uint32_t MaxCountValue; /*!< Max count value */
DECL|PulseGeneratorPrescaler|member|uint32_t PulseGeneratorPrescaler; /*!< Pulse generator prescaler */
DECL|SamplingIOs|member|uint32_t SamplingIOs; /*!< Sampling IOs mask */
DECL|SamplingIOs|member|uint32_t SamplingIOs; /*!< Sampling IOs mask */
DECL|ShieldIOs|member|uint32_t ShieldIOs; /*!< Shield IOs mask */
DECL|ShieldIOs|member|uint32_t ShieldIOs; /*!< Shield IOs mask */
DECL|SpreadSpectrumDeviation|member|uint32_t SpreadSpectrumDeviation; /*!< Spread spectrum deviation */
DECL|SpreadSpectrumPrescaler|member|uint32_t SpreadSpectrumPrescaler; /*!< Spread spectrum prescaler */
DECL|SpreadSpectrum|member|uint32_t SpreadSpectrum; /*!< Spread spectrum activation */
DECL|State|member|__IO HAL_TSC_StateTypeDef State; /*!< Peripheral state */
DECL|SynchroPinPolarity|member|uint32_t SynchroPinPolarity; /*!< Synchro pin polarity */
DECL|TSC_ACQ_MODE_NORMAL|macro|TSC_ACQ_MODE_NORMAL
DECL|TSC_ACQ_MODE_SYNCHRO|macro|TSC_ACQ_MODE_SYNCHRO
DECL|TSC_ALL_GROUPS_ALL_IOS|macro|TSC_ALL_GROUPS_ALL_IOS
DECL|TSC_ALL_GROUPS|macro|TSC_ALL_GROUPS
DECL|TSC_CTPH_10CYCLES|macro|TSC_CTPH_10CYCLES
DECL|TSC_CTPH_11CYCLES|macro|TSC_CTPH_11CYCLES
DECL|TSC_CTPH_12CYCLES|macro|TSC_CTPH_12CYCLES
DECL|TSC_CTPH_13CYCLES|macro|TSC_CTPH_13CYCLES
DECL|TSC_CTPH_14CYCLES|macro|TSC_CTPH_14CYCLES
DECL|TSC_CTPH_15CYCLES|macro|TSC_CTPH_15CYCLES
DECL|TSC_CTPH_16CYCLES|macro|TSC_CTPH_16CYCLES
DECL|TSC_CTPH_1CYCLE|macro|TSC_CTPH_1CYCLE
DECL|TSC_CTPH_2CYCLES|macro|TSC_CTPH_2CYCLES
DECL|TSC_CTPH_3CYCLES|macro|TSC_CTPH_3CYCLES
DECL|TSC_CTPH_4CYCLES|macro|TSC_CTPH_4CYCLES
DECL|TSC_CTPH_5CYCLES|macro|TSC_CTPH_5CYCLES
DECL|TSC_CTPH_6CYCLES|macro|TSC_CTPH_6CYCLES
DECL|TSC_CTPH_7CYCLES|macro|TSC_CTPH_7CYCLES
DECL|TSC_CTPH_8CYCLES|macro|TSC_CTPH_8CYCLES
DECL|TSC_CTPH_9CYCLES|macro|TSC_CTPH_9CYCLES
DECL|TSC_CTPL_10CYCLES|macro|TSC_CTPL_10CYCLES
DECL|TSC_CTPL_11CYCLES|macro|TSC_CTPL_11CYCLES
DECL|TSC_CTPL_12CYCLES|macro|TSC_CTPL_12CYCLES
DECL|TSC_CTPL_13CYCLES|macro|TSC_CTPL_13CYCLES
DECL|TSC_CTPL_14CYCLES|macro|TSC_CTPL_14CYCLES
DECL|TSC_CTPL_15CYCLES|macro|TSC_CTPL_15CYCLES
DECL|TSC_CTPL_16CYCLES|macro|TSC_CTPL_16CYCLES
DECL|TSC_CTPL_1CYCLE|macro|TSC_CTPL_1CYCLE
DECL|TSC_CTPL_2CYCLES|macro|TSC_CTPL_2CYCLES
DECL|TSC_CTPL_3CYCLES|macro|TSC_CTPL_3CYCLES
DECL|TSC_CTPL_4CYCLES|macro|TSC_CTPL_4CYCLES
DECL|TSC_CTPL_5CYCLES|macro|TSC_CTPL_5CYCLES
DECL|TSC_CTPL_6CYCLES|macro|TSC_CTPL_6CYCLES
DECL|TSC_CTPL_7CYCLES|macro|TSC_CTPL_7CYCLES
DECL|TSC_CTPL_8CYCLES|macro|TSC_CTPL_8CYCLES
DECL|TSC_CTPL_9CYCLES|macro|TSC_CTPL_9CYCLES
DECL|TSC_FLAG_EOA|macro|TSC_FLAG_EOA
DECL|TSC_FLAG_MCE|macro|TSC_FLAG_MCE
DECL|TSC_GROUP1_ALL_IOS|macro|TSC_GROUP1_ALL_IOS
DECL|TSC_GROUP1_IDX|macro|TSC_GROUP1_IDX
DECL|TSC_GROUP1_IO1|macro|TSC_GROUP1_IO1
DECL|TSC_GROUP1_IO2|macro|TSC_GROUP1_IO2
DECL|TSC_GROUP1_IO3|macro|TSC_GROUP1_IO3
DECL|TSC_GROUP1_IO4|macro|TSC_GROUP1_IO4
DECL|TSC_GROUP1|macro|TSC_GROUP1
DECL|TSC_GROUP2_ALL_IOS|macro|TSC_GROUP2_ALL_IOS
DECL|TSC_GROUP2_IDX|macro|TSC_GROUP2_IDX
DECL|TSC_GROUP2_IO1|macro|TSC_GROUP2_IO1
DECL|TSC_GROUP2_IO2|macro|TSC_GROUP2_IO2
DECL|TSC_GROUP2_IO3|macro|TSC_GROUP2_IO3
DECL|TSC_GROUP2_IO4|macro|TSC_GROUP2_IO4
DECL|TSC_GROUP2|macro|TSC_GROUP2
DECL|TSC_GROUP3_ALL_IOS|macro|TSC_GROUP3_ALL_IOS
DECL|TSC_GROUP3_IDX|macro|TSC_GROUP3_IDX
DECL|TSC_GROUP3_IO1|macro|TSC_GROUP3_IO1
DECL|TSC_GROUP3_IO2|macro|TSC_GROUP3_IO2
DECL|TSC_GROUP3_IO3|macro|TSC_GROUP3_IO3
DECL|TSC_GROUP3_IO4|macro|TSC_GROUP3_IO4
DECL|TSC_GROUP3|macro|TSC_GROUP3
DECL|TSC_GROUP4_ALL_IOS|macro|TSC_GROUP4_ALL_IOS
DECL|TSC_GROUP4_IDX|macro|TSC_GROUP4_IDX
DECL|TSC_GROUP4_IO1|macro|TSC_GROUP4_IO1
DECL|TSC_GROUP4_IO2|macro|TSC_GROUP4_IO2
DECL|TSC_GROUP4_IO3|macro|TSC_GROUP4_IO3
DECL|TSC_GROUP4_IO4|macro|TSC_GROUP4_IO4
DECL|TSC_GROUP4|macro|TSC_GROUP4
DECL|TSC_GROUP5_ALL_IOS|macro|TSC_GROUP5_ALL_IOS
DECL|TSC_GROUP5_IDX|macro|TSC_GROUP5_IDX
DECL|TSC_GROUP5_IO1|macro|TSC_GROUP5_IO1
DECL|TSC_GROUP5_IO2|macro|TSC_GROUP5_IO2
DECL|TSC_GROUP5_IO3|macro|TSC_GROUP5_IO3
DECL|TSC_GROUP5_IO4|macro|TSC_GROUP5_IO4
DECL|TSC_GROUP5|macro|TSC_GROUP5
DECL|TSC_GROUP6_ALL_IOS|macro|TSC_GROUP6_ALL_IOS
DECL|TSC_GROUP6_IDX|macro|TSC_GROUP6_IDX
DECL|TSC_GROUP6_IO1|macro|TSC_GROUP6_IO1
DECL|TSC_GROUP6_IO2|macro|TSC_GROUP6_IO2
DECL|TSC_GROUP6_IO3|macro|TSC_GROUP6_IO3
DECL|TSC_GROUP6_IO4|macro|TSC_GROUP6_IO4
DECL|TSC_GROUP6|macro|TSC_GROUP6
DECL|TSC_GROUP7_ALL_IOS|macro|TSC_GROUP7_ALL_IOS
DECL|TSC_GROUP7_IDX|macro|TSC_GROUP7_IDX
DECL|TSC_GROUP7_IO1|macro|TSC_GROUP7_IO1
DECL|TSC_GROUP7_IO2|macro|TSC_GROUP7_IO2
DECL|TSC_GROUP7_IO3|macro|TSC_GROUP7_IO3
DECL|TSC_GROUP7_IO4|macro|TSC_GROUP7_IO4
DECL|TSC_GROUP7|macro|TSC_GROUP7
DECL|TSC_GROUP8_ALL_IOS|macro|TSC_GROUP8_ALL_IOS
DECL|TSC_GROUP8_IDX|macro|TSC_GROUP8_IDX
DECL|TSC_GROUP8_IO1|macro|TSC_GROUP8_IO1
DECL|TSC_GROUP8_IO2|macro|TSC_GROUP8_IO2
DECL|TSC_GROUP8_IO3|macro|TSC_GROUP8_IO3
DECL|TSC_GROUP8_IO4|macro|TSC_GROUP8_IO4
DECL|TSC_GROUP8|macro|TSC_GROUP8
DECL|TSC_GROUP_COMPLETED|enumerator|TSC_GROUP_COMPLETED = 0x01 /*!< Acquisition on group is completed with success (no max count error) */
DECL|TSC_GROUP_ONGOING|enumerator|TSC_GROUP_ONGOING = 0x00, /*!< Acquisition on group is on-going or not started */
DECL|TSC_GroupStatusTypeDef|typedef|} TSC_GroupStatusTypeDef;
DECL|TSC_HandleTypeDef|typedef|} TSC_HandleTypeDef;
DECL|TSC_IOConfigTypeDef|typedef|} TSC_IOConfigTypeDef;
DECL|TSC_IODEF_IN_FLOAT|macro|TSC_IODEF_IN_FLOAT
DECL|TSC_IODEF_OUT_PP_LOW|macro|TSC_IODEF_OUT_PP_LOW
DECL|TSC_IOMODE_CHANNEL|macro|TSC_IOMODE_CHANNEL
DECL|TSC_IOMODE_SAMPLING|macro|TSC_IOMODE_SAMPLING
DECL|TSC_IOMODE_SHIELD|macro|TSC_IOMODE_SHIELD
DECL|TSC_IOMODE_UNUSED|macro|TSC_IOMODE_UNUSED
DECL|TSC_IT_EOA|macro|TSC_IT_EOA
DECL|TSC_IT_MCE|macro|TSC_IT_MCE
DECL|TSC_InitTypeDef|typedef|} TSC_InitTypeDef;
DECL|TSC_MCV_1023|macro|TSC_MCV_1023
DECL|TSC_MCV_16383|macro|TSC_MCV_16383
DECL|TSC_MCV_2047|macro|TSC_MCV_2047
DECL|TSC_MCV_255|macro|TSC_MCV_255
DECL|TSC_MCV_4095|macro|TSC_MCV_4095
DECL|TSC_MCV_511|macro|TSC_MCV_511
DECL|TSC_MCV_8191|macro|TSC_MCV_8191
DECL|TSC_NB_OF_GROUPS|macro|TSC_NB_OF_GROUPS
DECL|TSC_PG_PRESC_DIV128|macro|TSC_PG_PRESC_DIV128
DECL|TSC_PG_PRESC_DIV16|macro|TSC_PG_PRESC_DIV16
DECL|TSC_PG_PRESC_DIV1|macro|TSC_PG_PRESC_DIV1
DECL|TSC_PG_PRESC_DIV2|macro|TSC_PG_PRESC_DIV2
DECL|TSC_PG_PRESC_DIV32|macro|TSC_PG_PRESC_DIV32
DECL|TSC_PG_PRESC_DIV4|macro|TSC_PG_PRESC_DIV4
DECL|TSC_PG_PRESC_DIV64|macro|TSC_PG_PRESC_DIV64
DECL|TSC_PG_PRESC_DIV8|macro|TSC_PG_PRESC_DIV8
DECL|TSC_SS_PRESC_DIV1|macro|TSC_SS_PRESC_DIV1
DECL|TSC_SS_PRESC_DIV2|macro|TSC_SS_PRESC_DIV2
DECL|TSC_SYNC_POLARITY_FALLING|macro|TSC_SYNC_POLARITY_FALLING
DECL|TSC_SYNC_POLARITY_RISING|macro|TSC_SYNC_POLARITY_RISING
DECL|__HAL_TSC_CLEAR_FLAG|macro|__HAL_TSC_CLEAR_FLAG
DECL|__HAL_TSC_CLOSE_ANALOG_SWITCH|macro|__HAL_TSC_CLOSE_ANALOG_SWITCH
DECL|__HAL_TSC_DISABLE_CHANNEL|macro|__HAL_TSC_DISABLE_CHANNEL
DECL|__HAL_TSC_DISABLE_GROUP|macro|__HAL_TSC_DISABLE_GROUP
DECL|__HAL_TSC_DISABLE_HYSTERESIS|macro|__HAL_TSC_DISABLE_HYSTERESIS
DECL|__HAL_TSC_DISABLE_IT|macro|__HAL_TSC_DISABLE_IT
DECL|__HAL_TSC_DISABLE_SAMPLING|macro|__HAL_TSC_DISABLE_SAMPLING
DECL|__HAL_TSC_DISABLE|macro|__HAL_TSC_DISABLE
DECL|__HAL_TSC_ENABLE_CHANNEL|macro|__HAL_TSC_ENABLE_CHANNEL
DECL|__HAL_TSC_ENABLE_GROUP|macro|__HAL_TSC_ENABLE_GROUP
DECL|__HAL_TSC_ENABLE_HYSTERESIS|macro|__HAL_TSC_ENABLE_HYSTERESIS
DECL|__HAL_TSC_ENABLE_IT|macro|__HAL_TSC_ENABLE_IT
DECL|__HAL_TSC_ENABLE_SAMPLING|macro|__HAL_TSC_ENABLE_SAMPLING
DECL|__HAL_TSC_ENABLE|macro|__HAL_TSC_ENABLE
DECL|__HAL_TSC_GET_FLAG|macro|__HAL_TSC_GET_FLAG
DECL|__HAL_TSC_GET_GROUP_STATUS|macro|__HAL_TSC_GET_GROUP_STATUS
DECL|__HAL_TSC_GET_IT_SOURCE|macro|__HAL_TSC_GET_IT_SOURCE
DECL|__HAL_TSC_OPEN_ANALOG_SWITCH|macro|__HAL_TSC_OPEN_ANALOG_SWITCH
DECL|__HAL_TSC_RESET_HANDLE_STATE|macro|__HAL_TSC_RESET_HANDLE_STATE
DECL|__HAL_TSC_SET_IODEF_INFLOAT|macro|__HAL_TSC_SET_IODEF_INFLOAT
DECL|__HAL_TSC_SET_IODEF_OUTPPLOW|macro|__HAL_TSC_SET_IODEF_OUTPPLOW
DECL|__HAL_TSC_SET_SYNC_POL_FALL|macro|__HAL_TSC_SET_SYNC_POL_FALL
DECL|__HAL_TSC_SET_SYNC_POL_RISE_HIGH|macro|__HAL_TSC_SET_SYNC_POL_RISE_HIGH
DECL|__HAL_TSC_START_ACQ|macro|__HAL_TSC_START_ACQ
DECL|__HAL_TSC_STOP_ACQ|macro|__HAL_TSC_STOP_ACQ
DECL|__STM32F0xx_TSC_H|macro|__STM32F0xx_TSC_H
