DECL|FLEXIO0_DriverIRQHandler|function|void FLEXIO0_DriverIRQHandler(void)
DECL|FLEXIO1_DriverIRQHandler|function|void FLEXIO1_DriverIRQHandler(void)
DECL|FLEXIO2_DriverIRQHandler|function|void FLEXIO2_DriverIRQHandler(void)
DECL|FLEXIO3_DriverIRQHandler|function|void FLEXIO3_DriverIRQHandler(void)
DECL|FLEXIO_CommonIRQHandler|function|void FLEXIO_CommonIRQHandler(void)
DECL|FLEXIO_Deinit|function|void FLEXIO_Deinit(FLEXIO_Type *base)
DECL|FLEXIO_DriverIRQHandler|function|void FLEXIO_DriverIRQHandler(void)
DECL|FLEXIO_GetDefaultConfig|function|void FLEXIO_GetDefaultConfig(flexio_config_t *userConfig)
DECL|FLEXIO_GetInstance|function|uint32_t FLEXIO_GetInstance(FLEXIO_Type *base)
DECL|FLEXIO_GetShifterBufferAddress|function|uint32_t FLEXIO_GetShifterBufferAddress(FLEXIO_Type *base, flexio_shifter_buffer_type_t type, uint8_t index)
DECL|FLEXIO_HANDLE_COUNT|macro|FLEXIO_HANDLE_COUNT
DECL|FLEXIO_Init|function|void FLEXIO_Init(FLEXIO_Type *base, const flexio_config_t *userConfig)
DECL|FLEXIO_RegisterHandleIRQ|function|status_t FLEXIO_RegisterHandleIRQ(void *base, void *handle, flexio_isr_t isr)
DECL|FLEXIO_Reset|function|void FLEXIO_Reset(FLEXIO_Type *base)
DECL|FLEXIO_SetShifterConfig|function|void FLEXIO_SetShifterConfig(FLEXIO_Type *base, uint8_t index, const flexio_shifter_config_t *shifterConfig)
DECL|FLEXIO_SetTimerConfig|function|void FLEXIO_SetTimerConfig(FLEXIO_Type *base, uint8_t index, const flexio_timer_config_t *timerConfig)
DECL|FLEXIO_UnregisterHandleIRQ|function|status_t FLEXIO_UnregisterHandleIRQ(void *base)
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|UART2_FLEXIO_DriverIRQHandler|function|void UART2_FLEXIO_DriverIRQHandler(void)
DECL|s_flexioBases|variable|s_flexioBases
DECL|s_flexioClocks|variable|s_flexioClocks
DECL|s_flexioHandle|variable|s_flexioHandle
DECL|s_flexioIsr|variable|s_flexioIsr
DECL|s_flexioType|variable|s_flexioType
