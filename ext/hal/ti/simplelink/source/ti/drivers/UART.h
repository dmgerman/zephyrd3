DECL|UART_CMD_GETRXCOUNT|macro|UART_CMD_GETRXCOUNT
DECL|UART_CMD_ISAVAILABLE|macro|UART_CMD_ISAVAILABLE
DECL|UART_CMD_PEEK|macro|UART_CMD_PEEK
DECL|UART_CMD_RESERVED|macro|UART_CMD_RESERVED
DECL|UART_CMD_RXDISABLE|macro|UART_CMD_RXDISABLE
DECL|UART_CMD_RXENABLE|macro|UART_CMD_RXENABLE
DECL|UART_Callback|typedef|typedef void (*UART_Callback) (UART_Handle handle, void *buf, size_t count);
DECL|UART_CloseFxn|typedef|typedef void (*UART_CloseFxn) (UART_Handle handle);
DECL|UART_Config_|struct|typedef struct UART_Config_ {
DECL|UART_Config|typedef|} UART_Config;
DECL|UART_ControlFxn|typedef|typedef int_fast16_t (*UART_ControlFxn) (UART_Handle handle, uint_fast16_t cmd, void *arg);
DECL|UART_DATA_BINARY|enumerator|UART_DATA_BINARY = 0, /*!< Data is not processed */
DECL|UART_DATA_TEXT|enumerator|UART_DATA_TEXT = 1 /*!< Data is processed according to above */
DECL|UART_DataMode_|enum|typedef enum UART_DataMode_ {
DECL|UART_DataMode|typedef|} UART_DataMode;
DECL|UART_ECHO_OFF|enumerator|UART_ECHO_OFF = 0, /*!< Data is not echoed */
DECL|UART_ECHO_ON|enumerator|UART_ECHO_ON = 1 /*!< Data is echoed */
DECL|UART_ERROR|macro|UART_ERROR
DECL|UART_Echo_|enum|typedef enum UART_Echo_ {
DECL|UART_Echo|typedef|} UART_Echo;
DECL|UART_FxnTable_|struct|typedef struct UART_FxnTable_ {
DECL|UART_FxnTable|typedef|} UART_FxnTable;
DECL|UART_Handle|typedef|typedef struct UART_Config_ *UART_Handle;
DECL|UART_InitFxn|typedef|typedef void (*UART_InitFxn) (UART_Handle handle);
DECL|UART_LEN_5|enumerator|UART_LEN_5 = 0, /*!< Data length is 5 bits */
DECL|UART_LEN_6|enumerator|UART_LEN_6 = 1, /*!< Data length is 6 bits */
DECL|UART_LEN_7|enumerator|UART_LEN_7 = 2, /*!< Data length is 7 bits */
DECL|UART_LEN_8|enumerator|UART_LEN_8 = 3 /*!< Data length is 8 bits */
DECL|UART_LEN_|enum|typedef enum UART_LEN_ {
DECL|UART_LEN|typedef|} UART_LEN;
DECL|UART_MODE_BLOCKING|enumerator|UART_MODE_BLOCKING,
DECL|UART_MODE_CALLBACK|enumerator|UART_MODE_CALLBACK
DECL|UART_Mode_|enum|typedef enum UART_Mode_ {
DECL|UART_Mode|typedef|} UART_Mode;
DECL|UART_OpenFxn|typedef|typedef UART_Handle (*UART_OpenFxn) (UART_Handle handle, UART_Params *params);
DECL|UART_PAR_EVEN|enumerator|UART_PAR_EVEN = 1, /*!< Parity bit is even */
DECL|UART_PAR_NONE|enumerator|UART_PAR_NONE = 0, /*!< No parity */
DECL|UART_PAR_ODD|enumerator|UART_PAR_ODD = 2, /*!< Parity bit is odd */
DECL|UART_PAR_ONE|enumerator|UART_PAR_ONE = 4 /*!< Parity bit is always one */
DECL|UART_PAR_ZERO|enumerator|UART_PAR_ZERO = 3, /*!< Parity bit is always zero */
DECL|UART_PAR_|enum|typedef enum UART_PAR_ {
DECL|UART_PAR|typedef|} UART_PAR;
DECL|UART_Params_|struct|typedef struct UART_Params_ {
DECL|UART_Params|typedef|} UART_Params;
DECL|UART_RETURN_FULL|enumerator|UART_RETURN_FULL,
DECL|UART_RETURN_NEWLINE|enumerator|UART_RETURN_NEWLINE
DECL|UART_ReadCancelFxn|typedef|typedef void (*UART_ReadCancelFxn) (UART_Handle handle);
DECL|UART_ReadFxn|typedef|typedef int_fast32_t (*UART_ReadFxn) (UART_Handle handle, void *buffer,
DECL|UART_ReadPollingFxn|typedef|typedef int_fast32_t (*UART_ReadPollingFxn) (UART_Handle handle, void *buffer,
DECL|UART_ReturnMode_|enum|typedef enum UART_ReturnMode_ {
DECL|UART_ReturnMode|typedef|} UART_ReturnMode;
DECL|UART_STATUS_ERROR|macro|UART_STATUS_ERROR
DECL|UART_STATUS_RESERVED|macro|UART_STATUS_RESERVED
DECL|UART_STATUS_SUCCESS|macro|UART_STATUS_SUCCESS
DECL|UART_STATUS_UNDEFINEDCMD|macro|UART_STATUS_UNDEFINEDCMD
DECL|UART_STOP_ONE|enumerator|UART_STOP_ONE = 0, /*!< One stop bit */
DECL|UART_STOP_TWO|enumerator|UART_STOP_TWO = 1 /*!< Two stop bits */
DECL|UART_STOP_|enum|typedef enum UART_STOP_ {
DECL|UART_STOP|typedef|} UART_STOP;
DECL|UART_WAIT_FOREVER|macro|UART_WAIT_FOREVER
DECL|UART_WriteCancelFxn|typedef|typedef void (*UART_WriteCancelFxn) (UART_Handle handle);
DECL|UART_WriteFxn|typedef|typedef int_fast32_t (*UART_WriteFxn) (UART_Handle handle, const void *buffer,
DECL|UART_WritePollingFxn|typedef|typedef int_fast32_t (*UART_WritePollingFxn) (UART_Handle handle,
DECL|baudRate|member|uint32_t baudRate; /*!< Baud rate for UART */
DECL|closeFxn|member|UART_CloseFxn closeFxn;
DECL|controlFxn|member|UART_ControlFxn controlFxn;
DECL|custom|member|void *custom; /*!< Custom argument used by driver implementation */
DECL|dataLength|member|UART_LEN dataLength; /*!< Data length for UART */
DECL|fxnTablePtr|member|UART_FxnTable const *fxnTablePtr;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|UART_InitFxn initFxn;
DECL|object|member|void *object;
DECL|openFxn|member|UART_OpenFxn openFxn;
DECL|parityType|member|UART_PAR parityType; /*!< Parity bit type for UART */
DECL|readCallback|member|UART_Callback readCallback; /*!< Pointer to read callback function for callback mode. */
DECL|readCancelFxn|member|UART_ReadCancelFxn readCancelFxn;
DECL|readDataMode|member|UART_DataMode readDataMode; /*!< Type of data being read */
DECL|readEcho|member|UART_Echo readEcho; /*!< Echo received data back */
DECL|readFxn|member|UART_ReadFxn readFxn;
DECL|readMode|member|UART_Mode readMode; /*!< Mode for all read calls */
DECL|readPollingFxn|member|UART_ReadPollingFxn readPollingFxn;
DECL|readReturnMode|member|UART_ReturnMode readReturnMode; /*!< Receive return mode */
DECL|readTimeout|member|uint32_t readTimeout; /*!< Timeout for read calls in blocking mode. */
DECL|stopBits|member|UART_STOP stopBits; /*!< Stop bits for UART */
DECL|ti_drivers_UART__include|macro|ti_drivers_UART__include
DECL|writeCallback|member|UART_Callback writeCallback; /*!< Pointer to write callback function for callback mode. */
DECL|writeCancelFxn|member|UART_WriteCancelFxn writeCancelFxn;
DECL|writeDataMode|member|UART_DataMode writeDataMode; /*!< Type of data being written */
DECL|writeFxn|member|UART_WriteFxn writeFxn;
DECL|writeMode|member|UART_Mode writeMode; /*!< Mode for all write calls */
DECL|writePollingFxn|member|UART_WritePollingFxn writePollingFxn;
DECL|writeTimeout|member|uint32_t writeTimeout; /*!< Timeout for write calls in blocking mode. */
