DECL|UARTCC32XXDMA_CMD_IS_BUSY|macro|UARTCC32XXDMA_CMD_IS_BUSY
DECL|UARTCC32XXDMA_CMD_IS_RX_DATA_AVAILABLE|macro|UARTCC32XXDMA_CMD_IS_RX_DATA_AVAILABLE
DECL|UARTCC32XXDMA_CMD_IS_TX_SPACE_AVAILABLE|macro|UARTCC32XXDMA_CMD_IS_TX_SPACE_AVAILABLE
DECL|UARTCC32XXDMA_FLOWCTRL_HARDWARE|macro|UARTCC32XXDMA_FLOWCTRL_HARDWARE
DECL|UARTCC32XXDMA_FLOWCTRL_NONE|macro|UARTCC32XXDMA_FLOWCTRL_NONE
DECL|UARTCC32XXDMA_HWAttrsV1|struct|typedef struct UARTCC32XXDMA_HWAttrsV1 {
DECL|UARTCC32XXDMA_HWAttrsV1|typedef|} UARTCC32XXDMA_HWAttrsV1;
DECL|UARTCC32XXDMA_Handle|typedef|} UARTCC32XXDMA_Object, *UARTCC32XXDMA_Handle;
DECL|UARTCC32XXDMA_Object|struct|typedef struct UARTCC32XXDMA_Object {
DECL|UARTCC32XXDMA_Object|typedef|} UARTCC32XXDMA_Object, *UARTCC32XXDMA_Handle;
DECL|UARTCC32XXDMA_PIN_01_UART1_TX|macro|UARTCC32XXDMA_PIN_01_UART1_TX
DECL|UARTCC32XXDMA_PIN_02_UART1_RX|macro|UARTCC32XXDMA_PIN_02_UART1_RX
DECL|UARTCC32XXDMA_PIN_03_UART0_TX|macro|UARTCC32XXDMA_PIN_03_UART0_TX
DECL|UARTCC32XXDMA_PIN_04_UART0_RX|macro|UARTCC32XXDMA_PIN_04_UART0_RX
DECL|UARTCC32XXDMA_PIN_07_UART1_TX|macro|UARTCC32XXDMA_PIN_07_UART1_TX
DECL|UARTCC32XXDMA_PIN_08_UART1_RX|macro|UARTCC32XXDMA_PIN_08_UART1_RX
DECL|UARTCC32XXDMA_PIN_16_UART1_TX|macro|UARTCC32XXDMA_PIN_16_UART1_TX
DECL|UARTCC32XXDMA_PIN_17_UART1_RX|macro|UARTCC32XXDMA_PIN_17_UART1_RX
DECL|UARTCC32XXDMA_PIN_45_UART0_RX|macro|UARTCC32XXDMA_PIN_45_UART0_RX
DECL|UARTCC32XXDMA_PIN_45_UART1_RX|macro|UARTCC32XXDMA_PIN_45_UART1_RX
DECL|UARTCC32XXDMA_PIN_50_UART0_CTS|macro|UARTCC32XXDMA_PIN_50_UART0_CTS
DECL|UARTCC32XXDMA_PIN_50_UART0_RTS|macro|UARTCC32XXDMA_PIN_50_UART0_RTS
DECL|UARTCC32XXDMA_PIN_50_UART1_RTS|macro|UARTCC32XXDMA_PIN_50_UART1_RTS
DECL|UARTCC32XXDMA_PIN_52_UART0_RTS|macro|UARTCC32XXDMA_PIN_52_UART0_RTS
DECL|UARTCC32XXDMA_PIN_53_UART0_TX|macro|UARTCC32XXDMA_PIN_53_UART0_TX
DECL|UARTCC32XXDMA_PIN_55_UART0_TX|macro|UARTCC32XXDMA_PIN_55_UART0_TX
DECL|UARTCC32XXDMA_PIN_55_UART1_TX|macro|UARTCC32XXDMA_PIN_55_UART1_TX
DECL|UARTCC32XXDMA_PIN_57_UART0_RX|macro|UARTCC32XXDMA_PIN_57_UART0_RX
DECL|UARTCC32XXDMA_PIN_57_UART1_RX|macro|UARTCC32XXDMA_PIN_57_UART1_RX
DECL|UARTCC32XXDMA_PIN_58_UART1_TX|macro|UARTCC32XXDMA_PIN_58_UART1_TX
DECL|UARTCC32XXDMA_PIN_59_UART1_RX|macro|UARTCC32XXDMA_PIN_59_UART1_RX
DECL|UARTCC32XXDMA_PIN_61_UART0_CTS|macro|UARTCC32XXDMA_PIN_61_UART0_CTS
DECL|UARTCC32XXDMA_PIN_61_UART0_RTS|macro|UARTCC32XXDMA_PIN_61_UART0_RTS
DECL|UARTCC32XXDMA_PIN_61_UART1_CTS|macro|UARTCC32XXDMA_PIN_61_UART1_CTS
DECL|UARTCC32XXDMA_PIN_62_UART0_RTS|macro|UARTCC32XXDMA_PIN_62_UART0_RTS
DECL|UARTCC32XXDMA_PIN_62_UART0_TX|macro|UARTCC32XXDMA_PIN_62_UART0_TX
DECL|UARTCC32XXDMA_PIN_62_UART1_RTS|macro|UARTCC32XXDMA_PIN_62_UART1_RTS
DECL|UARTCC32XXDMA_PIN_UNASSIGNED|macro|UARTCC32XXDMA_PIN_UNASSIGNED
DECL|baseAddr|member|unsigned int baseAddr;
DECL|baudRate|member|uint32_t baudRate; /* Baud rate for UART */
DECL|ctsPin|member|uint16_t ctsPin;
DECL|dataLength|member|UART_LEN dataLength; /* Data length for UART */
DECL|dmaHandle|member|UDMACC32XX_Handle dmaHandle;
DECL|flowControl|member|uint32_t flowControl;
DECL|hwiHandle|member|HwiP_Handle hwiHandle;
DECL|intNum|member|unsigned int intNum;
DECL|intPriority|member|unsigned int intPriority;
DECL|opened|member|bool opened; /* Has the obj been opened */
DECL|parityType|member|UART_PAR parityType; /* Parity bit type for UART */
DECL|postNotify|member|Power_NotifyObj postNotify; /* LPDS wake-up notify object */
DECL|powerMgrId|member|unsigned int powerMgrId; /* Determined from base address */
DECL|prevParkRTS|member|PowerCC32XX_ParkState prevParkRTS; /* Previous park state of RTS pin */
DECL|prevParkTX|member|PowerCC32XX_ParkState prevParkTX; /* Previous park state TX pin */
DECL|readBuf|member|void *readBuf; /* Buffer data pointer */
DECL|readCallback|member|UART_Callback readCallback; /* Pointer to read callback */
DECL|readCount|member|size_t readCount; /* Number of Chars read */
DECL|readDataMode|member|UART_DataMode readDataMode; /* Type of data being read */
DECL|readEcho|member|UART_Echo readEcho; /* Echo received data back */
DECL|readMode|member|UART_Mode readMode; /* Mode for all read calls */
DECL|readReturnMode|member|UART_ReturnMode readReturnMode; /* Receive return mode */
DECL|readSem|member|SemaphoreP_Handle readSem; /* UART read semaphore */
DECL|readSize|member|size_t readSize; /* Chars remaining in buffer */
DECL|readTimeout|member|unsigned int readTimeout; /* Timeout for read semaphore */
DECL|rtsPin|member|uint16_t rtsPin;
DECL|rtsPin|member|uint16_t rtsPin; /* RTS pin ID */
DECL|rxChannelIndex|member|unsigned long rxChannelIndex;
DECL|rxPin|member|uint16_t rxPin;
DECL|stopBits|member|UART_STOP stopBits; /* Stop bits for UART */
DECL|ti_drivers_uart_UARTCC32XXDMA__include|macro|ti_drivers_uart_UARTCC32XXDMA__include
DECL|txChannelIndex|member|unsigned long txChannelIndex;
DECL|txFifoEmptyClk|member|ClockP_Handle txFifoEmptyClk; /* UART TX FIFO empty clock */
DECL|txPin|member|uint16_t txPin;
DECL|txPin|member|uint16_t txPin; /* TX pin ID */
DECL|writeBuf|member|const void *writeBuf; /* Buffer data pointer */
DECL|writeCallback|member|UART_Callback writeCallback; /* Pointer to write callback */
DECL|writeCount|member|size_t writeCount; /* Number of Chars sent */
DECL|writeDataMode|member|UART_DataMode writeDataMode; /* Type of data being written */
DECL|writeMode|member|UART_Mode writeMode; /* Mode for all write calls */
DECL|writeSem|member|SemaphoreP_Handle writeSem; /* UART write semaphore */
DECL|writeSize|member|size_t writeSize; /* Chars remaining in buffer */
DECL|writeTimeout|member|unsigned int writeTimeout; /* Timeout for write semaphore */
