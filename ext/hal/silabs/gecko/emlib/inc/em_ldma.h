DECL|EM_LDMA_H|macro|EM_LDMA_H
DECL|LDMA_CfgArbSlots_t|typedef|} LDMA_CfgArbSlots_t;
DECL|LDMA_CfgDstIncSign_t|typedef|} LDMA_CfgDstIncSign_t;
DECL|LDMA_CfgSrcIncSign_t|typedef|} LDMA_CfgSrcIncSign_t;
DECL|LDMA_CtrlBlockSize_t|typedef|} LDMA_CtrlBlockSize_t;
DECL|LDMA_CtrlDstAddrMode_t|typedef|} LDMA_CtrlDstAddrMode_t;
DECL|LDMA_CtrlDstInc_t|typedef|} LDMA_CtrlDstInc_t;
DECL|LDMA_CtrlReqMode_t|typedef|} LDMA_CtrlReqMode_t;
DECL|LDMA_CtrlSize_t|typedef|} LDMA_CtrlSize_t;
DECL|LDMA_CtrlSrcAddrMode_t|typedef|} LDMA_CtrlSrcAddrMode_t;
DECL|LDMA_CtrlSrcInc_t|typedef|} LDMA_CtrlSrcInc_t;
DECL|LDMA_CtrlStructType_t|typedef|} LDMA_CtrlStructType_t;
DECL|LDMA_DESCRIPTOR_LINKABS_M2M_BYTE|macro|LDMA_DESCRIPTOR_LINKABS_M2M_BYTE
DECL|LDMA_DESCRIPTOR_LINKABS_M2M_HALF|macro|LDMA_DESCRIPTOR_LINKABS_M2M_HALF
DECL|LDMA_DESCRIPTOR_LINKABS_M2M_WORD|macro|LDMA_DESCRIPTOR_LINKABS_M2M_WORD
DECL|LDMA_DESCRIPTOR_LINKABS_SYNC|macro|LDMA_DESCRIPTOR_LINKABS_SYNC
DECL|LDMA_DESCRIPTOR_LINKABS_WRITE|macro|LDMA_DESCRIPTOR_LINKABS_WRITE
DECL|LDMA_DESCRIPTOR_LINKREL_M2M_BYTE|macro|LDMA_DESCRIPTOR_LINKREL_M2M_BYTE
DECL|LDMA_DESCRIPTOR_LINKREL_M2M_HALF|macro|LDMA_DESCRIPTOR_LINKREL_M2M_HALF
DECL|LDMA_DESCRIPTOR_LINKREL_M2M_WORD|macro|LDMA_DESCRIPTOR_LINKREL_M2M_WORD
DECL|LDMA_DESCRIPTOR_LINKREL_M2P_BYTE|macro|LDMA_DESCRIPTOR_LINKREL_M2P_BYTE
DECL|LDMA_DESCRIPTOR_LINKREL_P2M_BYTE|macro|LDMA_DESCRIPTOR_LINKREL_P2M_BYTE
DECL|LDMA_DESCRIPTOR_LINKREL_SYNC|macro|LDMA_DESCRIPTOR_LINKREL_SYNC
DECL|LDMA_DESCRIPTOR_LINKREL_WRITE|macro|LDMA_DESCRIPTOR_LINKREL_WRITE
DECL|LDMA_DESCRIPTOR_SINGLE_M2M_BYTE|macro|LDMA_DESCRIPTOR_SINGLE_M2M_BYTE
DECL|LDMA_DESCRIPTOR_SINGLE_M2M_HALF|macro|LDMA_DESCRIPTOR_SINGLE_M2M_HALF
DECL|LDMA_DESCRIPTOR_SINGLE_M2M_WORD|macro|LDMA_DESCRIPTOR_SINGLE_M2M_WORD
DECL|LDMA_DESCRIPTOR_SINGLE_M2P_BYTE|macro|LDMA_DESCRIPTOR_SINGLE_M2P_BYTE
DECL|LDMA_DESCRIPTOR_SINGLE_P2M_BYTE|macro|LDMA_DESCRIPTOR_SINGLE_P2M_BYTE
DECL|LDMA_DESCRIPTOR_SINGLE_P2P_BYTE|macro|LDMA_DESCRIPTOR_SINGLE_P2P_BYTE
DECL|LDMA_DESCRIPTOR_SINGLE_SYNC|macro|LDMA_DESCRIPTOR_SINGLE_SYNC
DECL|LDMA_DESCRIPTOR_SINGLE_WRITE|macro|LDMA_DESCRIPTOR_SINGLE_WRITE
DECL|LDMA_Descriptor_t|typedef|} LDMA_Descriptor_t;
DECL|LDMA_INIT_DEFAULT|macro|LDMA_INIT_DEFAULT
DECL|LDMA_Init_t|typedef|} LDMA_Init_t;
DECL|LDMA_IntClear|function|__STATIC_INLINE void LDMA_IntClear(uint32_t flags)
DECL|LDMA_IntDisable|function|__STATIC_INLINE void LDMA_IntDisable(uint32_t flags)
DECL|LDMA_IntEnable|function|__STATIC_INLINE void LDMA_IntEnable(uint32_t flags)
DECL|LDMA_IntGetEnabled|function|__STATIC_INLINE uint32_t LDMA_IntGetEnabled(void)
DECL|LDMA_IntGet|function|__STATIC_INLINE uint32_t LDMA_IntGet(void)
DECL|LDMA_IntSet|function|__STATIC_INLINE void LDMA_IntSet(uint32_t flags)
DECL|LDMA_LinkMode_t|typedef|} LDMA_LinkMode_t;
DECL|LDMA_PeripheralSignal_t|typedef|} LDMA_PeripheralSignal_t;
DECL|LDMA_TRANSFER_CFG_MEMORY_LOOP|macro|LDMA_TRANSFER_CFG_MEMORY_LOOP
DECL|LDMA_TRANSFER_CFG_MEMORY|macro|LDMA_TRANSFER_CFG_MEMORY
DECL|LDMA_TRANSFER_CFG_PERIPHERAL_LOOP|macro|LDMA_TRANSFER_CFG_PERIPHERAL_LOOP
DECL|LDMA_TRANSFER_CFG_PERIPHERAL|macro|LDMA_TRANSFER_CFG_PERIPHERAL
DECL|LDMA_TransferCfg_t|typedef|} LDMA_TransferCfg_t;
DECL|blockSize|member|uint32_t blockSize : 4; /**< Number of unit transfers per arb. cycle. */
DECL|blockSize|member|uint32_t blockSize : 4; /**< Number of unit transfers per arb. cycle. */
DECL|blockSize|member|uint32_t blockSize : 4; /**< Number of unit transfers per arb. cycle. */
DECL|byteSwap|member|uint32_t byteSwap : 1; /**< Enable byte swapping transfers. */
DECL|byteSwap|member|uint32_t byteSwap : 1; /**< Enable byte swapping transfers. */
DECL|byteSwap|member|uint32_t byteSwap : 1; /**< Enable byte swapping transfers. */
DECL|decLoopCnt|member|uint32_t decLoopCnt : 1; /**< Enable looped transfers. */
DECL|decLoopCnt|member|uint32_t decLoopCnt : 1; /**< Enable looped transfers. */
DECL|decLoopCnt|member|uint32_t decLoopCnt : 1; /**< Enable looped transfers. */
DECL|doneIfs|member|uint32_t doneIfs : 1; /**< Generate interrupt when done. */
DECL|doneIfs|member|uint32_t doneIfs : 1; /**< Generate interrupt when done. */
DECL|doneIfs|member|uint32_t doneIfs : 1; /**< Generate interrupt when done. */
DECL|dstAddrMode|member|uint32_t dstAddrMode: 1; /**< Destination addressing mode. */
DECL|dstAddrMode|member|uint32_t dstAddrMode: 1; /**< Destination addressing mode. */
DECL|dstAddrMode|member|uint32_t dstAddrMode: 1; /**< Destination addressing mode. */
DECL|dstAddr|member|uint32_t dstAddr; /**< DMA destination address. */
DECL|dstAddr|member|uint32_t dstAddr; /**< DMA write destination address. */
DECL|dstInc|member|uint32_t dstInc : 2; /**< Destination address increment unit size. */
DECL|dstInc|member|uint32_t dstInc : 2; /**< Destination address increment unit size. */
DECL|dstInc|member|uint32_t dstInc : 2; /**< Destination address increment unit size. */
DECL|ignoreSrec|member|uint32_t ignoreSrec : 1; /**< Ignore single requests. */
DECL|ignoreSrec|member|uint32_t ignoreSrec : 1; /**< Ignore single requests. */
DECL|ignoreSrec|member|uint32_t ignoreSrec : 1; /**< Ignore single requests. */
DECL|immVal|member|uint32_t immVal; /**< Data to be written at dstAddr. */
DECL|ldmaCfgArbSlotsAs1|enumerator|ldmaCfgArbSlotsAs1 = _LDMA_CH_CFG_ARBSLOTS_ONE, /**< One arbitration slot selected. */
DECL|ldmaCfgArbSlotsAs2|enumerator|ldmaCfgArbSlotsAs2 = _LDMA_CH_CFG_ARBSLOTS_TWO, /**< Two arbitration slots selected. */
DECL|ldmaCfgArbSlotsAs4|enumerator|ldmaCfgArbSlotsAs4 = _LDMA_CH_CFG_ARBSLOTS_FOUR, /**< Four arbitration slots selected. */
DECL|ldmaCfgArbSlotsAs8|enumerator|ldmaCfgArbSlotsAs8 = _LDMA_CH_CFG_ARBSLOTS_EIGHT /**< Eight arbitration slots selected. */
DECL|ldmaCfgArbSlots|member|uint8_t ldmaCfgArbSlots; /**< Arbitration slot number. */
DECL|ldmaCfgDstIncSignNeg|enumerator|ldmaCfgDstIncSignNeg = _LDMA_CH_CFG_DSTINCSIGN_NEGATIVE /**< Decrement destination address. */
DECL|ldmaCfgDstIncSignPos|enumerator|ldmaCfgDstIncSignPos = _LDMA_CH_CFG_DSTINCSIGN_POSITIVE, /**< Increment destination address. */
DECL|ldmaCfgDstIncSign|member|uint8_t ldmaCfgDstIncSign; /**< Dest. addr. increment sign. */
DECL|ldmaCfgSrcIncSignNeg|enumerator|ldmaCfgSrcIncSignNeg = _LDMA_CH_CFG_SRCINCSIGN_NEGATIVE /**< Decrement source address. */
DECL|ldmaCfgSrcIncSignPos|enumerator|ldmaCfgSrcIncSignPos = _LDMA_CH_CFG_SRCINCSIGN_POSITIVE, /**< Increment source address. */
DECL|ldmaCfgSrcIncSign|member|uint8_t ldmaCfgSrcIncSign; /**< Source addr. increment sign. */
DECL|ldmaCtrlBlockSizeAll|enumerator|ldmaCtrlBlockSizeAll = _LDMA_CH_CTRL_BLOCKSIZE_ALL /**< Lock arbitration during transfer. */
DECL|ldmaCtrlBlockSizeUnit1024|enumerator|ldmaCtrlBlockSizeUnit1024 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT1024, /**< 1024 transfers per arbitration. */
DECL|ldmaCtrlBlockSizeUnit128|enumerator|ldmaCtrlBlockSizeUnit128 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT128, /**< 128 transfers per arbitration. */
DECL|ldmaCtrlBlockSizeUnit16|enumerator|ldmaCtrlBlockSizeUnit16 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT16, /**< 16 transfers per arbitration. */
DECL|ldmaCtrlBlockSizeUnit1|enumerator|ldmaCtrlBlockSizeUnit1 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT1, /**< One transfer per arbitration. */
DECL|ldmaCtrlBlockSizeUnit256|enumerator|ldmaCtrlBlockSizeUnit256 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT256, /**< 256 transfers per arbitration. */
DECL|ldmaCtrlBlockSizeUnit2|enumerator|ldmaCtrlBlockSizeUnit2 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT2, /**< Two transfers per arbitration. */
DECL|ldmaCtrlBlockSizeUnit32|enumerator|ldmaCtrlBlockSizeUnit32 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT32, /**< 32 transfers per arbitration. */
DECL|ldmaCtrlBlockSizeUnit3|enumerator|ldmaCtrlBlockSizeUnit3 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT3, /**< Three transfers per arbitration. */
DECL|ldmaCtrlBlockSizeUnit4|enumerator|ldmaCtrlBlockSizeUnit4 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT4, /**< Four transfers per arbitration. */
DECL|ldmaCtrlBlockSizeUnit512|enumerator|ldmaCtrlBlockSizeUnit512 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT512, /**< 512 transfers per arbitration. */
DECL|ldmaCtrlBlockSizeUnit64|enumerator|ldmaCtrlBlockSizeUnit64 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT64, /**< 64 transfers per arbitration. */
DECL|ldmaCtrlBlockSizeUnit6|enumerator|ldmaCtrlBlockSizeUnit6 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT6, /**< Six transfers per arbitration. */
DECL|ldmaCtrlBlockSizeUnit8|enumerator|ldmaCtrlBlockSizeUnit8 = _LDMA_CH_CTRL_BLOCKSIZE_UNIT8, /**< Eight transfers per arbitration. */
DECL|ldmaCtrlDstAddrModeAbs|enumerator|ldmaCtrlDstAddrModeAbs = _LDMA_CH_CTRL_DSTMODE_ABSOLUTE, /**< Address fetched from a linked structure is absolute. */
DECL|ldmaCtrlDstAddrModeRel|enumerator|ldmaCtrlDstAddrModeRel = _LDMA_CH_CTRL_DSTMODE_RELATIVE /**< Address fetched from a linked structure is relative. */
DECL|ldmaCtrlDstIncFour|enumerator|ldmaCtrlDstIncFour = _LDMA_CH_CTRL_DSTINC_FOUR, /**< Increment destination address by four unit data sizes. */
DECL|ldmaCtrlDstIncNone|enumerator|ldmaCtrlDstIncNone = _LDMA_CH_CTRL_DSTINC_NONE /**< Do not increment the destination address. */
DECL|ldmaCtrlDstIncOne|enumerator|ldmaCtrlDstIncOne = _LDMA_CH_CTRL_DSTINC_ONE, /**< Increment destination address by one unit data size. */
DECL|ldmaCtrlDstIncTwo|enumerator|ldmaCtrlDstIncTwo = _LDMA_CH_CTRL_DSTINC_TWO, /**< Increment destination address by two unit data sizes. */
DECL|ldmaCtrlReqModeAll|enumerator|ldmaCtrlReqModeAll = _LDMA_CH_CTRL_REQMODE_ALL /**< A DMA request trigger transfer of a complete cycle. */
DECL|ldmaCtrlReqModeBlock|enumerator|ldmaCtrlReqModeBlock = _LDMA_CH_CTRL_REQMODE_BLOCK, /**< Each DMA request trigger transfer of one block. */
DECL|ldmaCtrlSizeByte|enumerator|ldmaCtrlSizeByte = _LDMA_CH_CTRL_SIZE_BYTE, /**< Each unit transfer is a byte. */
DECL|ldmaCtrlSizeHalf|enumerator|ldmaCtrlSizeHalf = _LDMA_CH_CTRL_SIZE_HALFWORD, /**< Each unit transfer is a half-word. */
DECL|ldmaCtrlSizeWord|enumerator|ldmaCtrlSizeWord = _LDMA_CH_CTRL_SIZE_WORD /**< Each unit transfer is a word. */
DECL|ldmaCtrlSrcAddrModeAbs|enumerator|ldmaCtrlSrcAddrModeAbs = _LDMA_CH_CTRL_SRCMODE_ABSOLUTE, /**< Address fetched from a linked structure is absolute. */
DECL|ldmaCtrlSrcAddrModeRel|enumerator|ldmaCtrlSrcAddrModeRel = _LDMA_CH_CTRL_SRCMODE_RELATIVE /**< Address fetched from a linked structure is relative. */
DECL|ldmaCtrlSrcIncFour|enumerator|ldmaCtrlSrcIncFour = _LDMA_CH_CTRL_SRCINC_FOUR, /**< Increment source address by four unit data sizes. */
DECL|ldmaCtrlSrcIncNone|enumerator|ldmaCtrlSrcIncNone = _LDMA_CH_CTRL_SRCINC_NONE /**< Do not increment the source address. */
DECL|ldmaCtrlSrcIncOne|enumerator|ldmaCtrlSrcIncOne = _LDMA_CH_CTRL_SRCINC_ONE, /**< Increment source address by one unit data size. */
DECL|ldmaCtrlSrcIncTwo|enumerator|ldmaCtrlSrcIncTwo = _LDMA_CH_CTRL_SRCINC_TWO, /**< Increment source address by two unit data sizes. */
DECL|ldmaCtrlStructTypeSync|enumerator|ldmaCtrlStructTypeSync = _LDMA_CH_CTRL_STRUCTTYPE_SYNCHRONIZE, /**< SYNCHRONIZE transfer type. */
DECL|ldmaCtrlStructTypeWrite|enumerator|ldmaCtrlStructTypeWrite = _LDMA_CH_CTRL_STRUCTTYPE_WRITE /**< WRITE transfer type. */
DECL|ldmaCtrlStructTypeXfer|enumerator|ldmaCtrlStructTypeXfer = _LDMA_CH_CTRL_STRUCTTYPE_TRANSFER, /**< TRANSFER transfer type. */
DECL|ldmaCtrlSyncPrsClrOff|member|uint8_t ldmaCtrlSyncPrsClrOff; /**< PRS Synctrig clear enables to clear. */
DECL|ldmaCtrlSyncPrsClrOn|member|uint8_t ldmaCtrlSyncPrsClrOn; /**< PRS Synctrig clear enables to set. */
DECL|ldmaCtrlSyncPrsSetOff|member|uint8_t ldmaCtrlSyncPrsSetOff; /**< PRS Synctrig set enables to clear. */
DECL|ldmaCtrlSyncPrsSetOn|member|uint8_t ldmaCtrlSyncPrsSetOn; /**< PRS Synctrig set enables to set. */
DECL|ldmaDbgHalt|member|bool ldmaDbgHalt; /**< Dis. DMA trig when cpu is halted. */
DECL|ldmaInitCtrlNumFixed|member|uint8_t ldmaInitCtrlNumFixed; /**< Arbitration mode separator.*/
DECL|ldmaInitCtrlSyncPrsClrEn|member|uint8_t ldmaInitCtrlSyncPrsClrEn; /**< PRS Synctrig clear enable. */
DECL|ldmaInitCtrlSyncPrsSetEn|member|uint8_t ldmaInitCtrlSyncPrsSetEn; /**< PRS Synctrig set enable. */
DECL|ldmaInitIrqPriority|member|uint8_t ldmaInitIrqPriority; /**< LDMA IRQ priority (0..7). */
DECL|ldmaLinkModeAbs|enumerator|ldmaLinkModeAbs = _LDMA_CH_LINK_LINKMODE_ABSOLUTE, /**< Link address is an absolute address value. */
DECL|ldmaLinkModeRel|enumerator|ldmaLinkModeRel = _LDMA_CH_LINK_LINKMODE_RELATIVE /**< Link address is a two's complement releative address. */
DECL|ldmaLoopCnt|member|uint8_t ldmaLoopCnt; /**< Counter for looped transfers. */
DECL|ldmaPeripheralSignal_ADC0_SCAN|enumerator|ldmaPeripheralSignal_ADC0_SCAN = LDMA_CH_REQSEL_SIGSEL_ADC0SCAN | LDMA_CH_REQSEL_SOURCESEL_ADC0, ///< Trig on ADC0_SCAN.
DECL|ldmaPeripheralSignal_ADC0_SINGLE|enumerator|ldmaPeripheralSignal_ADC0_SINGLE = LDMA_CH_REQSEL_SIGSEL_ADC0SINGLE | LDMA_CH_REQSEL_SOURCESEL_ADC0, ///< Trig on ADC0_SINGLE.
DECL|ldmaPeripheralSignal_CRYPTO0_DATA0RD|enumerator|ldmaPeripheralSignal_CRYPTO0_DATA0RD = LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0RD | LDMA_CH_REQSEL_SOURCESEL_CRYPTO0, ///< Trig on CRYPTO0_DATA0RD.
DECL|ldmaPeripheralSignal_CRYPTO0_DATA0WR|enumerator|ldmaPeripheralSignal_CRYPTO0_DATA0WR = LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0WR | LDMA_CH_REQSEL_SOURCESEL_CRYPTO0, ///< Trig on CRYPTO0_DATA0WR.
DECL|ldmaPeripheralSignal_CRYPTO0_DATA0XWR|enumerator|ldmaPeripheralSignal_CRYPTO0_DATA0XWR = LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0XWR | LDMA_CH_REQSEL_SOURCESEL_CRYPTO0, ///< Trig on CRYPTO0_DATA0XWR.
DECL|ldmaPeripheralSignal_CRYPTO0_DATA1RD|enumerator|ldmaPeripheralSignal_CRYPTO0_DATA1RD = LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA1RD | LDMA_CH_REQSEL_SOURCESEL_CRYPTO0, ///< Trig on CRYPTO0_DATA1RD.
DECL|ldmaPeripheralSignal_CRYPTO0_DATA1WR|enumerator|ldmaPeripheralSignal_CRYPTO0_DATA1WR = LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA1WR | LDMA_CH_REQSEL_SOURCESEL_CRYPTO0, ///< Trig on CRYPTO0_DATA1WR.
DECL|ldmaPeripheralSignal_CRYPTO1_DATA0RD|enumerator|ldmaPeripheralSignal_CRYPTO1_DATA0RD = LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA0RD | LDMA_CH_REQSEL_SOURCESEL_CRYPTO1, ///< Trig on CRYPTO1_DATA0RD.
DECL|ldmaPeripheralSignal_CRYPTO1_DATA0WR|enumerator|ldmaPeripheralSignal_CRYPTO1_DATA0WR = LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA0WR | LDMA_CH_REQSEL_SOURCESEL_CRYPTO1, ///< Trig on CRYPTO1_DATA0WR.
DECL|ldmaPeripheralSignal_CRYPTO1_DATA0XWR|enumerator|ldmaPeripheralSignal_CRYPTO1_DATA0XWR = LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA0XWR | LDMA_CH_REQSEL_SOURCESEL_CRYPTO1, ///< Trig on CRYPTO1_DATA0XWR.
DECL|ldmaPeripheralSignal_CRYPTO1_DATA1RD|enumerator|ldmaPeripheralSignal_CRYPTO1_DATA1RD = LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA1RD | LDMA_CH_REQSEL_SOURCESEL_CRYPTO1, ///< Trig on CRYPTO1_DATA1RD.
DECL|ldmaPeripheralSignal_CRYPTO1_DATA1WR|enumerator|ldmaPeripheralSignal_CRYPTO1_DATA1WR = LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA1WR | LDMA_CH_REQSEL_SOURCESEL_CRYPTO1, ///< Trig on CRYPTO1_DATA1WR.
DECL|ldmaPeripheralSignal_CRYPTO_DATA0RD|enumerator|ldmaPeripheralSignal_CRYPTO_DATA0RD = LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0RD | LDMA_CH_REQSEL_SOURCESEL_CRYPTO, ///< Trig on CRYPTO_DATA0RD.
DECL|ldmaPeripheralSignal_CRYPTO_DATA0WR|enumerator|ldmaPeripheralSignal_CRYPTO_DATA0WR = LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0WR | LDMA_CH_REQSEL_SOURCESEL_CRYPTO, ///< Trig on CRYPTO_DATA0WR.
DECL|ldmaPeripheralSignal_CRYPTO_DATA0XWR|enumerator|ldmaPeripheralSignal_CRYPTO_DATA0XWR = LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0XWR | LDMA_CH_REQSEL_SOURCESEL_CRYPTO, ///< Trig on CRYPTO_DATA0XWR.
DECL|ldmaPeripheralSignal_CRYPTO_DATA1RD|enumerator|ldmaPeripheralSignal_CRYPTO_DATA1RD = LDMA_CH_REQSEL_SIGSEL_CRYPTODATA1RD | LDMA_CH_REQSEL_SOURCESEL_CRYPTO, ///< Trig on CRYPTO_DATA1RD.
DECL|ldmaPeripheralSignal_CRYPTO_DATA1WR|enumerator|ldmaPeripheralSignal_CRYPTO_DATA1WR = LDMA_CH_REQSEL_SIGSEL_CRYPTODATA1WR | LDMA_CH_REQSEL_SOURCESEL_CRYPTO, ///< Trig on CRYPTO_DATA1WR.
DECL|ldmaPeripheralSignal_CSEN_BSLN|enumerator|ldmaPeripheralSignal_CSEN_BSLN = LDMA_CH_REQSEL_SIGSEL_CSENBSLN | LDMA_CH_REQSEL_SOURCESEL_CSEN, ///< Trig on CSEN_BSLN.
DECL|ldmaPeripheralSignal_CSEN_DATA|enumerator|ldmaPeripheralSignal_CSEN_DATA = LDMA_CH_REQSEL_SIGSEL_CSENDATA | LDMA_CH_REQSEL_SOURCESEL_CSEN, ///< Trig on CSEN_DATA.
DECL|ldmaPeripheralSignal_I2C0_RXDATAV|enumerator|ldmaPeripheralSignal_I2C0_RXDATAV = LDMA_CH_REQSEL_SIGSEL_I2C0RXDATAV | LDMA_CH_REQSEL_SOURCESEL_I2C0, ///< Trig on I2C0_RXDATAV.
DECL|ldmaPeripheralSignal_I2C0_TXBL|enumerator|ldmaPeripheralSignal_I2C0_TXBL = LDMA_CH_REQSEL_SIGSEL_I2C0TXBL | LDMA_CH_REQSEL_SOURCESEL_I2C0, ///< Trig on I2C0_TXBL.
DECL|ldmaPeripheralSignal_I2C1_RXDATAV|enumerator|ldmaPeripheralSignal_I2C1_RXDATAV = LDMA_CH_REQSEL_SIGSEL_I2C1RXDATAV | LDMA_CH_REQSEL_SOURCESEL_I2C1, ///< Trig on I2C1_RXDATAV.
DECL|ldmaPeripheralSignal_I2C1_TXBL|enumerator|ldmaPeripheralSignal_I2C1_TXBL = LDMA_CH_REQSEL_SIGSEL_I2C1TXBL | LDMA_CH_REQSEL_SOURCESEL_I2C1, ///< Trig on I2C1_TXBL.
DECL|ldmaPeripheralSignal_LESENSE_BUFDATAV|enumerator|ldmaPeripheralSignal_LESENSE_BUFDATAV = LDMA_CH_REQSEL_SIGSEL_LESENSEBUFDATAV | LDMA_CH_REQSEL_SOURCESEL_LESENSE, ///< Trig on LESENSE_BUFDATAV.
DECL|ldmaPeripheralSignal_LEUART0_RXDATAV|enumerator|ldmaPeripheralSignal_LEUART0_RXDATAV = LDMA_CH_REQSEL_SIGSEL_LEUART0RXDATAV | LDMA_CH_REQSEL_SOURCESEL_LEUART0, ///< Trig on LEUART0_RXDATAV.
DECL|ldmaPeripheralSignal_LEUART0_TXBL|enumerator|ldmaPeripheralSignal_LEUART0_TXBL = LDMA_CH_REQSEL_SIGSEL_LEUART0TXBL | LDMA_CH_REQSEL_SOURCESEL_LEUART0, ///< Trig on LEUART0_TXBL.
DECL|ldmaPeripheralSignal_LEUART0_TXEMPTY|enumerator|ldmaPeripheralSignal_LEUART0_TXEMPTY = LDMA_CH_REQSEL_SIGSEL_LEUART0TXEMPTY | LDMA_CH_REQSEL_SOURCESEL_LEUART0, ///< Trig on LEUART0_TXEMPTY.
DECL|ldmaPeripheralSignal_MSC_WDATA|enumerator|ldmaPeripheralSignal_MSC_WDATA = LDMA_CH_REQSEL_SIGSEL_MSCWDATA | LDMA_CH_REQSEL_SOURCESEL_MSC, ///< Trig on MSC_WDATA.
DECL|ldmaPeripheralSignal_NONE|enumerator|ldmaPeripheralSignal_NONE = LDMA_CH_REQSEL_SOURCESEL_NONE, ///< No peripheral selected for DMA triggering.
DECL|ldmaPeripheralSignal_PRS_REQ0|enumerator|ldmaPeripheralSignal_PRS_REQ0 = LDMA_CH_REQSEL_SIGSEL_PRSREQ0 | LDMA_CH_REQSEL_SOURCESEL_PRS, ///< Trig on PRS_REQ0.
DECL|ldmaPeripheralSignal_PRS_REQ1|enumerator|ldmaPeripheralSignal_PRS_REQ1 = LDMA_CH_REQSEL_SIGSEL_PRSREQ1 | LDMA_CH_REQSEL_SOURCESEL_PRS, ///< Trig on PRS_REQ1.
DECL|ldmaPeripheralSignal_TIMER0_CC0|enumerator|ldmaPeripheralSignal_TIMER0_CC0 = LDMA_CH_REQSEL_SIGSEL_TIMER0CC0 | LDMA_CH_REQSEL_SOURCESEL_TIMER0, ///< Trig on TIMER0_CC0.
DECL|ldmaPeripheralSignal_TIMER0_CC1|enumerator|ldmaPeripheralSignal_TIMER0_CC1 = LDMA_CH_REQSEL_SIGSEL_TIMER0CC1 | LDMA_CH_REQSEL_SOURCESEL_TIMER0, ///< Trig on TIMER0_CC1.
DECL|ldmaPeripheralSignal_TIMER0_CC2|enumerator|ldmaPeripheralSignal_TIMER0_CC2 = LDMA_CH_REQSEL_SIGSEL_TIMER0CC2 | LDMA_CH_REQSEL_SOURCESEL_TIMER0, ///< Trig on TIMER0_CC2.
DECL|ldmaPeripheralSignal_TIMER0_UFOF|enumerator|ldmaPeripheralSignal_TIMER0_UFOF = LDMA_CH_REQSEL_SIGSEL_TIMER0UFOF | LDMA_CH_REQSEL_SOURCESEL_TIMER0, ///< Trig on TIMER0_UFOF.
DECL|ldmaPeripheralSignal_TIMER1_CC0|enumerator|ldmaPeripheralSignal_TIMER1_CC0 = LDMA_CH_REQSEL_SIGSEL_TIMER1CC0 | LDMA_CH_REQSEL_SOURCESEL_TIMER1, ///< Trig on TIMER1_CC0.
DECL|ldmaPeripheralSignal_TIMER1_CC1|enumerator|ldmaPeripheralSignal_TIMER1_CC1 = LDMA_CH_REQSEL_SIGSEL_TIMER1CC1 | LDMA_CH_REQSEL_SOURCESEL_TIMER1, ///< Trig on TIMER1_CC1.
DECL|ldmaPeripheralSignal_TIMER1_CC2|enumerator|ldmaPeripheralSignal_TIMER1_CC2 = LDMA_CH_REQSEL_SIGSEL_TIMER1CC2 | LDMA_CH_REQSEL_SOURCESEL_TIMER1, ///< Trig on TIMER1_CC2.
DECL|ldmaPeripheralSignal_TIMER1_CC3|enumerator|ldmaPeripheralSignal_TIMER1_CC3 = LDMA_CH_REQSEL_SIGSEL_TIMER1CC3 | LDMA_CH_REQSEL_SOURCESEL_TIMER1, ///< Trig on TIMER1_CC3.
DECL|ldmaPeripheralSignal_TIMER1_UFOF|enumerator|ldmaPeripheralSignal_TIMER1_UFOF = LDMA_CH_REQSEL_SIGSEL_TIMER1UFOF | LDMA_CH_REQSEL_SOURCESEL_TIMER1, ///< Trig on TIMER1_UFOF.
DECL|ldmaPeripheralSignal_USART0_RXDATAV|enumerator|ldmaPeripheralSignal_USART0_RXDATAV = LDMA_CH_REQSEL_SIGSEL_USART0RXDATAV | LDMA_CH_REQSEL_SOURCESEL_USART0, ///< Trig on USART0_RXDATAV.
DECL|ldmaPeripheralSignal_USART0_TXBL|enumerator|ldmaPeripheralSignal_USART0_TXBL = LDMA_CH_REQSEL_SIGSEL_USART0TXBL | LDMA_CH_REQSEL_SOURCESEL_USART0, ///< Trig on USART0_TXBL.
DECL|ldmaPeripheralSignal_USART0_TXEMPTY|enumerator|ldmaPeripheralSignal_USART0_TXEMPTY = LDMA_CH_REQSEL_SIGSEL_USART0TXEMPTY | LDMA_CH_REQSEL_SOURCESEL_USART0, ///< Trig on USART0_TXEMPTY.
DECL|ldmaPeripheralSignal_USART1_RXDATAVRIGHT|enumerator|ldmaPeripheralSignal_USART1_RXDATAVRIGHT = LDMA_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT | LDMA_CH_REQSEL_SOURCESEL_USART1, ///< Trig on USART1_RXDATAVRIGHT.
DECL|ldmaPeripheralSignal_USART1_RXDATAV|enumerator|ldmaPeripheralSignal_USART1_RXDATAV = LDMA_CH_REQSEL_SIGSEL_USART1RXDATAV | LDMA_CH_REQSEL_SOURCESEL_USART1, ///< Trig on USART1_RXDATAV.
DECL|ldmaPeripheralSignal_USART1_TXBLRIGHT|enumerator|ldmaPeripheralSignal_USART1_TXBLRIGHT = LDMA_CH_REQSEL_SIGSEL_USART1TXBLRIGHT | LDMA_CH_REQSEL_SOURCESEL_USART1, ///< Trig on USART1_TXBLRIGHT.
DECL|ldmaPeripheralSignal_USART1_TXBL|enumerator|ldmaPeripheralSignal_USART1_TXBL = LDMA_CH_REQSEL_SIGSEL_USART1TXBL | LDMA_CH_REQSEL_SOURCESEL_USART1, ///< Trig on USART1_TXBL.
DECL|ldmaPeripheralSignal_USART1_TXEMPTY|enumerator|ldmaPeripheralSignal_USART1_TXEMPTY = LDMA_CH_REQSEL_SIGSEL_USART1TXEMPTY | LDMA_CH_REQSEL_SOURCESEL_USART1, ///< Trig on USART1_TXEMPTY.
DECL|ldmaPeripheralSignal_USART2_RXDATAV|enumerator|ldmaPeripheralSignal_USART2_RXDATAV = LDMA_CH_REQSEL_SIGSEL_USART2RXDATAV | LDMA_CH_REQSEL_SOURCESEL_USART2, ///< Trig on USART2_RXDATAV.
DECL|ldmaPeripheralSignal_USART2_TXBL|enumerator|ldmaPeripheralSignal_USART2_TXBL = LDMA_CH_REQSEL_SIGSEL_USART2TXBL | LDMA_CH_REQSEL_SOURCESEL_USART2, ///< Trig on USART2_TXBL.
DECL|ldmaPeripheralSignal_USART2_TXEMPTY|enumerator|ldmaPeripheralSignal_USART2_TXEMPTY = LDMA_CH_REQSEL_SIGSEL_USART2TXEMPTY | LDMA_CH_REQSEL_SOURCESEL_USART2, ///< Trig on USART2_TXEMPTY.
DECL|ldmaPeripheralSignal_USART3_RXDATAVRIGHT|enumerator|ldmaPeripheralSignal_USART3_RXDATAVRIGHT = LDMA_CH_REQSEL_SIGSEL_USART3RXDATAVRIGHT | LDMA_CH_REQSEL_SOURCESEL_USART3, ///< Trig on USART3_RXDATAVRIGHT.
DECL|ldmaPeripheralSignal_USART3_RXDATAV|enumerator|ldmaPeripheralSignal_USART3_RXDATAV = LDMA_CH_REQSEL_SIGSEL_USART3RXDATAV | LDMA_CH_REQSEL_SOURCESEL_USART3, ///< Trig on USART3_RXDATAV.
DECL|ldmaPeripheralSignal_USART3_TXBLRIGHT|enumerator|ldmaPeripheralSignal_USART3_TXBLRIGHT = LDMA_CH_REQSEL_SIGSEL_USART3TXBLRIGHT | LDMA_CH_REQSEL_SOURCESEL_USART3, ///< Trig on USART3_TXBLRIGHT.
DECL|ldmaPeripheralSignal_USART3_TXBL|enumerator|ldmaPeripheralSignal_USART3_TXBL = LDMA_CH_REQSEL_SIGSEL_USART3TXBL | LDMA_CH_REQSEL_SOURCESEL_USART3, ///< Trig on USART3_TXBL.
DECL|ldmaPeripheralSignal_USART3_TXEMPTY|enumerator|ldmaPeripheralSignal_USART3_TXEMPTY = LDMA_CH_REQSEL_SIGSEL_USART3TXEMPTY | LDMA_CH_REQSEL_SOURCESEL_USART3, ///< Trig on USART3_TXEMPTY.
DECL|ldmaPeripheralSignal_VDAC0_CH0|enumerator|ldmaPeripheralSignal_VDAC0_CH0 = LDMA_CH_REQSEL_SIGSEL_VDAC0CH0 | LDMA_CH_REQSEL_SOURCESEL_VDAC0, ///< Trig on VDAC0_CH0.
DECL|ldmaPeripheralSignal_VDAC0_CH1|enumerator|ldmaPeripheralSignal_VDAC0_CH1 = LDMA_CH_REQSEL_SIGSEL_VDAC0CH1 | LDMA_CH_REQSEL_SOURCESEL_VDAC0, ///< Trig on VDAC0_CH1.
DECL|ldmaPeripheralSignal_WTIMER0_CC0|enumerator|ldmaPeripheralSignal_WTIMER0_CC0 = LDMA_CH_REQSEL_SIGSEL_WTIMER0CC0 | LDMA_CH_REQSEL_SOURCESEL_WTIMER0, ///< Trig on WTIMER0_CC0.
DECL|ldmaPeripheralSignal_WTIMER0_CC1|enumerator|ldmaPeripheralSignal_WTIMER0_CC1 = LDMA_CH_REQSEL_SIGSEL_WTIMER0CC1 | LDMA_CH_REQSEL_SOURCESEL_WTIMER0, ///< Trig on WTIMER0_CC1.
DECL|ldmaPeripheralSignal_WTIMER0_CC2|enumerator|ldmaPeripheralSignal_WTIMER0_CC2 = LDMA_CH_REQSEL_SIGSEL_WTIMER0CC2 | LDMA_CH_REQSEL_SOURCESEL_WTIMER0, ///< Trig on WTIMER0_CC2.
DECL|ldmaPeripheralSignal_WTIMER0_UFOF|enumerator|ldmaPeripheralSignal_WTIMER0_UFOF = LDMA_CH_REQSEL_SIGSEL_WTIMER0UFOF | LDMA_CH_REQSEL_SOURCESEL_WTIMER0, ///< Trig on WTIMER0_UFOF.
DECL|ldmaPeripheralSignal_WTIMER1_CC0|enumerator|ldmaPeripheralSignal_WTIMER1_CC0 = LDMA_CH_REQSEL_SIGSEL_WTIMER1CC0 | LDMA_CH_REQSEL_SOURCESEL_WTIMER1, ///< Trig on WTIMER1_CC0.
DECL|ldmaPeripheralSignal_WTIMER1_CC1|enumerator|ldmaPeripheralSignal_WTIMER1_CC1 = LDMA_CH_REQSEL_SIGSEL_WTIMER1CC1 | LDMA_CH_REQSEL_SOURCESEL_WTIMER1, ///< Trig on WTIMER1_CC1.
DECL|ldmaPeripheralSignal_WTIMER1_CC2|enumerator|ldmaPeripheralSignal_WTIMER1_CC2 = LDMA_CH_REQSEL_SIGSEL_WTIMER1CC2 | LDMA_CH_REQSEL_SOURCESEL_WTIMER1, ///< Trig on WTIMER1_CC2.
DECL|ldmaPeripheralSignal_WTIMER1_CC3|enumerator|ldmaPeripheralSignal_WTIMER1_CC3 = LDMA_CH_REQSEL_SIGSEL_WTIMER1CC3 | LDMA_CH_REQSEL_SOURCESEL_WTIMER1, ///< Trig on WTIMER1_CC3.
DECL|ldmaPeripheralSignal_WTIMER1_UFOF|enumerator|ldmaPeripheralSignal_WTIMER1_UFOF = LDMA_CH_REQSEL_SIGSEL_WTIMER1UFOF | LDMA_CH_REQSEL_SOURCESEL_WTIMER1 ///< Trig on WTIMER1_UFOF.
DECL|ldmaReqDis|member|bool ldmaReqDis; /**< Mask the PRS trigger input. */
DECL|ldmaReqSel|member|uint32_t ldmaReqSel; /**< Selects DMA trigger source. */
DECL|linkAddr|member|int32_t linkAddr : 30; /**< Address of next (linked) descriptor. */
DECL|linkAddr|member|int32_t linkAddr : 30; /**< Address of next (linked) descriptor. */
DECL|linkAddr|member|int32_t linkAddr : 30; /**< Address of next (linked) descriptor. */
DECL|linkMode|member|uint32_t linkMode : 1; /**< Select absolute or relative link address.*/
DECL|linkMode|member|uint32_t linkMode : 1; /**< Select absolute or relative link address.*/
DECL|linkMode|member|uint32_t linkMode : 1; /**< Select absolute or relative link address.*/
DECL|link|member|uint32_t link : 1; /**< Enable LINKLOAD when transfer is done. */
DECL|link|member|uint32_t link : 1; /**< Enable LINKLOAD when transfer is done. */
DECL|link|member|uint32_t link : 1; /**< Enable LINKLOAD when transfer is done. */
DECL|matchEn|member|uint32_t matchEn : 8; /**< Sync trig match enable. */
DECL|matchVal|member|uint32_t matchVal : 8; /**< Sync trig match value. */
DECL|reqMode|member|uint32_t reqMode : 1; /**< Block or cycle transfer selector. */
DECL|reqMode|member|uint32_t reqMode : 1; /**< Block or cycle transfer selector. */
DECL|reqMode|member|uint32_t reqMode : 1; /**< Block or cycle transfer selector. */
DECL|reserved0|member|uint32_t reserved0 : 1;
DECL|reserved0|member|uint32_t reserved0 : 1;
DECL|reserved0|member|uint32_t reserved0 : 1;
DECL|reserved3|member|uint32_t reserved3 : 16;
DECL|reserved4|member|uint32_t reserved4 : 16;
DECL|size|member|uint32_t size : 2; /**< DMA transfer unit size. */
DECL|size|member|uint32_t size : 2; /**< DMA transfer unit size. */
DECL|size|member|uint32_t size : 2; /**< DMA transfer unit size. */
DECL|srcAddrMode|member|uint32_t srcAddrMode: 1; /**< Source addressing mode. */
DECL|srcAddrMode|member|uint32_t srcAddrMode: 1; /**< Source addressing mode. */
DECL|srcAddrMode|member|uint32_t srcAddrMode: 1; /**< Source addressing mode. */
DECL|srcAddr|member|uint32_t srcAddr; /**< DMA source address. */
DECL|srcInc|member|uint32_t srcInc : 2; /**< Source address increment unit size. */
DECL|srcInc|member|uint32_t srcInc : 2; /**< Source address increment unit size. */
DECL|srcInc|member|uint32_t srcInc : 2; /**< Source address increment unit size. */
DECL|structReq|member|uint32_t structReq : 1; /**< DMA transfer trigger during LINKLOAD. */
DECL|structReq|member|uint32_t structReq : 1; /**< DMA transfer trigger during LINKLOAD. */
DECL|structReq|member|uint32_t structReq : 1; /**< DMA transfer trigger during LINKLOAD. */
DECL|structType|member|uint32_t structType : 2; /**< Set to 0 to select XFER descriptor type. */
DECL|structType|member|uint32_t structType : 2; /**< Set to 1 to select SYNC descriptor type. */
DECL|structType|member|uint32_t structType : 2; /**< Set to 2 to select WRITE descriptor type.*/
DECL|syncClr|member|uint32_t syncClr : 8; /**< Clear bits in LDMA_CTRL.SYNCTRIG register*/
DECL|syncSet|member|uint32_t syncSet : 8; /**< Set bits in LDMA_CTRL.SYNCTRIG register. */
DECL|sync|member|} sync;
DECL|wri|member|} wri;
DECL|xferCnt|member|uint32_t xferCnt : 11; /**< Transfer count minus one. */
DECL|xferCnt|member|uint32_t xferCnt : 11; /**< Transfer count minus one. */
DECL|xferCnt|member|uint32_t xferCnt : 11; /**< Transfer count minus one. */
DECL|xfer|member|} xfer;
