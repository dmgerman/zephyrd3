DECL|EM_LEUART_H|macro|EM_LEUART_H
DECL|LEUART_Databits_TypeDef|typedef|} LEUART_Databits_TypeDef;
DECL|LEUART_Enable_TypeDef|typedef|} LEUART_Enable_TypeDef;
DECL|LEUART_INIT_DEFAULT|macro|LEUART_INIT_DEFAULT
DECL|LEUART_Init_TypeDef|typedef|} LEUART_Init_TypeDef;
DECL|LEUART_IntClear|function|__STATIC_INLINE void LEUART_IntClear(LEUART_TypeDef *leuart, uint32_t flags)
DECL|LEUART_IntDisable|function|__STATIC_INLINE void LEUART_IntDisable(LEUART_TypeDef *leuart, uint32_t flags)
DECL|LEUART_IntEnable|function|__STATIC_INLINE void LEUART_IntEnable(LEUART_TypeDef *leuart, uint32_t flags)
DECL|LEUART_IntGetEnabled|function|__STATIC_INLINE uint32_t LEUART_IntGetEnabled(LEUART_TypeDef *leuart)
DECL|LEUART_IntGet|function|__STATIC_INLINE uint32_t LEUART_IntGet(LEUART_TypeDef *leuart)
DECL|LEUART_IntSet|function|__STATIC_INLINE void LEUART_IntSet(LEUART_TypeDef *leuart, uint32_t flags)
DECL|LEUART_Parity_TypeDef|typedef|} LEUART_Parity_TypeDef;
DECL|LEUART_RxDataGet|function|__STATIC_INLINE uint8_t LEUART_RxDataGet(LEUART_TypeDef *leuart)
DECL|LEUART_RxDataXGet|function|__STATIC_INLINE uint16_t LEUART_RxDataXGet(LEUART_TypeDef *leuart)
DECL|LEUART_StatusGet|function|__STATIC_INLINE uint32_t LEUART_StatusGet(LEUART_TypeDef *leuart)
DECL|LEUART_Stopbits_TypeDef|typedef|} LEUART_Stopbits_TypeDef;
DECL|baudrate|member|uint32_t baudrate;
DECL|databits|member|LEUART_Databits_TypeDef databits;
DECL|enable|member|LEUART_Enable_TypeDef enable;
DECL|leuartDatabits8|enumerator|leuartDatabits8 = LEUART_CTRL_DATABITS_EIGHT, /**< 8 databits. */
DECL|leuartDatabits9|enumerator|leuartDatabits9 = LEUART_CTRL_DATABITS_NINE /**< 9 databits. */
DECL|leuartDisable|enumerator|leuartDisable = 0x0,
DECL|leuartEnableRx|enumerator|leuartEnableRx = LEUART_CMD_RXEN,
DECL|leuartEnableTx|enumerator|leuartEnableTx = LEUART_CMD_TXEN,
DECL|leuartEnable|enumerator|leuartEnable = (LEUART_CMD_RXEN | LEUART_CMD_TXEN)
DECL|leuartEvenParity|enumerator|leuartEvenParity = LEUART_CTRL_PARITY_EVEN, /**< Even parity. */
DECL|leuartNoParity|enumerator|leuartNoParity = LEUART_CTRL_PARITY_NONE, /**< No parity. */
DECL|leuartOddParity|enumerator|leuartOddParity = LEUART_CTRL_PARITY_ODD /**< Odd parity. */
DECL|leuartStopbits1|enumerator|leuartStopbits1 = LEUART_CTRL_STOPBITS_ONE, /**< 1 stopbits. */
DECL|leuartStopbits2|enumerator|leuartStopbits2 = LEUART_CTRL_STOPBITS_TWO /**< 2 stopbits. */
DECL|parity|member|LEUART_Parity_TypeDef parity;
DECL|refFreq|member|uint32_t refFreq;
DECL|stopbits|member|LEUART_Stopbits_TypeDef stopbits;
