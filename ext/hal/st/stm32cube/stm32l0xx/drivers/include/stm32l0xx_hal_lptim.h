DECL|ActiveEdge|member|uint32_t ActiveEdge; /*!< Selects the Trigger active edge.
DECL|Clock|member|LPTIM_ClockConfigTypeDef Clock; /*!< Specifies the clock parameters */
DECL|CounterSource|member|uint32_t CounterSource; /*!< Specifies whether the counter is incremented each internal event
DECL|HAL_LPTIM_STATE_BUSY|enumerator|HAL_LPTIM_STATE_BUSY = 0x02U, /*!< An internal process is ongoing */
DECL|HAL_LPTIM_STATE_ERROR|enumerator|HAL_LPTIM_STATE_ERROR = 0x04U /*!< Internal Process is ongoing */
DECL|HAL_LPTIM_STATE_READY|enumerator|HAL_LPTIM_STATE_READY = 0x01U, /*!< Peripheral Initialized and ready for use */
DECL|HAL_LPTIM_STATE_RESET|enumerator|HAL_LPTIM_STATE_RESET = 0x00U, /*!< Peripheral not yet initialized or disabled */
DECL|HAL_LPTIM_STATE_TIMEOUT|enumerator|HAL_LPTIM_STATE_TIMEOUT = 0x03U, /*!< Timeout state */
DECL|HAL_LPTIM_StateTypeDef|typedef|}HAL_LPTIM_StateTypeDef;
DECL|IS_LPTIM_AUTORELOAD|macro|IS_LPTIM_AUTORELOAD
DECL|IS_LPTIM_CLOCK_POLARITY|macro|IS_LPTIM_CLOCK_POLARITY
DECL|IS_LPTIM_CLOCK_PRESCALERDIV1|macro|IS_LPTIM_CLOCK_PRESCALERDIV1
DECL|IS_LPTIM_CLOCK_PRESCALER|macro|IS_LPTIM_CLOCK_PRESCALER
DECL|IS_LPTIM_CLOCK_SAMPLE_TIME|macro|IS_LPTIM_CLOCK_SAMPLE_TIME
DECL|IS_LPTIM_CLOCK_SOURCE|macro|IS_LPTIM_CLOCK_SOURCE
DECL|IS_LPTIM_COMPARE|macro|IS_LPTIM_COMPARE
DECL|IS_LPTIM_COUNTER_SOURCE|macro|IS_LPTIM_COUNTER_SOURCE
DECL|IS_LPTIM_EXT_TRG_POLARITY|macro|IS_LPTIM_EXT_TRG_POLARITY
DECL|IS_LPTIM_OUTPUT_POLARITY|macro|IS_LPTIM_OUTPUT_POLARITY
DECL|IS_LPTIM_PERIOD|macro|IS_LPTIM_PERIOD
DECL|IS_LPTIM_PULSE|macro|IS_LPTIM_PULSE
DECL|IS_LPTIM_TRIG_SAMPLE_TIME|macro|IS_LPTIM_TRIG_SAMPLE_TIME
DECL|IS_LPTIM_UPDATE_MODE|macro|IS_LPTIM_UPDATE_MODE
DECL|Init|member|LPTIM_InitTypeDef Init; /*!< LPTIM required parameters */
DECL|Instance|member|LPTIM_TypeDef *Instance; /*!< Register base address */
DECL|LPTIM_ACTIVEEDGE_FALLING|macro|LPTIM_ACTIVEEDGE_FALLING
DECL|LPTIM_ACTIVEEDGE_RISING_FALLING|macro|LPTIM_ACTIVEEDGE_RISING_FALLING
DECL|LPTIM_ACTIVEEDGE_RISING|macro|LPTIM_ACTIVEEDGE_RISING
DECL|LPTIM_CLOCKPOLARITY_FALLING|macro|LPTIM_CLOCKPOLARITY_FALLING
DECL|LPTIM_CLOCKPOLARITY_RISING_FALLING|macro|LPTIM_CLOCKPOLARITY_RISING_FALLING
DECL|LPTIM_CLOCKPOLARITY_RISING|macro|LPTIM_CLOCKPOLARITY_RISING
DECL|LPTIM_CLOCKSAMPLETIME_2TRANSITIONS|macro|LPTIM_CLOCKSAMPLETIME_2TRANSITIONS
DECL|LPTIM_CLOCKSAMPLETIME_4TRANSITIONS|macro|LPTIM_CLOCKSAMPLETIME_4TRANSITIONS
DECL|LPTIM_CLOCKSAMPLETIME_8TRANSITIONS|macro|LPTIM_CLOCKSAMPLETIME_8TRANSITIONS
DECL|LPTIM_CLOCKSAMPLETIME_DIRECTTRANSITION|macro|LPTIM_CLOCKSAMPLETIME_DIRECTTRANSITION
DECL|LPTIM_CLOCKSOURCE_APBCLOCK_LPOSC|macro|LPTIM_CLOCKSOURCE_APBCLOCK_LPOSC
DECL|LPTIM_CLOCKSOURCE_ULPTIM|macro|LPTIM_CLOCKSOURCE_ULPTIM
DECL|LPTIM_COUNTERSOURCE_EXTERNAL|macro|LPTIM_COUNTERSOURCE_EXTERNAL
DECL|LPTIM_COUNTERSOURCE_INTERNAL|macro|LPTIM_COUNTERSOURCE_INTERNAL
DECL|LPTIM_ClockConfigTypeDef|typedef|}LPTIM_ClockConfigTypeDef;
DECL|LPTIM_EXTI_LINE_WAKEUPTIMER_EVENT|macro|LPTIM_EXTI_LINE_WAKEUPTIMER_EVENT
DECL|LPTIM_FLAG_ARRM|macro|LPTIM_FLAG_ARRM
DECL|LPTIM_FLAG_ARROK|macro|LPTIM_FLAG_ARROK
DECL|LPTIM_FLAG_CMPM|macro|LPTIM_FLAG_CMPM
DECL|LPTIM_FLAG_CMPOK|macro|LPTIM_FLAG_CMPOK
DECL|LPTIM_FLAG_DOWN|macro|LPTIM_FLAG_DOWN
DECL|LPTIM_FLAG_EXTTRIG|macro|LPTIM_FLAG_EXTTRIG
DECL|LPTIM_FLAG_UP|macro|LPTIM_FLAG_UP
DECL|LPTIM_HandleTypeDef|typedef|}LPTIM_HandleTypeDef;
DECL|LPTIM_IT_ARRM|macro|LPTIM_IT_ARRM
DECL|LPTIM_IT_ARROK|macro|LPTIM_IT_ARROK
DECL|LPTIM_IT_CMPM|macro|LPTIM_IT_CMPM
DECL|LPTIM_IT_CMPOK|macro|LPTIM_IT_CMPOK
DECL|LPTIM_IT_DOWN|macro|LPTIM_IT_DOWN
DECL|LPTIM_IT_EXTTRIG|macro|LPTIM_IT_EXTTRIG
DECL|LPTIM_IT_UP|macro|LPTIM_IT_UP
DECL|LPTIM_InitTypeDef|typedef|}LPTIM_InitTypeDef;
DECL|LPTIM_OUTPUTPOLARITY_HIGH|macro|LPTIM_OUTPUTPOLARITY_HIGH
DECL|LPTIM_OUTPUTPOLARITY_LOW|macro|LPTIM_OUTPUTPOLARITY_LOW
DECL|LPTIM_PRESCALER_DIV128|macro|LPTIM_PRESCALER_DIV128
DECL|LPTIM_PRESCALER_DIV16|macro|LPTIM_PRESCALER_DIV16
DECL|LPTIM_PRESCALER_DIV1|macro|LPTIM_PRESCALER_DIV1
DECL|LPTIM_PRESCALER_DIV2|macro|LPTIM_PRESCALER_DIV2
DECL|LPTIM_PRESCALER_DIV32|macro|LPTIM_PRESCALER_DIV32
DECL|LPTIM_PRESCALER_DIV4|macro|LPTIM_PRESCALER_DIV4
DECL|LPTIM_PRESCALER_DIV64|macro|LPTIM_PRESCALER_DIV64
DECL|LPTIM_PRESCALER_DIV8|macro|LPTIM_PRESCALER_DIV8
DECL|LPTIM_TRIGSAMPLETIME_2TRANSITIONS|macro|LPTIM_TRIGSAMPLETIME_2TRANSITIONS
DECL|LPTIM_TRIGSAMPLETIME_4TRANSITIONS|macro|LPTIM_TRIGSAMPLETIME_4TRANSITIONS
DECL|LPTIM_TRIGSAMPLETIME_8TRANSITIONS|macro|LPTIM_TRIGSAMPLETIME_8TRANSITIONS
DECL|LPTIM_TRIGSAMPLETIME_DIRECTTRANSITION|macro|LPTIM_TRIGSAMPLETIME_DIRECTTRANSITION
DECL|LPTIM_TriggerConfigTypeDef|typedef|}LPTIM_TriggerConfigTypeDef;
DECL|LPTIM_ULPClockConfigTypeDef|typedef|}LPTIM_ULPClockConfigTypeDef;
DECL|LPTIM_UPDATE_ENDOFPERIOD|macro|LPTIM_UPDATE_ENDOFPERIOD
DECL|LPTIM_UPDATE_IMMEDIATE|macro|LPTIM_UPDATE_IMMEDIATE
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< LPTIM locking object */
DECL|OutputPolarity|member|uint32_t OutputPolarity; /*!< Specifies the Output polarity.
DECL|Polarity|member|uint32_t Polarity; /*!< Selects the polarity of the active edge for the counter unit
DECL|Prescaler|member|uint32_t Prescaler; /*!< Specifies the counter clock Prescaler.
DECL|SampleTime|member|uint32_t SampleTime; /*!< Selects the clock sampling time to configure the clock glitch filter.
DECL|SampleTime|member|uint32_t SampleTime; /*!< Selects the trigger sampling time to configure the clock glitch filter.
DECL|Source|member|uint32_t Source; /*!< Selects the Trigger source.
DECL|Source|member|uint32_t Source; /*!< Selects the clock source.
DECL|State|member|__IO HAL_LPTIM_StateTypeDef State; /*!< LPTIM peripheral state */
DECL|Status|member|HAL_StatusTypeDef Status; /*!< LPTIM peripheral status */
DECL|Trigger|member|LPTIM_TriggerConfigTypeDef Trigger; /*!< Specifies the Trigger parameters */
DECL|UltraLowPowerClock|member|LPTIM_ULPClockConfigTypeDef UltraLowPowerClock; /*!< Specifies the Ultra Low Power clock parameters */
DECL|UpdateMode|member|uint32_t UpdateMode; /*!< Specifies whether the update of the autorelaod and the compare
DECL|__HAL_LPTIM_AUTORELOAD_SET|macro|__HAL_LPTIM_AUTORELOAD_SET
DECL|__HAL_LPTIM_CLEAR_FLAG|macro|__HAL_LPTIM_CLEAR_FLAG
DECL|__HAL_LPTIM_COMPARE_SET|macro|__HAL_LPTIM_COMPARE_SET
DECL|__HAL_LPTIM_DISABLE_IT|macro|__HAL_LPTIM_DISABLE_IT
DECL|__HAL_LPTIM_DISABLE|macro|__HAL_LPTIM_DISABLE
DECL|__HAL_LPTIM_ENABLE_IT|macro|__HAL_LPTIM_ENABLE_IT
DECL|__HAL_LPTIM_ENABLE|macro|__HAL_LPTIM_ENABLE
DECL|__HAL_LPTIM_GET_FLAG|macro|__HAL_LPTIM_GET_FLAG
DECL|__HAL_LPTIM_GET_IT_SOURCE|macro|__HAL_LPTIM_GET_IT_SOURCE
DECL|__HAL_LPTIM_RESET_HANDLE_STATE|macro|__HAL_LPTIM_RESET_HANDLE_STATE
DECL|__HAL_LPTIM_START_CONTINUOUS|macro|__HAL_LPTIM_START_CONTINUOUS
DECL|__HAL_LPTIM_START_SINGLE|macro|__HAL_LPTIM_START_SINGLE
DECL|__HAL_LPTIM_StateTypeDef|enum|typedef enum __HAL_LPTIM_StateTypeDef
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_CLEAR_FLAG|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_CLEAR_FLAG
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_DISABLE_EVENT|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_DISABLE_EVENT
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_DISABLE_FALLING_EDGE|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_DISABLE_FALLING_EDGE
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_DISABLE_IT|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_DISABLE_IT
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_DISABLE_RISING_EDGE|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_DISABLE_RISING_EDGE
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_DISABLE_RISING_FALLING_EDGE|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_DISABLE_RISING_FALLING_EDGE
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_ENABLE_EVENT|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_ENABLE_EVENT
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_ENABLE_FALLING_EDGE|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_ENABLE_FALLING_EDGE
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_ENABLE_IT|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_ENABLE_IT
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_ENABLE_RISING_EDGE|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_ENABLE_RISING_EDGE
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_ENABLE_RISING_FALLING_EDGE|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_ENABLE_RISING_FALLING_EDGE
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_GENERATE_SWIT|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_GENERATE_SWIT
DECL|__HAL_LPTIM_WAKEUPTIMER_EXTI_GET_FLAG|macro|__HAL_LPTIM_WAKEUPTIMER_EXTI_GET_FLAG
DECL|__STM32L0xx_HAL_LPTIM_H|macro|__STM32L0xx_HAL_LPTIM_H