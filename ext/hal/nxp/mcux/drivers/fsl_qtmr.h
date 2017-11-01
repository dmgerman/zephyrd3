DECL|FSL_QTMR_DRIVER_VERSION|macro|FSL_QTMR_DRIVER_VERSION
DECL|QTMR_GetCurrentTimerCount|function|static inline uint16_t QTMR_GetCurrentTimerCount(TMR_Type *base, qtmr_channel_selection_t channel)
DECL|QTMR_StartTimer|function|static inline void QTMR_StartTimer(TMR_Type *base, qtmr_channel_selection_t channel, qtmr_counting_mode_t clockSource)
DECL|QTMR_StopTimer|function|static inline void QTMR_StopTimer(TMR_Type *base, qtmr_channel_selection_t channel)
DECL|_FSL_QTMR_H_|macro|_FSL_QTMR_H_
DECL|_qtmr_channel_selection|enum|typedef enum _qtmr_channel_selection
DECL|_qtmr_config|struct|typedef struct _qtmr_config
DECL|_qtmr_counting_mode|enum|typedef enum _qtmr_counting_mode
DECL|_qtmr_debug_action|enum|typedef enum _qtmr_debug_action
DECL|_qtmr_dma_enable|enum|typedef enum _qtmr_dma_enable
DECL|_qtmr_input_capture_edge|enum|typedef enum _qtmr_input_capture_edge
DECL|_qtmr_input_source|enum|typedef enum _qtmr_input_source
DECL|_qtmr_interrupt_enable|enum|typedef enum _qtmr_interrupt_enable
DECL|_qtmr_output_mode|enum|typedef enum _qtmr_output_mode
DECL|_qtmr_preload_control|enum|typedef enum _qtmr_preload_control
DECL|_qtmr_primary_count_source|enum|typedef enum _qtmr_primary_count_source
DECL|_qtmr_status_flags|enum|typedef enum _qtmr_status_flags
DECL|debugMode|member|qtmr_debug_action_t debugMode; /*!< Operation in Debug mode */
DECL|enableExternalForce|member|bool enableExternalForce; /*!< true: Compare from another counter force state of OFLAG signal
DECL|enableMasterMode|member|bool enableMasterMode; /*!< true: Broadcast compare function output to other counters;
DECL|faultFilterCount|member|uint8_t faultFilterCount; /*!< Fault filter count */
DECL|faultFilterPeriod|member|uint8_t faultFilterPeriod; /*!< Fault filter period;value of 0 will bypass the filter */
DECL|kQTMR_AssertWhenCountActive|enumerator|kQTMR_AssertWhenCountActive = 0, /*!< Assert OFLAG while counter is active*/
DECL|kQTMR_CascadeCount|enumerator|kQTMR_CascadeCount /*!< Cascaded count mode (up/down) */
DECL|kQTMR_Channel_0|enumerator|kQTMR_Channel_0 = 0U, /*!< TMR Channel 0 */
DECL|kQTMR_Channel_1|enumerator|kQTMR_Channel_1, /*!< TMR Channel 1 */
DECL|kQTMR_Channel_2|enumerator|kQTMR_Channel_2, /*!< TMR Channel 2 */
DECL|kQTMR_Channel_3|enumerator|kQTMR_Channel_3, /*!< TMR Channel 3 */
DECL|kQTMR_ClearOnCompare|enumerator|kQTMR_ClearOnCompare, /*!< Clear OFLAG on successful compare */
DECL|kQTMR_ClockCounter0InputPin|enumerator|kQTMR_ClockCounter0InputPin = 0, /*!< Use counter 0 input pin */
DECL|kQTMR_ClockCounter0Output|enumerator|kQTMR_ClockCounter0Output, /*!< Use counter 0 output */
DECL|kQTMR_ClockCounter1InputPin|enumerator|kQTMR_ClockCounter1InputPin, /*!< Use counter 1 input pin */
DECL|kQTMR_ClockCounter1Output|enumerator|kQTMR_ClockCounter1Output, /*!< Use counter 1 output */
DECL|kQTMR_ClockCounter2InputPin|enumerator|kQTMR_ClockCounter2InputPin, /*!< Use counter 2 input pin */
DECL|kQTMR_ClockCounter2Output|enumerator|kQTMR_ClockCounter2Output, /*!< Use counter 2 output */
DECL|kQTMR_ClockCounter3InputPin|enumerator|kQTMR_ClockCounter3InputPin, /*!< Use counter 3 input pin */
DECL|kQTMR_ClockCounter3Output|enumerator|kQTMR_ClockCounter3Output, /*!< Use counter 3 output */
DECL|kQTMR_ClockDivide_128|enumerator|kQTMR_ClockDivide_128 /*!< IP bus clock divide by 128 prescaler */
DECL|kQTMR_ClockDivide_16|enumerator|kQTMR_ClockDivide_16, /*!< IP bus clock divide by 16 prescaler */
DECL|kQTMR_ClockDivide_1|enumerator|kQTMR_ClockDivide_1, /*!< IP bus clock divide by 1 prescaler */
DECL|kQTMR_ClockDivide_2|enumerator|kQTMR_ClockDivide_2, /*!< IP bus clock divide by 2 prescaler */
DECL|kQTMR_ClockDivide_32|enumerator|kQTMR_ClockDivide_32, /*!< IP bus clock divide by 32 prescaler */
DECL|kQTMR_ClockDivide_4|enumerator|kQTMR_ClockDivide_4, /*!< IP bus clock divide by 4 prescaler */
DECL|kQTMR_ClockDivide_64|enumerator|kQTMR_ClockDivide_64, /*!< IP bus clock divide by 64 prescaler */
DECL|kQTMR_ClockDivide_8|enumerator|kQTMR_ClockDivide_8, /*!< IP bus clock divide by 8 prescaler */
DECL|kQTMR_ComparatorPreload1DmaEnable|enumerator|kQTMR_ComparatorPreload1DmaEnable = (1U << 1), /*!< Comparator Preload Register 1 DMA Enable.*/
DECL|kQTMR_ComparatorPreload2DmaEnable|enumerator|kQTMR_ComparatorPreload2DmaEnable = (1U << 2), /*!< Comparator Preload Register 2 DMA Enable.*/
DECL|kQTMR_Compare1Flag|enumerator|kQTMR_Compare1Flag = (1U << 1), /*!< Compare 1 flag */
DECL|kQTMR_Compare1InterruptEnable|enumerator|kQTMR_Compare1InterruptEnable = (1U << 1), /*!< Compare 1 interrupt.*/
DECL|kQTMR_Compare2Flag|enumerator|kQTMR_Compare2Flag = (1U << 2), /*!< Compare 2 flag */
DECL|kQTMR_Compare2InterruptEnable|enumerator|kQTMR_Compare2InterruptEnable = (1U << 2), /*!< Compare 2 interrupt.*/
DECL|kQTMR_CompareFlag|enumerator|kQTMR_CompareFlag = (1U << 0), /*!< Compare flag */
DECL|kQTMR_CompareInterruptEnable|enumerator|kQTMR_CompareInterruptEnable = (1U << 0), /*!< Compare interrupt.*/
DECL|kQTMR_Counter0InputPin|enumerator|kQTMR_Counter0InputPin = 0, /*!< Use counter 0 input pin */
DECL|kQTMR_Counter1InputPin|enumerator|kQTMR_Counter1InputPin, /*!< Use counter 1 input pin */
DECL|kQTMR_Counter2InputPin|enumerator|kQTMR_Counter2InputPin, /*!< Use counter 2 input pin */
DECL|kQTMR_Counter3InputPin|enumerator|kQTMR_Counter3InputPin /*!< Use counter 3 input pin */
DECL|kQTMR_EdgeFlag|enumerator|kQTMR_EdgeFlag = (1U << 4) /*!< Input edge flag */
DECL|kQTMR_EdgeInterruptEnable|enumerator|kQTMR_EdgeInterruptEnable = (1U << 4) /*!< Input edge interrupt.*/
DECL|kQTMR_EnableGateClock|enumerator|kQTMR_EnableGateClock /*!< Enable gated clock output while count is active */
DECL|kQTMR_FallingEdge|enumerator|kQTMR_FallingEdge, /*!< Capture on falling edge (IPS=0) or rising edge (IPS=1)*/
DECL|kQTMR_ForceOutToZero|enumerator|kQTMR_ForceOutToZero, /*!< Force output to logic 0 */
DECL|kQTMR_HaltCountForceOutZero|enumerator|kQTMR_HaltCountForceOutZero /*!< Halt counter and force output to logic 0 */
DECL|kQTMR_HaltCounter|enumerator|kQTMR_HaltCounter, /*!< Halt counter */
DECL|kQTMR_InputEdgeFlagDmaEnable|enumerator|kQTMR_InputEdgeFlagDmaEnable = (1U << 0), /*!< Input Edge Flag DMA Enable.*/
DECL|kQTMR_LoadOnComp1|enumerator|kQTMR_LoadOnComp1, /*!< Load upon successful compare with value in COMP1 */
DECL|kQTMR_LoadOnComp2|enumerator|kQTMR_LoadOnComp2 /*!< Load upon successful compare with value in COMP2*/
DECL|kQTMR_NoCapture|enumerator|kQTMR_NoCapture = 0, /*!< Capture is disabled */
DECL|kQTMR_NoOperation|enumerator|kQTMR_NoOperation = 0, /*!< No operation */
DECL|kQTMR_NoPreload|enumerator|kQTMR_NoPreload = 0, /*!< Never preload */
DECL|kQTMR_OverflowFlag|enumerator|kQTMR_OverflowFlag = (1U << 3), /*!< Timer overflow flag */
DECL|kQTMR_OverflowInterruptEnable|enumerator|kQTMR_OverflowInterruptEnable = (1U << 3), /*!< Timer overflow interrupt.*/
DECL|kQTMR_PriSrcRiseAndFallEdge|enumerator|kQTMR_PriSrcRiseAndFallEdge, /*!< Count rising and falling edges of primary source */
DECL|kQTMR_PriSrcRiseEdgeSecDir|enumerator|kQTMR_PriSrcRiseEdgeSecDir, /*!< Count rising edges of pri SRC; sec SRC specifies dir */
DECL|kQTMR_PriSrcRiseEdgeSecInpHigh|enumerator|kQTMR_PriSrcRiseEdgeSecInpHigh, /*!< Count rise edges of pri SRC while sec inp high active */
DECL|kQTMR_PriSrcRiseEdge|enumerator|kQTMR_PriSrcRiseEdge, /*!< Count rising edges or primary source */
DECL|kQTMR_QuadCountMode|enumerator|kQTMR_QuadCountMode, /*!< Quadrature count mode, uses pri and sec sources */
DECL|kQTMR_RisingAndFallingEdge|enumerator|kQTMR_RisingAndFallingEdge /*!< Capture on both edges */
DECL|kQTMR_RisingEdge|enumerator|kQTMR_RisingEdge, /*!< Capture on rising edge (IPS=0) or falling edge (IPS=1)*/
DECL|kQTMR_RunNormalInDebug|enumerator|kQTMR_RunNormalInDebug = 0U, /*!< Continue with normal operation */
DECL|kQTMR_SecSrcTrigPriCnt|enumerator|kQTMR_SecSrcTrigPriCnt, /*!< Edge of sec SRC trigger primary count until compare*/
DECL|kQTMR_SetOnCompareClearOnCountRoll|enumerator|kQTMR_SetOnCompareClearOnCountRoll, /*!< Set OFLAG on compare, clear on counter rollover */
DECL|kQTMR_SetOnCompareClearOnSecSrcInp|enumerator|kQTMR_SetOnCompareClearOnSecSrcInp, /*!< Set OFLAG on compare, clear on sec SRC input edge */
DECL|kQTMR_SetOnCompare|enumerator|kQTMR_SetOnCompare, /*!< Set OFLAG on successful compare */
DECL|kQTMR_ToggleOnAltCompareReg|enumerator|kQTMR_ToggleOnAltCompareReg, /*!< Toggle OFLAG using alternating compare registers */
DECL|kQTMR_ToggleOnCompare|enumerator|kQTMR_ToggleOnCompare, /*!< Toggle OFLAG on successful compare */
DECL|primarySource|member|qtmr_primary_count_source_t primarySource; /*!< Specify the primary count source */
DECL|qtmr_channel_selection_t|typedef|} qtmr_channel_selection_t;
DECL|qtmr_config_t|typedef|} qtmr_config_t;
DECL|qtmr_counting_mode_t|typedef|} qtmr_counting_mode_t;
DECL|qtmr_debug_action_t|typedef|} qtmr_debug_action_t;
DECL|qtmr_dma_enable_t|typedef|} qtmr_dma_enable_t;
DECL|qtmr_input_capture_edge_t|typedef|} qtmr_input_capture_edge_t;
DECL|qtmr_input_source_t|typedef|} qtmr_input_source_t;
DECL|qtmr_interrupt_enable_t|typedef|} qtmr_interrupt_enable_t;
DECL|qtmr_output_mode_t|typedef|} qtmr_output_mode_t;
DECL|qtmr_preload_control_t|typedef|} qtmr_preload_control_t;
DECL|qtmr_primary_count_source_t|typedef|} qtmr_primary_count_source_t;
DECL|qtmr_status_flags_t|typedef|} qtmr_status_flags_t;
DECL|secondarySource|member|qtmr_input_source_t secondarySource; /*!< Specify the secondary count source */
