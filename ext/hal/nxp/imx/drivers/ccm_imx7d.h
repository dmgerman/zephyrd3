DECL|CCM_ControlGate|function|static inline void CCM_ControlGate(CCM_Type * base, uint32_t ccmGate, uint32_t control)
DECL|CCM_DisableRoot|function|static inline void CCM_DisableRoot(CCM_Type * base, uint32_t ccmRoot)
DECL|CCM_EnableRoot|function|static inline void CCM_EnableRoot(CCM_Type * base, uint32_t ccmRoot)
DECL|CCM_GetRootMux|function|static inline uint32_t CCM_GetRootMux(CCM_Type * base, uint32_t ccmRoot)
DECL|CCM_IsRootEnabled|function|static inline bool CCM_IsRootEnabled(CCM_Type * base, uint32_t ccmRoot)
DECL|CCM_REG_CLR|macro|CCM_REG_CLR
DECL|CCM_REG_OFF|macro|CCM_REG_OFF
DECL|CCM_REG_SET|macro|CCM_REG_SET
DECL|CCM_REG|macro|CCM_REG
DECL|CCM_SetRootMux|function|static inline void CCM_SetRootMux(CCM_Type * base, uint32_t ccmRoot, uint32_t mux)
DECL|__CCM_IMX7D_H__|macro|__CCM_IMX7D_H__
DECL|_ccm_ccgr_gate|enum|enum _ccm_ccgr_gate
DECL|_ccm_gate_value|enum|enum _ccm_gate_value
DECL|_ccm_pll_gate|enum|enum _ccm_pll_gate
DECL|_ccm_root_control|enum|enum _ccm_root_control
DECL|_ccm_rootmux_ahb|enum|enum _ccm_rootmux_ahb
DECL|_ccm_rootmux_axi|enum|enum _ccm_rootmux_axi
DECL|_ccm_rootmux_can|enum|enum _ccm_rootmux_can
DECL|_ccm_rootmux_ecspi|enum|enum _ccm_rootmux_ecspi
DECL|_ccm_rootmux_ftm|enum|enum _ccm_rootmux_ftm
DECL|_ccm_rootmux_gpt|enum|enum _ccm_rootmux_gpt
DECL|_ccm_rootmux_i2c|enum|enum _ccm_rootmux_i2c
DECL|_ccm_rootmux_ipg|enum|enum _ccm_rootmux_ipg
DECL|_ccm_rootmux_m4|enum|enum _ccm_rootmux_m4
DECL|_ccm_rootmux_qspi|enum|enum _ccm_rootmux_qspi
DECL|_ccm_rootmux_uart|enum|enum _ccm_rootmux_uart
DECL|_ccm_rootmux_wdog|enum|enum _ccm_rootmux_wdog
DECL|ccmCcgrGateAdc|enumerator|ccmCcgrGateAdc = (uint32_t)(&CCM_CCGR32), /*!< ADC Clock Gate.*/
DECL|ccmCcgrGateCan1|enumerator|ccmCcgrGateCan1 = (uint32_t)(&CCM_CCGR116), /*!< CAN1 Clock Gate.*/
DECL|ccmCcgrGateCan2|enumerator|ccmCcgrGateCan2 = (uint32_t)(&CCM_CCGR117), /*!< CAN2 Clock Gate.*/
DECL|ccmCcgrGateEcspi1|enumerator|ccmCcgrGateEcspi1 = (uint32_t)(&CCM_CCGR120), /*!< ECSPI1 Clock Gate.*/
DECL|ccmCcgrGateEcspi2|enumerator|ccmCcgrGateEcspi2 = (uint32_t)(&CCM_CCGR121), /*!< ECSPI2 Clock Gate.*/
DECL|ccmCcgrGateEcspi3|enumerator|ccmCcgrGateEcspi3 = (uint32_t)(&CCM_CCGR122), /*!< ECSPI3 Clock Gate.*/
DECL|ccmCcgrGateEcspi4|enumerator|ccmCcgrGateEcspi4 = (uint32_t)(&CCM_CCGR123), /*!< ECSPI4 Clock Gate.*/
DECL|ccmCcgrGateGpio1|enumerator|ccmCcgrGateGpio1 = (uint32_t)(&CCM_CCGR160), /*!< GPIO1 Clock Gate.*/
DECL|ccmCcgrGateGpio2|enumerator|ccmCcgrGateGpio2 = (uint32_t)(&CCM_CCGR161), /*!< GPIO2 Clock Gate.*/
DECL|ccmCcgrGateGpio3|enumerator|ccmCcgrGateGpio3 = (uint32_t)(&CCM_CCGR162), /*!< GPIO3 Clock Gate.*/
DECL|ccmCcgrGateGpio4|enumerator|ccmCcgrGateGpio4 = (uint32_t)(&CCM_CCGR163), /*!< GPIO4 Clock Gate.*/
DECL|ccmCcgrGateGpio5|enumerator|ccmCcgrGateGpio5 = (uint32_t)(&CCM_CCGR164), /*!< GPIO5 Clock Gate.*/
DECL|ccmCcgrGateGpio6|enumerator|ccmCcgrGateGpio6 = (uint32_t)(&CCM_CCGR165), /*!< GPIO6 Clock Gate.*/
DECL|ccmCcgrGateGpio7|enumerator|ccmCcgrGateGpio7 = (uint32_t)(&CCM_CCGR166), /*!< GPIO7 Clock Gate.*/
DECL|ccmCcgrGateGpt1|enumerator|ccmCcgrGateGpt1 = (uint32_t)(&CCM_CCGR124), /*!< GPT1 Clock Gate.*/
DECL|ccmCcgrGateGpt2|enumerator|ccmCcgrGateGpt2 = (uint32_t)(&CCM_CCGR125), /*!< GPT2 Clock Gate.*/
DECL|ccmCcgrGateGpt3|enumerator|ccmCcgrGateGpt3 = (uint32_t)(&CCM_CCGR126), /*!< GPT3 Clock Gate.*/
DECL|ccmCcgrGateGpt4|enumerator|ccmCcgrGateGpt4 = (uint32_t)(&CCM_CCGR127), /*!< GPT4 Clock Gate.*/
DECL|ccmCcgrGateI2c1|enumerator|ccmCcgrGateI2c1 = (uint32_t)(&CCM_CCGR136), /*!< I2C1 Clock Gate.*/
DECL|ccmCcgrGateI2c2|enumerator|ccmCcgrGateI2c2 = (uint32_t)(&CCM_CCGR137), /*!< I2C2 Clock Gate.*/
DECL|ccmCcgrGateI2c3|enumerator|ccmCcgrGateI2c3 = (uint32_t)(&CCM_CCGR138), /*!< I2C3 Clock Gate.*/
DECL|ccmCcgrGateI2c4|enumerator|ccmCcgrGateI2c4 = (uint32_t)(&CCM_CCGR139), /*!< I2C4 Clock Gate.*/
DECL|ccmCcgrGateIomuxLpsr|enumerator|ccmCcgrGateIomuxLpsr = (uint32_t)(&CCM_CCGR169), /*!< IOMUX LPSR Clock Gate.*/
DECL|ccmCcgrGateIomux|enumerator|ccmCcgrGateIomux = (uint32_t)(&CCM_CCGR168), /*!< IOMUX Clock Gate.*/
DECL|ccmCcgrGateIpmux1|enumerator|ccmCcgrGateIpmux1 = (uint32_t)(&CCM_CCGR10), /*!< IOMUX1 Clock Gate.*/
DECL|ccmCcgrGateIpmux2|enumerator|ccmCcgrGateIpmux2 = (uint32_t)(&CCM_CCGR11), /*!< IOMUX2 Clock Gate.*/
DECL|ccmCcgrGateIpmux3|enumerator|ccmCcgrGateIpmux3 = (uint32_t)(&CCM_CCGR12), /*!< IPMUX3 Clock Gate.*/
DECL|ccmCcgrGateMu|enumerator|ccmCcgrGateMu = (uint32_t)(&CCM_CCGR39), /*!< MU Clock Gate.*/
DECL|ccmCcgrGateOcramS|enumerator|ccmCcgrGateOcramS = (uint32_t)(&CCM_CCGR18), /*!< OCRAM S Clock Gate.*/
DECL|ccmCcgrGateOcram|enumerator|ccmCcgrGateOcram = (uint32_t)(&CCM_CCGR17), /*!< OCRAM Clock Gate.*/
DECL|ccmCcgrGateQspi|enumerator|ccmCcgrGateQspi = (uint32_t)(&CCM_CCGR21), /*!< QSPI Clock Gate.*/
DECL|ccmCcgrGateRdc|enumerator|ccmCcgrGateRdc = (uint32_t)(&CCM_CCGR38), /*!< RDC Clock Gate.*/
DECL|ccmCcgrGateSema1|enumerator|ccmCcgrGateSema1 = (uint32_t)(&CCM_CCGR64), /*!< SEMA1 Clock Gate.*/
DECL|ccmCcgrGateSema2|enumerator|ccmCcgrGateSema2 = (uint32_t)(&CCM_CCGR65), /*!< SEMA2 Clock Gate.*/
DECL|ccmCcgrGateSemaHs|enumerator|ccmCcgrGateSemaHs = (uint32_t)(&CCM_CCGR40), /*!< SEMA HS Clock Gate.*/
DECL|ccmCcgrGateSimWakeup|enumerator|ccmCcgrGateSimWakeup = (uint32_t)(&CCM_CCGR9), /*!< Wakeup Mix Bus Clock Gate.*/
DECL|ccmCcgrGateUart1|enumerator|ccmCcgrGateUart1 = (uint32_t)(&CCM_CCGR148), /*!< UART1 Clock Gate.*/
DECL|ccmCcgrGateUart2|enumerator|ccmCcgrGateUart2 = (uint32_t)(&CCM_CCGR149), /*!< UART2 Clock Gate.*/
DECL|ccmCcgrGateUart3|enumerator|ccmCcgrGateUart3 = (uint32_t)(&CCM_CCGR150), /*!< UART3 Clock Gate.*/
DECL|ccmCcgrGateUart4|enumerator|ccmCcgrGateUart4 = (uint32_t)(&CCM_CCGR151), /*!< UART4 Clock Gate.*/
DECL|ccmCcgrGateUart5|enumerator|ccmCcgrGateUart5 = (uint32_t)(&CCM_CCGR152), /*!< UART5 Clock Gate.*/
DECL|ccmCcgrGateUart6|enumerator|ccmCcgrGateUart6 = (uint32_t)(&CCM_CCGR153), /*!< UART6 Clock Gate.*/
DECL|ccmCcgrGateUart7|enumerator|ccmCcgrGateUart7 = (uint32_t)(&CCM_CCGR154), /*!< UART7 Clock Gate.*/
DECL|ccmCcgrGateWdog1|enumerator|ccmCcgrGateWdog1 = (uint32_t)(&CCM_CCGR156), /*!< WDOG1 Clock Gate.*/
DECL|ccmCcgrGateWdog2|enumerator|ccmCcgrGateWdog2 = (uint32_t)(&CCM_CCGR157), /*!< WDOG2 Clock Gate.*/
DECL|ccmCcgrGateWdog3|enumerator|ccmCcgrGateWdog3 = (uint32_t)(&CCM_CCGR158), /*!< WDOG3 Clock Gate.*/
DECL|ccmCcgrGateWdog4|enumerator|ccmCcgrGateWdog4 = (uint32_t)(&CCM_CCGR159), /*!< WDOG4 Clock Gate.*/
DECL|ccmClockNeededAll|enumerator|ccmClockNeededAll = 0x3333U, /*!< Clock always enabled.*/
DECL|ccmClockNeededRunWait|enumerator|ccmClockNeededRunWait = 0x2222U, /*!< Clock enabled when CPU is running or in WAIT mode.*/
DECL|ccmClockNeededRun|enumerator|ccmClockNeededRun = 0x1111U, /*!< Clock enabled when CPU is running.*/
DECL|ccmClockNotNeeded|enumerator|ccmClockNotNeeded = 0x0U, /*!< Clock always disabled.*/
DECL|ccmPllGateArmDiv1|enumerator|ccmPllGateArmDiv1 = (uint32_t)(&CCM_PLL_CTRL2), /*!< ARM PLL Div1 Gate.*/
DECL|ccmPllGateArm|enumerator|ccmPllGateArm = (uint32_t)(&CCM_PLL_CTRL1), /*!< ARM PLL Gate.*/
DECL|ccmPllGateAudioDiv1|enumerator|ccmPllGateAudioDiv1 = (uint32_t)(&CCM_PLL_CTRL30), /*!< AUDIO PLL Div1 Gate.*/
DECL|ccmPllGateAudio|enumerator|ccmPllGateAudio = (uint32_t)(&CCM_PLL_CTRL29), /*!< AUDIO PLL Gate.*/
DECL|ccmPllGateCkil|enumerator|ccmPllGateCkil = (uint32_t)(&CCM_PLL_CTRL0), /*!< Ckil PLL Gate.*/
DECL|ccmPllGateDdrDiv1|enumerator|ccmPllGateDdrDiv1 = (uint32_t)(&CCM_PLL_CTRL4), /*!< DDR PLL Div1 Gate.*/
DECL|ccmPllGateDdrDiv2|enumerator|ccmPllGateDdrDiv2 = (uint32_t)(&CCM_PLL_CTRL5), /*!< DDR PLL Div2 Gate.*/
DECL|ccmPllGateDdr|enumerator|ccmPllGateDdr = (uint32_t)(&CCM_PLL_CTRL3), /*!< DDR PLL Gate.*/
DECL|ccmPllGateEnet100m|enumerator|ccmPllGateEnet100m = (uint32_t)(&CCM_PLL_CTRL25), /*!< Ethernet 100M PLL Gate.*/
DECL|ccmPllGateEnet125m|enumerator|ccmPllGateEnet125m = (uint32_t)(&CCM_PLL_CTRL24), /*!< Ethernet 125M PLL Gate.*/
DECL|ccmPllGateEnet250m|enumerator|ccmPllGateEnet250m = (uint32_t)(&CCM_PLL_CTRL23), /*!< Ethernet 250M PLL Gate.*/
DECL|ccmPllGateEnet25m|enumerator|ccmPllGateEnet25m = (uint32_t)(&CCM_PLL_CTRL28), /*!< Ethernet 25M PLL Gate.*/
DECL|ccmPllGateEnet40m|enumerator|ccmPllGateEnet40m = (uint32_t)(&CCM_PLL_CTRL27), /*!< Ethernet 40M PLL Gate.*/
DECL|ccmPllGateEnet500m|enumerator|ccmPllGateEnet500m = (uint32_t)(&CCM_PLL_CTRL22), /*!< Ethernet 500M PLL Gate.*/
DECL|ccmPllGateEnet50m|enumerator|ccmPllGateEnet50m = (uint32_t)(&CCM_PLL_CTRL26), /*!< Ethernet 50M PLL Gate.*/
DECL|ccmPllGateEnet|enumerator|ccmPllGateEnet = (uint32_t)(&CCM_PLL_CTRL21), /*!< Ethernet PLL Gate.*/
DECL|ccmPllGatePfd0Div2|enumerator|ccmPllGatePfd0Div2 = (uint32_t)(&CCM_PLL_CTRL11), /*!< PFD0 Div2 Gate.*/
DECL|ccmPllGatePfd0|enumerator|ccmPllGatePfd0 = (uint32_t)(&CCM_PLL_CTRL10), /*!< PFD0 Gate.*/
DECL|ccmPllGatePfd1Div2|enumerator|ccmPllGatePfd1Div2 = (uint32_t)(&CCM_PLL_CTRL13), /*!< PFD1 Div2 Gate.*/
DECL|ccmPllGatePfd1|enumerator|ccmPllGatePfd1 = (uint32_t)(&CCM_PLL_CTRL12), /*!< PFD1 Gate.*/
DECL|ccmPllGatePfd2Div2|enumerator|ccmPllGatePfd2Div2 = (uint32_t)(&CCM_PLL_CTRL15), /*!< PDF2 Div2.*/
DECL|ccmPllGatePfd2|enumerator|ccmPllGatePfd2 = (uint32_t)(&CCM_PLL_CTRL14), /*!< PFD2 Gate.*/
DECL|ccmPllGatePfd3|enumerator|ccmPllGatePfd3 = (uint32_t)(&CCM_PLL_CTRL16), /*!< PDF3 Gate.*/
DECL|ccmPllGatePfd4|enumerator|ccmPllGatePfd4 = (uint32_t)(&CCM_PLL_CTRL17), /*!< PDF4 Gate.*/
DECL|ccmPllGatePfd5|enumerator|ccmPllGatePfd5 = (uint32_t)(&CCM_PLL_CTRL18), /*!< PDF5 Gate.*/
DECL|ccmPllGatePfd6|enumerator|ccmPllGatePfd6 = (uint32_t)(&CCM_PLL_CTRL19), /*!< PDF6 Gate.*/
DECL|ccmPllGatePfd7|enumerator|ccmPllGatePfd7 = (uint32_t)(&CCM_PLL_CTRL20), /*!< PDF7 Gate.*/
DECL|ccmPllGateSysDiv1|enumerator|ccmPllGateSysDiv1 = (uint32_t)(&CCM_PLL_CTRL7), /*!< SYSTEM PLL Div1 Gate.*/
DECL|ccmPllGateSysDiv2|enumerator|ccmPllGateSysDiv2 = (uint32_t)(&CCM_PLL_CTRL8), /*!< SYSTEM PLL Div2 Gate.*/
DECL|ccmPllGateSysDiv4|enumerator|ccmPllGateSysDiv4 = (uint32_t)(&CCM_PLL_CTRL9), /*!< SYSTEM PLL Div4 Gate.*/
DECL|ccmPllGateSys|enumerator|ccmPllGateSys = (uint32_t)(&CCM_PLL_CTRL6), /*!< SYSTEM PLL Gate.*/
DECL|ccmPllGateVideoDiv1|enumerator|ccmPllGateVideoDiv1 = (uint32_t)(&CCM_PLL_CTRL32), /*!< VIDEO PLL Div1 Gate.*/
DECL|ccmPllGateVideo|enumerator|ccmPllGateVideo = (uint32_t)(&CCM_PLL_CTRL31), /*!< VIDEO PLL Gate.*/
DECL|ccmRootAhb|enumerator|ccmRootAhb = (uint32_t)(&CCM_TARGET_ROOT32), /*!< AHB Clock control name.*/
DECL|ccmRootAxi|enumerator|ccmRootAxi = (uint32_t)(&CCM_TARGET_ROOT16), /*!< AXI Clock control name.*/
DECL|ccmRootCan1|enumerator|ccmRootCan1 = (uint32_t)(&CCM_TARGET_ROOT89), /*!< CAN1 Clock control name.*/
DECL|ccmRootCan2|enumerator|ccmRootCan2 = (uint32_t)(&CCM_TARGET_ROOT90), /*!< CAN2 Clock control name.*/
DECL|ccmRootEcspi1|enumerator|ccmRootEcspi1 = (uint32_t)(&CCM_TARGET_ROOT102), /*!< ECSPI1 Clock control name.*/
DECL|ccmRootEcspi2|enumerator|ccmRootEcspi2 = (uint32_t)(&CCM_TARGET_ROOT103), /*!< ECSPI2 Clock control name.*/
DECL|ccmRootEcspi3|enumerator|ccmRootEcspi3 = (uint32_t)(&CCM_TARGET_ROOT104), /*!< ECSPI3 Clock control name.*/
DECL|ccmRootEcspi4|enumerator|ccmRootEcspi4 = (uint32_t)(&CCM_TARGET_ROOT105), /*!< ECSPI4 Clock control name.*/
DECL|ccmRootFtm1|enumerator|ccmRootFtm1 = (uint32_t)(&CCM_TARGET_ROOT110), /*!< FTM1 Clock control name.*/
DECL|ccmRootFtm2|enumerator|ccmRootFtm2 = (uint32_t)(&CCM_TARGET_ROOT111), /*!< FTM2 Clock control name.*/
DECL|ccmRootGpt1|enumerator|ccmRootGpt1 = (uint32_t)(&CCM_TARGET_ROOT114), /*!< GPT1 Clock control name.*/
DECL|ccmRootGpt2|enumerator|ccmRootGpt2 = (uint32_t)(&CCM_TARGET_ROOT115), /*!< GPT2 Clock control name.*/
DECL|ccmRootGpt3|enumerator|ccmRootGpt3 = (uint32_t)(&CCM_TARGET_ROOT116), /*!< GPT3 Clock control name.*/
DECL|ccmRootGpt4|enumerator|ccmRootGpt4 = (uint32_t)(&CCM_TARGET_ROOT117), /*!< GPT4 Clock control name.*/
DECL|ccmRootI2c1|enumerator|ccmRootI2c1 = (uint32_t)(&CCM_TARGET_ROOT91), /*!< I2C1 Clock control name.*/
DECL|ccmRootI2c2|enumerator|ccmRootI2c2 = (uint32_t)(&CCM_TARGET_ROOT92), /*!< I2C2 Clock control name.*/
DECL|ccmRootI2c3|enumerator|ccmRootI2c3 = (uint32_t)(&CCM_TARGET_ROOT93), /*!< I2C3 Clock control name.*/
DECL|ccmRootI2c4|enumerator|ccmRootI2c4 = (uint32_t)(&CCM_TARGET_ROOT94), /*!< I2C4 Clock control name.*/
DECL|ccmRootIpg|enumerator|ccmRootIpg = (uint32_t)(&CCM_TARGET_ROOT33), /*!< IPG Clock control name.*/
DECL|ccmRootM4|enumerator|ccmRootM4 = (uint32_t)(&CCM_TARGET_ROOT1), /*!< ARM Cortex-M4 Clock control name.*/
DECL|ccmRootQspi|enumerator|ccmRootQspi = (uint32_t)(&CCM_TARGET_ROOT85), /*!< QSPI Clock control name.*/
DECL|ccmRootUart1|enumerator|ccmRootUart1 = (uint32_t)(&CCM_TARGET_ROOT95), /*!< UART1 Clock control name.*/
DECL|ccmRootUart2|enumerator|ccmRootUart2 = (uint32_t)(&CCM_TARGET_ROOT96), /*!< UART2 Clock control name.*/
DECL|ccmRootUart3|enumerator|ccmRootUart3 = (uint32_t)(&CCM_TARGET_ROOT97), /*!< UART3 Clock control name.*/
DECL|ccmRootUart4|enumerator|ccmRootUart4 = (uint32_t)(&CCM_TARGET_ROOT98), /*!< UART4 Clock control name.*/
DECL|ccmRootUart5|enumerator|ccmRootUart5 = (uint32_t)(&CCM_TARGET_ROOT99), /*!< UART5 Clock control name.*/
DECL|ccmRootUart6|enumerator|ccmRootUart6 = (uint32_t)(&CCM_TARGET_ROOT100), /*!< UART6 Clock control name.*/
DECL|ccmRootUart7|enumerator|ccmRootUart7 = (uint32_t)(&CCM_TARGET_ROOT101), /*!< UART7 Clock control name.*/
DECL|ccmRootWdog|enumerator|ccmRootWdog = (uint32_t)(&CCM_TARGET_ROOT119), /*!< WDOG Clock control name.*/
DECL|ccmRootmuxAhbAudioPll|enumerator|ccmRootmuxAhbAudioPll = 6U, /*!< AHB Clock from AUDIO PLL.*/
DECL|ccmRootmuxAhbDdrPllDiv2|enumerator|ccmRootmuxAhbDdrPllDiv2 = 2U, /*!< AHB Clock from DDR PLL divided by 2.*/
DECL|ccmRootmuxAhbEnetPll125m|enumerator|ccmRootmuxAhbEnetPll125m = 4U, /*!< AHB Clock from Ethernet PLL 125M.*/
DECL|ccmRootmuxAhbOsc24m|enumerator|ccmRootmuxAhbOsc24m = 0U, /*!< AHB Clock from OSC 24M.*/
DECL|ccmRootmuxAhbSysPllPfd0|enumerator|ccmRootmuxAhbSysPllPfd0 = 3U, /*!< AHB Clock from SYSTEM PLL PFD0.*/
DECL|ccmRootmuxAhbSysPllPfd2|enumerator|ccmRootmuxAhbSysPllPfd2 = 1U, /*!< AHB Clock from SYSTEM PLL PFD2.*/
DECL|ccmRootmuxAhbUsbPll|enumerator|ccmRootmuxAhbUsbPll = 5U, /*!< AHB Clock from USB PLL.*/
DECL|ccmRootmuxAhbVideoPll|enumerator|ccmRootmuxAhbVideoPll = 7U, /*!< AHB Clock from VIDEO PLL.*/
DECL|ccmRootmuxAxiAudioPll|enumerator|ccmRootmuxAxiAudioPll = 5U, /*!< AXI Clock AUDIO PLL.*/
DECL|ccmRootmuxAxiDdrPllDiv2|enumerator|ccmRootmuxAxiDdrPllDiv2 = 2U, /*!< AXI Clock DDR PLL divided by 2.*/
DECL|ccmRootmuxAxiEnetPll250m|enumerator|ccmRootmuxAxiEnetPll250m = 3U, /*!< AXI Clock Ethernet PLL 250M.*/
DECL|ccmRootmuxAxiOsc24m|enumerator|ccmRootmuxAxiOsc24m = 0U, /*!< AXI Clock from OSC 24M.*/
DECL|ccmRootmuxAxiSysPllPfd1|enumerator|ccmRootmuxAxiSysPllPfd1 = 1U, /*!< AXI Clock from SYSTEM PLL PFD1.*/
DECL|ccmRootmuxAxiSysPllPfd5|enumerator|ccmRootmuxAxiSysPllPfd5 = 4U, /*!< AXI Clock SYSTEM PLL PFD5.*/
DECL|ccmRootmuxAxiSysPllPfd7|enumerator|ccmRootmuxAxiSysPllPfd7 = 7U, /*!< AXI Clock SYSTEM PLL PFD7.*/
DECL|ccmRootmuxAxiVideoPll|enumerator|ccmRootmuxAxiVideoPll = 6U, /*!< AXI Clock VIDEO PLL.*/
DECL|ccmRootmuxCanDdrPllDiv2|enumerator|ccmRootmuxCanDdrPllDiv2 = 2U, /*!< CAN Clock from SYSTEM PLL divided by 2.*/
DECL|ccmRootmuxCanEnetPll40m|enumerator|ccmRootmuxCanEnetPll40m = 4U, /*!< CAN Clock from Ethernet PLL 40M.*/
DECL|ccmRootmuxCanExtClk1|enumerator|ccmRootmuxCanExtClk1 = 6U, /*!< CAN Clock from External Clock1.*/
DECL|ccmRootmuxCanExtClk34|enumerator|ccmRootmuxCanExtClk34 = 7U, /*!< CAN Clock from External Clock34.*/
DECL|ccmRootmuxCanOsc24m|enumerator|ccmRootmuxCanOsc24m = 0U, /*!< CAN Clock from OSC 24M.*/
DECL|ccmRootmuxCanSysPllDiv1|enumerator|ccmRootmuxCanSysPllDiv1 = 3U, /*!< CAN Clock from SYSTEM PLL divided by 1.*/
DECL|ccmRootmuxCanSysPllDiv4|enumerator|ccmRootmuxCanSysPllDiv4 = 1U, /*!< CAN Clock from SYSTEM PLL divided by 4.*/
DECL|ccmRootmuxCanUsbPll|enumerator|ccmRootmuxCanUsbPll = 5U, /*!< CAN Clock from USB PLL.*/
DECL|ccmRootmuxEcspiEnetPll250m|enumerator|ccmRootmuxEcspiEnetPll250m = 6U, /*!< ECSPI Clock from Ethernet PLL 250M.*/
DECL|ccmRootmuxEcspiEnetPll40m|enumerator|ccmRootmuxEcspiEnetPll40m = 2U, /*!< ECSPI Clock from Ethernet PLL 40M.*/
DECL|ccmRootmuxEcspiOsc24m|enumerator|ccmRootmuxEcspiOsc24m = 0U, /*!< ECSPI Clock from OSC 24M.*/
DECL|ccmRootmuxEcspiSysPllDiv1|enumerator|ccmRootmuxEcspiSysPllDiv1 = 4U, /*!< ECSPI Clock from SYSTEM PLL divided by 1.*/
DECL|ccmRootmuxEcspiSysPllDiv2|enumerator|ccmRootmuxEcspiSysPllDiv2 = 1U, /*!< ECSPI Clock from SYSTEM PLL divided by 2.*/
DECL|ccmRootmuxEcspiSysPllDiv4|enumerator|ccmRootmuxEcspiSysPllDiv4 = 3U, /*!< ECSPI Clock from SYSTEM PLL divided by 4.*/
DECL|ccmRootmuxEcspiSysPllPfd4|enumerator|ccmRootmuxEcspiSysPllPfd4 = 5U, /*!< ECSPI Clock from SYSTEM PLL PFD4.*/
DECL|ccmRootmuxEcspiUsbPll|enumerator|ccmRootmuxEcspiUsbPll = 7U, /*!< ECSPI Clock from USB PLL.*/
DECL|ccmRootmuxFtmAudioPll|enumerator|ccmRootmuxFtmAudioPll = 4U, /*!< FTM Clock from AUDIO PLL.*/
DECL|ccmRootmuxFtmEnetPll100m|enumerator|ccmRootmuxFtmEnetPll100m = 1U, /*!< FTM Clock from Ethernet PLL 100M.*/
DECL|ccmRootmuxFtmEnetPll40m|enumerator|ccmRootmuxFtmEnetPll40m = 3U, /*!< FTM Clock from Ethernet PLL 40M.*/
DECL|ccmRootmuxFtmExtClk3|enumerator|ccmRootmuxFtmExtClk3 = 5U, /*!< FTM Clock from External Clock 3.*/
DECL|ccmRootmuxFtmOsc24m|enumerator|ccmRootmuxFtmOsc24m = 0U, /*!< FTM Clock from OSC 24M.*/
DECL|ccmRootmuxFtmRef1m|enumerator|ccmRootmuxFtmRef1m = 6U, /*!< FTM Clock from Refernece Clock 1M.*/
DECL|ccmRootmuxFtmSysPllDiv4|enumerator|ccmRootmuxFtmSysPllDiv4 = 2U, /*!< FTM Clock from SYSTEM PLL divided by 4.*/
DECL|ccmRootmuxFtmVideoPll|enumerator|ccmRootmuxFtmVideoPll = 7U, /*!< FTM Clock from VIDEO PLL.*/
DECL|ccmRootmuxGptAudioPll|enumerator|ccmRootmuxGptAudioPll = 6U, /*!< GPT Clock from AUDIO PLL.*/
DECL|ccmRootmuxGptEnetPll100m|enumerator|ccmRootmuxGptEnetPll100m = 1U, /*!< GPT Clock from Ethernet PLL 100M.*/
DECL|ccmRootmuxGptEnetPll40m|enumerator|ccmRootmuxGptEnetPll40m = 3U, /*!< GPT Clock from Ethernet PLL 40M.*/
DECL|ccmRootmuxGptExtClk|enumerator|ccmRootmuxGptExtClk = 7U, /*!< GPT Clock from External Clock.*/
DECL|ccmRootmuxGptOsc24m|enumerator|ccmRootmuxGptOsc24m = 0U, /*!< GPT Clock from OSC 24M.*/
DECL|ccmRootmuxGptRef1m|enumerator|ccmRootmuxGptRef1m = 5U, /*!< GPT Clock from Refernece Clock 1M.*/
DECL|ccmRootmuxGptSysPllPfd0|enumerator|ccmRootmuxGptSysPllPfd0 = 2U, /*!< GPT Clock from SYSTEM PLL PFD0.*/
DECL|ccmRootmuxGptVideoPll|enumerator|ccmRootmuxGptVideoPll = 4U, /*!< GPT Clock from VIDEO PLL.*/
DECL|ccmRootmuxI2cAudioPll|enumerator|ccmRootmuxI2cAudioPll = 4U, /*!< I2C Clock from AUDIO PLL.*/
DECL|ccmRootmuxI2cDdrPllDiv2|enumerator|ccmRootmuxI2cDdrPllDiv2 = 3U, /*!< I2C Clock from DDR PLL divided by .*/
DECL|ccmRootmuxI2cEnetPll50m|enumerator|ccmRootmuxI2cEnetPll50m = 2U, /*!< I2C Clock from Ethernet PLL 50M.*/
DECL|ccmRootmuxI2cOsc24m|enumerator|ccmRootmuxI2cOsc24m = 0U, /*!< I2C Clock from OSC 24M.*/
DECL|ccmRootmuxI2cSysPllDiv4|enumerator|ccmRootmuxI2cSysPllDiv4 = 1U, /*!< I2C Clock from SYSTEM PLL divided by 4.*/
DECL|ccmRootmuxI2cSysPllPfd2Div2|enumerator|ccmRootmuxI2cSysPllPfd2Div2 = 7U, /*!< I2C Clock from SYSTEM PLL PFD2 divided by 2.*/
DECL|ccmRootmuxI2cUsbPll|enumerator|ccmRootmuxI2cUsbPll = 6U, /*!< I2C Clock from USB PLL.*/
DECL|ccmRootmuxI2cVideoPll|enumerator|ccmRootmuxI2cVideoPll = 5U, /*!< I2C Clock from VIDEO PLL.*/
DECL|ccmRootmuxIpgAHB|enumerator|ccmRootmuxIpgAHB = 0U, /*!< IPG Clock from AHB Clock.*/
DECL|ccmRootmuxM4AudioPll|enumerator|ccmRootmuxM4AudioPll = 5U, /*!< ARM Cortex-M4 Clock from AUDIO PLL.*/
DECL|ccmRootmuxM4DdrPllDiv2|enumerator|ccmRootmuxM4DdrPllDiv2 = 4U, /*!< ARM Cortex-M4 Clock from DDR PLL divided by 2.*/
DECL|ccmRootmuxM4EnetPll250m|enumerator|ccmRootmuxM4EnetPll250m = 2U, /*!< ARM Cortex-M4 Clock from Ethernet PLL 250M.*/
DECL|ccmRootmuxM4Osc24m|enumerator|ccmRootmuxM4Osc24m = 0U, /*!< ARM Cortex-M4 Clock from OSC 24M.*/
DECL|ccmRootmuxM4SysPllDiv2|enumerator|ccmRootmuxM4SysPllDiv2 = 1U, /*!< ARM Cortex-M4 Clock from SYSTEM PLL divided by 2.*/
DECL|ccmRootmuxM4SysPllPfd2|enumerator|ccmRootmuxM4SysPllPfd2 = 3U, /*!< ARM Cortex-M4 Clock from SYSTEM PLL PFD2.*/
DECL|ccmRootmuxM4UsbPll|enumerator|ccmRootmuxM4UsbPll = 7U, /*!< ARM Cortex-M4 Clock from USB PLL.*/
DECL|ccmRootmuxM4VideoPll|enumerator|ccmRootmuxM4VideoPll = 6U, /*!< ARM Cortex-M4 Clock from VIDEO PLL.*/
DECL|ccmRootmuxQspiDdrPllDiv2|enumerator|ccmRootmuxQspiDdrPllDiv2 = 2U, /*!< QSPI Clock from DDR PLL divided by 2.*/
DECL|ccmRootmuxQspiEnetPll500m|enumerator|ccmRootmuxQspiEnetPll500m = 3U, /*!< QSPI Clock from Ethernet PLL 500M.*/
DECL|ccmRootmuxQspiOsc24m|enumerator|ccmRootmuxQspiOsc24m = 0U, /*!< QSPI Clock from OSC 24M.*/
DECL|ccmRootmuxQspiSysPllPfd2|enumerator|ccmRootmuxQspiSysPllPfd2 = 5U, /*!< QSPI Clock from SYSTEM PLL PFD2.*/
DECL|ccmRootmuxQspiSysPllPfd3|enumerator|ccmRootmuxQspiSysPllPfd3 = 4U, /*!< QSPI Clock from SYSTEM PLL PFD3.*/
DECL|ccmRootmuxQspiSysPllPfd4|enumerator|ccmRootmuxQspiSysPllPfd4 = 1U, /*!< QSPI Clock from SYSTEM PLL PFD4.*/
DECL|ccmRootmuxQspiSysPllPfd6|enumerator|ccmRootmuxQspiSysPllPfd6 = 6U, /*!< QSPI Clock from SYSTEM PLL PFD6.*/
DECL|ccmRootmuxQspiSysPllPfd7|enumerator|ccmRootmuxQspiSysPllPfd7 = 7U, /*!< QSPI Clock from SYSTEM PLL PFD7.*/
DECL|ccmRootmuxUartEnetPll100m|enumerator|ccmRootmuxUartEnetPll100m = 3U, /*!< UART Clock from Ethernet PLL 100M.*/
DECL|ccmRootmuxUartEnetPll40m|enumerator|ccmRootmuxUartEnetPll40m = 2U, /*!< UART Clock from Ethernet PLL 40M.*/
DECL|ccmRootmuxUartExtClk2|enumerator|ccmRootmuxUartExtClk2 = 5U, /*!< UART Clock from External Clock 2.*/
DECL|ccmRootmuxUartExtClk34|enumerator|ccmRootmuxUartExtClk34 = 6U, /*!< UART Clock from External Clock 34.*/
DECL|ccmRootmuxUartOsc24m|enumerator|ccmRootmuxUartOsc24m = 0U, /*!< UART Clock from OSC 24M.*/
DECL|ccmRootmuxUartSysPllDiv1|enumerator|ccmRootmuxUartSysPllDiv1 = 4U, /*!< UART Clock from SYSTEM PLL divided by 1.*/
DECL|ccmRootmuxUartSysPllDiv2|enumerator|ccmRootmuxUartSysPllDiv2 = 1U, /*!< UART Clock from SYSTEM PLL divided by 2.*/
DECL|ccmRootmuxUartUsbPll|enumerator|ccmRootmuxUartUsbPll = 7U, /*!< UART Clock from USB PLL.*/
DECL|ccmRootmuxWdogDdrPllDiv2|enumerator|ccmRootmuxWdogDdrPllDiv2 = 3U, /*!< WDOG Clock from DDR PLL divided by 2.*/
DECL|ccmRootmuxWdogEnetPll125m|enumerator|ccmRootmuxWdogEnetPll125m = 4U, /*!< WDOG Clock from Ethernet PLL 125M.*/
DECL|ccmRootmuxWdogOsc24m|enumerator|ccmRootmuxWdogOsc24m = 0U, /*!< WDOG Clock from OSC 24M.*/
DECL|ccmRootmuxWdogRef1m|enumerator|ccmRootmuxWdogRef1m = 6U, /*!< WDOG Clock from Refernece Clock 1M.*/
DECL|ccmRootmuxWdogSysPllDiv4|enumerator|ccmRootmuxWdogSysPllDiv4 = 2U, /*!< WDOG Clock from SYSTEM PLL divided by 4.*/
DECL|ccmRootmuxWdogSysPllPfd1Div2|enumerator|ccmRootmuxWdogSysPllPfd1Div2 = 7U, /*!< WDOG Clock from SYSTEM PLL PFD1 divided by 2.*/
DECL|ccmRootmuxWdogSysPllPfd2Div2|enumerator|ccmRootmuxWdogSysPllPfd2Div2 = 1U, /*!< WDOG Clock from SYSTEM PLL PFD2 divided by 2.*/
DECL|ccmRootmuxWdogUsbPll|enumerator|ccmRootmuxWdogUsbPll = 5U, /*!< WDOG Clock from USB PLL.*/
