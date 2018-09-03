DECL|FSL_SAI_DRIVER_VERSION|macro|FSL_SAI_DRIVER_VERSION
DECL|SAI_ReadData|function|static inline uint32_t SAI_ReadData(I2S_Type *base, uint32_t channel)
DECL|SAI_RxClearStatusFlags|function|static inline void SAI_RxClearStatusFlags(I2S_Type *base, uint32_t mask)
DECL|SAI_RxDisableInterrupts|function|static inline void SAI_RxDisableInterrupts(I2S_Type *base, uint32_t mask)
DECL|SAI_RxEnableDMA|function|static inline void SAI_RxEnableDMA(I2S_Type *base, uint32_t mask, bool enable)
DECL|SAI_RxEnableInterrupts|function|static inline void SAI_RxEnableInterrupts(I2S_Type *base, uint32_t mask)
DECL|SAI_RxGetDataRegisterAddress|function|static inline uint32_t SAI_RxGetDataRegisterAddress(I2S_Type *base, uint32_t channel)
DECL|SAI_RxGetStatusFlag|function|static inline uint32_t SAI_RxGetStatusFlag(I2S_Type *base)
DECL|SAI_RxSetFIFOErrorContinue|function|static inline void SAI_RxSetFIFOErrorContinue(I2S_Type *base, bool isEnabled)
DECL|SAI_TxClearStatusFlags|function|static inline void SAI_TxClearStatusFlags(I2S_Type *base, uint32_t mask)
DECL|SAI_TxDisableInterrupts|function|static inline void SAI_TxDisableInterrupts(I2S_Type *base, uint32_t mask)
DECL|SAI_TxEnableDMA|function|static inline void SAI_TxEnableDMA(I2S_Type *base, uint32_t mask, bool enable)
DECL|SAI_TxEnableInterrupts|function|static inline void SAI_TxEnableInterrupts(I2S_Type *base, uint32_t mask)
DECL|SAI_TxGetDataRegisterAddress|function|static inline uint32_t SAI_TxGetDataRegisterAddress(I2S_Type *base, uint32_t channel)
DECL|SAI_TxGetStatusFlag|function|static inline uint32_t SAI_TxGetStatusFlag(I2S_Type *base)
DECL|SAI_TxSetFIFOErrorContinue|function|static inline void SAI_TxSetFIFOErrorContinue(I2S_Type *base, bool isEnabled)
DECL|SAI_WriteData|function|static inline void SAI_WriteData(I2S_Type *base, uint32_t channel, uint32_t data)
DECL|SAI_XFER_QUEUE_SIZE|macro|SAI_XFER_QUEUE_SIZE
DECL|_FSL_SAI_H_|macro|_FSL_SAI_H_
DECL|_sai_bclk_source|enum|typedef enum _sai_bclk_source
DECL|_sai_clock_polarity|enum|typedef enum _sai_clock_polarity
DECL|_sai_config|struct|typedef struct _sai_config
DECL|_sai_data_order|enum|typedef enum _sai_data_order
DECL|_sai_dma_enable_t|enum|enum _sai_dma_enable_t
DECL|_sai_fifo_packing|enum|typedef enum _sai_fifo_packing
DECL|_sai_flags|enum|enum _sai_flags
DECL|_sai_handle|struct|struct _sai_handle
DECL|_sai_interrupt_enable_t|enum|enum _sai_interrupt_enable_t
DECL|_sai_master_slave|enum|typedef enum _sai_master_slave
DECL|_sai_mclk_source|enum|typedef enum _sai_mclk_source
DECL|_sai_mono_stereo|enum|typedef enum _sai_mono_stereo
DECL|_sai_protocol|enum|typedef enum _sai_protocol
DECL|_sai_reset_type|enum|typedef enum _sai_reset_type
DECL|_sai_sample_rate|enum|typedef enum _sai_sample_rate
DECL|_sai_status_t|enum|enum _sai_status_t
DECL|_sai_sync_mode|enum|typedef enum _sai_sync_mode
DECL|_sai_transfer_format|struct|typedef struct _sai_transfer_format
DECL|_sai_transfer|struct|typedef struct _sai_transfer
DECL|_sai_word_width|enum|typedef enum _sai_word_width
DECL|base|member|I2S_Type *base; /*!< base address */
DECL|bclkSource|member|sai_bclk_source_t bclkSource; /*!< Bit Clock source */
DECL|bitWidth|member|uint32_t bitWidth; /*!< Data length of audio data, usually 8/16/24/32 bits */
DECL|bitWidth|member|uint8_t bitWidth; /*!< Bit width for transfer, 8/16/24/32 bits */
DECL|callback|member|sai_transfer_callback_t callback; /*!< Callback function called at transfer event*/
DECL|channel|member|uint8_t channel; /*!< Data channel used in transfer.*/
DECL|channel|member|uint8_t channel; /*!< Transfer channel */
DECL|dataSize|member|size_t dataSize; /*!< Transfer size. */
DECL|data|member|uint8_t *data; /*!< Data start address to transfer. */
DECL|isFrameSyncCompact|member|bool isFrameSyncCompact; /*!< True means Frame sync length is configurable according to bitWidth, false means frame
DECL|kSAI_BclkSourceBusclk|enumerator|kSAI_BclkSourceBusclk = 0x0U, /*!< Bit clock using bus clock */
DECL|kSAI_BclkSourceMclkDiv|enumerator|kSAI_BclkSourceMclkDiv, /*!< Bit clock using master clock divider */
DECL|kSAI_BclkSourceOtherSai0|enumerator|kSAI_BclkSourceOtherSai0, /*!< Bit clock from other SAI device */
DECL|kSAI_BclkSourceOtherSai1|enumerator|kSAI_BclkSourceOtherSai1 /*!< Bit clock from other SAI device */
DECL|kSAI_BusI2S|enumerator|kSAI_BusI2S, /*!< Uses I2S format. */
DECL|kSAI_BusLeftJustified|enumerator|kSAI_BusLeftJustified = 0x0U, /*!< Uses left justified format.*/
DECL|kSAI_BusPCMA|enumerator|kSAI_BusPCMA, /*!< Uses I2S PCM A format.*/
DECL|kSAI_BusPCMB|enumerator|kSAI_BusPCMB /*!< Uses I2S PCM B format. */
DECL|kSAI_BusRightJustified|enumerator|kSAI_BusRightJustified, /*!< Uses right justified format. */
DECL|kSAI_DataLSB|enumerator|kSAI_DataLSB = 0x0U, /*!< LSB bit transferred first */
DECL|kSAI_DataMSB|enumerator|kSAI_DataMSB /*!< MSB bit transferred first */
DECL|kSAI_FIFOErrorFlag|enumerator|kSAI_FIFOErrorFlag = I2S_TCSR_FEF_MASK, /*!< FIFO error flag */
DECL|kSAI_FIFOErrorInterruptEnable|enumerator|kSAI_FIFOErrorInterruptEnable = I2S_TCSR_FEIE_MASK, /*!< FIFO error flag */
DECL|kSAI_FIFORequestDMAEnable|enumerator|kSAI_FIFORequestDMAEnable = I2S_TCSR_FRDE_MASK, /*!< FIFO request caused by the DMA request */
DECL|kSAI_FIFORequestFlag|enumerator|kSAI_FIFORequestFlag = I2S_TCSR_FRF_MASK, /*!< FIFO request flag. */
DECL|kSAI_FIFORequestInterruptEnable|enumerator|kSAI_FIFORequestInterruptEnable = I2S_TCSR_FRIE_MASK, /*!< FIFO request, means reached watermark */
DECL|kSAI_FIFOWarningDMAEnable|enumerator|kSAI_FIFOWarningDMAEnable = I2S_TCSR_FWDE_MASK, /*!< FIFO warning caused by the DMA request */
DECL|kSAI_FIFOWarningFlag|enumerator|kSAI_FIFOWarningFlag = I2S_TCSR_FWF_MASK, /*!< FIFO warning flag */
DECL|kSAI_FIFOWarningInterruptEnable|enumerator|kSAI_FIFOWarningInterruptEnable = I2S_TCSR_FWIE_MASK, /*!< FIFO warning flag, means the FIFO is empty */
DECL|kSAI_FifoPacking16bit|enumerator|kSAI_FifoPacking16bit = 0x3U /*!< 16bit packing enabled */
DECL|kSAI_FifoPacking8bit|enumerator|kSAI_FifoPacking8bit = 0x2U, /*!< 8 bit packing enabled */
DECL|kSAI_FifoPackingDisabled|enumerator|kSAI_FifoPackingDisabled = 0x0U, /*!< Packing disabled */
DECL|kSAI_Master|enumerator|kSAI_Master = 0x0U, /*!< Master mode */
DECL|kSAI_MclkSourceSelect1|enumerator|kSAI_MclkSourceSelect1, /*!< Master clock from source 1 */
DECL|kSAI_MclkSourceSelect2|enumerator|kSAI_MclkSourceSelect2, /*!< Master clock from source 2 */
DECL|kSAI_MclkSourceSelect3|enumerator|kSAI_MclkSourceSelect3 /*!< Master clock from source 3 */
DECL|kSAI_MclkSourceSysclk|enumerator|kSAI_MclkSourceSysclk = 0x0U, /*!< Master clock from the system clock */
DECL|kSAI_ModeAsync|enumerator|kSAI_ModeAsync = 0x0U, /*!< Asynchronous mode */
DECL|kSAI_ModeSyncWithOtherRx|enumerator|kSAI_ModeSyncWithOtherRx /*!< Synchronous with another SAI receiver */
DECL|kSAI_ModeSyncWithOtherTx|enumerator|kSAI_ModeSyncWithOtherTx, /*!< Synchronous with another SAI transmit */
DECL|kSAI_ModeSync|enumerator|kSAI_ModeSync, /*!< Synchronous mode (with receiver or transmit) */
DECL|kSAI_MonoLeft|enumerator|kSAI_MonoLeft /*!< Only left channel have sound. */
DECL|kSAI_MonoRight|enumerator|kSAI_MonoRight, /*!< Only Right channel have sound. */
DECL|kSAI_PolarityActiveHigh|enumerator|kSAI_PolarityActiveHigh = 0x0U, /*!< Clock active high */
DECL|kSAI_PolarityActiveLow|enumerator|kSAI_PolarityActiveLow /*!< Clock active low */
DECL|kSAI_ResetAll|enumerator|kSAI_ResetAll = I2S_TCSR_SR_MASK | I2S_TCSR_FR_MASK /*!< All reset. */
DECL|kSAI_ResetTypeFIFO|enumerator|kSAI_ResetTypeFIFO = I2S_TCSR_FR_MASK, /*!< FIFO reset, reset the FIFO read and write pointer */
DECL|kSAI_ResetTypeSoftware|enumerator|kSAI_ResetTypeSoftware = I2S_TCSR_SR_MASK, /*!< Software reset, reset the logic state */
DECL|kSAI_SampleRate11025Hz|enumerator|kSAI_SampleRate11025Hz = 11025U, /*!< Sample rate 11025 Hz */
DECL|kSAI_SampleRate12KHz|enumerator|kSAI_SampleRate12KHz = 12000U, /*!< Sample rate 12000 Hz */
DECL|kSAI_SampleRate16KHz|enumerator|kSAI_SampleRate16KHz = 16000U, /*!< Sample rate 16000 Hz */
DECL|kSAI_SampleRate192KHz|enumerator|kSAI_SampleRate192KHz = 192000U, /*!< Sample rate 192000 Hz */
DECL|kSAI_SampleRate22050Hz|enumerator|kSAI_SampleRate22050Hz = 22050U, /*!< Sample rate 22050 Hz */
DECL|kSAI_SampleRate24KHz|enumerator|kSAI_SampleRate24KHz = 24000U, /*!< Sample rate 24000 Hz */
DECL|kSAI_SampleRate32KHz|enumerator|kSAI_SampleRate32KHz = 32000U, /*!< Sample rate 32000 Hz */
DECL|kSAI_SampleRate384KHz|enumerator|kSAI_SampleRate384KHz = 384000U, /*!< Sample rate 384000 Hz */
DECL|kSAI_SampleRate44100Hz|enumerator|kSAI_SampleRate44100Hz = 44100U, /*!< Sample rate 44100 Hz */
DECL|kSAI_SampleRate48KHz|enumerator|kSAI_SampleRate48KHz = 48000U, /*!< Sample rate 48000 Hz */
DECL|kSAI_SampleRate8KHz|enumerator|kSAI_SampleRate8KHz = 8000U, /*!< Sample rate 8000 Hz */
DECL|kSAI_SampleRate96KHz|enumerator|kSAI_SampleRate96KHz = 96000U, /*!< Sample rate 96000 Hz */
DECL|kSAI_Slave|enumerator|kSAI_Slave = 0x1U /*!< Slave mode */
DECL|kSAI_Stereo|enumerator|kSAI_Stereo = 0x0U, /*!< Stereo sound. */
DECL|kSAI_SyncErrorFlag|enumerator|kSAI_SyncErrorFlag = I2S_TCSR_SEF_MASK, /*!< Sync error flag, means the sync error is detected */
DECL|kSAI_SyncErrorInterruptEnable|enumerator|kSAI_SyncErrorInterruptEnable = I2S_TCSR_SEIE_MASK, /*!< Sync error flag, means the sync error is detected */
DECL|kSAI_WordStartFlag|enumerator|kSAI_WordStartFlag = I2S_TCSR_WSF_MASK, /*!< Word start flag, means the first word in a frame detected */
DECL|kSAI_WordStartInterruptEnable|enumerator|kSAI_WordStartInterruptEnable =
DECL|kSAI_WordWidth16bits|enumerator|kSAI_WordWidth16bits = 16U, /*!< Audio data width 16 bits */
DECL|kSAI_WordWidth24bits|enumerator|kSAI_WordWidth24bits = 24U, /*!< Audio data width 24 bits */
DECL|kSAI_WordWidth32bits|enumerator|kSAI_WordWidth32bits = 32U /*!< Audio data width 32 bits */
DECL|kSAI_WordWidth8bits|enumerator|kSAI_WordWidth8bits = 8U, /*!< Audio data width 8 bits */
DECL|kStatus_SAI_QueueFull|enumerator|kStatus_SAI_QueueFull = MAKE_STATUS(kStatusGroup_SAI, 4), /*!< SAI transfer queue is full. */
DECL|kStatus_SAI_RxBusy|enumerator|kStatus_SAI_RxBusy = MAKE_STATUS(kStatusGroup_SAI, 1), /*!< SAI Rx is busy. */
DECL|kStatus_SAI_RxError|enumerator|kStatus_SAI_RxError = MAKE_STATUS(kStatusGroup_SAI, 3), /*!< SAI Rx FIFO error. */
DECL|kStatus_SAI_RxIdle|enumerator|kStatus_SAI_RxIdle = MAKE_STATUS(kStatusGroup_SAI, 6) /*!< SAI Rx is idle */
DECL|kStatus_SAI_TxBusy|enumerator|kStatus_SAI_TxBusy = MAKE_STATUS(kStatusGroup_SAI, 0), /*!< SAI Tx is busy. */
DECL|kStatus_SAI_TxError|enumerator|kStatus_SAI_TxError = MAKE_STATUS(kStatusGroup_SAI, 2), /*!< SAI Tx FIFO error. */
DECL|kStatus_SAI_TxIdle|enumerator|kStatus_SAI_TxIdle = MAKE_STATUS(kStatusGroup_SAI, 5), /*!< SAI Tx is idle */
DECL|masterClockHz|member|uint32_t masterClockHz; /*!< Master clock frequency in Hz */
DECL|masterSlave|member|sai_master_slave_t masterSlave; /*!< Master or slave */
DECL|mclkOutputEnable|member|bool mclkOutputEnable; /*!< Master clock output enable, true means master clock divider enabled */
DECL|mclkSource|member|sai_mclk_source_t mclkSource; /*!< Master Clock source */
DECL|protocol|member|sai_protocol_t protocol; /*!< Audio bus protocol in SAI */
DECL|protocol|member|sai_protocol_t protocol; /*!< Which audio protocol used */
DECL|queueDriver|member|volatile uint8_t queueDriver; /*!< Index for driver to get the transfer data and size */
DECL|queueUser|member|volatile uint8_t queueUser; /*!< Index for user to queue transfer */
DECL|saiQueue|member|sai_transfer_t saiQueue[SAI_XFER_QUEUE_SIZE]; /*!< Transfer queue storing queued transfer */
DECL|sai_bclk_source_t|typedef|} sai_bclk_source_t;
DECL|sai_clock_polarity_t|typedef|} sai_clock_polarity_t;
DECL|sai_config_t|typedef|} sai_config_t;
DECL|sai_data_order_t|typedef|} sai_data_order_t;
DECL|sai_fifo_packing_t|typedef|} sai_fifo_packing_t;
DECL|sai_handle_t|typedef|typedef struct _sai_handle sai_handle_t;
DECL|sai_master_slave_t|typedef|} sai_master_slave_t;
DECL|sai_mclk_source_t|typedef|} sai_mclk_source_t;
DECL|sai_mono_stereo_t|typedef|} sai_mono_stereo_t;
DECL|sai_protocol_t|typedef|} sai_protocol_t;
DECL|sai_reset_type_t|typedef|} sai_reset_type_t;
DECL|sai_sample_rate_t|typedef|} sai_sample_rate_t;
DECL|sai_sync_mode_t|typedef|} sai_sync_mode_t;
DECL|sai_transfer_callback_t|typedef|typedef void (*sai_transfer_callback_t)(I2S_Type *base, sai_handle_t *handle, status_t status, void *userData);
DECL|sai_transfer_format_t|typedef|} sai_transfer_format_t;
DECL|sai_transfer_t|typedef|} sai_transfer_t;
DECL|sai_word_width_t|typedef|} sai_word_width_t;
DECL|sampleRate_Hz|member|uint32_t sampleRate_Hz; /*!< Sample rate of audio data */
DECL|state|member|uint32_t state; /*!< Transfer status */
DECL|stereo|member|sai_mono_stereo_t stereo; /*!< Mono or stereo */
DECL|syncMode|member|sai_sync_mode_t syncMode; /*!< SAI sync mode, control Tx/Rx clock sync */
DECL|transferSize|member|size_t transferSize[SAI_XFER_QUEUE_SIZE]; /*!< Data bytes need to transfer */
DECL|userData|member|void *userData; /*!< Callback parameter passed to callback function*/
DECL|watermark|member|uint8_t watermark; /*!< Watermark value */
DECL|watermark|member|uint8_t watermark; /*!< Watermark value */
