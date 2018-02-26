DECL|FSL_LPTMR_DRIVER_VERSION|macro|FSL_LPTMR_DRIVER_VERSION
DECL|LPTMR_ClearStatusFlags|function|static inline void LPTMR_ClearStatusFlags(LPTMR_Type *base, uint32_t mask)
DECL|LPTMR_DisableInterrupts|function|static inline void LPTMR_DisableInterrupts(LPTMR_Type *base, uint32_t mask)
DECL|LPTMR_EnableInterrupts|function|static inline void LPTMR_EnableInterrupts(LPTMR_Type *base, uint32_t mask)
DECL|LPTMR_GetCurrentTimerCount|function|static inline uint32_t LPTMR_GetCurrentTimerCount(LPTMR_Type *base)
DECL|LPTMR_GetEnabledInterrupts|function|static inline uint32_t LPTMR_GetEnabledInterrupts(LPTMR_Type *base)
DECL|LPTMR_GetStatusFlags|function|static inline uint32_t LPTMR_GetStatusFlags(LPTMR_Type *base)
DECL|LPTMR_SetTimerPeriod|function|static inline void LPTMR_SetTimerPeriod(LPTMR_Type *base, uint32_t ticks)
DECL|LPTMR_StartTimer|function|static inline void LPTMR_StartTimer(LPTMR_Type *base)
DECL|LPTMR_StopTimer|function|static inline void LPTMR_StopTimer(LPTMR_Type *base)
DECL|_FSL_LPTMR_H_|macro|_FSL_LPTMR_H_
DECL|_lptmr_config|struct|typedef struct _lptmr_config
DECL|_lptmr_interrupt_enable|enum|typedef enum _lptmr_interrupt_enable
DECL|_lptmr_pin_polarity|enum|typedef enum _lptmr_pin_polarity
DECL|_lptmr_pin_select|enum|typedef enum _lptmr_pin_select
DECL|_lptmr_prescaler_clock_select|enum|typedef enum _lptmr_prescaler_clock_select
DECL|_lptmr_prescaler_glitch_value|enum|typedef enum _lptmr_prescaler_glitch_value
DECL|_lptmr_status_flags|enum|typedef enum _lptmr_status_flags
DECL|_lptmr_timer_mode|enum|typedef enum _lptmr_timer_mode
DECL|bypassPrescaler|member|bool bypassPrescaler; /*!< True: bypass prescaler; false: use clock from prescaler */
DECL|enableFreeRunning|member|bool enableFreeRunning; /*!< True: enable free running, counter is reset on overflow
DECL|kLPTMR_PinPolarityActiveHigh|enumerator|kLPTMR_PinPolarityActiveHigh = 0x0U, /*!< Pulse Counter input source is active-high */
DECL|kLPTMR_PinPolarityActiveLow|enumerator|kLPTMR_PinPolarityActiveLow = 0x1U /*!< Pulse Counter input source is active-low */
DECL|kLPTMR_PinSelectInput_0|enumerator|kLPTMR_PinSelectInput_0 = 0x0U, /*!< Pulse counter input 0 is selected */
DECL|kLPTMR_PinSelectInput_1|enumerator|kLPTMR_PinSelectInput_1 = 0x1U, /*!< Pulse counter input 1 is selected */
DECL|kLPTMR_PinSelectInput_2|enumerator|kLPTMR_PinSelectInput_2 = 0x2U, /*!< Pulse counter input 2 is selected */
DECL|kLPTMR_PinSelectInput_3|enumerator|kLPTMR_PinSelectInput_3 = 0x3U /*!< Pulse counter input 3 is selected */
DECL|kLPTMR_Prescale_Glitch_0|enumerator|kLPTMR_Prescale_Glitch_0 = 0x0U, /*!< Prescaler divide 2, glitch filter does not support this setting */
DECL|kLPTMR_Prescale_Glitch_10|enumerator|kLPTMR_Prescale_Glitch_10 = 0xAU, /*!< Prescaler divide 2048 glitch filter 1024 */
DECL|kLPTMR_Prescale_Glitch_11|enumerator|kLPTMR_Prescale_Glitch_11 = 0xBU, /*!< Prescaler divide 4096, glitch filter 2048 */
DECL|kLPTMR_Prescale_Glitch_12|enumerator|kLPTMR_Prescale_Glitch_12 = 0xCU, /*!< Prescaler divide 8192, glitch filter 4096 */
DECL|kLPTMR_Prescale_Glitch_13|enumerator|kLPTMR_Prescale_Glitch_13 = 0xDU, /*!< Prescaler divide 16384, glitch filter 8192 */
DECL|kLPTMR_Prescale_Glitch_14|enumerator|kLPTMR_Prescale_Glitch_14 = 0xEU, /*!< Prescaler divide 32768, glitch filter 16384 */
DECL|kLPTMR_Prescale_Glitch_15|enumerator|kLPTMR_Prescale_Glitch_15 = 0xFU /*!< Prescaler divide 65536, glitch filter 32768 */
DECL|kLPTMR_Prescale_Glitch_1|enumerator|kLPTMR_Prescale_Glitch_1 = 0x1U, /*!< Prescaler divide 4, glitch filter 2 */
DECL|kLPTMR_Prescale_Glitch_2|enumerator|kLPTMR_Prescale_Glitch_2 = 0x2U, /*!< Prescaler divide 8, glitch filter 4 */
DECL|kLPTMR_Prescale_Glitch_3|enumerator|kLPTMR_Prescale_Glitch_3 = 0x3U, /*!< Prescaler divide 16, glitch filter 8 */
DECL|kLPTMR_Prescale_Glitch_4|enumerator|kLPTMR_Prescale_Glitch_4 = 0x4U, /*!< Prescaler divide 32, glitch filter 16 */
DECL|kLPTMR_Prescale_Glitch_5|enumerator|kLPTMR_Prescale_Glitch_5 = 0x5U, /*!< Prescaler divide 64, glitch filter 32 */
DECL|kLPTMR_Prescale_Glitch_6|enumerator|kLPTMR_Prescale_Glitch_6 = 0x6U, /*!< Prescaler divide 128, glitch filter 64 */
DECL|kLPTMR_Prescale_Glitch_7|enumerator|kLPTMR_Prescale_Glitch_7 = 0x7U, /*!< Prescaler divide 256, glitch filter 128 */
DECL|kLPTMR_Prescale_Glitch_8|enumerator|kLPTMR_Prescale_Glitch_8 = 0x8U, /*!< Prescaler divide 512, glitch filter 256 */
DECL|kLPTMR_Prescale_Glitch_9|enumerator|kLPTMR_Prescale_Glitch_9 = 0x9U, /*!< Prescaler divide 1024, glitch filter 512*/
DECL|kLPTMR_PrescalerClock_0|enumerator|kLPTMR_PrescalerClock_0 = 0x0U, /*!< Prescaler/glitch filter clock 0 selected. */
DECL|kLPTMR_PrescalerClock_1|enumerator|kLPTMR_PrescalerClock_1 = 0x1U, /*!< Prescaler/glitch filter clock 1 selected. */
DECL|kLPTMR_PrescalerClock_2|enumerator|kLPTMR_PrescalerClock_2 = 0x2U, /*!< Prescaler/glitch filter clock 2 selected. */
DECL|kLPTMR_PrescalerClock_3|enumerator|kLPTMR_PrescalerClock_3 = 0x3U, /*!< Prescaler/glitch filter clock 3 selected. */
DECL|kLPTMR_TimerCompareFlag|enumerator|kLPTMR_TimerCompareFlag = LPTMR_CSR_TCF_MASK, /*!< Timer compare flag */
DECL|kLPTMR_TimerInterruptEnable|enumerator|kLPTMR_TimerInterruptEnable = LPTMR_CSR_TIE_MASK, /*!< Timer interrupt enable */
DECL|kLPTMR_TimerModePulseCounter|enumerator|kLPTMR_TimerModePulseCounter = 0x1U /*!< Pulse Counter mode */
DECL|kLPTMR_TimerModeTimeCounter|enumerator|kLPTMR_TimerModeTimeCounter = 0x0U, /*!< Time Counter mode */
DECL|lptmr_config_t|typedef|} lptmr_config_t;
DECL|lptmr_interrupt_enable_t|typedef|} lptmr_interrupt_enable_t;
DECL|lptmr_pin_polarity_t|typedef|} lptmr_pin_polarity_t;
DECL|lptmr_pin_select_t|typedef|} lptmr_pin_select_t;
DECL|lptmr_prescaler_clock_select_t|typedef|} lptmr_prescaler_clock_select_t;
DECL|lptmr_prescaler_glitch_value_t|typedef|} lptmr_prescaler_glitch_value_t;
DECL|lptmr_status_flags_t|typedef|} lptmr_status_flags_t;
DECL|lptmr_timer_mode_t|typedef|} lptmr_timer_mode_t;
DECL|pinPolarity|member|lptmr_pin_polarity_t pinPolarity; /*!< LPTMR pulse input pin polarity; used only in pulse counter mode */
DECL|pinSelect|member|lptmr_pin_select_t pinSelect; /*!< LPTMR pulse input pin select; used only in pulse counter mode */
DECL|prescalerClockSource|member|lptmr_prescaler_clock_select_t prescalerClockSource; /*!< LPTMR clock source */
DECL|timerMode|member|lptmr_timer_mode_t timerMode; /*!< Time counter mode or pulse counter mode */
DECL|value|member|lptmr_prescaler_glitch_value_t value; /*!< Prescaler or glitch filter value */
