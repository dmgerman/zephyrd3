DECL|ADC_ClearStatusFlag|function|static inline void ADC_ClearStatusFlag(ADC_Type* base, uint32_t flags)
DECL|ADC_GetFifoData|function|static inline uint32_t ADC_GetFifoData(ADC_Type* base)
DECL|ADC_GetFifoEntries|function|static inline uint8_t ADC_GetFifoEntries(ADC_Type* base)
DECL|ADC_GetStatusFlag|function|static inline uint32_t ADC_GetStatusFlag(ADC_Type* base, uint32_t flags)
DECL|ADC_IsFifoEmpty|function|static inline bool ADC_IsFifoEmpty(ADC_Type* base)
DECL|ADC_IsFifoFull|function|static inline bool ADC_IsFifoFull(ADC_Type* base)
DECL|ADC_LevelShifterDisable|function|static inline void ADC_LevelShifterDisable(ADC_Type* base)
DECL|ADC_LevelShifterEnable|function|static inline void ADC_LevelShifterEnable(ADC_Type* base)
DECL|ADC_SetDmaCh|function|static inline void ADC_SetDmaCh(ADC_Type* base, uint32_t logicCh)
DECL|ADC_SetDmaWatermark|function|static inline void ADC_SetDmaWatermark(ADC_Type* base, uint32_t watermark)
DECL|__ADC_IMX7D_H__|macro|__ADC_IMX7D_H__
DECL|_adc_average_number|enum|enum _adc_average_number
DECL|_adc_compare_mode|enum|enum _adc_compare_mode
DECL|_adc_init_config|struct|typedef struct _adc_init_config
DECL|_adc_interrupt|enum|enum _adc_interrupt
DECL|_adc_logic_ch_init_config|struct|typedef struct _adc_logic_ch_init_config
DECL|_adc_logic_ch_selection|enum|enum _adc_logic_ch_selection
DECL|_adc_status_flag|enum|enum _adc_status_flag
DECL|adcAvgNum16|enumerator|adcAvgNum16 = 0x2, /*!< ADC Hardware Average Number is set to 16.*/
DECL|adcAvgNum32|enumerator|adcAvgNum32 = 0x3, /*!< ADC Hardware Average Number is set to 32.*/
DECL|adcAvgNum4|enumerator|adcAvgNum4 = 0x0, /*!< ADC Hardware Average Number is set to 4.*/
DECL|adcAvgNum8|enumerator|adcAvgNum8 = 0x1, /*!< ADC Hardware Average Number is set to 8.*/
DECL|adcCmpModeDisable|enumerator|adcCmpModeDisable = 0x0, /*!< ADC build-in comparator is disabled.*/
DECL|adcCmpModeGreaterThanHigh|enumerator|adcCmpModeGreaterThanHigh = 0x5, /*!< ADC build-in comparator is triggered when sample value greater than high threshold.*/
DECL|adcCmpModeGreaterThanLow|enumerator|adcCmpModeGreaterThanLow = 0x1, /*!< ADC build-in comparator is triggered when sample value greater than low threshold.*/
DECL|adcCmpModeInInterval|enumerator|adcCmpModeInInterval = 0x3, /*!< ADC build-in comparator is triggered when sample value in interval between low and high threshold.*/
DECL|adcCmpModeLessThanHigh|enumerator|adcCmpModeLessThanHigh = 0x6, /*!< ADC build-in comparator is triggered when sample value less than high threshold.*/
DECL|adcCmpModeLessThanLow|enumerator|adcCmpModeLessThanLow = 0x2, /*!< ADC build-in comparator is triggered when sample value less than low threshold.*/
DECL|adcCmpModeOutOffInterval|enumerator|adcCmpModeOutOffInterval = 0x7, /*!< ADC build-in comparator is triggered when sample value out of interval between low and high threshold.*/
DECL|adcIntCmpChA|enumerator|adcIntCmpChA = ADC_INT_EN_CHA_CMP_INT_EN_MASK, /*!< Channel A Compare Interrupt Enable.*/
DECL|adcIntCmpChB|enumerator|adcIntCmpChB = ADC_INT_EN_CHB_CMP_INT_EN_MASK, /*!< Channel B Compare Interrupt Enable.*/
DECL|adcIntCmpChC|enumerator|adcIntCmpChC = ADC_INT_EN_CHC_CMP_INT_EN_MASK, /*!< Channel C Compare Interrupt Enable.*/
DECL|adcIntCmpChD|enumerator|adcIntCmpChD = ADC_INT_EN_CHD_CMP_INT_EN_MASK, /*!< Channel D Compare Interrupt Enable.*/
DECL|adcIntConvertChA|enumerator|adcIntConvertChA = ADC_INT_EN_CHA_COV_INT_EN_MASK, /*!< Channel A Conversion Interrupt Enable.*/
DECL|adcIntConvertChB|enumerator|adcIntConvertChB = ADC_INT_EN_CHB_COV_INT_EN_MASK, /*!< Channel B Conversion Interrupt Enable.*/
DECL|adcIntConvertChC|enumerator|adcIntConvertChC = ADC_INT_EN_CHC_COV_INT_EN_MASK, /*!< Channel C Conversion Interrupt Enable.*/
DECL|adcIntConvertChD|enumerator|adcIntConvertChD = ADC_INT_EN_CHD_COV_INT_EN_MASK, /*!< Channel D Conversion Interrupt Enable.*/
DECL|adcIntConvertChSw|enumerator|adcIntConvertChSw = ADC_INT_EN_SW_CH_COV_INT_EN_MASK, /*!< Software Channel Conversion Interrupt Enable.*/
DECL|adcIntConvertTimeoutChA|enumerator|adcIntConvertTimeoutChA = ADC_INT_EN_CHA_COV_TO_INT_EN_MASK, /*!< Channel A Conversion Time Out Interrupt Enable.*/
DECL|adcIntConvertTimeoutChB|enumerator|adcIntConvertTimeoutChB = ADC_INT_EN_CHB_COV_TO_INT_EN_MASK, /*!< Channel B Conversion Time Out Interrupt Enable.*/
DECL|adcIntConvertTimeoutChC|enumerator|adcIntConvertTimeoutChC = ADC_INT_EN_CHC_COV_TO_INT_EN_MASK, /*!< Channel C Conversion Time Out Interrupt Enable.*/
DECL|adcIntConvertTimeoutChD|enumerator|adcIntConvertTimeoutChD = ADC_INT_EN_CHD_COV_TO_INT_EN_MASK, /*!< Channel D Conversion Time Out Interrupt Enable.*/
DECL|adcIntConvertTimeoutChSw|enumerator|adcIntConvertTimeoutChSw = ADC_INT_EN_SW_CH_COV_TO_INT_EN_MASK, /*!< Software Channel Conversion Time Out Interrupt Enable.*/
DECL|adcIntDmaReachWatermark|enumerator|adcIntDmaReachWatermark = ADC_INT_EN_DMA_REACH_WM_INT_EN_MASK, /*!< DMA Reach Watermark Level Interrupt Enable.*/
DECL|adcIntFifoOverrun|enumerator|adcIntFifoOverrun = ADC_INT_EN_FIFO_OVERRUN_INT_EN_MASK, /*!< FIFO overrun Interrupt Enable.*/
DECL|adcIntFifoUnderrun|enumerator|adcIntFifoUnderrun = ADC_INT_EN_FIFO_UNDERRUN_INT_EN_MASK, /*!< FIFO underrun Interrupt Enable.*/
DECL|adcIntLastFifoDataRead|enumerator|adcIntLastFifoDataRead = ADC_INT_EN_LAST_FIFO_DATA_READ_EN_MASK, /*!< Last FIFO Data Read Interrupt Enable.*/
DECL|adcLogicChA|enumerator|adcLogicChA = 0x0, /*!< ADC Logic Channel A.*/
DECL|adcLogicChB|enumerator|adcLogicChB = 0x1, /*!< ADC Logic Channel B.*/
DECL|adcLogicChC|enumerator|adcLogicChC = 0x2, /*!< ADC Logic Channel C.*/
DECL|adcLogicChD|enumerator|adcLogicChD = 0x3, /*!< ADC Logic Channel D.*/
DECL|adcLogicChSW|enumerator|adcLogicChSW = 0x4, /*!< ADC Logic Channel Software.*/
DECL|adcStatusCmpChA|enumerator|adcStatusCmpChA = ADC_INT_STATUS_CHA_CMP_MASK, /*!< Channel A Compare status flag.*/
DECL|adcStatusCmpChB|enumerator|adcStatusCmpChB = ADC_INT_STATUS_CHB_CMP_MASK, /*!< Channel B Compare status flag.*/
DECL|adcStatusCmpChC|enumerator|adcStatusCmpChC = ADC_INT_STATUS_CHC_CMP_MASK, /*!< Channel C Compare status flag.*/
DECL|adcStatusCmpChD|enumerator|adcStatusCmpChD = ADC_INT_STATUS_CHD_CMP_MASK, /*!< Channel D Compare status flag.*/
DECL|adcStatusConvertChA|enumerator|adcStatusConvertChA = ADC_INT_STATUS_CHA_COV_MASK, /*!< Channel A Conversion status flag.*/
DECL|adcStatusConvertChB|enumerator|adcStatusConvertChB = ADC_INT_STATUS_CHB_COV_MASK, /*!< Channel B Conversion status flag.*/
DECL|adcStatusConvertChC|enumerator|adcStatusConvertChC = ADC_INT_STATUS_CHC_COV_MASK, /*!< Channel C Conversion status flag.*/
DECL|adcStatusConvertChD|enumerator|adcStatusConvertChD = ADC_INT_STATUS_CHD_COV_MASK, /*!< Channel D Conversion status flag.*/
DECL|adcStatusConvertChSw|enumerator|adcStatusConvertChSw = ADC_INT_STATUS_SW_CH_COV_MASK, /*!< Software Channel Conversion status flag.*/
DECL|adcStatusConvertTimeoutChA|enumerator|adcStatusConvertTimeoutChA = ADC_INT_STATUS_CHA_COV_TO_MASK, /*!< Channel A Conversion Time Out status flag.*/
DECL|adcStatusConvertTimeoutChB|enumerator|adcStatusConvertTimeoutChB = ADC_INT_STATUS_CHB_COV_TO_MASK, /*!< Channel B Conversion Time Out status flag.*/
DECL|adcStatusConvertTimeoutChC|enumerator|adcStatusConvertTimeoutChC = ADC_INT_STATUS_CHC_COV_TO_MASK, /*!< Channel C Conversion Time Out status flag.*/
DECL|adcStatusConvertTimeoutChD|enumerator|adcStatusConvertTimeoutChD = ADC_INT_STATUS_CHD_COV_TO_MASK, /*!< Channel D Conversion Time Out status flag.*/
DECL|adcStatusConvertTimeoutChSw|enumerator|adcStatusConvertTimeoutChSw = ADC_INT_STATUS_SW_CH_COV_TO_MASK, /*!< Software Channel Conversion Time Out status flag.*/
DECL|adcStatusDmaReachWatermark|enumerator|adcStatusDmaReachWatermark = ADC_INT_STATUS_DMA_REACH_WM_MASK, /*!< DMA Reach Watermark Level status flag.*/
DECL|adcStatusFifoOverrun|enumerator|adcStatusFifoOverrun = ADC_INT_STATUS_FIFO_OVERRUN_MASK, /*!< FIFO Overrun status flag.*/
DECL|adcStatusFifoUnderrun|enumerator|adcStatusFifoUnderrun = ADC_INT_STATUS_FIFO_UNDERRUN_MASK, /*!< FIFO Underrun status flag.*/
DECL|adcStatusLastFifoDataRead|enumerator|adcStatusLastFifoDataRead = ADC_INT_STATUS_LAST_FIFO_DATA_READ_MASK, /*!< Last FIFO Data Read status flag.*/
DECL|adc_init_config_t|typedef|} adc_init_config_t;
DECL|adc_logic_ch_init_config_t|typedef|} adc_logic_ch_init_config_t;
DECL|averageEnable|member|bool averageEnable; /*!< Hardware average enable configuration.*/
DECL|averageNumber|member|uint8_t averageNumber; /*!< The average number for hardware average function.*/
DECL|convertRate|member|uint32_t convertRate; /*!< The continuous rate when continuous sample enabled.*/
DECL|coutinuousEnable|member|bool coutinuousEnable; /*!< Continuous sample mode enable configuration.*/
DECL|inputChannel|member|uint8_t inputChannel; /*!< The logic channel to be set.*/
DECL|levelShifterEnable|member|bool levelShifterEnable; /*!< The level shifter module configuration(Enable to power on ADC module).*/
DECL|sampleRate|member|uint32_t sampleRate; /*!< The desired ADC sample rate.*/
