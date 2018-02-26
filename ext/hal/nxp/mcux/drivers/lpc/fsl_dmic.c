DECL|DMIC0_DriverIRQHandler|function|void DMIC0_DriverIRQHandler(void)
DECL|DMIC_CfgChannelDc|function|void DMIC_CfgChannelDc(DMIC_Type *base, dmic_channel_t channel, dc_removal_t dc_cut_level, uint32_t post_dc_gain_reduce, bool saturate16bit)
DECL|DMIC_ConfigChannel|function|void DMIC_ConfigChannel(DMIC_Type *base, dmic_channel_t channel, stereo_side_t side, dmic_channel_config_t *channel_config)
DECL|DMIC_ConfigIO|function|void DMIC_ConfigIO(DMIC_Type *base, dmic_io_t config)
DECL|DMIC_DeInit|function|void DMIC_DeInit(DMIC_Type *base)
DECL|DMIC_DisableIntCallback|function|void DMIC_DisableIntCallback(DMIC_Type *base, dmic_callback_t cb)
DECL|DMIC_EnableChannnel|function|void DMIC_EnableChannnel(DMIC_Type *base, uint32_t channelmask)
DECL|DMIC_EnableIntCallback|function|void DMIC_EnableIntCallback(DMIC_Type *base, dmic_callback_t cb)
DECL|DMIC_FifoChannel|function|void DMIC_FifoChannel(DMIC_Type *base, uint32_t channel, uint32_t trig_level, uint32_t enable, uint32_t resetn)
DECL|DMIC_GetInstance|function|uint32_t DMIC_GetInstance(DMIC_Type *base)
DECL|DMIC_HwvadDisableIntCallback|function|void DMIC_HwvadDisableIntCallback(DMIC_Type *base, dmic_hwvad_callback_t vadcb)
DECL|DMIC_HwvadEnableIntCallback|function|void DMIC_HwvadEnableIntCallback(DMIC_Type *base, dmic_hwvad_callback_t vadcb)
DECL|DMIC_Init|function|void DMIC_Init(DMIC_Type *base)
DECL|DMIC_SetOperationMode|function|void DMIC_SetOperationMode(DMIC_Type *base, operation_mode_t mode)
DECL|DMIC_Use2fs|function|void DMIC_Use2fs(DMIC_Type *base, bool use2fs)
DECL|HWVAD0_IRQHandler|function|void HWVAD0_IRQHandler(void)
DECL|s_dmicBases|variable|s_dmicBases
DECL|s_dmicCallback|variable|s_dmicCallback
DECL|s_dmicClock|variable|s_dmicClock
DECL|s_dmicHwvadCallback|variable|s_dmicHwvadCallback
DECL|s_dmicHwvadIRQ|variable|s_dmicHwvadIRQ
DECL|s_dmicIRQ|variable|s_dmicIRQ
