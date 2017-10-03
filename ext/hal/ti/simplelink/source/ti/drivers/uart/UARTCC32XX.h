DECL|UARTCC32XX_CMD_IS_BUSY|macro|UARTCC32XX_CMD_IS_BUSY
DECL|UARTCC32XX_CMD_IS_RX_DATA_AVAILABLE|macro|UARTCC32XX_CMD_IS_RX_DATA_AVAILABLE
DECL|UARTCC32XX_CMD_IS_TX_SPACE_AVAILABLE|macro|UARTCC32XX_CMD_IS_TX_SPACE_AVAILABLE
DECL|UARTCC32XX_FLOWCTRL_HARDWARE|macro|UARTCC32XX_FLOWCTRL_HARDWARE
DECL|UARTCC32XX_FLOWCTRL_NONE|macro|UARTCC32XX_FLOWCTRL_NONE
DECL|UARTCC32XX_FxnSet|struct|typedef struct UARTCC32XX_FxnSet {
DECL|UARTCC32XX_FxnSet|typedef|} UARTCC32XX_FxnSet;
DECL|UARTCC32XX_HWAttrsV1|struct|typedef struct UARTCC32XX_HWAttrsV1 {
DECL|UARTCC32XX_HWAttrsV1|typedef|} UARTCC32XX_HWAttrsV1;
DECL|UARTCC32XX_Handle|typedef|} UARTCC32XX_Object, *UARTCC32XX_Handle;
DECL|UARTCC32XX_Object|struct|typedef struct UARTCC32XX_Object {
DECL|UARTCC32XX_Object|typedef|} UARTCC32XX_Object, *UARTCC32XX_Handle;
DECL|UARTCC32XX_PIN_01_UART1_TX|macro|UARTCC32XX_PIN_01_UART1_TX
DECL|UARTCC32XX_PIN_02_UART1_RX|macro|UARTCC32XX_PIN_02_UART1_RX
DECL|UARTCC32XX_PIN_03_UART0_TX|macro|UARTCC32XX_PIN_03_UART0_TX
DECL|UARTCC32XX_PIN_04_UART0_RX|macro|UARTCC32XX_PIN_04_UART0_RX
DECL|UARTCC32XX_PIN_07_UART1_TX|macro|UARTCC32XX_PIN_07_UART1_TX
DECL|UARTCC32XX_PIN_08_UART1_RX|macro|UARTCC32XX_PIN_08_UART1_RX
DECL|UARTCC32XX_PIN_16_UART1_TX|macro|UARTCC32XX_PIN_16_UART1_TX
DECL|UARTCC32XX_PIN_17_UART1_RX|macro|UARTCC32XX_PIN_17_UART1_RX
DECL|UARTCC32XX_PIN_45_UART0_RX|macro|UARTCC32XX_PIN_45_UART0_RX
DECL|UARTCC32XX_PIN_45_UART1_RX|macro|UARTCC32XX_PIN_45_UART1_RX
DECL|UARTCC32XX_PIN_50_UART0_CTS|macro|UARTCC32XX_PIN_50_UART0_CTS
DECL|UARTCC32XX_PIN_50_UART0_RTS|macro|UARTCC32XX_PIN_50_UART0_RTS
DECL|UARTCC32XX_PIN_50_UART1_RTS|macro|UARTCC32XX_PIN_50_UART1_RTS
DECL|UARTCC32XX_PIN_52_UART0_RTS|macro|UARTCC32XX_PIN_52_UART0_RTS
DECL|UARTCC32XX_PIN_53_UART0_TX|macro|UARTCC32XX_PIN_53_UART0_TX
DECL|UARTCC32XX_PIN_55_UART0_TX|macro|UARTCC32XX_PIN_55_UART0_TX
DECL|UARTCC32XX_PIN_55_UART1_TX|macro|UARTCC32XX_PIN_55_UART1_TX
DECL|UARTCC32XX_PIN_57_UART0_RX|macro|UARTCC32XX_PIN_57_UART0_RX
DECL|UARTCC32XX_PIN_57_UART1_RX|macro|UARTCC32XX_PIN_57_UART1_RX
DECL|UARTCC32XX_PIN_58_UART1_TX|macro|UARTCC32XX_PIN_58_UART1_TX
DECL|UARTCC32XX_PIN_59_UART1_RX|macro|UARTCC32XX_PIN_59_UART1_RX
DECL|UARTCC32XX_PIN_61_UART0_CTS|macro|UARTCC32XX_PIN_61_UART0_CTS
DECL|UARTCC32XX_PIN_61_UART0_RTS|macro|UARTCC32XX_PIN_61_UART0_RTS
DECL|UARTCC32XX_PIN_61_UART1_CTS|macro|UARTCC32XX_PIN_61_UART1_CTS
DECL|UARTCC32XX_PIN_62_UART0_RTS|macro|UARTCC32XX_PIN_62_UART0_RTS
DECL|UARTCC32XX_PIN_62_UART0_TX|macro|UARTCC32XX_PIN_62_UART0_TX
DECL|UARTCC32XX_PIN_62_UART1_RTS|macro|UARTCC32XX_PIN_62_UART1_RTS
DECL|UARTCC32XX_PIN_UNASSIGNED|macro|UARTCC32XX_PIN_UNASSIGNED
DECL|baseAddr|member|unsigned int baseAddr;
DECL|baudRate|member|uint32_t baudRate; /* Baud rate for UART */
DECL|bufTimeout|member|bool bufTimeout:1;
DECL|callCallback|member|bool callCallback:1;
DECL|ctsPin|member|uint16_t ctsPin;
DECL|dataLength|member|UART_LEN dataLength; /* Data length for UART */
DECL|drainByISR|member|bool drainByISR:1;
DECL|flowControl|member|uint32_t flowControl;
DECL|hwiHandle|member|HwiP_Handle hwiHandle; /* Hwi handle for interrupts */
DECL|intNum|member|unsigned int intNum;
DECL|intPriority|member|unsigned int intPriority;
DECL|opened|member|bool opened:1; /* Has the obj been opened */
DECL|parityType|member|UART_PAR parityType; /* Parity bit type for UART */
DECL|postNotify|member|Power_NotifyObj postNotify; /* LPDS wake-up notify object */
DECL|powerMgrId|member|unsigned int powerMgrId; /* Determined from base address */
DECL|prevParkRTS|member|PowerCC32XX_ParkState prevParkRTS; /* Previous park state of RTS pin */
DECL|prevParkTX|member|PowerCC32XX_ParkState prevParkTX; /* Previous park state TX pin */
DECL|readBuf|member|unsigned char *readBuf; /* Buffer data pointer */
DECL|readCallback|member|UART_Callback readCallback; /* Pointer to read callback */
DECL|readCount|member|size_t readCount; /* Number of bytes left to read */
DECL|readDataMode|member|UART_DataMode readDataMode:1; /* Type of data being read */
DECL|readEcho|member|UART_Echo readEcho:1; /* Echo received data back */
DECL|readFxns|member|UARTCC32XX_FxnSet readFxns;
DECL|readIsrFxn|member|bool (*readIsrFxn) (UART_Handle handle);
DECL|readMode|member|UART_Mode readMode:1; /* Mode for all read calls */
DECL|readReturnMode|member|UART_ReturnMode readReturnMode:1; /* Receive return mode */
DECL|readSem|member|SemaphoreP_Handle readSem; /* UART read semaphore */
DECL|readSize|member|size_t readSize; /* Desired number of bytes to read */
DECL|readTaskFxn|member|int (*readTaskFxn) (UART_Handle handle);
DECL|readTimeout|member|unsigned int readTimeout; /* Timeout for read semaphore */
DECL|ringBufPtr|member|unsigned char *ringBufPtr;
DECL|ringBufSize|member|size_t ringBufSize;
DECL|ringBuffer|member|RingBuf_Object ringBuffer; /* local circular buffer object */
DECL|rtsPin|member|uint16_t rtsPin;
DECL|rtsPin|member|uint16_t rtsPin; /* RTS pin ID */
DECL|rxEnabled|member|bool rxEnabled:1;
DECL|rxPin|member|uint16_t rxPin;
DECL|state|member|} state;
DECL|stopBits|member|UART_STOP stopBits; /* Stop bits for UART */
DECL|ti_drivers_uart_UARTCC32XX__include|macro|ti_drivers_uart_UARTCC32XX__include
DECL|timeoutClk|member|ClockP_Handle timeoutClk; /* Clock object to for timeouts */
DECL|txEnabled|member|bool txEnabled:1;
DECL|txFifoEmptyClk|member|ClockP_Handle txFifoEmptyClk; /* UART TX FIFO empty clock */
DECL|txPin|member|uint16_t txPin;
DECL|txPin|member|uint16_t txPin; /* TX pin ID */
DECL|writeBuf|member|const unsigned char *writeBuf; /* Buffer data pointer */
DECL|writeCallback|member|UART_Callback writeCallback; /* Pointer to write callback */
DECL|writeCount|member|size_t writeCount; /* Number of bytes left to write */
DECL|writeDataMode|member|UART_DataMode writeDataMode:1; /* Type of data being written */
DECL|writeEmptyClkTimeout|member|unsigned int writeEmptyClkTimeout; /* TX FIFO timeout tick count */
DECL|writeMode|member|UART_Mode writeMode:1; /* Mode for all write calls */
DECL|writeSem|member|SemaphoreP_Handle writeSem; /* UART write semaphore*/
DECL|writeSize|member|size_t writeSize; /* Desired number of bytes to write*/
DECL|writeTimeout|member|unsigned int writeTimeout; /* Timeout for write semaphore */
