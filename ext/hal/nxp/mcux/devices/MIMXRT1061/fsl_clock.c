DECL|CLOCK_DeinitArmPll|function|void CLOCK_DeinitArmPll(void)
DECL|CLOCK_DeinitAudioPll|function|void CLOCK_DeinitAudioPll(void)
DECL|CLOCK_DeinitEnetPll|function|void CLOCK_DeinitEnetPll(void)
DECL|CLOCK_DeinitExternalClk|function|void CLOCK_DeinitExternalClk(void)
DECL|CLOCK_DeinitRcOsc24M|function|void CLOCK_DeinitRcOsc24M(void)
DECL|CLOCK_DeinitSysPfd|function|void CLOCK_DeinitSysPfd(clock_pfd_t pfd)
DECL|CLOCK_DeinitSysPll|function|void CLOCK_DeinitSysPll(void)
DECL|CLOCK_DeinitUsb1Pfd|function|void CLOCK_DeinitUsb1Pfd(clock_pfd_t pfd)
DECL|CLOCK_DeinitUsb1Pll|function|void CLOCK_DeinitUsb1Pll(void)
DECL|CLOCK_DeinitUsb2Pll|function|void CLOCK_DeinitUsb2Pll(void)
DECL|CLOCK_DeinitVideoPll|function|void CLOCK_DeinitVideoPll(void)
DECL|CLOCK_DisableUsbhs0PhyPllClock|function|void CLOCK_DisableUsbhs0PhyPllClock(void)
DECL|CLOCK_DisableUsbhs1PhyPllClock|function|void CLOCK_DisableUsbhs1PhyPllClock(void)
DECL|CLOCK_EnableUsbhs0Clock|function|bool CLOCK_EnableUsbhs0Clock(clock_usb_src_t src, uint32_t freq)
DECL|CLOCK_EnableUsbhs0PhyPllClock|function|bool CLOCK_EnableUsbhs0PhyPllClock(clock_usb_phy_src_t src, uint32_t freq)
DECL|CLOCK_EnableUsbhs1Clock|function|bool CLOCK_EnableUsbhs1Clock(clock_usb_src_t src, uint32_t freq)
DECL|CLOCK_EnableUsbhs1PhyPllClock|function|bool CLOCK_EnableUsbhs1PhyPllClock(clock_usb_phy_src_t src, uint32_t freq)
DECL|CLOCK_GetAhbFreq|function|uint32_t CLOCK_GetAhbFreq(void)
DECL|CLOCK_GetFreq|function|uint32_t CLOCK_GetFreq(clock_name_t name)
DECL|CLOCK_GetIpgFreq|function|uint32_t CLOCK_GetIpgFreq(void)
DECL|CLOCK_GetPerClkFreq|function|uint32_t CLOCK_GetPerClkFreq(void)
DECL|CLOCK_GetPeriphClkFreq|function|static uint32_t CLOCK_GetPeriphClkFreq(void)
DECL|CLOCK_GetPllFreq|function|uint32_t CLOCK_GetPllFreq(clock_pll_t pll)
DECL|CLOCK_GetSemcFreq|function|uint32_t CLOCK_GetSemcFreq(void)
DECL|CLOCK_GetSysPfdFreq|function|uint32_t CLOCK_GetSysPfdFreq(clock_pfd_t pfd)
DECL|CLOCK_GetUsb1PfdFreq|function|uint32_t CLOCK_GetUsb1PfdFreq(clock_pfd_t pfd)
DECL|CLOCK_InitArmPll|function|void CLOCK_InitArmPll(const clock_arm_pll_config_t *config)
DECL|CLOCK_InitAudioPll|function|void CLOCK_InitAudioPll(const clock_audio_pll_config_t *config)
DECL|CLOCK_InitEnetPll|function|void CLOCK_InitEnetPll(const clock_enet_pll_config_t *config)
DECL|CLOCK_InitExternalClk|function|void CLOCK_InitExternalClk(bool bypassXtalOsc)
DECL|CLOCK_InitRcOsc24M|function|void CLOCK_InitRcOsc24M(void)
DECL|CLOCK_InitSysPfd|function|void CLOCK_InitSysPfd(clock_pfd_t pfd, uint8_t pfdFrac)
DECL|CLOCK_InitSysPll|function|void CLOCK_InitSysPll(const clock_sys_pll_config_t *config)
DECL|CLOCK_InitUsb1Pfd|function|void CLOCK_InitUsb1Pfd(clock_pfd_t pfd, uint8_t pfdFrac)
DECL|CLOCK_InitUsb1Pll|function|void CLOCK_InitUsb1Pll(const clock_usb_pll_config_t *config)
DECL|CLOCK_InitUsb2Pll|function|void CLOCK_InitUsb2Pll(const clock_usb_pll_config_t *config)
DECL|CLOCK_InitVideoPll|function|void CLOCK_InitVideoPll(const clock_video_pll_config_t *config)
DECL|CLOCK_SwitchOsc|function|void CLOCK_SwitchOsc(clock_osc_t osc)
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|clock_64b_t|typedef|typedef double clock_64b_t;
DECL|clock_64b_t|typedef|typedef double clock_64b_t;
DECL|clock_64b_t|typedef|typedef uint64_t clock_64b_t;
DECL|clock_64b_t|typedef|typedef uint64_t clock_64b_t;
DECL|clock_64b_t|typedef|typedef uint64_t clock_64b_t;
DECL|clock_64b_t|typedef|typedef uint64_t clock_64b_t;
DECL|g_rtcXtalFreq|variable|g_rtcXtalFreq
DECL|g_xtalFreq|variable|g_xtalFreq
