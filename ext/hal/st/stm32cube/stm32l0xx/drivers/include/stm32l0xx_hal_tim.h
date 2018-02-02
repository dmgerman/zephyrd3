DECL|Channel|member|HAL_TIM_ActiveChannel Channel; /*!< Active channel */
DECL|ClearInputFilter|member|uint32_t ClearInputFilter; /*!< TIM Clear Input filter.
DECL|ClearInputPolarity|member|uint32_t ClearInputPolarity; /*!< TIM Clear Input polarity.
DECL|ClearInputPrescaler|member|uint32_t ClearInputPrescaler; /*!< TIM Clear Input prescaler.
DECL|ClearInputSource|member|uint32_t ClearInputSource; /*!< TIM clear Input sources.
DECL|ClearInputState|member|uint32_t ClearInputState; /*!< TIM clear Input state.
DECL|ClockDivision|member|uint32_t ClockDivision; /*!< Specifies the clock division.
DECL|ClockFilter|member|uint32_t ClockFilter; /*!< TIM clock filter.
DECL|ClockPolarity|member|uint32_t ClockPolarity; /*!< TIM clock polarity.
DECL|ClockPrescaler|member|uint32_t ClockPrescaler; /*!< TIM clock prescaler.
DECL|ClockSource|member|uint32_t ClockSource; /*!< TIM clock sources.
DECL|CounterMode|member|uint32_t CounterMode; /*!< Specifies the counter mode.
DECL|EncoderMode|member|uint32_t EncoderMode; /*!< Specifies the active edge of the input signal.
DECL|HAL_TIM_ACTIVE_CHANNEL_1|enumerator|HAL_TIM_ACTIVE_CHANNEL_1 = 0x01U, /*!< The active channel is 1 */
DECL|HAL_TIM_ACTIVE_CHANNEL_2|enumerator|HAL_TIM_ACTIVE_CHANNEL_2 = 0x02U, /*!< The active channel is 2 */
DECL|HAL_TIM_ACTIVE_CHANNEL_3|enumerator|HAL_TIM_ACTIVE_CHANNEL_3 = 0x04U, /*!< The active channel is 3 */
DECL|HAL_TIM_ACTIVE_CHANNEL_4|enumerator|HAL_TIM_ACTIVE_CHANNEL_4 = 0x08U, /*!< The active channel is 4 */
DECL|HAL_TIM_ACTIVE_CHANNEL_CLEARED|enumerator|HAL_TIM_ACTIVE_CHANNEL_CLEARED = 0x00U /*!< All active channels cleared */
DECL|HAL_TIM_ActiveChannel|typedef|}HAL_TIM_ActiveChannel;
DECL|HAL_TIM_STATE_BUSY|enumerator|HAL_TIM_STATE_BUSY = 0x02U, /*!< An internal process is ongoing */
DECL|HAL_TIM_STATE_ERROR|enumerator|HAL_TIM_STATE_ERROR = 0x04U /*!< Reception process is ongoing */
DECL|HAL_TIM_STATE_READY|enumerator|HAL_TIM_STATE_READY = 0x01U, /*!< Peripheral Initialized and ready for use */
DECL|HAL_TIM_STATE_RESET|enumerator|HAL_TIM_STATE_RESET = 0x00U, /*!< Peripheral not yet initialized or disabled */
DECL|HAL_TIM_STATE_TIMEOUT|enumerator|HAL_TIM_STATE_TIMEOUT = 0x03U, /*!< Timeout state */
DECL|HAL_TIM_StateTypeDef|typedef|}HAL_TIM_StateTypeDef;
DECL|IC1Filter|member|uint32_t IC1Filter; /*!< Specifies the input capture filter.
DECL|IC1Polarity|member|uint32_t IC1Polarity; /*!< Specifies the active edge of the input signal.
DECL|IC1Prescaler|member|uint32_t IC1Prescaler; /*!< Specifies the Input Capture Prescaler.
DECL|IC1Selection|member|uint32_t IC1Selection; /*!< Specifies the input.
DECL|IC2Filter|member|uint32_t IC2Filter; /*!< Specifies the input capture filter.
DECL|IC2Polarity|member|uint32_t IC2Polarity; /*!< Specifies the active edge of the input signal.
DECL|IC2Prescaler|member|uint32_t IC2Prescaler; /*!< Specifies the Input Capture Prescaler.
DECL|IC2Selection|member|uint32_t IC2Selection; /*!< Specifies the input.
DECL|ICFilter|member|uint32_t ICFilter; /*!< Specifies the input capture filter.
DECL|ICFilter|member|uint32_t ICFilter; /*!< Specifies the input capture filter.
DECL|ICPolarity|member|uint32_t ICPolarity; /*!< Specifies the active edge of the input signal.
DECL|ICPolarity|member|uint32_t ICPolarity; /*!< Specifies the active edge of the input signal.
DECL|ICPrescaler|member|uint32_t ICPrescaler; /*!< Specifies the Input Capture Prescaler.
DECL|ICSelection|member|uint32_t ICSelection; /*!< Specifies the input.
DECL|ICSelection|member|uint32_t ICSelection; /*!< Specifies the input.
DECL|IS_TIM_CHANNELS|macro|IS_TIM_CHANNELS
DECL|IS_TIM_CLEARINPUT_FILTER|macro|IS_TIM_CLEARINPUT_FILTER
DECL|IS_TIM_CLEARINPUT_POLARITY|macro|IS_TIM_CLEARINPUT_POLARITY
DECL|IS_TIM_CLEARINPUT_PRESCALER|macro|IS_TIM_CLEARINPUT_PRESCALER
DECL|IS_TIM_CLEARINPUT_SOURCE|macro|IS_TIM_CLEARINPUT_SOURCE
DECL|IS_TIM_CLOCKDIVISION_DIV|macro|IS_TIM_CLOCKDIVISION_DIV
DECL|IS_TIM_CLOCKFILTER|macro|IS_TIM_CLOCKFILTER
DECL|IS_TIM_CLOCKPOLARITY|macro|IS_TIM_CLOCKPOLARITY
DECL|IS_TIM_CLOCKPRESCALER|macro|IS_TIM_CLOCKPRESCALER
DECL|IS_TIM_CLOCKSOURCE|macro|IS_TIM_CLOCKSOURCE
DECL|IS_TIM_COUNTER_MODE|macro|IS_TIM_COUNTER_MODE
DECL|IS_TIM_DMA_BASE|macro|IS_TIM_DMA_BASE
DECL|IS_TIM_DMA_LENGTH|macro|IS_TIM_DMA_LENGTH
DECL|IS_TIM_DMA_SOURCE|macro|IS_TIM_DMA_SOURCE
DECL|IS_TIM_ENCODER_MODE|macro|IS_TIM_ENCODER_MODE
DECL|IS_TIM_EVENT_SOURCE|macro|IS_TIM_EVENT_SOURCE
DECL|IS_TIM_FAST_STATE|macro|IS_TIM_FAST_STATE
DECL|IS_TIM_IC_FILTER|macro|IS_TIM_IC_FILTER
DECL|IS_TIM_IC_POLARITY|macro|IS_TIM_IC_POLARITY
DECL|IS_TIM_IC_PRESCALER|macro|IS_TIM_IC_PRESCALER
DECL|IS_TIM_IC_SELECTION|macro|IS_TIM_IC_SELECTION
DECL|IS_TIM_INTERNAL_TRIGGEREVENT_SELECTION|macro|IS_TIM_INTERNAL_TRIGGEREVENT_SELECTION
DECL|IS_TIM_MSM_STATE|macro|IS_TIM_MSM_STATE
DECL|IS_TIM_OC_MODE|macro|IS_TIM_OC_MODE
DECL|IS_TIM_OC_POLARITY|macro|IS_TIM_OC_POLARITY
DECL|IS_TIM_OPM_CHANNELS|macro|IS_TIM_OPM_CHANNELS
DECL|IS_TIM_OPM_MODE|macro|IS_TIM_OPM_MODE
DECL|IS_TIM_PERIOD|macro|IS_TIM_PERIOD
DECL|IS_TIM_PRESCALER|macro|IS_TIM_PRESCALER
DECL|IS_TIM_PWM_MODE|macro|IS_TIM_PWM_MODE
DECL|IS_TIM_SLAVE_MODE|macro|IS_TIM_SLAVE_MODE
DECL|IS_TIM_TI1SELECTION|macro|IS_TIM_TI1SELECTION
DECL|IS_TIM_TRGO_SOURCE|macro|IS_TIM_TRGO_SOURCE
DECL|IS_TIM_TRIGGERFILTER|macro|IS_TIM_TRIGGERFILTER
DECL|IS_TIM_TRIGGERPOLARITY|macro|IS_TIM_TRIGGERPOLARITY
DECL|IS_TIM_TRIGGERPRESCALER|macro|IS_TIM_TRIGGERPRESCALER
DECL|IS_TIM_TRIGGER_SELECTION|macro|IS_TIM_TRIGGER_SELECTION
DECL|Init|member|TIM_Base_InitTypeDef Init; /*!< TIM Time Base required parameters */
DECL|InputTrigger|member|uint32_t InputTrigger; /*!< Input Trigger source.
DECL|Instance|member|TIM_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< Locking object */
DECL|OCFastMode|member|uint32_t OCFastMode; /*!< Specifies the Fast mode state.
DECL|OCMode|member|uint32_t OCMode; /*!< Specifies the TIM mode.
DECL|OCMode|member|uint32_t OCMode; /*!< Specifies the TIM mode.
DECL|OCPolarity|member|uint32_t OCPolarity; /*!< Specifies the output polarity.
DECL|OCPolarity|member|uint32_t OCPolarity; /*!< Specifies the output polarity.
DECL|Period|member|uint32_t Period; /*!< Specifies the period value to be loaded into the active
DECL|Prescaler|member|uint32_t Prescaler; /*!< Specifies the prescaler value used to divide the TIM clock.
DECL|Pulse|member|uint32_t Pulse; /*!< Specifies the pulse value to be loaded into the Capture Compare Register.
DECL|Pulse|member|uint32_t Pulse; /*!< Specifies the pulse value to be loaded into the Capture Compare Register.
DECL|SlaveMode|member|uint32_t SlaveMode; /*!< Slave mode selection.
DECL|State|member|__IO HAL_TIM_StateTypeDef State; /*!< TIM operation state */
DECL|TIM_Base_InitTypeDef|typedef|} TIM_Base_InitTypeDef;
DECL|TIM_CCER_CCxE_MASK|macro|TIM_CCER_CCxE_MASK
DECL|TIM_CCx_DISABLE|macro|TIM_CCx_DISABLE
DECL|TIM_CCx_ENABLE|macro|TIM_CCx_ENABLE
DECL|TIM_CHANNEL_1|macro|TIM_CHANNEL_1
DECL|TIM_CHANNEL_2|macro|TIM_CHANNEL_2
DECL|TIM_CHANNEL_3|macro|TIM_CHANNEL_3
DECL|TIM_CHANNEL_4|macro|TIM_CHANNEL_4
DECL|TIM_CHANNEL_ALL|macro|TIM_CHANNEL_ALL
DECL|TIM_CLEARINPUTPOLARITY_INVERTED|macro|TIM_CLEARINPUTPOLARITY_INVERTED
DECL|TIM_CLEARINPUTPOLARITY_NONINVERTED|macro|TIM_CLEARINPUTPOLARITY_NONINVERTED
DECL|TIM_CLEARINPUTPRESCALER_DIV1|macro|TIM_CLEARINPUTPRESCALER_DIV1
DECL|TIM_CLEARINPUTPRESCALER_DIV2|macro|TIM_CLEARINPUTPRESCALER_DIV2
DECL|TIM_CLEARINPUTPRESCALER_DIV4|macro|TIM_CLEARINPUTPRESCALER_DIV4
DECL|TIM_CLEARINPUTPRESCALER_DIV8|macro|TIM_CLEARINPUTPRESCALER_DIV8
DECL|TIM_CLEARINPUTSOURCE_ETR|macro|TIM_CLEARINPUTSOURCE_ETR
DECL|TIM_CLEARINPUTSOURCE_NONE|macro|TIM_CLEARINPUTSOURCE_NONE
DECL|TIM_CLOCKDIVISION_DIV1|macro|TIM_CLOCKDIVISION_DIV1
DECL|TIM_CLOCKDIVISION_DIV2|macro|TIM_CLOCKDIVISION_DIV2
DECL|TIM_CLOCKDIVISION_DIV4|macro|TIM_CLOCKDIVISION_DIV4
DECL|TIM_CLOCKPOLARITY_BOTHEDGE|macro|TIM_CLOCKPOLARITY_BOTHEDGE
DECL|TIM_CLOCKPOLARITY_FALLING|macro|TIM_CLOCKPOLARITY_FALLING
DECL|TIM_CLOCKPOLARITY_INVERTED|macro|TIM_CLOCKPOLARITY_INVERTED
DECL|TIM_CLOCKPOLARITY_NONINVERTED|macro|TIM_CLOCKPOLARITY_NONINVERTED
DECL|TIM_CLOCKPOLARITY_RISING|macro|TIM_CLOCKPOLARITY_RISING
DECL|TIM_CLOCKPRESCALER_DIV1|macro|TIM_CLOCKPRESCALER_DIV1
DECL|TIM_CLOCKPRESCALER_DIV2|macro|TIM_CLOCKPRESCALER_DIV2
DECL|TIM_CLOCKPRESCALER_DIV4|macro|TIM_CLOCKPRESCALER_DIV4
DECL|TIM_CLOCKPRESCALER_DIV8|macro|TIM_CLOCKPRESCALER_DIV8
DECL|TIM_CLOCKSOURCE_ETRMODE1|macro|TIM_CLOCKSOURCE_ETRMODE1
DECL|TIM_CLOCKSOURCE_ETRMODE2|macro|TIM_CLOCKSOURCE_ETRMODE2
DECL|TIM_CLOCKSOURCE_INTERNAL|macro|TIM_CLOCKSOURCE_INTERNAL
DECL|TIM_CLOCKSOURCE_ITR0|macro|TIM_CLOCKSOURCE_ITR0
DECL|TIM_CLOCKSOURCE_ITR1|macro|TIM_CLOCKSOURCE_ITR1
DECL|TIM_CLOCKSOURCE_ITR2|macro|TIM_CLOCKSOURCE_ITR2
DECL|TIM_CLOCKSOURCE_ITR3|macro|TIM_CLOCKSOURCE_ITR3
DECL|TIM_CLOCKSOURCE_TI1ED|macro|TIM_CLOCKSOURCE_TI1ED
DECL|TIM_CLOCKSOURCE_TI1|macro|TIM_CLOCKSOURCE_TI1
DECL|TIM_CLOCKSOURCE_TI2|macro|TIM_CLOCKSOURCE_TI2
DECL|TIM_COUNTERMODE_CENTERALIGNED1|macro|TIM_COUNTERMODE_CENTERALIGNED1
DECL|TIM_COUNTERMODE_CENTERALIGNED2|macro|TIM_COUNTERMODE_CENTERALIGNED2
DECL|TIM_COUNTERMODE_CENTERALIGNED3|macro|TIM_COUNTERMODE_CENTERALIGNED3
DECL|TIM_COUNTERMODE_DOWN|macro|TIM_COUNTERMODE_DOWN
DECL|TIM_COUNTERMODE_UP|macro|TIM_COUNTERMODE_UP
DECL|TIM_ClearInputConfigTypeDef|typedef|}TIM_ClearInputConfigTypeDef;
DECL|TIM_ClockConfigTypeDef|typedef|}TIM_ClockConfigTypeDef;
DECL|TIM_DMABASE_ARR|macro|TIM_DMABASE_ARR
DECL|TIM_DMABASE_CCER|macro|TIM_DMABASE_CCER
DECL|TIM_DMABASE_CCMR1|macro|TIM_DMABASE_CCMR1
DECL|TIM_DMABASE_CCMR2|macro|TIM_DMABASE_CCMR2
DECL|TIM_DMABASE_CCR1|macro|TIM_DMABASE_CCR1
DECL|TIM_DMABASE_CCR2|macro|TIM_DMABASE_CCR2
DECL|TIM_DMABASE_CCR3|macro|TIM_DMABASE_CCR3
DECL|TIM_DMABASE_CCR4|macro|TIM_DMABASE_CCR4
DECL|TIM_DMABASE_CNT|macro|TIM_DMABASE_CNT
DECL|TIM_DMABASE_CR1|macro|TIM_DMABASE_CR1
DECL|TIM_DMABASE_CR2|macro|TIM_DMABASE_CR2
DECL|TIM_DMABASE_DCR|macro|TIM_DMABASE_DCR
DECL|TIM_DMABASE_DIER|macro|TIM_DMABASE_DIER
DECL|TIM_DMABASE_EGR|macro|TIM_DMABASE_EGR
DECL|TIM_DMABASE_OR|macro|TIM_DMABASE_OR
DECL|TIM_DMABASE_PSC|macro|TIM_DMABASE_PSC
DECL|TIM_DMABASE_SMCR|macro|TIM_DMABASE_SMCR
DECL|TIM_DMABASE_SR|macro|TIM_DMABASE_SR
DECL|TIM_DMABURSTLENGTH_10TRANSFERS|macro|TIM_DMABURSTLENGTH_10TRANSFERS
DECL|TIM_DMABURSTLENGTH_11TRANSFERS|macro|TIM_DMABURSTLENGTH_11TRANSFERS
DECL|TIM_DMABURSTLENGTH_12TRANSFERS|macro|TIM_DMABURSTLENGTH_12TRANSFERS
DECL|TIM_DMABURSTLENGTH_13TRANSFERS|macro|TIM_DMABURSTLENGTH_13TRANSFERS
DECL|TIM_DMABURSTLENGTH_14TRANSFERS|macro|TIM_DMABURSTLENGTH_14TRANSFERS
DECL|TIM_DMABURSTLENGTH_15TRANSFERS|macro|TIM_DMABURSTLENGTH_15TRANSFERS
DECL|TIM_DMABURSTLENGTH_16TRANSFERS|macro|TIM_DMABURSTLENGTH_16TRANSFERS
DECL|TIM_DMABURSTLENGTH_17TRANSFERS|macro|TIM_DMABURSTLENGTH_17TRANSFERS
DECL|TIM_DMABURSTLENGTH_18TRANSFERS|macro|TIM_DMABURSTLENGTH_18TRANSFERS
DECL|TIM_DMABURSTLENGTH_1TRANSFER|macro|TIM_DMABURSTLENGTH_1TRANSFER
DECL|TIM_DMABURSTLENGTH_2TRANSFERS|macro|TIM_DMABURSTLENGTH_2TRANSFERS
DECL|TIM_DMABURSTLENGTH_3TRANSFERS|macro|TIM_DMABURSTLENGTH_3TRANSFERS
DECL|TIM_DMABURSTLENGTH_4TRANSFERS|macro|TIM_DMABURSTLENGTH_4TRANSFERS
DECL|TIM_DMABURSTLENGTH_5TRANSFERS|macro|TIM_DMABURSTLENGTH_5TRANSFERS
DECL|TIM_DMABURSTLENGTH_6TRANSFERS|macro|TIM_DMABURSTLENGTH_6TRANSFERS
DECL|TIM_DMABURSTLENGTH_7TRANSFERS|macro|TIM_DMABURSTLENGTH_7TRANSFERS
DECL|TIM_DMABURSTLENGTH_8TRANSFERS|macro|TIM_DMABURSTLENGTH_8TRANSFERS
DECL|TIM_DMABURSTLENGTH_9TRANSFERS|macro|TIM_DMABURSTLENGTH_9TRANSFERS
DECL|TIM_DMA_CC1|macro|TIM_DMA_CC1
DECL|TIM_DMA_CC2|macro|TIM_DMA_CC2
DECL|TIM_DMA_CC3|macro|TIM_DMA_CC3
DECL|TIM_DMA_CC4|macro|TIM_DMA_CC4
DECL|TIM_DMA_ID_CC1|macro|TIM_DMA_ID_CC1
DECL|TIM_DMA_ID_CC2|macro|TIM_DMA_ID_CC2
DECL|TIM_DMA_ID_CC3|macro|TIM_DMA_ID_CC3
DECL|TIM_DMA_ID_CC4|macro|TIM_DMA_ID_CC4
DECL|TIM_DMA_ID_TRIGGER|macro|TIM_DMA_ID_TRIGGER
DECL|TIM_DMA_ID_UPDATE|macro|TIM_DMA_ID_UPDATE
DECL|TIM_DMA_TRIGGER|macro|TIM_DMA_TRIGGER
DECL|TIM_DMA_UPDATE|macro|TIM_DMA_UPDATE
DECL|TIM_ENCODERMODE_TI12|macro|TIM_ENCODERMODE_TI12
DECL|TIM_ENCODERMODE_TI1|macro|TIM_ENCODERMODE_TI1
DECL|TIM_ENCODERMODE_TI2|macro|TIM_ENCODERMODE_TI2
DECL|TIM_ETRPOLARITY_INVERTED|macro|TIM_ETRPOLARITY_INVERTED
DECL|TIM_ETRPOLARITY_NONINVERTED|macro|TIM_ETRPOLARITY_NONINVERTED
DECL|TIM_ETRPRESCALER_DIV1|macro|TIM_ETRPRESCALER_DIV1
DECL|TIM_ETRPRESCALER_DIV2|macro|TIM_ETRPRESCALER_DIV2
DECL|TIM_ETRPRESCALER_DIV4|macro|TIM_ETRPRESCALER_DIV4
DECL|TIM_ETRPRESCALER_DIV8|macro|TIM_ETRPRESCALER_DIV8
DECL|TIM_EVENTSOURCE_CC1|macro|TIM_EVENTSOURCE_CC1
DECL|TIM_EVENTSOURCE_CC2|macro|TIM_EVENTSOURCE_CC2
DECL|TIM_EVENTSOURCE_CC3|macro|TIM_EVENTSOURCE_CC3
DECL|TIM_EVENTSOURCE_CC4|macro|TIM_EVENTSOURCE_CC4
DECL|TIM_EVENTSOURCE_TRIGGER|macro|TIM_EVENTSOURCE_TRIGGER
DECL|TIM_EVENTSOURCE_UPDATE|macro|TIM_EVENTSOURCE_UPDATE
DECL|TIM_Encoder_InitTypeDef|typedef|} TIM_Encoder_InitTypeDef;
DECL|TIM_FLAG_CC1OF|macro|TIM_FLAG_CC1OF
DECL|TIM_FLAG_CC1|macro|TIM_FLAG_CC1
DECL|TIM_FLAG_CC2OF|macro|TIM_FLAG_CC2OF
DECL|TIM_FLAG_CC2|macro|TIM_FLAG_CC2
DECL|TIM_FLAG_CC3OF|macro|TIM_FLAG_CC3OF
DECL|TIM_FLAG_CC3|macro|TIM_FLAG_CC3
DECL|TIM_FLAG_CC4OF|macro|TIM_FLAG_CC4OF
DECL|TIM_FLAG_CC4|macro|TIM_FLAG_CC4
DECL|TIM_FLAG_TRIGGER|macro|TIM_FLAG_TRIGGER
DECL|TIM_FLAG_UPDATE|macro|TIM_FLAG_UPDATE
DECL|TIM_HandleTypeDef|typedef|}TIM_HandleTypeDef;
DECL|TIM_ICPOLARITY_BOTHEDGE|macro|TIM_ICPOLARITY_BOTHEDGE
DECL|TIM_ICPOLARITY_FALLING|macro|TIM_ICPOLARITY_FALLING
DECL|TIM_ICPOLARITY_RISING|macro|TIM_ICPOLARITY_RISING
DECL|TIM_ICPSC_DIV1|macro|TIM_ICPSC_DIV1
DECL|TIM_ICPSC_DIV2|macro|TIM_ICPSC_DIV2
DECL|TIM_ICPSC_DIV4|macro|TIM_ICPSC_DIV4
DECL|TIM_ICPSC_DIV8|macro|TIM_ICPSC_DIV8
DECL|TIM_ICSELECTION_DIRECTTI|macro|TIM_ICSELECTION_DIRECTTI
DECL|TIM_ICSELECTION_INDIRECTTI|macro|TIM_ICSELECTION_INDIRECTTI
DECL|TIM_ICSELECTION_TRC|macro|TIM_ICSELECTION_TRC
DECL|TIM_IC_InitTypeDef|typedef|} TIM_IC_InitTypeDef;
DECL|TIM_INPUTCHANNELPOLARITY_BOTHEDGE|macro|TIM_INPUTCHANNELPOLARITY_BOTHEDGE
DECL|TIM_INPUTCHANNELPOLARITY_FALLING|macro|TIM_INPUTCHANNELPOLARITY_FALLING
DECL|TIM_INPUTCHANNELPOLARITY_RISING|macro|TIM_INPUTCHANNELPOLARITY_RISING
DECL|TIM_IT_CC1|macro|TIM_IT_CC1
DECL|TIM_IT_CC2|macro|TIM_IT_CC2
DECL|TIM_IT_CC3|macro|TIM_IT_CC3
DECL|TIM_IT_CC4|macro|TIM_IT_CC4
DECL|TIM_IT_TRIGGER|macro|TIM_IT_TRIGGER
DECL|TIM_IT_UPDATE|macro|TIM_IT_UPDATE
DECL|TIM_MASTERSLAVEMODE_DISABLE|macro|TIM_MASTERSLAVEMODE_DISABLE
DECL|TIM_MASTERSLAVEMODE_ENABLE|macro|TIM_MASTERSLAVEMODE_ENABLE
DECL|TIM_OCFAST_DISABLE|macro|TIM_OCFAST_DISABLE
DECL|TIM_OCFAST_ENABLE|macro|TIM_OCFAST_ENABLE
DECL|TIM_OCMODE_ACTIVE|macro|TIM_OCMODE_ACTIVE
DECL|TIM_OCMODE_FORCED_ACTIVE|macro|TIM_OCMODE_FORCED_ACTIVE
DECL|TIM_OCMODE_FORCED_INACTIVE|macro|TIM_OCMODE_FORCED_INACTIVE
DECL|TIM_OCMODE_INACTIVE|macro|TIM_OCMODE_INACTIVE
DECL|TIM_OCMODE_PWM1|macro|TIM_OCMODE_PWM1
DECL|TIM_OCMODE_PWM2|macro|TIM_OCMODE_PWM2
DECL|TIM_OCMODE_TIMING|macro|TIM_OCMODE_TIMING
DECL|TIM_OCMODE_TOGGLE|macro|TIM_OCMODE_TOGGLE
DECL|TIM_OCPOLARITY_HIGH|macro|TIM_OCPOLARITY_HIGH
DECL|TIM_OCPOLARITY_LOW|macro|TIM_OCPOLARITY_LOW
DECL|TIM_OC_InitTypeDef|typedef|} TIM_OC_InitTypeDef;
DECL|TIM_OPMODE_REPETITIVE|macro|TIM_OPMODE_REPETITIVE
DECL|TIM_OPMODE_SINGLE|macro|TIM_OPMODE_SINGLE
DECL|TIM_OUTPUTNSTATE_DISABLE|macro|TIM_OUTPUTNSTATE_DISABLE
DECL|TIM_OUTPUTNSTATE_ENABLE|macro|TIM_OUTPUTNSTATE_ENABLE
DECL|TIM_OUTPUTSTATE_DISABLE|macro|TIM_OUTPUTSTATE_DISABLE
DECL|TIM_OUTPUTSTATE_ENABLE|macro|TIM_OUTPUTSTATE_ENABLE
DECL|TIM_OnePulse_InitTypeDef|typedef|} TIM_OnePulse_InitTypeDef;
DECL|TIM_RESET_CAPTUREPOLARITY|macro|TIM_RESET_CAPTUREPOLARITY
DECL|TIM_RESET_ICPRESCALERVALUE|macro|TIM_RESET_ICPRESCALERVALUE
DECL|TIM_SET_CAPTUREPOLARITY|macro|TIM_SET_CAPTUREPOLARITY
DECL|TIM_SET_ICPRESCALERVALUE|macro|TIM_SET_ICPRESCALERVALUE
DECL|TIM_SLAVEMODE_DISABLE|macro|TIM_SLAVEMODE_DISABLE
DECL|TIM_SLAVEMODE_EXTERNAL1|macro|TIM_SLAVEMODE_EXTERNAL1
DECL|TIM_SLAVEMODE_GATED|macro|TIM_SLAVEMODE_GATED
DECL|TIM_SLAVEMODE_RESET|macro|TIM_SLAVEMODE_RESET
DECL|TIM_SLAVEMODE_TRIGGER|macro|TIM_SLAVEMODE_TRIGGER
DECL|TIM_SlaveConfigTypeDef|typedef|}TIM_SlaveConfigTypeDef;
DECL|TIM_TI1SELECTION_CH1|macro|TIM_TI1SELECTION_CH1
DECL|TIM_TI1SELECTION_XORCOMBINATION|macro|TIM_TI1SELECTION_XORCOMBINATION
DECL|TIM_TRGO_ENABLE|macro|TIM_TRGO_ENABLE
DECL|TIM_TRGO_OC1REF|macro|TIM_TRGO_OC1REF
DECL|TIM_TRGO_OC1|macro|TIM_TRGO_OC1
DECL|TIM_TRGO_OC2REF|macro|TIM_TRGO_OC2REF
DECL|TIM_TRGO_OC3REF|macro|TIM_TRGO_OC3REF
DECL|TIM_TRGO_OC4REF|macro|TIM_TRGO_OC4REF
DECL|TIM_TRGO_RESET|macro|TIM_TRGO_RESET
DECL|TIM_TRGO_UPDATE|macro|TIM_TRGO_UPDATE
DECL|TIM_TRIGGERPOLARITY_BOTHEDGE|macro|TIM_TRIGGERPOLARITY_BOTHEDGE
DECL|TIM_TRIGGERPOLARITY_FALLING|macro|TIM_TRIGGERPOLARITY_FALLING
DECL|TIM_TRIGGERPOLARITY_INVERTED|macro|TIM_TRIGGERPOLARITY_INVERTED
DECL|TIM_TRIGGERPOLARITY_NONINVERTED|macro|TIM_TRIGGERPOLARITY_NONINVERTED
DECL|TIM_TRIGGERPOLARITY_RISING|macro|TIM_TRIGGERPOLARITY_RISING
DECL|TIM_TRIGGERPRESCALER_DIV1|macro|TIM_TRIGGERPRESCALER_DIV1
DECL|TIM_TRIGGERPRESCALER_DIV2|macro|TIM_TRIGGERPRESCALER_DIV2
DECL|TIM_TRIGGERPRESCALER_DIV4|macro|TIM_TRIGGERPRESCALER_DIV4
DECL|TIM_TRIGGERPRESCALER_DIV8|macro|TIM_TRIGGERPRESCALER_DIV8
DECL|TIM_TS_ETRF|macro|TIM_TS_ETRF
DECL|TIM_TS_ITR0|macro|TIM_TS_ITR0
DECL|TIM_TS_ITR1|macro|TIM_TS_ITR1
DECL|TIM_TS_ITR2|macro|TIM_TS_ITR2
DECL|TIM_TS_ITR3|macro|TIM_TS_ITR3
DECL|TIM_TS_NONE|macro|TIM_TS_NONE
DECL|TIM_TS_TI1FP1|macro|TIM_TS_TI1FP1
DECL|TIM_TS_TI1F_ED|macro|TIM_TS_TI1F_ED
DECL|TIM_TS_TI2FP2|macro|TIM_TS_TI2FP2
DECL|TriggerFilter|member|uint32_t TriggerFilter; /*!< Input trigger filter.
DECL|TriggerPolarity|member|uint32_t TriggerPolarity; /*!< Input Trigger polarity.
DECL|TriggerPrescaler|member|uint32_t TriggerPrescaler; /*!< Input trigger prescaler.
DECL|__HAL_TIM_CLEAR_FLAG|macro|__HAL_TIM_CLEAR_FLAG
DECL|__HAL_TIM_CLEAR_IT|macro|__HAL_TIM_CLEAR_IT
DECL|__HAL_TIM_DISABLE_DMA|macro|__HAL_TIM_DISABLE_DMA
DECL|__HAL_TIM_DISABLE_IT|macro|__HAL_TIM_DISABLE_IT
DECL|__HAL_TIM_DISABLE|macro|__HAL_TIM_DISABLE
DECL|__HAL_TIM_ENABLE_DMA|macro|__HAL_TIM_ENABLE_DMA
DECL|__HAL_TIM_ENABLE_IT|macro|__HAL_TIM_ENABLE_IT
DECL|__HAL_TIM_ENABLE|macro|__HAL_TIM_ENABLE
DECL|__HAL_TIM_GET_AUTORELOAD|macro|__HAL_TIM_GET_AUTORELOAD
DECL|__HAL_TIM_GET_CLOCKDIVISION|macro|__HAL_TIM_GET_CLOCKDIVISION
DECL|__HAL_TIM_GET_COMPARE|macro|__HAL_TIM_GET_COMPARE
DECL|__HAL_TIM_GET_COUNTER|macro|__HAL_TIM_GET_COUNTER
DECL|__HAL_TIM_GET_FLAG|macro|__HAL_TIM_GET_FLAG
DECL|__HAL_TIM_GET_ICPRESCALER|macro|__HAL_TIM_GET_ICPRESCALER
DECL|__HAL_TIM_GET_IT_SOURCE|macro|__HAL_TIM_GET_IT_SOURCE
DECL|__HAL_TIM_IS_TIM_COUNTING_DOWN|macro|__HAL_TIM_IS_TIM_COUNTING_DOWN
DECL|__HAL_TIM_RESET_HANDLE_STATE|macro|__HAL_TIM_RESET_HANDLE_STATE
DECL|__HAL_TIM_SET_AUTORELOAD|macro|__HAL_TIM_SET_AUTORELOAD
DECL|__HAL_TIM_SET_CAPTUREPOLARITY|macro|__HAL_TIM_SET_CAPTUREPOLARITY
DECL|__HAL_TIM_SET_CLOCKDIVISION|macro|__HAL_TIM_SET_CLOCKDIVISION
DECL|__HAL_TIM_SET_COMPARE|macro|__HAL_TIM_SET_COMPARE
DECL|__HAL_TIM_SET_COUNTER|macro|__HAL_TIM_SET_COUNTER
DECL|__HAL_TIM_SET_ICPRESCALER|macro|__HAL_TIM_SET_ICPRESCALER
DECL|__HAL_TIM_SET_PRESCALER|macro|__HAL_TIM_SET_PRESCALER
DECL|__HAL_TIM_URS_DISABLE|macro|__HAL_TIM_URS_DISABLE
DECL|__HAL_TIM_URS_ENABLE|macro|__HAL_TIM_URS_ENABLE
DECL|__STM32L0xx_HAL_TIM_H|macro|__STM32L0xx_HAL_TIM_H
DECL|hdma|member|DMA_HandleTypeDef *hdma[7]; /*!< DMA Handlers array
