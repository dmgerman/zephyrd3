DECL|CHBUSY|member|__IM uint32_t CHBUSY; /**< DMA Channel Busy Register */
DECL|CHDONE|member|__IOM uint32_t CHDONE; /**< DMA Channel Linking Done Register (Single-Cycle RMW) */
DECL|CHEN|member|__IOM uint32_t CHEN; /**< DMA Channel Enable Register (Single-Cycle RMW) */
DECL|CH|member|LDMA_CH_TypeDef CH[8]; /**< DMA Channel Registers */
DECL|CTRL|member|__IOM uint32_t CTRL; /**< DMA Control Register */
DECL|DBGHALT|member|__IOM uint32_t DBGHALT; /**< DMA Channel Debug Halt Register */
DECL|IEN|member|__IOM uint32_t IEN; /**< Interrupt Enable register */
DECL|IFC|member|__IOM uint32_t IFC; /**< Interrupt Flag Clear Register */
DECL|IFS|member|__IOM uint32_t IFS; /**< Interrupt Flag Set Register */
DECL|IF|member|__IM uint32_t IF; /**< Interrupt Flag Register */
DECL|LDMA_CHBUSY_BUSY_DEFAULT|macro|LDMA_CHBUSY_BUSY_DEFAULT
DECL|LDMA_CHDONE_CHDONE_DEFAULT|macro|LDMA_CHDONE_CHDONE_DEFAULT
DECL|LDMA_CHEN_CHEN_DEFAULT|macro|LDMA_CHEN_CHEN_DEFAULT
DECL|LDMA_CH_CFG_ARBSLOTS_DEFAULT|macro|LDMA_CH_CFG_ARBSLOTS_DEFAULT
DECL|LDMA_CH_CFG_ARBSLOTS_EIGHT|macro|LDMA_CH_CFG_ARBSLOTS_EIGHT
DECL|LDMA_CH_CFG_ARBSLOTS_FOUR|macro|LDMA_CH_CFG_ARBSLOTS_FOUR
DECL|LDMA_CH_CFG_ARBSLOTS_ONE|macro|LDMA_CH_CFG_ARBSLOTS_ONE
DECL|LDMA_CH_CFG_ARBSLOTS_TWO|macro|LDMA_CH_CFG_ARBSLOTS_TWO
DECL|LDMA_CH_CFG_DSTINCSIGN_DEFAULT|macro|LDMA_CH_CFG_DSTINCSIGN_DEFAULT
DECL|LDMA_CH_CFG_DSTINCSIGN_NEGATIVE|macro|LDMA_CH_CFG_DSTINCSIGN_NEGATIVE
DECL|LDMA_CH_CFG_DSTINCSIGN_POSITIVE|macro|LDMA_CH_CFG_DSTINCSIGN_POSITIVE
DECL|LDMA_CH_CFG_DSTINCSIGN|macro|LDMA_CH_CFG_DSTINCSIGN
DECL|LDMA_CH_CFG_SRCINCSIGN_DEFAULT|macro|LDMA_CH_CFG_SRCINCSIGN_DEFAULT
DECL|LDMA_CH_CFG_SRCINCSIGN_NEGATIVE|macro|LDMA_CH_CFG_SRCINCSIGN_NEGATIVE
DECL|LDMA_CH_CFG_SRCINCSIGN_POSITIVE|macro|LDMA_CH_CFG_SRCINCSIGN_POSITIVE
DECL|LDMA_CH_CFG_SRCINCSIGN|macro|LDMA_CH_CFG_SRCINCSIGN
DECL|LDMA_CH_CTRL_BLOCKSIZE_ALL|macro|LDMA_CH_CTRL_BLOCKSIZE_ALL
DECL|LDMA_CH_CTRL_BLOCKSIZE_DEFAULT|macro|LDMA_CH_CTRL_BLOCKSIZE_DEFAULT
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT1024|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT1024
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT128|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT128
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT16|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT16
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT1|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT1
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT256|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT256
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT2|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT2
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT32|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT32
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT3|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT3
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT4|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT4
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT512|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT512
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT64|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT64
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT6|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT6
DECL|LDMA_CH_CTRL_BLOCKSIZE_UNIT8|macro|LDMA_CH_CTRL_BLOCKSIZE_UNIT8
DECL|LDMA_CH_CTRL_BYTESWAP_DEFAULT|macro|LDMA_CH_CTRL_BYTESWAP_DEFAULT
DECL|LDMA_CH_CTRL_BYTESWAP|macro|LDMA_CH_CTRL_BYTESWAP
DECL|LDMA_CH_CTRL_DECLOOPCNT_DEFAULT|macro|LDMA_CH_CTRL_DECLOOPCNT_DEFAULT
DECL|LDMA_CH_CTRL_DECLOOPCNT|macro|LDMA_CH_CTRL_DECLOOPCNT
DECL|LDMA_CH_CTRL_DONEIFSEN_DEFAULT|macro|LDMA_CH_CTRL_DONEIFSEN_DEFAULT
DECL|LDMA_CH_CTRL_DONEIFSEN|macro|LDMA_CH_CTRL_DONEIFSEN
DECL|LDMA_CH_CTRL_DSTINC_DEFAULT|macro|LDMA_CH_CTRL_DSTINC_DEFAULT
DECL|LDMA_CH_CTRL_DSTINC_FOUR|macro|LDMA_CH_CTRL_DSTINC_FOUR
DECL|LDMA_CH_CTRL_DSTINC_NONE|macro|LDMA_CH_CTRL_DSTINC_NONE
DECL|LDMA_CH_CTRL_DSTINC_ONE|macro|LDMA_CH_CTRL_DSTINC_ONE
DECL|LDMA_CH_CTRL_DSTINC_TWO|macro|LDMA_CH_CTRL_DSTINC_TWO
DECL|LDMA_CH_CTRL_DSTMODE_ABSOLUTE|macro|LDMA_CH_CTRL_DSTMODE_ABSOLUTE
DECL|LDMA_CH_CTRL_DSTMODE_DEFAULT|macro|LDMA_CH_CTRL_DSTMODE_DEFAULT
DECL|LDMA_CH_CTRL_DSTMODE_RELATIVE|macro|LDMA_CH_CTRL_DSTMODE_RELATIVE
DECL|LDMA_CH_CTRL_DSTMODE|macro|LDMA_CH_CTRL_DSTMODE
DECL|LDMA_CH_CTRL_IGNORESREQ_DEFAULT|macro|LDMA_CH_CTRL_IGNORESREQ_DEFAULT
DECL|LDMA_CH_CTRL_IGNORESREQ|macro|LDMA_CH_CTRL_IGNORESREQ
DECL|LDMA_CH_CTRL_REQMODE_ALL|macro|LDMA_CH_CTRL_REQMODE_ALL
DECL|LDMA_CH_CTRL_REQMODE_BLOCK|macro|LDMA_CH_CTRL_REQMODE_BLOCK
DECL|LDMA_CH_CTRL_REQMODE_DEFAULT|macro|LDMA_CH_CTRL_REQMODE_DEFAULT
DECL|LDMA_CH_CTRL_REQMODE|macro|LDMA_CH_CTRL_REQMODE
DECL|LDMA_CH_CTRL_SIZE_BYTE|macro|LDMA_CH_CTRL_SIZE_BYTE
DECL|LDMA_CH_CTRL_SIZE_DEFAULT|macro|LDMA_CH_CTRL_SIZE_DEFAULT
DECL|LDMA_CH_CTRL_SIZE_HALFWORD|macro|LDMA_CH_CTRL_SIZE_HALFWORD
DECL|LDMA_CH_CTRL_SIZE_WORD|macro|LDMA_CH_CTRL_SIZE_WORD
DECL|LDMA_CH_CTRL_SRCINC_DEFAULT|macro|LDMA_CH_CTRL_SRCINC_DEFAULT
DECL|LDMA_CH_CTRL_SRCINC_FOUR|macro|LDMA_CH_CTRL_SRCINC_FOUR
DECL|LDMA_CH_CTRL_SRCINC_NONE|macro|LDMA_CH_CTRL_SRCINC_NONE
DECL|LDMA_CH_CTRL_SRCINC_ONE|macro|LDMA_CH_CTRL_SRCINC_ONE
DECL|LDMA_CH_CTRL_SRCINC_TWO|macro|LDMA_CH_CTRL_SRCINC_TWO
DECL|LDMA_CH_CTRL_SRCMODE_ABSOLUTE|macro|LDMA_CH_CTRL_SRCMODE_ABSOLUTE
DECL|LDMA_CH_CTRL_SRCMODE_DEFAULT|macro|LDMA_CH_CTRL_SRCMODE_DEFAULT
DECL|LDMA_CH_CTRL_SRCMODE_RELATIVE|macro|LDMA_CH_CTRL_SRCMODE_RELATIVE
DECL|LDMA_CH_CTRL_SRCMODE|macro|LDMA_CH_CTRL_SRCMODE
DECL|LDMA_CH_CTRL_STRUCTREQ_DEFAULT|macro|LDMA_CH_CTRL_STRUCTREQ_DEFAULT
DECL|LDMA_CH_CTRL_STRUCTREQ|macro|LDMA_CH_CTRL_STRUCTREQ
DECL|LDMA_CH_CTRL_STRUCTTYPE_DEFAULT|macro|LDMA_CH_CTRL_STRUCTTYPE_DEFAULT
DECL|LDMA_CH_CTRL_STRUCTTYPE_SYNCHRONIZE|macro|LDMA_CH_CTRL_STRUCTTYPE_SYNCHRONIZE
DECL|LDMA_CH_CTRL_STRUCTTYPE_TRANSFER|macro|LDMA_CH_CTRL_STRUCTTYPE_TRANSFER
DECL|LDMA_CH_CTRL_STRUCTTYPE_WRITE|macro|LDMA_CH_CTRL_STRUCTTYPE_WRITE
DECL|LDMA_CH_CTRL_XFERCNT_DEFAULT|macro|LDMA_CH_CTRL_XFERCNT_DEFAULT
DECL|LDMA_CH_DST_DSTADDR_DEFAULT|macro|LDMA_CH_DST_DSTADDR_DEFAULT
DECL|LDMA_CH_LINK_LINKADDR_DEFAULT|macro|LDMA_CH_LINK_LINKADDR_DEFAULT
DECL|LDMA_CH_LINK_LINKMODE_ABSOLUTE|macro|LDMA_CH_LINK_LINKMODE_ABSOLUTE
DECL|LDMA_CH_LINK_LINKMODE_DEFAULT|macro|LDMA_CH_LINK_LINKMODE_DEFAULT
DECL|LDMA_CH_LINK_LINKMODE_RELATIVE|macro|LDMA_CH_LINK_LINKMODE_RELATIVE
DECL|LDMA_CH_LINK_LINKMODE|macro|LDMA_CH_LINK_LINKMODE
DECL|LDMA_CH_LINK_LINK_DEFAULT|macro|LDMA_CH_LINK_LINK_DEFAULT
DECL|LDMA_CH_LINK_LINK|macro|LDMA_CH_LINK_LINK
DECL|LDMA_CH_LOOP_LOOPCNT_DEFAULT|macro|LDMA_CH_LOOP_LOOPCNT_DEFAULT
DECL|LDMA_CH_REQSEL_SIGSEL_ADC0SCAN|macro|LDMA_CH_REQSEL_SIGSEL_ADC0SCAN
DECL|LDMA_CH_REQSEL_SIGSEL_ADC0SINGLE|macro|LDMA_CH_REQSEL_SIGSEL_ADC0SINGLE
DECL|LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0RD|macro|LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0RD
DECL|LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0WR|macro|LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0WR
DECL|LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0XWR|macro|LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0XWR
DECL|LDMA_CH_REQSEL_SIGSEL_CRYPTODATA1RD|macro|LDMA_CH_REQSEL_SIGSEL_CRYPTODATA1RD
DECL|LDMA_CH_REQSEL_SIGSEL_CRYPTODATA1WR|macro|LDMA_CH_REQSEL_SIGSEL_CRYPTODATA1WR
DECL|LDMA_CH_REQSEL_SIGSEL_I2C0RXDATAV|macro|LDMA_CH_REQSEL_SIGSEL_I2C0RXDATAV
DECL|LDMA_CH_REQSEL_SIGSEL_I2C0TXBL|macro|LDMA_CH_REQSEL_SIGSEL_I2C0TXBL
DECL|LDMA_CH_REQSEL_SIGSEL_LEUART0RXDATAV|macro|LDMA_CH_REQSEL_SIGSEL_LEUART0RXDATAV
DECL|LDMA_CH_REQSEL_SIGSEL_LEUART0TXBL|macro|LDMA_CH_REQSEL_SIGSEL_LEUART0TXBL
DECL|LDMA_CH_REQSEL_SIGSEL_LEUART0TXEMPTY|macro|LDMA_CH_REQSEL_SIGSEL_LEUART0TXEMPTY
DECL|LDMA_CH_REQSEL_SIGSEL_MSCWDATA|macro|LDMA_CH_REQSEL_SIGSEL_MSCWDATA
DECL|LDMA_CH_REQSEL_SIGSEL_PRSREQ0|macro|LDMA_CH_REQSEL_SIGSEL_PRSREQ0
DECL|LDMA_CH_REQSEL_SIGSEL_PRSREQ1|macro|LDMA_CH_REQSEL_SIGSEL_PRSREQ1
DECL|LDMA_CH_REQSEL_SIGSEL_TIMER0CC0|macro|LDMA_CH_REQSEL_SIGSEL_TIMER0CC0
DECL|LDMA_CH_REQSEL_SIGSEL_TIMER0CC1|macro|LDMA_CH_REQSEL_SIGSEL_TIMER0CC1
DECL|LDMA_CH_REQSEL_SIGSEL_TIMER0CC2|macro|LDMA_CH_REQSEL_SIGSEL_TIMER0CC2
DECL|LDMA_CH_REQSEL_SIGSEL_TIMER0UFOF|macro|LDMA_CH_REQSEL_SIGSEL_TIMER0UFOF
DECL|LDMA_CH_REQSEL_SIGSEL_TIMER1CC0|macro|LDMA_CH_REQSEL_SIGSEL_TIMER1CC0
DECL|LDMA_CH_REQSEL_SIGSEL_TIMER1CC1|macro|LDMA_CH_REQSEL_SIGSEL_TIMER1CC1
DECL|LDMA_CH_REQSEL_SIGSEL_TIMER1CC2|macro|LDMA_CH_REQSEL_SIGSEL_TIMER1CC2
DECL|LDMA_CH_REQSEL_SIGSEL_TIMER1CC3|macro|LDMA_CH_REQSEL_SIGSEL_TIMER1CC3
DECL|LDMA_CH_REQSEL_SIGSEL_TIMER1UFOF|macro|LDMA_CH_REQSEL_SIGSEL_TIMER1UFOF
DECL|LDMA_CH_REQSEL_SIGSEL_USART0RXDATAV|macro|LDMA_CH_REQSEL_SIGSEL_USART0RXDATAV
DECL|LDMA_CH_REQSEL_SIGSEL_USART0TXBL|macro|LDMA_CH_REQSEL_SIGSEL_USART0TXBL
DECL|LDMA_CH_REQSEL_SIGSEL_USART0TXEMPTY|macro|LDMA_CH_REQSEL_SIGSEL_USART0TXEMPTY
DECL|LDMA_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT|macro|LDMA_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT
DECL|LDMA_CH_REQSEL_SIGSEL_USART1RXDATAV|macro|LDMA_CH_REQSEL_SIGSEL_USART1RXDATAV
DECL|LDMA_CH_REQSEL_SIGSEL_USART1TXBLRIGHT|macro|LDMA_CH_REQSEL_SIGSEL_USART1TXBLRIGHT
DECL|LDMA_CH_REQSEL_SIGSEL_USART1TXBL|macro|LDMA_CH_REQSEL_SIGSEL_USART1TXBL
DECL|LDMA_CH_REQSEL_SIGSEL_USART1TXEMPTY|macro|LDMA_CH_REQSEL_SIGSEL_USART1TXEMPTY
DECL|LDMA_CH_REQSEL_SOURCESEL_ADC0|macro|LDMA_CH_REQSEL_SOURCESEL_ADC0
DECL|LDMA_CH_REQSEL_SOURCESEL_CRYPTO|macro|LDMA_CH_REQSEL_SOURCESEL_CRYPTO
DECL|LDMA_CH_REQSEL_SOURCESEL_I2C0|macro|LDMA_CH_REQSEL_SOURCESEL_I2C0
DECL|LDMA_CH_REQSEL_SOURCESEL_LEUART0|macro|LDMA_CH_REQSEL_SOURCESEL_LEUART0
DECL|LDMA_CH_REQSEL_SOURCESEL_MSC|macro|LDMA_CH_REQSEL_SOURCESEL_MSC
DECL|LDMA_CH_REQSEL_SOURCESEL_NONE|macro|LDMA_CH_REQSEL_SOURCESEL_NONE
DECL|LDMA_CH_REQSEL_SOURCESEL_PRS|macro|LDMA_CH_REQSEL_SOURCESEL_PRS
DECL|LDMA_CH_REQSEL_SOURCESEL_TIMER0|macro|LDMA_CH_REQSEL_SOURCESEL_TIMER0
DECL|LDMA_CH_REQSEL_SOURCESEL_TIMER1|macro|LDMA_CH_REQSEL_SOURCESEL_TIMER1
DECL|LDMA_CH_REQSEL_SOURCESEL_USART0|macro|LDMA_CH_REQSEL_SOURCESEL_USART0
DECL|LDMA_CH_REQSEL_SOURCESEL_USART1|macro|LDMA_CH_REQSEL_SOURCESEL_USART1
DECL|LDMA_CH_SRC_SRCADDR_DEFAULT|macro|LDMA_CH_SRC_SRCADDR_DEFAULT
DECL|LDMA_CTRL_NUMFIXED_DEFAULT|macro|LDMA_CTRL_NUMFIXED_DEFAULT
DECL|LDMA_CTRL_SYNCPRSCLREN_DEFAULT|macro|LDMA_CTRL_SYNCPRSCLREN_DEFAULT
DECL|LDMA_CTRL_SYNCPRSSETEN_DEFAULT|macro|LDMA_CTRL_SYNCPRSSETEN_DEFAULT
DECL|LDMA_DBGHALT_DBGHALT_DEFAULT|macro|LDMA_DBGHALT_DBGHALT_DEFAULT
DECL|LDMA_IEN_DONE_DEFAULT|macro|LDMA_IEN_DONE_DEFAULT
DECL|LDMA_IEN_ERROR_DEFAULT|macro|LDMA_IEN_ERROR_DEFAULT
DECL|LDMA_IEN_ERROR|macro|LDMA_IEN_ERROR
DECL|LDMA_IFC_DONE_DEFAULT|macro|LDMA_IFC_DONE_DEFAULT
DECL|LDMA_IFC_ERROR_DEFAULT|macro|LDMA_IFC_ERROR_DEFAULT
DECL|LDMA_IFC_ERROR|macro|LDMA_IFC_ERROR
DECL|LDMA_IFS_DONE_DEFAULT|macro|LDMA_IFS_DONE_DEFAULT
DECL|LDMA_IFS_ERROR_DEFAULT|macro|LDMA_IFS_ERROR_DEFAULT
DECL|LDMA_IFS_ERROR|macro|LDMA_IFS_ERROR
DECL|LDMA_IF_DONE_DEFAULT|macro|LDMA_IF_DONE_DEFAULT
DECL|LDMA_IF_ERROR_DEFAULT|macro|LDMA_IF_ERROR_DEFAULT
DECL|LDMA_IF_ERROR|macro|LDMA_IF_ERROR
DECL|LDMA_LINKLOAD_LINKLOAD_DEFAULT|macro|LDMA_LINKLOAD_LINKLOAD_DEFAULT
DECL|LDMA_REQCLEAR_REQCLEAR_DEFAULT|macro|LDMA_REQCLEAR_REQCLEAR_DEFAULT
DECL|LDMA_REQDIS_REQDIS_DEFAULT|macro|LDMA_REQDIS_REQDIS_DEFAULT
DECL|LDMA_REQPEND_REQPEND_DEFAULT|macro|LDMA_REQPEND_REQPEND_DEFAULT
DECL|LDMA_STATUS_ANYBUSY_DEFAULT|macro|LDMA_STATUS_ANYBUSY_DEFAULT
DECL|LDMA_STATUS_ANYBUSY|macro|LDMA_STATUS_ANYBUSY
DECL|LDMA_STATUS_ANYREQ_DEFAULT|macro|LDMA_STATUS_ANYREQ_DEFAULT
DECL|LDMA_STATUS_ANYREQ|macro|LDMA_STATUS_ANYREQ
DECL|LDMA_STATUS_CHERROR_DEFAULT|macro|LDMA_STATUS_CHERROR_DEFAULT
DECL|LDMA_STATUS_CHGRANT_DEFAULT|macro|LDMA_STATUS_CHGRANT_DEFAULT
DECL|LDMA_STATUS_CHNUM_DEFAULT|macro|LDMA_STATUS_CHNUM_DEFAULT
DECL|LDMA_STATUS_FIFOLEVEL_DEFAULT|macro|LDMA_STATUS_FIFOLEVEL_DEFAULT
DECL|LDMA_SWREQ_SWREQ_DEFAULT|macro|LDMA_SWREQ_SWREQ_DEFAULT
DECL|LDMA_SYNC_SYNCTRIG_DEFAULT|macro|LDMA_SYNC_SYNCTRIG_DEFAULT
DECL|LDMA_TypeDef|typedef|} LDMA_TypeDef; /** @} */
DECL|LINKLOAD|member|__IOM uint32_t LINKLOAD; /**< DMA Channel Link Load Register */
DECL|REQCLEAR|member|__IOM uint32_t REQCLEAR; /**< DMA Channel Request Clear Register */
DECL|REQDIS|member|__IOM uint32_t REQDIS; /**< DMA Channel Request Disable Register */
DECL|REQPEND|member|__IM uint32_t REQPEND; /**< DMA Channel Requests Pending Register */
DECL|RESERVED0|member|uint32_t RESERVED0[5]; /**< Reserved for future use **/
DECL|RESERVED1|member|uint32_t RESERVED1[7]; /**< Reserved for future use **/
DECL|RESERVED2|member|uint32_t RESERVED2[4]; /**< Reserved registers */
DECL|STATUS|member|__IM uint32_t STATUS; /**< DMA Status Register */
DECL|SWREQ|member|__IOM uint32_t SWREQ; /**< DMA Channel Software Transfer Request Register */
DECL|SYNC|member|__IOM uint32_t SYNC; /**< DMA Synchronization Trigger Register (Single-Cycle RMW) */
DECL|_LDMA_CHBUSY_BUSY_DEFAULT|macro|_LDMA_CHBUSY_BUSY_DEFAULT
DECL|_LDMA_CHBUSY_BUSY_MASK|macro|_LDMA_CHBUSY_BUSY_MASK
DECL|_LDMA_CHBUSY_BUSY_SHIFT|macro|_LDMA_CHBUSY_BUSY_SHIFT
DECL|_LDMA_CHBUSY_MASK|macro|_LDMA_CHBUSY_MASK
DECL|_LDMA_CHBUSY_RESETVALUE|macro|_LDMA_CHBUSY_RESETVALUE
DECL|_LDMA_CHDONE_CHDONE_DEFAULT|macro|_LDMA_CHDONE_CHDONE_DEFAULT
DECL|_LDMA_CHDONE_CHDONE_MASK|macro|_LDMA_CHDONE_CHDONE_MASK
DECL|_LDMA_CHDONE_CHDONE_SHIFT|macro|_LDMA_CHDONE_CHDONE_SHIFT
DECL|_LDMA_CHDONE_MASK|macro|_LDMA_CHDONE_MASK
DECL|_LDMA_CHDONE_RESETVALUE|macro|_LDMA_CHDONE_RESETVALUE
DECL|_LDMA_CHEN_CHEN_DEFAULT|macro|_LDMA_CHEN_CHEN_DEFAULT
DECL|_LDMA_CHEN_CHEN_MASK|macro|_LDMA_CHEN_CHEN_MASK
DECL|_LDMA_CHEN_CHEN_SHIFT|macro|_LDMA_CHEN_CHEN_SHIFT
DECL|_LDMA_CHEN_MASK|macro|_LDMA_CHEN_MASK
DECL|_LDMA_CHEN_RESETVALUE|macro|_LDMA_CHEN_RESETVALUE
DECL|_LDMA_CH_CFG_ARBSLOTS_DEFAULT|macro|_LDMA_CH_CFG_ARBSLOTS_DEFAULT
DECL|_LDMA_CH_CFG_ARBSLOTS_EIGHT|macro|_LDMA_CH_CFG_ARBSLOTS_EIGHT
DECL|_LDMA_CH_CFG_ARBSLOTS_FOUR|macro|_LDMA_CH_CFG_ARBSLOTS_FOUR
DECL|_LDMA_CH_CFG_ARBSLOTS_MASK|macro|_LDMA_CH_CFG_ARBSLOTS_MASK
DECL|_LDMA_CH_CFG_ARBSLOTS_ONE|macro|_LDMA_CH_CFG_ARBSLOTS_ONE
DECL|_LDMA_CH_CFG_ARBSLOTS_SHIFT|macro|_LDMA_CH_CFG_ARBSLOTS_SHIFT
DECL|_LDMA_CH_CFG_ARBSLOTS_TWO|macro|_LDMA_CH_CFG_ARBSLOTS_TWO
DECL|_LDMA_CH_CFG_DSTINCSIGN_DEFAULT|macro|_LDMA_CH_CFG_DSTINCSIGN_DEFAULT
DECL|_LDMA_CH_CFG_DSTINCSIGN_MASK|macro|_LDMA_CH_CFG_DSTINCSIGN_MASK
DECL|_LDMA_CH_CFG_DSTINCSIGN_NEGATIVE|macro|_LDMA_CH_CFG_DSTINCSIGN_NEGATIVE
DECL|_LDMA_CH_CFG_DSTINCSIGN_POSITIVE|macro|_LDMA_CH_CFG_DSTINCSIGN_POSITIVE
DECL|_LDMA_CH_CFG_DSTINCSIGN_SHIFT|macro|_LDMA_CH_CFG_DSTINCSIGN_SHIFT
DECL|_LDMA_CH_CFG_MASK|macro|_LDMA_CH_CFG_MASK
DECL|_LDMA_CH_CFG_RESETVALUE|macro|_LDMA_CH_CFG_RESETVALUE
DECL|_LDMA_CH_CFG_SRCINCSIGN_DEFAULT|macro|_LDMA_CH_CFG_SRCINCSIGN_DEFAULT
DECL|_LDMA_CH_CFG_SRCINCSIGN_MASK|macro|_LDMA_CH_CFG_SRCINCSIGN_MASK
DECL|_LDMA_CH_CFG_SRCINCSIGN_NEGATIVE|macro|_LDMA_CH_CFG_SRCINCSIGN_NEGATIVE
DECL|_LDMA_CH_CFG_SRCINCSIGN_POSITIVE|macro|_LDMA_CH_CFG_SRCINCSIGN_POSITIVE
DECL|_LDMA_CH_CFG_SRCINCSIGN_SHIFT|macro|_LDMA_CH_CFG_SRCINCSIGN_SHIFT
DECL|_LDMA_CH_CTRL_BLOCKSIZE_ALL|macro|_LDMA_CH_CTRL_BLOCKSIZE_ALL
DECL|_LDMA_CH_CTRL_BLOCKSIZE_DEFAULT|macro|_LDMA_CH_CTRL_BLOCKSIZE_DEFAULT
DECL|_LDMA_CH_CTRL_BLOCKSIZE_MASK|macro|_LDMA_CH_CTRL_BLOCKSIZE_MASK
DECL|_LDMA_CH_CTRL_BLOCKSIZE_SHIFT|macro|_LDMA_CH_CTRL_BLOCKSIZE_SHIFT
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT1024|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT1024
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT128|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT128
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT16|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT16
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT1|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT1
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT256|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT256
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT2|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT2
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT32|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT32
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT3|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT3
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT4|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT4
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT512|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT512
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT64|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT64
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT6|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT6
DECL|_LDMA_CH_CTRL_BLOCKSIZE_UNIT8|macro|_LDMA_CH_CTRL_BLOCKSIZE_UNIT8
DECL|_LDMA_CH_CTRL_BYTESWAP_DEFAULT|macro|_LDMA_CH_CTRL_BYTESWAP_DEFAULT
DECL|_LDMA_CH_CTRL_BYTESWAP_MASK|macro|_LDMA_CH_CTRL_BYTESWAP_MASK
DECL|_LDMA_CH_CTRL_BYTESWAP_SHIFT|macro|_LDMA_CH_CTRL_BYTESWAP_SHIFT
DECL|_LDMA_CH_CTRL_DECLOOPCNT_DEFAULT|macro|_LDMA_CH_CTRL_DECLOOPCNT_DEFAULT
DECL|_LDMA_CH_CTRL_DECLOOPCNT_MASK|macro|_LDMA_CH_CTRL_DECLOOPCNT_MASK
DECL|_LDMA_CH_CTRL_DECLOOPCNT_SHIFT|macro|_LDMA_CH_CTRL_DECLOOPCNT_SHIFT
DECL|_LDMA_CH_CTRL_DONEIFSEN_DEFAULT|macro|_LDMA_CH_CTRL_DONEIFSEN_DEFAULT
DECL|_LDMA_CH_CTRL_DONEIFSEN_MASK|macro|_LDMA_CH_CTRL_DONEIFSEN_MASK
DECL|_LDMA_CH_CTRL_DONEIFSEN_SHIFT|macro|_LDMA_CH_CTRL_DONEIFSEN_SHIFT
DECL|_LDMA_CH_CTRL_DSTINC_DEFAULT|macro|_LDMA_CH_CTRL_DSTINC_DEFAULT
DECL|_LDMA_CH_CTRL_DSTINC_FOUR|macro|_LDMA_CH_CTRL_DSTINC_FOUR
DECL|_LDMA_CH_CTRL_DSTINC_MASK|macro|_LDMA_CH_CTRL_DSTINC_MASK
DECL|_LDMA_CH_CTRL_DSTINC_NONE|macro|_LDMA_CH_CTRL_DSTINC_NONE
DECL|_LDMA_CH_CTRL_DSTINC_ONE|macro|_LDMA_CH_CTRL_DSTINC_ONE
DECL|_LDMA_CH_CTRL_DSTINC_SHIFT|macro|_LDMA_CH_CTRL_DSTINC_SHIFT
DECL|_LDMA_CH_CTRL_DSTINC_TWO|macro|_LDMA_CH_CTRL_DSTINC_TWO
DECL|_LDMA_CH_CTRL_DSTMODE_ABSOLUTE|macro|_LDMA_CH_CTRL_DSTMODE_ABSOLUTE
DECL|_LDMA_CH_CTRL_DSTMODE_DEFAULT|macro|_LDMA_CH_CTRL_DSTMODE_DEFAULT
DECL|_LDMA_CH_CTRL_DSTMODE_MASK|macro|_LDMA_CH_CTRL_DSTMODE_MASK
DECL|_LDMA_CH_CTRL_DSTMODE_RELATIVE|macro|_LDMA_CH_CTRL_DSTMODE_RELATIVE
DECL|_LDMA_CH_CTRL_DSTMODE_SHIFT|macro|_LDMA_CH_CTRL_DSTMODE_SHIFT
DECL|_LDMA_CH_CTRL_IGNORESREQ_DEFAULT|macro|_LDMA_CH_CTRL_IGNORESREQ_DEFAULT
DECL|_LDMA_CH_CTRL_IGNORESREQ_MASK|macro|_LDMA_CH_CTRL_IGNORESREQ_MASK
DECL|_LDMA_CH_CTRL_IGNORESREQ_SHIFT|macro|_LDMA_CH_CTRL_IGNORESREQ_SHIFT
DECL|_LDMA_CH_CTRL_MASK|macro|_LDMA_CH_CTRL_MASK
DECL|_LDMA_CH_CTRL_REQMODE_ALL|macro|_LDMA_CH_CTRL_REQMODE_ALL
DECL|_LDMA_CH_CTRL_REQMODE_BLOCK|macro|_LDMA_CH_CTRL_REQMODE_BLOCK
DECL|_LDMA_CH_CTRL_REQMODE_DEFAULT|macro|_LDMA_CH_CTRL_REQMODE_DEFAULT
DECL|_LDMA_CH_CTRL_REQMODE_MASK|macro|_LDMA_CH_CTRL_REQMODE_MASK
DECL|_LDMA_CH_CTRL_REQMODE_SHIFT|macro|_LDMA_CH_CTRL_REQMODE_SHIFT
DECL|_LDMA_CH_CTRL_RESETVALUE|macro|_LDMA_CH_CTRL_RESETVALUE
DECL|_LDMA_CH_CTRL_SIZE_BYTE|macro|_LDMA_CH_CTRL_SIZE_BYTE
DECL|_LDMA_CH_CTRL_SIZE_DEFAULT|macro|_LDMA_CH_CTRL_SIZE_DEFAULT
DECL|_LDMA_CH_CTRL_SIZE_HALFWORD|macro|_LDMA_CH_CTRL_SIZE_HALFWORD
DECL|_LDMA_CH_CTRL_SIZE_MASK|macro|_LDMA_CH_CTRL_SIZE_MASK
DECL|_LDMA_CH_CTRL_SIZE_SHIFT|macro|_LDMA_CH_CTRL_SIZE_SHIFT
DECL|_LDMA_CH_CTRL_SIZE_WORD|macro|_LDMA_CH_CTRL_SIZE_WORD
DECL|_LDMA_CH_CTRL_SRCINC_DEFAULT|macro|_LDMA_CH_CTRL_SRCINC_DEFAULT
DECL|_LDMA_CH_CTRL_SRCINC_FOUR|macro|_LDMA_CH_CTRL_SRCINC_FOUR
DECL|_LDMA_CH_CTRL_SRCINC_MASK|macro|_LDMA_CH_CTRL_SRCINC_MASK
DECL|_LDMA_CH_CTRL_SRCINC_NONE|macro|_LDMA_CH_CTRL_SRCINC_NONE
DECL|_LDMA_CH_CTRL_SRCINC_ONE|macro|_LDMA_CH_CTRL_SRCINC_ONE
DECL|_LDMA_CH_CTRL_SRCINC_SHIFT|macro|_LDMA_CH_CTRL_SRCINC_SHIFT
DECL|_LDMA_CH_CTRL_SRCINC_TWO|macro|_LDMA_CH_CTRL_SRCINC_TWO
DECL|_LDMA_CH_CTRL_SRCMODE_ABSOLUTE|macro|_LDMA_CH_CTRL_SRCMODE_ABSOLUTE
DECL|_LDMA_CH_CTRL_SRCMODE_DEFAULT|macro|_LDMA_CH_CTRL_SRCMODE_DEFAULT
DECL|_LDMA_CH_CTRL_SRCMODE_MASK|macro|_LDMA_CH_CTRL_SRCMODE_MASK
DECL|_LDMA_CH_CTRL_SRCMODE_RELATIVE|macro|_LDMA_CH_CTRL_SRCMODE_RELATIVE
DECL|_LDMA_CH_CTRL_SRCMODE_SHIFT|macro|_LDMA_CH_CTRL_SRCMODE_SHIFT
DECL|_LDMA_CH_CTRL_STRUCTREQ_DEFAULT|macro|_LDMA_CH_CTRL_STRUCTREQ_DEFAULT
DECL|_LDMA_CH_CTRL_STRUCTREQ_MASK|macro|_LDMA_CH_CTRL_STRUCTREQ_MASK
DECL|_LDMA_CH_CTRL_STRUCTREQ_SHIFT|macro|_LDMA_CH_CTRL_STRUCTREQ_SHIFT
DECL|_LDMA_CH_CTRL_STRUCTTYPE_DEFAULT|macro|_LDMA_CH_CTRL_STRUCTTYPE_DEFAULT
DECL|_LDMA_CH_CTRL_STRUCTTYPE_MASK|macro|_LDMA_CH_CTRL_STRUCTTYPE_MASK
DECL|_LDMA_CH_CTRL_STRUCTTYPE_SHIFT|macro|_LDMA_CH_CTRL_STRUCTTYPE_SHIFT
DECL|_LDMA_CH_CTRL_STRUCTTYPE_SYNCHRONIZE|macro|_LDMA_CH_CTRL_STRUCTTYPE_SYNCHRONIZE
DECL|_LDMA_CH_CTRL_STRUCTTYPE_TRANSFER|macro|_LDMA_CH_CTRL_STRUCTTYPE_TRANSFER
DECL|_LDMA_CH_CTRL_STRUCTTYPE_WRITE|macro|_LDMA_CH_CTRL_STRUCTTYPE_WRITE
DECL|_LDMA_CH_CTRL_XFERCNT_DEFAULT|macro|_LDMA_CH_CTRL_XFERCNT_DEFAULT
DECL|_LDMA_CH_CTRL_XFERCNT_MASK|macro|_LDMA_CH_CTRL_XFERCNT_MASK
DECL|_LDMA_CH_CTRL_XFERCNT_SHIFT|macro|_LDMA_CH_CTRL_XFERCNT_SHIFT
DECL|_LDMA_CH_DST_DSTADDR_DEFAULT|macro|_LDMA_CH_DST_DSTADDR_DEFAULT
DECL|_LDMA_CH_DST_DSTADDR_MASK|macro|_LDMA_CH_DST_DSTADDR_MASK
DECL|_LDMA_CH_DST_DSTADDR_SHIFT|macro|_LDMA_CH_DST_DSTADDR_SHIFT
DECL|_LDMA_CH_DST_MASK|macro|_LDMA_CH_DST_MASK
DECL|_LDMA_CH_DST_RESETVALUE|macro|_LDMA_CH_DST_RESETVALUE
DECL|_LDMA_CH_LINK_LINKADDR_DEFAULT|macro|_LDMA_CH_LINK_LINKADDR_DEFAULT
DECL|_LDMA_CH_LINK_LINKADDR_MASK|macro|_LDMA_CH_LINK_LINKADDR_MASK
DECL|_LDMA_CH_LINK_LINKADDR_SHIFT|macro|_LDMA_CH_LINK_LINKADDR_SHIFT
DECL|_LDMA_CH_LINK_LINKMODE_ABSOLUTE|macro|_LDMA_CH_LINK_LINKMODE_ABSOLUTE
DECL|_LDMA_CH_LINK_LINKMODE_DEFAULT|macro|_LDMA_CH_LINK_LINKMODE_DEFAULT
DECL|_LDMA_CH_LINK_LINKMODE_MASK|macro|_LDMA_CH_LINK_LINKMODE_MASK
DECL|_LDMA_CH_LINK_LINKMODE_RELATIVE|macro|_LDMA_CH_LINK_LINKMODE_RELATIVE
DECL|_LDMA_CH_LINK_LINKMODE_SHIFT|macro|_LDMA_CH_LINK_LINKMODE_SHIFT
DECL|_LDMA_CH_LINK_LINK_DEFAULT|macro|_LDMA_CH_LINK_LINK_DEFAULT
DECL|_LDMA_CH_LINK_LINK_MASK|macro|_LDMA_CH_LINK_LINK_MASK
DECL|_LDMA_CH_LINK_LINK_SHIFT|macro|_LDMA_CH_LINK_LINK_SHIFT
DECL|_LDMA_CH_LINK_MASK|macro|_LDMA_CH_LINK_MASK
DECL|_LDMA_CH_LINK_RESETVALUE|macro|_LDMA_CH_LINK_RESETVALUE
DECL|_LDMA_CH_LOOP_LOOPCNT_DEFAULT|macro|_LDMA_CH_LOOP_LOOPCNT_DEFAULT
DECL|_LDMA_CH_LOOP_LOOPCNT_MASK|macro|_LDMA_CH_LOOP_LOOPCNT_MASK
DECL|_LDMA_CH_LOOP_LOOPCNT_SHIFT|macro|_LDMA_CH_LOOP_LOOPCNT_SHIFT
DECL|_LDMA_CH_LOOP_MASK|macro|_LDMA_CH_LOOP_MASK
DECL|_LDMA_CH_LOOP_RESETVALUE|macro|_LDMA_CH_LOOP_RESETVALUE
DECL|_LDMA_CH_REQSEL_MASK|macro|_LDMA_CH_REQSEL_MASK
DECL|_LDMA_CH_REQSEL_RESETVALUE|macro|_LDMA_CH_REQSEL_RESETVALUE
DECL|_LDMA_CH_REQSEL_SIGSEL_ADC0SCAN|macro|_LDMA_CH_REQSEL_SIGSEL_ADC0SCAN
DECL|_LDMA_CH_REQSEL_SIGSEL_ADC0SINGLE|macro|_LDMA_CH_REQSEL_SIGSEL_ADC0SINGLE
DECL|_LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0RD|macro|_LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0RD
DECL|_LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0WR|macro|_LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0WR
DECL|_LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0XWR|macro|_LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0XWR
DECL|_LDMA_CH_REQSEL_SIGSEL_CRYPTODATA1RD|macro|_LDMA_CH_REQSEL_SIGSEL_CRYPTODATA1RD
DECL|_LDMA_CH_REQSEL_SIGSEL_CRYPTODATA1WR|macro|_LDMA_CH_REQSEL_SIGSEL_CRYPTODATA1WR
DECL|_LDMA_CH_REQSEL_SIGSEL_I2C0RXDATAV|macro|_LDMA_CH_REQSEL_SIGSEL_I2C0RXDATAV
DECL|_LDMA_CH_REQSEL_SIGSEL_I2C0TXBL|macro|_LDMA_CH_REQSEL_SIGSEL_I2C0TXBL
DECL|_LDMA_CH_REQSEL_SIGSEL_LEUART0RXDATAV|macro|_LDMA_CH_REQSEL_SIGSEL_LEUART0RXDATAV
DECL|_LDMA_CH_REQSEL_SIGSEL_LEUART0TXBL|macro|_LDMA_CH_REQSEL_SIGSEL_LEUART0TXBL
DECL|_LDMA_CH_REQSEL_SIGSEL_LEUART0TXEMPTY|macro|_LDMA_CH_REQSEL_SIGSEL_LEUART0TXEMPTY
DECL|_LDMA_CH_REQSEL_SIGSEL_MASK|macro|_LDMA_CH_REQSEL_SIGSEL_MASK
DECL|_LDMA_CH_REQSEL_SIGSEL_MSCWDATA|macro|_LDMA_CH_REQSEL_SIGSEL_MSCWDATA
DECL|_LDMA_CH_REQSEL_SIGSEL_PRSREQ0|macro|_LDMA_CH_REQSEL_SIGSEL_PRSREQ0
DECL|_LDMA_CH_REQSEL_SIGSEL_PRSREQ1|macro|_LDMA_CH_REQSEL_SIGSEL_PRSREQ1
DECL|_LDMA_CH_REQSEL_SIGSEL_SHIFT|macro|_LDMA_CH_REQSEL_SIGSEL_SHIFT
DECL|_LDMA_CH_REQSEL_SIGSEL_TIMER0CC0|macro|_LDMA_CH_REQSEL_SIGSEL_TIMER0CC0
DECL|_LDMA_CH_REQSEL_SIGSEL_TIMER0CC1|macro|_LDMA_CH_REQSEL_SIGSEL_TIMER0CC1
DECL|_LDMA_CH_REQSEL_SIGSEL_TIMER0CC2|macro|_LDMA_CH_REQSEL_SIGSEL_TIMER0CC2
DECL|_LDMA_CH_REQSEL_SIGSEL_TIMER0UFOF|macro|_LDMA_CH_REQSEL_SIGSEL_TIMER0UFOF
DECL|_LDMA_CH_REQSEL_SIGSEL_TIMER1CC0|macro|_LDMA_CH_REQSEL_SIGSEL_TIMER1CC0
DECL|_LDMA_CH_REQSEL_SIGSEL_TIMER1CC1|macro|_LDMA_CH_REQSEL_SIGSEL_TIMER1CC1
DECL|_LDMA_CH_REQSEL_SIGSEL_TIMER1CC2|macro|_LDMA_CH_REQSEL_SIGSEL_TIMER1CC2
DECL|_LDMA_CH_REQSEL_SIGSEL_TIMER1CC3|macro|_LDMA_CH_REQSEL_SIGSEL_TIMER1CC3
DECL|_LDMA_CH_REQSEL_SIGSEL_TIMER1UFOF|macro|_LDMA_CH_REQSEL_SIGSEL_TIMER1UFOF
DECL|_LDMA_CH_REQSEL_SIGSEL_USART0RXDATAV|macro|_LDMA_CH_REQSEL_SIGSEL_USART0RXDATAV
DECL|_LDMA_CH_REQSEL_SIGSEL_USART0TXBL|macro|_LDMA_CH_REQSEL_SIGSEL_USART0TXBL
DECL|_LDMA_CH_REQSEL_SIGSEL_USART0TXEMPTY|macro|_LDMA_CH_REQSEL_SIGSEL_USART0TXEMPTY
DECL|_LDMA_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT|macro|_LDMA_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT
DECL|_LDMA_CH_REQSEL_SIGSEL_USART1RXDATAV|macro|_LDMA_CH_REQSEL_SIGSEL_USART1RXDATAV
DECL|_LDMA_CH_REQSEL_SIGSEL_USART1TXBLRIGHT|macro|_LDMA_CH_REQSEL_SIGSEL_USART1TXBLRIGHT
DECL|_LDMA_CH_REQSEL_SIGSEL_USART1TXBL|macro|_LDMA_CH_REQSEL_SIGSEL_USART1TXBL
DECL|_LDMA_CH_REQSEL_SIGSEL_USART1TXEMPTY|macro|_LDMA_CH_REQSEL_SIGSEL_USART1TXEMPTY
DECL|_LDMA_CH_REQSEL_SOURCESEL_ADC0|macro|_LDMA_CH_REQSEL_SOURCESEL_ADC0
DECL|_LDMA_CH_REQSEL_SOURCESEL_CRYPTO|macro|_LDMA_CH_REQSEL_SOURCESEL_CRYPTO
DECL|_LDMA_CH_REQSEL_SOURCESEL_I2C0|macro|_LDMA_CH_REQSEL_SOURCESEL_I2C0
DECL|_LDMA_CH_REQSEL_SOURCESEL_LEUART0|macro|_LDMA_CH_REQSEL_SOURCESEL_LEUART0
DECL|_LDMA_CH_REQSEL_SOURCESEL_MASK|macro|_LDMA_CH_REQSEL_SOURCESEL_MASK
DECL|_LDMA_CH_REQSEL_SOURCESEL_MSC|macro|_LDMA_CH_REQSEL_SOURCESEL_MSC
DECL|_LDMA_CH_REQSEL_SOURCESEL_NONE|macro|_LDMA_CH_REQSEL_SOURCESEL_NONE
DECL|_LDMA_CH_REQSEL_SOURCESEL_PRS|macro|_LDMA_CH_REQSEL_SOURCESEL_PRS
DECL|_LDMA_CH_REQSEL_SOURCESEL_SHIFT|macro|_LDMA_CH_REQSEL_SOURCESEL_SHIFT
DECL|_LDMA_CH_REQSEL_SOURCESEL_TIMER0|macro|_LDMA_CH_REQSEL_SOURCESEL_TIMER0
DECL|_LDMA_CH_REQSEL_SOURCESEL_TIMER1|macro|_LDMA_CH_REQSEL_SOURCESEL_TIMER1
DECL|_LDMA_CH_REQSEL_SOURCESEL_USART0|macro|_LDMA_CH_REQSEL_SOURCESEL_USART0
DECL|_LDMA_CH_REQSEL_SOURCESEL_USART1|macro|_LDMA_CH_REQSEL_SOURCESEL_USART1
DECL|_LDMA_CH_SRC_MASK|macro|_LDMA_CH_SRC_MASK
DECL|_LDMA_CH_SRC_RESETVALUE|macro|_LDMA_CH_SRC_RESETVALUE
DECL|_LDMA_CH_SRC_SRCADDR_DEFAULT|macro|_LDMA_CH_SRC_SRCADDR_DEFAULT
DECL|_LDMA_CH_SRC_SRCADDR_MASK|macro|_LDMA_CH_SRC_SRCADDR_MASK
DECL|_LDMA_CH_SRC_SRCADDR_SHIFT|macro|_LDMA_CH_SRC_SRCADDR_SHIFT
DECL|_LDMA_CTRL_MASK|macro|_LDMA_CTRL_MASK
DECL|_LDMA_CTRL_NUMFIXED_DEFAULT|macro|_LDMA_CTRL_NUMFIXED_DEFAULT
DECL|_LDMA_CTRL_NUMFIXED_MASK|macro|_LDMA_CTRL_NUMFIXED_MASK
DECL|_LDMA_CTRL_NUMFIXED_SHIFT|macro|_LDMA_CTRL_NUMFIXED_SHIFT
DECL|_LDMA_CTRL_RESETVALUE|macro|_LDMA_CTRL_RESETVALUE
DECL|_LDMA_CTRL_SYNCPRSCLREN_DEFAULT|macro|_LDMA_CTRL_SYNCPRSCLREN_DEFAULT
DECL|_LDMA_CTRL_SYNCPRSCLREN_MASK|macro|_LDMA_CTRL_SYNCPRSCLREN_MASK
DECL|_LDMA_CTRL_SYNCPRSCLREN_SHIFT|macro|_LDMA_CTRL_SYNCPRSCLREN_SHIFT
DECL|_LDMA_CTRL_SYNCPRSSETEN_DEFAULT|macro|_LDMA_CTRL_SYNCPRSSETEN_DEFAULT
DECL|_LDMA_CTRL_SYNCPRSSETEN_MASK|macro|_LDMA_CTRL_SYNCPRSSETEN_MASK
DECL|_LDMA_CTRL_SYNCPRSSETEN_SHIFT|macro|_LDMA_CTRL_SYNCPRSSETEN_SHIFT
DECL|_LDMA_DBGHALT_DBGHALT_DEFAULT|macro|_LDMA_DBGHALT_DBGHALT_DEFAULT
DECL|_LDMA_DBGHALT_DBGHALT_MASK|macro|_LDMA_DBGHALT_DBGHALT_MASK
DECL|_LDMA_DBGHALT_DBGHALT_SHIFT|macro|_LDMA_DBGHALT_DBGHALT_SHIFT
DECL|_LDMA_DBGHALT_MASK|macro|_LDMA_DBGHALT_MASK
DECL|_LDMA_DBGHALT_RESETVALUE|macro|_LDMA_DBGHALT_RESETVALUE
DECL|_LDMA_IEN_DONE_DEFAULT|macro|_LDMA_IEN_DONE_DEFAULT
DECL|_LDMA_IEN_DONE_MASK|macro|_LDMA_IEN_DONE_MASK
DECL|_LDMA_IEN_DONE_SHIFT|macro|_LDMA_IEN_DONE_SHIFT
DECL|_LDMA_IEN_ERROR_DEFAULT|macro|_LDMA_IEN_ERROR_DEFAULT
DECL|_LDMA_IEN_ERROR_MASK|macro|_LDMA_IEN_ERROR_MASK
DECL|_LDMA_IEN_ERROR_SHIFT|macro|_LDMA_IEN_ERROR_SHIFT
DECL|_LDMA_IEN_MASK|macro|_LDMA_IEN_MASK
DECL|_LDMA_IEN_RESETVALUE|macro|_LDMA_IEN_RESETVALUE
DECL|_LDMA_IFC_DONE_DEFAULT|macro|_LDMA_IFC_DONE_DEFAULT
DECL|_LDMA_IFC_DONE_MASK|macro|_LDMA_IFC_DONE_MASK
DECL|_LDMA_IFC_DONE_SHIFT|macro|_LDMA_IFC_DONE_SHIFT
DECL|_LDMA_IFC_ERROR_DEFAULT|macro|_LDMA_IFC_ERROR_DEFAULT
DECL|_LDMA_IFC_ERROR_MASK|macro|_LDMA_IFC_ERROR_MASK
DECL|_LDMA_IFC_ERROR_SHIFT|macro|_LDMA_IFC_ERROR_SHIFT
DECL|_LDMA_IFC_MASK|macro|_LDMA_IFC_MASK
DECL|_LDMA_IFC_RESETVALUE|macro|_LDMA_IFC_RESETVALUE
DECL|_LDMA_IFS_DONE_DEFAULT|macro|_LDMA_IFS_DONE_DEFAULT
DECL|_LDMA_IFS_DONE_MASK|macro|_LDMA_IFS_DONE_MASK
DECL|_LDMA_IFS_DONE_SHIFT|macro|_LDMA_IFS_DONE_SHIFT
DECL|_LDMA_IFS_ERROR_DEFAULT|macro|_LDMA_IFS_ERROR_DEFAULT
DECL|_LDMA_IFS_ERROR_MASK|macro|_LDMA_IFS_ERROR_MASK
DECL|_LDMA_IFS_ERROR_SHIFT|macro|_LDMA_IFS_ERROR_SHIFT
DECL|_LDMA_IFS_MASK|macro|_LDMA_IFS_MASK
DECL|_LDMA_IFS_RESETVALUE|macro|_LDMA_IFS_RESETVALUE
DECL|_LDMA_IF_DONE_DEFAULT|macro|_LDMA_IF_DONE_DEFAULT
DECL|_LDMA_IF_DONE_MASK|macro|_LDMA_IF_DONE_MASK
DECL|_LDMA_IF_DONE_SHIFT|macro|_LDMA_IF_DONE_SHIFT
DECL|_LDMA_IF_ERROR_DEFAULT|macro|_LDMA_IF_ERROR_DEFAULT
DECL|_LDMA_IF_ERROR_MASK|macro|_LDMA_IF_ERROR_MASK
DECL|_LDMA_IF_ERROR_SHIFT|macro|_LDMA_IF_ERROR_SHIFT
DECL|_LDMA_IF_MASK|macro|_LDMA_IF_MASK
DECL|_LDMA_IF_RESETVALUE|macro|_LDMA_IF_RESETVALUE
DECL|_LDMA_LINKLOAD_LINKLOAD_DEFAULT|macro|_LDMA_LINKLOAD_LINKLOAD_DEFAULT
DECL|_LDMA_LINKLOAD_LINKLOAD_MASK|macro|_LDMA_LINKLOAD_LINKLOAD_MASK
DECL|_LDMA_LINKLOAD_LINKLOAD_SHIFT|macro|_LDMA_LINKLOAD_LINKLOAD_SHIFT
DECL|_LDMA_LINKLOAD_MASK|macro|_LDMA_LINKLOAD_MASK
DECL|_LDMA_LINKLOAD_RESETVALUE|macro|_LDMA_LINKLOAD_RESETVALUE
DECL|_LDMA_REQCLEAR_MASK|macro|_LDMA_REQCLEAR_MASK
DECL|_LDMA_REQCLEAR_REQCLEAR_DEFAULT|macro|_LDMA_REQCLEAR_REQCLEAR_DEFAULT
DECL|_LDMA_REQCLEAR_REQCLEAR_MASK|macro|_LDMA_REQCLEAR_REQCLEAR_MASK
DECL|_LDMA_REQCLEAR_REQCLEAR_SHIFT|macro|_LDMA_REQCLEAR_REQCLEAR_SHIFT
DECL|_LDMA_REQCLEAR_RESETVALUE|macro|_LDMA_REQCLEAR_RESETVALUE
DECL|_LDMA_REQDIS_MASK|macro|_LDMA_REQDIS_MASK
DECL|_LDMA_REQDIS_REQDIS_DEFAULT|macro|_LDMA_REQDIS_REQDIS_DEFAULT
DECL|_LDMA_REQDIS_REQDIS_MASK|macro|_LDMA_REQDIS_REQDIS_MASK
DECL|_LDMA_REQDIS_REQDIS_SHIFT|macro|_LDMA_REQDIS_REQDIS_SHIFT
DECL|_LDMA_REQDIS_RESETVALUE|macro|_LDMA_REQDIS_RESETVALUE
DECL|_LDMA_REQPEND_MASK|macro|_LDMA_REQPEND_MASK
DECL|_LDMA_REQPEND_REQPEND_DEFAULT|macro|_LDMA_REQPEND_REQPEND_DEFAULT
DECL|_LDMA_REQPEND_REQPEND_MASK|macro|_LDMA_REQPEND_REQPEND_MASK
DECL|_LDMA_REQPEND_REQPEND_SHIFT|macro|_LDMA_REQPEND_REQPEND_SHIFT
DECL|_LDMA_REQPEND_RESETVALUE|macro|_LDMA_REQPEND_RESETVALUE
DECL|_LDMA_STATUS_ANYBUSY_DEFAULT|macro|_LDMA_STATUS_ANYBUSY_DEFAULT
DECL|_LDMA_STATUS_ANYBUSY_MASK|macro|_LDMA_STATUS_ANYBUSY_MASK
DECL|_LDMA_STATUS_ANYBUSY_SHIFT|macro|_LDMA_STATUS_ANYBUSY_SHIFT
DECL|_LDMA_STATUS_ANYREQ_DEFAULT|macro|_LDMA_STATUS_ANYREQ_DEFAULT
DECL|_LDMA_STATUS_ANYREQ_MASK|macro|_LDMA_STATUS_ANYREQ_MASK
DECL|_LDMA_STATUS_ANYREQ_SHIFT|macro|_LDMA_STATUS_ANYREQ_SHIFT
DECL|_LDMA_STATUS_CHERROR_DEFAULT|macro|_LDMA_STATUS_CHERROR_DEFAULT
DECL|_LDMA_STATUS_CHERROR_MASK|macro|_LDMA_STATUS_CHERROR_MASK
DECL|_LDMA_STATUS_CHERROR_SHIFT|macro|_LDMA_STATUS_CHERROR_SHIFT
DECL|_LDMA_STATUS_CHGRANT_DEFAULT|macro|_LDMA_STATUS_CHGRANT_DEFAULT
DECL|_LDMA_STATUS_CHGRANT_MASK|macro|_LDMA_STATUS_CHGRANT_MASK
DECL|_LDMA_STATUS_CHGRANT_SHIFT|macro|_LDMA_STATUS_CHGRANT_SHIFT
DECL|_LDMA_STATUS_CHNUM_DEFAULT|macro|_LDMA_STATUS_CHNUM_DEFAULT
DECL|_LDMA_STATUS_CHNUM_MASK|macro|_LDMA_STATUS_CHNUM_MASK
DECL|_LDMA_STATUS_CHNUM_SHIFT|macro|_LDMA_STATUS_CHNUM_SHIFT
DECL|_LDMA_STATUS_FIFOLEVEL_DEFAULT|macro|_LDMA_STATUS_FIFOLEVEL_DEFAULT
DECL|_LDMA_STATUS_FIFOLEVEL_MASK|macro|_LDMA_STATUS_FIFOLEVEL_MASK
DECL|_LDMA_STATUS_FIFOLEVEL_SHIFT|macro|_LDMA_STATUS_FIFOLEVEL_SHIFT
DECL|_LDMA_STATUS_MASK|macro|_LDMA_STATUS_MASK
DECL|_LDMA_STATUS_RESETVALUE|macro|_LDMA_STATUS_RESETVALUE
DECL|_LDMA_SWREQ_MASK|macro|_LDMA_SWREQ_MASK
DECL|_LDMA_SWREQ_RESETVALUE|macro|_LDMA_SWREQ_RESETVALUE
DECL|_LDMA_SWREQ_SWREQ_DEFAULT|macro|_LDMA_SWREQ_SWREQ_DEFAULT
DECL|_LDMA_SWREQ_SWREQ_MASK|macro|_LDMA_SWREQ_SWREQ_MASK
DECL|_LDMA_SWREQ_SWREQ_SHIFT|macro|_LDMA_SWREQ_SWREQ_SHIFT
DECL|_LDMA_SYNC_MASK|macro|_LDMA_SYNC_MASK
DECL|_LDMA_SYNC_RESETVALUE|macro|_LDMA_SYNC_RESETVALUE
DECL|_LDMA_SYNC_SYNCTRIG_DEFAULT|macro|_LDMA_SYNC_SYNCTRIG_DEFAULT
DECL|_LDMA_SYNC_SYNCTRIG_MASK|macro|_LDMA_SYNC_SYNCTRIG_MASK
DECL|_LDMA_SYNC_SYNCTRIG_SHIFT|macro|_LDMA_SYNC_SYNCTRIG_SHIFT
