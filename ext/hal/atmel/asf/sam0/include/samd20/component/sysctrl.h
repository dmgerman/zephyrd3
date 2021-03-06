DECL|AAMPEN|member|uint16_t AAMPEN:1; /*!< bit: 5 Automatic Amplitude Control Enable */
DECL|ACTION|member|uint32_t ACTION:2; /*!< bit: 3.. 4 Action when Threshold Crossed */
DECL|AMPGC|member|uint16_t AMPGC:1; /*!< bit: 11 Automatic Amplitude Gain Control */
DECL|B33SRDY|member|__I uint32_t B33SRDY:1; /*!< bit: 11 BOD33 Synchronization Ready */
DECL|B33SRDY|member|uint32_t B33SRDY:1; /*!< bit: 11 BOD33 Synchronization Ready */
DECL|B33SRDY|member|uint32_t B33SRDY:1; /*!< bit: 11 BOD33 Synchronization Ready */
DECL|B33SRDY|member|uint32_t B33SRDY:1; /*!< bit: 11 BOD33 Synchronization Ready */
DECL|BGOUTEN|member|uint32_t BGOUTEN:1; /*!< bit: 2 Bandgap Output Enable */
DECL|BOD33DET|member|__I uint32_t BOD33DET:1; /*!< bit: 10 BOD33 Detection */
DECL|BOD33DET|member|uint32_t BOD33DET:1; /*!< bit: 10 BOD33 Detection */
DECL|BOD33DET|member|uint32_t BOD33DET:1; /*!< bit: 10 BOD33 Detection */
DECL|BOD33DET|member|uint32_t BOD33DET:1; /*!< bit: 10 BOD33 Detection */
DECL|BOD33RDY|member|__I uint32_t BOD33RDY:1; /*!< bit: 9 BOD33 Ready */
DECL|BOD33RDY|member|uint32_t BOD33RDY:1; /*!< bit: 9 BOD33 Ready */
DECL|BOD33RDY|member|uint32_t BOD33RDY:1; /*!< bit: 9 BOD33 Ready */
DECL|BOD33RDY|member|uint32_t BOD33RDY:1; /*!< bit: 9 BOD33 Ready */
DECL|BOD33|member|__IO SYSCTRL_BOD33_Type BOD33; /**< \brief Offset: 0x34 (R/W 32) 3.3V Brown-Out Detector (BOD33) Control */
DECL|CALIB|member|uint32_t CALIB:11; /*!< bit: 16..26 Voltage Reference Calibration Value */
DECL|CALIB|member|uint32_t CALIB:12; /*!< bit: 16..27 Calibration Value */
DECL|CALIB|member|uint32_t CALIB:7; /*!< bit: 16..22 Calibration Value */
DECL|CALIB|member|uint8_t CALIB:5; /*!< bit: 0.. 4 Calibration Value */
DECL|CCDIS|member|uint16_t CCDIS:1; /*!< bit: 8 Chill Cycle Disable */
DECL|CEN|member|uint32_t CEN:1; /*!< bit: 9 Clock Enable */
DECL|COARSE|member|uint32_t COARSE:6; /*!< bit: 10..15 Coarse Calibration Value */
DECL|CSTEP|member|uint32_t CSTEP:6; /*!< bit: 26..31 Maximum Coarse Step Size */
DECL|DFLLCTRL|member|__IO SYSCTRL_DFLLCTRL_Type DFLLCTRL; /**< \brief Offset: 0x24 (R/W 16) DFLL Config */
DECL|DFLLLCKC|member|__I uint32_t DFLLLCKC:1; /*!< bit: 7 DFLL Lock Coarse */
DECL|DFLLLCKC|member|uint32_t DFLLLCKC:1; /*!< bit: 7 DFLL Lock Coarse */
DECL|DFLLLCKC|member|uint32_t DFLLLCKC:1; /*!< bit: 7 DFLL Lock Coarse */
DECL|DFLLLCKC|member|uint32_t DFLLLCKC:1; /*!< bit: 7 DFLL Lock Coarse */
DECL|DFLLLCKF|member|__I uint32_t DFLLLCKF:1; /*!< bit: 6 DFLL Lock Fine */
DECL|DFLLLCKF|member|uint32_t DFLLLCKF:1; /*!< bit: 6 DFLL Lock Fine */
DECL|DFLLLCKF|member|uint32_t DFLLLCKF:1; /*!< bit: 6 DFLL Lock Fine */
DECL|DFLLLCKF|member|uint32_t DFLLLCKF:1; /*!< bit: 6 DFLL Lock Fine */
DECL|DFLLMUL|member|__IO SYSCTRL_DFLLMUL_Type DFLLMUL; /**< \brief Offset: 0x2C (R/W 32) DFLL Multiplier */
DECL|DFLLOOB|member|__I uint32_t DFLLOOB:1; /*!< bit: 5 DFLL Out Of Bounds */
DECL|DFLLOOB|member|uint32_t DFLLOOB:1; /*!< bit: 5 DFLL Out Of Bounds */
DECL|DFLLOOB|member|uint32_t DFLLOOB:1; /*!< bit: 5 DFLL Out Of Bounds */
DECL|DFLLOOB|member|uint32_t DFLLOOB:1; /*!< bit: 5 DFLL Out Of Bounds */
DECL|DFLLRCS|member|__I uint32_t DFLLRCS:1; /*!< bit: 8 DFLL Reference Clock Stopped */
DECL|DFLLRCS|member|uint32_t DFLLRCS:1; /*!< bit: 8 DFLL Reference Clock Stopped */
DECL|DFLLRCS|member|uint32_t DFLLRCS:1; /*!< bit: 8 DFLL Reference Clock Stopped */
DECL|DFLLRCS|member|uint32_t DFLLRCS:1; /*!< bit: 8 DFLL Reference Clock Stopped */
DECL|DFLLRDY|member|__I uint32_t DFLLRDY:1; /*!< bit: 4 DFLL Ready */
DECL|DFLLRDY|member|uint32_t DFLLRDY:1; /*!< bit: 4 DFLL Ready */
DECL|DFLLRDY|member|uint32_t DFLLRDY:1; /*!< bit: 4 DFLL Ready */
DECL|DFLLRDY|member|uint32_t DFLLRDY:1; /*!< bit: 4 DFLL Ready */
DECL|DFLLSYNC|member|__IO SYSCTRL_DFLLSYNC_Type DFLLSYNC; /**< \brief Offset: 0x30 (R/W 8) DFLL Synchronization */
DECL|DFLLVAL|member|__IO SYSCTRL_DFLLVAL_Type DFLLVAL; /**< \brief Offset: 0x28 (R/W 32) DFLL Calibration Value */
DECL|DIFF|member|uint32_t DIFF:16; /*!< bit: 16..31 Multiplication Ratio Difference */
DECL|EN1K|member|uint16_t EN1K:1; /*!< bit: 4 1kHz Output Enable */
DECL|EN1K|member|uint32_t EN1K:1; /*!< bit: 3 1kHz Output Enable */
DECL|EN32K|member|uint16_t EN32K:1; /*!< bit: 3 32kHz Output Enable */
DECL|EN32K|member|uint32_t EN32K:1; /*!< bit: 2 32kHz Output Enable */
DECL|ENABLE|member|uint16_t ENABLE:1; /*!< bit: 1 Enable */
DECL|ENABLE|member|uint16_t ENABLE:1; /*!< bit: 1 Enable */
DECL|ENABLE|member|uint16_t ENABLE:1; /*!< bit: 1 Enable */
DECL|ENABLE|member|uint32_t ENABLE:1; /*!< bit: 1 Enable */
DECL|ENABLE|member|uint32_t ENABLE:1; /*!< bit: 1 Enable */
DECL|ENABLE|member|uint32_t ENABLE:1; /*!< bit: 1 Enable */
DECL|FINE|member|uint32_t FINE:10; /*!< bit: 0.. 9 Fine Calibration Value */
DECL|FORCELDO|member|uint16_t FORCELDO:1; /*!< bit: 13 Force LDO Voltage Regulator */
DECL|FRANGE|member|uint32_t FRANGE:2; /*!< bit: 30..31 Frequency Range */
DECL|FSTEP|member|uint32_t FSTEP:10; /*!< bit: 16..25 Maximum Fine Step Size */
DECL|GAIN|member|uint16_t GAIN:3; /*!< bit: 8..10 Gain Value */
DECL|HYST|member|uint32_t HYST:1; /*!< bit: 2 Hysteresis Enable */
DECL|INTENCLR|member|__IO SYSCTRL_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x00 (R/W 32) Interrupt Enable Clear */
DECL|INTENSET|member|__IO SYSCTRL_INTENSET_Type INTENSET; /**< \brief Offset: 0x04 (R/W 32) Interrupt Enable Set */
DECL|INTFLAG|member|__IO SYSCTRL_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x08 (R/W 32) Interrupt Flag Status and Clear */
DECL|LEVEL|member|uint32_t LEVEL:6; /*!< bit: 16..21 Threshold Level */
DECL|LLAW|member|uint16_t LLAW:1; /*!< bit: 4 Lose Lock After Wake */
DECL|MODE|member|uint16_t MODE:1; /*!< bit: 2 Mode Selection */
DECL|MODE|member|uint32_t MODE:1; /*!< bit: 8 Operation Modes */
DECL|MUL|member|uint32_t MUL:16; /*!< bit: 0..15 Multiplication Value */
DECL|ONDEMAND|member|uint16_t ONDEMAND:1; /*!< bit: 7 Enable on Demand */
DECL|ONDEMAND|member|uint16_t ONDEMAND:1; /*!< bit: 7 Enable on Demand */
DECL|ONDEMAND|member|uint16_t ONDEMAND:1; /*!< bit: 7 Enable on Demand */
DECL|ONDEMAND|member|uint32_t ONDEMAND:1; /*!< bit: 7 Enable on Demand */
DECL|ONDEMAND|member|uint32_t ONDEMAND:1; /*!< bit: 7 Enable on Demand */
DECL|OSC32KRDY|member|__I uint32_t OSC32KRDY:1; /*!< bit: 2 OSC32K Ready */
DECL|OSC32KRDY|member|uint32_t OSC32KRDY:1; /*!< bit: 2 OSC32K Ready */
DECL|OSC32KRDY|member|uint32_t OSC32KRDY:1; /*!< bit: 2 OSC32K Ready */
DECL|OSC32KRDY|member|uint32_t OSC32KRDY:1; /*!< bit: 2 OSC32K Ready */
DECL|OSC32K|member|__IO SYSCTRL_OSC32K_Type OSC32K; /**< \brief Offset: 0x18 (R/W 32) OSC32K Control */
DECL|OSC8MRDY|member|__I uint32_t OSC8MRDY:1; /*!< bit: 3 OSC8M Ready */
DECL|OSC8MRDY|member|uint32_t OSC8MRDY:1; /*!< bit: 3 OSC8M Ready */
DECL|OSC8MRDY|member|uint32_t OSC8MRDY:1; /*!< bit: 3 OSC8M Ready */
DECL|OSC8MRDY|member|uint32_t OSC8MRDY:1; /*!< bit: 3 OSC8M Ready */
DECL|OSC8M|member|__IO SYSCTRL_OSC8M_Type OSC8M; /**< \brief Offset: 0x20 (R/W 32) OSC8M Control A */
DECL|OSCULP32K|member|__IO SYSCTRL_OSCULP32K_Type OSCULP32K; /**< \brief Offset: 0x1C (R/W 8) OSCULP32K Control */
DECL|PCLKSR|member|__I SYSCTRL_PCLKSR_Type PCLKSR; /**< \brief Offset: 0x0C (R/ 32) Power and Clocks Status */
DECL|PRESC|member|uint32_t PRESC:2; /*!< bit: 8.. 9 Prescaler Select */
DECL|PSEL|member|uint32_t PSEL:4; /*!< bit: 12..15 Prescaler Select */
DECL|QLDIS|member|uint16_t QLDIS:1; /*!< bit: 9 Quick Lock Disable */
DECL|READREQ|member|uint8_t READREQ:1; /*!< bit: 7 Read Request Synchronization */
DECL|REV_SYSCTRL|macro|REV_SYSCTRL
DECL|RUNSTDBY|member|uint16_t RUNSTDBY:1; /*!< bit: 6 Run during Standby */
DECL|RUNSTDBY|member|uint16_t RUNSTDBY:1; /*!< bit: 6 Run during Standby */
DECL|RUNSTDBY|member|uint16_t RUNSTDBY:1; /*!< bit: 6 Run during Standby */
DECL|RUNSTDBY|member|uint16_t RUNSTDBY:1; /*!< bit: 6 Run during Standby */
DECL|RUNSTDBY|member|uint32_t RUNSTDBY:1; /*!< bit: 6 Run during Standby */
DECL|RUNSTDBY|member|uint32_t RUNSTDBY:1; /*!< bit: 6 Run during Standby */
DECL|RUNSTDBY|member|uint32_t RUNSTDBY:1; /*!< bit: 6 Run during Standby */
DECL|Reserved1|member|RoReg8 Reserved1[0x2];
DECL|Reserved2|member|RoReg8 Reserved2[0x2];
DECL|Reserved3|member|RoReg8 Reserved3[0x3];
DECL|Reserved4|member|RoReg8 Reserved4[0x2];
DECL|Reserved5|member|RoReg8 Reserved5[0x3];
DECL|Reserved6|member|RoReg8 Reserved6[0x4];
DECL|Reserved7|member|RoReg8 Reserved7[0x2];
DECL|STABLE|member|uint16_t STABLE:1; /*!< bit: 3 Stable Frequency */
DECL|STARTUP|member|uint16_t STARTUP:3; /*!< bit: 8..10 Start-Up Time */
DECL|STARTUP|member|uint16_t STARTUP:4; /*!< bit: 12..15 Start-Up Time */
DECL|STARTUP|member|uint32_t STARTUP:3; /*!< bit: 8..10 Start-Up Time */
DECL|SYSCTRL_BOD33_ACTION_Msk|macro|SYSCTRL_BOD33_ACTION_Msk
DECL|SYSCTRL_BOD33_ACTION_Pos|macro|SYSCTRL_BOD33_ACTION_Pos
DECL|SYSCTRL_BOD33_ACTION|macro|SYSCTRL_BOD33_ACTION
DECL|SYSCTRL_BOD33_CEN_Pos|macro|SYSCTRL_BOD33_CEN_Pos
DECL|SYSCTRL_BOD33_CEN|macro|SYSCTRL_BOD33_CEN
DECL|SYSCTRL_BOD33_ENABLE_Pos|macro|SYSCTRL_BOD33_ENABLE_Pos
DECL|SYSCTRL_BOD33_ENABLE|macro|SYSCTRL_BOD33_ENABLE
DECL|SYSCTRL_BOD33_HYST_Pos|macro|SYSCTRL_BOD33_HYST_Pos
DECL|SYSCTRL_BOD33_HYST|macro|SYSCTRL_BOD33_HYST
DECL|SYSCTRL_BOD33_LEVEL_Msk|macro|SYSCTRL_BOD33_LEVEL_Msk
DECL|SYSCTRL_BOD33_LEVEL_Pos|macro|SYSCTRL_BOD33_LEVEL_Pos
DECL|SYSCTRL_BOD33_LEVEL|macro|SYSCTRL_BOD33_LEVEL
DECL|SYSCTRL_BOD33_MASK|macro|SYSCTRL_BOD33_MASK
DECL|SYSCTRL_BOD33_MODE_Pos|macro|SYSCTRL_BOD33_MODE_Pos
DECL|SYSCTRL_BOD33_MODE|macro|SYSCTRL_BOD33_MODE
DECL|SYSCTRL_BOD33_OFFSET|macro|SYSCTRL_BOD33_OFFSET
DECL|SYSCTRL_BOD33_PSEL_Msk|macro|SYSCTRL_BOD33_PSEL_Msk
DECL|SYSCTRL_BOD33_PSEL_Pos|macro|SYSCTRL_BOD33_PSEL_Pos
DECL|SYSCTRL_BOD33_PSEL|macro|SYSCTRL_BOD33_PSEL
DECL|SYSCTRL_BOD33_RESETVALUE|macro|SYSCTRL_BOD33_RESETVALUE
DECL|SYSCTRL_BOD33_RUNSTDBY_Pos|macro|SYSCTRL_BOD33_RUNSTDBY_Pos
DECL|SYSCTRL_BOD33_RUNSTDBY|macro|SYSCTRL_BOD33_RUNSTDBY
DECL|SYSCTRL_BOD33_Type|typedef|} SYSCTRL_BOD33_Type;
DECL|SYSCTRL_DFLLCTRL_CCDIS_Pos|macro|SYSCTRL_DFLLCTRL_CCDIS_Pos
DECL|SYSCTRL_DFLLCTRL_CCDIS|macro|SYSCTRL_DFLLCTRL_CCDIS
DECL|SYSCTRL_DFLLCTRL_ENABLE_Pos|macro|SYSCTRL_DFLLCTRL_ENABLE_Pos
DECL|SYSCTRL_DFLLCTRL_ENABLE|macro|SYSCTRL_DFLLCTRL_ENABLE
DECL|SYSCTRL_DFLLCTRL_LLAW_Pos|macro|SYSCTRL_DFLLCTRL_LLAW_Pos
DECL|SYSCTRL_DFLLCTRL_LLAW|macro|SYSCTRL_DFLLCTRL_LLAW
DECL|SYSCTRL_DFLLCTRL_MASK|macro|SYSCTRL_DFLLCTRL_MASK
DECL|SYSCTRL_DFLLCTRL_MODE_Pos|macro|SYSCTRL_DFLLCTRL_MODE_Pos
DECL|SYSCTRL_DFLLCTRL_MODE|macro|SYSCTRL_DFLLCTRL_MODE
DECL|SYSCTRL_DFLLCTRL_OFFSET|macro|SYSCTRL_DFLLCTRL_OFFSET
DECL|SYSCTRL_DFLLCTRL_ONDEMAND_Pos|macro|SYSCTRL_DFLLCTRL_ONDEMAND_Pos
DECL|SYSCTRL_DFLLCTRL_ONDEMAND|macro|SYSCTRL_DFLLCTRL_ONDEMAND
DECL|SYSCTRL_DFLLCTRL_QLDIS_Pos|macro|SYSCTRL_DFLLCTRL_QLDIS_Pos
DECL|SYSCTRL_DFLLCTRL_QLDIS|macro|SYSCTRL_DFLLCTRL_QLDIS
DECL|SYSCTRL_DFLLCTRL_RESETVALUE|macro|SYSCTRL_DFLLCTRL_RESETVALUE
DECL|SYSCTRL_DFLLCTRL_RUNSTDBY_Pos|macro|SYSCTRL_DFLLCTRL_RUNSTDBY_Pos
DECL|SYSCTRL_DFLLCTRL_RUNSTDBY|macro|SYSCTRL_DFLLCTRL_RUNSTDBY
DECL|SYSCTRL_DFLLCTRL_STABLE_Pos|macro|SYSCTRL_DFLLCTRL_STABLE_Pos
DECL|SYSCTRL_DFLLCTRL_STABLE|macro|SYSCTRL_DFLLCTRL_STABLE
DECL|SYSCTRL_DFLLCTRL_Type|typedef|} SYSCTRL_DFLLCTRL_Type;
DECL|SYSCTRL_DFLLMUL_CSTEP_Msk|macro|SYSCTRL_DFLLMUL_CSTEP_Msk
DECL|SYSCTRL_DFLLMUL_CSTEP_Pos|macro|SYSCTRL_DFLLMUL_CSTEP_Pos
DECL|SYSCTRL_DFLLMUL_CSTEP|macro|SYSCTRL_DFLLMUL_CSTEP
DECL|SYSCTRL_DFLLMUL_FSTEP_Msk|macro|SYSCTRL_DFLLMUL_FSTEP_Msk
DECL|SYSCTRL_DFLLMUL_FSTEP_Pos|macro|SYSCTRL_DFLLMUL_FSTEP_Pos
DECL|SYSCTRL_DFLLMUL_FSTEP|macro|SYSCTRL_DFLLMUL_FSTEP
DECL|SYSCTRL_DFLLMUL_MASK|macro|SYSCTRL_DFLLMUL_MASK
DECL|SYSCTRL_DFLLMUL_MUL_Msk|macro|SYSCTRL_DFLLMUL_MUL_Msk
DECL|SYSCTRL_DFLLMUL_MUL_Pos|macro|SYSCTRL_DFLLMUL_MUL_Pos
DECL|SYSCTRL_DFLLMUL_MUL|macro|SYSCTRL_DFLLMUL_MUL
DECL|SYSCTRL_DFLLMUL_OFFSET|macro|SYSCTRL_DFLLMUL_OFFSET
DECL|SYSCTRL_DFLLMUL_RESETVALUE|macro|SYSCTRL_DFLLMUL_RESETVALUE
DECL|SYSCTRL_DFLLMUL_Type|typedef|} SYSCTRL_DFLLMUL_Type;
DECL|SYSCTRL_DFLLSYNC_MASK|macro|SYSCTRL_DFLLSYNC_MASK
DECL|SYSCTRL_DFLLSYNC_OFFSET|macro|SYSCTRL_DFLLSYNC_OFFSET
DECL|SYSCTRL_DFLLSYNC_READREQ_Pos|macro|SYSCTRL_DFLLSYNC_READREQ_Pos
DECL|SYSCTRL_DFLLSYNC_READREQ|macro|SYSCTRL_DFLLSYNC_READREQ
DECL|SYSCTRL_DFLLSYNC_RESETVALUE|macro|SYSCTRL_DFLLSYNC_RESETVALUE
DECL|SYSCTRL_DFLLSYNC_Type|typedef|} SYSCTRL_DFLLSYNC_Type;
DECL|SYSCTRL_DFLLVAL_COARSE_Msk|macro|SYSCTRL_DFLLVAL_COARSE_Msk
DECL|SYSCTRL_DFLLVAL_COARSE_Pos|macro|SYSCTRL_DFLLVAL_COARSE_Pos
DECL|SYSCTRL_DFLLVAL_COARSE|macro|SYSCTRL_DFLLVAL_COARSE
DECL|SYSCTRL_DFLLVAL_DIFF_Msk|macro|SYSCTRL_DFLLVAL_DIFF_Msk
DECL|SYSCTRL_DFLLVAL_DIFF_Pos|macro|SYSCTRL_DFLLVAL_DIFF_Pos
DECL|SYSCTRL_DFLLVAL_DIFF|macro|SYSCTRL_DFLLVAL_DIFF
DECL|SYSCTRL_DFLLVAL_FINE_Msk|macro|SYSCTRL_DFLLVAL_FINE_Msk
DECL|SYSCTRL_DFLLVAL_FINE_Pos|macro|SYSCTRL_DFLLVAL_FINE_Pos
DECL|SYSCTRL_DFLLVAL_FINE|macro|SYSCTRL_DFLLVAL_FINE
DECL|SYSCTRL_DFLLVAL_MASK|macro|SYSCTRL_DFLLVAL_MASK
DECL|SYSCTRL_DFLLVAL_OFFSET|macro|SYSCTRL_DFLLVAL_OFFSET
DECL|SYSCTRL_DFLLVAL_RESETVALUE|macro|SYSCTRL_DFLLVAL_RESETVALUE
DECL|SYSCTRL_DFLLVAL_Type|typedef|} SYSCTRL_DFLLVAL_Type;
DECL|SYSCTRL_INTENCLR_B33SRDY_Pos|macro|SYSCTRL_INTENCLR_B33SRDY_Pos
DECL|SYSCTRL_INTENCLR_B33SRDY|macro|SYSCTRL_INTENCLR_B33SRDY
DECL|SYSCTRL_INTENCLR_BOD33DET_Pos|macro|SYSCTRL_INTENCLR_BOD33DET_Pos
DECL|SYSCTRL_INTENCLR_BOD33DET|macro|SYSCTRL_INTENCLR_BOD33DET
DECL|SYSCTRL_INTENCLR_BOD33RDY_Pos|macro|SYSCTRL_INTENCLR_BOD33RDY_Pos
DECL|SYSCTRL_INTENCLR_BOD33RDY|macro|SYSCTRL_INTENCLR_BOD33RDY
DECL|SYSCTRL_INTENCLR_DFLLLCKC_Pos|macro|SYSCTRL_INTENCLR_DFLLLCKC_Pos
DECL|SYSCTRL_INTENCLR_DFLLLCKC|macro|SYSCTRL_INTENCLR_DFLLLCKC
DECL|SYSCTRL_INTENCLR_DFLLLCKF_Pos|macro|SYSCTRL_INTENCLR_DFLLLCKF_Pos
DECL|SYSCTRL_INTENCLR_DFLLLCKF|macro|SYSCTRL_INTENCLR_DFLLLCKF
DECL|SYSCTRL_INTENCLR_DFLLOOB_Pos|macro|SYSCTRL_INTENCLR_DFLLOOB_Pos
DECL|SYSCTRL_INTENCLR_DFLLOOB|macro|SYSCTRL_INTENCLR_DFLLOOB
DECL|SYSCTRL_INTENCLR_DFLLRCS_Pos|macro|SYSCTRL_INTENCLR_DFLLRCS_Pos
DECL|SYSCTRL_INTENCLR_DFLLRCS|macro|SYSCTRL_INTENCLR_DFLLRCS
DECL|SYSCTRL_INTENCLR_DFLLRDY_Pos|macro|SYSCTRL_INTENCLR_DFLLRDY_Pos
DECL|SYSCTRL_INTENCLR_DFLLRDY|macro|SYSCTRL_INTENCLR_DFLLRDY
DECL|SYSCTRL_INTENCLR_MASK|macro|SYSCTRL_INTENCLR_MASK
DECL|SYSCTRL_INTENCLR_OFFSET|macro|SYSCTRL_INTENCLR_OFFSET
DECL|SYSCTRL_INTENCLR_OSC32KRDY_Pos|macro|SYSCTRL_INTENCLR_OSC32KRDY_Pos
DECL|SYSCTRL_INTENCLR_OSC32KRDY|macro|SYSCTRL_INTENCLR_OSC32KRDY
DECL|SYSCTRL_INTENCLR_OSC8MRDY_Pos|macro|SYSCTRL_INTENCLR_OSC8MRDY_Pos
DECL|SYSCTRL_INTENCLR_OSC8MRDY|macro|SYSCTRL_INTENCLR_OSC8MRDY
DECL|SYSCTRL_INTENCLR_RESETVALUE|macro|SYSCTRL_INTENCLR_RESETVALUE
DECL|SYSCTRL_INTENCLR_Type|typedef|} SYSCTRL_INTENCLR_Type;
DECL|SYSCTRL_INTENCLR_XOSC32KRDY_Pos|macro|SYSCTRL_INTENCLR_XOSC32KRDY_Pos
DECL|SYSCTRL_INTENCLR_XOSC32KRDY|macro|SYSCTRL_INTENCLR_XOSC32KRDY
DECL|SYSCTRL_INTENCLR_XOSCRDY_Pos|macro|SYSCTRL_INTENCLR_XOSCRDY_Pos
DECL|SYSCTRL_INTENCLR_XOSCRDY|macro|SYSCTRL_INTENCLR_XOSCRDY
DECL|SYSCTRL_INTENSET_B33SRDY_Pos|macro|SYSCTRL_INTENSET_B33SRDY_Pos
DECL|SYSCTRL_INTENSET_B33SRDY|macro|SYSCTRL_INTENSET_B33SRDY
DECL|SYSCTRL_INTENSET_BOD33DET_Pos|macro|SYSCTRL_INTENSET_BOD33DET_Pos
DECL|SYSCTRL_INTENSET_BOD33DET|macro|SYSCTRL_INTENSET_BOD33DET
DECL|SYSCTRL_INTENSET_BOD33RDY_Pos|macro|SYSCTRL_INTENSET_BOD33RDY_Pos
DECL|SYSCTRL_INTENSET_BOD33RDY|macro|SYSCTRL_INTENSET_BOD33RDY
DECL|SYSCTRL_INTENSET_DFLLLCKC_Pos|macro|SYSCTRL_INTENSET_DFLLLCKC_Pos
DECL|SYSCTRL_INTENSET_DFLLLCKC|macro|SYSCTRL_INTENSET_DFLLLCKC
DECL|SYSCTRL_INTENSET_DFLLLCKF_Pos|macro|SYSCTRL_INTENSET_DFLLLCKF_Pos
DECL|SYSCTRL_INTENSET_DFLLLCKF|macro|SYSCTRL_INTENSET_DFLLLCKF
DECL|SYSCTRL_INTENSET_DFLLOOB_Pos|macro|SYSCTRL_INTENSET_DFLLOOB_Pos
DECL|SYSCTRL_INTENSET_DFLLOOB|macro|SYSCTRL_INTENSET_DFLLOOB
DECL|SYSCTRL_INTENSET_DFLLRCS_Pos|macro|SYSCTRL_INTENSET_DFLLRCS_Pos
DECL|SYSCTRL_INTENSET_DFLLRCS|macro|SYSCTRL_INTENSET_DFLLRCS
DECL|SYSCTRL_INTENSET_DFLLRDY_Pos|macro|SYSCTRL_INTENSET_DFLLRDY_Pos
DECL|SYSCTRL_INTENSET_DFLLRDY|macro|SYSCTRL_INTENSET_DFLLRDY
DECL|SYSCTRL_INTENSET_MASK|macro|SYSCTRL_INTENSET_MASK
DECL|SYSCTRL_INTENSET_OFFSET|macro|SYSCTRL_INTENSET_OFFSET
DECL|SYSCTRL_INTENSET_OSC32KRDY_Pos|macro|SYSCTRL_INTENSET_OSC32KRDY_Pos
DECL|SYSCTRL_INTENSET_OSC32KRDY|macro|SYSCTRL_INTENSET_OSC32KRDY
DECL|SYSCTRL_INTENSET_OSC8MRDY_Pos|macro|SYSCTRL_INTENSET_OSC8MRDY_Pos
DECL|SYSCTRL_INTENSET_OSC8MRDY|macro|SYSCTRL_INTENSET_OSC8MRDY
DECL|SYSCTRL_INTENSET_RESETVALUE|macro|SYSCTRL_INTENSET_RESETVALUE
DECL|SYSCTRL_INTENSET_Type|typedef|} SYSCTRL_INTENSET_Type;
DECL|SYSCTRL_INTENSET_XOSC32KRDY_Pos|macro|SYSCTRL_INTENSET_XOSC32KRDY_Pos
DECL|SYSCTRL_INTENSET_XOSC32KRDY|macro|SYSCTRL_INTENSET_XOSC32KRDY
DECL|SYSCTRL_INTENSET_XOSCRDY_Pos|macro|SYSCTRL_INTENSET_XOSCRDY_Pos
DECL|SYSCTRL_INTENSET_XOSCRDY|macro|SYSCTRL_INTENSET_XOSCRDY
DECL|SYSCTRL_INTFLAG_B33SRDY_Pos|macro|SYSCTRL_INTFLAG_B33SRDY_Pos
DECL|SYSCTRL_INTFLAG_B33SRDY|macro|SYSCTRL_INTFLAG_B33SRDY
DECL|SYSCTRL_INTFLAG_BOD33DET_Pos|macro|SYSCTRL_INTFLAG_BOD33DET_Pos
DECL|SYSCTRL_INTFLAG_BOD33DET|macro|SYSCTRL_INTFLAG_BOD33DET
DECL|SYSCTRL_INTFLAG_BOD33RDY_Pos|macro|SYSCTRL_INTFLAG_BOD33RDY_Pos
DECL|SYSCTRL_INTFLAG_BOD33RDY|macro|SYSCTRL_INTFLAG_BOD33RDY
DECL|SYSCTRL_INTFLAG_DFLLLCKC_Pos|macro|SYSCTRL_INTFLAG_DFLLLCKC_Pos
DECL|SYSCTRL_INTFLAG_DFLLLCKC|macro|SYSCTRL_INTFLAG_DFLLLCKC
DECL|SYSCTRL_INTFLAG_DFLLLCKF_Pos|macro|SYSCTRL_INTFLAG_DFLLLCKF_Pos
DECL|SYSCTRL_INTFLAG_DFLLLCKF|macro|SYSCTRL_INTFLAG_DFLLLCKF
DECL|SYSCTRL_INTFLAG_DFLLOOB_Pos|macro|SYSCTRL_INTFLAG_DFLLOOB_Pos
DECL|SYSCTRL_INTFLAG_DFLLOOB|macro|SYSCTRL_INTFLAG_DFLLOOB
DECL|SYSCTRL_INTFLAG_DFLLRCS_Pos|macro|SYSCTRL_INTFLAG_DFLLRCS_Pos
DECL|SYSCTRL_INTFLAG_DFLLRCS|macro|SYSCTRL_INTFLAG_DFLLRCS
DECL|SYSCTRL_INTFLAG_DFLLRDY_Pos|macro|SYSCTRL_INTFLAG_DFLLRDY_Pos
DECL|SYSCTRL_INTFLAG_DFLLRDY|macro|SYSCTRL_INTFLAG_DFLLRDY
DECL|SYSCTRL_INTFLAG_MASK|macro|SYSCTRL_INTFLAG_MASK
DECL|SYSCTRL_INTFLAG_OFFSET|macro|SYSCTRL_INTFLAG_OFFSET
DECL|SYSCTRL_INTFLAG_OSC32KRDY_Pos|macro|SYSCTRL_INTFLAG_OSC32KRDY_Pos
DECL|SYSCTRL_INTFLAG_OSC32KRDY|macro|SYSCTRL_INTFLAG_OSC32KRDY
DECL|SYSCTRL_INTFLAG_OSC8MRDY_Pos|macro|SYSCTRL_INTFLAG_OSC8MRDY_Pos
DECL|SYSCTRL_INTFLAG_OSC8MRDY|macro|SYSCTRL_INTFLAG_OSC8MRDY
DECL|SYSCTRL_INTFLAG_RESETVALUE|macro|SYSCTRL_INTFLAG_RESETVALUE
DECL|SYSCTRL_INTFLAG_Type|typedef|} SYSCTRL_INTFLAG_Type;
DECL|SYSCTRL_INTFLAG_XOSC32KRDY_Pos|macro|SYSCTRL_INTFLAG_XOSC32KRDY_Pos
DECL|SYSCTRL_INTFLAG_XOSC32KRDY|macro|SYSCTRL_INTFLAG_XOSC32KRDY
DECL|SYSCTRL_INTFLAG_XOSCRDY_Pos|macro|SYSCTRL_INTFLAG_XOSCRDY_Pos
DECL|SYSCTRL_INTFLAG_XOSCRDY|macro|SYSCTRL_INTFLAG_XOSCRDY
DECL|SYSCTRL_OSC32K_CALIB_Msk|macro|SYSCTRL_OSC32K_CALIB_Msk
DECL|SYSCTRL_OSC32K_CALIB_Pos|macro|SYSCTRL_OSC32K_CALIB_Pos
DECL|SYSCTRL_OSC32K_CALIB|macro|SYSCTRL_OSC32K_CALIB
DECL|SYSCTRL_OSC32K_EN1K_Pos|macro|SYSCTRL_OSC32K_EN1K_Pos
DECL|SYSCTRL_OSC32K_EN1K|macro|SYSCTRL_OSC32K_EN1K
DECL|SYSCTRL_OSC32K_EN32K_Pos|macro|SYSCTRL_OSC32K_EN32K_Pos
DECL|SYSCTRL_OSC32K_EN32K|macro|SYSCTRL_OSC32K_EN32K
DECL|SYSCTRL_OSC32K_ENABLE_Pos|macro|SYSCTRL_OSC32K_ENABLE_Pos
DECL|SYSCTRL_OSC32K_ENABLE|macro|SYSCTRL_OSC32K_ENABLE
DECL|SYSCTRL_OSC32K_MASK|macro|SYSCTRL_OSC32K_MASK
DECL|SYSCTRL_OSC32K_OFFSET|macro|SYSCTRL_OSC32K_OFFSET
DECL|SYSCTRL_OSC32K_ONDEMAND_Pos|macro|SYSCTRL_OSC32K_ONDEMAND_Pos
DECL|SYSCTRL_OSC32K_ONDEMAND|macro|SYSCTRL_OSC32K_ONDEMAND
DECL|SYSCTRL_OSC32K_RESETVALUE|macro|SYSCTRL_OSC32K_RESETVALUE
DECL|SYSCTRL_OSC32K_RUNSTDBY_Pos|macro|SYSCTRL_OSC32K_RUNSTDBY_Pos
DECL|SYSCTRL_OSC32K_RUNSTDBY|macro|SYSCTRL_OSC32K_RUNSTDBY
DECL|SYSCTRL_OSC32K_STARTUP_Msk|macro|SYSCTRL_OSC32K_STARTUP_Msk
DECL|SYSCTRL_OSC32K_STARTUP_Pos|macro|SYSCTRL_OSC32K_STARTUP_Pos
DECL|SYSCTRL_OSC32K_STARTUP|macro|SYSCTRL_OSC32K_STARTUP
DECL|SYSCTRL_OSC32K_Type|typedef|} SYSCTRL_OSC32K_Type;
DECL|SYSCTRL_OSC32K_WRTLOCK_Pos|macro|SYSCTRL_OSC32K_WRTLOCK_Pos
DECL|SYSCTRL_OSC32K_WRTLOCK|macro|SYSCTRL_OSC32K_WRTLOCK
DECL|SYSCTRL_OSC8M_CALIB_Msk|macro|SYSCTRL_OSC8M_CALIB_Msk
DECL|SYSCTRL_OSC8M_CALIB_Pos|macro|SYSCTRL_OSC8M_CALIB_Pos
DECL|SYSCTRL_OSC8M_CALIB|macro|SYSCTRL_OSC8M_CALIB
DECL|SYSCTRL_OSC8M_ENABLE_Pos|macro|SYSCTRL_OSC8M_ENABLE_Pos
DECL|SYSCTRL_OSC8M_ENABLE|macro|SYSCTRL_OSC8M_ENABLE
DECL|SYSCTRL_OSC8M_FRANGE_Msk|macro|SYSCTRL_OSC8M_FRANGE_Msk
DECL|SYSCTRL_OSC8M_FRANGE_Pos|macro|SYSCTRL_OSC8M_FRANGE_Pos
DECL|SYSCTRL_OSC8M_FRANGE|macro|SYSCTRL_OSC8M_FRANGE
DECL|SYSCTRL_OSC8M_MASK|macro|SYSCTRL_OSC8M_MASK
DECL|SYSCTRL_OSC8M_OFFSET|macro|SYSCTRL_OSC8M_OFFSET
DECL|SYSCTRL_OSC8M_ONDEMAND_Pos|macro|SYSCTRL_OSC8M_ONDEMAND_Pos
DECL|SYSCTRL_OSC8M_ONDEMAND|macro|SYSCTRL_OSC8M_ONDEMAND
DECL|SYSCTRL_OSC8M_PRESC_Msk|macro|SYSCTRL_OSC8M_PRESC_Msk
DECL|SYSCTRL_OSC8M_PRESC_Pos|macro|SYSCTRL_OSC8M_PRESC_Pos
DECL|SYSCTRL_OSC8M_PRESC|macro|SYSCTRL_OSC8M_PRESC
DECL|SYSCTRL_OSC8M_RESETVALUE|macro|SYSCTRL_OSC8M_RESETVALUE
DECL|SYSCTRL_OSC8M_RUNSTDBY_Pos|macro|SYSCTRL_OSC8M_RUNSTDBY_Pos
DECL|SYSCTRL_OSC8M_RUNSTDBY|macro|SYSCTRL_OSC8M_RUNSTDBY
DECL|SYSCTRL_OSC8M_Type|typedef|} SYSCTRL_OSC8M_Type;
DECL|SYSCTRL_OSCULP32K_CALIB_Msk|macro|SYSCTRL_OSCULP32K_CALIB_Msk
DECL|SYSCTRL_OSCULP32K_CALIB_Pos|macro|SYSCTRL_OSCULP32K_CALIB_Pos
DECL|SYSCTRL_OSCULP32K_CALIB|macro|SYSCTRL_OSCULP32K_CALIB
DECL|SYSCTRL_OSCULP32K_MASK|macro|SYSCTRL_OSCULP32K_MASK
DECL|SYSCTRL_OSCULP32K_OFFSET|macro|SYSCTRL_OSCULP32K_OFFSET
DECL|SYSCTRL_OSCULP32K_RESETVALUE|macro|SYSCTRL_OSCULP32K_RESETVALUE
DECL|SYSCTRL_OSCULP32K_Type|typedef|} SYSCTRL_OSCULP32K_Type;
DECL|SYSCTRL_OSCULP32K_WRTLOCK_Pos|macro|SYSCTRL_OSCULP32K_WRTLOCK_Pos
DECL|SYSCTRL_OSCULP32K_WRTLOCK|macro|SYSCTRL_OSCULP32K_WRTLOCK
DECL|SYSCTRL_PCLKSR_B33SRDY_Pos|macro|SYSCTRL_PCLKSR_B33SRDY_Pos
DECL|SYSCTRL_PCLKSR_B33SRDY|macro|SYSCTRL_PCLKSR_B33SRDY
DECL|SYSCTRL_PCLKSR_BOD33DET_Pos|macro|SYSCTRL_PCLKSR_BOD33DET_Pos
DECL|SYSCTRL_PCLKSR_BOD33DET|macro|SYSCTRL_PCLKSR_BOD33DET
DECL|SYSCTRL_PCLKSR_BOD33RDY_Pos|macro|SYSCTRL_PCLKSR_BOD33RDY_Pos
DECL|SYSCTRL_PCLKSR_BOD33RDY|macro|SYSCTRL_PCLKSR_BOD33RDY
DECL|SYSCTRL_PCLKSR_DFLLLCKC_Pos|macro|SYSCTRL_PCLKSR_DFLLLCKC_Pos
DECL|SYSCTRL_PCLKSR_DFLLLCKC|macro|SYSCTRL_PCLKSR_DFLLLCKC
DECL|SYSCTRL_PCLKSR_DFLLLCKF_Pos|macro|SYSCTRL_PCLKSR_DFLLLCKF_Pos
DECL|SYSCTRL_PCLKSR_DFLLLCKF|macro|SYSCTRL_PCLKSR_DFLLLCKF
DECL|SYSCTRL_PCLKSR_DFLLOOB_Pos|macro|SYSCTRL_PCLKSR_DFLLOOB_Pos
DECL|SYSCTRL_PCLKSR_DFLLOOB|macro|SYSCTRL_PCLKSR_DFLLOOB
DECL|SYSCTRL_PCLKSR_DFLLRCS_Pos|macro|SYSCTRL_PCLKSR_DFLLRCS_Pos
DECL|SYSCTRL_PCLKSR_DFLLRCS|macro|SYSCTRL_PCLKSR_DFLLRCS
DECL|SYSCTRL_PCLKSR_DFLLRDY_Pos|macro|SYSCTRL_PCLKSR_DFLLRDY_Pos
DECL|SYSCTRL_PCLKSR_DFLLRDY|macro|SYSCTRL_PCLKSR_DFLLRDY
DECL|SYSCTRL_PCLKSR_MASK|macro|SYSCTRL_PCLKSR_MASK
DECL|SYSCTRL_PCLKSR_OFFSET|macro|SYSCTRL_PCLKSR_OFFSET
DECL|SYSCTRL_PCLKSR_OSC32KRDY_Pos|macro|SYSCTRL_PCLKSR_OSC32KRDY_Pos
DECL|SYSCTRL_PCLKSR_OSC32KRDY|macro|SYSCTRL_PCLKSR_OSC32KRDY
DECL|SYSCTRL_PCLKSR_OSC8MRDY_Pos|macro|SYSCTRL_PCLKSR_OSC8MRDY_Pos
DECL|SYSCTRL_PCLKSR_OSC8MRDY|macro|SYSCTRL_PCLKSR_OSC8MRDY
DECL|SYSCTRL_PCLKSR_RESETVALUE|macro|SYSCTRL_PCLKSR_RESETVALUE
DECL|SYSCTRL_PCLKSR_Type|typedef|} SYSCTRL_PCLKSR_Type;
DECL|SYSCTRL_PCLKSR_XOSC32KRDY_Pos|macro|SYSCTRL_PCLKSR_XOSC32KRDY_Pos
DECL|SYSCTRL_PCLKSR_XOSC32KRDY|macro|SYSCTRL_PCLKSR_XOSC32KRDY
DECL|SYSCTRL_PCLKSR_XOSCRDY_Pos|macro|SYSCTRL_PCLKSR_XOSCRDY_Pos
DECL|SYSCTRL_PCLKSR_XOSCRDY|macro|SYSCTRL_PCLKSR_XOSCRDY
DECL|SYSCTRL_U2100|macro|SYSCTRL_U2100
DECL|SYSCTRL_VREF_BGOUTEN_Pos|macro|SYSCTRL_VREF_BGOUTEN_Pos
DECL|SYSCTRL_VREF_BGOUTEN|macro|SYSCTRL_VREF_BGOUTEN
DECL|SYSCTRL_VREF_CALIB_Msk|macro|SYSCTRL_VREF_CALIB_Msk
DECL|SYSCTRL_VREF_CALIB_Pos|macro|SYSCTRL_VREF_CALIB_Pos
DECL|SYSCTRL_VREF_CALIB|macro|SYSCTRL_VREF_CALIB
DECL|SYSCTRL_VREF_MASK|macro|SYSCTRL_VREF_MASK
DECL|SYSCTRL_VREF_OFFSET|macro|SYSCTRL_VREF_OFFSET
DECL|SYSCTRL_VREF_RESETVALUE|macro|SYSCTRL_VREF_RESETVALUE
DECL|SYSCTRL_VREF_TSEN_Pos|macro|SYSCTRL_VREF_TSEN_Pos
DECL|SYSCTRL_VREF_TSEN|macro|SYSCTRL_VREF_TSEN
DECL|SYSCTRL_VREF_Type|typedef|} SYSCTRL_VREF_Type;
DECL|SYSCTRL_VREG_FORCELDO_Pos|macro|SYSCTRL_VREG_FORCELDO_Pos
DECL|SYSCTRL_VREG_FORCELDO|macro|SYSCTRL_VREG_FORCELDO
DECL|SYSCTRL_VREG_MASK|macro|SYSCTRL_VREG_MASK
DECL|SYSCTRL_VREG_OFFSET|macro|SYSCTRL_VREG_OFFSET
DECL|SYSCTRL_VREG_RESETVALUE|macro|SYSCTRL_VREG_RESETVALUE
DECL|SYSCTRL_VREG_RUNSTDBY_Pos|macro|SYSCTRL_VREG_RUNSTDBY_Pos
DECL|SYSCTRL_VREG_RUNSTDBY|macro|SYSCTRL_VREG_RUNSTDBY
DECL|SYSCTRL_VREG_Type|typedef|} SYSCTRL_VREG_Type;
DECL|SYSCTRL_XOSC32K_AAMPEN_Pos|macro|SYSCTRL_XOSC32K_AAMPEN_Pos
DECL|SYSCTRL_XOSC32K_AAMPEN|macro|SYSCTRL_XOSC32K_AAMPEN
DECL|SYSCTRL_XOSC32K_EN1K_Pos|macro|SYSCTRL_XOSC32K_EN1K_Pos
DECL|SYSCTRL_XOSC32K_EN1K|macro|SYSCTRL_XOSC32K_EN1K
DECL|SYSCTRL_XOSC32K_EN32K_Pos|macro|SYSCTRL_XOSC32K_EN32K_Pos
DECL|SYSCTRL_XOSC32K_EN32K|macro|SYSCTRL_XOSC32K_EN32K
DECL|SYSCTRL_XOSC32K_ENABLE_Pos|macro|SYSCTRL_XOSC32K_ENABLE_Pos
DECL|SYSCTRL_XOSC32K_ENABLE|macro|SYSCTRL_XOSC32K_ENABLE
DECL|SYSCTRL_XOSC32K_MASK|macro|SYSCTRL_XOSC32K_MASK
DECL|SYSCTRL_XOSC32K_OFFSET|macro|SYSCTRL_XOSC32K_OFFSET
DECL|SYSCTRL_XOSC32K_ONDEMAND_Pos|macro|SYSCTRL_XOSC32K_ONDEMAND_Pos
DECL|SYSCTRL_XOSC32K_ONDEMAND|macro|SYSCTRL_XOSC32K_ONDEMAND
DECL|SYSCTRL_XOSC32K_RESETVALUE|macro|SYSCTRL_XOSC32K_RESETVALUE
DECL|SYSCTRL_XOSC32K_RUNSTDBY_Pos|macro|SYSCTRL_XOSC32K_RUNSTDBY_Pos
DECL|SYSCTRL_XOSC32K_RUNSTDBY|macro|SYSCTRL_XOSC32K_RUNSTDBY
DECL|SYSCTRL_XOSC32K_STARTUP_Msk|macro|SYSCTRL_XOSC32K_STARTUP_Msk
DECL|SYSCTRL_XOSC32K_STARTUP_Pos|macro|SYSCTRL_XOSC32K_STARTUP_Pos
DECL|SYSCTRL_XOSC32K_STARTUP|macro|SYSCTRL_XOSC32K_STARTUP
DECL|SYSCTRL_XOSC32K_Type|typedef|} SYSCTRL_XOSC32K_Type;
DECL|SYSCTRL_XOSC32K_WRTLOCK_Pos|macro|SYSCTRL_XOSC32K_WRTLOCK_Pos
DECL|SYSCTRL_XOSC32K_WRTLOCK|macro|SYSCTRL_XOSC32K_WRTLOCK
DECL|SYSCTRL_XOSC32K_XTALEN_Pos|macro|SYSCTRL_XOSC32K_XTALEN_Pos
DECL|SYSCTRL_XOSC32K_XTALEN|macro|SYSCTRL_XOSC32K_XTALEN
DECL|SYSCTRL_XOSC_AMPGC_Pos|macro|SYSCTRL_XOSC_AMPGC_Pos
DECL|SYSCTRL_XOSC_AMPGC|macro|SYSCTRL_XOSC_AMPGC
DECL|SYSCTRL_XOSC_ENABLE_Pos|macro|SYSCTRL_XOSC_ENABLE_Pos
DECL|SYSCTRL_XOSC_ENABLE|macro|SYSCTRL_XOSC_ENABLE
DECL|SYSCTRL_XOSC_GAIN_Msk|macro|SYSCTRL_XOSC_GAIN_Msk
DECL|SYSCTRL_XOSC_GAIN_Pos|macro|SYSCTRL_XOSC_GAIN_Pos
DECL|SYSCTRL_XOSC_GAIN|macro|SYSCTRL_XOSC_GAIN
DECL|SYSCTRL_XOSC_MASK|macro|SYSCTRL_XOSC_MASK
DECL|SYSCTRL_XOSC_OFFSET|macro|SYSCTRL_XOSC_OFFSET
DECL|SYSCTRL_XOSC_ONDEMAND_Pos|macro|SYSCTRL_XOSC_ONDEMAND_Pos
DECL|SYSCTRL_XOSC_ONDEMAND|macro|SYSCTRL_XOSC_ONDEMAND
DECL|SYSCTRL_XOSC_RESETVALUE|macro|SYSCTRL_XOSC_RESETVALUE
DECL|SYSCTRL_XOSC_RUNSTDBY_Pos|macro|SYSCTRL_XOSC_RUNSTDBY_Pos
DECL|SYSCTRL_XOSC_RUNSTDBY|macro|SYSCTRL_XOSC_RUNSTDBY
DECL|SYSCTRL_XOSC_STARTUP_Msk|macro|SYSCTRL_XOSC_STARTUP_Msk
DECL|SYSCTRL_XOSC_STARTUP_Pos|macro|SYSCTRL_XOSC_STARTUP_Pos
DECL|SYSCTRL_XOSC_STARTUP|macro|SYSCTRL_XOSC_STARTUP
DECL|SYSCTRL_XOSC_Type|typedef|} SYSCTRL_XOSC_Type;
DECL|SYSCTRL_XOSC_XTALEN_Pos|macro|SYSCTRL_XOSC_XTALEN_Pos
DECL|SYSCTRL_XOSC_XTALEN|macro|SYSCTRL_XOSC_XTALEN
DECL|Sysctrl|typedef|} Sysctrl;
DECL|TSEN|member|uint32_t TSEN:1; /*!< bit: 1 Temperature Sensor Output Enable */
DECL|VREF|member|__IO SYSCTRL_VREF_Type VREF; /**< \brief Offset: 0x40 (R/W 32) VREF Control A */
DECL|VREG|member|__IO SYSCTRL_VREG_Type VREG; /**< \brief Offset: 0x3C (R/W 16) VREG Control */
DECL|WRTLOCK|member|uint16_t WRTLOCK:1; /*!< bit: 12 Write Lock */
DECL|WRTLOCK|member|uint32_t WRTLOCK:1; /*!< bit: 12 Write Lock */
DECL|WRTLOCK|member|uint8_t WRTLOCK:1; /*!< bit: 7 Write Lock */
DECL|XOSC32KRDY|member|__I uint32_t XOSC32KRDY:1; /*!< bit: 1 XOSC32K Ready */
DECL|XOSC32KRDY|member|uint32_t XOSC32KRDY:1; /*!< bit: 1 XOSC32K Ready */
DECL|XOSC32KRDY|member|uint32_t XOSC32KRDY:1; /*!< bit: 1 XOSC32K Ready */
DECL|XOSC32KRDY|member|uint32_t XOSC32KRDY:1; /*!< bit: 1 XOSC32K Ready */
DECL|XOSC32K|member|__IO SYSCTRL_XOSC32K_Type XOSC32K; /**< \brief Offset: 0x14 (R/W 16) XOSC32K Control */
DECL|XOSCRDY|member|__I uint32_t XOSCRDY:1; /*!< bit: 0 XOSC Ready */
DECL|XOSCRDY|member|uint32_t XOSCRDY:1; /*!< bit: 0 XOSC Ready */
DECL|XOSCRDY|member|uint32_t XOSCRDY:1; /*!< bit: 0 XOSC Ready */
DECL|XOSCRDY|member|uint32_t XOSCRDY:1; /*!< bit: 0 XOSC Ready */
DECL|XOSC|member|__IO SYSCTRL_XOSC_Type XOSC; /**< \brief Offset: 0x10 (R/W 16) XOSC Control */
DECL|XTALEN|member|uint16_t XTALEN:1; /*!< bit: 2 Crystal Oscillator Enable */
DECL|XTALEN|member|uint16_t XTALEN:1; /*!< bit: 2 Crystal Oscillator Enable */
DECL|_SAMD20_SYSCTRL_COMPONENT_|macro|_SAMD20_SYSCTRL_COMPONENT_
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 0 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 0 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 0 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 11 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 5 Reserved */
DECL|uint16_t|member|uint16_t :2; /*!< bit: 14..15 Reserved */
DECL|uint16_t|member|uint16_t :3; /*!< bit: 13..15 Reserved */
DECL|uint16_t|member|uint16_t :3; /*!< bit: 3.. 5 Reserved */
DECL|uint16_t|member|uint16_t :6; /*!< bit: 0.. 5 Reserved */
DECL|uint16_t|member|uint16_t :6; /*!< bit: 10..15 Reserved */
DECL|uint16_t|member|uint16_t :6; /*!< bit: 7..12 Reserved */
DECL|uint32_t|member|__I uint32_t :20; /*!< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :10; /*!< bit: 22..31 Reserved */
DECL|uint32_t|member|uint32_t :13; /*!< bit: 3..15 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 0 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 0 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 0 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 0 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 11 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 5 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :20; /*!< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :20; /*!< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :20; /*!< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /*!< bit: 10..11 Reserved */
DECL|uint32_t|member|uint32_t :2; /*!< bit: 28..29 Reserved */
DECL|uint32_t|member|uint32_t :2; /*!< bit: 4.. 5 Reserved */
DECL|uint32_t|member|uint32_t :3; /*!< bit: 13..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /*!< bit: 2.. 5 Reserved */
DECL|uint32_t|member|uint32_t :5; /*!< bit: 27..31 Reserved */
DECL|uint32_t|member|uint32_t :6; /*!< bit: 10..15 Reserved */
DECL|uint32_t|member|uint32_t :9; /*!< bit: 23..31 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 5.. 6 Reserved */
DECL|uint8_t|member|uint8_t :7; /*!< bit: 0.. 6 Reserved */
