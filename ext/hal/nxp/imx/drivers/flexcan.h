DECL|FLEXCAN_GetLowestInactiveMsgBuf|function|static inline uint32_t FLEXCAN_GetLowestInactiveMsgBuf(CAN_Type* base)
DECL|FLEXCAN_IsModuleReady|function|static inline bool FLEXCAN_IsModuleReady(CAN_Type* base)
DECL|FLEXCAN_SetGlitchFilterWidth|function|static inline void FLEXCAN_SetGlitchFilterWidth(CAN_Type* base, uint8_t filterWidth)
DECL|FLEXCAN_SetTxArbitrationStartDelay|function|static inline void FLEXCAN_SetTxArbitrationStartDelay(CAN_Type* base, uint8_t tasd)
DECL|__FLEXCAN_H__|macro|__FLEXCAN_H__
DECL|_flexcan_id_table|struct|typedef struct _flexcan_id_table
DECL|_flexcan_init_config|struct|typedef struct _flexcan_init_config
DECL|_flexcan_interrutpt|enum|enum _flexcan_interrutpt
DECL|_flexcan_msgbuf_code_rx|enum|enum _flexcan_msgbuf_code_rx
DECL|_flexcan_msgbuf_code_tx|enum|enum _flexcan_msgbuf_code_tx
DECL|_flexcan_msgbuf|struct|typedef struct _flexcan_msgbuf
DECL|_flexcan_operatining_modes|enum|enum _flexcan_operatining_modes
DECL|_flexcan_rx_fifo_filter_id_number|enum|enum _flexcan_rx_fifo_filter_id_number
DECL|_flexcan_rx_fifo_id_element_format|enum|enum _flexcan_rx_fifo_id_element_format
DECL|_flexcan_rx_mask_id_type|enum|enum _flexcan_rx_mask_id_type
DECL|_flexcan_rx_mask_mode|enum|enum _flexcan_rx_mask_mode
DECL|_flexcan_status_flag|enum|enum _flexcan_status_flag
DECL|_flexcan_timing|struct|typedef struct _flexcan_timing
DECL|code|member|uint32_t code : 4;
DECL|cs|member|uint32_t cs; /*!< Code and Status. */
DECL|data0|member|uint8_t data0;
DECL|data1|member|uint8_t data1;
DECL|data2|member|uint8_t data2;
DECL|data3|member|uint8_t data3;
DECL|data4|member|uint8_t data4;
DECL|data5|member|uint8_t data5;
DECL|data6|member|uint8_t data6;
DECL|data7|member|uint8_t data7;
DECL|dlc|member|uint32_t dlc : 4;
DECL|flexcanIntBusOff|enumerator|flexcanIntBusOff = 0x08, /*!< Bus Off interrupt source. */
DECL|flexcanIntError|enumerator|flexcanIntError = 0x10, /*!< Error interrupt source. */
DECL|flexcanIntRxWarning|enumerator|flexcanIntRxWarning = 0x01, /*!< Tx Warning interrupt source. */
DECL|flexcanIntTxWarning|enumerator|flexcanIntTxWarning = 0x02, /*!< Tx Warning interrupt source. */
DECL|flexcanIntWakeUp|enumerator|flexcanIntWakeUp = 0x04, /*!< Wake Up interrupt source. */
DECL|flexcanListenOnlyMode|enumerator|flexcanListenOnlyMode = 0x2, /*!< Listen-only mode @internal gui name="Listen-only". */
DECL|flexcanLoopBackMode|enumerator|flexcanLoopBackMode = 0x4, /*!< Loop-back mode @internal gui name="Loop back". */
DECL|flexcanNormalMode|enumerator|flexcanNormalMode = 0x1, /*!< Normal mode or user mode @internal gui name="Normal". */
DECL|flexcanRxBusy|enumerator|flexcanRxBusy = 0x8, /*!< FlexCAN is updating the contents of the MB. */
DECL|flexcanRxEmpty|enumerator|flexcanRxEmpty = 0x4, /*!< MB is active and empty. */
DECL|flexcanRxFifoIdElementFormatA|enumerator|flexcanRxFifoIdElementFormatA = 0x0, /*!< One full ID (standard and extended) per ID Filter Table element. */
DECL|flexcanRxFifoIdElementFormatB|enumerator|flexcanRxFifoIdElementFormatB = 0x1, /*!< Two full standard IDs or two partial 14-bit (standard and extended) IDs per ID Filter Table element. */
DECL|flexcanRxFifoIdElementFormatC|enumerator|flexcanRxFifoIdElementFormatC = 0x2, /*!< Four partial 8-bit Standard IDs per ID Filter Table element. */
DECL|flexcanRxFifoIdElementFormatD|enumerator|flexcanRxFifoIdElementFormatD = 0x3, /*!< All frames rejected. */
DECL|flexcanRxFifoIdFilterNum104|enumerator|flexcanRxFifoIdFilterNum104 = 0xC, /*!< 104 Rx FIFO Filters. @internal gui name="104 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum112|enumerator|flexcanRxFifoIdFilterNum112 = 0xD, /*!< 112 Rx FIFO Filters. @internal gui name="112 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum120|enumerator|flexcanRxFifoIdFilterNum120 = 0xE, /*!< 120 Rx FIFO Filters. @internal gui name="120 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum128|enumerator|flexcanRxFifoIdFilterNum128 = 0xF, /*!< 128 Rx FIFO Filters. @internal gui name="128 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum16|enumerator|flexcanRxFifoIdFilterNum16 = 0x1, /*!< 16 Rx FIFO Filters. @internal gui name="16 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum24|enumerator|flexcanRxFifoIdFilterNum24 = 0x2, /*!< 24 Rx FIFO Filters. @internal gui name="24 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum32|enumerator|flexcanRxFifoIdFilterNum32 = 0x3, /*!< 32 Rx FIFO Filters. @internal gui name="32 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum40|enumerator|flexcanRxFifoIdFilterNum40 = 0x4, /*!< 40 Rx FIFO Filters. @internal gui name="40 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum48|enumerator|flexcanRxFifoIdFilterNum48 = 0x5, /*!< 48 Rx FIFO Filters. @internal gui name="48 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum56|enumerator|flexcanRxFifoIdFilterNum56 = 0x6, /*!< 56 Rx FIFO Filters. @internal gui name="56 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum64|enumerator|flexcanRxFifoIdFilterNum64 = 0x7, /*!< 64 Rx FIFO Filters. @internal gui name="64 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum72|enumerator|flexcanRxFifoIdFilterNum72 = 0x8, /*!< 72 Rx FIFO Filters. @internal gui name="72 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum80|enumerator|flexcanRxFifoIdFilterNum80 = 0x9, /*!< 80 Rx FIFO Filters. @internal gui name="80 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum88|enumerator|flexcanRxFifoIdFilterNum88 = 0xA, /*!< 88 Rx FIFO Filters. @internal gui name="88 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum8|enumerator|flexcanRxFifoIdFilterNum8 = 0x0, /*!< 8 Rx FIFO Filters. @internal gui name="8 Rx FIFO Filters" */
DECL|flexcanRxFifoIdFilterNum96|enumerator|flexcanRxFifoIdFilterNum96 = 0xB, /*!< 96 Rx FIFO Filters. @internal gui name="96 Rx FIFO Filters" */
DECL|flexcanRxFull|enumerator|flexcanRxFull = 0x2, /*!< MB is full. */
DECL|flexcanRxInactive|enumerator|flexcanRxInactive = 0x0, /*!< MB is not active. */
DECL|flexcanRxMaskGlobal|enumerator|flexcanRxMaskGlobal = 0x0, /*!< Rx global mask. */
DECL|flexcanRxMaskIdExt|enumerator|flexcanRxMaskIdExt = 0x1, /*!< Extended ID. */
DECL|flexcanRxMaskIdStd|enumerator|flexcanRxMaskIdStd = 0x0, /*!< Standard ID. */
DECL|flexcanRxMaskIndividual|enumerator|flexcanRxMaskIndividual = 0x1, /*!< Rx individual mask. */
DECL|flexcanRxNotUsed|enumerator|flexcanRxNotUsed = 0xF, /*!< Not used. */
DECL|flexcanRxOverrun|enumerator|flexcanRxOverrun = 0x6, /*!< MB is overwritten into a full buffer. */
DECL|flexcanRxRanswer|enumerator|flexcanRxRanswer = 0xA, /*!< A frame was configured to recognize a Remote Request Frame */
DECL|flexcanStatusAckErr|enumerator|flexcanStatusAckErr = CAN_ESR1_ACK_ERR_MASK, /*!< Ack Error flag. */
DECL|flexcanStatusBit0Err|enumerator|flexcanStatusBit0Err = CAN_ESR1_BIT0_ERR_MASK, /*!< Bit1 Error flag. */
DECL|flexcanStatusBit1Err|enumerator|flexcanStatusBit1Err = CAN_ESR1_BIT1_ERR_MASK, /*!< Bit0 Error flag. */
DECL|flexcanStatusBusOff|enumerator|flexcanStatusBusOff = CAN_ESR1_BOFF_INT_MASK, /*!< Bus Off interrupt flag. */
DECL|flexcanStatusCrcErr|enumerator|flexcanStatusCrcErr = CAN_ESR1_CRC_ERR_MASK, /*!< CRC Error flag. */
DECL|flexcanStatusError|enumerator|flexcanStatusError = CAN_ESR1_ERR_INT_MASK, /*!< Error interrupt flag. */
DECL|flexcanStatusFltConf|enumerator|flexcanStatusFltConf = CAN_ESR1_FLT_CONF_MASK, /*!< Fault Config flag. */
DECL|flexcanStatusFrameErr|enumerator|flexcanStatusFrameErr = CAN_ESR1_FRM_ERR_MASK, /*!< Frame Error flag. */
DECL|flexcanStatusIdle|enumerator|flexcanStatusIdle = CAN_ESR1_IDLE_MASK, /*!< FlexCAN Idle flag. */
DECL|flexcanStatusReceiving|enumerator|flexcanStatusReceiving = CAN_ESR1_RX_MASK, /*!< Receiving flag. */
DECL|flexcanStatusRxWarningInt|enumerator|flexcanStatusRxWarningInt = CAN_ESR1_RWRN_INT_MASK, /*!< Tx Warning initerrupt flag. */
DECL|flexcanStatusRxWarning|enumerator|flexcanStatusRxWarning = CAN_ESR1_RX_WRN_MASK, /*!< Rx Warning flag. */
DECL|flexcanStatusStuffingErr|enumerator|flexcanStatusStuffingErr = CAN_ESR1_STF_ERR_MASK, /*!< Stuffing Error flag. */
DECL|flexcanStatusSynch|enumerator|flexcanStatusSynch = CAN_ESR1_SYNCH_MASK, /*!< Bus Synchronized flag. */
DECL|flexcanStatusTransmitting|enumerator|flexcanStatusTransmitting = CAN_ESR1_TX_MASK, /*!< Trasmitting flag. */
DECL|flexcanStatusTxWarningInt|enumerator|flexcanStatusTxWarningInt = CAN_ESR1_TWRN_INT_MASK, /*!< Tx Warning initerrupt flag. */
DECL|flexcanStatusTxWarning|enumerator|flexcanStatusTxWarning = CAN_ESR1_TX_WRN_MASK, /*!< Tx Warning flag. */
DECL|flexcanStatusWake|enumerator|flexcanStatusWake = CAN_ESR1_WAK_INT_MASK, /*!< Wake Up interrupt flag. */
DECL|flexcanTxAbort|enumerator|flexcanTxAbort = 0x9, /*!< MB is aborted. */
DECL|flexcanTxDataOrRemte|enumerator|flexcanTxDataOrRemte = 0xC, /*!< MB is a TX Data Frame(when MB RTR = 0) or */
DECL|flexcanTxInactive|enumerator|flexcanTxInactive = 0x8, /*!< MB is not active. */
DECL|flexcanTxNotUsed|enumerator|flexcanTxNotUsed = 0xF, /*!< Not used. */
DECL|flexcanTxTanswer|enumerator|flexcanTxTanswer = 0xE, /*!< MB is a TX Response Request Frame from. */
DECL|flexcan_id_table_t|typedef|} flexcan_id_table_t;
DECL|flexcan_init_config_t|typedef|} flexcan_init_config_t;
DECL|flexcan_msgbuf_t|typedef|} flexcan_msgbuf_t;
DECL|flexcan_timing_t|typedef|} flexcan_timing_t;
DECL|idExt|member|uint32_t idExt : 18;
DECL|idFilter|member|uint32_t *idFilter; /*!< Rx FIFO ID filter elements. */
DECL|idStd|member|uint32_t idStd : 11;
DECL|ide|member|uint32_t ide : 1;
DECL|id|member|uint32_t id; /*!< Message Buffer ID. */
DECL|isExtendedFrame|member|bool isExtendedFrame; /*!< Extended frame. */
DECL|isRemoteFrame|member|bool isRemoteFrame; /*!< Remote frame. */
DECL|maxMsgBufNum|member|uint8_t maxMsgBufNum; /*!< The maximal number of available message buffer. */
DECL|operatingMode|member|uint32_t operatingMode; /*!< Desired FlexCAN module operating mode. */
DECL|phaseSeg1|member|uint32_t phaseSeg1; /*!< Phase segment 1. */
DECL|phaseSeg2|member|uint32_t phaseSeg2; /*!< Phase segment 2. */
DECL|preDiv|member|uint32_t preDiv; /*!< Clock pre divider. */
DECL|prio|member|uint32_t prio : 3;
DECL|propSeg|member|uint32_t propSeg; /*!< Propagation segment. */
DECL|rJumpwidth|member|uint32_t rJumpwidth; /*!< Resync jump width. */
DECL|reserved1|member|uint32_t reserved1 : 1;
DECL|reserved2|member|uint32_t reserved2 : 4;
DECL|rtr|member|uint32_t rtr : 1;
DECL|srr|member|uint32_t srr : 1;
DECL|timeStamp|member|uint32_t timeStamp : 16;
DECL|timing|member|flexcan_timing_t timing; /*!< Desired FlexCAN module timing configuration. */
DECL|word0|member|uint32_t word0; /*!< Bytes of the FlexCAN message. */
DECL|word1|member|uint32_t word1; /*!< Bytes of the FlexCAN message. */
