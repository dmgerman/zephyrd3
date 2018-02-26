DECL|ENC_GetHoldPositionDifferenceValue|function|static inline uint16_t ENC_GetHoldPositionDifferenceValue(ENC_Type *base)
DECL|ENC_GetHoldRevolutionValue|function|static inline uint16_t ENC_GetHoldRevolutionValue(ENC_Type *base)
DECL|ENC_GetPositionDifferenceValue|function|static inline uint16_t ENC_GetPositionDifferenceValue(ENC_Type *base)
DECL|ENC_GetRevolutionValue|function|static inline uint16_t ENC_GetRevolutionValue(ENC_Type *base)
DECL|ENC_GetSignalStatusFlags|function|static inline uint16_t ENC_GetSignalStatusFlags(ENC_Type *base)
DECL|FSL_ENC_DRIVER_VERSION|macro|FSL_ENC_DRIVER_VERSION
DECL|HOMETriggerMode|member|enc_home_trigger_mode_t HOMETriggerMode; /*!< Enable HOME to initialize position counters. */
DECL|INDEXTriggerMode|member|enc_index_trigger_mode_t INDEXTriggerMode; /*!< Enable INDEX to initialize position counters. */
DECL|_FSL_ENC_H_|macro|_FSL_ENC_H_
DECL|_enc_config|struct|typedef struct _enc_config
DECL|_enc_decoder_work_mode|enum|typedef enum _enc_decoder_work_mode
DECL|_enc_home_trigger_mode|enum|typedef enum _enc_home_trigger_mode
DECL|_enc_index_trigger_mode|enum|typedef enum _enc_index_trigger_mode
DECL|_enc_interrupt_enable|enum|enum _enc_interrupt_enable
DECL|_enc_position_match_mode|enum|typedef enum _enc_position_match_mode
DECL|_enc_revolution_count_condition|enum|typedef enum _enc_revolution_count_condition
DECL|_enc_self_test_config|struct|typedef struct _enc_self_test_config
DECL|_enc_self_test_direction|enum|typedef enum _enc_self_test_direction
DECL|_enc_signal_status_flags|enum|enum _enc_signal_status_flags
DECL|_enc_status_flags|enum|enum _enc_status_flags
DECL|decoderWorkMode|member|enc_decoder_work_mode_t decoderWorkMode; /*!< Enable signal phase count mode. */
DECL|enableModuloCountMode|member|bool enableModuloCountMode; /*!< Enable Modulo Counting. */
DECL|enableReverseDirection|member|bool enableReverseDirection; /*!< Enable reverse direction counting. */
DECL|enableTRIGGERClearHoldPositionCounter|member|bool enableTRIGGERClearHoldPositionCounter; /*!< Enable update of hold registers on rising edge of TRIGGER, or not.
DECL|enableTRIGGERClearPositionCounter|member|bool enableTRIGGERClearPositionCounter; /*!< Clear POSD, REV, UPOS and LPOS on rising edge of TRIGGER, or not. */
DECL|enableWatchdog|member|bool enableWatchdog; /*!< Enable the watchdog to detect if the target is moving or not. */
DECL|enc_config_t|typedef|} enc_config_t;
DECL|enc_decoder_work_mode_t|typedef|} enc_decoder_work_mode_t;
DECL|enc_home_trigger_mode_t|typedef|} enc_home_trigger_mode_t;
DECL|enc_index_trigger_mode_t|typedef|} enc_index_trigger_mode_t;
DECL|enc_position_match_mode_t|typedef|} enc_position_match_mode_t;
DECL|enc_revolution_count_condition_t|typedef|} enc_revolution_count_condition_t;
DECL|enc_self_test_config_t|typedef|} enc_self_test_config_t;
DECL|enc_self_test_direction_t|typedef|} enc_self_test_direction_t;
DECL|filterCount|member|uint16_t filterCount; /*!< Input Filter Sample Count. This value should be chosen to reduce the probability of
DECL|filterSamplePeriod|member|uint16_t filterSamplePeriod; /*!< Input Filter Sample Period. This value should be set such that the sampling period
DECL|kENC_DecoderWorkAsNormalMode|enumerator|kENC_DecoderWorkAsNormalMode = 0U, /*!< Use standard quadrature decoder with PHASEA and PHASEB. */
DECL|kENC_DecoderWorkAsSignalPhaseCountMode|enumerator|kENC_DecoderWorkAsSignalPhaseCountMode, /*!< PHASEA input generates a count signal while PHASEB input control the
DECL|kENC_FilteredHOMEStatusFlag|enumerator|kENC_FilteredHOMEStatusFlag = ENC_IMR_FHOM_MASK, /*!< The filtered version of HOME input. */
DECL|kENC_FilteredINDEXStatusFlag|enumerator|kENC_FilteredINDEXStatusFlag = ENC_IMR_FIND_MASK, /*!< The filtered version of INDEX input. */
DECL|kENC_FilteredPHAStatusFlag|enumerator|kENC_FilteredPHAStatusFlag = ENC_IMR_FPHA_MASK, /*!< The filtered version of PHASEA input. */
DECL|kENC_FilteredPHBStatusFlag|enumerator|kENC_FilteredPHBStatusFlag = ENC_IMR_FPHB_MASK, /*!< The filtered version of PHASEB input. */
DECL|kENC_HOMETransitionFlag|enumerator|kENC_HOMETransitionFlag = (1U << 0U), /*!< HOME signal transition interrupt request. */
DECL|kENC_HOMETransitionInterruptEnable|enumerator|kENC_HOMETransitionInterruptEnable = (1U << 0U), /*!< HOME interrupt enable. */
DECL|kENC_HOMETriggerDisabled|enumerator|kENC_HOMETriggerDisabled = 0U, /*!< HOME signal's trigger is disabled. */
DECL|kENC_HOMETriggerOnFallingEdge|enumerator|kENC_HOMETriggerOnFallingEdge, /*!< Use negative going edge-to-trigger initialization of position counters. */
DECL|kENC_HOMETriggerOnRisingEdge|enumerator|kENC_HOMETriggerOnRisingEdge, /*!< Use positive going edge-to-trigger initialization of position counters. */
DECL|kENC_INDEXPulseFlag|enumerator|kENC_INDEXPulseFlag = (1U << 1U), /*!< INDEX Pulse Interrupt Request. */
DECL|kENC_INDEXPulseInterruptEnable|enumerator|kENC_INDEXPulseInterruptEnable = (1U << 1U), /*!< INDEX pulse interrupt enable. */
DECL|kENC_INDEXTriggerDisabled|enumerator|kENC_INDEXTriggerDisabled = 0U, /*!< INDEX signal's trigger is disabled. */
DECL|kENC_INDEXTriggerOnFallingEdge|enumerator|kENC_INDEXTriggerOnFallingEdge, /*!< Use negative going edge-to-trigger initialization of position counters. */
DECL|kENC_INDEXTriggerOnRisingEdge|enumerator|kENC_INDEXTriggerOnRisingEdge, /*!< Use positive going edge-to-trigger initialization of position counters. */
DECL|kENC_LastCountDirectionFlag|enumerator|kENC_LastCountDirectionFlag = (1U << 7U), /*!< Last count was in the up direction, or the down direction. */
DECL|kENC_POSMATCHOnPositionCounterEqualToComapreValue|enumerator|kENC_POSMATCHOnPositionCounterEqualToComapreValue = 0U, /*!< POSMATCH pulses when a match occurs between the
DECL|kENC_POSMATCHOnReadingAnyPositionCounter|enumerator|kENC_POSMATCHOnReadingAnyPositionCounter, /*!< POSMATCH pulses when any position counter register is read. */
DECL|kENC_PositionCompareFlag|enumerator|kENC_PositionCompareFlag = (1U << 3U), /*!< Position compare interrupt request. */
DECL|kENC_PositionCompareInerruptEnable|enumerator|kENC_PositionCompareInerruptEnable = (1U << 3U), /*!< Position compare interrupt enable. */
DECL|kENC_PositionRollOverFlag|enumerator|kENC_PositionRollOverFlag = (1U << 5U), /*!< Roll-over interrupt request. */
DECL|kENC_PositionRollOverInterruptEnable|enumerator|kENC_PositionRollOverInterruptEnable = (1U << 5U), /*!< Roll-over interrupt enable. */
DECL|kENC_PositionRollUnderFlag|enumerator|kENC_PositionRollUnderFlag = (1U << 6U), /*!< Roll-under interrupt request. */
DECL|kENC_PositionRollUnderInterruptEnable|enumerator|kENC_PositionRollUnderInterruptEnable = (1U << 6U), /*!< Roll-under interrupt enable. */
DECL|kENC_RawHOMEStatusFlag|enumerator|kENC_RawHOMEStatusFlag = ENC_IMR_HOME_MASK, /*!< Raw HOME input. */
DECL|kENC_RawINDEXStatusFlag|enumerator|kENC_RawINDEXStatusFlag = ENC_IMR_INDEX_MASK, /*!< Raw INDEX input. */
DECL|kENC_RawPHAEXStatusFlag|enumerator|kENC_RawPHAEXStatusFlag = ENC_IMR_PHA_MASK, /*!< Raw PHASEA input. */
DECL|kENC_RawPHBStatusFlag|enumerator|kENC_RawPHBStatusFlag = ENC_IMR_PHB_MASK, /*!< Raw PHASEB input. */
DECL|kENC_RevolutionCountOnINDEXPulse|enumerator|kENC_RevolutionCountOnINDEXPulse = 0U, /*!< Use INDEX pulse to increment/decrement revolution counter. */
DECL|kENC_RevolutionCountOnRollOverModulus|enumerator|kENC_RevolutionCountOnRollOverModulus, /*!< Use modulus counting roll-over/under to increment/decrement revolution
DECL|kENC_SelfTestDirectionNegative|enumerator|kENC_SelfTestDirectionNegative, /*!< Self test generates the signal in negative direction. */
DECL|kENC_SelfTestDirectionPositive|enumerator|kENC_SelfTestDirectionPositive = 0U, /*!< Self test generates the signal in positive direction. */
DECL|kENC_SimultBothPhaseChangeFlag|enumerator|kENC_SimultBothPhaseChangeFlag = (1U << 4U), /*!< Simultaneous PHASEA and PHASEB change interrupt request. */
DECL|kENC_SimultBothPhaseChangeInterruptEnable|enumerator|kENC_SimultBothPhaseChangeInterruptEnable =
DECL|kENC_WatchdogTimeoutFlag|enumerator|kENC_WatchdogTimeoutFlag = (1U << 2U), /*!< Watchdog timeout interrupt request. */
DECL|kENC_WatchdogTimeoutInterruptEnable|enumerator|kENC_WatchdogTimeoutInterruptEnable = (1U << 2U), /*!< Watchdog timeout interrupt enable. */
DECL|positionCompareValue|member|uint32_t positionCompareValue; /*!< Position compare value. The available value is a 32-bit number.*/
DECL|positionInitialValue|member|uint32_t positionInitialValue; /*!< Position initial value. The available value is a 32-bit number. */
DECL|positionMatchMode|member|enc_position_match_mode_t positionMatchMode; /*!< The condition of POSMATCH pulses. */
DECL|positionModulusValue|member|uint32_t positionModulusValue; /*!< Position modulus value. This value would be available only when
DECL|revolutionCountCondition|member|enc_revolution_count_condition_t revolutionCountCondition; /*!< Revolution Counter Modulus Enable. */
DECL|signalCount|member|uint16_t signalCount; /*!< Hold the number of quadrature advances to generate. The available range is 0 - 255.*/
DECL|signalDirection|member|enc_self_test_direction_t signalDirection; /*!< Direction of self test generated signal. */
DECL|signalPeriod|member|uint16_t signalPeriod; /*!< Hold the period of quadrature phase in IPBus clock cycles.
DECL|watchdogTimeoutValue|member|uint16_t watchdogTimeoutValue; /*!< Watchdog timeout count value. It stores the timeout count for the quadrature
