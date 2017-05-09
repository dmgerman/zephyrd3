DECL|ALPHA_CALC_RECIP_def_c|macro|ALPHA_CALC_RECIP_def_c
DECL|ASSERT|macro|ASSERT
DECL|FIRST_INIT|enumerator|FIRST_INIT = 0,
DECL|HWDCoffsetCal|variable|HWDCoffsetCal
DECL|INCLUDE_OLD_DRV_CODE|macro|INCLUDE_OLD_DRV_CODE
DECL|MODE_CHANGE|enumerator|MODE_CHANGE = 1
DECL|MODE_CHG_SEL_T|typedef|} MODE_CHG_SEL_T;
DECL|NUM_TRIM_TBL_ENTRIES|macro|NUM_TRIM_TBL_ENTRIES
DECL|TMP_CALC_RECIP_def_c|macro|TMP_CALC_RECIP_def_c
DECL|XcvrCalcSetupDcoc|function|xcvrStatus_t XcvrCalcSetupDcoc ( void )
DECL|XcvrChangeMode|function|xcvrStatus_t XcvrChangeMode ( radio_mode_t radioMode )
DECL|XcvrDelay|function|void XcvrDelay(volatile uint32_t time){
DECL|XcvrEnaNBRSSIMeas|function|void XcvrEnaNBRSSIMeas( bool_t IIRnbEnable )
DECL|XcvrFadLppsControl|function|void XcvrFadLppsControl(FAD_LPPS_CTRL_T control)
DECL|XcvrForceRxWd|function|void XcvrForceRxWd ( void )
DECL|XcvrForceRxWu|function|void XcvrForceRxWu ( void )
DECL|XcvrForceTxWd|function|void XcvrForceTxWd ( void )
DECL|XcvrForceTxWu|function|void XcvrForceTxWu ( void )
DECL|XcvrGetFreq|function|uint32_t XcvrGetFreq ( void )
DECL|XcvrGetXtalTrim|function|int8_t XcvrGetXtalTrim(void)
DECL|XcvrHealthCheck|function|healthStatus_t XcvrHealthCheck ( void )
DECL|XcvrIQMCal|function|void XcvrIQMCal ( void )
DECL|XcvrInit_ModeChg_Common|function|void XcvrInit_ModeChg_Common ( radio_mode_t radioMode, MODE_CHG_SEL_T mode_change )
DECL|XcvrInit|function|void XcvrInit ( radio_mode_t radioMode )
DECL|XcvrManualDCOCCal|function|void XcvrManualDCOCCal (uint8_t chnum)
DECL|XcvrOverrideChannel|function|xcvrStatus_t XcvrOverrideChannel ( uint8_t channel, uint8_t useMappedChannel )
DECL|XcvrOverrideFrequency|function|xcvrStatus_t XcvrOverrideFrequency ( uint32_t freq , uint32_t refOsc)
DECL|XcvrPanic|function|void XcvrPanic (uint32_t panic_id, uint32_t location)
DECL|XcvrRegisterPanicCb|function|void XcvrRegisterPanicCb ( panic_fptr fptr )
DECL|XcvrSetAnalogDef_ModeSwitch|function|void XcvrSetAnalogDef_ModeSwitch ( radio_mode_t radioMode )
DECL|XcvrSetAnalogDefaults|function|void XcvrSetAnalogDefaults ( radio_mode_t radioMode )
DECL|XcvrSetGain|function|xcvrStatus_t XcvrSetGain ( uint8_t entry )
DECL|XcvrSetRxDigDef_ModeSwitch|function|void XcvrSetRxDigDef_ModeSwitch ( const uint8_t * in_filt_coeff_ptr, uint8_t iir3a_idx, uint8_t iir2a_idx, uint8_t iir1a_idx, uint8_t rssi_hold_src )
DECL|XcvrSetRxDigDefaults|function|void XcvrSetRxDigDefaults ( const uint8_t * filt_coeff_ptr, uint8_t iir3a_idx, uint8_t iir2a_idx, uint8_t iir1a_idx, uint8_t rssi_hold_src )
DECL|XcvrSetTsmDef_ModeSwitch|function|void XcvrSetTsmDef_ModeSwitch ( radio_mode_t radioMode )
DECL|XcvrSetTsmDefaults|function|void XcvrSetTsmDefaults ( radio_mode_t radioMode )
DECL|XcvrSetTxDigPLLDef_ModeSwitch|function|void XcvrSetTxDigPLLDef_ModeSwitch( radio_mode_t radioMode )
DECL|XcvrSetTxDigPLLDefaults|function|void XcvrSetTxDigPLLDefaults( radio_mode_t radioMode )
DECL|XcvrSetXtalTrim|function|xcvrStatus_t XcvrSetXtalTrim(int8_t xtalTrim)
DECL|XcvrTxTest|function|void XcvrTxTest ( void )
DECL|adc_gain_trimmed|variable|adc_gain_trimmed
DECL|ble_bbf_cap_tune|variable|ble_bbf_cap_tune
DECL|ble_bbf_res_tune2|variable|ble_bbf_res_tune2
DECL|ble_tza_cap_tune|variable|ble_tza_cap_tune
DECL|gBLERxChfCoeff|variable|gBLERxChfCoeff
DECL|gPABiasTbl|variable|gPABiasTbl
DECL|gZigbeeRxChfCoeff|variable|gZigbeeRxChfCoeff
DECL|gen1_dcgain_trims_enabled|variable|gen1_dcgain_trims_enabled
DECL|ifr_version|variable|ifr_version
DECL|mapTable|variable|mapTable
DECL|panic_fptr_is_valid|variable|panic_fptr_is_valid
DECL|panic_function_ptr|variable|panic_function_ptr
DECL|trim_status|variable|trim_status
DECL|wait|macro|wait
DECL|zb_bbf_cap_tune|variable|zb_bbf_cap_tune
DECL|zb_bbf_res_tune2|variable|zb_bbf_res_tune2
DECL|zb_tza_cap_tune|variable|zb_tza_cap_tune
