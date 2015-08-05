DECL|BDH_t|typedef|} BDH_t; /* 0x000 BaudRate High */
DECL|C1_t|typedef|} C1_t; /* 0x002 Control 1 */
DECL|C2_t|typedef|} C2_t; /* 0x003 Control 2 */
DECL|C3_t|typedef|} C3_t; /* 0x006 Control 3 */
DECL|C4_t|typedef|} C4_t; /* 0x00A Control 4 */
DECL|CFIFO_t|typedef|} CFIFO_t; /* 0x011 Fifo Control */
DECL|FIFO_SIZE_128|macro|FIFO_SIZE_128
DECL|FIFO_SIZE_16|macro|FIFO_SIZE_16
DECL|FIFO_SIZE_1|macro|FIFO_SIZE_1
DECL|FIFO_SIZE_32|macro|FIFO_SIZE_32
DECL|FIFO_SIZE_4|macro|FIFO_SIZE_4
DECL|FIFO_SIZE_64|macro|FIFO_SIZE_64
DECL|FIFO_SIZE_8|macro|FIFO_SIZE_8
DECL|FIFO_SIZE_RES|macro|FIFO_SIZE_RES
DECL|K20_UART_t|typedef|} K20_UART_t; /* K20 Microntroller UART module */
DECL|PFIFO_t|typedef|} PFIFO_t; /* 0x010 Fifo Parameter 1 */
DECL|RX_DATA_FULL_MASK|macro|RX_DATA_FULL_MASK
DECL|RX_EN_MASK|macro|RX_EN_MASK
DECL|RX_FIFO_EN_MASK|macro|RX_FIFO_EN_MASK
DECL|RX_FIFO_FLUSH_MASK|macro|RX_FIFO_FLUSH_MASK
DECL|S1_t|typedef|} S1_t; /* 0x004 Status 1 */
DECL|S2_t|typedef|} S2_t; /* 0x005 Status 2 */
DECL|TX_DATA_EMPTY_MASK|macro|TX_DATA_EMPTY_MASK
DECL|TX_EN_MASK|macro|TX_EN_MASK
DECL|TX_FIFO_EN_MASK|macro|TX_FIFO_EN_MASK
DECL|TX_FIFO_FLUSH_MASK|macro|TX_FIFO_FLUSH_MASK
DECL|_K20UART_H_|macro|_K20UART_H_
DECL|_k20UartBaudRateSet|function|static ALWAYS_INLINE void _k20UartBaudRateSet(K20_UART_t *uart_p, uint32_t clkFreq, uint32_t baudRate)
DECL|_k20UartFifoEnable|function|static inline void _k20UartFifoEnable(K20_UART_t *uart_p)
DECL|bdh|member|BDH_t bdh; /* 0x000 Baud Rate High */
DECL|bdl|member|uint8_t bdl; /* 0x001 Baud Rate Low (04)*/
DECL|brfa|member|uint8_t brfa : 5 __packed; /* BaudRateFineAdjust*/
DECL|brkCharLen13|member|uint8_t brkCharLen13 : 1 __packed;
DECL|c1|member|C1_t c1; /* 0x002 Control 1 */
DECL|c2|member|C2_t c2; /* 0x003 Control 2 */
DECL|c3|member|C3_t c3; /* 0x006 Control 3 */
DECL|c4|member|C4_t c4; /* 0x00A Control 4 */
DECL|c5|member|uint8_t c5; /* 0x00B Control 5 */
DECL|cfifo|member|CFIFO_t cfifo; /* 0x011 FIFO Control */
DECL|d|member|uint8_t d; /* 0x007 Data */
DECL|ed|member|uint8_t ed; /* 0x00C Extended Data */
DECL|e|struct|struct e {
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|frameErrIntEn|member|uint8_t frameErrIntEn : 1 __packed;
DECL|framingErr|member|uint8_t framingErr : 1 __packed;
DECL|idleLineIntEn|member|uint8_t idleLineIntEn : 1 __packed;
DECL|idleLineType|member|uint8_t idleLineType : 1 __packed;
DECL|idleLine|member|uint8_t idleLine : 1 __packed;
DECL|ir|member|uint8_t ir; /* 0x00E Infrared */
DECL|lbkdIntEn|member|uint8_t lbkdIntEn : 1 __packed; /* LIN Break Detect */
DECL|lbkdif|member|uint8_t lbkdif : 1 __packed;
DECL|linBkDetectEn|member|uint8_t linBkDetectEn : 1 __packed;
DECL|loopbackEn|member|uint8_t loopbackEn : 1 __packed;
DECL|ma1|member|uint8_t ma1; /* 0x008 Match Address 1 */
DECL|ma2|member|uint8_t ma2; /* 0x009 Match Address 1 */
DECL|matchAddrMode2En|member|uint8_t matchAddrMode2En : 1 __packed;
DECL|matechAddrMode1En|member|uint8_t matechAddrMode1En : 1 __packed;
DECL|mode10Bit|member|uint8_t mode10Bit : 1 __packed;
DECL|mode9Bit|member|uint8_t mode9Bit : 1 __packed;
DECL|modem|member|uint8_t modem; /* 0x00D Modem */
DECL|msbFirst|member|uint8_t msbFirst : 1 __packed;
DECL|noice|member|uint8_t noice : 1 __packed;
DECL|noiseErrIntEn|member|uint8_t noiseErrIntEn : 1 __packed;
DECL|oddParity|member|uint8_t oddParity : 1 __packed;
DECL|overrunErrIntEn|member|uint8_t overrunErrIntEn : 1 __packed;
DECL|parityEnable|member|uint8_t parityEnable : 1 __packed;
DECL|parityErrIntEn|member|uint8_t parityErrIntEn : 1 __packed;
DECL|parityErr|member|uint8_t parityErr : 1 __packed;
DECL|pfifo|member|PFIFO_t pfifo; /* 0x010 FIFO Param */
DECL|rcfifo|member|uint8_t rcfifo; /* 0x016 FIFO Rx Count */
DECL|remoteLoopback|member|uint8_t remoteLoopback : 1 __packed;
DECL|res_3|member|uint8_t res_3 : 3 __packed;
DECL|res_5|member|uint8_t res_5 : 1 __packed;
DECL|rwfifo|member|uint8_t rwfifo; /* 0x015 FIFO Rx Watermark (01)*/
DECL|rxActive|member|uint8_t rxActive : 1 __packed;
DECL|rxBit8|member|uint8_t rxBit8 : 1 __packed;
DECL|rxDataFull|member|uint8_t rxDataFull : 1 __packed;
DECL|rxDataInverted|member|uint8_t rxDataInverted : 1 __packed;
DECL|rxEdgeIntEn|member|uint8_t rxEdgeIntEn : 1 __packed; /* RxD Active Edge */
DECL|rxEnable|member|uint8_t rxEnable : 1 __packed;
DECL|rxFifoEn|member|uint8_t rxFifoEn : 1 __packed;
DECL|rxFifoFlush|member|uint8_t rxFifoFlush : 1 __packed; /* write-only */
DECL|rxFifoOverflowIntEn|member|uint8_t rxFifoOverflowIntEn : 1 __packed;
DECL|rxFifoSize|member|uint8_t rxFifoSize : 3 __packed; /* read-only */
DECL|rxFifoUnderflowIntEn|member|uint8_t rxFifoUnderflowIntEn : 1 __packed;
DECL|rxFullInt_dmaTx_en|member|uint8_t rxFullInt_dmaTx_en : 1 __packed;
DECL|rxOverrun|member|uint8_t rxOverrun : 1 __packed;
DECL|rxWakepMethod|member|uint8_t rxWakepMethod : 1 __packed;
DECL|rxWakeupCtrl|member|uint8_t rxWakeupCtrl : 1 __packed;
DECL|rxWakeupIdleDetect|member|uint8_t rxWakeupIdleDetect : 1 __packed;
DECL|rxedgif|member|uint8_t rxedgif : 1 __packed;
DECL|s1|member|S1_t s1; /* 0x004 Status 1 (C0) RO*/
DECL|s2|member|S2_t s2; /* 0x005 Status 2 */
DECL|sbr|member|uint8_t sbr : 5 __packed; /* Hi Baud Rate Bits */
DECL|sendBreak|member|uint8_t sendBreak : 1 __packed;
DECL|seq_port_num|member|uint8_t seq_port_num; /**< Sequential port number */
DECL|sfifo|member|uint8_t sfifo; /* 0x012 FIFO Status (C0)*/
DECL|tcfifo|member|uint8_t tcfifo; /* 0x014 FIFO Tx Count */
DECL|twfifo|member|uint8_t twfifo; /* 0x013 FIFO Tx Watermark */
DECL|txBit8|member|uint8_t txBit8 : 1 __packed;
DECL|txCompleteIntEn|member|uint8_t txCompleteIntEn : 1 __packed;
DECL|txComplete|member|uint8_t txComplete : 1 __packed;
DECL|txDataEmpty|member|uint8_t txDataEmpty : 1 __packed;
DECL|txDataInvert|member|uint8_t txDataInvert : 1 __packed;
DECL|txDataPinOuttDir|member|uint8_t txDataPinOuttDir : 1 __packed;
DECL|txEnable|member|uint8_t txEnable : 1 __packed;
DECL|txFifoEn|member|uint8_t txFifoEn : 1 __packed;
DECL|txFifoFlush|member|uint8_t txFifoFlush : 1 __packed; /* write-only */
DECL|txFifoOverflowIntEn|member|uint8_t txFifoOverflowIntEn : 1 __packed;
DECL|txFifoSize|member|uint8_t txFifoSize : 3 __packed; /* read-only */
DECL|txInt_DmaTx_en|member|uint8_t txInt_DmaTx_en : 1 __packed;
DECL|u_7816|member|uint8_t u_7816[0x20 - 0x17]; /* 0x017-0x1F UART ISO-7816 standard */
DECL|u_cea709_1|member|uint8_t u_cea709_1[0x32 - 0x20]; /* 0x020-0x31 UART CEA8709.1 standard
DECL|uartStopWait|member|uint8_t uartStopWait : 1 __packed;
DECL|uart_k20_dev_data_t|struct|struct uart_k20_dev_data_t {
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|zReservStatused038_03c|member|uint8_t zReservStatused038_03c[0x1000 - 0x32]; /* 0x032-0xFFF Reserved
DECL|zReserved00f|member|uint8_t zReserved00f; /* 0x00F */
