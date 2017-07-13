DECL|SPI_CMD_RESERVED|macro|SPI_CMD_RESERVED
DECL|SPI_CallbackFxn|typedef|typedef void (*SPI_CallbackFxn) (SPI_Handle handle,
DECL|SPI_CloseFxn|typedef|typedef void (*SPI_CloseFxn) (SPI_Handle handle);
DECL|SPI_Config_|struct|typedef struct SPI_Config_ {
DECL|SPI_Config|typedef|} SPI_Config;
DECL|SPI_ControlFxn|typedef|typedef int_fast16_t (*SPI_ControlFxn) (SPI_Handle handle, uint_fast16_t cmd,
DECL|SPI_FrameFormat_|enum|typedef enum SPI_FrameFormat_ {
DECL|SPI_FrameFormat|typedef|} SPI_FrameFormat;
DECL|SPI_FxnTable_|struct|typedef struct SPI_FxnTable_ {
DECL|SPI_FxnTable|typedef|} SPI_FxnTable;
DECL|SPI_Handle|typedef|typedef struct SPI_Config_ *SPI_Handle;
DECL|SPI_InitFxn|typedef|typedef void (*SPI_InitFxn) (SPI_Handle handle);
DECL|SPI_MASTER|enumerator|SPI_MASTER = 0, /*!< SPI in master mode */
DECL|SPI_MODE_BLOCKING|enumerator|SPI_MODE_BLOCKING,
DECL|SPI_MODE_CALLBACK|enumerator|SPI_MODE_CALLBACK
DECL|SPI_MW|enumerator|SPI_MW = 5 /*!< Micro-wire mode */
DECL|SPI_Mode_|enum|typedef enum SPI_Mode_ {
DECL|SPI_Mode|typedef|} SPI_Mode;
DECL|SPI_OpenFxn|typedef|typedef SPI_Handle (*SPI_OpenFxn) (SPI_Handle handle, SPI_Params *params);
DECL|SPI_POL0_PHA0|enumerator|SPI_POL0_PHA0 = 0, /*!< SPI mode Polarity 0 Phase 0 */
DECL|SPI_POL0_PHA1|enumerator|SPI_POL0_PHA1 = 1, /*!< SPI mode Polarity 0 Phase 1 */
DECL|SPI_POL1_PHA0|enumerator|SPI_POL1_PHA0 = 2, /*!< SPI mode Polarity 1 Phase 0 */
DECL|SPI_POL1_PHA1|enumerator|SPI_POL1_PHA1 = 3, /*!< SPI mode Polarity 1 Phase 1 */
DECL|SPI_Params_|struct|typedef struct SPI_Params_ {
DECL|SPI_Params|typedef|} SPI_Params;
DECL|SPI_SLAVE|enumerator|SPI_SLAVE = 1 /*!< SPI in slave mode */
DECL|SPI_STATUS_ERROR|macro|SPI_STATUS_ERROR
DECL|SPI_STATUS_RESERVED|macro|SPI_STATUS_RESERVED
DECL|SPI_STATUS_SUCCESS|macro|SPI_STATUS_SUCCESS
DECL|SPI_STATUS_UNDEFINEDCMD|macro|SPI_STATUS_UNDEFINEDCMD
DECL|SPI_Status_|enum|typedef enum SPI_Status_ {
DECL|SPI_Status|typedef|} SPI_Status;
DECL|SPI_TI|enumerator|SPI_TI = 4, /*!< TI mode */
DECL|SPI_TRANSFER_CANCELED|enumerator|SPI_TRANSFER_CANCELED,
DECL|SPI_TRANSFER_COMPLETED|enumerator|SPI_TRANSFER_COMPLETED = 0,
DECL|SPI_TRANSFER_CSN_DEASSERT|enumerator|SPI_TRANSFER_CSN_DEASSERT
DECL|SPI_TRANSFER_FAILED|enumerator|SPI_TRANSFER_FAILED,
DECL|SPI_TRANSFER_STARTED|enumerator|SPI_TRANSFER_STARTED,
DECL|SPI_Transaction_|struct|typedef struct SPI_Transaction_ {
DECL|SPI_Transaction|typedef|} SPI_Transaction;
DECL|SPI_TransferCancelFxn|typedef|typedef void (*SPI_TransferCancelFxn) (SPI_Handle handle);
DECL|SPI_TransferFxn|typedef|typedef bool (*SPI_TransferFxn) (SPI_Handle handle,
DECL|SPI_TransferMode_|enum|typedef enum SPI_TransferMode_ {
DECL|SPI_TransferMode|typedef|} SPI_TransferMode;
DECL|SPI_WAIT_FOREVER|macro|SPI_WAIT_FOREVER
DECL|arg|member|void *arg; /*!< Argument to be passed to the callback function */
DECL|bitRate|member|uint32_t bitRate; /*!< SPI bit rate in Hz */
DECL|closeFxn|member|SPI_CloseFxn closeFxn;
DECL|controlFxn|member|SPI_ControlFxn controlFxn;
DECL|count|member|size_t count; /*!< Number of frames for this transaction */
DECL|custom|member|void *custom; /*!< Custom argument used by driver
DECL|dataSize|member|uint32_t dataSize; /*!< SPI data frame size in bits */
DECL|frameFormat|member|SPI_FrameFormat frameFormat; /*!< SPI frame format */
DECL|fxnTablePtr|member|SPI_FxnTable const *fxnTablePtr;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|SPI_InitFxn initFxn;
DECL|mode|member|SPI_Mode mode; /*!< Master or Slave mode */
DECL|object|member|void *object;
DECL|openFxn|member|SPI_OpenFxn openFxn;
DECL|rxBuf|member|void *rxBuf; /*!< void * to a buffer to receive data */
DECL|status|member|SPI_Status status; /*!< Status code set by SPI_transfer */
DECL|ti_drivers_SPI__include|macro|ti_drivers_SPI__include
DECL|transferCallbackFxn|member|SPI_CallbackFxn transferCallbackFxn;/*!< Callback function pointer */
DECL|transferCancelFxn|member|SPI_TransferCancelFxn transferCancelFxn;
DECL|transferFxn|member|SPI_TransferFxn transferFxn;
DECL|transferMode|member|SPI_TransferMode transferMode; /*!< Blocking or Callback mode */
DECL|transferTimeout|member|uint32_t transferTimeout; /*!< Transfer timeout in system
DECL|txBuf|member|void *txBuf; /*!< void * to a buffer with data to be transmitted */
