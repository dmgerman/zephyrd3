DECL|ABS|macro|ABS
DECL|ANT_A|macro|ANT_A
DECL|ANT_B|macro|ANT_B
DECL|EXTERNAL_CLOCK_GEN|macro|EXTERNAL_CLOCK_GEN
DECL|FALSE|macro|FALSE
DECL|TRUE|macro|TRUE
DECL|XCVR_COEX_RF_ACTIVE_PIN|macro|XCVR_COEX_RF_ACTIVE_PIN
DECL|XCVR_ChangeMode|function|xcvrStatus_t XCVR_ChangeMode (radio_mode_t new_radio_mode, data_rate_t new_data_rate) /* Change from one radio mode to another */
DECL|XCVR_CoexistenceInit|function|xcvrStatus_t XCVR_CoexistenceInit(void)
DECL|XCVR_CoexistenceSetPriority|function|xcvrStatus_t XCVR_CoexistenceSetPriority(XCVR_COEX_PRIORITY_T rxPriority, XCVR_COEX_PRIORITY_T txPriority)
DECL|XCVR_Configure|function|xcvrStatus_t XCVR_Configure( const xcvr_common_config_t *com_config, const xcvr_mode_config_t *mode_config, const xcvr_mode_datarate_config_t *mode_datarate_config, const xcvr_datarate_config_t *datarate_config, int16_t tempDegC, XCVR_INIT_MODE_CHG_T first_init)
DECL|XCVR_Deinit|function|void XCVR_Deinit(void)
DECL|XCVR_DftTxCW|function|xcvrStatus_t XCVR_DftTxCW(uint16_t rf_channel_freq, uint8_t protocol)
DECL|XCVR_DftTxLfsrReg|function|xcvrStatus_t XCVR_DftTxLfsrReg(uint16_t channel_num, radio_mode_t radio_mode, data_rate_t data_rate, uint8_t lfsr_length)
DECL|XCVR_DftTxOff|function|void XCVR_DftTxOff(void)
DECL|XCVR_DftTxPatternReg|function|xcvrStatus_t XCVR_DftTxPatternReg(uint16_t channel_num, radio_mode_t radio_mode, data_rate_t data_rate, uint32_t tx_pattern)
DECL|XCVR_EnaNBRSSIMeas|function|void XCVR_EnaNBRSSIMeas( uint8_t IIRnbEnable )
DECL|XCVR_FadLppsControl|function|void XCVR_FadLppsControl(FAD_LPPS_CTRL_T control)
DECL|XCVR_ForcePAPower|function|xcvrStatus_t XCVR_ForcePAPower(uint8_t pa_power)
DECL|XCVR_ForceRxWd|function|void XCVR_ForceRxWd ( void )
DECL|XCVR_ForceRxWu|function|void XCVR_ForceRxWu ( void )
DECL|XCVR_ForceTxWd|function|void XCVR_ForceTxWd ( void )
DECL|XCVR_ForceTxWu|function|void XCVR_ForceTxWu ( void )
DECL|XCVR_GetCurrentConfig|function|xcvrStatus_t XCVR_GetCurrentConfig(xcvr_currConfig_t * curr_config)
DECL|XCVR_GetDefaultConfig|function|xcvrStatus_t XCVR_GetDefaultConfig(radio_mode_t radio_mode, data_rate_t data_rate, const xcvr_common_config_t ** com_config, const xcvr_mode_config_t ** mode_config, const xcvr_mode_datarate_config_t ** mode_datarate_config, const xcvr_datarate_config_t ** datarate_config)
DECL|XCVR_GetFreq|function|uint32_t XCVR_GetFreq ( void )
DECL|XCVR_GetIRQMapping|function|link_layer_t XCVR_GetIRQMapping(uint8_t int_num)
DECL|XCVR_GetRssiAdjustment|function|int8_t XCVR_GetRssiAdjustment(void)
DECL|XCVR_GetXtalTrim|function|uint8_t XCVR_GetXtalTrim(void)
DECL|XCVR_HealthCheck|function|healthStatus_t XCVR_HealthCheck ( void ) /* Allow upper layers to poll the radio health */
DECL|XCVR_Init|function|xcvrStatus_t XCVR_Init(radio_mode_t radio_mode, data_rate_t data_rate)
DECL|XCVR_OverrideChannel|function|xcvrStatus_t XCVR_OverrideChannel ( uint8_t channel, uint8_t useMappedChannel )
DECL|XCVR_OverrideFrequency|function|xcvrStatus_t XCVR_OverrideFrequency ( uint32_t freq, uint32_t refOsc )
DECL|XCVR_RegisterPanicCb|function|void XCVR_RegisterPanicCb ( panic_fptr fptr ) /* Allow upper layers to provide PANIC callback */
DECL|XCVR_Reset|function|void XCVR_Reset(void)
DECL|XCVR_SetIRQMapping|function|xcvrStatus_t XCVR_SetIRQMapping(radio_mode_t irq0_mapping, radio_mode_t irq1_mapping)
DECL|XCVR_SetRssiAdjustment|function|xcvrStatus_t XCVR_SetRssiAdjustment(int8_t adj)
DECL|XCVR_SetXtalTrim|function|xcvrStatus_t XCVR_SetXtalTrim(uint8_t xtalTrim)
DECL|XcvrPanic|function|void XcvrPanic(XCVR_PANIC_ID_T panic_id, uint32_t panic_address)
DECL|channelMapTableSize|macro|channelMapTableSize
DECL|current_xcvr_config|variable|current_xcvr_config
DECL|gPllDenom_c|macro|gPllDenom_c
DECL|integer|member|unsigned int integer;
DECL|mapTable|variable|mapTable
DECL|map_mode_to_ll|function|link_layer_t map_mode_to_ll(radio_mode_t mode)
DECL|mode_configs_dr_1mbps|variable|mode_configs_dr_1mbps
DECL|mode_configs_dr_250kbps|variable|mode_configs_dr_250kbps
DECL|mode_configs_dr_500kbps|variable|mode_configs_dr_500kbps
DECL|numerator|member|unsigned int numerator;
DECL|s_PanicFunctionPtr|variable|s_PanicFunctionPtr
DECL|tx_rx_on_delay|variable|tx_rx_on_delay
DECL|tx_rx_on_delay|variable|tx_rx_on_delay
DECL|tx_rx_synth_delay|variable|tx_rx_synth_delay
DECL|xcvr_pllChannel_tag|struct|typedef struct xcvr_pllChannel_tag
DECL|xcvr_pllChannel_t|typedef|} xcvr_pllChannel_t;
