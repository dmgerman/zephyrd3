DECL|EM_USART_H|macro|EM_USART_H
DECL|USART_ClockMode_TypeDef|typedef|} USART_ClockMode_TypeDef;
DECL|USART_Databits_TypeDef|typedef|} USART_Databits_TypeDef;
DECL|USART_Enable_TypeDef|typedef|} USART_Enable_TypeDef;
DECL|USART_I2sFormat_TypeDef|typedef|} USART_I2sFormat_TypeDef;
DECL|USART_I2sJustify_TypeDef|typedef|} USART_I2sJustify_TypeDef;
DECL|USART_INITASYNC_DEFAULT|macro|USART_INITASYNC_DEFAULT
DECL|USART_INITASYNC_DEFAULT|macro|USART_INITASYNC_DEFAULT
DECL|USART_INITASYNC_DEFAULT|macro|USART_INITASYNC_DEFAULT
DECL|USART_INITI2S_DEFAULT|macro|USART_INITI2S_DEFAULT
DECL|USART_INITI2S_DEFAULT|macro|USART_INITI2S_DEFAULT
DECL|USART_INITIRDA_DEFAULT|macro|USART_INITIRDA_DEFAULT
DECL|USART_INITIRDA_DEFAULT|macro|USART_INITIRDA_DEFAULT
DECL|USART_INITIRDA_DEFAULT|macro|USART_INITIRDA_DEFAULT
DECL|USART_INITPRSTRIGGER_DEFAULT|macro|USART_INITPRSTRIGGER_DEFAULT
DECL|USART_INITPRSTRIGGER_DEFAULT|macro|USART_INITPRSTRIGGER_DEFAULT
DECL|USART_INITSYNC_DEFAULT|macro|USART_INITSYNC_DEFAULT
DECL|USART_INITSYNC_DEFAULT|macro|USART_INITSYNC_DEFAULT
DECL|USART_INITSYNC_DEFAULT|macro|USART_INITSYNC_DEFAULT
DECL|USART_InitAsync_TypeDef|typedef|} USART_InitAsync_TypeDef;
DECL|USART_InitI2s_TypeDef|typedef|} USART_InitI2s_TypeDef;
DECL|USART_InitIrDA_TypeDef|typedef|} USART_InitIrDA_TypeDef;
DECL|USART_InitIrDA|function|__STATIC_INLINE void USART_InitIrDA(const USART_InitIrDA_TypeDef *init)
DECL|USART_InitSync_TypeDef|typedef|} USART_InitSync_TypeDef;
DECL|USART_IntClear|function|__STATIC_INLINE void USART_IntClear(USART_TypeDef *usart, uint32_t flags)
DECL|USART_IntDisable|function|__STATIC_INLINE void USART_IntDisable(USART_TypeDef *usart, uint32_t flags)
DECL|USART_IntEnable|function|__STATIC_INLINE void USART_IntEnable(USART_TypeDef *usart, uint32_t flags)
DECL|USART_IntGetEnabled|function|__STATIC_INLINE uint32_t USART_IntGetEnabled(USART_TypeDef *usart)
DECL|USART_IntGet|function|__STATIC_INLINE uint32_t USART_IntGet(USART_TypeDef *usart)
DECL|USART_IntSet|function|__STATIC_INLINE void USART_IntSet(USART_TypeDef *usart, uint32_t flags)
DECL|USART_IrDAPrsSel_Typedef|typedef|} USART_IrDAPrsSel_Typedef;
DECL|USART_IrDAPw_Typedef|typedef|} USART_IrDAPw_Typedef;
DECL|USART_OVS_TypeDef|typedef|} USART_OVS_TypeDef;
DECL|USART_Parity_TypeDef|typedef|} USART_Parity_TypeDef;
DECL|USART_PrsRxCh_TypeDef|typedef|} USART_PrsRxCh_TypeDef;
DECL|USART_PrsTriggerCh_TypeDef|typedef|} USART_PrsTriggerCh_TypeDef;
DECL|USART_PrsTriggerInit_TypeDef|typedef|} USART_PrsTriggerInit_TypeDef;
DECL|USART_RxDataGet|function|__STATIC_INLINE uint8_t USART_RxDataGet(USART_TypeDef *usart)
DECL|USART_RxDataXGet|function|__STATIC_INLINE uint16_t USART_RxDataXGet(USART_TypeDef *usart)
DECL|USART_RxDoubleGet|function|__STATIC_INLINE uint16_t USART_RxDoubleGet(USART_TypeDef *usart)
DECL|USART_RxDoubleXGet|function|__STATIC_INLINE uint32_t USART_RxDoubleXGet(USART_TypeDef *usart)
DECL|USART_StatusGet|function|__STATIC_INLINE uint32_t USART_StatusGet(USART_TypeDef *usart)
DECL|USART_Stopbits_TypeDef|typedef|} USART_Stopbits_TypeDef;
DECL|async|member|USART_InitAsync_TypeDef async;
DECL|autoCsEnable|member|bool autoCsEnable;
DECL|autoCsEnable|member|bool autoCsEnable;
DECL|autoCsHold|member|uint8_t autoCsHold;
DECL|autoCsHold|member|uint8_t autoCsHold;
DECL|autoCsSetup|member|uint8_t autoCsSetup;
DECL|autoCsSetup|member|uint8_t autoCsSetup;
DECL|autoTxTriggerEnable|member|bool autoTxTriggerEnable;
DECL|autoTx|member|bool autoTx;
DECL|baudrate|member|uint32_t baudrate;
DECL|baudrate|member|uint32_t baudrate;
DECL|clockMode|member|USART_ClockMode_TypeDef clockMode;
DECL|databits|member|USART_Databits_TypeDef databits;
DECL|databits|member|USART_Databits_TypeDef databits;
DECL|delay|member|bool delay;
DECL|dmaSplit|member|bool dmaSplit;
DECL|enable|member|USART_Enable_TypeDef enable;
DECL|enable|member|USART_Enable_TypeDef enable;
DECL|format|member|USART_I2sFormat_TypeDef format;
DECL|irFilt|member|bool irFilt;
DECL|irPrsEn|member|bool irPrsEn;
DECL|irPrsSel|member|USART_IrDAPrsSel_Typedef irPrsSel;
DECL|irPw|member|USART_IrDAPw_Typedef irPw;
DECL|irRxInv|member|bool irRxInv;
DECL|justify|member|USART_I2sJustify_TypeDef justify;
DECL|master|member|bool master;
DECL|mono|member|bool mono;
DECL|msbf|member|bool msbf;
DECL|mvdis|member|bool mvdis;
DECL|oversampling|member|USART_OVS_TypeDef oversampling;
DECL|parity|member|USART_Parity_TypeDef parity;
DECL|prsRxCh|member|USART_PrsRxCh_TypeDef prsRxCh;
DECL|prsRxCh|member|USART_PrsRxCh_TypeDef prsRxCh;
DECL|prsRxEnable|member|bool prsRxEnable;
DECL|prsRxEnable|member|bool prsRxEnable;
DECL|prsTriggerChannel|member|USART_PrsTriggerCh_TypeDef prsTriggerChannel;
DECL|refFreq|member|uint32_t refFreq;
DECL|refFreq|member|uint32_t refFreq;
DECL|rxTriggerEnable|member|bool rxTriggerEnable;
DECL|stopbits|member|USART_Stopbits_TypeDef stopbits;
DECL|sync|member|USART_InitSync_TypeDef sync;
DECL|txTriggerEnable|member|bool txTriggerEnable;
DECL|usartClockMode0|enumerator|usartClockMode0 = USART_CTRL_CLKPOL_IDLELOW | USART_CTRL_CLKPHA_SAMPLELEADING,
DECL|usartClockMode1|enumerator|usartClockMode1 = USART_CTRL_CLKPOL_IDLELOW | USART_CTRL_CLKPHA_SAMPLETRAILING,
DECL|usartClockMode2|enumerator|usartClockMode2 = USART_CTRL_CLKPOL_IDLEHIGH | USART_CTRL_CLKPHA_SAMPLELEADING,
DECL|usartClockMode3|enumerator|usartClockMode3 = USART_CTRL_CLKPOL_IDLEHIGH | USART_CTRL_CLKPHA_SAMPLETRAILING
DECL|usartDatabits10|enumerator|usartDatabits10 = USART_FRAME_DATABITS_TEN, /**< 10 databits (not available for UART). */
DECL|usartDatabits11|enumerator|usartDatabits11 = USART_FRAME_DATABITS_ELEVEN, /**< 11 databits (not available for UART). */
DECL|usartDatabits12|enumerator|usartDatabits12 = USART_FRAME_DATABITS_TWELVE, /**< 12 databits (not available for UART). */
DECL|usartDatabits13|enumerator|usartDatabits13 = USART_FRAME_DATABITS_THIRTEEN, /**< 13 databits (not available for UART). */
DECL|usartDatabits14|enumerator|usartDatabits14 = USART_FRAME_DATABITS_FOURTEEN, /**< 14 databits (not available for UART). */
DECL|usartDatabits15|enumerator|usartDatabits15 = USART_FRAME_DATABITS_FIFTEEN, /**< 15 databits (not available for UART). */
DECL|usartDatabits16|enumerator|usartDatabits16 = USART_FRAME_DATABITS_SIXTEEN /**< 16 databits (not available for UART). */
DECL|usartDatabits4|enumerator|usartDatabits4 = USART_FRAME_DATABITS_FOUR, /**< 4 databits (not available for UART). */
DECL|usartDatabits5|enumerator|usartDatabits5 = USART_FRAME_DATABITS_FIVE, /**< 5 databits (not available for UART). */
DECL|usartDatabits6|enumerator|usartDatabits6 = USART_FRAME_DATABITS_SIX, /**< 6 databits (not available for UART). */
DECL|usartDatabits7|enumerator|usartDatabits7 = USART_FRAME_DATABITS_SEVEN, /**< 7 databits (not available for UART). */
DECL|usartDatabits8|enumerator|usartDatabits8 = USART_FRAME_DATABITS_EIGHT, /**< 8 databits. */
DECL|usartDatabits9|enumerator|usartDatabits9 = USART_FRAME_DATABITS_NINE, /**< 9 databits. */
DECL|usartDisable|enumerator|usartDisable = 0x0,
DECL|usartEnableRx|enumerator|usartEnableRx = USART_CMD_RXEN,
DECL|usartEnableTx|enumerator|usartEnableTx = USART_CMD_TXEN,
DECL|usartEnable|enumerator|usartEnable = (USART_CMD_RXEN | USART_CMD_TXEN)
DECL|usartEvenParity|enumerator|usartEvenParity = USART_FRAME_PARITY_EVEN, /**< Even parity. */
DECL|usartI2sFormatW16D16|enumerator|usartI2sFormatW16D16 = USART_I2SCTRL_FORMAT_W16D16, /**< 16-bit word, 16-bit data */
DECL|usartI2sFormatW16D8|enumerator|usartI2sFormatW16D8 = USART_I2SCTRL_FORMAT_W16D8, /**< 16-bit word, 8-bit data */
DECL|usartI2sFormatW32D16|enumerator|usartI2sFormatW32D16 = USART_I2SCTRL_FORMAT_W32D16, /**< 32-bit word, 16-bit data */
DECL|usartI2sFormatW32D24M|enumerator|usartI2sFormatW32D24M = USART_I2SCTRL_FORMAT_W32D24M, /**< 32-bit word, 32-bit data with 8 lsb masked */
DECL|usartI2sFormatW32D24|enumerator|usartI2sFormatW32D24 = USART_I2SCTRL_FORMAT_W32D24, /**< 32-bit word, 24-bit data */
DECL|usartI2sFormatW32D32|enumerator|usartI2sFormatW32D32 = USART_I2SCTRL_FORMAT_W32D32, /**< 32-bit word, 32-bit data */
DECL|usartI2sFormatW32D8|enumerator|usartI2sFormatW32D8 = USART_I2SCTRL_FORMAT_W32D8, /**< 32-bit word, 8-bit data */
DECL|usartI2sFormatW8D8|enumerator|usartI2sFormatW8D8 = USART_I2SCTRL_FORMAT_W8D8 /**< 8-bit word, 8-bit data */
DECL|usartI2sJustifyLeft|enumerator|usartI2sJustifyLeft = USART_I2SCTRL_JUSTIFY_LEFT, /**< Data is left-justified within the frame */
DECL|usartI2sJustifyRight|enumerator|usartI2sJustifyRight = USART_I2SCTRL_JUSTIFY_RIGHT /**< Data is right-justified within the frame */
DECL|usartIrDAPrsCh0|enumerator|usartIrDAPrsCh0 = USART_IRCTRL_IRPRSSEL_PRSCH0, /**< PRS channel 0 */
DECL|usartIrDAPrsCh1|enumerator|usartIrDAPrsCh1 = USART_IRCTRL_IRPRSSEL_PRSCH1, /**< PRS channel 1 */
DECL|usartIrDAPrsCh2|enumerator|usartIrDAPrsCh2 = USART_IRCTRL_IRPRSSEL_PRSCH2, /**< PRS channel 2 */
DECL|usartIrDAPrsCh3|enumerator|usartIrDAPrsCh3 = USART_IRCTRL_IRPRSSEL_PRSCH3, /**< PRS channel 3 */
DECL|usartIrDAPrsCh4|enumerator|usartIrDAPrsCh4 = USART_IRCTRL_IRPRSSEL_PRSCH4, /**< PRS channel 4 */
DECL|usartIrDAPrsCh5|enumerator|usartIrDAPrsCh5 = USART_IRCTRL_IRPRSSEL_PRSCH5, /**< PRS channel 5 */
DECL|usartIrDAPrsCh6|enumerator|usartIrDAPrsCh6 = USART_IRCTRL_IRPRSSEL_PRSCH6, /**< PRS channel 6 */
DECL|usartIrDAPrsCh7|enumerator|usartIrDAPrsCh7 = USART_IRCTRL_IRPRSSEL_PRSCH7, /**< PRS channel 7 */
DECL|usartIrDAPwFOUR|enumerator|usartIrDAPwFOUR = USART_IRCTRL_IRPW_FOUR
DECL|usartIrDAPwONE|enumerator|usartIrDAPwONE = USART_IRCTRL_IRPW_ONE,
DECL|usartIrDAPwTHREE|enumerator|usartIrDAPwTHREE = USART_IRCTRL_IRPW_THREE,
DECL|usartIrDAPwTWO|enumerator|usartIrDAPwTWO = USART_IRCTRL_IRPW_TWO,
DECL|usartNoParity|enumerator|usartNoParity = USART_FRAME_PARITY_NONE, /**< No parity. */
DECL|usartOVS16|enumerator|usartOVS16 = USART_CTRL_OVS_X16, /**< 16x oversampling (normal). */
DECL|usartOVS4|enumerator|usartOVS4 = USART_CTRL_OVS_X4 /**< 4x oversampling. */
DECL|usartOVS6|enumerator|usartOVS6 = USART_CTRL_OVS_X6, /**< 6x oversampling. */
DECL|usartOVS8|enumerator|usartOVS8 = USART_CTRL_OVS_X8, /**< 8x oversampling. */
DECL|usartOddParity|enumerator|usartOddParity = USART_FRAME_PARITY_ODD /**< Odd parity. */
DECL|usartPrsRxCh0|enumerator|usartPrsRxCh0 = USART_INPUT_RXPRSSEL_PRSCH0, /**< PRSCH0 selected as USART_INPUT */
DECL|usartPrsRxCh10|enumerator|usartPrsRxCh10 = USART_INPUT_RXPRSSEL_PRSCH10, /**< PRSCH10 selected as USART_INPUT */
DECL|usartPrsRxCh11|enumerator|usartPrsRxCh11 = USART_INPUT_RXPRSSEL_PRSCH11 /**< PRSCH11 selected as USART_INPUT */
DECL|usartPrsRxCh1|enumerator|usartPrsRxCh1 = USART_INPUT_RXPRSSEL_PRSCH1, /**< PRSCH1 selected as USART_INPUT */
DECL|usartPrsRxCh2|enumerator|usartPrsRxCh2 = USART_INPUT_RXPRSSEL_PRSCH2, /**< PRSCH2 selected as USART_INPUT */
DECL|usartPrsRxCh3|enumerator|usartPrsRxCh3 = USART_INPUT_RXPRSSEL_PRSCH3, /**< PRSCH3 selected as USART_INPUT */
DECL|usartPrsRxCh4|enumerator|usartPrsRxCh4 = USART_INPUT_RXPRSSEL_PRSCH4, /**< PRSCH4 selected as USART_INPUT */
DECL|usartPrsRxCh5|enumerator|usartPrsRxCh5 = USART_INPUT_RXPRSSEL_PRSCH5, /**< PRSCH5 selected as USART_INPUT */
DECL|usartPrsRxCh6|enumerator|usartPrsRxCh6 = USART_INPUT_RXPRSSEL_PRSCH6, /**< PRSCH6 selected as USART_INPUT */
DECL|usartPrsRxCh7|enumerator|usartPrsRxCh7 = USART_INPUT_RXPRSSEL_PRSCH7, /**< PRSCH7 selected as USART_INPUT */
DECL|usartPrsRxCh8|enumerator|usartPrsRxCh8 = USART_INPUT_RXPRSSEL_PRSCH8, /**< PRSCH8 selected as USART_INPUT */
DECL|usartPrsRxCh9|enumerator|usartPrsRxCh9 = USART_INPUT_RXPRSSEL_PRSCH9, /**< PRSCH9 selected as USART_INPUT */
DECL|usartPrsTriggerCh0|enumerator|usartPrsTriggerCh0 = USART_TRIGCTRL_TSEL_PRSCH0, /**< PRSCH0 selected as USART Trigger */
DECL|usartPrsTriggerCh1|enumerator|usartPrsTriggerCh1 = USART_TRIGCTRL_TSEL_PRSCH1, /**< PRSCH0 selected as USART Trigger */
DECL|usartPrsTriggerCh2|enumerator|usartPrsTriggerCh2 = USART_TRIGCTRL_TSEL_PRSCH2, /**< PRSCH0 selected as USART Trigger */
DECL|usartPrsTriggerCh3|enumerator|usartPrsTriggerCh3 = USART_TRIGCTRL_TSEL_PRSCH3, /**< PRSCH0 selected as USART Trigger */
DECL|usartPrsTriggerCh4|enumerator|usartPrsTriggerCh4 = USART_TRIGCTRL_TSEL_PRSCH4, /**< PRSCH0 selected as USART Trigger */
DECL|usartPrsTriggerCh5|enumerator|usartPrsTriggerCh5 = USART_TRIGCTRL_TSEL_PRSCH5, /**< PRSCH0 selected as USART Trigger */
DECL|usartPrsTriggerCh6|enumerator|usartPrsTriggerCh6 = USART_TRIGCTRL_TSEL_PRSCH6, /**< PRSCH0 selected as USART Trigger */
DECL|usartPrsTriggerCh7|enumerator|usartPrsTriggerCh7 = USART_TRIGCTRL_TSEL_PRSCH7, /**< PRSCH0 selected as USART Trigger */
DECL|usartStopbits0p5|enumerator|usartStopbits0p5 = USART_FRAME_STOPBITS_HALF, /**< 0.5 stopbits. */
DECL|usartStopbits1p5|enumerator|usartStopbits1p5 = USART_FRAME_STOPBITS_ONEANDAHALF, /**< 1.5 stopbits. */
DECL|usartStopbits1|enumerator|usartStopbits1 = USART_FRAME_STOPBITS_ONE, /**< 1 stopbits. */
DECL|usartStopbits2|enumerator|usartStopbits2 = USART_FRAME_STOPBITS_TWO /**< 2 stopbits. */
