DECL|CONNECTIVITY_ENET0_FRAME0_EVENT_INT_DriverIRQHandler|function|void CONNECTIVITY_ENET0_FRAME0_EVENT_INT_DriverIRQHandler(void)
DECL|CONNECTIVITY_ENET0_FRAME1_INT_DriverIRQHandler|function|void CONNECTIVITY_ENET0_FRAME1_INT_DriverIRQHandler(void)
DECL|CONNECTIVITY_ENET0_FRAME2_INT_DriverIRQHandler|function|void CONNECTIVITY_ENET0_FRAME2_INT_DriverIRQHandler(void)
DECL|CONNECTIVITY_ENET1_FRAME0_EVENT_INT_DriverIRQHandler|function|void CONNECTIVITY_ENET1_FRAME0_EVENT_INT_DriverIRQHandler(void)
DECL|CONNECTIVITY_ENET1_FRAME1_INT_DriverIRQHandler|function|void CONNECTIVITY_ENET1_FRAME1_INT_DriverIRQHandler(void)
DECL|CONNECTIVITY_ENET1_FRAME2_INT_DriverIRQHandler|function|void CONNECTIVITY_ENET1_FRAME2_INT_DriverIRQHandler(void)
DECL|ENET1_DriverIRQHandler|function|void ENET1_DriverIRQHandler(void)
DECL|ENET2_DriverIRQHandler|function|void ENET2_DriverIRQHandler(void)
DECL|ENET_1588TIME_DELAY_COUNT|macro|ENET_1588TIME_DELAY_COUNT
DECL|ENET_1588_Timer_IRQHandler|function|void ENET_1588_Timer_IRQHandler(void)
DECL|ENET_8021QVLAN|macro|ENET_8021QVLAN
DECL|ENET_AVBConfigure|function|void ENET_AVBConfigure(ENET_Type *base, enet_handle_t *handle, const enet_avb_config_t *config)
DECL|ENET_ActiveSend|function|static void ENET_ActiveSend(ENET_Type *base, uint32_t ringId)
DECL|ENET_AddMulticastGroup|function|void ENET_AddMulticastGroup(ENET_Type *base, uint8_t *address)
DECL|ENET_CommonFrame0IRQHandler|function|void ENET_CommonFrame0IRQHandler(ENET_Type *base)
DECL|ENET_CommonFrame1IRQHandler|function|void ENET_CommonFrame1IRQHandler(ENET_Type *base)
DECL|ENET_CommonFrame2IRQHandler|function|void ENET_CommonFrame2IRQHandler(ENET_Type *base)
DECL|ENET_Deinit|function|void ENET_Deinit(ENET_Type *base)
DECL|ENET_DriverIRQHandler|function|void ENET_DriverIRQHandler(void)
DECL|ENET_ETHERNETL2|macro|ENET_ETHERNETL2
DECL|ENET_ErrorIRQHandler|function|void ENET_ErrorIRQHandler(ENET_Type *base, enet_handle_t *handle)
DECL|ENET_Error_IRQHandler|function|void ENET_Error_IRQHandler(void)
DECL|ENET_FRAME_MACLEN|macro|ENET_FRAME_MACLEN
DECL|ENET_FRAME_VLAN_TAGLEN|macro|ENET_FRAME_VLAN_TAGLEN
DECL|ENET_GetDefaultConfig|function|void ENET_GetDefaultConfig(enet_config_t *config)
DECL|ENET_GetInstance|function|uint32_t ENET_GetInstance(ENET_Type *base)
DECL|ENET_GetMacAddr|function|void ENET_GetMacAddr(ENET_Type *base, uint8_t *macAddr)
DECL|ENET_GetRxErrBeforeReadFrameMultiRing|function|void ENET_GetRxErrBeforeReadFrameMultiRing(enet_handle_t *handle, enet_data_error_stats_t *eErrorStatic, uint32_t ringId)
DECL|ENET_GetRxErrBeforeReadFrame|function|void ENET_GetRxErrBeforeReadFrame(enet_handle_t *handle, enet_data_error_stats_t *eErrorStatic)
DECL|ENET_GetRxFrameSizeMultiRing|function|status_t ENET_GetRxFrameSizeMultiRing(enet_handle_t *handle, uint32_t *length, uint32_t ringId)
DECL|ENET_GetRxFrameSize|function|status_t ENET_GetRxFrameSize(enet_handle_t *handle, uint32_t *length)
DECL|ENET_GetRxFrameTime|function|status_t ENET_GetRxFrameTime(enet_handle_t *handle, enet_ptp_time_data_t *ptpTimeData)
DECL|ENET_GetTxErrAfterSendFrameMultiRing|function|status_t ENET_GetTxErrAfterSendFrameMultiRing(enet_handle_t *handle, enet_data_error_stats_t *eErrorStatic, uint32_t ringId)
DECL|ENET_GetTxErrAfterSendFrame|function|status_t ENET_GetTxErrAfterSendFrame(enet_handle_t *handle, enet_data_error_stats_t *eErrorStatic)
DECL|ENET_GetTxFrameTime|function|status_t ENET_GetTxFrameTime(enet_handle_t *handle, enet_ptp_time_data_t *ptpTimeData)
DECL|ENET_HTONL|macro|ENET_HTONL
DECL|ENET_HTONS|macro|ENET_HTONS
DECL|ENET_IPV4VERSION|macro|ENET_IPV4VERSION
DECL|ENET_IPV4|macro|ENET_IPV4
DECL|ENET_IPV6VERSION|macro|ENET_IPV6VERSION
DECL|ENET_IPV6|macro|ENET_IPV6
DECL|ENET_Init|function|void ENET_Init(ENET_Type *base, enet_handle_t *handle, const enet_config_t *config, const enet_buffer_config_t *bufferConfig, uint8_t *macAddr,
DECL|ENET_LeaveMulticastGroup|function|void ENET_LeaveMulticastGroup(ENET_Type *base, uint8_t *address)
DECL|ENET_MDC_FREQUENCY|macro|ENET_MDC_FREQUENCY
DECL|ENET_NANOSECOND_ONE_SECOND|macro|ENET_NANOSECOND_ONE_SECOND
DECL|ENET_NTOHL|macro|ENET_NTOHL
DECL|ENET_NTOHS|macro|ENET_NTOHS
DECL|ENET_PTP1588_ETHL2_CLOCKID_OFFSET|macro|ENET_PTP1588_ETHL2_CLOCKID_OFFSET
DECL|ENET_PTP1588_ETHL2_MSGTYPE_OFFSET|macro|ENET_PTP1588_ETHL2_MSGTYPE_OFFSET
DECL|ENET_PTP1588_ETHL2_PACKETTYPE_OFFSET|macro|ENET_PTP1588_ETHL2_PACKETTYPE_OFFSET
DECL|ENET_PTP1588_ETHL2_SEQUENCEID_OFFSET|macro|ENET_PTP1588_ETHL2_SEQUENCEID_OFFSET
DECL|ENET_PTP1588_ETHL2_VERSION_OFFSET|macro|ENET_PTP1588_ETHL2_VERSION_OFFSET
DECL|ENET_PTP1588_IPV4_UDP_CLKID_OFFSET|macro|ENET_PTP1588_IPV4_UDP_CLKID_OFFSET
DECL|ENET_PTP1588_IPV4_UDP_CTL_OFFSET|macro|ENET_PTP1588_IPV4_UDP_CTL_OFFSET
DECL|ENET_PTP1588_IPV4_UDP_MSGTYPE_OFFSET|macro|ENET_PTP1588_IPV4_UDP_MSGTYPE_OFFSET
DECL|ENET_PTP1588_IPV4_UDP_PORT_OFFSET|macro|ENET_PTP1588_IPV4_UDP_PORT_OFFSET
DECL|ENET_PTP1588_IPV4_UDP_PROTOCOL_OFFSET|macro|ENET_PTP1588_IPV4_UDP_PROTOCOL_OFFSET
DECL|ENET_PTP1588_IPV4_UDP_SEQUENCEID_OFFSET|macro|ENET_PTP1588_IPV4_UDP_SEQUENCEID_OFFSET
DECL|ENET_PTP1588_IPV4_UDP_VERSION_OFFSET|macro|ENET_PTP1588_IPV4_UDP_VERSION_OFFSET
DECL|ENET_PTP1588_IPV6_UDP_CLKID_OFFSET|macro|ENET_PTP1588_IPV6_UDP_CLKID_OFFSET
DECL|ENET_PTP1588_IPV6_UDP_CTL_OFFSET|macro|ENET_PTP1588_IPV6_UDP_CTL_OFFSET
DECL|ENET_PTP1588_IPV6_UDP_MSGTYPE_OFFSET|macro|ENET_PTP1588_IPV6_UDP_MSGTYPE_OFFSET
DECL|ENET_PTP1588_IPV6_UDP_PORT_OFFSET|macro|ENET_PTP1588_IPV6_UDP_PORT_OFFSET
DECL|ENET_PTP1588_IPV6_UDP_PROTOCOL_OFFSET|macro|ENET_PTP1588_IPV6_UDP_PROTOCOL_OFFSET
DECL|ENET_PTP1588_IPV6_UDP_SEQUENCEID_OFFSET|macro|ENET_PTP1588_IPV6_UDP_SEQUENCEID_OFFSET
DECL|ENET_PTP1588_IPV6_UDP_VERSION_OFFSET|macro|ENET_PTP1588_IPV6_UDP_VERSION_OFFSET
DECL|ENET_PTP1588_IPVERSION_OFFSET|macro|ENET_PTP1588_IPVERSION_OFFSET
DECL|ENET_Ptp1588AdjustTimer|function|void ENET_Ptp1588AdjustTimer(ENET_Type *base, uint32_t corrIncrease, uint32_t corrPeriod)
DECL|ENET_Ptp1588Configure|function|void ENET_Ptp1588Configure(ENET_Type *base, enet_handle_t *handle, enet_ptp_config_t *ptpConfig)
DECL|ENET_Ptp1588GetTimer|function|void ENET_Ptp1588GetTimer(ENET_Type *base, enet_handle_t *handle, enet_ptp_time_t *ptpTime)
DECL|ENET_Ptp1588ParseFrame|function|static bool ENET_Ptp1588ParseFrame(const uint8_t *data, enet_ptp_time_data_t *ptpTsData, bool isFastEnabled)
DECL|ENET_Ptp1588SearchTimeRing|function|static status_t ENET_Ptp1588SearchTimeRing(enet_ptp_time_data_ring_t *ptpTsDataRing, enet_ptp_time_data_t *ptpTimedata)
DECL|ENET_Ptp1588SetTimer|function|void ENET_Ptp1588SetTimer(ENET_Type *base, enet_handle_t *handle, enet_ptp_time_t *ptpTime)
DECL|ENET_Ptp1588StartTimer|function|void ENET_Ptp1588StartTimer(ENET_Type *base, uint32_t ptpClkSrc)
DECL|ENET_Ptp1588TimerIRQHandler|function|void ENET_Ptp1588TimerIRQHandler(ENET_Type *base, enet_handle_t *handle)
DECL|ENET_Ptp1588UpdateTimeRing|function|static status_t ENET_Ptp1588UpdateTimeRing(enet_ptp_time_data_ring_t *ptpTsDataRing, enet_ptp_time_data_t *ptpTimeData)
DECL|ENET_ReadFrameMultiRing|function|status_t ENET_ReadFrameMultiRing( ENET_Type *base, enet_handle_t *handle, uint8_t *data, uint32_t length, uint32_t ringId)
DECL|ENET_ReadFrame|function|status_t ENET_ReadFrame(ENET_Type *base, enet_handle_t *handle, uint8_t *data, uint32_t length)
DECL|ENET_ReceiveIRQHandler|function|void ENET_ReceiveIRQHandler(ENET_Type *base, enet_handle_t *handle, uint32_t ringId)
DECL|ENET_Receive_IRQHandler|function|void ENET_Receive_IRQHandler(void)
DECL|ENET_SendFrameMultiRing|function|status_t ENET_SendFrameMultiRing( ENET_Type *base, enet_handle_t *handle, uint8_t *data, uint32_t length, uint32_t ringId)
DECL|ENET_SendFrame|function|status_t ENET_SendFrame(ENET_Type *base, enet_handle_t *handle, const uint8_t *data, uint32_t length)
DECL|ENET_SetCallback|function|void ENET_SetCallback(enet_handle_t *handle, enet_callback_t callback, void *userData)
DECL|ENET_SetHandler|function|static void ENET_SetHandler(ENET_Type *base, enet_handle_t *handle, const enet_config_t *config, const enet_buffer_config_t *bufferConfig)
DECL|ENET_SetMII|function|void ENET_SetMII(ENET_Type *base, enet_mii_speed_t speed, enet_mii_duplex_t duplex)
DECL|ENET_SetMacAddr|function|void ENET_SetMacAddr(ENET_Type *base, uint8_t *macAddr)
DECL|ENET_SetMacController|function|static void ENET_SetMacController(ENET_Type *base, enet_handle_t *handle, const enet_config_t *config, const enet_buffer_config_t *bufferConfig, uint8_t *macAddr,
DECL|ENET_SetRxBufferDescriptors|function|static void ENET_SetRxBufferDescriptors(enet_handle_t *handle, const enet_config_t *config, const enet_buffer_config_t *bufferConfig)
DECL|ENET_SetSMI|function|void ENET_SetSMI(ENET_Type *base, uint32_t srcClock_Hz, bool isPreambleDisabled)
DECL|ENET_SetTxBufferDescriptors|function|static void ENET_SetTxBufferDescriptors(enet_handle_t *handle, const enet_config_t *config, const enet_buffer_config_t *bufferConfig)
DECL|ENET_StartExtC45SMIRead|function|void ENET_StartExtC45SMIRead(ENET_Type *base, uint32_t phyAddr, uint32_t phyReg)
DECL|ENET_StartExtC45SMIWrite|function|void ENET_StartExtC45SMIWrite(ENET_Type *base, uint32_t phyAddr, uint32_t phyReg, uint32_t data)
DECL|ENET_StartSMIRead|function|void ENET_StartSMIRead(ENET_Type *base, uint32_t phyAddr, uint32_t phyReg, enet_mii_read_t operation)
DECL|ENET_StartSMIWrite|function|void ENET_StartSMIWrite(ENET_Type *base, uint32_t phyAddr, uint32_t phyReg, enet_mii_write_t operation, uint32_t data)
DECL|ENET_StoreRxFrameTime|function|static status_t ENET_StoreRxFrameTime(ENET_Type *base, enet_handle_t *handle, enet_ptp_time_data_t *ptpTimeData)
DECL|ENET_StoreTxFrameTime|function|static status_t ENET_StoreTxFrameTime(ENET_Type *base, enet_handle_t *handle, uint32_t ringId)
DECL|ENET_TransmitIRQHandler|function|void ENET_TransmitIRQHandler(ENET_Type *base, enet_handle_t *handle, uint32_t ringId)
DECL|ENET_Transmit_IRQHandler|function|void ENET_Transmit_IRQHandler(void)
DECL|ENET_UDPVERSION|macro|ENET_UDPVERSION
DECL|ENET_UpdateReadBuffers|function|static void ENET_UpdateReadBuffers(ENET_Type *base, enet_handle_t *handle, uint32_t ringId)
DECL|_enet_ring_number|enum|enum _enet_ring_number
DECL|enet_isr_ring_t|typedef|typedef void (*enet_isr_ring_t)(ENET_Type *base, enet_handle_t *handle, uint32_t ringId);
DECL|enet_isr_t|typedef|typedef void (*enet_isr_t)(ENET_Type *base, enet_handle_t *handle);
DECL|kENET_Ring0|enumerator|kENET_Ring0 = 0U, /*!< ENET ring/class 0. */
DECL|kENET_Ring1|enumerator|kENET_Ring1 = 1U, /*!< ENET ring/class 1. */
DECL|kENET_Ring2|enumerator|kENET_Ring2 = 2U /*!< ENET ring/class 2. */
DECL|s_ENETHandle|variable|s_ENETHandle
DECL|s_enetBases|variable|s_enetBases
DECL|s_enetClock|variable|s_enetClock
DECL|s_enetErrIrqId|variable|s_enetErrIrqId
DECL|s_enetErrIsr|variable|s_enetErrIsr
DECL|s_enetRxIrqId|variable|s_enetRxIrqId
DECL|s_enetRxIsr|variable|s_enetRxIsr
DECL|s_enetRxIsr|variable|s_enetRxIsr
DECL|s_enetTsIrqId|variable|s_enetTsIrqId
DECL|s_enetTsIsr|variable|s_enetTsIsr
DECL|s_enetTxIrqId|variable|s_enetTxIrqId
DECL|s_enetTxIsr|variable|s_enetTxIsr
DECL|s_enetTxIsr|variable|s_enetTxIsr
