DECL|FSL_I2S_DRIVER_VERSION|macro|FSL_I2S_DRIVER_VERSION
DECL|I2S_DisableInterrupts|function|static inline void I2S_DisableInterrupts(I2S_Type *base, uint32_t interruptMask)
DECL|I2S_Disable|function|static inline void I2S_Disable(I2S_Type *base)
DECL|I2S_EnableInterrupts|function|static inline void I2S_EnableInterrupts(I2S_Type *base, uint32_t interruptMask)
DECL|I2S_Enable|function|static inline void I2S_Enable(I2S_Type *base)
DECL|I2S_GetEnabledInterrupts|function|static inline uint32_t I2S_GetEnabledInterrupts(I2S_Type *base)
DECL|I2S_NUM_BUFFERS|macro|I2S_NUM_BUFFERS
DECL|_FSL_I2S_H_|macro|_FSL_I2S_H_
DECL|_i2s_config|struct|typedef struct _i2s_config
DECL|_i2s_flags|enum|typedef enum _i2s_flags
DECL|_i2s_handle|struct|struct _i2s_handle
DECL|_i2s_master_slave|enum|typedef enum _i2s_master_slave
DECL|_i2s_mode|enum|typedef enum _i2s_mode
DECL|_i2s_status|enum|enum _i2s_status
DECL|_i2s_transfer|struct|typedef struct _i2s_transfer
DECL|completionCallback|member|i2s_transfer_callback_t completionCallback; /*!< Callback function pointer */
DECL|dataLength|member|uint8_t dataLength; /*!< Data length (4 - 32) */
DECL|dataLength|member|uint8_t dataLength; /*!< Data length (4 - 32) */
DECL|dataSize|member|volatile size_t dataSize; /*!< Buffer size in bytes. */
DECL|data|member|volatile uint8_t *data; /*!< Pointer to data buffer. */
DECL|divider|member|uint16_t divider; /*!< Flexcomm function clock divider (1 - 4096) */
DECL|errorCount|member|volatile uint32_t errorCount; /*!< Number of buffer underruns/overruns */
DECL|frameLength|member|uint16_t frameLength; /*!< Frame width (4 - 512) */
DECL|i2sQueue|member|volatile i2s_transfer_t i2sQueue[I2S_NUM_BUFFERS]; /*!< Transfer queue storing transfer buffers */
DECL|i2s_config_t|typedef|} i2s_config_t;
DECL|i2s_flags_t|typedef|} i2s_flags_t;
DECL|i2s_handle_t|typedef|typedef struct _i2s_handle i2s_handle_t;
DECL|i2s_master_slave_t|typedef|} i2s_master_slave_t;
DECL|i2s_mode_t|typedef|} i2s_mode_t;
DECL|i2s_transfer_callback_t|typedef|typedef void (*i2s_transfer_callback_t)(I2S_Type *base,
DECL|i2s_transfer_t|typedef|} i2s_transfer_t;
DECL|kI2S_MasterSlaveExtSckMaster|enumerator|kI2S_MasterSlaveExtSckMaster = 0x2, /*!< Master using existing SCK */
DECL|kI2S_MasterSlaveNormalMaster|enumerator|kI2S_MasterSlaveNormalMaster = 0x3 /*!< Normal master */
DECL|kI2S_MasterSlaveNormalSlave|enumerator|kI2S_MasterSlaveNormalSlave = 0x0, /*!< Normal slave */
DECL|kI2S_MasterSlaveWsSyncMaster|enumerator|kI2S_MasterSlaveWsSyncMaster = 0x1, /*!< WS synchronized master */
DECL|kI2S_ModeDspWs50|enumerator|kI2S_ModeDspWs50 = 0x1, /*!< DSP mode, WS having 50% duty cycle */
DECL|kI2S_ModeDspWsLong|enumerator|kI2S_ModeDspWsLong = 0x3 /*!< DSP mode, WS having one data slot long pulse */
DECL|kI2S_ModeDspWsShort|enumerator|kI2S_ModeDspWsShort = 0x2, /*!< DSP mode, WS having one clock long pulse */
DECL|kI2S_ModeI2sClassic|enumerator|kI2S_ModeI2sClassic = 0x0, /*!< I2S classic mode */
DECL|kI2S_RxErrorFlag|enumerator|kI2S_RxErrorFlag = I2S_FIFOINTENSET_RXERR_MASK, /*!< RX error interrupt */
DECL|kI2S_RxLevelFlag|enumerator|kI2S_RxLevelFlag = I2S_FIFOINTENSET_RXLVL_MASK /*!< RX level interrupt */
DECL|kI2S_TxErrorFlag|enumerator|kI2S_TxErrorFlag = I2S_FIFOINTENSET_TXERR_MASK, /*!< TX error interrupt */
DECL|kI2S_TxLevelFlag|enumerator|kI2S_TxLevelFlag = I2S_FIFOINTENSET_TXLVL_MASK, /*!< TX level interrupt */
DECL|kStatus_I2S_BufferComplete|enumerator|kStatus_I2S_BufferComplete =
DECL|kStatus_I2S_Busy|enumerator|kStatus_I2S_Busy =
DECL|kStatus_I2S_Done|enumerator|kStatus_I2S_Done = MAKE_STATUS(kStatusGroup_I2S, 1), /*!< All buffers transfers have completed */
DECL|leftJust|member|bool leftJust; /*!< Left justify data in FIFO */
DECL|masterSlave|member|i2s_master_slave_t masterSlave; /*!< Master / slave configuration */
DECL|mode|member|i2s_mode_t mode; /*!< I2S mode */
DECL|oneChannel|member|bool oneChannel; /*!< true mono, false stereo */
DECL|oneChannel|member|bool oneChannel; /*!< true mono, false stereo */
DECL|pack48|member|bool pack48; /*!< Packing format for 48-bit data (false - 24 bit values, true - alternating 32-bit and 16-bit
DECL|pack48|member|bool pack48; /*!< Packing format for 48-bit data (false - 24 bit values, true - alternating 32-bit and 16-bit
DECL|pdmData|member|bool pdmData; /*!< Data source is the D-Mic subsystem */
DECL|position|member|uint16_t position; /*!< Data position in the frame */
DECL|queueDriver|member|volatile uint8_t queueDriver; /*!< Queue index of buffer actually used by the driver */
DECL|queueUser|member|volatile uint8_t queueUser; /*!< Queue index where user's next transfer will be stored */
DECL|rightLow|member|bool rightLow; /*!< Right channel data in low portion of FIFO */
DECL|sckPol|member|bool sckPol; /*!< SCK polarity */
DECL|state|member|uint32_t state; /*!< State of transfer */
DECL|transferCount|member|volatile uint32_t transferCount; /*!< Number of bytes transferred */
DECL|txEmptyZero|member|bool txEmptyZero; /*!< Transmit zero when buffer becomes empty or last item */
DECL|useFifo48H|member|bool useFifo48H; /*!< When dataLength 17-24: true use FIFOWR48H, false use FIFOWR */
DECL|userData|member|void *userData; /*!< Application data passed to callback */
DECL|watermark|member|uint8_t watermark; /*!< FIFO trigger level */
DECL|watermark|member|volatile uint8_t watermark; /*!< FIFO trigger level */
DECL|wsPol|member|bool wsPol; /*!< WS polarity */
