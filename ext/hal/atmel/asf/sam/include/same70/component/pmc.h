DECL|AIP|member|uint32_t AIP:1; /**< bit: 0 Activity In Progress */
DECL|CAL12|member|uint32_t CAL12:7; /**< bit: 16..22 RC Oscillator Calibration bits for 12 MHz */
DECL|CAL4|member|uint32_t CAL4:7; /**< bit: 0..6 RC Oscillator Calibration bits for 4 MHz */
DECL|CAL8|member|uint32_t CAL8:7; /**< bit: 8..14 RC Oscillator Calibration bits for 8 MHz */
DECL|CCSS|member|uint32_t CCSS:1; /**< bit: 24 Counter Clock Source Selection */
DECL|CFDEN|member|uint32_t CFDEN:1; /**< bit: 25 Clock Failure Detector Enable */
DECL|CFDEV|member|uint32_t CFDEV:1; /**< bit: 18 Clock Failure Detector Event */
DECL|CFDEV|member|uint32_t CFDEV:1; /**< bit: 18 Clock Failure Detector Event Interrupt Disable */
DECL|CFDEV|member|uint32_t CFDEV:1; /**< bit: 18 Clock Failure Detector Event Interrupt Enable */
DECL|CFDEV|member|uint32_t CFDEV:1; /**< bit: 18 Clock Failure Detector Event Interrupt Mask */
DECL|CFDS|member|uint32_t CFDS:1; /**< bit: 19 Clock Failure Detector Status */
DECL|CKGR_MCFR_CCSS_Msk|macro|CKGR_MCFR_CCSS_Msk
DECL|CKGR_MCFR_CCSS_Pos|macro|CKGR_MCFR_CCSS_Pos
DECL|CKGR_MCFR_CCSS|macro|CKGR_MCFR_CCSS
DECL|CKGR_MCFR_MAINFRDY_Msk|macro|CKGR_MCFR_MAINFRDY_Msk
DECL|CKGR_MCFR_MAINFRDY_Pos|macro|CKGR_MCFR_MAINFRDY_Pos
DECL|CKGR_MCFR_MAINFRDY|macro|CKGR_MCFR_MAINFRDY
DECL|CKGR_MCFR_MAINF_Msk|macro|CKGR_MCFR_MAINF_Msk
DECL|CKGR_MCFR_MAINF_Pos|macro|CKGR_MCFR_MAINF_Pos
DECL|CKGR_MCFR_MAINF|macro|CKGR_MCFR_MAINF
DECL|CKGR_MCFR_MASK|macro|CKGR_MCFR_MASK
DECL|CKGR_MCFR_Msk|macro|CKGR_MCFR_Msk
DECL|CKGR_MCFR_OFFSET|macro|CKGR_MCFR_OFFSET
DECL|CKGR_MCFR_RCMEAS_Msk|macro|CKGR_MCFR_RCMEAS_Msk
DECL|CKGR_MCFR_RCMEAS_Pos|macro|CKGR_MCFR_RCMEAS_Pos
DECL|CKGR_MCFR_RCMEAS|macro|CKGR_MCFR_RCMEAS
DECL|CKGR_MCFR_Type|typedef|} CKGR_MCFR_Type;
DECL|CKGR_MCFR|member|__IO CKGR_MCFR_Type CKGR_MCFR; /**< Offset: 0x24 (R/W 32) Main Clock Frequency Register */
DECL|CKGR_MCFR|member|__IO uint32_t CKGR_MCFR; /**< (PMC Offset: 0x24) Main Clock Frequency Register */
DECL|CKGR_MOR_CFDEN_Msk|macro|CKGR_MOR_CFDEN_Msk
DECL|CKGR_MOR_CFDEN_Pos|macro|CKGR_MOR_CFDEN_Pos
DECL|CKGR_MOR_CFDEN|macro|CKGR_MOR_CFDEN
DECL|CKGR_MOR_KEY_Msk|macro|CKGR_MOR_KEY_Msk
DECL|CKGR_MOR_KEY_PASSWD_Val|macro|CKGR_MOR_KEY_PASSWD_Val
DECL|CKGR_MOR_KEY_PASSWD|macro|CKGR_MOR_KEY_PASSWD
DECL|CKGR_MOR_KEY_Pos|macro|CKGR_MOR_KEY_Pos
DECL|CKGR_MOR_KEY|macro|CKGR_MOR_KEY
DECL|CKGR_MOR_MASK|macro|CKGR_MOR_MASK
DECL|CKGR_MOR_MOSCRCEN_Msk|macro|CKGR_MOR_MOSCRCEN_Msk
DECL|CKGR_MOR_MOSCRCEN_Pos|macro|CKGR_MOR_MOSCRCEN_Pos
DECL|CKGR_MOR_MOSCRCEN|macro|CKGR_MOR_MOSCRCEN
DECL|CKGR_MOR_MOSCRCF_12_MHz_Val|macro|CKGR_MOR_MOSCRCF_12_MHz_Val
DECL|CKGR_MOR_MOSCRCF_12_MHz|macro|CKGR_MOR_MOSCRCF_12_MHz
DECL|CKGR_MOR_MOSCRCF_4_MHz_Val|macro|CKGR_MOR_MOSCRCF_4_MHz_Val
DECL|CKGR_MOR_MOSCRCF_4_MHz|macro|CKGR_MOR_MOSCRCF_4_MHz
DECL|CKGR_MOR_MOSCRCF_8_MHz_Val|macro|CKGR_MOR_MOSCRCF_8_MHz_Val
DECL|CKGR_MOR_MOSCRCF_8_MHz|macro|CKGR_MOR_MOSCRCF_8_MHz
DECL|CKGR_MOR_MOSCRCF_Msk|macro|CKGR_MOR_MOSCRCF_Msk
DECL|CKGR_MOR_MOSCRCF_Pos|macro|CKGR_MOR_MOSCRCF_Pos
DECL|CKGR_MOR_MOSCRCF|macro|CKGR_MOR_MOSCRCF
DECL|CKGR_MOR_MOSCSEL_Msk|macro|CKGR_MOR_MOSCSEL_Msk
DECL|CKGR_MOR_MOSCSEL_Pos|macro|CKGR_MOR_MOSCSEL_Pos
DECL|CKGR_MOR_MOSCSEL|macro|CKGR_MOR_MOSCSEL
DECL|CKGR_MOR_MOSCXTBY_Msk|macro|CKGR_MOR_MOSCXTBY_Msk
DECL|CKGR_MOR_MOSCXTBY_Pos|macro|CKGR_MOR_MOSCXTBY_Pos
DECL|CKGR_MOR_MOSCXTBY|macro|CKGR_MOR_MOSCXTBY
DECL|CKGR_MOR_MOSCXTEN_Msk|macro|CKGR_MOR_MOSCXTEN_Msk
DECL|CKGR_MOR_MOSCXTEN_Pos|macro|CKGR_MOR_MOSCXTEN_Pos
DECL|CKGR_MOR_MOSCXTEN|macro|CKGR_MOR_MOSCXTEN
DECL|CKGR_MOR_MOSCXTST_Msk|macro|CKGR_MOR_MOSCXTST_Msk
DECL|CKGR_MOR_MOSCXTST_Pos|macro|CKGR_MOR_MOSCXTST_Pos
DECL|CKGR_MOR_MOSCXTST|macro|CKGR_MOR_MOSCXTST
DECL|CKGR_MOR_Msk|macro|CKGR_MOR_Msk
DECL|CKGR_MOR_OFFSET|macro|CKGR_MOR_OFFSET
DECL|CKGR_MOR_Type|typedef|} CKGR_MOR_Type;
DECL|CKGR_MOR_WAITMODE_Msk|macro|CKGR_MOR_WAITMODE_Msk
DECL|CKGR_MOR_WAITMODE_Pos|macro|CKGR_MOR_WAITMODE_Pos
DECL|CKGR_MOR_WAITMODE|macro|CKGR_MOR_WAITMODE
DECL|CKGR_MOR_XT32KFME_Msk|macro|CKGR_MOR_XT32KFME_Msk
DECL|CKGR_MOR_XT32KFME_Pos|macro|CKGR_MOR_XT32KFME_Pos
DECL|CKGR_MOR_XT32KFME|macro|CKGR_MOR_XT32KFME
DECL|CKGR_MOR|member|__IO CKGR_MOR_Type CKGR_MOR; /**< Offset: 0x20 (R/W 32) Main Oscillator Register */
DECL|CKGR_MOR|member|__IO uint32_t CKGR_MOR; /**< (PMC Offset: 0x20) Main Oscillator Register */
DECL|CKGR_PLLAR_DIVA_0_Val|macro|CKGR_PLLAR_DIVA_0_Val
DECL|CKGR_PLLAR_DIVA_0|macro|CKGR_PLLAR_DIVA_0
DECL|CKGR_PLLAR_DIVA_BYPASS_Val|macro|CKGR_PLLAR_DIVA_BYPASS_Val
DECL|CKGR_PLLAR_DIVA_BYPASS|macro|CKGR_PLLAR_DIVA_BYPASS
DECL|CKGR_PLLAR_DIVA_Msk|macro|CKGR_PLLAR_DIVA_Msk
DECL|CKGR_PLLAR_DIVA_Pos|macro|CKGR_PLLAR_DIVA_Pos
DECL|CKGR_PLLAR_DIVA|macro|CKGR_PLLAR_DIVA
DECL|CKGR_PLLAR_MASK|macro|CKGR_PLLAR_MASK
DECL|CKGR_PLLAR_MULA_Msk|macro|CKGR_PLLAR_MULA_Msk
DECL|CKGR_PLLAR_MULA_Pos|macro|CKGR_PLLAR_MULA_Pos
DECL|CKGR_PLLAR_MULA|macro|CKGR_PLLAR_MULA
DECL|CKGR_PLLAR_Msk|macro|CKGR_PLLAR_Msk
DECL|CKGR_PLLAR_OFFSET|macro|CKGR_PLLAR_OFFSET
DECL|CKGR_PLLAR_ONE_Msk|macro|CKGR_PLLAR_ONE_Msk
DECL|CKGR_PLLAR_ONE_Pos|macro|CKGR_PLLAR_ONE_Pos
DECL|CKGR_PLLAR_ONE|macro|CKGR_PLLAR_ONE
DECL|CKGR_PLLAR_PLLACOUNT_Msk|macro|CKGR_PLLAR_PLLACOUNT_Msk
DECL|CKGR_PLLAR_PLLACOUNT_Pos|macro|CKGR_PLLAR_PLLACOUNT_Pos
DECL|CKGR_PLLAR_PLLACOUNT|macro|CKGR_PLLAR_PLLACOUNT
DECL|CKGR_PLLAR_Type|typedef|} CKGR_PLLAR_Type;
DECL|CKGR_PLLAR|member|__IO CKGR_PLLAR_Type CKGR_PLLAR; /**< Offset: 0x28 (R/W 32) PLLA Register */
DECL|CKGR_PLLAR|member|__IO uint32_t CKGR_PLLAR; /**< (PMC Offset: 0x28) PLLA Register */
DECL|CKGR_UCKR_MASK|macro|CKGR_UCKR_MASK
DECL|CKGR_UCKR_Msk|macro|CKGR_UCKR_Msk
DECL|CKGR_UCKR_OFFSET|macro|CKGR_UCKR_OFFSET
DECL|CKGR_UCKR_Type|typedef|} CKGR_UCKR_Type;
DECL|CKGR_UCKR_UPLLCOUNT_Msk|macro|CKGR_UCKR_UPLLCOUNT_Msk
DECL|CKGR_UCKR_UPLLCOUNT_Pos|macro|CKGR_UCKR_UPLLCOUNT_Pos
DECL|CKGR_UCKR_UPLLCOUNT|macro|CKGR_UCKR_UPLLCOUNT
DECL|CKGR_UCKR_UPLLEN_Msk|macro|CKGR_UCKR_UPLLEN_Msk
DECL|CKGR_UCKR_UPLLEN_Pos|macro|CKGR_UCKR_UPLLEN_Pos
DECL|CKGR_UCKR_UPLLEN|macro|CKGR_UCKR_UPLLEN
DECL|CKGR_UCKR|member|__IO CKGR_UCKR_Type CKGR_UCKR; /**< Offset: 0x1C (R/W 32) UTMI Clock Register */
DECL|CKGR_UCKR|member|__IO uint32_t CKGR_UCKR; /**< (PMC Offset: 0x1C) UTMI Clock Register */
DECL|CMD|member|uint32_t CMD:1; /**< bit: 12 Command */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|CSS|member|uint32_t CSS:2; /**< bit: 0..1 Master Clock Source Selection */
DECL|CSS|member|uint32_t CSS:3; /**< bit: 0..2 Master Clock Source Selection */
DECL|DIVA|member|uint32_t DIVA:8; /**< bit: 0..7 PLLA Front End Divider */
DECL|EN|member|uint32_t EN:1; /**< bit: 28 Enable */
DECL|FFLPM|member|uint32_t FFLPM:1; /**< bit: 23 Force Flash Low-power Mode */
DECL|FLPM|member|uint32_t FLPM:2; /**< bit: 21..22 Flash Low-power Mode */
DECL|FOCLR|member|uint32_t FOCLR:1; /**< bit: 0 Fault Output Clear */
DECL|FOS|member|uint32_t FOS:1; /**< bit: 20 Clock Failure Detector Fault Output Status */
DECL|FSTP0|member|uint32_t FSTP0:1; /**< bit: 0 Fast Startup Input Polarity 0 */
DECL|FSTP10|member|uint32_t FSTP10:1; /**< bit: 10 Fast Startup Input Polarity 10 */
DECL|FSTP11|member|uint32_t FSTP11:1; /**< bit: 11 Fast Startup Input Polarity 11 */
DECL|FSTP12|member|uint32_t FSTP12:1; /**< bit: 12 Fast Startup Input Polarity 12 */
DECL|FSTP13|member|uint32_t FSTP13:1; /**< bit: 13 Fast Startup Input Polarity 13 */
DECL|FSTP14|member|uint32_t FSTP14:1; /**< bit: 14 Fast Startup Input Polarity 14 */
DECL|FSTP15|member|uint32_t FSTP15:1; /**< bit: 15 Fast Startup Input Polarity 15 */
DECL|FSTP1|member|uint32_t FSTP1:1; /**< bit: 1 Fast Startup Input Polarity 1 */
DECL|FSTP2|member|uint32_t FSTP2:1; /**< bit: 2 Fast Startup Input Polarity 2 */
DECL|FSTP3|member|uint32_t FSTP3:1; /**< bit: 3 Fast Startup Input Polarity 3 */
DECL|FSTP4|member|uint32_t FSTP4:1; /**< bit: 4 Fast Startup Input Polarity 4 */
DECL|FSTP5|member|uint32_t FSTP5:1; /**< bit: 5 Fast Startup Input Polarity 5 */
DECL|FSTP6|member|uint32_t FSTP6:1; /**< bit: 6 Fast Startup Input Polarity 6 */
DECL|FSTP7|member|uint32_t FSTP7:1; /**< bit: 7 Fast Startup Input Polarity 7 */
DECL|FSTP8|member|uint32_t FSTP8:1; /**< bit: 8 Fast Startup Input Polarity 8 */
DECL|FSTP9|member|uint32_t FSTP9:1; /**< bit: 9 Fast Startup Input Polarity 9 */
DECL|FSTP|member|uint32_t FSTP:16; /**< bit: 0..15 Fast Startup Input Polarity x5 */
DECL|FSTT0|member|uint32_t FSTT0:1; /**< bit: 0 Fast Startup Input Enable 0 */
DECL|FSTT10|member|uint32_t FSTT10:1; /**< bit: 10 Fast Startup Input Enable 10 */
DECL|FSTT11|member|uint32_t FSTT11:1; /**< bit: 11 Fast Startup Input Enable 11 */
DECL|FSTT12|member|uint32_t FSTT12:1; /**< bit: 12 Fast Startup Input Enable 12 */
DECL|FSTT13|member|uint32_t FSTT13:1; /**< bit: 13 Fast Startup Input Enable 13 */
DECL|FSTT14|member|uint32_t FSTT14:1; /**< bit: 14 Fast Startup Input Enable 14 */
DECL|FSTT15|member|uint32_t FSTT15:1; /**< bit: 15 Fast Startup Input Enable 15 */
DECL|FSTT1|member|uint32_t FSTT1:1; /**< bit: 1 Fast Startup Input Enable 1 */
DECL|FSTT2|member|uint32_t FSTT2:1; /**< bit: 2 Fast Startup Input Enable 2 */
DECL|FSTT3|member|uint32_t FSTT3:1; /**< bit: 3 Fast Startup Input Enable 3 */
DECL|FSTT4|member|uint32_t FSTT4:1; /**< bit: 4 Fast Startup Input Enable 4 */
DECL|FSTT5|member|uint32_t FSTT5:1; /**< bit: 5 Fast Startup Input Enable 5 */
DECL|FSTT6|member|uint32_t FSTT6:1; /**< bit: 6 Fast Startup Input Enable 6 */
DECL|FSTT7|member|uint32_t FSTT7:1; /**< bit: 7 Fast Startup Input Enable 7 */
DECL|FSTT8|member|uint32_t FSTT8:1; /**< bit: 8 Fast Startup Input Enable 8 */
DECL|FSTT9|member|uint32_t FSTT9:1; /**< bit: 9 Fast Startup Input Enable 9 */
DECL|GCLKCSS|member|uint32_t GCLKCSS:3; /**< bit: 8..10 Generic Clock Source Selection */
DECL|GCLKDIV|member|uint32_t GCLKDIV:8; /**< bit: 20..27 Generic Clock Division Ratio */
DECL|GCLKEN|member|uint32_t GCLKEN:1; /**< bit: 29 Generic Clock Enable */
DECL|HCLKS|member|uint32_t HCLKS:1; /**< bit: 0 Processor Clock Status */
DECL|KEY|member|uint32_t KEY:8; /**< bit: 16..23 Write Access Password */
DECL|LOCKA|member|uint32_t LOCKA:1; /**< bit: 1 PLLA Lock Interrupt Disable */
DECL|LOCKA|member|uint32_t LOCKA:1; /**< bit: 1 PLLA Lock Interrupt Enable */
DECL|LOCKA|member|uint32_t LOCKA:1; /**< bit: 1 PLLA Lock Interrupt Mask */
DECL|LOCKA|member|uint32_t LOCKA:1; /**< bit: 1 PLLA Lock Status */
DECL|LOCKU|member|uint32_t LOCKU:1; /**< bit: 6 UTMI PLL Lock Interrupt Disable */
DECL|LOCKU|member|uint32_t LOCKU:1; /**< bit: 6 UTMI PLL Lock Interrupt Enable */
DECL|LOCKU|member|uint32_t LOCKU:1; /**< bit: 6 UTMI PLL Lock Interrupt Mask */
DECL|LOCKU|member|uint32_t LOCKU:1; /**< bit: 6 UTMI PLL Lock Status */
DECL|LPM|member|uint32_t LPM:1; /**< bit: 20 Low-power Mode */
DECL|MAINFRDY|member|uint32_t MAINFRDY:1; /**< bit: 16 Main Clock Frequency Measure Ready */
DECL|MAINF|member|uint32_t MAINF:16; /**< bit: 0..15 Main Clock Frequency */
DECL|MCKRDY|member|uint32_t MCKRDY:1; /**< bit: 3 Master Clock Ready Interrupt Disable */
DECL|MCKRDY|member|uint32_t MCKRDY:1; /**< bit: 3 Master Clock Ready Interrupt Enable */
DECL|MCKRDY|member|uint32_t MCKRDY:1; /**< bit: 3 Master Clock Ready Interrupt Mask */
DECL|MCKRDY|member|uint32_t MCKRDY:1; /**< bit: 3 Master Clock Status */
DECL|MDIV|member|uint32_t MDIV:2; /**< bit: 8..9 Master Clock Division */
DECL|MOSCRCEN|member|uint32_t MOSCRCEN:1; /**< bit: 3 4/8/12 MHz On-Chip RC Oscillator Enable */
DECL|MOSCRCF|member|uint32_t MOSCRCF:3; /**< bit: 4..6 4/8/12 MHz RC Oscillator Frequency Selection */
DECL|MOSCRCS|member|uint32_t MOSCRCS:1; /**< bit: 17 4/8/12 MHz RC Oscillator Status */
DECL|MOSCRCS|member|uint32_t MOSCRCS:1; /**< bit: 17 4/8/12 MHz RC Oscillator Status Interrupt Enable */
DECL|MOSCRCS|member|uint32_t MOSCRCS:1; /**< bit: 17 4/8/12 MHz RC Status Interrupt Disable */
DECL|MOSCRCS|member|uint32_t MOSCRCS:1; /**< bit: 17 4/8/12 MHz RC Status Interrupt Mask */
DECL|MOSCSELS|member|uint32_t MOSCSELS:1; /**< bit: 16 Main Clock Source Oscillator Selection Status */
DECL|MOSCSELS|member|uint32_t MOSCSELS:1; /**< bit: 16 Main Clock Source Oscillator Selection Status Interrupt Disable */
DECL|MOSCSELS|member|uint32_t MOSCSELS:1; /**< bit: 16 Main Clock Source Oscillator Selection Status Interrupt Enable */
DECL|MOSCSELS|member|uint32_t MOSCSELS:1; /**< bit: 16 Main Clock Source Oscillator Selection Status Interrupt Mask */
DECL|MOSCSEL|member|uint32_t MOSCSEL:1; /**< bit: 24 Main Clock Oscillator Selection */
DECL|MOSCXTBY|member|uint32_t MOSCXTBY:1; /**< bit: 1 3 to 20 MHz Crystal Oscillator Bypass */
DECL|MOSCXTEN|member|uint32_t MOSCXTEN:1; /**< bit: 0 3 to 20 MHz Crystal Oscillator Enable */
DECL|MOSCXTST|member|uint32_t MOSCXTST:8; /**< bit: 8..15 3 to 20 MHz Crystal Oscillator Start-up Time */
DECL|MOSCXTS|member|uint32_t MOSCXTS:1; /**< bit: 0 3 to 20 MHz Crystal Oscillator Status */
DECL|MOSCXTS|member|uint32_t MOSCXTS:1; /**< bit: 0 3 to 20 MHz Crystal Oscillator Status Interrupt Disable */
DECL|MOSCXTS|member|uint32_t MOSCXTS:1; /**< bit: 0 3 to 20 MHz Crystal Oscillator Status Interrupt Enable */
DECL|MOSCXTS|member|uint32_t MOSCXTS:1; /**< bit: 0 3 to 20 MHz Crystal Oscillator Status Interrupt Mask */
DECL|MULA|member|uint32_t MULA:11; /**< bit: 16..26 PLLA Multiplier */
DECL|ONE|member|uint32_t ONE:1; /**< bit: 29 Must Be Set to 1 */
DECL|OSCSELS|member|uint32_t OSCSELS:1; /**< bit: 7 Slow Clock Source Oscillator Selection */
DECL|PCK0|member|uint32_t PCK0:1; /**< bit: 8 Programmable Clock 0 Output Disable */
DECL|PCK0|member|uint32_t PCK0:1; /**< bit: 8 Programmable Clock 0 Output Enable */
DECL|PCK0|member|uint32_t PCK0:1; /**< bit: 8 Programmable Clock 0 Output Status */
DECL|PCK1|member|uint32_t PCK1:1; /**< bit: 9 Programmable Clock 1 Output Disable */
DECL|PCK1|member|uint32_t PCK1:1; /**< bit: 9 Programmable Clock 1 Output Enable */
DECL|PCK1|member|uint32_t PCK1:1; /**< bit: 9 Programmable Clock 1 Output Status */
DECL|PCK2|member|uint32_t PCK2:1; /**< bit: 10 Programmable Clock 2 Output Disable */
DECL|PCK2|member|uint32_t PCK2:1; /**< bit: 10 Programmable Clock 2 Output Enable */
DECL|PCK2|member|uint32_t PCK2:1; /**< bit: 10 Programmable Clock 2 Output Status */
DECL|PCK3|member|uint32_t PCK3:1; /**< bit: 11 Programmable Clock 3 Output Disable */
DECL|PCK3|member|uint32_t PCK3:1; /**< bit: 11 Programmable Clock 3 Output Enable */
DECL|PCK3|member|uint32_t PCK3:1; /**< bit: 11 Programmable Clock 3 Output Status */
DECL|PCK4|member|uint32_t PCK4:1; /**< bit: 12 Programmable Clock 4 Output Disable */
DECL|PCK4|member|uint32_t PCK4:1; /**< bit: 12 Programmable Clock 4 Output Enable */
DECL|PCK4|member|uint32_t PCK4:1; /**< bit: 12 Programmable Clock 4 Output Status */
DECL|PCK5|member|uint32_t PCK5:1; /**< bit: 13 Programmable Clock 5 Output Disable */
DECL|PCK5|member|uint32_t PCK5:1; /**< bit: 13 Programmable Clock 5 Output Enable */
DECL|PCK5|member|uint32_t PCK5:1; /**< bit: 13 Programmable Clock 5 Output Status */
DECL|PCK6|member|uint32_t PCK6:1; /**< bit: 14 Programmable Clock 6 Output Disable */
DECL|PCK6|member|uint32_t PCK6:1; /**< bit: 14 Programmable Clock 6 Output Enable */
DECL|PCK6|member|uint32_t PCK6:1; /**< bit: 14 Programmable Clock 6 Output Status */
DECL|PCKRDY0|member|uint32_t PCKRDY0:1; /**< bit: 8 Programmable Clock Ready 0 Interrupt Disable */
DECL|PCKRDY0|member|uint32_t PCKRDY0:1; /**< bit: 8 Programmable Clock Ready 0 Interrupt Enable */
DECL|PCKRDY0|member|uint32_t PCKRDY0:1; /**< bit: 8 Programmable Clock Ready 0 Interrupt Mask */
DECL|PCKRDY0|member|uint32_t PCKRDY0:1; /**< bit: 8 Programmable Clock Ready Status */
DECL|PCKRDY1|member|uint32_t PCKRDY1:1; /**< bit: 9 Programmable Clock Ready 1 Interrupt Disable */
DECL|PCKRDY1|member|uint32_t PCKRDY1:1; /**< bit: 9 Programmable Clock Ready 1 Interrupt Enable */
DECL|PCKRDY1|member|uint32_t PCKRDY1:1; /**< bit: 9 Programmable Clock Ready 1 Interrupt Mask */
DECL|PCKRDY1|member|uint32_t PCKRDY1:1; /**< bit: 9 Programmable Clock Ready Status */
DECL|PCKRDY2|member|uint32_t PCKRDY2:1; /**< bit: 10 Programmable Clock Ready 2 Interrupt Disable */
DECL|PCKRDY2|member|uint32_t PCKRDY2:1; /**< bit: 10 Programmable Clock Ready 2 Interrupt Enable */
DECL|PCKRDY2|member|uint32_t PCKRDY2:1; /**< bit: 10 Programmable Clock Ready 2 Interrupt Mask */
DECL|PCKRDY2|member|uint32_t PCKRDY2:1; /**< bit: 10 Programmable Clock Ready Status */
DECL|PCK|member|uint32_t PCK:7; /**< bit: 8..14 Programmable Clock 6 Output Disable */
DECL|PCK|member|uint32_t PCK:7; /**< bit: 8..14 Programmable Clock 6 Output Enable */
DECL|PCK|member|uint32_t PCK:7; /**< bit: 8..14 Programmable Clock 6 Output Status */
DECL|PID10|member|uint32_t PID10:1; /**< bit: 10 Peripheral 10 Activity Status */
DECL|PID10|member|uint32_t PID10:1; /**< bit: 10 Peripheral 10 SleepWalking Disable */
DECL|PID10|member|uint32_t PID10:1; /**< bit: 10 Peripheral 10 SleepWalking Enable */
DECL|PID10|member|uint32_t PID10:1; /**< bit: 10 Peripheral 10 SleepWalking Status */
DECL|PID11|member|uint32_t PID11:1; /**< bit: 11 Peripheral 11 Activity Status */
DECL|PID11|member|uint32_t PID11:1; /**< bit: 11 Peripheral 11 SleepWalking Disable */
DECL|PID11|member|uint32_t PID11:1; /**< bit: 11 Peripheral 11 SleepWalking Enable */
DECL|PID11|member|uint32_t PID11:1; /**< bit: 11 Peripheral 11 SleepWalking Status */
DECL|PID12|member|uint32_t PID12:1; /**< bit: 12 Peripheral 12 Activity Status */
DECL|PID12|member|uint32_t PID12:1; /**< bit: 12 Peripheral 12 SleepWalking Disable */
DECL|PID12|member|uint32_t PID12:1; /**< bit: 12 Peripheral 12 SleepWalking Enable */
DECL|PID12|member|uint32_t PID12:1; /**< bit: 12 Peripheral 12 SleepWalking Status */
DECL|PID13|member|uint32_t PID13:1; /**< bit: 13 Peripheral 13 Activity Status */
DECL|PID13|member|uint32_t PID13:1; /**< bit: 13 Peripheral 13 SleepWalking Disable */
DECL|PID13|member|uint32_t PID13:1; /**< bit: 13 Peripheral 13 SleepWalking Enable */
DECL|PID13|member|uint32_t PID13:1; /**< bit: 13 Peripheral 13 SleepWalking Status */
DECL|PID14|member|uint32_t PID14:1; /**< bit: 14 Peripheral 14 Activity Status */
DECL|PID14|member|uint32_t PID14:1; /**< bit: 14 Peripheral 14 SleepWalking Disable */
DECL|PID14|member|uint32_t PID14:1; /**< bit: 14 Peripheral 14 SleepWalking Enable */
DECL|PID14|member|uint32_t PID14:1; /**< bit: 14 Peripheral 14 SleepWalking Status */
DECL|PID15|member|uint32_t PID15:1; /**< bit: 15 Peripheral 15 Activity Status */
DECL|PID15|member|uint32_t PID15:1; /**< bit: 15 Peripheral 15 SleepWalking Disable */
DECL|PID15|member|uint32_t PID15:1; /**< bit: 15 Peripheral 15 SleepWalking Enable */
DECL|PID15|member|uint32_t PID15:1; /**< bit: 15 Peripheral 15 SleepWalking Status */
DECL|PID16|member|uint32_t PID16:1; /**< bit: 16 Peripheral 16 Activity Status */
DECL|PID16|member|uint32_t PID16:1; /**< bit: 16 Peripheral 16 SleepWalking Disable */
DECL|PID16|member|uint32_t PID16:1; /**< bit: 16 Peripheral 16 SleepWalking Enable */
DECL|PID16|member|uint32_t PID16:1; /**< bit: 16 Peripheral 16 SleepWalking Status */
DECL|PID16|member|uint32_t PID16:1; /**< bit: 16 Peripheral Clock 16 Disable */
DECL|PID16|member|uint32_t PID16:1; /**< bit: 16 Peripheral Clock 16 Enable */
DECL|PID16|member|uint32_t PID16:1; /**< bit: 16 Peripheral Clock 16 Status */
DECL|PID17|member|uint32_t PID17:1; /**< bit: 17 Peripheral 17 Activity Status */
DECL|PID17|member|uint32_t PID17:1; /**< bit: 17 Peripheral 17 SleepWalking Disable */
DECL|PID17|member|uint32_t PID17:1; /**< bit: 17 Peripheral 17 SleepWalking Enable */
DECL|PID17|member|uint32_t PID17:1; /**< bit: 17 Peripheral 17 SleepWalking Status */
DECL|PID17|member|uint32_t PID17:1; /**< bit: 17 Peripheral Clock 17 Disable */
DECL|PID17|member|uint32_t PID17:1; /**< bit: 17 Peripheral Clock 17 Enable */
DECL|PID17|member|uint32_t PID17:1; /**< bit: 17 Peripheral Clock 17 Status */
DECL|PID18|member|uint32_t PID18:1; /**< bit: 18 Peripheral 18 Activity Status */
DECL|PID18|member|uint32_t PID18:1; /**< bit: 18 Peripheral 18 SleepWalking Disable */
DECL|PID18|member|uint32_t PID18:1; /**< bit: 18 Peripheral 18 SleepWalking Enable */
DECL|PID18|member|uint32_t PID18:1; /**< bit: 18 Peripheral 18 SleepWalking Status */
DECL|PID18|member|uint32_t PID18:1; /**< bit: 18 Peripheral Clock 18 Disable */
DECL|PID18|member|uint32_t PID18:1; /**< bit: 18 Peripheral Clock 18 Enable */
DECL|PID18|member|uint32_t PID18:1; /**< bit: 18 Peripheral Clock 18 Status */
DECL|PID19|member|uint32_t PID19:1; /**< bit: 19 Peripheral 19 Activity Status */
DECL|PID19|member|uint32_t PID19:1; /**< bit: 19 Peripheral 19 SleepWalking Disable */
DECL|PID19|member|uint32_t PID19:1; /**< bit: 19 Peripheral 19 SleepWalking Enable */
DECL|PID19|member|uint32_t PID19:1; /**< bit: 19 Peripheral 19 SleepWalking Status */
DECL|PID19|member|uint32_t PID19:1; /**< bit: 19 Peripheral Clock 19 Disable */
DECL|PID19|member|uint32_t PID19:1; /**< bit: 19 Peripheral Clock 19 Enable */
DECL|PID19|member|uint32_t PID19:1; /**< bit: 19 Peripheral Clock 19 Status */
DECL|PID20|member|uint32_t PID20:1; /**< bit: 20 Peripheral 20 Activity Status */
DECL|PID20|member|uint32_t PID20:1; /**< bit: 20 Peripheral 20 SleepWalking Disable */
DECL|PID20|member|uint32_t PID20:1; /**< bit: 20 Peripheral 20 SleepWalking Enable */
DECL|PID20|member|uint32_t PID20:1; /**< bit: 20 Peripheral 20 SleepWalking Status */
DECL|PID20|member|uint32_t PID20:1; /**< bit: 20 Peripheral Clock 20 Disable */
DECL|PID20|member|uint32_t PID20:1; /**< bit: 20 Peripheral Clock 20 Enable */
DECL|PID20|member|uint32_t PID20:1; /**< bit: 20 Peripheral Clock 20 Status */
DECL|PID21|member|uint32_t PID21:1; /**< bit: 21 Peripheral 21 Activity Status */
DECL|PID21|member|uint32_t PID21:1; /**< bit: 21 Peripheral 21 SleepWalking Disable */
DECL|PID21|member|uint32_t PID21:1; /**< bit: 21 Peripheral 21 SleepWalking Enable */
DECL|PID21|member|uint32_t PID21:1; /**< bit: 21 Peripheral 21 SleepWalking Status */
DECL|PID21|member|uint32_t PID21:1; /**< bit: 21 Peripheral Clock 21 Disable */
DECL|PID21|member|uint32_t PID21:1; /**< bit: 21 Peripheral Clock 21 Enable */
DECL|PID21|member|uint32_t PID21:1; /**< bit: 21 Peripheral Clock 21 Status */
DECL|PID22|member|uint32_t PID22:1; /**< bit: 22 Peripheral 22 Activity Status */
DECL|PID22|member|uint32_t PID22:1; /**< bit: 22 Peripheral 22 SleepWalking Disable */
DECL|PID22|member|uint32_t PID22:1; /**< bit: 22 Peripheral 22 SleepWalking Enable */
DECL|PID22|member|uint32_t PID22:1; /**< bit: 22 Peripheral 22 SleepWalking Status */
DECL|PID22|member|uint32_t PID22:1; /**< bit: 22 Peripheral Clock 22 Disable */
DECL|PID22|member|uint32_t PID22:1; /**< bit: 22 Peripheral Clock 22 Enable */
DECL|PID22|member|uint32_t PID22:1; /**< bit: 22 Peripheral Clock 22 Status */
DECL|PID23|member|uint32_t PID23:1; /**< bit: 23 Peripheral 23 Activity Status */
DECL|PID23|member|uint32_t PID23:1; /**< bit: 23 Peripheral 23 SleepWalking Disable */
DECL|PID23|member|uint32_t PID23:1; /**< bit: 23 Peripheral 23 SleepWalking Enable */
DECL|PID23|member|uint32_t PID23:1; /**< bit: 23 Peripheral 23 SleepWalking Status */
DECL|PID23|member|uint32_t PID23:1; /**< bit: 23 Peripheral Clock 23 Disable */
DECL|PID23|member|uint32_t PID23:1; /**< bit: 23 Peripheral Clock 23 Enable */
DECL|PID23|member|uint32_t PID23:1; /**< bit: 23 Peripheral Clock 23 Status */
DECL|PID24|member|uint32_t PID24:1; /**< bit: 24 Peripheral 24 Activity Status */
DECL|PID24|member|uint32_t PID24:1; /**< bit: 24 Peripheral 24 SleepWalking Disable */
DECL|PID24|member|uint32_t PID24:1; /**< bit: 24 Peripheral 24 SleepWalking Enable */
DECL|PID24|member|uint32_t PID24:1; /**< bit: 24 Peripheral 24 SleepWalking Status */
DECL|PID24|member|uint32_t PID24:1; /**< bit: 24 Peripheral Clock 24 Disable */
DECL|PID24|member|uint32_t PID24:1; /**< bit: 24 Peripheral Clock 24 Enable */
DECL|PID24|member|uint32_t PID24:1; /**< bit: 24 Peripheral Clock 24 Status */
DECL|PID25|member|uint32_t PID25:1; /**< bit: 25 Peripheral 25 Activity Status */
DECL|PID25|member|uint32_t PID25:1; /**< bit: 25 Peripheral 25 SleepWalking Disable */
DECL|PID25|member|uint32_t PID25:1; /**< bit: 25 Peripheral 25 SleepWalking Enable */
DECL|PID25|member|uint32_t PID25:1; /**< bit: 25 Peripheral 25 SleepWalking Status */
DECL|PID25|member|uint32_t PID25:1; /**< bit: 25 Peripheral Clock 25 Disable */
DECL|PID25|member|uint32_t PID25:1; /**< bit: 25 Peripheral Clock 25 Enable */
DECL|PID25|member|uint32_t PID25:1; /**< bit: 25 Peripheral Clock 25 Status */
DECL|PID26|member|uint32_t PID26:1; /**< bit: 26 Peripheral 26 Activity Status */
DECL|PID26|member|uint32_t PID26:1; /**< bit: 26 Peripheral 26 SleepWalking Disable */
DECL|PID26|member|uint32_t PID26:1; /**< bit: 26 Peripheral 26 SleepWalking Enable */
DECL|PID26|member|uint32_t PID26:1; /**< bit: 26 Peripheral 26 SleepWalking Status */
DECL|PID26|member|uint32_t PID26:1; /**< bit: 26 Peripheral Clock 26 Disable */
DECL|PID26|member|uint32_t PID26:1; /**< bit: 26 Peripheral Clock 26 Enable */
DECL|PID26|member|uint32_t PID26:1; /**< bit: 26 Peripheral Clock 26 Status */
DECL|PID27|member|uint32_t PID27:1; /**< bit: 27 Peripheral 27 Activity Status */
DECL|PID27|member|uint32_t PID27:1; /**< bit: 27 Peripheral 27 SleepWalking Disable */
DECL|PID27|member|uint32_t PID27:1; /**< bit: 27 Peripheral 27 SleepWalking Enable */
DECL|PID27|member|uint32_t PID27:1; /**< bit: 27 Peripheral 27 SleepWalking Status */
DECL|PID27|member|uint32_t PID27:1; /**< bit: 27 Peripheral Clock 27 Disable */
DECL|PID27|member|uint32_t PID27:1; /**< bit: 27 Peripheral Clock 27 Enable */
DECL|PID27|member|uint32_t PID27:1; /**< bit: 27 Peripheral Clock 27 Status */
DECL|PID28|member|uint32_t PID28:1; /**< bit: 28 Peripheral 28 Activity Status */
DECL|PID28|member|uint32_t PID28:1; /**< bit: 28 Peripheral 28 SleepWalking Disable */
DECL|PID28|member|uint32_t PID28:1; /**< bit: 28 Peripheral 28 SleepWalking Enable */
DECL|PID28|member|uint32_t PID28:1; /**< bit: 28 Peripheral 28 SleepWalking Status */
DECL|PID28|member|uint32_t PID28:1; /**< bit: 28 Peripheral Clock 28 Disable */
DECL|PID28|member|uint32_t PID28:1; /**< bit: 28 Peripheral Clock 28 Enable */
DECL|PID28|member|uint32_t PID28:1; /**< bit: 28 Peripheral Clock 28 Status */
DECL|PID29|member|uint32_t PID29:1; /**< bit: 29 Peripheral 29 Activity Status */
DECL|PID29|member|uint32_t PID29:1; /**< bit: 29 Peripheral 29 SleepWalking Disable */
DECL|PID29|member|uint32_t PID29:1; /**< bit: 29 Peripheral 29 SleepWalking Enable */
DECL|PID29|member|uint32_t PID29:1; /**< bit: 29 Peripheral 29 SleepWalking Status */
DECL|PID29|member|uint32_t PID29:1; /**< bit: 29 Peripheral Clock 29 Disable */
DECL|PID29|member|uint32_t PID29:1; /**< bit: 29 Peripheral Clock 29 Enable */
DECL|PID29|member|uint32_t PID29:1; /**< bit: 29 Peripheral Clock 29 Status */
DECL|PID30|member|uint32_t PID30:1; /**< bit: 30 Peripheral 30 Activity Status */
DECL|PID30|member|uint32_t PID30:1; /**< bit: 30 Peripheral 30 SleepWalking Disable */
DECL|PID30|member|uint32_t PID30:1; /**< bit: 30 Peripheral 30 SleepWalking Enable */
DECL|PID30|member|uint32_t PID30:1; /**< bit: 30 Peripheral 30 SleepWalking Status */
DECL|PID30|member|uint32_t PID30:1; /**< bit: 30 Peripheral Clock 30 Disable */
DECL|PID30|member|uint32_t PID30:1; /**< bit: 30 Peripheral Clock 30 Enable */
DECL|PID30|member|uint32_t PID30:1; /**< bit: 30 Peripheral Clock 30 Status */
DECL|PID31|member|uint32_t PID31:1; /**< bit: 31 Peripheral 31 Activity Status */
DECL|PID31|member|uint32_t PID31:1; /**< bit: 31 Peripheral 31 SleepWalking Disable */
DECL|PID31|member|uint32_t PID31:1; /**< bit: 31 Peripheral 31 SleepWalking Enable */
DECL|PID31|member|uint32_t PID31:1; /**< bit: 31 Peripheral 31 SleepWalking Status */
DECL|PID31|member|uint32_t PID31:1; /**< bit: 31 Peripheral Clock 31 Disable */
DECL|PID31|member|uint32_t PID31:1; /**< bit: 31 Peripheral Clock 31 Enable */
DECL|PID31|member|uint32_t PID31:1; /**< bit: 31 Peripheral Clock 31 Status */
DECL|PID32|member|uint32_t PID32:1; /**< bit: 0 Peripheral 32 Activity Status */
DECL|PID32|member|uint32_t PID32:1; /**< bit: 0 Peripheral 32 SleepWalking Disable */
DECL|PID32|member|uint32_t PID32:1; /**< bit: 0 Peripheral 32 SleepWalking Enable */
DECL|PID32|member|uint32_t PID32:1; /**< bit: 0 Peripheral 32 SleepWalking Status */
DECL|PID32|member|uint32_t PID32:1; /**< bit: 0 Peripheral Clock 32 Disable */
DECL|PID32|member|uint32_t PID32:1; /**< bit: 0 Peripheral Clock 32 Enable */
DECL|PID32|member|uint32_t PID32:1; /**< bit: 0 Peripheral Clock 32 Status */
DECL|PID33|member|uint32_t PID33:1; /**< bit: 1 Peripheral 33 Activity Status */
DECL|PID33|member|uint32_t PID33:1; /**< bit: 1 Peripheral 33 SleepWalking Disable */
DECL|PID33|member|uint32_t PID33:1; /**< bit: 1 Peripheral 33 SleepWalking Enable */
DECL|PID33|member|uint32_t PID33:1; /**< bit: 1 Peripheral 33 SleepWalking Status */
DECL|PID33|member|uint32_t PID33:1; /**< bit: 1 Peripheral Clock 33 Disable */
DECL|PID33|member|uint32_t PID33:1; /**< bit: 1 Peripheral Clock 33 Enable */
DECL|PID33|member|uint32_t PID33:1; /**< bit: 1 Peripheral Clock 33 Status */
DECL|PID34|member|uint32_t PID34:1; /**< bit: 2 Peripheral 34 Activity Status */
DECL|PID34|member|uint32_t PID34:1; /**< bit: 2 Peripheral 34 SleepWalking Disable */
DECL|PID34|member|uint32_t PID34:1; /**< bit: 2 Peripheral 34 SleepWalking Enable */
DECL|PID34|member|uint32_t PID34:1; /**< bit: 2 Peripheral 34 SleepWalking Status */
DECL|PID34|member|uint32_t PID34:1; /**< bit: 2 Peripheral Clock 34 Disable */
DECL|PID34|member|uint32_t PID34:1; /**< bit: 2 Peripheral Clock 34 Enable */
DECL|PID34|member|uint32_t PID34:1; /**< bit: 2 Peripheral Clock 34 Status */
DECL|PID35|member|uint32_t PID35:1; /**< bit: 3 Peripheral 35 Activity Status */
DECL|PID35|member|uint32_t PID35:1; /**< bit: 3 Peripheral 35 SleepWalking Disable */
DECL|PID35|member|uint32_t PID35:1; /**< bit: 3 Peripheral 35 SleepWalking Enable */
DECL|PID35|member|uint32_t PID35:1; /**< bit: 3 Peripheral 35 SleepWalking Status */
DECL|PID35|member|uint32_t PID35:1; /**< bit: 3 Peripheral Clock 35 Disable */
DECL|PID35|member|uint32_t PID35:1; /**< bit: 3 Peripheral Clock 35 Enable */
DECL|PID35|member|uint32_t PID35:1; /**< bit: 3 Peripheral Clock 35 Status */
DECL|PID37|member|uint32_t PID37:1; /**< bit: 5 Peripheral 37 Activity Status */
DECL|PID37|member|uint32_t PID37:1; /**< bit: 5 Peripheral 37 SleepWalking Disable */
DECL|PID37|member|uint32_t PID37:1; /**< bit: 5 Peripheral 37 SleepWalking Enable */
DECL|PID37|member|uint32_t PID37:1; /**< bit: 5 Peripheral 37 SleepWalking Status */
DECL|PID37|member|uint32_t PID37:1; /**< bit: 5 Peripheral Clock 37 Disable */
DECL|PID37|member|uint32_t PID37:1; /**< bit: 5 Peripheral Clock 37 Enable */
DECL|PID37|member|uint32_t PID37:1; /**< bit: 5 Peripheral Clock 37 Status */
DECL|PID39|member|uint32_t PID39:1; /**< bit: 7 Peripheral 39 Activity Status */
DECL|PID39|member|uint32_t PID39:1; /**< bit: 7 Peripheral 39 SleepWalking Disable */
DECL|PID39|member|uint32_t PID39:1; /**< bit: 7 Peripheral 39 SleepWalking Enable */
DECL|PID39|member|uint32_t PID39:1; /**< bit: 7 Peripheral 39 SleepWalking Status */
DECL|PID39|member|uint32_t PID39:1; /**< bit: 7 Peripheral Clock 39 Disable */
DECL|PID39|member|uint32_t PID39:1; /**< bit: 7 Peripheral Clock 39 Enable */
DECL|PID39|member|uint32_t PID39:1; /**< bit: 7 Peripheral Clock 39 Status */
DECL|PID40|member|uint32_t PID40:1; /**< bit: 8 Peripheral 40 Activity Status */
DECL|PID40|member|uint32_t PID40:1; /**< bit: 8 Peripheral 40 SleepWalking Disable */
DECL|PID40|member|uint32_t PID40:1; /**< bit: 8 Peripheral 40 SleepWalking Enable */
DECL|PID40|member|uint32_t PID40:1; /**< bit: 8 Peripheral 40 SleepWalking Status */
DECL|PID40|member|uint32_t PID40:1; /**< bit: 8 Peripheral Clock 40 Disable */
DECL|PID40|member|uint32_t PID40:1; /**< bit: 8 Peripheral Clock 40 Enable */
DECL|PID40|member|uint32_t PID40:1; /**< bit: 8 Peripheral Clock 40 Status */
DECL|PID41|member|uint32_t PID41:1; /**< bit: 9 Peripheral 41 Activity Status */
DECL|PID41|member|uint32_t PID41:1; /**< bit: 9 Peripheral 41 SleepWalking Disable */
DECL|PID41|member|uint32_t PID41:1; /**< bit: 9 Peripheral 41 SleepWalking Enable */
DECL|PID41|member|uint32_t PID41:1; /**< bit: 9 Peripheral 41 SleepWalking Status */
DECL|PID41|member|uint32_t PID41:1; /**< bit: 9 Peripheral Clock 41 Disable */
DECL|PID41|member|uint32_t PID41:1; /**< bit: 9 Peripheral Clock 41 Enable */
DECL|PID41|member|uint32_t PID41:1; /**< bit: 9 Peripheral Clock 41 Status */
DECL|PID42|member|uint32_t PID42:1; /**< bit: 10 Peripheral 42 Activity Status */
DECL|PID42|member|uint32_t PID42:1; /**< bit: 10 Peripheral 42 SleepWalking Disable */
DECL|PID42|member|uint32_t PID42:1; /**< bit: 10 Peripheral 42 SleepWalking Enable */
DECL|PID42|member|uint32_t PID42:1; /**< bit: 10 Peripheral 42 SleepWalking Status */
DECL|PID42|member|uint32_t PID42:1; /**< bit: 10 Peripheral Clock 42 Disable */
DECL|PID42|member|uint32_t PID42:1; /**< bit: 10 Peripheral Clock 42 Enable */
DECL|PID42|member|uint32_t PID42:1; /**< bit: 10 Peripheral Clock 42 Status */
DECL|PID43|member|uint32_t PID43:1; /**< bit: 11 Peripheral 43 Activity Status */
DECL|PID43|member|uint32_t PID43:1; /**< bit: 11 Peripheral 43 SleepWalking Disable */
DECL|PID43|member|uint32_t PID43:1; /**< bit: 11 Peripheral 43 SleepWalking Enable */
DECL|PID43|member|uint32_t PID43:1; /**< bit: 11 Peripheral 43 SleepWalking Status */
DECL|PID43|member|uint32_t PID43:1; /**< bit: 11 Peripheral Clock 43 Disable */
DECL|PID43|member|uint32_t PID43:1; /**< bit: 11 Peripheral Clock 43 Enable */
DECL|PID43|member|uint32_t PID43:1; /**< bit: 11 Peripheral Clock 43 Status */
DECL|PID44|member|uint32_t PID44:1; /**< bit: 12 Peripheral 44 Activity Status */
DECL|PID44|member|uint32_t PID44:1; /**< bit: 12 Peripheral 44 SleepWalking Disable */
DECL|PID44|member|uint32_t PID44:1; /**< bit: 12 Peripheral 44 SleepWalking Enable */
DECL|PID44|member|uint32_t PID44:1; /**< bit: 12 Peripheral 44 SleepWalking Status */
DECL|PID44|member|uint32_t PID44:1; /**< bit: 12 Peripheral Clock 44 Disable */
DECL|PID44|member|uint32_t PID44:1; /**< bit: 12 Peripheral Clock 44 Enable */
DECL|PID44|member|uint32_t PID44:1; /**< bit: 12 Peripheral Clock 44 Status */
DECL|PID45|member|uint32_t PID45:1; /**< bit: 13 Peripheral 45 Activity Status */
DECL|PID45|member|uint32_t PID45:1; /**< bit: 13 Peripheral 45 SleepWalking Disable */
DECL|PID45|member|uint32_t PID45:1; /**< bit: 13 Peripheral 45 SleepWalking Enable */
DECL|PID45|member|uint32_t PID45:1; /**< bit: 13 Peripheral 45 SleepWalking Status */
DECL|PID45|member|uint32_t PID45:1; /**< bit: 13 Peripheral Clock 45 Disable */
DECL|PID45|member|uint32_t PID45:1; /**< bit: 13 Peripheral Clock 45 Enable */
DECL|PID45|member|uint32_t PID45:1; /**< bit: 13 Peripheral Clock 45 Status */
DECL|PID46|member|uint32_t PID46:1; /**< bit: 14 Peripheral 46 Activity Status */
DECL|PID46|member|uint32_t PID46:1; /**< bit: 14 Peripheral 46 SleepWalking Disable */
DECL|PID46|member|uint32_t PID46:1; /**< bit: 14 Peripheral 46 SleepWalking Enable */
DECL|PID46|member|uint32_t PID46:1; /**< bit: 14 Peripheral 46 SleepWalking Status */
DECL|PID46|member|uint32_t PID46:1; /**< bit: 14 Peripheral Clock 46 Disable */
DECL|PID46|member|uint32_t PID46:1; /**< bit: 14 Peripheral Clock 46 Enable */
DECL|PID46|member|uint32_t PID46:1; /**< bit: 14 Peripheral Clock 46 Status */
DECL|PID47|member|uint32_t PID47:1; /**< bit: 15 Peripheral 47 Activity Status */
DECL|PID47|member|uint32_t PID47:1; /**< bit: 15 Peripheral 47 SleepWalking Disable */
DECL|PID47|member|uint32_t PID47:1; /**< bit: 15 Peripheral 47 SleepWalking Enable */
DECL|PID47|member|uint32_t PID47:1; /**< bit: 15 Peripheral 47 SleepWalking Status */
DECL|PID47|member|uint32_t PID47:1; /**< bit: 15 Peripheral Clock 47 Disable */
DECL|PID47|member|uint32_t PID47:1; /**< bit: 15 Peripheral Clock 47 Enable */
DECL|PID47|member|uint32_t PID47:1; /**< bit: 15 Peripheral Clock 47 Status */
DECL|PID48|member|uint32_t PID48:1; /**< bit: 16 Peripheral 48 Activity Status */
DECL|PID48|member|uint32_t PID48:1; /**< bit: 16 Peripheral 48 SleepWalking Disable */
DECL|PID48|member|uint32_t PID48:1; /**< bit: 16 Peripheral 48 SleepWalking Enable */
DECL|PID48|member|uint32_t PID48:1; /**< bit: 16 Peripheral 48 SleepWalking Status */
DECL|PID48|member|uint32_t PID48:1; /**< bit: 16 Peripheral Clock 48 Disable */
DECL|PID48|member|uint32_t PID48:1; /**< bit: 16 Peripheral Clock 48 Enable */
DECL|PID48|member|uint32_t PID48:1; /**< bit: 16 Peripheral Clock 48 Status */
DECL|PID49|member|uint32_t PID49:1; /**< bit: 17 Peripheral 49 Activity Status */
DECL|PID49|member|uint32_t PID49:1; /**< bit: 17 Peripheral 49 SleepWalking Disable */
DECL|PID49|member|uint32_t PID49:1; /**< bit: 17 Peripheral 49 SleepWalking Enable */
DECL|PID49|member|uint32_t PID49:1; /**< bit: 17 Peripheral 49 SleepWalking Status */
DECL|PID49|member|uint32_t PID49:1; /**< bit: 17 Peripheral Clock 49 Disable */
DECL|PID49|member|uint32_t PID49:1; /**< bit: 17 Peripheral Clock 49 Enable */
DECL|PID49|member|uint32_t PID49:1; /**< bit: 17 Peripheral Clock 49 Status */
DECL|PID50|member|uint32_t PID50:1; /**< bit: 18 Peripheral 50 Activity Status */
DECL|PID50|member|uint32_t PID50:1; /**< bit: 18 Peripheral 50 SleepWalking Disable */
DECL|PID50|member|uint32_t PID50:1; /**< bit: 18 Peripheral 50 SleepWalking Enable */
DECL|PID50|member|uint32_t PID50:1; /**< bit: 18 Peripheral 50 SleepWalking Status */
DECL|PID50|member|uint32_t PID50:1; /**< bit: 18 Peripheral Clock 50 Disable */
DECL|PID50|member|uint32_t PID50:1; /**< bit: 18 Peripheral Clock 50 Enable */
DECL|PID50|member|uint32_t PID50:1; /**< bit: 18 Peripheral Clock 50 Status */
DECL|PID51|member|uint32_t PID51:1; /**< bit: 19 Peripheral 51 Activity Status */
DECL|PID51|member|uint32_t PID51:1; /**< bit: 19 Peripheral 51 SleepWalking Disable */
DECL|PID51|member|uint32_t PID51:1; /**< bit: 19 Peripheral 51 SleepWalking Enable */
DECL|PID51|member|uint32_t PID51:1; /**< bit: 19 Peripheral 51 SleepWalking Status */
DECL|PID51|member|uint32_t PID51:1; /**< bit: 19 Peripheral Clock 51 Disable */
DECL|PID51|member|uint32_t PID51:1; /**< bit: 19 Peripheral Clock 51 Enable */
DECL|PID51|member|uint32_t PID51:1; /**< bit: 19 Peripheral Clock 51 Status */
DECL|PID52|member|uint32_t PID52:1; /**< bit: 20 Peripheral 52 Activity Status */
DECL|PID52|member|uint32_t PID52:1; /**< bit: 20 Peripheral 52 SleepWalking Disable */
DECL|PID52|member|uint32_t PID52:1; /**< bit: 20 Peripheral 52 SleepWalking Enable */
DECL|PID52|member|uint32_t PID52:1; /**< bit: 20 Peripheral 52 SleepWalking Status */
DECL|PID52|member|uint32_t PID52:1; /**< bit: 20 Peripheral Clock 52 Disable */
DECL|PID52|member|uint32_t PID52:1; /**< bit: 20 Peripheral Clock 52 Enable */
DECL|PID52|member|uint32_t PID52:1; /**< bit: 20 Peripheral Clock 52 Status */
DECL|PID53|member|uint32_t PID53:1; /**< bit: 21 Peripheral 53 Activity Status */
DECL|PID53|member|uint32_t PID53:1; /**< bit: 21 Peripheral 53 SleepWalking Disable */
DECL|PID53|member|uint32_t PID53:1; /**< bit: 21 Peripheral 53 SleepWalking Enable */
DECL|PID53|member|uint32_t PID53:1; /**< bit: 21 Peripheral 53 SleepWalking Status */
DECL|PID53|member|uint32_t PID53:1; /**< bit: 21 Peripheral Clock 53 Disable */
DECL|PID53|member|uint32_t PID53:1; /**< bit: 21 Peripheral Clock 53 Enable */
DECL|PID53|member|uint32_t PID53:1; /**< bit: 21 Peripheral Clock 53 Status */
DECL|PID56|member|uint32_t PID56:1; /**< bit: 24 Peripheral 56 Activity Status */
DECL|PID56|member|uint32_t PID56:1; /**< bit: 24 Peripheral 56 SleepWalking Disable */
DECL|PID56|member|uint32_t PID56:1; /**< bit: 24 Peripheral 56 SleepWalking Enable */
DECL|PID56|member|uint32_t PID56:1; /**< bit: 24 Peripheral 56 SleepWalking Status */
DECL|PID56|member|uint32_t PID56:1; /**< bit: 24 Peripheral Clock 56 Disable */
DECL|PID56|member|uint32_t PID56:1; /**< bit: 24 Peripheral Clock 56 Enable */
DECL|PID56|member|uint32_t PID56:1; /**< bit: 24 Peripheral Clock 56 Status */
DECL|PID57|member|uint32_t PID57:1; /**< bit: 25 Peripheral 57 Activity Status */
DECL|PID57|member|uint32_t PID57:1; /**< bit: 25 Peripheral 57 SleepWalking Disable */
DECL|PID57|member|uint32_t PID57:1; /**< bit: 25 Peripheral 57 SleepWalking Enable */
DECL|PID57|member|uint32_t PID57:1; /**< bit: 25 Peripheral 57 SleepWalking Status */
DECL|PID57|member|uint32_t PID57:1; /**< bit: 25 Peripheral Clock 57 Disable */
DECL|PID57|member|uint32_t PID57:1; /**< bit: 25 Peripheral Clock 57 Enable */
DECL|PID57|member|uint32_t PID57:1; /**< bit: 25 Peripheral Clock 57 Status */
DECL|PID58|member|uint32_t PID58:1; /**< bit: 26 Peripheral 58 Activity Status */
DECL|PID58|member|uint32_t PID58:1; /**< bit: 26 Peripheral 58 SleepWalking Disable */
DECL|PID58|member|uint32_t PID58:1; /**< bit: 26 Peripheral 58 SleepWalking Enable */
DECL|PID58|member|uint32_t PID58:1; /**< bit: 26 Peripheral 58 SleepWalking Status */
DECL|PID58|member|uint32_t PID58:1; /**< bit: 26 Peripheral Clock 58 Disable */
DECL|PID58|member|uint32_t PID58:1; /**< bit: 26 Peripheral Clock 58 Enable */
DECL|PID58|member|uint32_t PID58:1; /**< bit: 26 Peripheral Clock 58 Status */
DECL|PID59|member|uint32_t PID59:1; /**< bit: 27 Peripheral 59 Activity Status */
DECL|PID59|member|uint32_t PID59:1; /**< bit: 27 Peripheral 59 SleepWalking Disable */
DECL|PID59|member|uint32_t PID59:1; /**< bit: 27 Peripheral 59 SleepWalking Enable */
DECL|PID59|member|uint32_t PID59:1; /**< bit: 27 Peripheral 59 SleepWalking Status */
DECL|PID59|member|uint32_t PID59:1; /**< bit: 27 Peripheral Clock 59 Disable */
DECL|PID59|member|uint32_t PID59:1; /**< bit: 27 Peripheral Clock 59 Enable */
DECL|PID59|member|uint32_t PID59:1; /**< bit: 27 Peripheral Clock 59 Status */
DECL|PID60|member|uint32_t PID60:1; /**< bit: 28 Peripheral 60 Activity Status */
DECL|PID60|member|uint32_t PID60:1; /**< bit: 28 Peripheral 60 SleepWalking Disable */
DECL|PID60|member|uint32_t PID60:1; /**< bit: 28 Peripheral 60 SleepWalking Enable */
DECL|PID60|member|uint32_t PID60:1; /**< bit: 28 Peripheral 60 SleepWalking Status */
DECL|PID60|member|uint32_t PID60:1; /**< bit: 28 Peripheral Clock 60 Disable */
DECL|PID60|member|uint32_t PID60:1; /**< bit: 28 Peripheral Clock 60 Enable */
DECL|PID60|member|uint32_t PID60:1; /**< bit: 28 Peripheral Clock 60 Status */
DECL|PID7|member|uint32_t PID7:1; /**< bit: 7 Peripheral 7 Activity Status */
DECL|PID7|member|uint32_t PID7:1; /**< bit: 7 Peripheral 7 SleepWalking Disable */
DECL|PID7|member|uint32_t PID7:1; /**< bit: 7 Peripheral 7 SleepWalking Enable */
DECL|PID7|member|uint32_t PID7:1; /**< bit: 7 Peripheral 7 SleepWalking Status */
DECL|PID7|member|uint32_t PID7:1; /**< bit: 7 Peripheral Clock 7 Disable */
DECL|PID7|member|uint32_t PID7:1; /**< bit: 7 Peripheral Clock 7 Enable */
DECL|PID7|member|uint32_t PID7:1; /**< bit: 7 Peripheral Clock 7 Status */
DECL|PID8|member|uint32_t PID8:1; /**< bit: 8 Peripheral 8 Activity Status */
DECL|PID8|member|uint32_t PID8:1; /**< bit: 8 Peripheral 8 SleepWalking Disable */
DECL|PID8|member|uint32_t PID8:1; /**< bit: 8 Peripheral 8 SleepWalking Enable */
DECL|PID8|member|uint32_t PID8:1; /**< bit: 8 Peripheral 8 SleepWalking Status */
DECL|PID8|member|uint32_t PID8:1; /**< bit: 8 Peripheral Clock 8 Disable */
DECL|PID8|member|uint32_t PID8:1; /**< bit: 8 Peripheral Clock 8 Enable */
DECL|PID8|member|uint32_t PID8:1; /**< bit: 8 Peripheral Clock 8 Status */
DECL|PID9|member|uint32_t PID9:1; /**< bit: 9 Peripheral 9 Activity Status */
DECL|PID9|member|uint32_t PID9:1; /**< bit: 9 Peripheral 9 SleepWalking Disable */
DECL|PID9|member|uint32_t PID9:1; /**< bit: 9 Peripheral 9 SleepWalking Enable */
DECL|PID9|member|uint32_t PID9:1; /**< bit: 9 Peripheral 9 SleepWalking Status */
DECL|PID|member|uint32_t PID:18; /**< bit: 7..24 Peripheral Clock 3x Disable */
DECL|PID|member|uint32_t PID:18; /**< bit: 7..24 Peripheral Clock 3x Enable */
DECL|PID|member|uint32_t PID:18; /**< bit: 7..24 Peripheral Clock 3x Status */
DECL|PID|member|uint32_t PID:25; /**< bit: 0..24 Peripheral 6x Activity Status */
DECL|PID|member|uint32_t PID:25; /**< bit: 0..24 Peripheral 6x SleepWalking Disable */
DECL|PID|member|uint32_t PID:25; /**< bit: 0..24 Peripheral 6x SleepWalking Enable */
DECL|PID|member|uint32_t PID:25; /**< bit: 0..24 Peripheral 6x SleepWalking Status */
DECL|PID|member|uint32_t PID:25; /**< bit: 0..24 Peripheral Clock 6x Disable */
DECL|PID|member|uint32_t PID:25; /**< bit: 0..24 Peripheral Clock 6x Enable */
DECL|PID|member|uint32_t PID:25; /**< bit: 0..24 Peripheral Clock 6x Status */
DECL|PID|member|uint32_t PID:25; /**< bit: 7..31 Peripheral 3x Activity Status */
DECL|PID|member|uint32_t PID:25; /**< bit: 7..31 Peripheral 3x SleepWalking Disable */
DECL|PID|member|uint32_t PID:25; /**< bit: 7..31 Peripheral 3x SleepWalking Enable */
DECL|PID|member|uint32_t PID:25; /**< bit: 7..31 Peripheral 3x SleepWalking Status */
DECL|PID|member|uint32_t PID:7; /**< bit: 0..6 Peripheral ID */
DECL|PLLACOUNT|member|uint32_t PLLACOUNT:6; /**< bit: 8..13 PLLA Counter */
DECL|PLLA_MMAX|member|uint32_t PLLA_MMAX:11; /**< bit: 0..10 PLLA Maximum Allowed Multiplier Value */
DECL|PMC_44006|macro|PMC_44006
DECL|PMC_FOCR_FOCLR_Msk|macro|PMC_FOCR_FOCLR_Msk
DECL|PMC_FOCR_FOCLR_Pos|macro|PMC_FOCR_FOCLR_Pos
DECL|PMC_FOCR_FOCLR|macro|PMC_FOCR_FOCLR
DECL|PMC_FOCR_MASK|macro|PMC_FOCR_MASK
DECL|PMC_FOCR_Msk|macro|PMC_FOCR_Msk
DECL|PMC_FOCR_OFFSET|macro|PMC_FOCR_OFFSET
DECL|PMC_FOCR_Type|typedef|} PMC_FOCR_Type;
DECL|PMC_FOCR|member|__O PMC_FOCR_Type PMC_FOCR; /**< Offset: 0x78 ( /W 32) Fault Output Clear Register */
DECL|PMC_FOCR|member|__O uint32_t PMC_FOCR; /**< (PMC Offset: 0x78) Fault Output Clear Register */
DECL|PMC_FSMR_FFLPM_Msk|macro|PMC_FSMR_FFLPM_Msk
DECL|PMC_FSMR_FFLPM_Pos|macro|PMC_FSMR_FFLPM_Pos
DECL|PMC_FSMR_FFLPM|macro|PMC_FSMR_FFLPM
DECL|PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN_Val|macro|PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN_Val
DECL|PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN|macro|PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN
DECL|PMC_FSMR_FLPM_FLASH_IDLE_Val|macro|PMC_FSMR_FLPM_FLASH_IDLE_Val
DECL|PMC_FSMR_FLPM_FLASH_IDLE|macro|PMC_FSMR_FLPM_FLASH_IDLE
DECL|PMC_FSMR_FLPM_FLASH_STANDBY_Val|macro|PMC_FSMR_FLPM_FLASH_STANDBY_Val
DECL|PMC_FSMR_FLPM_FLASH_STANDBY|macro|PMC_FSMR_FLPM_FLASH_STANDBY
DECL|PMC_FSMR_FLPM_Msk|macro|PMC_FSMR_FLPM_Msk
DECL|PMC_FSMR_FLPM_Pos|macro|PMC_FSMR_FLPM_Pos
DECL|PMC_FSMR_FLPM|macro|PMC_FSMR_FLPM
DECL|PMC_FSMR_FSTT0_Msk|macro|PMC_FSMR_FSTT0_Msk
DECL|PMC_FSMR_FSTT0_Pos|macro|PMC_FSMR_FSTT0_Pos
DECL|PMC_FSMR_FSTT0|macro|PMC_FSMR_FSTT0
DECL|PMC_FSMR_FSTT10_Msk|macro|PMC_FSMR_FSTT10_Msk
DECL|PMC_FSMR_FSTT10_Pos|macro|PMC_FSMR_FSTT10_Pos
DECL|PMC_FSMR_FSTT10|macro|PMC_FSMR_FSTT10
DECL|PMC_FSMR_FSTT11_Msk|macro|PMC_FSMR_FSTT11_Msk
DECL|PMC_FSMR_FSTT11_Pos|macro|PMC_FSMR_FSTT11_Pos
DECL|PMC_FSMR_FSTT11|macro|PMC_FSMR_FSTT11
DECL|PMC_FSMR_FSTT12_Msk|macro|PMC_FSMR_FSTT12_Msk
DECL|PMC_FSMR_FSTT12_Pos|macro|PMC_FSMR_FSTT12_Pos
DECL|PMC_FSMR_FSTT12|macro|PMC_FSMR_FSTT12
DECL|PMC_FSMR_FSTT13_Msk|macro|PMC_FSMR_FSTT13_Msk
DECL|PMC_FSMR_FSTT13_Pos|macro|PMC_FSMR_FSTT13_Pos
DECL|PMC_FSMR_FSTT13|macro|PMC_FSMR_FSTT13
DECL|PMC_FSMR_FSTT14_Msk|macro|PMC_FSMR_FSTT14_Msk
DECL|PMC_FSMR_FSTT14_Pos|macro|PMC_FSMR_FSTT14_Pos
DECL|PMC_FSMR_FSTT14|macro|PMC_FSMR_FSTT14
DECL|PMC_FSMR_FSTT15_Msk|macro|PMC_FSMR_FSTT15_Msk
DECL|PMC_FSMR_FSTT15_Pos|macro|PMC_FSMR_FSTT15_Pos
DECL|PMC_FSMR_FSTT15|macro|PMC_FSMR_FSTT15
DECL|PMC_FSMR_FSTT1_Msk|macro|PMC_FSMR_FSTT1_Msk
DECL|PMC_FSMR_FSTT1_Pos|macro|PMC_FSMR_FSTT1_Pos
DECL|PMC_FSMR_FSTT1|macro|PMC_FSMR_FSTT1
DECL|PMC_FSMR_FSTT2_Msk|macro|PMC_FSMR_FSTT2_Msk
DECL|PMC_FSMR_FSTT2_Pos|macro|PMC_FSMR_FSTT2_Pos
DECL|PMC_FSMR_FSTT2|macro|PMC_FSMR_FSTT2
DECL|PMC_FSMR_FSTT3_Msk|macro|PMC_FSMR_FSTT3_Msk
DECL|PMC_FSMR_FSTT3_Pos|macro|PMC_FSMR_FSTT3_Pos
DECL|PMC_FSMR_FSTT3|macro|PMC_FSMR_FSTT3
DECL|PMC_FSMR_FSTT4_Msk|macro|PMC_FSMR_FSTT4_Msk
DECL|PMC_FSMR_FSTT4_Pos|macro|PMC_FSMR_FSTT4_Pos
DECL|PMC_FSMR_FSTT4|macro|PMC_FSMR_FSTT4
DECL|PMC_FSMR_FSTT5_Msk|macro|PMC_FSMR_FSTT5_Msk
DECL|PMC_FSMR_FSTT5_Pos|macro|PMC_FSMR_FSTT5_Pos
DECL|PMC_FSMR_FSTT5|macro|PMC_FSMR_FSTT5
DECL|PMC_FSMR_FSTT6_Msk|macro|PMC_FSMR_FSTT6_Msk
DECL|PMC_FSMR_FSTT6_Pos|macro|PMC_FSMR_FSTT6_Pos
DECL|PMC_FSMR_FSTT6|macro|PMC_FSMR_FSTT6
DECL|PMC_FSMR_FSTT7_Msk|macro|PMC_FSMR_FSTT7_Msk
DECL|PMC_FSMR_FSTT7_Pos|macro|PMC_FSMR_FSTT7_Pos
DECL|PMC_FSMR_FSTT7|macro|PMC_FSMR_FSTT7
DECL|PMC_FSMR_FSTT8_Msk|macro|PMC_FSMR_FSTT8_Msk
DECL|PMC_FSMR_FSTT8_Pos|macro|PMC_FSMR_FSTT8_Pos
DECL|PMC_FSMR_FSTT8|macro|PMC_FSMR_FSTT8
DECL|PMC_FSMR_FSTT9_Msk|macro|PMC_FSMR_FSTT9_Msk
DECL|PMC_FSMR_FSTT9_Pos|macro|PMC_FSMR_FSTT9_Pos
DECL|PMC_FSMR_FSTT9|macro|PMC_FSMR_FSTT9
DECL|PMC_FSMR_LPM_Msk|macro|PMC_FSMR_LPM_Msk
DECL|PMC_FSMR_LPM_Pos|macro|PMC_FSMR_LPM_Pos
DECL|PMC_FSMR_LPM|macro|PMC_FSMR_LPM
DECL|PMC_FSMR_MASK|macro|PMC_FSMR_MASK
DECL|PMC_FSMR_Msk|macro|PMC_FSMR_Msk
DECL|PMC_FSMR_OFFSET|macro|PMC_FSMR_OFFSET
DECL|PMC_FSMR_RTCAL_Msk|macro|PMC_FSMR_RTCAL_Msk
DECL|PMC_FSMR_RTCAL_Pos|macro|PMC_FSMR_RTCAL_Pos
DECL|PMC_FSMR_RTCAL|macro|PMC_FSMR_RTCAL
DECL|PMC_FSMR_RTTAL_Msk|macro|PMC_FSMR_RTTAL_Msk
DECL|PMC_FSMR_RTTAL_Pos|macro|PMC_FSMR_RTTAL_Pos
DECL|PMC_FSMR_RTTAL|macro|PMC_FSMR_RTTAL
DECL|PMC_FSMR_Type|typedef|} PMC_FSMR_Type;
DECL|PMC_FSMR_USBAL_Msk|macro|PMC_FSMR_USBAL_Msk
DECL|PMC_FSMR_USBAL_Pos|macro|PMC_FSMR_USBAL_Pos
DECL|PMC_FSMR_USBAL|macro|PMC_FSMR_USBAL
DECL|PMC_FSMR|member|__IO PMC_FSMR_Type PMC_FSMR; /**< Offset: 0x70 (R/W 32) Fast Startup Mode Register */
DECL|PMC_FSMR|member|__IO uint32_t PMC_FSMR; /**< (PMC Offset: 0x70) Fast Startup Mode Register */
DECL|PMC_FSPR_FSTP0_Msk|macro|PMC_FSPR_FSTP0_Msk
DECL|PMC_FSPR_FSTP0_Pos|macro|PMC_FSPR_FSTP0_Pos
DECL|PMC_FSPR_FSTP0|macro|PMC_FSPR_FSTP0
DECL|PMC_FSPR_FSTP10_Msk|macro|PMC_FSPR_FSTP10_Msk
DECL|PMC_FSPR_FSTP10_Pos|macro|PMC_FSPR_FSTP10_Pos
DECL|PMC_FSPR_FSTP10|macro|PMC_FSPR_FSTP10
DECL|PMC_FSPR_FSTP11_Msk|macro|PMC_FSPR_FSTP11_Msk
DECL|PMC_FSPR_FSTP11_Pos|macro|PMC_FSPR_FSTP11_Pos
DECL|PMC_FSPR_FSTP11|macro|PMC_FSPR_FSTP11
DECL|PMC_FSPR_FSTP12_Msk|macro|PMC_FSPR_FSTP12_Msk
DECL|PMC_FSPR_FSTP12_Pos|macro|PMC_FSPR_FSTP12_Pos
DECL|PMC_FSPR_FSTP12|macro|PMC_FSPR_FSTP12
DECL|PMC_FSPR_FSTP13_Msk|macro|PMC_FSPR_FSTP13_Msk
DECL|PMC_FSPR_FSTP13_Pos|macro|PMC_FSPR_FSTP13_Pos
DECL|PMC_FSPR_FSTP13|macro|PMC_FSPR_FSTP13
DECL|PMC_FSPR_FSTP14_Msk|macro|PMC_FSPR_FSTP14_Msk
DECL|PMC_FSPR_FSTP14_Pos|macro|PMC_FSPR_FSTP14_Pos
DECL|PMC_FSPR_FSTP14|macro|PMC_FSPR_FSTP14
DECL|PMC_FSPR_FSTP15_Msk|macro|PMC_FSPR_FSTP15_Msk
DECL|PMC_FSPR_FSTP15_Pos|macro|PMC_FSPR_FSTP15_Pos
DECL|PMC_FSPR_FSTP15|macro|PMC_FSPR_FSTP15
DECL|PMC_FSPR_FSTP1_Msk|macro|PMC_FSPR_FSTP1_Msk
DECL|PMC_FSPR_FSTP1_Pos|macro|PMC_FSPR_FSTP1_Pos
DECL|PMC_FSPR_FSTP1|macro|PMC_FSPR_FSTP1
DECL|PMC_FSPR_FSTP2_Msk|macro|PMC_FSPR_FSTP2_Msk
DECL|PMC_FSPR_FSTP2_Pos|macro|PMC_FSPR_FSTP2_Pos
DECL|PMC_FSPR_FSTP2|macro|PMC_FSPR_FSTP2
DECL|PMC_FSPR_FSTP3_Msk|macro|PMC_FSPR_FSTP3_Msk
DECL|PMC_FSPR_FSTP3_Pos|macro|PMC_FSPR_FSTP3_Pos
DECL|PMC_FSPR_FSTP3|macro|PMC_FSPR_FSTP3
DECL|PMC_FSPR_FSTP4_Msk|macro|PMC_FSPR_FSTP4_Msk
DECL|PMC_FSPR_FSTP4_Pos|macro|PMC_FSPR_FSTP4_Pos
DECL|PMC_FSPR_FSTP4|macro|PMC_FSPR_FSTP4
DECL|PMC_FSPR_FSTP5_Msk|macro|PMC_FSPR_FSTP5_Msk
DECL|PMC_FSPR_FSTP5_Pos|macro|PMC_FSPR_FSTP5_Pos
DECL|PMC_FSPR_FSTP5|macro|PMC_FSPR_FSTP5
DECL|PMC_FSPR_FSTP6_Msk|macro|PMC_FSPR_FSTP6_Msk
DECL|PMC_FSPR_FSTP6_Pos|macro|PMC_FSPR_FSTP6_Pos
DECL|PMC_FSPR_FSTP6|macro|PMC_FSPR_FSTP6
DECL|PMC_FSPR_FSTP7_Msk|macro|PMC_FSPR_FSTP7_Msk
DECL|PMC_FSPR_FSTP7_Pos|macro|PMC_FSPR_FSTP7_Pos
DECL|PMC_FSPR_FSTP7|macro|PMC_FSPR_FSTP7
DECL|PMC_FSPR_FSTP8_Msk|macro|PMC_FSPR_FSTP8_Msk
DECL|PMC_FSPR_FSTP8_Pos|macro|PMC_FSPR_FSTP8_Pos
DECL|PMC_FSPR_FSTP8|macro|PMC_FSPR_FSTP8
DECL|PMC_FSPR_FSTP9_Msk|macro|PMC_FSPR_FSTP9_Msk
DECL|PMC_FSPR_FSTP9_Pos|macro|PMC_FSPR_FSTP9_Pos
DECL|PMC_FSPR_FSTP9|macro|PMC_FSPR_FSTP9
DECL|PMC_FSPR_FSTP_Msk|macro|PMC_FSPR_FSTP_Msk
DECL|PMC_FSPR_FSTP_Pos|macro|PMC_FSPR_FSTP_Pos
DECL|PMC_FSPR_FSTP|macro|PMC_FSPR_FSTP
DECL|PMC_FSPR_MASK|macro|PMC_FSPR_MASK
DECL|PMC_FSPR_Msk|macro|PMC_FSPR_Msk
DECL|PMC_FSPR_OFFSET|macro|PMC_FSPR_OFFSET
DECL|PMC_FSPR_Type|typedef|} PMC_FSPR_Type;
DECL|PMC_FSPR|member|__IO PMC_FSPR_Type PMC_FSPR; /**< Offset: 0x74 (R/W 32) Fast Startup Polarity Register */
DECL|PMC_FSPR|member|__IO uint32_t PMC_FSPR; /**< (PMC Offset: 0x74) Fast Startup Polarity Register */
DECL|PMC_IDR_CFDEV_Msk|macro|PMC_IDR_CFDEV_Msk
DECL|PMC_IDR_CFDEV_Pos|macro|PMC_IDR_CFDEV_Pos
DECL|PMC_IDR_CFDEV|macro|PMC_IDR_CFDEV
DECL|PMC_IDR_LOCKA_Msk|macro|PMC_IDR_LOCKA_Msk
DECL|PMC_IDR_LOCKA_Pos|macro|PMC_IDR_LOCKA_Pos
DECL|PMC_IDR_LOCKA|macro|PMC_IDR_LOCKA
DECL|PMC_IDR_LOCKU_Msk|macro|PMC_IDR_LOCKU_Msk
DECL|PMC_IDR_LOCKU_Pos|macro|PMC_IDR_LOCKU_Pos
DECL|PMC_IDR_LOCKU|macro|PMC_IDR_LOCKU
DECL|PMC_IDR_MASK|macro|PMC_IDR_MASK
DECL|PMC_IDR_MCKRDY_Msk|macro|PMC_IDR_MCKRDY_Msk
DECL|PMC_IDR_MCKRDY_Pos|macro|PMC_IDR_MCKRDY_Pos
DECL|PMC_IDR_MCKRDY|macro|PMC_IDR_MCKRDY
DECL|PMC_IDR_MOSCRCS_Msk|macro|PMC_IDR_MOSCRCS_Msk
DECL|PMC_IDR_MOSCRCS_Pos|macro|PMC_IDR_MOSCRCS_Pos
DECL|PMC_IDR_MOSCRCS|macro|PMC_IDR_MOSCRCS
DECL|PMC_IDR_MOSCSELS_Msk|macro|PMC_IDR_MOSCSELS_Msk
DECL|PMC_IDR_MOSCSELS_Pos|macro|PMC_IDR_MOSCSELS_Pos
DECL|PMC_IDR_MOSCSELS|macro|PMC_IDR_MOSCSELS
DECL|PMC_IDR_MOSCXTS_Msk|macro|PMC_IDR_MOSCXTS_Msk
DECL|PMC_IDR_MOSCXTS_Pos|macro|PMC_IDR_MOSCXTS_Pos
DECL|PMC_IDR_MOSCXTS|macro|PMC_IDR_MOSCXTS
DECL|PMC_IDR_Msk|macro|PMC_IDR_Msk
DECL|PMC_IDR_OFFSET|macro|PMC_IDR_OFFSET
DECL|PMC_IDR_PCKRDY0_Msk|macro|PMC_IDR_PCKRDY0_Msk
DECL|PMC_IDR_PCKRDY0_Pos|macro|PMC_IDR_PCKRDY0_Pos
DECL|PMC_IDR_PCKRDY0|macro|PMC_IDR_PCKRDY0
DECL|PMC_IDR_PCKRDY1_Msk|macro|PMC_IDR_PCKRDY1_Msk
DECL|PMC_IDR_PCKRDY1_Pos|macro|PMC_IDR_PCKRDY1_Pos
DECL|PMC_IDR_PCKRDY1|macro|PMC_IDR_PCKRDY1
DECL|PMC_IDR_PCKRDY2_Msk|macro|PMC_IDR_PCKRDY2_Msk
DECL|PMC_IDR_PCKRDY2_Pos|macro|PMC_IDR_PCKRDY2_Pos
DECL|PMC_IDR_PCKRDY2|macro|PMC_IDR_PCKRDY2
DECL|PMC_IDR_Type|typedef|} PMC_IDR_Type;
DECL|PMC_IDR_XT32KERR_Msk|macro|PMC_IDR_XT32KERR_Msk
DECL|PMC_IDR_XT32KERR_Pos|macro|PMC_IDR_XT32KERR_Pos
DECL|PMC_IDR_XT32KERR|macro|PMC_IDR_XT32KERR
DECL|PMC_IDR|member|__O PMC_IDR_Type PMC_IDR; /**< Offset: 0x64 ( /W 32) Interrupt Disable Register */
DECL|PMC_IDR|member|__O uint32_t PMC_IDR; /**< (PMC Offset: 0x64) Interrupt Disable Register */
DECL|PMC_IER_CFDEV_Msk|macro|PMC_IER_CFDEV_Msk
DECL|PMC_IER_CFDEV_Pos|macro|PMC_IER_CFDEV_Pos
DECL|PMC_IER_CFDEV|macro|PMC_IER_CFDEV
DECL|PMC_IER_LOCKA_Msk|macro|PMC_IER_LOCKA_Msk
DECL|PMC_IER_LOCKA_Pos|macro|PMC_IER_LOCKA_Pos
DECL|PMC_IER_LOCKA|macro|PMC_IER_LOCKA
DECL|PMC_IER_LOCKU_Msk|macro|PMC_IER_LOCKU_Msk
DECL|PMC_IER_LOCKU_Pos|macro|PMC_IER_LOCKU_Pos
DECL|PMC_IER_LOCKU|macro|PMC_IER_LOCKU
DECL|PMC_IER_MASK|macro|PMC_IER_MASK
DECL|PMC_IER_MCKRDY_Msk|macro|PMC_IER_MCKRDY_Msk
DECL|PMC_IER_MCKRDY_Pos|macro|PMC_IER_MCKRDY_Pos
DECL|PMC_IER_MCKRDY|macro|PMC_IER_MCKRDY
DECL|PMC_IER_MOSCRCS_Msk|macro|PMC_IER_MOSCRCS_Msk
DECL|PMC_IER_MOSCRCS_Pos|macro|PMC_IER_MOSCRCS_Pos
DECL|PMC_IER_MOSCRCS|macro|PMC_IER_MOSCRCS
DECL|PMC_IER_MOSCSELS_Msk|macro|PMC_IER_MOSCSELS_Msk
DECL|PMC_IER_MOSCSELS_Pos|macro|PMC_IER_MOSCSELS_Pos
DECL|PMC_IER_MOSCSELS|macro|PMC_IER_MOSCSELS
DECL|PMC_IER_MOSCXTS_Msk|macro|PMC_IER_MOSCXTS_Msk
DECL|PMC_IER_MOSCXTS_Pos|macro|PMC_IER_MOSCXTS_Pos
DECL|PMC_IER_MOSCXTS|macro|PMC_IER_MOSCXTS
DECL|PMC_IER_Msk|macro|PMC_IER_Msk
DECL|PMC_IER_OFFSET|macro|PMC_IER_OFFSET
DECL|PMC_IER_PCKRDY0_Msk|macro|PMC_IER_PCKRDY0_Msk
DECL|PMC_IER_PCKRDY0_Pos|macro|PMC_IER_PCKRDY0_Pos
DECL|PMC_IER_PCKRDY0|macro|PMC_IER_PCKRDY0
DECL|PMC_IER_PCKRDY1_Msk|macro|PMC_IER_PCKRDY1_Msk
DECL|PMC_IER_PCKRDY1_Pos|macro|PMC_IER_PCKRDY1_Pos
DECL|PMC_IER_PCKRDY1|macro|PMC_IER_PCKRDY1
DECL|PMC_IER_PCKRDY2_Msk|macro|PMC_IER_PCKRDY2_Msk
DECL|PMC_IER_PCKRDY2_Pos|macro|PMC_IER_PCKRDY2_Pos
DECL|PMC_IER_PCKRDY2|macro|PMC_IER_PCKRDY2
DECL|PMC_IER_Type|typedef|} PMC_IER_Type;
DECL|PMC_IER_XT32KERR_Msk|macro|PMC_IER_XT32KERR_Msk
DECL|PMC_IER_XT32KERR_Pos|macro|PMC_IER_XT32KERR_Pos
DECL|PMC_IER_XT32KERR|macro|PMC_IER_XT32KERR
DECL|PMC_IER|member|__O PMC_IER_Type PMC_IER; /**< Offset: 0x60 ( /W 32) Interrupt Enable Register */
DECL|PMC_IER|member|__O uint32_t PMC_IER; /**< (PMC Offset: 0x60) Interrupt Enable Register */
DECL|PMC_IMR_CFDEV_Msk|macro|PMC_IMR_CFDEV_Msk
DECL|PMC_IMR_CFDEV_Pos|macro|PMC_IMR_CFDEV_Pos
DECL|PMC_IMR_CFDEV|macro|PMC_IMR_CFDEV
DECL|PMC_IMR_LOCKA_Msk|macro|PMC_IMR_LOCKA_Msk
DECL|PMC_IMR_LOCKA_Pos|macro|PMC_IMR_LOCKA_Pos
DECL|PMC_IMR_LOCKA|macro|PMC_IMR_LOCKA
DECL|PMC_IMR_LOCKU_Msk|macro|PMC_IMR_LOCKU_Msk
DECL|PMC_IMR_LOCKU_Pos|macro|PMC_IMR_LOCKU_Pos
DECL|PMC_IMR_LOCKU|macro|PMC_IMR_LOCKU
DECL|PMC_IMR_MASK|macro|PMC_IMR_MASK
DECL|PMC_IMR_MCKRDY_Msk|macro|PMC_IMR_MCKRDY_Msk
DECL|PMC_IMR_MCKRDY_Pos|macro|PMC_IMR_MCKRDY_Pos
DECL|PMC_IMR_MCKRDY|macro|PMC_IMR_MCKRDY
DECL|PMC_IMR_MOSCRCS_Msk|macro|PMC_IMR_MOSCRCS_Msk
DECL|PMC_IMR_MOSCRCS_Pos|macro|PMC_IMR_MOSCRCS_Pos
DECL|PMC_IMR_MOSCRCS|macro|PMC_IMR_MOSCRCS
DECL|PMC_IMR_MOSCSELS_Msk|macro|PMC_IMR_MOSCSELS_Msk
DECL|PMC_IMR_MOSCSELS_Pos|macro|PMC_IMR_MOSCSELS_Pos
DECL|PMC_IMR_MOSCSELS|macro|PMC_IMR_MOSCSELS
DECL|PMC_IMR_MOSCXTS_Msk|macro|PMC_IMR_MOSCXTS_Msk
DECL|PMC_IMR_MOSCXTS_Pos|macro|PMC_IMR_MOSCXTS_Pos
DECL|PMC_IMR_MOSCXTS|macro|PMC_IMR_MOSCXTS
DECL|PMC_IMR_Msk|macro|PMC_IMR_Msk
DECL|PMC_IMR_OFFSET|macro|PMC_IMR_OFFSET
DECL|PMC_IMR_PCKRDY0_Msk|macro|PMC_IMR_PCKRDY0_Msk
DECL|PMC_IMR_PCKRDY0_Pos|macro|PMC_IMR_PCKRDY0_Pos
DECL|PMC_IMR_PCKRDY0|macro|PMC_IMR_PCKRDY0
DECL|PMC_IMR_PCKRDY1_Msk|macro|PMC_IMR_PCKRDY1_Msk
DECL|PMC_IMR_PCKRDY1_Pos|macro|PMC_IMR_PCKRDY1_Pos
DECL|PMC_IMR_PCKRDY1|macro|PMC_IMR_PCKRDY1
DECL|PMC_IMR_PCKRDY2_Msk|macro|PMC_IMR_PCKRDY2_Msk
DECL|PMC_IMR_PCKRDY2_Pos|macro|PMC_IMR_PCKRDY2_Pos
DECL|PMC_IMR_PCKRDY2|macro|PMC_IMR_PCKRDY2
DECL|PMC_IMR_Type|typedef|} PMC_IMR_Type;
DECL|PMC_IMR_XT32KERR_Msk|macro|PMC_IMR_XT32KERR_Msk
DECL|PMC_IMR_XT32KERR_Pos|macro|PMC_IMR_XT32KERR_Pos
DECL|PMC_IMR_XT32KERR|macro|PMC_IMR_XT32KERR
DECL|PMC_IMR|member|__I PMC_IMR_Type PMC_IMR; /**< Offset: 0x6C (R/ 32) Interrupt Mask Register */
DECL|PMC_IMR|member|__I uint32_t PMC_IMR; /**< (PMC Offset: 0x6C) Interrupt Mask Register */
DECL|PMC_MCKR_CSS_MAIN_CLK_Val|macro|PMC_MCKR_CSS_MAIN_CLK_Val
DECL|PMC_MCKR_CSS_MAIN_CLK|macro|PMC_MCKR_CSS_MAIN_CLK
DECL|PMC_MCKR_CSS_Msk|macro|PMC_MCKR_CSS_Msk
DECL|PMC_MCKR_CSS_PLLA_CLK_Val|macro|PMC_MCKR_CSS_PLLA_CLK_Val
DECL|PMC_MCKR_CSS_PLLA_CLK|macro|PMC_MCKR_CSS_PLLA_CLK
DECL|PMC_MCKR_CSS_Pos|macro|PMC_MCKR_CSS_Pos
DECL|PMC_MCKR_CSS_SLOW_CLK_Val|macro|PMC_MCKR_CSS_SLOW_CLK_Val
DECL|PMC_MCKR_CSS_SLOW_CLK|macro|PMC_MCKR_CSS_SLOW_CLK
DECL|PMC_MCKR_CSS_UPLL_CLK_Val|macro|PMC_MCKR_CSS_UPLL_CLK_Val
DECL|PMC_MCKR_CSS_UPLL_CLK|macro|PMC_MCKR_CSS_UPLL_CLK
DECL|PMC_MCKR_CSS|macro|PMC_MCKR_CSS
DECL|PMC_MCKR_MASK|macro|PMC_MCKR_MASK
DECL|PMC_MCKR_MDIV_EQ_PCK_Val|macro|PMC_MCKR_MDIV_EQ_PCK_Val
DECL|PMC_MCKR_MDIV_EQ_PCK|macro|PMC_MCKR_MDIV_EQ_PCK
DECL|PMC_MCKR_MDIV_Msk|macro|PMC_MCKR_MDIV_Msk
DECL|PMC_MCKR_MDIV_PCK_DIV2_Val|macro|PMC_MCKR_MDIV_PCK_DIV2_Val
DECL|PMC_MCKR_MDIV_PCK_DIV2|macro|PMC_MCKR_MDIV_PCK_DIV2
DECL|PMC_MCKR_MDIV_PCK_DIV3_Val|macro|PMC_MCKR_MDIV_PCK_DIV3_Val
DECL|PMC_MCKR_MDIV_PCK_DIV3|macro|PMC_MCKR_MDIV_PCK_DIV3
DECL|PMC_MCKR_MDIV_PCK_DIV4_Val|macro|PMC_MCKR_MDIV_PCK_DIV4_Val
DECL|PMC_MCKR_MDIV_PCK_DIV4|macro|PMC_MCKR_MDIV_PCK_DIV4
DECL|PMC_MCKR_MDIV_Pos|macro|PMC_MCKR_MDIV_Pos
DECL|PMC_MCKR_MDIV|macro|PMC_MCKR_MDIV
DECL|PMC_MCKR_Msk|macro|PMC_MCKR_Msk
DECL|PMC_MCKR_OFFSET|macro|PMC_MCKR_OFFSET
DECL|PMC_MCKR_PRES_CLK_16_Val|macro|PMC_MCKR_PRES_CLK_16_Val
DECL|PMC_MCKR_PRES_CLK_16|macro|PMC_MCKR_PRES_CLK_16
DECL|PMC_MCKR_PRES_CLK_1_Val|macro|PMC_MCKR_PRES_CLK_1_Val
DECL|PMC_MCKR_PRES_CLK_1|macro|PMC_MCKR_PRES_CLK_1
DECL|PMC_MCKR_PRES_CLK_2_Val|macro|PMC_MCKR_PRES_CLK_2_Val
DECL|PMC_MCKR_PRES_CLK_2|macro|PMC_MCKR_PRES_CLK_2
DECL|PMC_MCKR_PRES_CLK_32_Val|macro|PMC_MCKR_PRES_CLK_32_Val
DECL|PMC_MCKR_PRES_CLK_32|macro|PMC_MCKR_PRES_CLK_32
DECL|PMC_MCKR_PRES_CLK_3_Val|macro|PMC_MCKR_PRES_CLK_3_Val
DECL|PMC_MCKR_PRES_CLK_3|macro|PMC_MCKR_PRES_CLK_3
DECL|PMC_MCKR_PRES_CLK_4_Val|macro|PMC_MCKR_PRES_CLK_4_Val
DECL|PMC_MCKR_PRES_CLK_4|macro|PMC_MCKR_PRES_CLK_4
DECL|PMC_MCKR_PRES_CLK_64_Val|macro|PMC_MCKR_PRES_CLK_64_Val
DECL|PMC_MCKR_PRES_CLK_64|macro|PMC_MCKR_PRES_CLK_64
DECL|PMC_MCKR_PRES_CLK_8_Val|macro|PMC_MCKR_PRES_CLK_8_Val
DECL|PMC_MCKR_PRES_CLK_8|macro|PMC_MCKR_PRES_CLK_8
DECL|PMC_MCKR_PRES_Msk|macro|PMC_MCKR_PRES_Msk
DECL|PMC_MCKR_PRES_Pos|macro|PMC_MCKR_PRES_Pos
DECL|PMC_MCKR_PRES|macro|PMC_MCKR_PRES
DECL|PMC_MCKR_Type|typedef|} PMC_MCKR_Type;
DECL|PMC_MCKR_UPLLDIV2_Msk|macro|PMC_MCKR_UPLLDIV2_Msk
DECL|PMC_MCKR_UPLLDIV2_Pos|macro|PMC_MCKR_UPLLDIV2_Pos
DECL|PMC_MCKR_UPLLDIV2|macro|PMC_MCKR_UPLLDIV2
DECL|PMC_MCKR|member|__IO PMC_MCKR_Type PMC_MCKR; /**< Offset: 0x30 (R/W 32) Master Clock Register */
DECL|PMC_MCKR|member|__IO uint32_t PMC_MCKR; /**< (PMC Offset: 0x30) Master Clock Register */
DECL|PMC_OCR_CAL12_Msk|macro|PMC_OCR_CAL12_Msk
DECL|PMC_OCR_CAL12_Pos|macro|PMC_OCR_CAL12_Pos
DECL|PMC_OCR_CAL12|macro|PMC_OCR_CAL12
DECL|PMC_OCR_CAL4_Msk|macro|PMC_OCR_CAL4_Msk
DECL|PMC_OCR_CAL4_Pos|macro|PMC_OCR_CAL4_Pos
DECL|PMC_OCR_CAL4|macro|PMC_OCR_CAL4
DECL|PMC_OCR_CAL8_Msk|macro|PMC_OCR_CAL8_Msk
DECL|PMC_OCR_CAL8_Pos|macro|PMC_OCR_CAL8_Pos
DECL|PMC_OCR_CAL8|macro|PMC_OCR_CAL8
DECL|PMC_OCR_MASK|macro|PMC_OCR_MASK
DECL|PMC_OCR_Msk|macro|PMC_OCR_Msk
DECL|PMC_OCR_OFFSET|macro|PMC_OCR_OFFSET
DECL|PMC_OCR_SEL12_Msk|macro|PMC_OCR_SEL12_Msk
DECL|PMC_OCR_SEL12_Pos|macro|PMC_OCR_SEL12_Pos
DECL|PMC_OCR_SEL12|macro|PMC_OCR_SEL12
DECL|PMC_OCR_SEL4_Msk|macro|PMC_OCR_SEL4_Msk
DECL|PMC_OCR_SEL4_Pos|macro|PMC_OCR_SEL4_Pos
DECL|PMC_OCR_SEL4|macro|PMC_OCR_SEL4
DECL|PMC_OCR_SEL8_Msk|macro|PMC_OCR_SEL8_Msk
DECL|PMC_OCR_SEL8_Pos|macro|PMC_OCR_SEL8_Pos
DECL|PMC_OCR_SEL8|macro|PMC_OCR_SEL8
DECL|PMC_OCR_Type|typedef|} PMC_OCR_Type;
DECL|PMC_OCR|member|__IO PMC_OCR_Type PMC_OCR; /**< Offset: 0x110 (R/W 32) Oscillator Calibration Register */
DECL|PMC_OCR|member|__IO uint32_t PMC_OCR; /**< (PMC Offset: 0x110) Oscillator Calibration Register */
DECL|PMC_PCDR0_MASK|macro|PMC_PCDR0_MASK
DECL|PMC_PCDR0_Msk|macro|PMC_PCDR0_Msk
DECL|PMC_PCDR0_OFFSET|macro|PMC_PCDR0_OFFSET
DECL|PMC_PCDR0_PID16_Msk|macro|PMC_PCDR0_PID16_Msk
DECL|PMC_PCDR0_PID16_Pos|macro|PMC_PCDR0_PID16_Pos
DECL|PMC_PCDR0_PID16|macro|PMC_PCDR0_PID16
DECL|PMC_PCDR0_PID17_Msk|macro|PMC_PCDR0_PID17_Msk
DECL|PMC_PCDR0_PID17_Pos|macro|PMC_PCDR0_PID17_Pos
DECL|PMC_PCDR0_PID17|macro|PMC_PCDR0_PID17
DECL|PMC_PCDR0_PID18_Msk|macro|PMC_PCDR0_PID18_Msk
DECL|PMC_PCDR0_PID18_Pos|macro|PMC_PCDR0_PID18_Pos
DECL|PMC_PCDR0_PID18|macro|PMC_PCDR0_PID18
DECL|PMC_PCDR0_PID19_Msk|macro|PMC_PCDR0_PID19_Msk
DECL|PMC_PCDR0_PID19_Pos|macro|PMC_PCDR0_PID19_Pos
DECL|PMC_PCDR0_PID19|macro|PMC_PCDR0_PID19
DECL|PMC_PCDR0_PID20_Msk|macro|PMC_PCDR0_PID20_Msk
DECL|PMC_PCDR0_PID20_Pos|macro|PMC_PCDR0_PID20_Pos
DECL|PMC_PCDR0_PID20|macro|PMC_PCDR0_PID20
DECL|PMC_PCDR0_PID21_Msk|macro|PMC_PCDR0_PID21_Msk
DECL|PMC_PCDR0_PID21_Pos|macro|PMC_PCDR0_PID21_Pos
DECL|PMC_PCDR0_PID21|macro|PMC_PCDR0_PID21
DECL|PMC_PCDR0_PID22_Msk|macro|PMC_PCDR0_PID22_Msk
DECL|PMC_PCDR0_PID22_Pos|macro|PMC_PCDR0_PID22_Pos
DECL|PMC_PCDR0_PID22|macro|PMC_PCDR0_PID22
DECL|PMC_PCDR0_PID23_Msk|macro|PMC_PCDR0_PID23_Msk
DECL|PMC_PCDR0_PID23_Pos|macro|PMC_PCDR0_PID23_Pos
DECL|PMC_PCDR0_PID23|macro|PMC_PCDR0_PID23
DECL|PMC_PCDR0_PID24_Msk|macro|PMC_PCDR0_PID24_Msk
DECL|PMC_PCDR0_PID24_Pos|macro|PMC_PCDR0_PID24_Pos
DECL|PMC_PCDR0_PID24|macro|PMC_PCDR0_PID24
DECL|PMC_PCDR0_PID25_Msk|macro|PMC_PCDR0_PID25_Msk
DECL|PMC_PCDR0_PID25_Pos|macro|PMC_PCDR0_PID25_Pos
DECL|PMC_PCDR0_PID25|macro|PMC_PCDR0_PID25
DECL|PMC_PCDR0_PID26_Msk|macro|PMC_PCDR0_PID26_Msk
DECL|PMC_PCDR0_PID26_Pos|macro|PMC_PCDR0_PID26_Pos
DECL|PMC_PCDR0_PID26|macro|PMC_PCDR0_PID26
DECL|PMC_PCDR0_PID27_Msk|macro|PMC_PCDR0_PID27_Msk
DECL|PMC_PCDR0_PID27_Pos|macro|PMC_PCDR0_PID27_Pos
DECL|PMC_PCDR0_PID27|macro|PMC_PCDR0_PID27
DECL|PMC_PCDR0_PID28_Msk|macro|PMC_PCDR0_PID28_Msk
DECL|PMC_PCDR0_PID28_Pos|macro|PMC_PCDR0_PID28_Pos
DECL|PMC_PCDR0_PID28|macro|PMC_PCDR0_PID28
DECL|PMC_PCDR0_PID29_Msk|macro|PMC_PCDR0_PID29_Msk
DECL|PMC_PCDR0_PID29_Pos|macro|PMC_PCDR0_PID29_Pos
DECL|PMC_PCDR0_PID29|macro|PMC_PCDR0_PID29
DECL|PMC_PCDR0_PID30_Msk|macro|PMC_PCDR0_PID30_Msk
DECL|PMC_PCDR0_PID30_Pos|macro|PMC_PCDR0_PID30_Pos
DECL|PMC_PCDR0_PID30|macro|PMC_PCDR0_PID30
DECL|PMC_PCDR0_PID31_Msk|macro|PMC_PCDR0_PID31_Msk
DECL|PMC_PCDR0_PID31_Pos|macro|PMC_PCDR0_PID31_Pos
DECL|PMC_PCDR0_PID31|macro|PMC_PCDR0_PID31
DECL|PMC_PCDR0_PID7_Msk|macro|PMC_PCDR0_PID7_Msk
DECL|PMC_PCDR0_PID7_Pos|macro|PMC_PCDR0_PID7_Pos
DECL|PMC_PCDR0_PID7|macro|PMC_PCDR0_PID7
DECL|PMC_PCDR0_PID8_Msk|macro|PMC_PCDR0_PID8_Msk
DECL|PMC_PCDR0_PID8_Pos|macro|PMC_PCDR0_PID8_Pos
DECL|PMC_PCDR0_PID8|macro|PMC_PCDR0_PID8
DECL|PMC_PCDR0_PID_Msk|macro|PMC_PCDR0_PID_Msk
DECL|PMC_PCDR0_PID_Pos|macro|PMC_PCDR0_PID_Pos
DECL|PMC_PCDR0_PID|macro|PMC_PCDR0_PID
DECL|PMC_PCDR0_Type|typedef|} PMC_PCDR0_Type;
DECL|PMC_PCDR0|member|__O PMC_PCDR0_Type PMC_PCDR0; /**< Offset: 0x14 ( /W 32) Peripheral Clock Disable Register 0 */
DECL|PMC_PCDR0|member|__O uint32_t PMC_PCDR0; /**< (PMC Offset: 0x14) Peripheral Clock Disable Register 0 */
DECL|PMC_PCDR1_MASK|macro|PMC_PCDR1_MASK
DECL|PMC_PCDR1_Msk|macro|PMC_PCDR1_Msk
DECL|PMC_PCDR1_OFFSET|macro|PMC_PCDR1_OFFSET
DECL|PMC_PCDR1_PID32_Msk|macro|PMC_PCDR1_PID32_Msk
DECL|PMC_PCDR1_PID32_Pos|macro|PMC_PCDR1_PID32_Pos
DECL|PMC_PCDR1_PID32|macro|PMC_PCDR1_PID32
DECL|PMC_PCDR1_PID33_Msk|macro|PMC_PCDR1_PID33_Msk
DECL|PMC_PCDR1_PID33_Pos|macro|PMC_PCDR1_PID33_Pos
DECL|PMC_PCDR1_PID33|macro|PMC_PCDR1_PID33
DECL|PMC_PCDR1_PID34_Msk|macro|PMC_PCDR1_PID34_Msk
DECL|PMC_PCDR1_PID34_Pos|macro|PMC_PCDR1_PID34_Pos
DECL|PMC_PCDR1_PID34|macro|PMC_PCDR1_PID34
DECL|PMC_PCDR1_PID35_Msk|macro|PMC_PCDR1_PID35_Msk
DECL|PMC_PCDR1_PID35_Pos|macro|PMC_PCDR1_PID35_Pos
DECL|PMC_PCDR1_PID35|macro|PMC_PCDR1_PID35
DECL|PMC_PCDR1_PID37_Msk|macro|PMC_PCDR1_PID37_Msk
DECL|PMC_PCDR1_PID37_Pos|macro|PMC_PCDR1_PID37_Pos
DECL|PMC_PCDR1_PID37|macro|PMC_PCDR1_PID37
DECL|PMC_PCDR1_PID39_Msk|macro|PMC_PCDR1_PID39_Msk
DECL|PMC_PCDR1_PID39_Pos|macro|PMC_PCDR1_PID39_Pos
DECL|PMC_PCDR1_PID39|macro|PMC_PCDR1_PID39
DECL|PMC_PCDR1_PID40_Msk|macro|PMC_PCDR1_PID40_Msk
DECL|PMC_PCDR1_PID40_Pos|macro|PMC_PCDR1_PID40_Pos
DECL|PMC_PCDR1_PID40|macro|PMC_PCDR1_PID40
DECL|PMC_PCDR1_PID41_Msk|macro|PMC_PCDR1_PID41_Msk
DECL|PMC_PCDR1_PID41_Pos|macro|PMC_PCDR1_PID41_Pos
DECL|PMC_PCDR1_PID41|macro|PMC_PCDR1_PID41
DECL|PMC_PCDR1_PID42_Msk|macro|PMC_PCDR1_PID42_Msk
DECL|PMC_PCDR1_PID42_Pos|macro|PMC_PCDR1_PID42_Pos
DECL|PMC_PCDR1_PID42|macro|PMC_PCDR1_PID42
DECL|PMC_PCDR1_PID43_Msk|macro|PMC_PCDR1_PID43_Msk
DECL|PMC_PCDR1_PID43_Pos|macro|PMC_PCDR1_PID43_Pos
DECL|PMC_PCDR1_PID43|macro|PMC_PCDR1_PID43
DECL|PMC_PCDR1_PID44_Msk|macro|PMC_PCDR1_PID44_Msk
DECL|PMC_PCDR1_PID44_Pos|macro|PMC_PCDR1_PID44_Pos
DECL|PMC_PCDR1_PID44|macro|PMC_PCDR1_PID44
DECL|PMC_PCDR1_PID45_Msk|macro|PMC_PCDR1_PID45_Msk
DECL|PMC_PCDR1_PID45_Pos|macro|PMC_PCDR1_PID45_Pos
DECL|PMC_PCDR1_PID45|macro|PMC_PCDR1_PID45
DECL|PMC_PCDR1_PID46_Msk|macro|PMC_PCDR1_PID46_Msk
DECL|PMC_PCDR1_PID46_Pos|macro|PMC_PCDR1_PID46_Pos
DECL|PMC_PCDR1_PID46|macro|PMC_PCDR1_PID46
DECL|PMC_PCDR1_PID47_Msk|macro|PMC_PCDR1_PID47_Msk
DECL|PMC_PCDR1_PID47_Pos|macro|PMC_PCDR1_PID47_Pos
DECL|PMC_PCDR1_PID47|macro|PMC_PCDR1_PID47
DECL|PMC_PCDR1_PID48_Msk|macro|PMC_PCDR1_PID48_Msk
DECL|PMC_PCDR1_PID48_Pos|macro|PMC_PCDR1_PID48_Pos
DECL|PMC_PCDR1_PID48|macro|PMC_PCDR1_PID48
DECL|PMC_PCDR1_PID49_Msk|macro|PMC_PCDR1_PID49_Msk
DECL|PMC_PCDR1_PID49_Pos|macro|PMC_PCDR1_PID49_Pos
DECL|PMC_PCDR1_PID49|macro|PMC_PCDR1_PID49
DECL|PMC_PCDR1_PID50_Msk|macro|PMC_PCDR1_PID50_Msk
DECL|PMC_PCDR1_PID50_Pos|macro|PMC_PCDR1_PID50_Pos
DECL|PMC_PCDR1_PID50|macro|PMC_PCDR1_PID50
DECL|PMC_PCDR1_PID51_Msk|macro|PMC_PCDR1_PID51_Msk
DECL|PMC_PCDR1_PID51_Pos|macro|PMC_PCDR1_PID51_Pos
DECL|PMC_PCDR1_PID51|macro|PMC_PCDR1_PID51
DECL|PMC_PCDR1_PID52_Msk|macro|PMC_PCDR1_PID52_Msk
DECL|PMC_PCDR1_PID52_Pos|macro|PMC_PCDR1_PID52_Pos
DECL|PMC_PCDR1_PID52|macro|PMC_PCDR1_PID52
DECL|PMC_PCDR1_PID53_Msk|macro|PMC_PCDR1_PID53_Msk
DECL|PMC_PCDR1_PID53_Pos|macro|PMC_PCDR1_PID53_Pos
DECL|PMC_PCDR1_PID53|macro|PMC_PCDR1_PID53
DECL|PMC_PCDR1_PID56_Msk|macro|PMC_PCDR1_PID56_Msk
DECL|PMC_PCDR1_PID56_Pos|macro|PMC_PCDR1_PID56_Pos
DECL|PMC_PCDR1_PID56|macro|PMC_PCDR1_PID56
DECL|PMC_PCDR1_PID57_Msk|macro|PMC_PCDR1_PID57_Msk
DECL|PMC_PCDR1_PID57_Pos|macro|PMC_PCDR1_PID57_Pos
DECL|PMC_PCDR1_PID57|macro|PMC_PCDR1_PID57
DECL|PMC_PCDR1_PID58_Msk|macro|PMC_PCDR1_PID58_Msk
DECL|PMC_PCDR1_PID58_Pos|macro|PMC_PCDR1_PID58_Pos
DECL|PMC_PCDR1_PID58|macro|PMC_PCDR1_PID58
DECL|PMC_PCDR1_PID59_Msk|macro|PMC_PCDR1_PID59_Msk
DECL|PMC_PCDR1_PID59_Pos|macro|PMC_PCDR1_PID59_Pos
DECL|PMC_PCDR1_PID59|macro|PMC_PCDR1_PID59
DECL|PMC_PCDR1_PID60_Msk|macro|PMC_PCDR1_PID60_Msk
DECL|PMC_PCDR1_PID60_Pos|macro|PMC_PCDR1_PID60_Pos
DECL|PMC_PCDR1_PID60|macro|PMC_PCDR1_PID60
DECL|PMC_PCDR1_PID_Msk|macro|PMC_PCDR1_PID_Msk
DECL|PMC_PCDR1_PID_Pos|macro|PMC_PCDR1_PID_Pos
DECL|PMC_PCDR1_PID|macro|PMC_PCDR1_PID
DECL|PMC_PCDR1_Type|typedef|} PMC_PCDR1_Type;
DECL|PMC_PCDR1|member|__O PMC_PCDR1_Type PMC_PCDR1; /**< Offset: 0x104 ( /W 32) Peripheral Clock Disable Register 1 */
DECL|PMC_PCDR1|member|__O uint32_t PMC_PCDR1; /**< (PMC Offset: 0x104) Peripheral Clock Disable Register 1 */
DECL|PMC_PCER0_MASK|macro|PMC_PCER0_MASK
DECL|PMC_PCER0_Msk|macro|PMC_PCER0_Msk
DECL|PMC_PCER0_OFFSET|macro|PMC_PCER0_OFFSET
DECL|PMC_PCER0_PID16_Msk|macro|PMC_PCER0_PID16_Msk
DECL|PMC_PCER0_PID16_Pos|macro|PMC_PCER0_PID16_Pos
DECL|PMC_PCER0_PID16|macro|PMC_PCER0_PID16
DECL|PMC_PCER0_PID17_Msk|macro|PMC_PCER0_PID17_Msk
DECL|PMC_PCER0_PID17_Pos|macro|PMC_PCER0_PID17_Pos
DECL|PMC_PCER0_PID17|macro|PMC_PCER0_PID17
DECL|PMC_PCER0_PID18_Msk|macro|PMC_PCER0_PID18_Msk
DECL|PMC_PCER0_PID18_Pos|macro|PMC_PCER0_PID18_Pos
DECL|PMC_PCER0_PID18|macro|PMC_PCER0_PID18
DECL|PMC_PCER0_PID19_Msk|macro|PMC_PCER0_PID19_Msk
DECL|PMC_PCER0_PID19_Pos|macro|PMC_PCER0_PID19_Pos
DECL|PMC_PCER0_PID19|macro|PMC_PCER0_PID19
DECL|PMC_PCER0_PID20_Msk|macro|PMC_PCER0_PID20_Msk
DECL|PMC_PCER0_PID20_Pos|macro|PMC_PCER0_PID20_Pos
DECL|PMC_PCER0_PID20|macro|PMC_PCER0_PID20
DECL|PMC_PCER0_PID21_Msk|macro|PMC_PCER0_PID21_Msk
DECL|PMC_PCER0_PID21_Pos|macro|PMC_PCER0_PID21_Pos
DECL|PMC_PCER0_PID21|macro|PMC_PCER0_PID21
DECL|PMC_PCER0_PID22_Msk|macro|PMC_PCER0_PID22_Msk
DECL|PMC_PCER0_PID22_Pos|macro|PMC_PCER0_PID22_Pos
DECL|PMC_PCER0_PID22|macro|PMC_PCER0_PID22
DECL|PMC_PCER0_PID23_Msk|macro|PMC_PCER0_PID23_Msk
DECL|PMC_PCER0_PID23_Pos|macro|PMC_PCER0_PID23_Pos
DECL|PMC_PCER0_PID23|macro|PMC_PCER0_PID23
DECL|PMC_PCER0_PID24_Msk|macro|PMC_PCER0_PID24_Msk
DECL|PMC_PCER0_PID24_Pos|macro|PMC_PCER0_PID24_Pos
DECL|PMC_PCER0_PID24|macro|PMC_PCER0_PID24
DECL|PMC_PCER0_PID25_Msk|macro|PMC_PCER0_PID25_Msk
DECL|PMC_PCER0_PID25_Pos|macro|PMC_PCER0_PID25_Pos
DECL|PMC_PCER0_PID25|macro|PMC_PCER0_PID25
DECL|PMC_PCER0_PID26_Msk|macro|PMC_PCER0_PID26_Msk
DECL|PMC_PCER0_PID26_Pos|macro|PMC_PCER0_PID26_Pos
DECL|PMC_PCER0_PID26|macro|PMC_PCER0_PID26
DECL|PMC_PCER0_PID27_Msk|macro|PMC_PCER0_PID27_Msk
DECL|PMC_PCER0_PID27_Pos|macro|PMC_PCER0_PID27_Pos
DECL|PMC_PCER0_PID27|macro|PMC_PCER0_PID27
DECL|PMC_PCER0_PID28_Msk|macro|PMC_PCER0_PID28_Msk
DECL|PMC_PCER0_PID28_Pos|macro|PMC_PCER0_PID28_Pos
DECL|PMC_PCER0_PID28|macro|PMC_PCER0_PID28
DECL|PMC_PCER0_PID29_Msk|macro|PMC_PCER0_PID29_Msk
DECL|PMC_PCER0_PID29_Pos|macro|PMC_PCER0_PID29_Pos
DECL|PMC_PCER0_PID29|macro|PMC_PCER0_PID29
DECL|PMC_PCER0_PID30_Msk|macro|PMC_PCER0_PID30_Msk
DECL|PMC_PCER0_PID30_Pos|macro|PMC_PCER0_PID30_Pos
DECL|PMC_PCER0_PID30|macro|PMC_PCER0_PID30
DECL|PMC_PCER0_PID31_Msk|macro|PMC_PCER0_PID31_Msk
DECL|PMC_PCER0_PID31_Pos|macro|PMC_PCER0_PID31_Pos
DECL|PMC_PCER0_PID31|macro|PMC_PCER0_PID31
DECL|PMC_PCER0_PID7_Msk|macro|PMC_PCER0_PID7_Msk
DECL|PMC_PCER0_PID7_Pos|macro|PMC_PCER0_PID7_Pos
DECL|PMC_PCER0_PID7|macro|PMC_PCER0_PID7
DECL|PMC_PCER0_PID8_Msk|macro|PMC_PCER0_PID8_Msk
DECL|PMC_PCER0_PID8_Pos|macro|PMC_PCER0_PID8_Pos
DECL|PMC_PCER0_PID8|macro|PMC_PCER0_PID8
DECL|PMC_PCER0_PID_Msk|macro|PMC_PCER0_PID_Msk
DECL|PMC_PCER0_PID_Pos|macro|PMC_PCER0_PID_Pos
DECL|PMC_PCER0_PID|macro|PMC_PCER0_PID
DECL|PMC_PCER0_Type|typedef|} PMC_PCER0_Type;
DECL|PMC_PCER0|member|__O PMC_PCER0_Type PMC_PCER0; /**< Offset: 0x10 ( /W 32) Peripheral Clock Enable Register 0 */
DECL|PMC_PCER0|member|__O uint32_t PMC_PCER0; /**< (PMC Offset: 0x10) Peripheral Clock Enable Register 0 */
DECL|PMC_PCER1_MASK|macro|PMC_PCER1_MASK
DECL|PMC_PCER1_Msk|macro|PMC_PCER1_Msk
DECL|PMC_PCER1_OFFSET|macro|PMC_PCER1_OFFSET
DECL|PMC_PCER1_PID32_Msk|macro|PMC_PCER1_PID32_Msk
DECL|PMC_PCER1_PID32_Pos|macro|PMC_PCER1_PID32_Pos
DECL|PMC_PCER1_PID32|macro|PMC_PCER1_PID32
DECL|PMC_PCER1_PID33_Msk|macro|PMC_PCER1_PID33_Msk
DECL|PMC_PCER1_PID33_Pos|macro|PMC_PCER1_PID33_Pos
DECL|PMC_PCER1_PID33|macro|PMC_PCER1_PID33
DECL|PMC_PCER1_PID34_Msk|macro|PMC_PCER1_PID34_Msk
DECL|PMC_PCER1_PID34_Pos|macro|PMC_PCER1_PID34_Pos
DECL|PMC_PCER1_PID34|macro|PMC_PCER1_PID34
DECL|PMC_PCER1_PID35_Msk|macro|PMC_PCER1_PID35_Msk
DECL|PMC_PCER1_PID35_Pos|macro|PMC_PCER1_PID35_Pos
DECL|PMC_PCER1_PID35|macro|PMC_PCER1_PID35
DECL|PMC_PCER1_PID37_Msk|macro|PMC_PCER1_PID37_Msk
DECL|PMC_PCER1_PID37_Pos|macro|PMC_PCER1_PID37_Pos
DECL|PMC_PCER1_PID37|macro|PMC_PCER1_PID37
DECL|PMC_PCER1_PID39_Msk|macro|PMC_PCER1_PID39_Msk
DECL|PMC_PCER1_PID39_Pos|macro|PMC_PCER1_PID39_Pos
DECL|PMC_PCER1_PID39|macro|PMC_PCER1_PID39
DECL|PMC_PCER1_PID40_Msk|macro|PMC_PCER1_PID40_Msk
DECL|PMC_PCER1_PID40_Pos|macro|PMC_PCER1_PID40_Pos
DECL|PMC_PCER1_PID40|macro|PMC_PCER1_PID40
DECL|PMC_PCER1_PID41_Msk|macro|PMC_PCER1_PID41_Msk
DECL|PMC_PCER1_PID41_Pos|macro|PMC_PCER1_PID41_Pos
DECL|PMC_PCER1_PID41|macro|PMC_PCER1_PID41
DECL|PMC_PCER1_PID42_Msk|macro|PMC_PCER1_PID42_Msk
DECL|PMC_PCER1_PID42_Pos|macro|PMC_PCER1_PID42_Pos
DECL|PMC_PCER1_PID42|macro|PMC_PCER1_PID42
DECL|PMC_PCER1_PID43_Msk|macro|PMC_PCER1_PID43_Msk
DECL|PMC_PCER1_PID43_Pos|macro|PMC_PCER1_PID43_Pos
DECL|PMC_PCER1_PID43|macro|PMC_PCER1_PID43
DECL|PMC_PCER1_PID44_Msk|macro|PMC_PCER1_PID44_Msk
DECL|PMC_PCER1_PID44_Pos|macro|PMC_PCER1_PID44_Pos
DECL|PMC_PCER1_PID44|macro|PMC_PCER1_PID44
DECL|PMC_PCER1_PID45_Msk|macro|PMC_PCER1_PID45_Msk
DECL|PMC_PCER1_PID45_Pos|macro|PMC_PCER1_PID45_Pos
DECL|PMC_PCER1_PID45|macro|PMC_PCER1_PID45
DECL|PMC_PCER1_PID46_Msk|macro|PMC_PCER1_PID46_Msk
DECL|PMC_PCER1_PID46_Pos|macro|PMC_PCER1_PID46_Pos
DECL|PMC_PCER1_PID46|macro|PMC_PCER1_PID46
DECL|PMC_PCER1_PID47_Msk|macro|PMC_PCER1_PID47_Msk
DECL|PMC_PCER1_PID47_Pos|macro|PMC_PCER1_PID47_Pos
DECL|PMC_PCER1_PID47|macro|PMC_PCER1_PID47
DECL|PMC_PCER1_PID48_Msk|macro|PMC_PCER1_PID48_Msk
DECL|PMC_PCER1_PID48_Pos|macro|PMC_PCER1_PID48_Pos
DECL|PMC_PCER1_PID48|macro|PMC_PCER1_PID48
DECL|PMC_PCER1_PID49_Msk|macro|PMC_PCER1_PID49_Msk
DECL|PMC_PCER1_PID49_Pos|macro|PMC_PCER1_PID49_Pos
DECL|PMC_PCER1_PID49|macro|PMC_PCER1_PID49
DECL|PMC_PCER1_PID50_Msk|macro|PMC_PCER1_PID50_Msk
DECL|PMC_PCER1_PID50_Pos|macro|PMC_PCER1_PID50_Pos
DECL|PMC_PCER1_PID50|macro|PMC_PCER1_PID50
DECL|PMC_PCER1_PID51_Msk|macro|PMC_PCER1_PID51_Msk
DECL|PMC_PCER1_PID51_Pos|macro|PMC_PCER1_PID51_Pos
DECL|PMC_PCER1_PID51|macro|PMC_PCER1_PID51
DECL|PMC_PCER1_PID52_Msk|macro|PMC_PCER1_PID52_Msk
DECL|PMC_PCER1_PID52_Pos|macro|PMC_PCER1_PID52_Pos
DECL|PMC_PCER1_PID52|macro|PMC_PCER1_PID52
DECL|PMC_PCER1_PID53_Msk|macro|PMC_PCER1_PID53_Msk
DECL|PMC_PCER1_PID53_Pos|macro|PMC_PCER1_PID53_Pos
DECL|PMC_PCER1_PID53|macro|PMC_PCER1_PID53
DECL|PMC_PCER1_PID56_Msk|macro|PMC_PCER1_PID56_Msk
DECL|PMC_PCER1_PID56_Pos|macro|PMC_PCER1_PID56_Pos
DECL|PMC_PCER1_PID56|macro|PMC_PCER1_PID56
DECL|PMC_PCER1_PID57_Msk|macro|PMC_PCER1_PID57_Msk
DECL|PMC_PCER1_PID57_Pos|macro|PMC_PCER1_PID57_Pos
DECL|PMC_PCER1_PID57|macro|PMC_PCER1_PID57
DECL|PMC_PCER1_PID58_Msk|macro|PMC_PCER1_PID58_Msk
DECL|PMC_PCER1_PID58_Pos|macro|PMC_PCER1_PID58_Pos
DECL|PMC_PCER1_PID58|macro|PMC_PCER1_PID58
DECL|PMC_PCER1_PID59_Msk|macro|PMC_PCER1_PID59_Msk
DECL|PMC_PCER1_PID59_Pos|macro|PMC_PCER1_PID59_Pos
DECL|PMC_PCER1_PID59|macro|PMC_PCER1_PID59
DECL|PMC_PCER1_PID60_Msk|macro|PMC_PCER1_PID60_Msk
DECL|PMC_PCER1_PID60_Pos|macro|PMC_PCER1_PID60_Pos
DECL|PMC_PCER1_PID60|macro|PMC_PCER1_PID60
DECL|PMC_PCER1_PID_Msk|macro|PMC_PCER1_PID_Msk
DECL|PMC_PCER1_PID_Pos|macro|PMC_PCER1_PID_Pos
DECL|PMC_PCER1_PID|macro|PMC_PCER1_PID
DECL|PMC_PCER1_Type|typedef|} PMC_PCER1_Type;
DECL|PMC_PCER1|member|__O PMC_PCER1_Type PMC_PCER1; /**< Offset: 0x100 ( /W 32) Peripheral Clock Enable Register 1 */
DECL|PMC_PCER1|member|__O uint32_t PMC_PCER1; /**< (PMC Offset: 0x100) Peripheral Clock Enable Register 1 */
DECL|PMC_PCK_CSS_MAIN_CLK_Val|macro|PMC_PCK_CSS_MAIN_CLK_Val
DECL|PMC_PCK_CSS_MAIN_CLK|macro|PMC_PCK_CSS_MAIN_CLK
DECL|PMC_PCK_CSS_MCK_Val|macro|PMC_PCK_CSS_MCK_Val
DECL|PMC_PCK_CSS_MCK|macro|PMC_PCK_CSS_MCK
DECL|PMC_PCK_CSS_Msk|macro|PMC_PCK_CSS_Msk
DECL|PMC_PCK_CSS_PLLA_CLK_Val|macro|PMC_PCK_CSS_PLLA_CLK_Val
DECL|PMC_PCK_CSS_PLLA_CLK|macro|PMC_PCK_CSS_PLLA_CLK
DECL|PMC_PCK_CSS_Pos|macro|PMC_PCK_CSS_Pos
DECL|PMC_PCK_CSS_SLOW_CLK_Val|macro|PMC_PCK_CSS_SLOW_CLK_Val
DECL|PMC_PCK_CSS_SLOW_CLK|macro|PMC_PCK_CSS_SLOW_CLK
DECL|PMC_PCK_CSS_UPLL_CLK_Val|macro|PMC_PCK_CSS_UPLL_CLK_Val
DECL|PMC_PCK_CSS_UPLL_CLK|macro|PMC_PCK_CSS_UPLL_CLK
DECL|PMC_PCK_CSS|macro|PMC_PCK_CSS
DECL|PMC_PCK_MASK|macro|PMC_PCK_MASK
DECL|PMC_PCK_Msk|macro|PMC_PCK_Msk
DECL|PMC_PCK_OFFSET|macro|PMC_PCK_OFFSET
DECL|PMC_PCK_PRES_Msk|macro|PMC_PCK_PRES_Msk
DECL|PMC_PCK_PRES_Pos|macro|PMC_PCK_PRES_Pos
DECL|PMC_PCK_PRES|macro|PMC_PCK_PRES
DECL|PMC_PCK_Type|typedef|} PMC_PCK_Type;
DECL|PMC_PCK|member|__IO PMC_PCK_Type PMC_PCK[8]; /**< Offset: 0x40 (R/W 32) Programmable Clock 0 Register 0 */
DECL|PMC_PCK|member|__IO uint32_t PMC_PCK[8]; /**< (PMC Offset: 0x40) Programmable Clock 0 Register 0 */
DECL|PMC_PCR_CMD_Msk|macro|PMC_PCR_CMD_Msk
DECL|PMC_PCR_CMD_Pos|macro|PMC_PCR_CMD_Pos
DECL|PMC_PCR_CMD|macro|PMC_PCR_CMD
DECL|PMC_PCR_EN_Msk|macro|PMC_PCR_EN_Msk
DECL|PMC_PCR_EN_Pos|macro|PMC_PCR_EN_Pos
DECL|PMC_PCR_EN|macro|PMC_PCR_EN
DECL|PMC_PCR_GCLKCSS_MAIN_CLK_Val|macro|PMC_PCR_GCLKCSS_MAIN_CLK_Val
DECL|PMC_PCR_GCLKCSS_MAIN_CLK|macro|PMC_PCR_GCLKCSS_MAIN_CLK
DECL|PMC_PCR_GCLKCSS_MCK_CLK_Val|macro|PMC_PCR_GCLKCSS_MCK_CLK_Val
DECL|PMC_PCR_GCLKCSS_MCK_CLK|macro|PMC_PCR_GCLKCSS_MCK_CLK
DECL|PMC_PCR_GCLKCSS_Msk|macro|PMC_PCR_GCLKCSS_Msk
DECL|PMC_PCR_GCLKCSS_PLLA_CLK_Val|macro|PMC_PCR_GCLKCSS_PLLA_CLK_Val
DECL|PMC_PCR_GCLKCSS_PLLA_CLK|macro|PMC_PCR_GCLKCSS_PLLA_CLK
DECL|PMC_PCR_GCLKCSS_Pos|macro|PMC_PCR_GCLKCSS_Pos
DECL|PMC_PCR_GCLKCSS_SLOW_CLK_Val|macro|PMC_PCR_GCLKCSS_SLOW_CLK_Val
DECL|PMC_PCR_GCLKCSS_SLOW_CLK|macro|PMC_PCR_GCLKCSS_SLOW_CLK
DECL|PMC_PCR_GCLKCSS_UPLL_CLK_Val|macro|PMC_PCR_GCLKCSS_UPLL_CLK_Val
DECL|PMC_PCR_GCLKCSS_UPLL_CLK|macro|PMC_PCR_GCLKCSS_UPLL_CLK
DECL|PMC_PCR_GCLKCSS|macro|PMC_PCR_GCLKCSS
DECL|PMC_PCR_GCLKDIV_Msk|macro|PMC_PCR_GCLKDIV_Msk
DECL|PMC_PCR_GCLKDIV_Pos|macro|PMC_PCR_GCLKDIV_Pos
DECL|PMC_PCR_GCLKDIV|macro|PMC_PCR_GCLKDIV
DECL|PMC_PCR_GCLKEN_Msk|macro|PMC_PCR_GCLKEN_Msk
DECL|PMC_PCR_GCLKEN_Pos|macro|PMC_PCR_GCLKEN_Pos
DECL|PMC_PCR_GCLKEN|macro|PMC_PCR_GCLKEN
DECL|PMC_PCR_MASK|macro|PMC_PCR_MASK
DECL|PMC_PCR_Msk|macro|PMC_PCR_Msk
DECL|PMC_PCR_OFFSET|macro|PMC_PCR_OFFSET
DECL|PMC_PCR_PID_Msk|macro|PMC_PCR_PID_Msk
DECL|PMC_PCR_PID_Pos|macro|PMC_PCR_PID_Pos
DECL|PMC_PCR_PID|macro|PMC_PCR_PID
DECL|PMC_PCR_Type|typedef|} PMC_PCR_Type;
DECL|PMC_PCR|member|__IO PMC_PCR_Type PMC_PCR; /**< Offset: 0x10C (R/W 32) Peripheral Control Register */
DECL|PMC_PCR|member|__IO uint32_t PMC_PCR; /**< (PMC Offset: 0x10C) Peripheral Control Register */
DECL|PMC_PCSR0_MASK|macro|PMC_PCSR0_MASK
DECL|PMC_PCSR0_Msk|macro|PMC_PCSR0_Msk
DECL|PMC_PCSR0_OFFSET|macro|PMC_PCSR0_OFFSET
DECL|PMC_PCSR0_PID16_Msk|macro|PMC_PCSR0_PID16_Msk
DECL|PMC_PCSR0_PID16_Pos|macro|PMC_PCSR0_PID16_Pos
DECL|PMC_PCSR0_PID16|macro|PMC_PCSR0_PID16
DECL|PMC_PCSR0_PID17_Msk|macro|PMC_PCSR0_PID17_Msk
DECL|PMC_PCSR0_PID17_Pos|macro|PMC_PCSR0_PID17_Pos
DECL|PMC_PCSR0_PID17|macro|PMC_PCSR0_PID17
DECL|PMC_PCSR0_PID18_Msk|macro|PMC_PCSR0_PID18_Msk
DECL|PMC_PCSR0_PID18_Pos|macro|PMC_PCSR0_PID18_Pos
DECL|PMC_PCSR0_PID18|macro|PMC_PCSR0_PID18
DECL|PMC_PCSR0_PID19_Msk|macro|PMC_PCSR0_PID19_Msk
DECL|PMC_PCSR0_PID19_Pos|macro|PMC_PCSR0_PID19_Pos
DECL|PMC_PCSR0_PID19|macro|PMC_PCSR0_PID19
DECL|PMC_PCSR0_PID20_Msk|macro|PMC_PCSR0_PID20_Msk
DECL|PMC_PCSR0_PID20_Pos|macro|PMC_PCSR0_PID20_Pos
DECL|PMC_PCSR0_PID20|macro|PMC_PCSR0_PID20
DECL|PMC_PCSR0_PID21_Msk|macro|PMC_PCSR0_PID21_Msk
DECL|PMC_PCSR0_PID21_Pos|macro|PMC_PCSR0_PID21_Pos
DECL|PMC_PCSR0_PID21|macro|PMC_PCSR0_PID21
DECL|PMC_PCSR0_PID22_Msk|macro|PMC_PCSR0_PID22_Msk
DECL|PMC_PCSR0_PID22_Pos|macro|PMC_PCSR0_PID22_Pos
DECL|PMC_PCSR0_PID22|macro|PMC_PCSR0_PID22
DECL|PMC_PCSR0_PID23_Msk|macro|PMC_PCSR0_PID23_Msk
DECL|PMC_PCSR0_PID23_Pos|macro|PMC_PCSR0_PID23_Pos
DECL|PMC_PCSR0_PID23|macro|PMC_PCSR0_PID23
DECL|PMC_PCSR0_PID24_Msk|macro|PMC_PCSR0_PID24_Msk
DECL|PMC_PCSR0_PID24_Pos|macro|PMC_PCSR0_PID24_Pos
DECL|PMC_PCSR0_PID24|macro|PMC_PCSR0_PID24
DECL|PMC_PCSR0_PID25_Msk|macro|PMC_PCSR0_PID25_Msk
DECL|PMC_PCSR0_PID25_Pos|macro|PMC_PCSR0_PID25_Pos
DECL|PMC_PCSR0_PID25|macro|PMC_PCSR0_PID25
DECL|PMC_PCSR0_PID26_Msk|macro|PMC_PCSR0_PID26_Msk
DECL|PMC_PCSR0_PID26_Pos|macro|PMC_PCSR0_PID26_Pos
DECL|PMC_PCSR0_PID26|macro|PMC_PCSR0_PID26
DECL|PMC_PCSR0_PID27_Msk|macro|PMC_PCSR0_PID27_Msk
DECL|PMC_PCSR0_PID27_Pos|macro|PMC_PCSR0_PID27_Pos
DECL|PMC_PCSR0_PID27|macro|PMC_PCSR0_PID27
DECL|PMC_PCSR0_PID28_Msk|macro|PMC_PCSR0_PID28_Msk
DECL|PMC_PCSR0_PID28_Pos|macro|PMC_PCSR0_PID28_Pos
DECL|PMC_PCSR0_PID28|macro|PMC_PCSR0_PID28
DECL|PMC_PCSR0_PID29_Msk|macro|PMC_PCSR0_PID29_Msk
DECL|PMC_PCSR0_PID29_Pos|macro|PMC_PCSR0_PID29_Pos
DECL|PMC_PCSR0_PID29|macro|PMC_PCSR0_PID29
DECL|PMC_PCSR0_PID30_Msk|macro|PMC_PCSR0_PID30_Msk
DECL|PMC_PCSR0_PID30_Pos|macro|PMC_PCSR0_PID30_Pos
DECL|PMC_PCSR0_PID30|macro|PMC_PCSR0_PID30
DECL|PMC_PCSR0_PID31_Msk|macro|PMC_PCSR0_PID31_Msk
DECL|PMC_PCSR0_PID31_Pos|macro|PMC_PCSR0_PID31_Pos
DECL|PMC_PCSR0_PID31|macro|PMC_PCSR0_PID31
DECL|PMC_PCSR0_PID7_Msk|macro|PMC_PCSR0_PID7_Msk
DECL|PMC_PCSR0_PID7_Pos|macro|PMC_PCSR0_PID7_Pos
DECL|PMC_PCSR0_PID7|macro|PMC_PCSR0_PID7
DECL|PMC_PCSR0_PID8_Msk|macro|PMC_PCSR0_PID8_Msk
DECL|PMC_PCSR0_PID8_Pos|macro|PMC_PCSR0_PID8_Pos
DECL|PMC_PCSR0_PID8|macro|PMC_PCSR0_PID8
DECL|PMC_PCSR0_PID_Msk|macro|PMC_PCSR0_PID_Msk
DECL|PMC_PCSR0_PID_Pos|macro|PMC_PCSR0_PID_Pos
DECL|PMC_PCSR0_PID|macro|PMC_PCSR0_PID
DECL|PMC_PCSR0_Type|typedef|} PMC_PCSR0_Type;
DECL|PMC_PCSR0|member|__I PMC_PCSR0_Type PMC_PCSR0; /**< Offset: 0x18 (R/ 32) Peripheral Clock Status Register 0 */
DECL|PMC_PCSR0|member|__I uint32_t PMC_PCSR0; /**< (PMC Offset: 0x18) Peripheral Clock Status Register 0 */
DECL|PMC_PCSR1_MASK|macro|PMC_PCSR1_MASK
DECL|PMC_PCSR1_Msk|macro|PMC_PCSR1_Msk
DECL|PMC_PCSR1_OFFSET|macro|PMC_PCSR1_OFFSET
DECL|PMC_PCSR1_PID32_Msk|macro|PMC_PCSR1_PID32_Msk
DECL|PMC_PCSR1_PID32_Pos|macro|PMC_PCSR1_PID32_Pos
DECL|PMC_PCSR1_PID32|macro|PMC_PCSR1_PID32
DECL|PMC_PCSR1_PID33_Msk|macro|PMC_PCSR1_PID33_Msk
DECL|PMC_PCSR1_PID33_Pos|macro|PMC_PCSR1_PID33_Pos
DECL|PMC_PCSR1_PID33|macro|PMC_PCSR1_PID33
DECL|PMC_PCSR1_PID34_Msk|macro|PMC_PCSR1_PID34_Msk
DECL|PMC_PCSR1_PID34_Pos|macro|PMC_PCSR1_PID34_Pos
DECL|PMC_PCSR1_PID34|macro|PMC_PCSR1_PID34
DECL|PMC_PCSR1_PID35_Msk|macro|PMC_PCSR1_PID35_Msk
DECL|PMC_PCSR1_PID35_Pos|macro|PMC_PCSR1_PID35_Pos
DECL|PMC_PCSR1_PID35|macro|PMC_PCSR1_PID35
DECL|PMC_PCSR1_PID37_Msk|macro|PMC_PCSR1_PID37_Msk
DECL|PMC_PCSR1_PID37_Pos|macro|PMC_PCSR1_PID37_Pos
DECL|PMC_PCSR1_PID37|macro|PMC_PCSR1_PID37
DECL|PMC_PCSR1_PID39_Msk|macro|PMC_PCSR1_PID39_Msk
DECL|PMC_PCSR1_PID39_Pos|macro|PMC_PCSR1_PID39_Pos
DECL|PMC_PCSR1_PID39|macro|PMC_PCSR1_PID39
DECL|PMC_PCSR1_PID40_Msk|macro|PMC_PCSR1_PID40_Msk
DECL|PMC_PCSR1_PID40_Pos|macro|PMC_PCSR1_PID40_Pos
DECL|PMC_PCSR1_PID40|macro|PMC_PCSR1_PID40
DECL|PMC_PCSR1_PID41_Msk|macro|PMC_PCSR1_PID41_Msk
DECL|PMC_PCSR1_PID41_Pos|macro|PMC_PCSR1_PID41_Pos
DECL|PMC_PCSR1_PID41|macro|PMC_PCSR1_PID41
DECL|PMC_PCSR1_PID42_Msk|macro|PMC_PCSR1_PID42_Msk
DECL|PMC_PCSR1_PID42_Pos|macro|PMC_PCSR1_PID42_Pos
DECL|PMC_PCSR1_PID42|macro|PMC_PCSR1_PID42
DECL|PMC_PCSR1_PID43_Msk|macro|PMC_PCSR1_PID43_Msk
DECL|PMC_PCSR1_PID43_Pos|macro|PMC_PCSR1_PID43_Pos
DECL|PMC_PCSR1_PID43|macro|PMC_PCSR1_PID43
DECL|PMC_PCSR1_PID44_Msk|macro|PMC_PCSR1_PID44_Msk
DECL|PMC_PCSR1_PID44_Pos|macro|PMC_PCSR1_PID44_Pos
DECL|PMC_PCSR1_PID44|macro|PMC_PCSR1_PID44
DECL|PMC_PCSR1_PID45_Msk|macro|PMC_PCSR1_PID45_Msk
DECL|PMC_PCSR1_PID45_Pos|macro|PMC_PCSR1_PID45_Pos
DECL|PMC_PCSR1_PID45|macro|PMC_PCSR1_PID45
DECL|PMC_PCSR1_PID46_Msk|macro|PMC_PCSR1_PID46_Msk
DECL|PMC_PCSR1_PID46_Pos|macro|PMC_PCSR1_PID46_Pos
DECL|PMC_PCSR1_PID46|macro|PMC_PCSR1_PID46
DECL|PMC_PCSR1_PID47_Msk|macro|PMC_PCSR1_PID47_Msk
DECL|PMC_PCSR1_PID47_Pos|macro|PMC_PCSR1_PID47_Pos
DECL|PMC_PCSR1_PID47|macro|PMC_PCSR1_PID47
DECL|PMC_PCSR1_PID48_Msk|macro|PMC_PCSR1_PID48_Msk
DECL|PMC_PCSR1_PID48_Pos|macro|PMC_PCSR1_PID48_Pos
DECL|PMC_PCSR1_PID48|macro|PMC_PCSR1_PID48
DECL|PMC_PCSR1_PID49_Msk|macro|PMC_PCSR1_PID49_Msk
DECL|PMC_PCSR1_PID49_Pos|macro|PMC_PCSR1_PID49_Pos
DECL|PMC_PCSR1_PID49|macro|PMC_PCSR1_PID49
DECL|PMC_PCSR1_PID50_Msk|macro|PMC_PCSR1_PID50_Msk
DECL|PMC_PCSR1_PID50_Pos|macro|PMC_PCSR1_PID50_Pos
DECL|PMC_PCSR1_PID50|macro|PMC_PCSR1_PID50
DECL|PMC_PCSR1_PID51_Msk|macro|PMC_PCSR1_PID51_Msk
DECL|PMC_PCSR1_PID51_Pos|macro|PMC_PCSR1_PID51_Pos
DECL|PMC_PCSR1_PID51|macro|PMC_PCSR1_PID51
DECL|PMC_PCSR1_PID52_Msk|macro|PMC_PCSR1_PID52_Msk
DECL|PMC_PCSR1_PID52_Pos|macro|PMC_PCSR1_PID52_Pos
DECL|PMC_PCSR1_PID52|macro|PMC_PCSR1_PID52
DECL|PMC_PCSR1_PID53_Msk|macro|PMC_PCSR1_PID53_Msk
DECL|PMC_PCSR1_PID53_Pos|macro|PMC_PCSR1_PID53_Pos
DECL|PMC_PCSR1_PID53|macro|PMC_PCSR1_PID53
DECL|PMC_PCSR1_PID56_Msk|macro|PMC_PCSR1_PID56_Msk
DECL|PMC_PCSR1_PID56_Pos|macro|PMC_PCSR1_PID56_Pos
DECL|PMC_PCSR1_PID56|macro|PMC_PCSR1_PID56
DECL|PMC_PCSR1_PID57_Msk|macro|PMC_PCSR1_PID57_Msk
DECL|PMC_PCSR1_PID57_Pos|macro|PMC_PCSR1_PID57_Pos
DECL|PMC_PCSR1_PID57|macro|PMC_PCSR1_PID57
DECL|PMC_PCSR1_PID58_Msk|macro|PMC_PCSR1_PID58_Msk
DECL|PMC_PCSR1_PID58_Pos|macro|PMC_PCSR1_PID58_Pos
DECL|PMC_PCSR1_PID58|macro|PMC_PCSR1_PID58
DECL|PMC_PCSR1_PID59_Msk|macro|PMC_PCSR1_PID59_Msk
DECL|PMC_PCSR1_PID59_Pos|macro|PMC_PCSR1_PID59_Pos
DECL|PMC_PCSR1_PID59|macro|PMC_PCSR1_PID59
DECL|PMC_PCSR1_PID60_Msk|macro|PMC_PCSR1_PID60_Msk
DECL|PMC_PCSR1_PID60_Pos|macro|PMC_PCSR1_PID60_Pos
DECL|PMC_PCSR1_PID60|macro|PMC_PCSR1_PID60
DECL|PMC_PCSR1_PID_Msk|macro|PMC_PCSR1_PID_Msk
DECL|PMC_PCSR1_PID_Pos|macro|PMC_PCSR1_PID_Pos
DECL|PMC_PCSR1_PID|macro|PMC_PCSR1_PID
DECL|PMC_PCSR1_Type|typedef|} PMC_PCSR1_Type;
DECL|PMC_PCSR1|member|__I PMC_PCSR1_Type PMC_PCSR1; /**< Offset: 0x108 (R/ 32) Peripheral Clock Status Register 1 */
DECL|PMC_PCSR1|member|__I uint32_t PMC_PCSR1; /**< (PMC Offset: 0x108) Peripheral Clock Status Register 1 */
DECL|PMC_PMMR_MASK|macro|PMC_PMMR_MASK
DECL|PMC_PMMR_Msk|macro|PMC_PMMR_Msk
DECL|PMC_PMMR_OFFSET|macro|PMC_PMMR_OFFSET
DECL|PMC_PMMR_PLLA_MMAX_Msk|macro|PMC_PMMR_PLLA_MMAX_Msk
DECL|PMC_PMMR_PLLA_MMAX_Pos|macro|PMC_PMMR_PLLA_MMAX_Pos
DECL|PMC_PMMR_PLLA_MMAX|macro|PMC_PMMR_PLLA_MMAX
DECL|PMC_PMMR_Type|typedef|} PMC_PMMR_Type;
DECL|PMC_PMMR|member|__IO PMC_PMMR_Type PMC_PMMR; /**< Offset: 0x130 (R/W 32) PLL Maximum Multiplier Value Register */
DECL|PMC_PMMR|member|__IO uint32_t PMC_PMMR; /**< (PMC Offset: 0x130) PLL Maximum Multiplier Value Register */
DECL|PMC_SCDR_MASK|macro|PMC_SCDR_MASK
DECL|PMC_SCDR_Msk|macro|PMC_SCDR_Msk
DECL|PMC_SCDR_OFFSET|macro|PMC_SCDR_OFFSET
DECL|PMC_SCDR_PCK0_Msk|macro|PMC_SCDR_PCK0_Msk
DECL|PMC_SCDR_PCK0_Pos|macro|PMC_SCDR_PCK0_Pos
DECL|PMC_SCDR_PCK0|macro|PMC_SCDR_PCK0
DECL|PMC_SCDR_PCK1_Msk|macro|PMC_SCDR_PCK1_Msk
DECL|PMC_SCDR_PCK1_Pos|macro|PMC_SCDR_PCK1_Pos
DECL|PMC_SCDR_PCK1|macro|PMC_SCDR_PCK1
DECL|PMC_SCDR_PCK2_Msk|macro|PMC_SCDR_PCK2_Msk
DECL|PMC_SCDR_PCK2_Pos|macro|PMC_SCDR_PCK2_Pos
DECL|PMC_SCDR_PCK2|macro|PMC_SCDR_PCK2
DECL|PMC_SCDR_PCK3_Msk|macro|PMC_SCDR_PCK3_Msk
DECL|PMC_SCDR_PCK3_Pos|macro|PMC_SCDR_PCK3_Pos
DECL|PMC_SCDR_PCK3|macro|PMC_SCDR_PCK3
DECL|PMC_SCDR_PCK4_Msk|macro|PMC_SCDR_PCK4_Msk
DECL|PMC_SCDR_PCK4_Pos|macro|PMC_SCDR_PCK4_Pos
DECL|PMC_SCDR_PCK4|macro|PMC_SCDR_PCK4
DECL|PMC_SCDR_PCK5_Msk|macro|PMC_SCDR_PCK5_Msk
DECL|PMC_SCDR_PCK5_Pos|macro|PMC_SCDR_PCK5_Pos
DECL|PMC_SCDR_PCK5|macro|PMC_SCDR_PCK5
DECL|PMC_SCDR_PCK6_Msk|macro|PMC_SCDR_PCK6_Msk
DECL|PMC_SCDR_PCK6_Pos|macro|PMC_SCDR_PCK6_Pos
DECL|PMC_SCDR_PCK6|macro|PMC_SCDR_PCK6
DECL|PMC_SCDR_PCK_Msk|macro|PMC_SCDR_PCK_Msk
DECL|PMC_SCDR_PCK_Pos|macro|PMC_SCDR_PCK_Pos
DECL|PMC_SCDR_PCK|macro|PMC_SCDR_PCK
DECL|PMC_SCDR_Type|typedef|} PMC_SCDR_Type;
DECL|PMC_SCDR_USBCLK_Msk|macro|PMC_SCDR_USBCLK_Msk
DECL|PMC_SCDR_USBCLK_Pos|macro|PMC_SCDR_USBCLK_Pos
DECL|PMC_SCDR_USBCLK|macro|PMC_SCDR_USBCLK
DECL|PMC_SCDR|member|__O PMC_SCDR_Type PMC_SCDR; /**< Offset: 0x04 ( /W 32) System Clock Disable Register */
DECL|PMC_SCDR|member|__O uint32_t PMC_SCDR; /**< (PMC Offset: 0x04) System Clock Disable Register */
DECL|PMC_SCER_MASK|macro|PMC_SCER_MASK
DECL|PMC_SCER_Msk|macro|PMC_SCER_Msk
DECL|PMC_SCER_OFFSET|macro|PMC_SCER_OFFSET
DECL|PMC_SCER_PCK0_Msk|macro|PMC_SCER_PCK0_Msk
DECL|PMC_SCER_PCK0_Pos|macro|PMC_SCER_PCK0_Pos
DECL|PMC_SCER_PCK0|macro|PMC_SCER_PCK0
DECL|PMC_SCER_PCK1_Msk|macro|PMC_SCER_PCK1_Msk
DECL|PMC_SCER_PCK1_Pos|macro|PMC_SCER_PCK1_Pos
DECL|PMC_SCER_PCK1|macro|PMC_SCER_PCK1
DECL|PMC_SCER_PCK2_Msk|macro|PMC_SCER_PCK2_Msk
DECL|PMC_SCER_PCK2_Pos|macro|PMC_SCER_PCK2_Pos
DECL|PMC_SCER_PCK2|macro|PMC_SCER_PCK2
DECL|PMC_SCER_PCK3_Msk|macro|PMC_SCER_PCK3_Msk
DECL|PMC_SCER_PCK3_Pos|macro|PMC_SCER_PCK3_Pos
DECL|PMC_SCER_PCK3|macro|PMC_SCER_PCK3
DECL|PMC_SCER_PCK4_Msk|macro|PMC_SCER_PCK4_Msk
DECL|PMC_SCER_PCK4_Pos|macro|PMC_SCER_PCK4_Pos
DECL|PMC_SCER_PCK4|macro|PMC_SCER_PCK4
DECL|PMC_SCER_PCK5_Msk|macro|PMC_SCER_PCK5_Msk
DECL|PMC_SCER_PCK5_Pos|macro|PMC_SCER_PCK5_Pos
DECL|PMC_SCER_PCK5|macro|PMC_SCER_PCK5
DECL|PMC_SCER_PCK6_Msk|macro|PMC_SCER_PCK6_Msk
DECL|PMC_SCER_PCK6_Pos|macro|PMC_SCER_PCK6_Pos
DECL|PMC_SCER_PCK6|macro|PMC_SCER_PCK6
DECL|PMC_SCER_PCK_Msk|macro|PMC_SCER_PCK_Msk
DECL|PMC_SCER_PCK_Pos|macro|PMC_SCER_PCK_Pos
DECL|PMC_SCER_PCK|macro|PMC_SCER_PCK
DECL|PMC_SCER_Type|typedef|} PMC_SCER_Type;
DECL|PMC_SCER_USBCLK_Msk|macro|PMC_SCER_USBCLK_Msk
DECL|PMC_SCER_USBCLK_Pos|macro|PMC_SCER_USBCLK_Pos
DECL|PMC_SCER_USBCLK|macro|PMC_SCER_USBCLK
DECL|PMC_SCER|member|__O PMC_SCER_Type PMC_SCER; /**< Offset: 0x00 ( /W 32) System Clock Enable Register */
DECL|PMC_SCER|member|__O uint32_t PMC_SCER; /**< (PMC Offset: 0x00) System Clock Enable Register */
DECL|PMC_SCSR_HCLKS_Msk|macro|PMC_SCSR_HCLKS_Msk
DECL|PMC_SCSR_HCLKS_Pos|macro|PMC_SCSR_HCLKS_Pos
DECL|PMC_SCSR_HCLKS|macro|PMC_SCSR_HCLKS
DECL|PMC_SCSR_MASK|macro|PMC_SCSR_MASK
DECL|PMC_SCSR_Msk|macro|PMC_SCSR_Msk
DECL|PMC_SCSR_OFFSET|macro|PMC_SCSR_OFFSET
DECL|PMC_SCSR_PCK0_Msk|macro|PMC_SCSR_PCK0_Msk
DECL|PMC_SCSR_PCK0_Pos|macro|PMC_SCSR_PCK0_Pos
DECL|PMC_SCSR_PCK0|macro|PMC_SCSR_PCK0
DECL|PMC_SCSR_PCK1_Msk|macro|PMC_SCSR_PCK1_Msk
DECL|PMC_SCSR_PCK1_Pos|macro|PMC_SCSR_PCK1_Pos
DECL|PMC_SCSR_PCK1|macro|PMC_SCSR_PCK1
DECL|PMC_SCSR_PCK2_Msk|macro|PMC_SCSR_PCK2_Msk
DECL|PMC_SCSR_PCK2_Pos|macro|PMC_SCSR_PCK2_Pos
DECL|PMC_SCSR_PCK2|macro|PMC_SCSR_PCK2
DECL|PMC_SCSR_PCK3_Msk|macro|PMC_SCSR_PCK3_Msk
DECL|PMC_SCSR_PCK3_Pos|macro|PMC_SCSR_PCK3_Pos
DECL|PMC_SCSR_PCK3|macro|PMC_SCSR_PCK3
DECL|PMC_SCSR_PCK4_Msk|macro|PMC_SCSR_PCK4_Msk
DECL|PMC_SCSR_PCK4_Pos|macro|PMC_SCSR_PCK4_Pos
DECL|PMC_SCSR_PCK4|macro|PMC_SCSR_PCK4
DECL|PMC_SCSR_PCK5_Msk|macro|PMC_SCSR_PCK5_Msk
DECL|PMC_SCSR_PCK5_Pos|macro|PMC_SCSR_PCK5_Pos
DECL|PMC_SCSR_PCK5|macro|PMC_SCSR_PCK5
DECL|PMC_SCSR_PCK6_Msk|macro|PMC_SCSR_PCK6_Msk
DECL|PMC_SCSR_PCK6_Pos|macro|PMC_SCSR_PCK6_Pos
DECL|PMC_SCSR_PCK6|macro|PMC_SCSR_PCK6
DECL|PMC_SCSR_PCK_Msk|macro|PMC_SCSR_PCK_Msk
DECL|PMC_SCSR_PCK_Pos|macro|PMC_SCSR_PCK_Pos
DECL|PMC_SCSR_PCK|macro|PMC_SCSR_PCK
DECL|PMC_SCSR_Type|typedef|} PMC_SCSR_Type;
DECL|PMC_SCSR_USBCLK_Msk|macro|PMC_SCSR_USBCLK_Msk
DECL|PMC_SCSR_USBCLK_Pos|macro|PMC_SCSR_USBCLK_Pos
DECL|PMC_SCSR_USBCLK|macro|PMC_SCSR_USBCLK
DECL|PMC_SCSR|member|__I PMC_SCSR_Type PMC_SCSR; /**< Offset: 0x08 (R/ 32) System Clock Status Register */
DECL|PMC_SCSR|member|__I uint32_t PMC_SCSR; /**< (PMC Offset: 0x08) System Clock Status Register */
DECL|PMC_SLPWK_AIPR_AIP_Msk|macro|PMC_SLPWK_AIPR_AIP_Msk
DECL|PMC_SLPWK_AIPR_AIP_Pos|macro|PMC_SLPWK_AIPR_AIP_Pos
DECL|PMC_SLPWK_AIPR_AIP|macro|PMC_SLPWK_AIPR_AIP
DECL|PMC_SLPWK_AIPR_MASK|macro|PMC_SLPWK_AIPR_MASK
DECL|PMC_SLPWK_AIPR_Msk|macro|PMC_SLPWK_AIPR_Msk
DECL|PMC_SLPWK_AIPR_OFFSET|macro|PMC_SLPWK_AIPR_OFFSET
DECL|PMC_SLPWK_AIPR_Type|typedef|} PMC_SLPWK_AIPR_Type;
DECL|PMC_SLPWK_AIPR|member|__I PMC_SLPWK_AIPR_Type PMC_SLPWK_AIPR; /**< Offset: 0x144 (R/ 32) SleepWalking Activity In Progress Register */
DECL|PMC_SLPWK_AIPR|member|__I uint32_t PMC_SLPWK_AIPR; /**< (PMC Offset: 0x144) SleepWalking Activity In Progress Register */
DECL|PMC_SLPWK_ASR0_MASK|macro|PMC_SLPWK_ASR0_MASK
DECL|PMC_SLPWK_ASR0_Msk|macro|PMC_SLPWK_ASR0_Msk
DECL|PMC_SLPWK_ASR0_OFFSET|macro|PMC_SLPWK_ASR0_OFFSET
DECL|PMC_SLPWK_ASR0_PID10_Msk|macro|PMC_SLPWK_ASR0_PID10_Msk
DECL|PMC_SLPWK_ASR0_PID10_Pos|macro|PMC_SLPWK_ASR0_PID10_Pos
DECL|PMC_SLPWK_ASR0_PID10|macro|PMC_SLPWK_ASR0_PID10
DECL|PMC_SLPWK_ASR0_PID11_Msk|macro|PMC_SLPWK_ASR0_PID11_Msk
DECL|PMC_SLPWK_ASR0_PID11_Pos|macro|PMC_SLPWK_ASR0_PID11_Pos
DECL|PMC_SLPWK_ASR0_PID11|macro|PMC_SLPWK_ASR0_PID11
DECL|PMC_SLPWK_ASR0_PID12_Msk|macro|PMC_SLPWK_ASR0_PID12_Msk
DECL|PMC_SLPWK_ASR0_PID12_Pos|macro|PMC_SLPWK_ASR0_PID12_Pos
DECL|PMC_SLPWK_ASR0_PID12|macro|PMC_SLPWK_ASR0_PID12
DECL|PMC_SLPWK_ASR0_PID13_Msk|macro|PMC_SLPWK_ASR0_PID13_Msk
DECL|PMC_SLPWK_ASR0_PID13_Pos|macro|PMC_SLPWK_ASR0_PID13_Pos
DECL|PMC_SLPWK_ASR0_PID13|macro|PMC_SLPWK_ASR0_PID13
DECL|PMC_SLPWK_ASR0_PID14_Msk|macro|PMC_SLPWK_ASR0_PID14_Msk
DECL|PMC_SLPWK_ASR0_PID14_Pos|macro|PMC_SLPWK_ASR0_PID14_Pos
DECL|PMC_SLPWK_ASR0_PID14|macro|PMC_SLPWK_ASR0_PID14
DECL|PMC_SLPWK_ASR0_PID15_Msk|macro|PMC_SLPWK_ASR0_PID15_Msk
DECL|PMC_SLPWK_ASR0_PID15_Pos|macro|PMC_SLPWK_ASR0_PID15_Pos
DECL|PMC_SLPWK_ASR0_PID15|macro|PMC_SLPWK_ASR0_PID15
DECL|PMC_SLPWK_ASR0_PID16_Msk|macro|PMC_SLPWK_ASR0_PID16_Msk
DECL|PMC_SLPWK_ASR0_PID16_Pos|macro|PMC_SLPWK_ASR0_PID16_Pos
DECL|PMC_SLPWK_ASR0_PID16|macro|PMC_SLPWK_ASR0_PID16
DECL|PMC_SLPWK_ASR0_PID17_Msk|macro|PMC_SLPWK_ASR0_PID17_Msk
DECL|PMC_SLPWK_ASR0_PID17_Pos|macro|PMC_SLPWK_ASR0_PID17_Pos
DECL|PMC_SLPWK_ASR0_PID17|macro|PMC_SLPWK_ASR0_PID17
DECL|PMC_SLPWK_ASR0_PID18_Msk|macro|PMC_SLPWK_ASR0_PID18_Msk
DECL|PMC_SLPWK_ASR0_PID18_Pos|macro|PMC_SLPWK_ASR0_PID18_Pos
DECL|PMC_SLPWK_ASR0_PID18|macro|PMC_SLPWK_ASR0_PID18
DECL|PMC_SLPWK_ASR0_PID19_Msk|macro|PMC_SLPWK_ASR0_PID19_Msk
DECL|PMC_SLPWK_ASR0_PID19_Pos|macro|PMC_SLPWK_ASR0_PID19_Pos
DECL|PMC_SLPWK_ASR0_PID19|macro|PMC_SLPWK_ASR0_PID19
DECL|PMC_SLPWK_ASR0_PID20_Msk|macro|PMC_SLPWK_ASR0_PID20_Msk
DECL|PMC_SLPWK_ASR0_PID20_Pos|macro|PMC_SLPWK_ASR0_PID20_Pos
DECL|PMC_SLPWK_ASR0_PID20|macro|PMC_SLPWK_ASR0_PID20
DECL|PMC_SLPWK_ASR0_PID21_Msk|macro|PMC_SLPWK_ASR0_PID21_Msk
DECL|PMC_SLPWK_ASR0_PID21_Pos|macro|PMC_SLPWK_ASR0_PID21_Pos
DECL|PMC_SLPWK_ASR0_PID21|macro|PMC_SLPWK_ASR0_PID21
DECL|PMC_SLPWK_ASR0_PID22_Msk|macro|PMC_SLPWK_ASR0_PID22_Msk
DECL|PMC_SLPWK_ASR0_PID22_Pos|macro|PMC_SLPWK_ASR0_PID22_Pos
DECL|PMC_SLPWK_ASR0_PID22|macro|PMC_SLPWK_ASR0_PID22
DECL|PMC_SLPWK_ASR0_PID23_Msk|macro|PMC_SLPWK_ASR0_PID23_Msk
DECL|PMC_SLPWK_ASR0_PID23_Pos|macro|PMC_SLPWK_ASR0_PID23_Pos
DECL|PMC_SLPWK_ASR0_PID23|macro|PMC_SLPWK_ASR0_PID23
DECL|PMC_SLPWK_ASR0_PID24_Msk|macro|PMC_SLPWK_ASR0_PID24_Msk
DECL|PMC_SLPWK_ASR0_PID24_Pos|macro|PMC_SLPWK_ASR0_PID24_Pos
DECL|PMC_SLPWK_ASR0_PID24|macro|PMC_SLPWK_ASR0_PID24
DECL|PMC_SLPWK_ASR0_PID25_Msk|macro|PMC_SLPWK_ASR0_PID25_Msk
DECL|PMC_SLPWK_ASR0_PID25_Pos|macro|PMC_SLPWK_ASR0_PID25_Pos
DECL|PMC_SLPWK_ASR0_PID25|macro|PMC_SLPWK_ASR0_PID25
DECL|PMC_SLPWK_ASR0_PID26_Msk|macro|PMC_SLPWK_ASR0_PID26_Msk
DECL|PMC_SLPWK_ASR0_PID26_Pos|macro|PMC_SLPWK_ASR0_PID26_Pos
DECL|PMC_SLPWK_ASR0_PID26|macro|PMC_SLPWK_ASR0_PID26
DECL|PMC_SLPWK_ASR0_PID27_Msk|macro|PMC_SLPWK_ASR0_PID27_Msk
DECL|PMC_SLPWK_ASR0_PID27_Pos|macro|PMC_SLPWK_ASR0_PID27_Pos
DECL|PMC_SLPWK_ASR0_PID27|macro|PMC_SLPWK_ASR0_PID27
DECL|PMC_SLPWK_ASR0_PID28_Msk|macro|PMC_SLPWK_ASR0_PID28_Msk
DECL|PMC_SLPWK_ASR0_PID28_Pos|macro|PMC_SLPWK_ASR0_PID28_Pos
DECL|PMC_SLPWK_ASR0_PID28|macro|PMC_SLPWK_ASR0_PID28
DECL|PMC_SLPWK_ASR0_PID29_Msk|macro|PMC_SLPWK_ASR0_PID29_Msk
DECL|PMC_SLPWK_ASR0_PID29_Pos|macro|PMC_SLPWK_ASR0_PID29_Pos
DECL|PMC_SLPWK_ASR0_PID29|macro|PMC_SLPWK_ASR0_PID29
DECL|PMC_SLPWK_ASR0_PID30_Msk|macro|PMC_SLPWK_ASR0_PID30_Msk
DECL|PMC_SLPWK_ASR0_PID30_Pos|macro|PMC_SLPWK_ASR0_PID30_Pos
DECL|PMC_SLPWK_ASR0_PID30|macro|PMC_SLPWK_ASR0_PID30
DECL|PMC_SLPWK_ASR0_PID31_Msk|macro|PMC_SLPWK_ASR0_PID31_Msk
DECL|PMC_SLPWK_ASR0_PID31_Pos|macro|PMC_SLPWK_ASR0_PID31_Pos
DECL|PMC_SLPWK_ASR0_PID31|macro|PMC_SLPWK_ASR0_PID31
DECL|PMC_SLPWK_ASR0_PID7_Msk|macro|PMC_SLPWK_ASR0_PID7_Msk
DECL|PMC_SLPWK_ASR0_PID7_Pos|macro|PMC_SLPWK_ASR0_PID7_Pos
DECL|PMC_SLPWK_ASR0_PID7|macro|PMC_SLPWK_ASR0_PID7
DECL|PMC_SLPWK_ASR0_PID8_Msk|macro|PMC_SLPWK_ASR0_PID8_Msk
DECL|PMC_SLPWK_ASR0_PID8_Pos|macro|PMC_SLPWK_ASR0_PID8_Pos
DECL|PMC_SLPWK_ASR0_PID8|macro|PMC_SLPWK_ASR0_PID8
DECL|PMC_SLPWK_ASR0_PID9_Msk|macro|PMC_SLPWK_ASR0_PID9_Msk
DECL|PMC_SLPWK_ASR0_PID9_Pos|macro|PMC_SLPWK_ASR0_PID9_Pos
DECL|PMC_SLPWK_ASR0_PID9|macro|PMC_SLPWK_ASR0_PID9
DECL|PMC_SLPWK_ASR0_PID_Msk|macro|PMC_SLPWK_ASR0_PID_Msk
DECL|PMC_SLPWK_ASR0_PID_Pos|macro|PMC_SLPWK_ASR0_PID_Pos
DECL|PMC_SLPWK_ASR0_PID|macro|PMC_SLPWK_ASR0_PID
DECL|PMC_SLPWK_ASR0_Type|typedef|} PMC_SLPWK_ASR0_Type;
DECL|PMC_SLPWK_ASR0|member|__I PMC_SLPWK_ASR0_Type PMC_SLPWK_ASR0; /**< Offset: 0x120 (R/ 32) SleepWalking Activity Status Register 0 */
DECL|PMC_SLPWK_ASR0|member|__I uint32_t PMC_SLPWK_ASR0; /**< (PMC Offset: 0x120) SleepWalking Activity Status Register 0 */
DECL|PMC_SLPWK_ASR1_MASK|macro|PMC_SLPWK_ASR1_MASK
DECL|PMC_SLPWK_ASR1_Msk|macro|PMC_SLPWK_ASR1_Msk
DECL|PMC_SLPWK_ASR1_OFFSET|macro|PMC_SLPWK_ASR1_OFFSET
DECL|PMC_SLPWK_ASR1_PID32_Msk|macro|PMC_SLPWK_ASR1_PID32_Msk
DECL|PMC_SLPWK_ASR1_PID32_Pos|macro|PMC_SLPWK_ASR1_PID32_Pos
DECL|PMC_SLPWK_ASR1_PID32|macro|PMC_SLPWK_ASR1_PID32
DECL|PMC_SLPWK_ASR1_PID33_Msk|macro|PMC_SLPWK_ASR1_PID33_Msk
DECL|PMC_SLPWK_ASR1_PID33_Pos|macro|PMC_SLPWK_ASR1_PID33_Pos
DECL|PMC_SLPWK_ASR1_PID33|macro|PMC_SLPWK_ASR1_PID33
DECL|PMC_SLPWK_ASR1_PID34_Msk|macro|PMC_SLPWK_ASR1_PID34_Msk
DECL|PMC_SLPWK_ASR1_PID34_Pos|macro|PMC_SLPWK_ASR1_PID34_Pos
DECL|PMC_SLPWK_ASR1_PID34|macro|PMC_SLPWK_ASR1_PID34
DECL|PMC_SLPWK_ASR1_PID35_Msk|macro|PMC_SLPWK_ASR1_PID35_Msk
DECL|PMC_SLPWK_ASR1_PID35_Pos|macro|PMC_SLPWK_ASR1_PID35_Pos
DECL|PMC_SLPWK_ASR1_PID35|macro|PMC_SLPWK_ASR1_PID35
DECL|PMC_SLPWK_ASR1_PID37_Msk|macro|PMC_SLPWK_ASR1_PID37_Msk
DECL|PMC_SLPWK_ASR1_PID37_Pos|macro|PMC_SLPWK_ASR1_PID37_Pos
DECL|PMC_SLPWK_ASR1_PID37|macro|PMC_SLPWK_ASR1_PID37
DECL|PMC_SLPWK_ASR1_PID39_Msk|macro|PMC_SLPWK_ASR1_PID39_Msk
DECL|PMC_SLPWK_ASR1_PID39_Pos|macro|PMC_SLPWK_ASR1_PID39_Pos
DECL|PMC_SLPWK_ASR1_PID39|macro|PMC_SLPWK_ASR1_PID39
DECL|PMC_SLPWK_ASR1_PID40_Msk|macro|PMC_SLPWK_ASR1_PID40_Msk
DECL|PMC_SLPWK_ASR1_PID40_Pos|macro|PMC_SLPWK_ASR1_PID40_Pos
DECL|PMC_SLPWK_ASR1_PID40|macro|PMC_SLPWK_ASR1_PID40
DECL|PMC_SLPWK_ASR1_PID41_Msk|macro|PMC_SLPWK_ASR1_PID41_Msk
DECL|PMC_SLPWK_ASR1_PID41_Pos|macro|PMC_SLPWK_ASR1_PID41_Pos
DECL|PMC_SLPWK_ASR1_PID41|macro|PMC_SLPWK_ASR1_PID41
DECL|PMC_SLPWK_ASR1_PID42_Msk|macro|PMC_SLPWK_ASR1_PID42_Msk
DECL|PMC_SLPWK_ASR1_PID42_Pos|macro|PMC_SLPWK_ASR1_PID42_Pos
DECL|PMC_SLPWK_ASR1_PID42|macro|PMC_SLPWK_ASR1_PID42
DECL|PMC_SLPWK_ASR1_PID43_Msk|macro|PMC_SLPWK_ASR1_PID43_Msk
DECL|PMC_SLPWK_ASR1_PID43_Pos|macro|PMC_SLPWK_ASR1_PID43_Pos
DECL|PMC_SLPWK_ASR1_PID43|macro|PMC_SLPWK_ASR1_PID43
DECL|PMC_SLPWK_ASR1_PID44_Msk|macro|PMC_SLPWK_ASR1_PID44_Msk
DECL|PMC_SLPWK_ASR1_PID44_Pos|macro|PMC_SLPWK_ASR1_PID44_Pos
DECL|PMC_SLPWK_ASR1_PID44|macro|PMC_SLPWK_ASR1_PID44
DECL|PMC_SLPWK_ASR1_PID45_Msk|macro|PMC_SLPWK_ASR1_PID45_Msk
DECL|PMC_SLPWK_ASR1_PID45_Pos|macro|PMC_SLPWK_ASR1_PID45_Pos
DECL|PMC_SLPWK_ASR1_PID45|macro|PMC_SLPWK_ASR1_PID45
DECL|PMC_SLPWK_ASR1_PID46_Msk|macro|PMC_SLPWK_ASR1_PID46_Msk
DECL|PMC_SLPWK_ASR1_PID46_Pos|macro|PMC_SLPWK_ASR1_PID46_Pos
DECL|PMC_SLPWK_ASR1_PID46|macro|PMC_SLPWK_ASR1_PID46
DECL|PMC_SLPWK_ASR1_PID47_Msk|macro|PMC_SLPWK_ASR1_PID47_Msk
DECL|PMC_SLPWK_ASR1_PID47_Pos|macro|PMC_SLPWK_ASR1_PID47_Pos
DECL|PMC_SLPWK_ASR1_PID47|macro|PMC_SLPWK_ASR1_PID47
DECL|PMC_SLPWK_ASR1_PID48_Msk|macro|PMC_SLPWK_ASR1_PID48_Msk
DECL|PMC_SLPWK_ASR1_PID48_Pos|macro|PMC_SLPWK_ASR1_PID48_Pos
DECL|PMC_SLPWK_ASR1_PID48|macro|PMC_SLPWK_ASR1_PID48
DECL|PMC_SLPWK_ASR1_PID49_Msk|macro|PMC_SLPWK_ASR1_PID49_Msk
DECL|PMC_SLPWK_ASR1_PID49_Pos|macro|PMC_SLPWK_ASR1_PID49_Pos
DECL|PMC_SLPWK_ASR1_PID49|macro|PMC_SLPWK_ASR1_PID49
DECL|PMC_SLPWK_ASR1_PID50_Msk|macro|PMC_SLPWK_ASR1_PID50_Msk
DECL|PMC_SLPWK_ASR1_PID50_Pos|macro|PMC_SLPWK_ASR1_PID50_Pos
DECL|PMC_SLPWK_ASR1_PID50|macro|PMC_SLPWK_ASR1_PID50
DECL|PMC_SLPWK_ASR1_PID51_Msk|macro|PMC_SLPWK_ASR1_PID51_Msk
DECL|PMC_SLPWK_ASR1_PID51_Pos|macro|PMC_SLPWK_ASR1_PID51_Pos
DECL|PMC_SLPWK_ASR1_PID51|macro|PMC_SLPWK_ASR1_PID51
DECL|PMC_SLPWK_ASR1_PID52_Msk|macro|PMC_SLPWK_ASR1_PID52_Msk
DECL|PMC_SLPWK_ASR1_PID52_Pos|macro|PMC_SLPWK_ASR1_PID52_Pos
DECL|PMC_SLPWK_ASR1_PID52|macro|PMC_SLPWK_ASR1_PID52
DECL|PMC_SLPWK_ASR1_PID53_Msk|macro|PMC_SLPWK_ASR1_PID53_Msk
DECL|PMC_SLPWK_ASR1_PID53_Pos|macro|PMC_SLPWK_ASR1_PID53_Pos
DECL|PMC_SLPWK_ASR1_PID53|macro|PMC_SLPWK_ASR1_PID53
DECL|PMC_SLPWK_ASR1_PID56_Msk|macro|PMC_SLPWK_ASR1_PID56_Msk
DECL|PMC_SLPWK_ASR1_PID56_Pos|macro|PMC_SLPWK_ASR1_PID56_Pos
DECL|PMC_SLPWK_ASR1_PID56|macro|PMC_SLPWK_ASR1_PID56
DECL|PMC_SLPWK_ASR1_PID57_Msk|macro|PMC_SLPWK_ASR1_PID57_Msk
DECL|PMC_SLPWK_ASR1_PID57_Pos|macro|PMC_SLPWK_ASR1_PID57_Pos
DECL|PMC_SLPWK_ASR1_PID57|macro|PMC_SLPWK_ASR1_PID57
DECL|PMC_SLPWK_ASR1_PID58_Msk|macro|PMC_SLPWK_ASR1_PID58_Msk
DECL|PMC_SLPWK_ASR1_PID58_Pos|macro|PMC_SLPWK_ASR1_PID58_Pos
DECL|PMC_SLPWK_ASR1_PID58|macro|PMC_SLPWK_ASR1_PID58
DECL|PMC_SLPWK_ASR1_PID59_Msk|macro|PMC_SLPWK_ASR1_PID59_Msk
DECL|PMC_SLPWK_ASR1_PID59_Pos|macro|PMC_SLPWK_ASR1_PID59_Pos
DECL|PMC_SLPWK_ASR1_PID59|macro|PMC_SLPWK_ASR1_PID59
DECL|PMC_SLPWK_ASR1_PID60_Msk|macro|PMC_SLPWK_ASR1_PID60_Msk
DECL|PMC_SLPWK_ASR1_PID60_Pos|macro|PMC_SLPWK_ASR1_PID60_Pos
DECL|PMC_SLPWK_ASR1_PID60|macro|PMC_SLPWK_ASR1_PID60
DECL|PMC_SLPWK_ASR1_PID_Msk|macro|PMC_SLPWK_ASR1_PID_Msk
DECL|PMC_SLPWK_ASR1_PID_Pos|macro|PMC_SLPWK_ASR1_PID_Pos
DECL|PMC_SLPWK_ASR1_PID|macro|PMC_SLPWK_ASR1_PID
DECL|PMC_SLPWK_ASR1_Type|typedef|} PMC_SLPWK_ASR1_Type;
DECL|PMC_SLPWK_ASR1|member|__I PMC_SLPWK_ASR1_Type PMC_SLPWK_ASR1; /**< Offset: 0x140 (R/ 32) SleepWalking Activity Status Register 1 */
DECL|PMC_SLPWK_ASR1|member|__I uint32_t PMC_SLPWK_ASR1; /**< (PMC Offset: 0x140) SleepWalking Activity Status Register 1 */
DECL|PMC_SLPWK_DR0_MASK|macro|PMC_SLPWK_DR0_MASK
DECL|PMC_SLPWK_DR0_Msk|macro|PMC_SLPWK_DR0_Msk
DECL|PMC_SLPWK_DR0_OFFSET|macro|PMC_SLPWK_DR0_OFFSET
DECL|PMC_SLPWK_DR0_PID10_Msk|macro|PMC_SLPWK_DR0_PID10_Msk
DECL|PMC_SLPWK_DR0_PID10_Pos|macro|PMC_SLPWK_DR0_PID10_Pos
DECL|PMC_SLPWK_DR0_PID10|macro|PMC_SLPWK_DR0_PID10
DECL|PMC_SLPWK_DR0_PID11_Msk|macro|PMC_SLPWK_DR0_PID11_Msk
DECL|PMC_SLPWK_DR0_PID11_Pos|macro|PMC_SLPWK_DR0_PID11_Pos
DECL|PMC_SLPWK_DR0_PID11|macro|PMC_SLPWK_DR0_PID11
DECL|PMC_SLPWK_DR0_PID12_Msk|macro|PMC_SLPWK_DR0_PID12_Msk
DECL|PMC_SLPWK_DR0_PID12_Pos|macro|PMC_SLPWK_DR0_PID12_Pos
DECL|PMC_SLPWK_DR0_PID12|macro|PMC_SLPWK_DR0_PID12
DECL|PMC_SLPWK_DR0_PID13_Msk|macro|PMC_SLPWK_DR0_PID13_Msk
DECL|PMC_SLPWK_DR0_PID13_Pos|macro|PMC_SLPWK_DR0_PID13_Pos
DECL|PMC_SLPWK_DR0_PID13|macro|PMC_SLPWK_DR0_PID13
DECL|PMC_SLPWK_DR0_PID14_Msk|macro|PMC_SLPWK_DR0_PID14_Msk
DECL|PMC_SLPWK_DR0_PID14_Pos|macro|PMC_SLPWK_DR0_PID14_Pos
DECL|PMC_SLPWK_DR0_PID14|macro|PMC_SLPWK_DR0_PID14
DECL|PMC_SLPWK_DR0_PID15_Msk|macro|PMC_SLPWK_DR0_PID15_Msk
DECL|PMC_SLPWK_DR0_PID15_Pos|macro|PMC_SLPWK_DR0_PID15_Pos
DECL|PMC_SLPWK_DR0_PID15|macro|PMC_SLPWK_DR0_PID15
DECL|PMC_SLPWK_DR0_PID16_Msk|macro|PMC_SLPWK_DR0_PID16_Msk
DECL|PMC_SLPWK_DR0_PID16_Pos|macro|PMC_SLPWK_DR0_PID16_Pos
DECL|PMC_SLPWK_DR0_PID16|macro|PMC_SLPWK_DR0_PID16
DECL|PMC_SLPWK_DR0_PID17_Msk|macro|PMC_SLPWK_DR0_PID17_Msk
DECL|PMC_SLPWK_DR0_PID17_Pos|macro|PMC_SLPWK_DR0_PID17_Pos
DECL|PMC_SLPWK_DR0_PID17|macro|PMC_SLPWK_DR0_PID17
DECL|PMC_SLPWK_DR0_PID18_Msk|macro|PMC_SLPWK_DR0_PID18_Msk
DECL|PMC_SLPWK_DR0_PID18_Pos|macro|PMC_SLPWK_DR0_PID18_Pos
DECL|PMC_SLPWK_DR0_PID18|macro|PMC_SLPWK_DR0_PID18
DECL|PMC_SLPWK_DR0_PID19_Msk|macro|PMC_SLPWK_DR0_PID19_Msk
DECL|PMC_SLPWK_DR0_PID19_Pos|macro|PMC_SLPWK_DR0_PID19_Pos
DECL|PMC_SLPWK_DR0_PID19|macro|PMC_SLPWK_DR0_PID19
DECL|PMC_SLPWK_DR0_PID20_Msk|macro|PMC_SLPWK_DR0_PID20_Msk
DECL|PMC_SLPWK_DR0_PID20_Pos|macro|PMC_SLPWK_DR0_PID20_Pos
DECL|PMC_SLPWK_DR0_PID20|macro|PMC_SLPWK_DR0_PID20
DECL|PMC_SLPWK_DR0_PID21_Msk|macro|PMC_SLPWK_DR0_PID21_Msk
DECL|PMC_SLPWK_DR0_PID21_Pos|macro|PMC_SLPWK_DR0_PID21_Pos
DECL|PMC_SLPWK_DR0_PID21|macro|PMC_SLPWK_DR0_PID21
DECL|PMC_SLPWK_DR0_PID22_Msk|macro|PMC_SLPWK_DR0_PID22_Msk
DECL|PMC_SLPWK_DR0_PID22_Pos|macro|PMC_SLPWK_DR0_PID22_Pos
DECL|PMC_SLPWK_DR0_PID22|macro|PMC_SLPWK_DR0_PID22
DECL|PMC_SLPWK_DR0_PID23_Msk|macro|PMC_SLPWK_DR0_PID23_Msk
DECL|PMC_SLPWK_DR0_PID23_Pos|macro|PMC_SLPWK_DR0_PID23_Pos
DECL|PMC_SLPWK_DR0_PID23|macro|PMC_SLPWK_DR0_PID23
DECL|PMC_SLPWK_DR0_PID24_Msk|macro|PMC_SLPWK_DR0_PID24_Msk
DECL|PMC_SLPWK_DR0_PID24_Pos|macro|PMC_SLPWK_DR0_PID24_Pos
DECL|PMC_SLPWK_DR0_PID24|macro|PMC_SLPWK_DR0_PID24
DECL|PMC_SLPWK_DR0_PID25_Msk|macro|PMC_SLPWK_DR0_PID25_Msk
DECL|PMC_SLPWK_DR0_PID25_Pos|macro|PMC_SLPWK_DR0_PID25_Pos
DECL|PMC_SLPWK_DR0_PID25|macro|PMC_SLPWK_DR0_PID25
DECL|PMC_SLPWK_DR0_PID26_Msk|macro|PMC_SLPWK_DR0_PID26_Msk
DECL|PMC_SLPWK_DR0_PID26_Pos|macro|PMC_SLPWK_DR0_PID26_Pos
DECL|PMC_SLPWK_DR0_PID26|macro|PMC_SLPWK_DR0_PID26
DECL|PMC_SLPWK_DR0_PID27_Msk|macro|PMC_SLPWK_DR0_PID27_Msk
DECL|PMC_SLPWK_DR0_PID27_Pos|macro|PMC_SLPWK_DR0_PID27_Pos
DECL|PMC_SLPWK_DR0_PID27|macro|PMC_SLPWK_DR0_PID27
DECL|PMC_SLPWK_DR0_PID28_Msk|macro|PMC_SLPWK_DR0_PID28_Msk
DECL|PMC_SLPWK_DR0_PID28_Pos|macro|PMC_SLPWK_DR0_PID28_Pos
DECL|PMC_SLPWK_DR0_PID28|macro|PMC_SLPWK_DR0_PID28
DECL|PMC_SLPWK_DR0_PID29_Msk|macro|PMC_SLPWK_DR0_PID29_Msk
DECL|PMC_SLPWK_DR0_PID29_Pos|macro|PMC_SLPWK_DR0_PID29_Pos
DECL|PMC_SLPWK_DR0_PID29|macro|PMC_SLPWK_DR0_PID29
DECL|PMC_SLPWK_DR0_PID30_Msk|macro|PMC_SLPWK_DR0_PID30_Msk
DECL|PMC_SLPWK_DR0_PID30_Pos|macro|PMC_SLPWK_DR0_PID30_Pos
DECL|PMC_SLPWK_DR0_PID30|macro|PMC_SLPWK_DR0_PID30
DECL|PMC_SLPWK_DR0_PID31_Msk|macro|PMC_SLPWK_DR0_PID31_Msk
DECL|PMC_SLPWK_DR0_PID31_Pos|macro|PMC_SLPWK_DR0_PID31_Pos
DECL|PMC_SLPWK_DR0_PID31|macro|PMC_SLPWK_DR0_PID31
DECL|PMC_SLPWK_DR0_PID7_Msk|macro|PMC_SLPWK_DR0_PID7_Msk
DECL|PMC_SLPWK_DR0_PID7_Pos|macro|PMC_SLPWK_DR0_PID7_Pos
DECL|PMC_SLPWK_DR0_PID7|macro|PMC_SLPWK_DR0_PID7
DECL|PMC_SLPWK_DR0_PID8_Msk|macro|PMC_SLPWK_DR0_PID8_Msk
DECL|PMC_SLPWK_DR0_PID8_Pos|macro|PMC_SLPWK_DR0_PID8_Pos
DECL|PMC_SLPWK_DR0_PID8|macro|PMC_SLPWK_DR0_PID8
DECL|PMC_SLPWK_DR0_PID9_Msk|macro|PMC_SLPWK_DR0_PID9_Msk
DECL|PMC_SLPWK_DR0_PID9_Pos|macro|PMC_SLPWK_DR0_PID9_Pos
DECL|PMC_SLPWK_DR0_PID9|macro|PMC_SLPWK_DR0_PID9
DECL|PMC_SLPWK_DR0_PID_Msk|macro|PMC_SLPWK_DR0_PID_Msk
DECL|PMC_SLPWK_DR0_PID_Pos|macro|PMC_SLPWK_DR0_PID_Pos
DECL|PMC_SLPWK_DR0_PID|macro|PMC_SLPWK_DR0_PID
DECL|PMC_SLPWK_DR0_Type|typedef|} PMC_SLPWK_DR0_Type;
DECL|PMC_SLPWK_DR0|member|__O PMC_SLPWK_DR0_Type PMC_SLPWK_DR0; /**< Offset: 0x118 ( /W 32) SleepWalking Disable Register 0 */
DECL|PMC_SLPWK_DR0|member|__O uint32_t PMC_SLPWK_DR0; /**< (PMC Offset: 0x118) SleepWalking Disable Register 0 */
DECL|PMC_SLPWK_DR1_MASK|macro|PMC_SLPWK_DR1_MASK
DECL|PMC_SLPWK_DR1_Msk|macro|PMC_SLPWK_DR1_Msk
DECL|PMC_SLPWK_DR1_OFFSET|macro|PMC_SLPWK_DR1_OFFSET
DECL|PMC_SLPWK_DR1_PID32_Msk|macro|PMC_SLPWK_DR1_PID32_Msk
DECL|PMC_SLPWK_DR1_PID32_Pos|macro|PMC_SLPWK_DR1_PID32_Pos
DECL|PMC_SLPWK_DR1_PID32|macro|PMC_SLPWK_DR1_PID32
DECL|PMC_SLPWK_DR1_PID33_Msk|macro|PMC_SLPWK_DR1_PID33_Msk
DECL|PMC_SLPWK_DR1_PID33_Pos|macro|PMC_SLPWK_DR1_PID33_Pos
DECL|PMC_SLPWK_DR1_PID33|macro|PMC_SLPWK_DR1_PID33
DECL|PMC_SLPWK_DR1_PID34_Msk|macro|PMC_SLPWK_DR1_PID34_Msk
DECL|PMC_SLPWK_DR1_PID34_Pos|macro|PMC_SLPWK_DR1_PID34_Pos
DECL|PMC_SLPWK_DR1_PID34|macro|PMC_SLPWK_DR1_PID34
DECL|PMC_SLPWK_DR1_PID35_Msk|macro|PMC_SLPWK_DR1_PID35_Msk
DECL|PMC_SLPWK_DR1_PID35_Pos|macro|PMC_SLPWK_DR1_PID35_Pos
DECL|PMC_SLPWK_DR1_PID35|macro|PMC_SLPWK_DR1_PID35
DECL|PMC_SLPWK_DR1_PID37_Msk|macro|PMC_SLPWK_DR1_PID37_Msk
DECL|PMC_SLPWK_DR1_PID37_Pos|macro|PMC_SLPWK_DR1_PID37_Pos
DECL|PMC_SLPWK_DR1_PID37|macro|PMC_SLPWK_DR1_PID37
DECL|PMC_SLPWK_DR1_PID39_Msk|macro|PMC_SLPWK_DR1_PID39_Msk
DECL|PMC_SLPWK_DR1_PID39_Pos|macro|PMC_SLPWK_DR1_PID39_Pos
DECL|PMC_SLPWK_DR1_PID39|macro|PMC_SLPWK_DR1_PID39
DECL|PMC_SLPWK_DR1_PID40_Msk|macro|PMC_SLPWK_DR1_PID40_Msk
DECL|PMC_SLPWK_DR1_PID40_Pos|macro|PMC_SLPWK_DR1_PID40_Pos
DECL|PMC_SLPWK_DR1_PID40|macro|PMC_SLPWK_DR1_PID40
DECL|PMC_SLPWK_DR1_PID41_Msk|macro|PMC_SLPWK_DR1_PID41_Msk
DECL|PMC_SLPWK_DR1_PID41_Pos|macro|PMC_SLPWK_DR1_PID41_Pos
DECL|PMC_SLPWK_DR1_PID41|macro|PMC_SLPWK_DR1_PID41
DECL|PMC_SLPWK_DR1_PID42_Msk|macro|PMC_SLPWK_DR1_PID42_Msk
DECL|PMC_SLPWK_DR1_PID42_Pos|macro|PMC_SLPWK_DR1_PID42_Pos
DECL|PMC_SLPWK_DR1_PID42|macro|PMC_SLPWK_DR1_PID42
DECL|PMC_SLPWK_DR1_PID43_Msk|macro|PMC_SLPWK_DR1_PID43_Msk
DECL|PMC_SLPWK_DR1_PID43_Pos|macro|PMC_SLPWK_DR1_PID43_Pos
DECL|PMC_SLPWK_DR1_PID43|macro|PMC_SLPWK_DR1_PID43
DECL|PMC_SLPWK_DR1_PID44_Msk|macro|PMC_SLPWK_DR1_PID44_Msk
DECL|PMC_SLPWK_DR1_PID44_Pos|macro|PMC_SLPWK_DR1_PID44_Pos
DECL|PMC_SLPWK_DR1_PID44|macro|PMC_SLPWK_DR1_PID44
DECL|PMC_SLPWK_DR1_PID45_Msk|macro|PMC_SLPWK_DR1_PID45_Msk
DECL|PMC_SLPWK_DR1_PID45_Pos|macro|PMC_SLPWK_DR1_PID45_Pos
DECL|PMC_SLPWK_DR1_PID45|macro|PMC_SLPWK_DR1_PID45
DECL|PMC_SLPWK_DR1_PID46_Msk|macro|PMC_SLPWK_DR1_PID46_Msk
DECL|PMC_SLPWK_DR1_PID46_Pos|macro|PMC_SLPWK_DR1_PID46_Pos
DECL|PMC_SLPWK_DR1_PID46|macro|PMC_SLPWK_DR1_PID46
DECL|PMC_SLPWK_DR1_PID47_Msk|macro|PMC_SLPWK_DR1_PID47_Msk
DECL|PMC_SLPWK_DR1_PID47_Pos|macro|PMC_SLPWK_DR1_PID47_Pos
DECL|PMC_SLPWK_DR1_PID47|macro|PMC_SLPWK_DR1_PID47
DECL|PMC_SLPWK_DR1_PID48_Msk|macro|PMC_SLPWK_DR1_PID48_Msk
DECL|PMC_SLPWK_DR1_PID48_Pos|macro|PMC_SLPWK_DR1_PID48_Pos
DECL|PMC_SLPWK_DR1_PID48|macro|PMC_SLPWK_DR1_PID48
DECL|PMC_SLPWK_DR1_PID49_Msk|macro|PMC_SLPWK_DR1_PID49_Msk
DECL|PMC_SLPWK_DR1_PID49_Pos|macro|PMC_SLPWK_DR1_PID49_Pos
DECL|PMC_SLPWK_DR1_PID49|macro|PMC_SLPWK_DR1_PID49
DECL|PMC_SLPWK_DR1_PID50_Msk|macro|PMC_SLPWK_DR1_PID50_Msk
DECL|PMC_SLPWK_DR1_PID50_Pos|macro|PMC_SLPWK_DR1_PID50_Pos
DECL|PMC_SLPWK_DR1_PID50|macro|PMC_SLPWK_DR1_PID50
DECL|PMC_SLPWK_DR1_PID51_Msk|macro|PMC_SLPWK_DR1_PID51_Msk
DECL|PMC_SLPWK_DR1_PID51_Pos|macro|PMC_SLPWK_DR1_PID51_Pos
DECL|PMC_SLPWK_DR1_PID51|macro|PMC_SLPWK_DR1_PID51
DECL|PMC_SLPWK_DR1_PID52_Msk|macro|PMC_SLPWK_DR1_PID52_Msk
DECL|PMC_SLPWK_DR1_PID52_Pos|macro|PMC_SLPWK_DR1_PID52_Pos
DECL|PMC_SLPWK_DR1_PID52|macro|PMC_SLPWK_DR1_PID52
DECL|PMC_SLPWK_DR1_PID53_Msk|macro|PMC_SLPWK_DR1_PID53_Msk
DECL|PMC_SLPWK_DR1_PID53_Pos|macro|PMC_SLPWK_DR1_PID53_Pos
DECL|PMC_SLPWK_DR1_PID53|macro|PMC_SLPWK_DR1_PID53
DECL|PMC_SLPWK_DR1_PID56_Msk|macro|PMC_SLPWK_DR1_PID56_Msk
DECL|PMC_SLPWK_DR1_PID56_Pos|macro|PMC_SLPWK_DR1_PID56_Pos
DECL|PMC_SLPWK_DR1_PID56|macro|PMC_SLPWK_DR1_PID56
DECL|PMC_SLPWK_DR1_PID57_Msk|macro|PMC_SLPWK_DR1_PID57_Msk
DECL|PMC_SLPWK_DR1_PID57_Pos|macro|PMC_SLPWK_DR1_PID57_Pos
DECL|PMC_SLPWK_DR1_PID57|macro|PMC_SLPWK_DR1_PID57
DECL|PMC_SLPWK_DR1_PID58_Msk|macro|PMC_SLPWK_DR1_PID58_Msk
DECL|PMC_SLPWK_DR1_PID58_Pos|macro|PMC_SLPWK_DR1_PID58_Pos
DECL|PMC_SLPWK_DR1_PID58|macro|PMC_SLPWK_DR1_PID58
DECL|PMC_SLPWK_DR1_PID59_Msk|macro|PMC_SLPWK_DR1_PID59_Msk
DECL|PMC_SLPWK_DR1_PID59_Pos|macro|PMC_SLPWK_DR1_PID59_Pos
DECL|PMC_SLPWK_DR1_PID59|macro|PMC_SLPWK_DR1_PID59
DECL|PMC_SLPWK_DR1_PID60_Msk|macro|PMC_SLPWK_DR1_PID60_Msk
DECL|PMC_SLPWK_DR1_PID60_Pos|macro|PMC_SLPWK_DR1_PID60_Pos
DECL|PMC_SLPWK_DR1_PID60|macro|PMC_SLPWK_DR1_PID60
DECL|PMC_SLPWK_DR1_PID_Msk|macro|PMC_SLPWK_DR1_PID_Msk
DECL|PMC_SLPWK_DR1_PID_Pos|macro|PMC_SLPWK_DR1_PID_Pos
DECL|PMC_SLPWK_DR1_PID|macro|PMC_SLPWK_DR1_PID
DECL|PMC_SLPWK_DR1_Type|typedef|} PMC_SLPWK_DR1_Type;
DECL|PMC_SLPWK_DR1|member|__O PMC_SLPWK_DR1_Type PMC_SLPWK_DR1; /**< Offset: 0x138 ( /W 32) SleepWalking Disable Register 1 */
DECL|PMC_SLPWK_DR1|member|__O uint32_t PMC_SLPWK_DR1; /**< (PMC Offset: 0x138) SleepWalking Disable Register 1 */
DECL|PMC_SLPWK_ER0_MASK|macro|PMC_SLPWK_ER0_MASK
DECL|PMC_SLPWK_ER0_Msk|macro|PMC_SLPWK_ER0_Msk
DECL|PMC_SLPWK_ER0_OFFSET|macro|PMC_SLPWK_ER0_OFFSET
DECL|PMC_SLPWK_ER0_PID10_Msk|macro|PMC_SLPWK_ER0_PID10_Msk
DECL|PMC_SLPWK_ER0_PID10_Pos|macro|PMC_SLPWK_ER0_PID10_Pos
DECL|PMC_SLPWK_ER0_PID10|macro|PMC_SLPWK_ER0_PID10
DECL|PMC_SLPWK_ER0_PID11_Msk|macro|PMC_SLPWK_ER0_PID11_Msk
DECL|PMC_SLPWK_ER0_PID11_Pos|macro|PMC_SLPWK_ER0_PID11_Pos
DECL|PMC_SLPWK_ER0_PID11|macro|PMC_SLPWK_ER0_PID11
DECL|PMC_SLPWK_ER0_PID12_Msk|macro|PMC_SLPWK_ER0_PID12_Msk
DECL|PMC_SLPWK_ER0_PID12_Pos|macro|PMC_SLPWK_ER0_PID12_Pos
DECL|PMC_SLPWK_ER0_PID12|macro|PMC_SLPWK_ER0_PID12
DECL|PMC_SLPWK_ER0_PID13_Msk|macro|PMC_SLPWK_ER0_PID13_Msk
DECL|PMC_SLPWK_ER0_PID13_Pos|macro|PMC_SLPWK_ER0_PID13_Pos
DECL|PMC_SLPWK_ER0_PID13|macro|PMC_SLPWK_ER0_PID13
DECL|PMC_SLPWK_ER0_PID14_Msk|macro|PMC_SLPWK_ER0_PID14_Msk
DECL|PMC_SLPWK_ER0_PID14_Pos|macro|PMC_SLPWK_ER0_PID14_Pos
DECL|PMC_SLPWK_ER0_PID14|macro|PMC_SLPWK_ER0_PID14
DECL|PMC_SLPWK_ER0_PID15_Msk|macro|PMC_SLPWK_ER0_PID15_Msk
DECL|PMC_SLPWK_ER0_PID15_Pos|macro|PMC_SLPWK_ER0_PID15_Pos
DECL|PMC_SLPWK_ER0_PID15|macro|PMC_SLPWK_ER0_PID15
DECL|PMC_SLPWK_ER0_PID16_Msk|macro|PMC_SLPWK_ER0_PID16_Msk
DECL|PMC_SLPWK_ER0_PID16_Pos|macro|PMC_SLPWK_ER0_PID16_Pos
DECL|PMC_SLPWK_ER0_PID16|macro|PMC_SLPWK_ER0_PID16
DECL|PMC_SLPWK_ER0_PID17_Msk|macro|PMC_SLPWK_ER0_PID17_Msk
DECL|PMC_SLPWK_ER0_PID17_Pos|macro|PMC_SLPWK_ER0_PID17_Pos
DECL|PMC_SLPWK_ER0_PID17|macro|PMC_SLPWK_ER0_PID17
DECL|PMC_SLPWK_ER0_PID18_Msk|macro|PMC_SLPWK_ER0_PID18_Msk
DECL|PMC_SLPWK_ER0_PID18_Pos|macro|PMC_SLPWK_ER0_PID18_Pos
DECL|PMC_SLPWK_ER0_PID18|macro|PMC_SLPWK_ER0_PID18
DECL|PMC_SLPWK_ER0_PID19_Msk|macro|PMC_SLPWK_ER0_PID19_Msk
DECL|PMC_SLPWK_ER0_PID19_Pos|macro|PMC_SLPWK_ER0_PID19_Pos
DECL|PMC_SLPWK_ER0_PID19|macro|PMC_SLPWK_ER0_PID19
DECL|PMC_SLPWK_ER0_PID20_Msk|macro|PMC_SLPWK_ER0_PID20_Msk
DECL|PMC_SLPWK_ER0_PID20_Pos|macro|PMC_SLPWK_ER0_PID20_Pos
DECL|PMC_SLPWK_ER0_PID20|macro|PMC_SLPWK_ER0_PID20
DECL|PMC_SLPWK_ER0_PID21_Msk|macro|PMC_SLPWK_ER0_PID21_Msk
DECL|PMC_SLPWK_ER0_PID21_Pos|macro|PMC_SLPWK_ER0_PID21_Pos
DECL|PMC_SLPWK_ER0_PID21|macro|PMC_SLPWK_ER0_PID21
DECL|PMC_SLPWK_ER0_PID22_Msk|macro|PMC_SLPWK_ER0_PID22_Msk
DECL|PMC_SLPWK_ER0_PID22_Pos|macro|PMC_SLPWK_ER0_PID22_Pos
DECL|PMC_SLPWK_ER0_PID22|macro|PMC_SLPWK_ER0_PID22
DECL|PMC_SLPWK_ER0_PID23_Msk|macro|PMC_SLPWK_ER0_PID23_Msk
DECL|PMC_SLPWK_ER0_PID23_Pos|macro|PMC_SLPWK_ER0_PID23_Pos
DECL|PMC_SLPWK_ER0_PID23|macro|PMC_SLPWK_ER0_PID23
DECL|PMC_SLPWK_ER0_PID24_Msk|macro|PMC_SLPWK_ER0_PID24_Msk
DECL|PMC_SLPWK_ER0_PID24_Pos|macro|PMC_SLPWK_ER0_PID24_Pos
DECL|PMC_SLPWK_ER0_PID24|macro|PMC_SLPWK_ER0_PID24
DECL|PMC_SLPWK_ER0_PID25_Msk|macro|PMC_SLPWK_ER0_PID25_Msk
DECL|PMC_SLPWK_ER0_PID25_Pos|macro|PMC_SLPWK_ER0_PID25_Pos
DECL|PMC_SLPWK_ER0_PID25|macro|PMC_SLPWK_ER0_PID25
DECL|PMC_SLPWK_ER0_PID26_Msk|macro|PMC_SLPWK_ER0_PID26_Msk
DECL|PMC_SLPWK_ER0_PID26_Pos|macro|PMC_SLPWK_ER0_PID26_Pos
DECL|PMC_SLPWK_ER0_PID26|macro|PMC_SLPWK_ER0_PID26
DECL|PMC_SLPWK_ER0_PID27_Msk|macro|PMC_SLPWK_ER0_PID27_Msk
DECL|PMC_SLPWK_ER0_PID27_Pos|macro|PMC_SLPWK_ER0_PID27_Pos
DECL|PMC_SLPWK_ER0_PID27|macro|PMC_SLPWK_ER0_PID27
DECL|PMC_SLPWK_ER0_PID28_Msk|macro|PMC_SLPWK_ER0_PID28_Msk
DECL|PMC_SLPWK_ER0_PID28_Pos|macro|PMC_SLPWK_ER0_PID28_Pos
DECL|PMC_SLPWK_ER0_PID28|macro|PMC_SLPWK_ER0_PID28
DECL|PMC_SLPWK_ER0_PID29_Msk|macro|PMC_SLPWK_ER0_PID29_Msk
DECL|PMC_SLPWK_ER0_PID29_Pos|macro|PMC_SLPWK_ER0_PID29_Pos
DECL|PMC_SLPWK_ER0_PID29|macro|PMC_SLPWK_ER0_PID29
DECL|PMC_SLPWK_ER0_PID30_Msk|macro|PMC_SLPWK_ER0_PID30_Msk
DECL|PMC_SLPWK_ER0_PID30_Pos|macro|PMC_SLPWK_ER0_PID30_Pos
DECL|PMC_SLPWK_ER0_PID30|macro|PMC_SLPWK_ER0_PID30
DECL|PMC_SLPWK_ER0_PID31_Msk|macro|PMC_SLPWK_ER0_PID31_Msk
DECL|PMC_SLPWK_ER0_PID31_Pos|macro|PMC_SLPWK_ER0_PID31_Pos
DECL|PMC_SLPWK_ER0_PID31|macro|PMC_SLPWK_ER0_PID31
DECL|PMC_SLPWK_ER0_PID7_Msk|macro|PMC_SLPWK_ER0_PID7_Msk
DECL|PMC_SLPWK_ER0_PID7_Pos|macro|PMC_SLPWK_ER0_PID7_Pos
DECL|PMC_SLPWK_ER0_PID7|macro|PMC_SLPWK_ER0_PID7
DECL|PMC_SLPWK_ER0_PID8_Msk|macro|PMC_SLPWK_ER0_PID8_Msk
DECL|PMC_SLPWK_ER0_PID8_Pos|macro|PMC_SLPWK_ER0_PID8_Pos
DECL|PMC_SLPWK_ER0_PID8|macro|PMC_SLPWK_ER0_PID8
DECL|PMC_SLPWK_ER0_PID9_Msk|macro|PMC_SLPWK_ER0_PID9_Msk
DECL|PMC_SLPWK_ER0_PID9_Pos|macro|PMC_SLPWK_ER0_PID9_Pos
DECL|PMC_SLPWK_ER0_PID9|macro|PMC_SLPWK_ER0_PID9
DECL|PMC_SLPWK_ER0_PID_Msk|macro|PMC_SLPWK_ER0_PID_Msk
DECL|PMC_SLPWK_ER0_PID_Pos|macro|PMC_SLPWK_ER0_PID_Pos
DECL|PMC_SLPWK_ER0_PID|macro|PMC_SLPWK_ER0_PID
DECL|PMC_SLPWK_ER0_Type|typedef|} PMC_SLPWK_ER0_Type;
DECL|PMC_SLPWK_ER0|member|__O PMC_SLPWK_ER0_Type PMC_SLPWK_ER0; /**< Offset: 0x114 ( /W 32) SleepWalking Enable Register 0 */
DECL|PMC_SLPWK_ER0|member|__O uint32_t PMC_SLPWK_ER0; /**< (PMC Offset: 0x114) SleepWalking Enable Register 0 */
DECL|PMC_SLPWK_ER1_MASK|macro|PMC_SLPWK_ER1_MASK
DECL|PMC_SLPWK_ER1_Msk|macro|PMC_SLPWK_ER1_Msk
DECL|PMC_SLPWK_ER1_OFFSET|macro|PMC_SLPWK_ER1_OFFSET
DECL|PMC_SLPWK_ER1_PID32_Msk|macro|PMC_SLPWK_ER1_PID32_Msk
DECL|PMC_SLPWK_ER1_PID32_Pos|macro|PMC_SLPWK_ER1_PID32_Pos
DECL|PMC_SLPWK_ER1_PID32|macro|PMC_SLPWK_ER1_PID32
DECL|PMC_SLPWK_ER1_PID33_Msk|macro|PMC_SLPWK_ER1_PID33_Msk
DECL|PMC_SLPWK_ER1_PID33_Pos|macro|PMC_SLPWK_ER1_PID33_Pos
DECL|PMC_SLPWK_ER1_PID33|macro|PMC_SLPWK_ER1_PID33
DECL|PMC_SLPWK_ER1_PID34_Msk|macro|PMC_SLPWK_ER1_PID34_Msk
DECL|PMC_SLPWK_ER1_PID34_Pos|macro|PMC_SLPWK_ER1_PID34_Pos
DECL|PMC_SLPWK_ER1_PID34|macro|PMC_SLPWK_ER1_PID34
DECL|PMC_SLPWK_ER1_PID35_Msk|macro|PMC_SLPWK_ER1_PID35_Msk
DECL|PMC_SLPWK_ER1_PID35_Pos|macro|PMC_SLPWK_ER1_PID35_Pos
DECL|PMC_SLPWK_ER1_PID35|macro|PMC_SLPWK_ER1_PID35
DECL|PMC_SLPWK_ER1_PID37_Msk|macro|PMC_SLPWK_ER1_PID37_Msk
DECL|PMC_SLPWK_ER1_PID37_Pos|macro|PMC_SLPWK_ER1_PID37_Pos
DECL|PMC_SLPWK_ER1_PID37|macro|PMC_SLPWK_ER1_PID37
DECL|PMC_SLPWK_ER1_PID39_Msk|macro|PMC_SLPWK_ER1_PID39_Msk
DECL|PMC_SLPWK_ER1_PID39_Pos|macro|PMC_SLPWK_ER1_PID39_Pos
DECL|PMC_SLPWK_ER1_PID39|macro|PMC_SLPWK_ER1_PID39
DECL|PMC_SLPWK_ER1_PID40_Msk|macro|PMC_SLPWK_ER1_PID40_Msk
DECL|PMC_SLPWK_ER1_PID40_Pos|macro|PMC_SLPWK_ER1_PID40_Pos
DECL|PMC_SLPWK_ER1_PID40|macro|PMC_SLPWK_ER1_PID40
DECL|PMC_SLPWK_ER1_PID41_Msk|macro|PMC_SLPWK_ER1_PID41_Msk
DECL|PMC_SLPWK_ER1_PID41_Pos|macro|PMC_SLPWK_ER1_PID41_Pos
DECL|PMC_SLPWK_ER1_PID41|macro|PMC_SLPWK_ER1_PID41
DECL|PMC_SLPWK_ER1_PID42_Msk|macro|PMC_SLPWK_ER1_PID42_Msk
DECL|PMC_SLPWK_ER1_PID42_Pos|macro|PMC_SLPWK_ER1_PID42_Pos
DECL|PMC_SLPWK_ER1_PID42|macro|PMC_SLPWK_ER1_PID42
DECL|PMC_SLPWK_ER1_PID43_Msk|macro|PMC_SLPWK_ER1_PID43_Msk
DECL|PMC_SLPWK_ER1_PID43_Pos|macro|PMC_SLPWK_ER1_PID43_Pos
DECL|PMC_SLPWK_ER1_PID43|macro|PMC_SLPWK_ER1_PID43
DECL|PMC_SLPWK_ER1_PID44_Msk|macro|PMC_SLPWK_ER1_PID44_Msk
DECL|PMC_SLPWK_ER1_PID44_Pos|macro|PMC_SLPWK_ER1_PID44_Pos
DECL|PMC_SLPWK_ER1_PID44|macro|PMC_SLPWK_ER1_PID44
DECL|PMC_SLPWK_ER1_PID45_Msk|macro|PMC_SLPWK_ER1_PID45_Msk
DECL|PMC_SLPWK_ER1_PID45_Pos|macro|PMC_SLPWK_ER1_PID45_Pos
DECL|PMC_SLPWK_ER1_PID45|macro|PMC_SLPWK_ER1_PID45
DECL|PMC_SLPWK_ER1_PID46_Msk|macro|PMC_SLPWK_ER1_PID46_Msk
DECL|PMC_SLPWK_ER1_PID46_Pos|macro|PMC_SLPWK_ER1_PID46_Pos
DECL|PMC_SLPWK_ER1_PID46|macro|PMC_SLPWK_ER1_PID46
DECL|PMC_SLPWK_ER1_PID47_Msk|macro|PMC_SLPWK_ER1_PID47_Msk
DECL|PMC_SLPWK_ER1_PID47_Pos|macro|PMC_SLPWK_ER1_PID47_Pos
DECL|PMC_SLPWK_ER1_PID47|macro|PMC_SLPWK_ER1_PID47
DECL|PMC_SLPWK_ER1_PID48_Msk|macro|PMC_SLPWK_ER1_PID48_Msk
DECL|PMC_SLPWK_ER1_PID48_Pos|macro|PMC_SLPWK_ER1_PID48_Pos
DECL|PMC_SLPWK_ER1_PID48|macro|PMC_SLPWK_ER1_PID48
DECL|PMC_SLPWK_ER1_PID49_Msk|macro|PMC_SLPWK_ER1_PID49_Msk
DECL|PMC_SLPWK_ER1_PID49_Pos|macro|PMC_SLPWK_ER1_PID49_Pos
DECL|PMC_SLPWK_ER1_PID49|macro|PMC_SLPWK_ER1_PID49
DECL|PMC_SLPWK_ER1_PID50_Msk|macro|PMC_SLPWK_ER1_PID50_Msk
DECL|PMC_SLPWK_ER1_PID50_Pos|macro|PMC_SLPWK_ER1_PID50_Pos
DECL|PMC_SLPWK_ER1_PID50|macro|PMC_SLPWK_ER1_PID50
DECL|PMC_SLPWK_ER1_PID51_Msk|macro|PMC_SLPWK_ER1_PID51_Msk
DECL|PMC_SLPWK_ER1_PID51_Pos|macro|PMC_SLPWK_ER1_PID51_Pos
DECL|PMC_SLPWK_ER1_PID51|macro|PMC_SLPWK_ER1_PID51
DECL|PMC_SLPWK_ER1_PID52_Msk|macro|PMC_SLPWK_ER1_PID52_Msk
DECL|PMC_SLPWK_ER1_PID52_Pos|macro|PMC_SLPWK_ER1_PID52_Pos
DECL|PMC_SLPWK_ER1_PID52|macro|PMC_SLPWK_ER1_PID52
DECL|PMC_SLPWK_ER1_PID53_Msk|macro|PMC_SLPWK_ER1_PID53_Msk
DECL|PMC_SLPWK_ER1_PID53_Pos|macro|PMC_SLPWK_ER1_PID53_Pos
DECL|PMC_SLPWK_ER1_PID53|macro|PMC_SLPWK_ER1_PID53
DECL|PMC_SLPWK_ER1_PID56_Msk|macro|PMC_SLPWK_ER1_PID56_Msk
DECL|PMC_SLPWK_ER1_PID56_Pos|macro|PMC_SLPWK_ER1_PID56_Pos
DECL|PMC_SLPWK_ER1_PID56|macro|PMC_SLPWK_ER1_PID56
DECL|PMC_SLPWK_ER1_PID57_Msk|macro|PMC_SLPWK_ER1_PID57_Msk
DECL|PMC_SLPWK_ER1_PID57_Pos|macro|PMC_SLPWK_ER1_PID57_Pos
DECL|PMC_SLPWK_ER1_PID57|macro|PMC_SLPWK_ER1_PID57
DECL|PMC_SLPWK_ER1_PID58_Msk|macro|PMC_SLPWK_ER1_PID58_Msk
DECL|PMC_SLPWK_ER1_PID58_Pos|macro|PMC_SLPWK_ER1_PID58_Pos
DECL|PMC_SLPWK_ER1_PID58|macro|PMC_SLPWK_ER1_PID58
DECL|PMC_SLPWK_ER1_PID59_Msk|macro|PMC_SLPWK_ER1_PID59_Msk
DECL|PMC_SLPWK_ER1_PID59_Pos|macro|PMC_SLPWK_ER1_PID59_Pos
DECL|PMC_SLPWK_ER1_PID59|macro|PMC_SLPWK_ER1_PID59
DECL|PMC_SLPWK_ER1_PID60_Msk|macro|PMC_SLPWK_ER1_PID60_Msk
DECL|PMC_SLPWK_ER1_PID60_Pos|macro|PMC_SLPWK_ER1_PID60_Pos
DECL|PMC_SLPWK_ER1_PID60|macro|PMC_SLPWK_ER1_PID60
DECL|PMC_SLPWK_ER1_PID_Msk|macro|PMC_SLPWK_ER1_PID_Msk
DECL|PMC_SLPWK_ER1_PID_Pos|macro|PMC_SLPWK_ER1_PID_Pos
DECL|PMC_SLPWK_ER1_PID|macro|PMC_SLPWK_ER1_PID
DECL|PMC_SLPWK_ER1_Type|typedef|} PMC_SLPWK_ER1_Type;
DECL|PMC_SLPWK_ER1|member|__O PMC_SLPWK_ER1_Type PMC_SLPWK_ER1; /**< Offset: 0x134 ( /W 32) SleepWalking Enable Register 1 */
DECL|PMC_SLPWK_ER1|member|__O uint32_t PMC_SLPWK_ER1; /**< (PMC Offset: 0x134) SleepWalking Enable Register 1 */
DECL|PMC_SLPWK_SR0_MASK|macro|PMC_SLPWK_SR0_MASK
DECL|PMC_SLPWK_SR0_Msk|macro|PMC_SLPWK_SR0_Msk
DECL|PMC_SLPWK_SR0_OFFSET|macro|PMC_SLPWK_SR0_OFFSET
DECL|PMC_SLPWK_SR0_PID10_Msk|macro|PMC_SLPWK_SR0_PID10_Msk
DECL|PMC_SLPWK_SR0_PID10_Pos|macro|PMC_SLPWK_SR0_PID10_Pos
DECL|PMC_SLPWK_SR0_PID10|macro|PMC_SLPWK_SR0_PID10
DECL|PMC_SLPWK_SR0_PID11_Msk|macro|PMC_SLPWK_SR0_PID11_Msk
DECL|PMC_SLPWK_SR0_PID11_Pos|macro|PMC_SLPWK_SR0_PID11_Pos
DECL|PMC_SLPWK_SR0_PID11|macro|PMC_SLPWK_SR0_PID11
DECL|PMC_SLPWK_SR0_PID12_Msk|macro|PMC_SLPWK_SR0_PID12_Msk
DECL|PMC_SLPWK_SR0_PID12_Pos|macro|PMC_SLPWK_SR0_PID12_Pos
DECL|PMC_SLPWK_SR0_PID12|macro|PMC_SLPWK_SR0_PID12
DECL|PMC_SLPWK_SR0_PID13_Msk|macro|PMC_SLPWK_SR0_PID13_Msk
DECL|PMC_SLPWK_SR0_PID13_Pos|macro|PMC_SLPWK_SR0_PID13_Pos
DECL|PMC_SLPWK_SR0_PID13|macro|PMC_SLPWK_SR0_PID13
DECL|PMC_SLPWK_SR0_PID14_Msk|macro|PMC_SLPWK_SR0_PID14_Msk
DECL|PMC_SLPWK_SR0_PID14_Pos|macro|PMC_SLPWK_SR0_PID14_Pos
DECL|PMC_SLPWK_SR0_PID14|macro|PMC_SLPWK_SR0_PID14
DECL|PMC_SLPWK_SR0_PID15_Msk|macro|PMC_SLPWK_SR0_PID15_Msk
DECL|PMC_SLPWK_SR0_PID15_Pos|macro|PMC_SLPWK_SR0_PID15_Pos
DECL|PMC_SLPWK_SR0_PID15|macro|PMC_SLPWK_SR0_PID15
DECL|PMC_SLPWK_SR0_PID16_Msk|macro|PMC_SLPWK_SR0_PID16_Msk
DECL|PMC_SLPWK_SR0_PID16_Pos|macro|PMC_SLPWK_SR0_PID16_Pos
DECL|PMC_SLPWK_SR0_PID16|macro|PMC_SLPWK_SR0_PID16
DECL|PMC_SLPWK_SR0_PID17_Msk|macro|PMC_SLPWK_SR0_PID17_Msk
DECL|PMC_SLPWK_SR0_PID17_Pos|macro|PMC_SLPWK_SR0_PID17_Pos
DECL|PMC_SLPWK_SR0_PID17|macro|PMC_SLPWK_SR0_PID17
DECL|PMC_SLPWK_SR0_PID18_Msk|macro|PMC_SLPWK_SR0_PID18_Msk
DECL|PMC_SLPWK_SR0_PID18_Pos|macro|PMC_SLPWK_SR0_PID18_Pos
DECL|PMC_SLPWK_SR0_PID18|macro|PMC_SLPWK_SR0_PID18
DECL|PMC_SLPWK_SR0_PID19_Msk|macro|PMC_SLPWK_SR0_PID19_Msk
DECL|PMC_SLPWK_SR0_PID19_Pos|macro|PMC_SLPWK_SR0_PID19_Pos
DECL|PMC_SLPWK_SR0_PID19|macro|PMC_SLPWK_SR0_PID19
DECL|PMC_SLPWK_SR0_PID20_Msk|macro|PMC_SLPWK_SR0_PID20_Msk
DECL|PMC_SLPWK_SR0_PID20_Pos|macro|PMC_SLPWK_SR0_PID20_Pos
DECL|PMC_SLPWK_SR0_PID20|macro|PMC_SLPWK_SR0_PID20
DECL|PMC_SLPWK_SR0_PID21_Msk|macro|PMC_SLPWK_SR0_PID21_Msk
DECL|PMC_SLPWK_SR0_PID21_Pos|macro|PMC_SLPWK_SR0_PID21_Pos
DECL|PMC_SLPWK_SR0_PID21|macro|PMC_SLPWK_SR0_PID21
DECL|PMC_SLPWK_SR0_PID22_Msk|macro|PMC_SLPWK_SR0_PID22_Msk
DECL|PMC_SLPWK_SR0_PID22_Pos|macro|PMC_SLPWK_SR0_PID22_Pos
DECL|PMC_SLPWK_SR0_PID22|macro|PMC_SLPWK_SR0_PID22
DECL|PMC_SLPWK_SR0_PID23_Msk|macro|PMC_SLPWK_SR0_PID23_Msk
DECL|PMC_SLPWK_SR0_PID23_Pos|macro|PMC_SLPWK_SR0_PID23_Pos
DECL|PMC_SLPWK_SR0_PID23|macro|PMC_SLPWK_SR0_PID23
DECL|PMC_SLPWK_SR0_PID24_Msk|macro|PMC_SLPWK_SR0_PID24_Msk
DECL|PMC_SLPWK_SR0_PID24_Pos|macro|PMC_SLPWK_SR0_PID24_Pos
DECL|PMC_SLPWK_SR0_PID24|macro|PMC_SLPWK_SR0_PID24
DECL|PMC_SLPWK_SR0_PID25_Msk|macro|PMC_SLPWK_SR0_PID25_Msk
DECL|PMC_SLPWK_SR0_PID25_Pos|macro|PMC_SLPWK_SR0_PID25_Pos
DECL|PMC_SLPWK_SR0_PID25|macro|PMC_SLPWK_SR0_PID25
DECL|PMC_SLPWK_SR0_PID26_Msk|macro|PMC_SLPWK_SR0_PID26_Msk
DECL|PMC_SLPWK_SR0_PID26_Pos|macro|PMC_SLPWK_SR0_PID26_Pos
DECL|PMC_SLPWK_SR0_PID26|macro|PMC_SLPWK_SR0_PID26
DECL|PMC_SLPWK_SR0_PID27_Msk|macro|PMC_SLPWK_SR0_PID27_Msk
DECL|PMC_SLPWK_SR0_PID27_Pos|macro|PMC_SLPWK_SR0_PID27_Pos
DECL|PMC_SLPWK_SR0_PID27|macro|PMC_SLPWK_SR0_PID27
DECL|PMC_SLPWK_SR0_PID28_Msk|macro|PMC_SLPWK_SR0_PID28_Msk
DECL|PMC_SLPWK_SR0_PID28_Pos|macro|PMC_SLPWK_SR0_PID28_Pos
DECL|PMC_SLPWK_SR0_PID28|macro|PMC_SLPWK_SR0_PID28
DECL|PMC_SLPWK_SR0_PID29_Msk|macro|PMC_SLPWK_SR0_PID29_Msk
DECL|PMC_SLPWK_SR0_PID29_Pos|macro|PMC_SLPWK_SR0_PID29_Pos
DECL|PMC_SLPWK_SR0_PID29|macro|PMC_SLPWK_SR0_PID29
DECL|PMC_SLPWK_SR0_PID30_Msk|macro|PMC_SLPWK_SR0_PID30_Msk
DECL|PMC_SLPWK_SR0_PID30_Pos|macro|PMC_SLPWK_SR0_PID30_Pos
DECL|PMC_SLPWK_SR0_PID30|macro|PMC_SLPWK_SR0_PID30
DECL|PMC_SLPWK_SR0_PID31_Msk|macro|PMC_SLPWK_SR0_PID31_Msk
DECL|PMC_SLPWK_SR0_PID31_Pos|macro|PMC_SLPWK_SR0_PID31_Pos
DECL|PMC_SLPWK_SR0_PID31|macro|PMC_SLPWK_SR0_PID31
DECL|PMC_SLPWK_SR0_PID7_Msk|macro|PMC_SLPWK_SR0_PID7_Msk
DECL|PMC_SLPWK_SR0_PID7_Pos|macro|PMC_SLPWK_SR0_PID7_Pos
DECL|PMC_SLPWK_SR0_PID7|macro|PMC_SLPWK_SR0_PID7
DECL|PMC_SLPWK_SR0_PID8_Msk|macro|PMC_SLPWK_SR0_PID8_Msk
DECL|PMC_SLPWK_SR0_PID8_Pos|macro|PMC_SLPWK_SR0_PID8_Pos
DECL|PMC_SLPWK_SR0_PID8|macro|PMC_SLPWK_SR0_PID8
DECL|PMC_SLPWK_SR0_PID9_Msk|macro|PMC_SLPWK_SR0_PID9_Msk
DECL|PMC_SLPWK_SR0_PID9_Pos|macro|PMC_SLPWK_SR0_PID9_Pos
DECL|PMC_SLPWK_SR0_PID9|macro|PMC_SLPWK_SR0_PID9
DECL|PMC_SLPWK_SR0_PID_Msk|macro|PMC_SLPWK_SR0_PID_Msk
DECL|PMC_SLPWK_SR0_PID_Pos|macro|PMC_SLPWK_SR0_PID_Pos
DECL|PMC_SLPWK_SR0_PID|macro|PMC_SLPWK_SR0_PID
DECL|PMC_SLPWK_SR0_Type|typedef|} PMC_SLPWK_SR0_Type;
DECL|PMC_SLPWK_SR0|member|__I PMC_SLPWK_SR0_Type PMC_SLPWK_SR0; /**< Offset: 0x11C (R/ 32) SleepWalking Status Register 0 */
DECL|PMC_SLPWK_SR0|member|__I uint32_t PMC_SLPWK_SR0; /**< (PMC Offset: 0x11C) SleepWalking Status Register 0 */
DECL|PMC_SLPWK_SR1_MASK|macro|PMC_SLPWK_SR1_MASK
DECL|PMC_SLPWK_SR1_Msk|macro|PMC_SLPWK_SR1_Msk
DECL|PMC_SLPWK_SR1_OFFSET|macro|PMC_SLPWK_SR1_OFFSET
DECL|PMC_SLPWK_SR1_PID32_Msk|macro|PMC_SLPWK_SR1_PID32_Msk
DECL|PMC_SLPWK_SR1_PID32_Pos|macro|PMC_SLPWK_SR1_PID32_Pos
DECL|PMC_SLPWK_SR1_PID32|macro|PMC_SLPWK_SR1_PID32
DECL|PMC_SLPWK_SR1_PID33_Msk|macro|PMC_SLPWK_SR1_PID33_Msk
DECL|PMC_SLPWK_SR1_PID33_Pos|macro|PMC_SLPWK_SR1_PID33_Pos
DECL|PMC_SLPWK_SR1_PID33|macro|PMC_SLPWK_SR1_PID33
DECL|PMC_SLPWK_SR1_PID34_Msk|macro|PMC_SLPWK_SR1_PID34_Msk
DECL|PMC_SLPWK_SR1_PID34_Pos|macro|PMC_SLPWK_SR1_PID34_Pos
DECL|PMC_SLPWK_SR1_PID34|macro|PMC_SLPWK_SR1_PID34
DECL|PMC_SLPWK_SR1_PID35_Msk|macro|PMC_SLPWK_SR1_PID35_Msk
DECL|PMC_SLPWK_SR1_PID35_Pos|macro|PMC_SLPWK_SR1_PID35_Pos
DECL|PMC_SLPWK_SR1_PID35|macro|PMC_SLPWK_SR1_PID35
DECL|PMC_SLPWK_SR1_PID37_Msk|macro|PMC_SLPWK_SR1_PID37_Msk
DECL|PMC_SLPWK_SR1_PID37_Pos|macro|PMC_SLPWK_SR1_PID37_Pos
DECL|PMC_SLPWK_SR1_PID37|macro|PMC_SLPWK_SR1_PID37
DECL|PMC_SLPWK_SR1_PID39_Msk|macro|PMC_SLPWK_SR1_PID39_Msk
DECL|PMC_SLPWK_SR1_PID39_Pos|macro|PMC_SLPWK_SR1_PID39_Pos
DECL|PMC_SLPWK_SR1_PID39|macro|PMC_SLPWK_SR1_PID39
DECL|PMC_SLPWK_SR1_PID40_Msk|macro|PMC_SLPWK_SR1_PID40_Msk
DECL|PMC_SLPWK_SR1_PID40_Pos|macro|PMC_SLPWK_SR1_PID40_Pos
DECL|PMC_SLPWK_SR1_PID40|macro|PMC_SLPWK_SR1_PID40
DECL|PMC_SLPWK_SR1_PID41_Msk|macro|PMC_SLPWK_SR1_PID41_Msk
DECL|PMC_SLPWK_SR1_PID41_Pos|macro|PMC_SLPWK_SR1_PID41_Pos
DECL|PMC_SLPWK_SR1_PID41|macro|PMC_SLPWK_SR1_PID41
DECL|PMC_SLPWK_SR1_PID42_Msk|macro|PMC_SLPWK_SR1_PID42_Msk
DECL|PMC_SLPWK_SR1_PID42_Pos|macro|PMC_SLPWK_SR1_PID42_Pos
DECL|PMC_SLPWK_SR1_PID42|macro|PMC_SLPWK_SR1_PID42
DECL|PMC_SLPWK_SR1_PID43_Msk|macro|PMC_SLPWK_SR1_PID43_Msk
DECL|PMC_SLPWK_SR1_PID43_Pos|macro|PMC_SLPWK_SR1_PID43_Pos
DECL|PMC_SLPWK_SR1_PID43|macro|PMC_SLPWK_SR1_PID43
DECL|PMC_SLPWK_SR1_PID44_Msk|macro|PMC_SLPWK_SR1_PID44_Msk
DECL|PMC_SLPWK_SR1_PID44_Pos|macro|PMC_SLPWK_SR1_PID44_Pos
DECL|PMC_SLPWK_SR1_PID44|macro|PMC_SLPWK_SR1_PID44
DECL|PMC_SLPWK_SR1_PID45_Msk|macro|PMC_SLPWK_SR1_PID45_Msk
DECL|PMC_SLPWK_SR1_PID45_Pos|macro|PMC_SLPWK_SR1_PID45_Pos
DECL|PMC_SLPWK_SR1_PID45|macro|PMC_SLPWK_SR1_PID45
DECL|PMC_SLPWK_SR1_PID46_Msk|macro|PMC_SLPWK_SR1_PID46_Msk
DECL|PMC_SLPWK_SR1_PID46_Pos|macro|PMC_SLPWK_SR1_PID46_Pos
DECL|PMC_SLPWK_SR1_PID46|macro|PMC_SLPWK_SR1_PID46
DECL|PMC_SLPWK_SR1_PID47_Msk|macro|PMC_SLPWK_SR1_PID47_Msk
DECL|PMC_SLPWK_SR1_PID47_Pos|macro|PMC_SLPWK_SR1_PID47_Pos
DECL|PMC_SLPWK_SR1_PID47|macro|PMC_SLPWK_SR1_PID47
DECL|PMC_SLPWK_SR1_PID48_Msk|macro|PMC_SLPWK_SR1_PID48_Msk
DECL|PMC_SLPWK_SR1_PID48_Pos|macro|PMC_SLPWK_SR1_PID48_Pos
DECL|PMC_SLPWK_SR1_PID48|macro|PMC_SLPWK_SR1_PID48
DECL|PMC_SLPWK_SR1_PID49_Msk|macro|PMC_SLPWK_SR1_PID49_Msk
DECL|PMC_SLPWK_SR1_PID49_Pos|macro|PMC_SLPWK_SR1_PID49_Pos
DECL|PMC_SLPWK_SR1_PID49|macro|PMC_SLPWK_SR1_PID49
DECL|PMC_SLPWK_SR1_PID50_Msk|macro|PMC_SLPWK_SR1_PID50_Msk
DECL|PMC_SLPWK_SR1_PID50_Pos|macro|PMC_SLPWK_SR1_PID50_Pos
DECL|PMC_SLPWK_SR1_PID50|macro|PMC_SLPWK_SR1_PID50
DECL|PMC_SLPWK_SR1_PID51_Msk|macro|PMC_SLPWK_SR1_PID51_Msk
DECL|PMC_SLPWK_SR1_PID51_Pos|macro|PMC_SLPWK_SR1_PID51_Pos
DECL|PMC_SLPWK_SR1_PID51|macro|PMC_SLPWK_SR1_PID51
DECL|PMC_SLPWK_SR1_PID52_Msk|macro|PMC_SLPWK_SR1_PID52_Msk
DECL|PMC_SLPWK_SR1_PID52_Pos|macro|PMC_SLPWK_SR1_PID52_Pos
DECL|PMC_SLPWK_SR1_PID52|macro|PMC_SLPWK_SR1_PID52
DECL|PMC_SLPWK_SR1_PID53_Msk|macro|PMC_SLPWK_SR1_PID53_Msk
DECL|PMC_SLPWK_SR1_PID53_Pos|macro|PMC_SLPWK_SR1_PID53_Pos
DECL|PMC_SLPWK_SR1_PID53|macro|PMC_SLPWK_SR1_PID53
DECL|PMC_SLPWK_SR1_PID56_Msk|macro|PMC_SLPWK_SR1_PID56_Msk
DECL|PMC_SLPWK_SR1_PID56_Pos|macro|PMC_SLPWK_SR1_PID56_Pos
DECL|PMC_SLPWK_SR1_PID56|macro|PMC_SLPWK_SR1_PID56
DECL|PMC_SLPWK_SR1_PID57_Msk|macro|PMC_SLPWK_SR1_PID57_Msk
DECL|PMC_SLPWK_SR1_PID57_Pos|macro|PMC_SLPWK_SR1_PID57_Pos
DECL|PMC_SLPWK_SR1_PID57|macro|PMC_SLPWK_SR1_PID57
DECL|PMC_SLPWK_SR1_PID58_Msk|macro|PMC_SLPWK_SR1_PID58_Msk
DECL|PMC_SLPWK_SR1_PID58_Pos|macro|PMC_SLPWK_SR1_PID58_Pos
DECL|PMC_SLPWK_SR1_PID58|macro|PMC_SLPWK_SR1_PID58
DECL|PMC_SLPWK_SR1_PID59_Msk|macro|PMC_SLPWK_SR1_PID59_Msk
DECL|PMC_SLPWK_SR1_PID59_Pos|macro|PMC_SLPWK_SR1_PID59_Pos
DECL|PMC_SLPWK_SR1_PID59|macro|PMC_SLPWK_SR1_PID59
DECL|PMC_SLPWK_SR1_PID60_Msk|macro|PMC_SLPWK_SR1_PID60_Msk
DECL|PMC_SLPWK_SR1_PID60_Pos|macro|PMC_SLPWK_SR1_PID60_Pos
DECL|PMC_SLPWK_SR1_PID60|macro|PMC_SLPWK_SR1_PID60
DECL|PMC_SLPWK_SR1_PID_Msk|macro|PMC_SLPWK_SR1_PID_Msk
DECL|PMC_SLPWK_SR1_PID_Pos|macro|PMC_SLPWK_SR1_PID_Pos
DECL|PMC_SLPWK_SR1_PID|macro|PMC_SLPWK_SR1_PID
DECL|PMC_SLPWK_SR1_Type|typedef|} PMC_SLPWK_SR1_Type;
DECL|PMC_SLPWK_SR1|member|__I PMC_SLPWK_SR1_Type PMC_SLPWK_SR1; /**< Offset: 0x13C (R/ 32) SleepWalking Status Register 1 */
DECL|PMC_SLPWK_SR1|member|__I uint32_t PMC_SLPWK_SR1; /**< (PMC Offset: 0x13C) SleepWalking Status Register 1 */
DECL|PMC_SR_CFDEV_Msk|macro|PMC_SR_CFDEV_Msk
DECL|PMC_SR_CFDEV_Pos|macro|PMC_SR_CFDEV_Pos
DECL|PMC_SR_CFDEV|macro|PMC_SR_CFDEV
DECL|PMC_SR_CFDS_Msk|macro|PMC_SR_CFDS_Msk
DECL|PMC_SR_CFDS_Pos|macro|PMC_SR_CFDS_Pos
DECL|PMC_SR_CFDS|macro|PMC_SR_CFDS
DECL|PMC_SR_FOS_Msk|macro|PMC_SR_FOS_Msk
DECL|PMC_SR_FOS_Pos|macro|PMC_SR_FOS_Pos
DECL|PMC_SR_FOS|macro|PMC_SR_FOS
DECL|PMC_SR_LOCKA_Msk|macro|PMC_SR_LOCKA_Msk
DECL|PMC_SR_LOCKA_Pos|macro|PMC_SR_LOCKA_Pos
DECL|PMC_SR_LOCKA|macro|PMC_SR_LOCKA
DECL|PMC_SR_LOCKU_Msk|macro|PMC_SR_LOCKU_Msk
DECL|PMC_SR_LOCKU_Pos|macro|PMC_SR_LOCKU_Pos
DECL|PMC_SR_LOCKU|macro|PMC_SR_LOCKU
DECL|PMC_SR_MASK|macro|PMC_SR_MASK
DECL|PMC_SR_MCKRDY_Msk|macro|PMC_SR_MCKRDY_Msk
DECL|PMC_SR_MCKRDY_Pos|macro|PMC_SR_MCKRDY_Pos
DECL|PMC_SR_MCKRDY|macro|PMC_SR_MCKRDY
DECL|PMC_SR_MOSCRCS_Msk|macro|PMC_SR_MOSCRCS_Msk
DECL|PMC_SR_MOSCRCS_Pos|macro|PMC_SR_MOSCRCS_Pos
DECL|PMC_SR_MOSCRCS|macro|PMC_SR_MOSCRCS
DECL|PMC_SR_MOSCSELS_Msk|macro|PMC_SR_MOSCSELS_Msk
DECL|PMC_SR_MOSCSELS_Pos|macro|PMC_SR_MOSCSELS_Pos
DECL|PMC_SR_MOSCSELS|macro|PMC_SR_MOSCSELS
DECL|PMC_SR_MOSCXTS_Msk|macro|PMC_SR_MOSCXTS_Msk
DECL|PMC_SR_MOSCXTS_Pos|macro|PMC_SR_MOSCXTS_Pos
DECL|PMC_SR_MOSCXTS|macro|PMC_SR_MOSCXTS
DECL|PMC_SR_Msk|macro|PMC_SR_Msk
DECL|PMC_SR_OFFSET|macro|PMC_SR_OFFSET
DECL|PMC_SR_OSCSELS_Msk|macro|PMC_SR_OSCSELS_Msk
DECL|PMC_SR_OSCSELS_Pos|macro|PMC_SR_OSCSELS_Pos
DECL|PMC_SR_OSCSELS|macro|PMC_SR_OSCSELS
DECL|PMC_SR_PCKRDY0_Msk|macro|PMC_SR_PCKRDY0_Msk
DECL|PMC_SR_PCKRDY0_Pos|macro|PMC_SR_PCKRDY0_Pos
DECL|PMC_SR_PCKRDY0|macro|PMC_SR_PCKRDY0
DECL|PMC_SR_PCKRDY1_Msk|macro|PMC_SR_PCKRDY1_Msk
DECL|PMC_SR_PCKRDY1_Pos|macro|PMC_SR_PCKRDY1_Pos
DECL|PMC_SR_PCKRDY1|macro|PMC_SR_PCKRDY1
DECL|PMC_SR_PCKRDY2_Msk|macro|PMC_SR_PCKRDY2_Msk
DECL|PMC_SR_PCKRDY2_Pos|macro|PMC_SR_PCKRDY2_Pos
DECL|PMC_SR_PCKRDY2|macro|PMC_SR_PCKRDY2
DECL|PMC_SR_Type|typedef|} PMC_SR_Type;
DECL|PMC_SR_XT32KERR_Msk|macro|PMC_SR_XT32KERR_Msk
DECL|PMC_SR_XT32KERR_Pos|macro|PMC_SR_XT32KERR_Pos
DECL|PMC_SR_XT32KERR|macro|PMC_SR_XT32KERR
DECL|PMC_SR|member|__I PMC_SR_Type PMC_SR; /**< Offset: 0x68 (R/ 32) Status Register */
DECL|PMC_SR|member|__I uint32_t PMC_SR; /**< (PMC Offset: 0x68) Status Register */
DECL|PMC_USB_MASK|macro|PMC_USB_MASK
DECL|PMC_USB_Msk|macro|PMC_USB_Msk
DECL|PMC_USB_OFFSET|macro|PMC_USB_OFFSET
DECL|PMC_USB_Type|typedef|} PMC_USB_Type;
DECL|PMC_USB_USBDIV_Msk|macro|PMC_USB_USBDIV_Msk
DECL|PMC_USB_USBDIV_Pos|macro|PMC_USB_USBDIV_Pos
DECL|PMC_USB_USBDIV|macro|PMC_USB_USBDIV
DECL|PMC_USB_USBS_Msk|macro|PMC_USB_USBS_Msk
DECL|PMC_USB_USBS_Pos|macro|PMC_USB_USBS_Pos
DECL|PMC_USB_USBS|macro|PMC_USB_USBS
DECL|PMC_USB|member|__IO PMC_USB_Type PMC_USB; /**< Offset: 0x38 (R/W 32) USB Clock Register */
DECL|PMC_USB|member|__IO uint32_t PMC_USB; /**< (PMC Offset: 0x38) USB Clock Register */
DECL|PMC_WPMR_MASK|macro|PMC_WPMR_MASK
DECL|PMC_WPMR_Msk|macro|PMC_WPMR_Msk
DECL|PMC_WPMR_OFFSET|macro|PMC_WPMR_OFFSET
DECL|PMC_WPMR_Type|typedef|} PMC_WPMR_Type;
DECL|PMC_WPMR_WPEN_Msk|macro|PMC_WPMR_WPEN_Msk
DECL|PMC_WPMR_WPEN_Pos|macro|PMC_WPMR_WPEN_Pos
DECL|PMC_WPMR_WPEN|macro|PMC_WPMR_WPEN
DECL|PMC_WPMR_WPKEY_Msk|macro|PMC_WPMR_WPKEY_Msk
DECL|PMC_WPMR_WPKEY_PASSWD_Val|macro|PMC_WPMR_WPKEY_PASSWD_Val
DECL|PMC_WPMR_WPKEY_PASSWD|macro|PMC_WPMR_WPKEY_PASSWD
DECL|PMC_WPMR_WPKEY_Pos|macro|PMC_WPMR_WPKEY_Pos
DECL|PMC_WPMR_WPKEY|macro|PMC_WPMR_WPKEY
DECL|PMC_WPMR|member|__IO PMC_WPMR_Type PMC_WPMR; /**< Offset: 0xE4 (R/W 32) Write Protection Mode Register */
DECL|PMC_WPMR|member|__IO uint32_t PMC_WPMR; /**< (PMC Offset: 0xE4) Write Protection Mode Register */
DECL|PMC_WPSR_MASK|macro|PMC_WPSR_MASK
DECL|PMC_WPSR_Msk|macro|PMC_WPSR_Msk
DECL|PMC_WPSR_OFFSET|macro|PMC_WPSR_OFFSET
DECL|PMC_WPSR_Type|typedef|} PMC_WPSR_Type;
DECL|PMC_WPSR_WPVSRC_Msk|macro|PMC_WPSR_WPVSRC_Msk
DECL|PMC_WPSR_WPVSRC_Pos|macro|PMC_WPSR_WPVSRC_Pos
DECL|PMC_WPSR_WPVSRC|macro|PMC_WPSR_WPVSRC
DECL|PMC_WPSR_WPVS_Msk|macro|PMC_WPSR_WPVS_Msk
DECL|PMC_WPSR_WPVS_Pos|macro|PMC_WPSR_WPVS_Pos
DECL|PMC_WPSR_WPVS|macro|PMC_WPSR_WPVS
DECL|PMC_WPSR|member|__I PMC_WPSR_Type PMC_WPSR; /**< Offset: 0xE8 (R/ 32) Write Protection Status Register */
DECL|PMC_WPSR|member|__I uint32_t PMC_WPSR; /**< (PMC Offset: 0xE8) Write Protection Status Register */
DECL|PRES|member|uint32_t PRES:3; /**< bit: 4..6 Processor Clock Prescaler */
DECL|PRES|member|uint32_t PRES:8; /**< bit: 4..11 Programmable Clock Prescaler */
DECL|Pmc|typedef|} Pmc;
DECL|Pmc|typedef|} Pmc;
DECL|RCMEAS|member|uint32_t RCMEAS:1; /**< bit: 20 RC Oscillator Frequency Measure (write-only) */
DECL|REV_PMC|macro|REV_PMC
DECL|RTCAL|member|uint32_t RTCAL:1; /**< bit: 17 RTC Alarm Enable */
DECL|RTTAL|member|uint32_t RTTAL:1; /**< bit: 16 RTT Alarm Enable */
DECL|Reserved1|member|RoReg8 Reserved1[0x4];
DECL|Reserved1|member|__I uint32_t Reserved1[1];
DECL|Reserved2|member|RoReg8 Reserved2[0x4];
DECL|Reserved2|member|__I uint32_t Reserved2[1];
DECL|Reserved3|member|RoReg8 Reserved3[0x4];
DECL|Reserved3|member|__I uint32_t Reserved3[1];
DECL|Reserved4|member|RoReg8 Reserved4[0x4];
DECL|Reserved4|member|__I uint32_t Reserved4[1];
DECL|Reserved5|member|RoReg8 Reserved5[0x68];
DECL|Reserved5|member|__I uint32_t Reserved5[26];
DECL|Reserved6|member|RoReg8 Reserved6[0x14];
DECL|Reserved6|member|__I uint32_t Reserved6[5];
DECL|Reserved7|member|RoReg8 Reserved7[0xC];
DECL|Reserved7|member|__I uint32_t Reserved7[3];
DECL|SEL12|member|uint32_t SEL12:1; /**< bit: 23 Selection of RC Oscillator Calibration bits for 12 MHz */
DECL|SEL4|member|uint32_t SEL4:1; /**< bit: 7 Selection of RC Oscillator Calibration bits for 4 MHz */
DECL|SEL8|member|uint32_t SEL8:1; /**< bit: 15 Selection of RC Oscillator Calibration bits for 8 MHz */
DECL|UPLLCOUNT|member|uint32_t UPLLCOUNT:4; /**< bit: 20..23 UTMI PLL Start-up Time */
DECL|UPLLDIV2|member|uint32_t UPLLDIV2:1; /**< bit: 13 UPLL Divisor by 2 */
DECL|UPLLEN|member|uint32_t UPLLEN:1; /**< bit: 16 UTMI PLL Enable */
DECL|USBAL|member|uint32_t USBAL:1; /**< bit: 18 USB Alarm Enable */
DECL|USBCLK|member|uint32_t USBCLK:1; /**< bit: 5 Disable USB FS Clock */
DECL|USBCLK|member|uint32_t USBCLK:1; /**< bit: 5 Enable USB FS Clock */
DECL|USBCLK|member|uint32_t USBCLK:1; /**< bit: 5 USB FS Clock Status */
DECL|USBDIV|member|uint32_t USBDIV:4; /**< bit: 8..11 Divider for USB Clock */
DECL|USBS|member|uint32_t USBS:1; /**< bit: 0 USB Input Clock Selection */
DECL|WAITMODE|member|uint32_t WAITMODE:1; /**< bit: 2 Wait Mode Command (Write-only) */
DECL|WPEN|member|uint32_t WPEN:1; /**< bit: 0 Write Protection Enable */
DECL|WPKEY|member|uint32_t WPKEY:24; /**< bit: 8..31 Write Protection Key */
DECL|WPVSRC|member|uint32_t WPVSRC:16; /**< bit: 8..23 Write Protection Violation Source */
DECL|WPVS|member|uint32_t WPVS:1; /**< bit: 0 Write Protection Violation Status */
DECL|XT32KERR|member|uint32_t XT32KERR:1; /**< bit: 21 32.768 kHz Crystal Oscillator Error Interrupt Disable */
DECL|XT32KERR|member|uint32_t XT32KERR:1; /**< bit: 21 32.768 kHz Crystal Oscillator Error Interrupt Enable */
DECL|XT32KERR|member|uint32_t XT32KERR:1; /**< bit: 21 32.768 kHz Crystal Oscillator Error Interrupt Mask */
DECL|XT32KERR|member|uint32_t XT32KERR:1; /**< bit: 21 Slow Crystal Oscillator Error */
DECL|XT32KFME|member|uint32_t XT32KFME:1; /**< bit: 26 32.768 kHz Crystal Oscillator Frequency Monitoring Enable */
DECL|_SAME70_PMC_COMPONENT_H_|macro|_SAME70_PMC_COMPONENT_H_
DECL|_SAME70_PMC_COMPONENT_|macro|_SAME70_PMC_COMPONENT_
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :10; /**< bit: 22..31 Reserved */
DECL|uint32_t|member|uint32_t :10; /**< bit: 22..31 Reserved */
DECL|uint32_t|member|uint32_t :10; /**< bit: 22..31 Reserved */
DECL|uint32_t|member|uint32_t :10; /**< bit: 22..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 0..15 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :17; /**< bit: 15..31 Reserved */
DECL|uint32_t|member|uint32_t :17; /**< bit: 15..31 Reserved */
DECL|uint32_t|member|uint32_t :17; /**< bit: 15..31 Reserved */
DECL|uint32_t|member|uint32_t :17; /**< bit: 15..31 Reserved */
DECL|uint32_t|member|uint32_t :17; /**< bit: 15..31 Reserved */
DECL|uint32_t|member|uint32_t :17; /**< bit: 15..31 Reserved */
DECL|uint32_t|member|uint32_t :18; /**< bit: 14..31 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 11 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 19 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 2 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 2 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 2 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 2 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 3 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 4 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 4 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 4 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 4 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 4 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 4 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 4 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 6 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 6 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 6 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 6 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 6 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 6 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 6 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :20; /**< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :20; /**< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :21; /**< bit: 11..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 14..15 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 19..20 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 19..20 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 19..20 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 22..23 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 22..23 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 22..23 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 22..23 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 22..23 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 22..23 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 22..23 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 27..28 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 30..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 30..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 4..5 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 4..5 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 4..5 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 4..5 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 6..7 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 6..7 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 6..7 Reserved */
DECL|uint32_t|member|uint32_t :31; /**< bit: 1..31 Reserved */
DECL|uint32_t|member|uint32_t :31; /**< bit: 1..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 10..12 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 17..19 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 17..19 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 21..23 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 29..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 29..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 29..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 29..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 29..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 29..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 29..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 1..4 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 0..4 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 0..4 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 11..15 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 11..15 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 11..15 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 11..15 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 27..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 0..6 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 13..19 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 9..15 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 9..15 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 9..15 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 0..7 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 0..7 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 0..7 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
