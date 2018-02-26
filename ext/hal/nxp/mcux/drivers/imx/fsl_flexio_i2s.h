DECL|FLEXIO_I2S_Enable|function|static inline void FLEXIO_I2S_Enable(FLEXIO_I2S_Type *base, bool enable)
DECL|FLEXIO_I2S_ReadData|function|static inline uint32_t FLEXIO_I2S_ReadData(FLEXIO_I2S_Type *base)
DECL|FLEXIO_I2S_RxEnableDMA|function|static inline void FLEXIO_I2S_RxEnableDMA(FLEXIO_I2S_Type *base, bool enable)
DECL|FLEXIO_I2S_RxGetDataRegisterAddress|function|static inline uint32_t FLEXIO_I2S_RxGetDataRegisterAddress(FLEXIO_I2S_Type *base)
DECL|FLEXIO_I2S_TxEnableDMA|function|static inline void FLEXIO_I2S_TxEnableDMA(FLEXIO_I2S_Type *base, bool enable)
DECL|FLEXIO_I2S_TxGetDataRegisterAddress|function|static inline uint32_t FLEXIO_I2S_TxGetDataRegisterAddress(FLEXIO_I2S_Type *base)
DECL|FLEXIO_I2S_Type|typedef|} FLEXIO_I2S_Type;
DECL|FLEXIO_I2S_WriteData|function|static inline void FLEXIO_I2S_WriteData(FLEXIO_I2S_Type *base, uint8_t bitWidth, uint32_t data)
DECL|FLEXIO_I2S_XFER_QUEUE_SIZE|macro|FLEXIO_I2S_XFER_QUEUE_SIZE
DECL|FSL_FLEXIO_I2S_DRIVER_VERSION|macro|FSL_FLEXIO_I2S_DRIVER_VERSION
DECL|_FSL_FLEXIO_I2S_H_|macro|_FSL_FLEXIO_I2S_H_
DECL|_flexio_i2s_config|struct|typedef struct _flexio_i2s_config
DECL|_flexio_i2s_format|struct|typedef struct _flexio_i2s_format
DECL|_flexio_i2s_handle|struct|struct _flexio_i2s_handle
DECL|_flexio_i2s_interrupt_enable|enum|enum _flexio_i2s_interrupt_enable
DECL|_flexio_i2s_master_slave|enum|typedef enum _flexio_i2s_master_slave
DECL|_flexio_i2s_sample_rate|enum|typedef enum _flexio_i2s_sample_rate
DECL|_flexio_i2s_status_flags|enum|enum _flexio_i2s_status_flags
DECL|_flexio_i2s_status|enum|enum _flexio_i2s_status
DECL|_flexio_i2s_transfer|struct|typedef struct _flexio_i2s_transfer
DECL|_flexio_i2s_type|struct|typedef struct _flexio_i2s_type
DECL|_flexio_i2s_word_width|enum|typedef enum _flexio_i2s_word_width
DECL|bclkPinIndex|member|uint8_t bclkPinIndex; /*!< Bit clock pin index */
DECL|bclkPinPolarity|member|flexio_pin_polarity_t bclkPinPolarity; /*!< Bit clock pin polarity */
DECL|bclkTimerIndex|member|uint8_t bclkTimerIndex; /*!< Bit clock timer index */
DECL|bitWidth|member|uint8_t bitWidth; /*!< Bit width for transfer, 8/16/24/32bits */
DECL|bitWidth|member|uint8_t bitWidth; /*!< Bit width of audio data, always 8/16/24/32 bits */
DECL|callback|member|flexio_i2s_callback_t callback; /*!< Callback function called at transfer event*/
DECL|dataSize|member|size_t dataSize; /*!< Bytes to be transferred. */
DECL|data|member|uint8_t *data; /*!< Data buffer start pointer */
DECL|enableI2S|member|bool enableI2S; /*!< Enable FlexIO I2S */
DECL|flexioBase|member|FLEXIO_Type *flexioBase; /*!< FlexIO base pointer */
DECL|flexio_i2s_callback_t|typedef|typedef void (*flexio_i2s_callback_t)(FLEXIO_I2S_Type *base,
DECL|flexio_i2s_config_t|typedef|} flexio_i2s_config_t;
DECL|flexio_i2s_format_t|typedef|} flexio_i2s_format_t;
DECL|flexio_i2s_handle_t|typedef|typedef struct _flexio_i2s_handle flexio_i2s_handle_t;
DECL|flexio_i2s_master_slave_t|typedef|} flexio_i2s_master_slave_t;
DECL|flexio_i2s_sample_rate_t|typedef|} flexio_i2s_sample_rate_t;
DECL|flexio_i2s_transfer_t|typedef|} flexio_i2s_transfer_t;
DECL|flexio_i2s_word_width_t|typedef|} flexio_i2s_word_width_t;
DECL|fsPinIndex|member|uint8_t fsPinIndex; /*!< Frame sync pin index */
DECL|fsPinPolarity|member|flexio_pin_polarity_t fsPinPolarity; /*!< Frame sync pin polarity */
DECL|fsTimerIndex|member|uint8_t fsTimerIndex; /*!< Frame sync timer index */
DECL|kFLEXIO_I2S_Master|enumerator|kFLEXIO_I2S_Master = 0x0U, /*!< Master mode */
DECL|kFLEXIO_I2S_RxDataRegFullFlag|enumerator|kFLEXIO_I2S_RxDataRegFullFlag = 0x2U, /*!< Receive buffer full flag. */
DECL|kFLEXIO_I2S_RxDataRegFullInterruptEnable|enumerator|kFLEXIO_I2S_RxDataRegFullInterruptEnable = 0x2U, /*!< Receive buffer full interrupt enable. */
DECL|kFLEXIO_I2S_SampleRate11025Hz|enumerator|kFLEXIO_I2S_SampleRate11025Hz = 11025U, /*!< Sample rate 11025Hz */
DECL|kFLEXIO_I2S_SampleRate12KHz|enumerator|kFLEXIO_I2S_SampleRate12KHz = 12000U, /*!< Sample rate 12000Hz */
DECL|kFLEXIO_I2S_SampleRate16KHz|enumerator|kFLEXIO_I2S_SampleRate16KHz = 16000U, /*!< Sample rate 16000Hz */
DECL|kFLEXIO_I2S_SampleRate22050Hz|enumerator|kFLEXIO_I2S_SampleRate22050Hz = 22050U, /*!< Sample rate 22050Hz */
DECL|kFLEXIO_I2S_SampleRate24KHz|enumerator|kFLEXIO_I2S_SampleRate24KHz = 24000U, /*!< Sample rate 24000Hz */
DECL|kFLEXIO_I2S_SampleRate32KHz|enumerator|kFLEXIO_I2S_SampleRate32KHz = 32000U, /*!< Sample rate 32000Hz */
DECL|kFLEXIO_I2S_SampleRate44100Hz|enumerator|kFLEXIO_I2S_SampleRate44100Hz = 44100U, /*!< Sample rate 44100Hz */
DECL|kFLEXIO_I2S_SampleRate48KHz|enumerator|kFLEXIO_I2S_SampleRate48KHz = 48000U, /*!< Sample rate 48000Hz */
DECL|kFLEXIO_I2S_SampleRate8KHz|enumerator|kFLEXIO_I2S_SampleRate8KHz = 8000U, /*!< Sample rate 8000Hz */
DECL|kFLEXIO_I2S_SampleRate96KHz|enumerator|kFLEXIO_I2S_SampleRate96KHz = 96000U /*!< Sample rate 96000Hz */
DECL|kFLEXIO_I2S_Slave|enumerator|kFLEXIO_I2S_Slave = 0x1U /*!< Slave mode */
DECL|kFLEXIO_I2S_TxDataRegEmptyFlag|enumerator|kFLEXIO_I2S_TxDataRegEmptyFlag = 0x1U, /*!< Transmit buffer empty flag. */
DECL|kFLEXIO_I2S_TxDataRegEmptyInterruptEnable|enumerator|kFLEXIO_I2S_TxDataRegEmptyInterruptEnable = 0x1U, /*!< Transmit buffer empty interrupt enable. */
DECL|kFLEXIO_I2S_WordWidth16bits|enumerator|kFLEXIO_I2S_WordWidth16bits = 16U, /*!< Audio data width 16 bits */
DECL|kFLEXIO_I2S_WordWidth24bits|enumerator|kFLEXIO_I2S_WordWidth24bits = 24U, /*!< Audio data width 24 bits */
DECL|kFLEXIO_I2S_WordWidth32bits|enumerator|kFLEXIO_I2S_WordWidth32bits = 32U /*!< Audio data width 32 bits */
DECL|kFLEXIO_I2S_WordWidth8bits|enumerator|kFLEXIO_I2S_WordWidth8bits = 8U, /*!< Audio data width 8 bits */
DECL|kStatus_FLEXIO_I2S_Error|enumerator|kStatus_FLEXIO_I2S_Error = MAKE_STATUS(kStatusGroup_FLEXIO_I2S, 3), /*!< FlexIO I2S error occurred */
DECL|kStatus_FLEXIO_I2S_Idle|enumerator|kStatus_FLEXIO_I2S_Idle = MAKE_STATUS(kStatusGroup_FLEXIO_I2S, 0), /*!< FlexIO I2S is in idle state */
DECL|kStatus_FLEXIO_I2S_QueueFull|enumerator|kStatus_FLEXIO_I2S_QueueFull = MAKE_STATUS(kStatusGroup_FLEXIO_I2S, 4), /*!< FlexIO I2S transfer queue is full. */
DECL|kStatus_FLEXIO_I2S_RxBusy|enumerator|kStatus_FLEXIO_I2S_RxBusy = MAKE_STATUS(kStatusGroup_FLEXIO_I2S, 2), /*!< FlexIO I2S Tx is busy */
DECL|kStatus_FLEXIO_I2S_TxBusy|enumerator|kStatus_FLEXIO_I2S_TxBusy = MAKE_STATUS(kStatusGroup_FLEXIO_I2S, 1), /*!< FlexIO I2S Tx is busy */
DECL|masterSlave|member|flexio_i2s_master_slave_t masterSlave; /*!< Master or slave */
DECL|queueDriver|member|volatile uint8_t queueDriver; /*!< Index for driver to get the transfer data and size */
DECL|queueUser|member|volatile uint8_t queueUser; /*!< Index for user to queue transfer */
DECL|queue|member|flexio_i2s_transfer_t queue[FLEXIO_I2S_XFER_QUEUE_SIZE]; /*!< Transfer queue storing queued transfer */
DECL|rxPinIndex|member|uint8_t rxPinIndex; /*!< Rx data pin index */
DECL|rxPinPolarity|member|flexio_pin_polarity_t rxPinPolarity; /*!< Rx data pin polarity */
DECL|rxShifterIndex|member|uint8_t rxShifterIndex; /*!< Rx data shifter index */
DECL|rxTimerPolarity|member|flexio_shifter_timer_polarity_t rxTimerPolarity; /*!< Rx data valid on bclk rising or falling edge */
DECL|sampleRate_Hz|member|uint32_t sampleRate_Hz; /*!< Sample rate of the audio data */
DECL|state|member|uint32_t state; /*!< Internal state */
DECL|transferSize|member|size_t transferSize[FLEXIO_I2S_XFER_QUEUE_SIZE]; /*!< Data bytes need to transfer */
DECL|txPinIndex|member|uint8_t txPinIndex; /*!< Tx data pin index in FlexIO pins */
DECL|txPinPolarity|member|flexio_pin_polarity_t txPinPolarity; /*!< Tx data pin polarity, active high or low */
DECL|txShifterIndex|member|uint8_t txShifterIndex; /*!< Tx data shifter index */
DECL|txTimerPolarity|member|flexio_shifter_timer_polarity_t txTimerPolarity; /*!< Tx data valid on bclk rising or falling edge */
DECL|userData|member|void *userData; /*!< Callback parameter passed to callback function*/
