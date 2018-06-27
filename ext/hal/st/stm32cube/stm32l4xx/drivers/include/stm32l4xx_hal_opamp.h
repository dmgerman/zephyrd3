DECL|HAL_OPAMP_ALL_CB_ID|enumerator|HAL_OPAMP_ALL_CB_ID = 0x03U /*!< OPAMP All ID */
DECL|HAL_OPAMP_CallbackIDTypeDef|typedef|}HAL_OPAMP_CallbackIDTypeDef;
DECL|HAL_OPAMP_MSP_DEINIT_CB_ID|enumerator|HAL_OPAMP_MSP_DEINIT_CB_ID = 0x02U, /*!< OPAMP MspDeInit Callback ID */
DECL|HAL_OPAMP_MSP_INIT_CB_ID|enumerator|HAL_OPAMP_MSP_INIT_CB_ID = 0x01U, /*!< OPAMP MspInit Callback ID */
DECL|HAL_OPAMP_STATE_BUSYLOCKED|enumerator|HAL_OPAMP_STATE_BUSYLOCKED = 0x00000005 /*!< OPAMP is locked
DECL|HAL_OPAMP_STATE_BUSY|enumerator|HAL_OPAMP_STATE_BUSY = 0x00000004, /*!< OPAMP is enabled and running in normal mode */
DECL|HAL_OPAMP_STATE_CALIBBUSY|enumerator|HAL_OPAMP_STATE_CALIBBUSY = 0x00000002, /*!< OPAMP is enabled in auto calibration mode */
DECL|HAL_OPAMP_STATE_READY|enumerator|HAL_OPAMP_STATE_READY = 0x00000001, /*!< OPAMP is initialized and ready for use */
DECL|HAL_OPAMP_STATE_RESET|enumerator|HAL_OPAMP_STATE_RESET = 0x00000000, /*!< OPAMP is not yet Initialized */
DECL|HAL_OPAMP_StateTypeDef|typedef|}HAL_OPAMP_StateTypeDef;
DECL|HAL_OPAMP_TrimmingValueTypeDef|typedef|typedef uint32_t HAL_OPAMP_TrimmingValueTypeDef;
DECL|IS_OPAMP_FACTORYTRIMMING|macro|IS_OPAMP_FACTORYTRIMMING
DECL|IS_OPAMP_FUNCTIONAL_NORMALMODE|macro|IS_OPAMP_FUNCTIONAL_NORMALMODE
DECL|IS_OPAMP_INVERTING_INPUT_PGA|macro|IS_OPAMP_INVERTING_INPUT_PGA
DECL|IS_OPAMP_INVERTING_INPUT_PGA|macro|IS_OPAMP_INVERTING_INPUT_PGA
DECL|IS_OPAMP_INVERTING_INPUT_STANDALONE|macro|IS_OPAMP_INVERTING_INPUT_STANDALONE
DECL|IS_OPAMP_INVERTING_INPUT_STANDALONE|macro|IS_OPAMP_INVERTING_INPUT_STANDALONE
DECL|IS_OPAMP_NONINVERTING_INPUT|macro|IS_OPAMP_NONINVERTING_INPUT
DECL|IS_OPAMP_PGA_GAIN|macro|IS_OPAMP_PGA_GAIN
DECL|IS_OPAMP_POWERMODE|macro|IS_OPAMP_POWERMODE
DECL|IS_OPAMP_POWER_SUPPLY_RANGE|macro|IS_OPAMP_POWER_SUPPLY_RANGE
DECL|IS_OPAMP_TRIMMINGVALUE|macro|IS_OPAMP_TRIMMINGVALUE
DECL|IS_OPAMP_TRIMMING|macro|IS_OPAMP_TRIMMING
DECL|Init|member|OPAMP_InitTypeDef Init; /*!< OPAMP required parameters */
DECL|Instance|member|OPAMP_TypeDef *Instance; /*!< OPAMP instance's registers base address */
DECL|InvertingInput|member|uint32_t InvertingInput; /*!< Specifies the inverting input in Standalone & PGA modes
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< Locking object */
DECL|Mode|member|uint32_t Mode; /*!< Specifies the OPAMP mode
DECL|MspDeInitCallback|member|void (* MspDeInitCallback) (struct __OPAMP_HandleTypeDef *hopamp);
DECL|MspInitCallback|member|void (* MspInitCallback) (struct __OPAMP_HandleTypeDef *hopamp);
DECL|NonInvertingInput|member|uint32_t NonInvertingInput; /*!< Specifies the non inverting input of the opamp:
DECL|OPAMP_FACTORYTRIMMING_DUMMY|macro|OPAMP_FACTORYTRIMMING_DUMMY
DECL|OPAMP_FACTORYTRIMMING_N|macro|OPAMP_FACTORYTRIMMING_N
DECL|OPAMP_FACTORYTRIMMING_P|macro|OPAMP_FACTORYTRIMMING_P
DECL|OPAMP_FOLLOWER_MODE|macro|OPAMP_FOLLOWER_MODE
DECL|OPAMP_HandleTypeDef|typedef|} OPAMP_HandleTypeDef;
DECL|OPAMP_INPUT_NONINVERTING|macro|OPAMP_INPUT_NONINVERTING
DECL|OPAMP_INVERTINGINPUT_CONNECT_NO|macro|OPAMP_INVERTINGINPUT_CONNECT_NO
DECL|OPAMP_INVERTINGINPUT_IO0|macro|OPAMP_INVERTINGINPUT_IO0
DECL|OPAMP_INVERTINGINPUT_IO1|macro|OPAMP_INVERTINGINPUT_IO1
DECL|OPAMP_InitTypeDef|typedef|}OPAMP_InitTypeDef;
DECL|OPAMP_NONINVERTINGINPUT_DAC_CH|macro|OPAMP_NONINVERTINGINPUT_DAC_CH
DECL|OPAMP_NONINVERTINGINPUT_IO0|macro|OPAMP_NONINVERTINGINPUT_IO0
DECL|OPAMP_PGA_GAIN_16|macro|OPAMP_PGA_GAIN_16
DECL|OPAMP_PGA_GAIN_2|macro|OPAMP_PGA_GAIN_2
DECL|OPAMP_PGA_GAIN_4|macro|OPAMP_PGA_GAIN_4
DECL|OPAMP_PGA_GAIN_8|macro|OPAMP_PGA_GAIN_8
DECL|OPAMP_PGA_MODE|macro|OPAMP_PGA_MODE
DECL|OPAMP_POWERMODE_LOWPOWER|macro|OPAMP_POWERMODE_LOWPOWER
DECL|OPAMP_POWERMODE_NORMAL|macro|OPAMP_POWERMODE_NORMAL
DECL|OPAMP_POWERSUPPLY_HIGH|macro|OPAMP_POWERSUPPLY_HIGH
DECL|OPAMP_POWERSUPPLY_LOW|macro|OPAMP_POWERSUPPLY_LOW
DECL|OPAMP_STANDALONE_MODE|macro|OPAMP_STANDALONE_MODE
DECL|OPAMP_TRIMMING_DELAY|macro|OPAMP_TRIMMING_DELAY
DECL|OPAMP_TRIMMING_FACTORY|macro|OPAMP_TRIMMING_FACTORY
DECL|OPAMP_TRIMMING_USER|macro|OPAMP_TRIMMING_USER
DECL|PgaGain|member|uint32_t PgaGain; /*!< Specifies the gain in PGA mode
DECL|PowerMode|member|uint32_t PowerMode; /*!< Specifies the power mode Normal or Low-Power.
DECL|PowerSupplyRange|member|uint32_t PowerSupplyRange; /*!< Specifies the power supply range: above or under 2.4V.
DECL|State|member|__IO HAL_OPAMP_StateTypeDef State; /*!< OPAMP communication state */
DECL|Status|member|HAL_StatusTypeDef Status; /*!< OPAMP peripheral status */
DECL|TrimmingValueNLowPower|member|uint32_t TrimmingValueNLowPower; /*!< Specifies the offset trimming value (NMOS)
DECL|TrimmingValueN|member|uint32_t TrimmingValueN; /*!< Specifies the offset trimming value (NMOS)
DECL|TrimmingValuePLowPower|member|uint32_t TrimmingValuePLowPower; /*!< Specifies the offset trimming value (PMOS)
DECL|TrimmingValueP|member|uint32_t TrimmingValueP; /*!< Specifies the offset trimming value (PMOS)
DECL|UserTrimming|member|uint32_t UserTrimming; /*!< Specifies the trimming mode
DECL|__HAL_OPAMP_RESET_HANDLE_STATE|macro|__HAL_OPAMP_RESET_HANDLE_STATE
DECL|__HAL_OPAMP_RESET_HANDLE_STATE|macro|__HAL_OPAMP_RESET_HANDLE_STATE
DECL|__OPAMP_HandleTypeDef|struct|typedef struct __OPAMP_HandleTypeDef
DECL|__STM32L4xx_HAL_OPAMP_H|macro|__STM32L4xx_HAL_OPAMP_H
DECL|pOPAMP_CallbackTypeDef|typedef|typedef void (*pOPAMP_CallbackTypeDef)(OPAMP_HandleTypeDef *hopamp);
