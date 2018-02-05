DECL|ABFSR|member|__IOM uint32_t ABFSR; /*!< Offset: 0x2A8 (R/W) Auxiliary Bus Fault Status Register */
DECL|ACPR|member|__IOM uint32_t ACPR; /*!< Offset: 0x010 (R/W) Asynchronous Clock Prescaler Register */
DECL|ACTLR|member|__IOM uint32_t ACTLR; /*!< Offset: 0x008 (R/W) Auxiliary Control Register */
DECL|AFSR|member|__IOM uint32_t AFSR; /*!< Offset: 0x03C (R/W) Auxiliary Fault Status Register */
DECL|AHBPCR|member|__IOM uint32_t AHBPCR; /*!< Offset: 0x298 (R/W) AHBP Control Register */
DECL|AHBSCR|member|__IOM uint32_t AHBSCR; /*!< Offset: 0x2A0 (R/W) AHB Slave Control Register */
DECL|AIRCR|member|__IOM uint32_t AIRCR; /*!< Offset: 0x00C (R/W) Application Interrupt and Reset Control Register */
DECL|APSR_C_Msk|macro|APSR_C_Msk
DECL|APSR_C_Pos|macro|APSR_C_Pos
DECL|APSR_GE_Msk|macro|APSR_GE_Msk
DECL|APSR_GE_Pos|macro|APSR_GE_Pos
DECL|APSR_N_Msk|macro|APSR_N_Msk
DECL|APSR_N_Pos|macro|APSR_N_Pos
DECL|APSR_Q_Msk|macro|APSR_Q_Msk
DECL|APSR_Q_Pos|macro|APSR_Q_Pos
DECL|APSR_Type|typedef|} APSR_Type;
DECL|APSR_V_Msk|macro|APSR_V_Msk
DECL|APSR_V_Pos|macro|APSR_V_Pos
DECL|APSR_Z_Msk|macro|APSR_Z_Msk
DECL|APSR_Z_Pos|macro|APSR_Z_Pos
DECL|BFAR|member|__IOM uint32_t BFAR; /*!< Offset: 0x038 (R/W) BusFault Address Register */
DECL|CACR|member|__IOM uint32_t CACR; /*!< Offset: 0x29C (R/W) L1 Cache Control Register */
DECL|CALIB|member|__IM uint32_t CALIB; /*!< Offset: 0x00C (R/ ) SysTick Calibration Register */
DECL|CCR|member|__IOM uint32_t CCR; /*!< Offset: 0x014 (R/W) Configuration Control Register */
DECL|CCSIDR|member|__IM uint32_t CCSIDR; /*!< Offset: 0x080 (R/ ) Cache Size ID Register */
DECL|CFSR|member|__IOM uint32_t CFSR; /*!< Offset: 0x028 (R/W) Configurable Fault Status Register */
DECL|CID0|member|__IM uint32_t CID0; /*!< Offset: 0xFF0 (R/ ) ITM Component Identification Register #0 */
DECL|CID1|member|__IM uint32_t CID1; /*!< Offset: 0xFF4 (R/ ) ITM Component Identification Register #1 */
DECL|CID2|member|__IM uint32_t CID2; /*!< Offset: 0xFF8 (R/ ) ITM Component Identification Register #2 */
DECL|CID3|member|__IM uint32_t CID3; /*!< Offset: 0xFFC (R/ ) ITM Component Identification Register #3 */
DECL|CLAIMCLR|member|__IOM uint32_t CLAIMCLR; /*!< Offset: 0xFA4 (R/W) Claim tag clear */
DECL|CLAIMSET|member|__IOM uint32_t CLAIMSET; /*!< Offset: 0xFA0 (R/W) Claim tag set */
DECL|CLIDR|member|__IM uint32_t CLIDR; /*!< Offset: 0x078 (R/ ) Cache Level ID register */
DECL|CMSIS_NVIC_VIRTUAL_HEADER_FILE|macro|CMSIS_NVIC_VIRTUAL_HEADER_FILE
DECL|CMSIS_VECTAB_VIRTUAL_HEADER_FILE|macro|CMSIS_VECTAB_VIRTUAL_HEADER_FILE
DECL|COMP0|member|__IOM uint32_t COMP0; /*!< Offset: 0x020 (R/W) Comparator Register 0 */
DECL|COMP10|member|__IOM uint32_t COMP10; /*!< Offset: 0x0C0 (R/W) Comparator Register 10 */
DECL|COMP11|member|__IOM uint32_t COMP11; /*!< Offset: 0x0D0 (R/W) Comparator Register 11 */
DECL|COMP12|member|__IOM uint32_t COMP12; /*!< Offset: 0x0E0 (R/W) Comparator Register 12 */
DECL|COMP13|member|__IOM uint32_t COMP13; /*!< Offset: 0x0F0 (R/W) Comparator Register 13 */
DECL|COMP14|member|__IOM uint32_t COMP14; /*!< Offset: 0x100 (R/W) Comparator Register 14 */
DECL|COMP15|member|__IOM uint32_t COMP15; /*!< Offset: 0x110 (R/W) Comparator Register 15 */
DECL|COMP1|member|__IOM uint32_t COMP1; /*!< Offset: 0x030 (R/W) Comparator Register 1 */
DECL|COMP2|member|__IOM uint32_t COMP2; /*!< Offset: 0x040 (R/W) Comparator Register 2 */
DECL|COMP3|member|__IOM uint32_t COMP3; /*!< Offset: 0x050 (R/W) Comparator Register 3 */
DECL|COMP4|member|__IOM uint32_t COMP4; /*!< Offset: 0x060 (R/W) Comparator Register 4 */
DECL|COMP5|member|__IOM uint32_t COMP5; /*!< Offset: 0x070 (R/W) Comparator Register 5 */
DECL|COMP6|member|__IOM uint32_t COMP6; /*!< Offset: 0x080 (R/W) Comparator Register 6 */
DECL|COMP7|member|__IOM uint32_t COMP7; /*!< Offset: 0x090 (R/W) Comparator Register 7 */
DECL|COMP8|member|__IOM uint32_t COMP8; /*!< Offset: 0x0A0 (R/W) Comparator Register 8 */
DECL|COMP9|member|__IOM uint32_t COMP9; /*!< Offset: 0x0B0 (R/W) Comparator Register 9 */
DECL|CONTROL_FPCA_Msk|macro|CONTROL_FPCA_Msk
DECL|CONTROL_FPCA_Pos|macro|CONTROL_FPCA_Pos
DECL|CONTROL_SFPA_Msk|macro|CONTROL_SFPA_Msk
DECL|CONTROL_SFPA_Pos|macro|CONTROL_SFPA_Pos
DECL|CONTROL_SPSEL_Msk|macro|CONTROL_SPSEL_Msk
DECL|CONTROL_SPSEL_Pos|macro|CONTROL_SPSEL_Pos
DECL|CONTROL_Type|typedef|} CONTROL_Type;
DECL|CONTROL_nPRIV_Msk|macro|CONTROL_nPRIV_Msk
DECL|CONTROL_nPRIV_Pos|macro|CONTROL_nPRIV_Pos
DECL|CPACR|member|__IOM uint32_t CPACR; /*!< Offset: 0x088 (R/W) Coprocessor Access Control Register */
DECL|CPICNT|member|__IOM uint32_t CPICNT; /*!< Offset: 0x008 (R/W) CPI Count Register */
DECL|CPPWR|member|__IOM uint32_t CPPWR; /*!< Offset: 0x00C (R/W) Coprocessor Power Control Register */
DECL|CPUID|member|__IM uint32_t CPUID; /*!< Offset: 0x000 (R/ ) CPUID Base Register */
DECL|CSPSR|member|__IOM uint32_t CSPSR; /*!< Offset: 0x004 (R/W) Current Parallel Port Size Register */
DECL|CSSELR|member|__IOM uint32_t CSSELR; /*!< Offset: 0x084 (R/W) Cache Size Selection Register */
DECL|CTRL|member|__IOM uint32_t CTRL; /*!< Offset: 0x000 (R/W) Control Register */
DECL|CTRL|member|__IOM uint32_t CTRL; /*!< Offset: 0x000 (R/W) SAU Control Register */
DECL|CTRL|member|__IOM uint32_t CTRL; /*!< Offset: 0x000 (R/W) SysTick Control and Status Register */
DECL|CTRL|member|__IOM uint32_t CTRL; /*!< Offset: 0x004 (R/W) MPU Control Register */
DECL|CTR|member|__IM uint32_t CTR; /*!< Offset: 0x07C (R/ ) Cache Type register */
DECL|CYCCNT|member|__IOM uint32_t CYCCNT; /*!< Offset: 0x004 (R/W) Cycle Count Register */
DECL|CoreDebug_BASE_NS|macro|CoreDebug_BASE_NS
DECL|CoreDebug_BASE|macro|CoreDebug_BASE
DECL|CoreDebug_DAUTHCTRL_INTSPIDEN_Msk|macro|CoreDebug_DAUTHCTRL_INTSPIDEN_Msk
DECL|CoreDebug_DAUTHCTRL_INTSPIDEN_Pos|macro|CoreDebug_DAUTHCTRL_INTSPIDEN_Pos
DECL|CoreDebug_DAUTHCTRL_INTSPNIDEN_Msk|macro|CoreDebug_DAUTHCTRL_INTSPNIDEN_Msk
DECL|CoreDebug_DAUTHCTRL_INTSPNIDEN_Pos|macro|CoreDebug_DAUTHCTRL_INTSPNIDEN_Pos
DECL|CoreDebug_DAUTHCTRL_SPIDENSEL_Msk|macro|CoreDebug_DAUTHCTRL_SPIDENSEL_Msk
DECL|CoreDebug_DAUTHCTRL_SPIDENSEL_Pos|macro|CoreDebug_DAUTHCTRL_SPIDENSEL_Pos
DECL|CoreDebug_DAUTHCTRL_SPNIDENSEL_Msk|macro|CoreDebug_DAUTHCTRL_SPNIDENSEL_Msk
DECL|CoreDebug_DAUTHCTRL_SPNIDENSEL_Pos|macro|CoreDebug_DAUTHCTRL_SPNIDENSEL_Pos
DECL|CoreDebug_DCRSR_REGSEL_Msk|macro|CoreDebug_DCRSR_REGSEL_Msk
DECL|CoreDebug_DCRSR_REGSEL_Pos|macro|CoreDebug_DCRSR_REGSEL_Pos
DECL|CoreDebug_DCRSR_REGWnR_Msk|macro|CoreDebug_DCRSR_REGWnR_Msk
DECL|CoreDebug_DCRSR_REGWnR_Pos|macro|CoreDebug_DCRSR_REGWnR_Pos
DECL|CoreDebug_DEMCR_MON_EN_Msk|macro|CoreDebug_DEMCR_MON_EN_Msk
DECL|CoreDebug_DEMCR_MON_EN_Pos|macro|CoreDebug_DEMCR_MON_EN_Pos
DECL|CoreDebug_DEMCR_MON_PEND_Msk|macro|CoreDebug_DEMCR_MON_PEND_Msk
DECL|CoreDebug_DEMCR_MON_PEND_Pos|macro|CoreDebug_DEMCR_MON_PEND_Pos
DECL|CoreDebug_DEMCR_MON_REQ_Msk|macro|CoreDebug_DEMCR_MON_REQ_Msk
DECL|CoreDebug_DEMCR_MON_REQ_Pos|macro|CoreDebug_DEMCR_MON_REQ_Pos
DECL|CoreDebug_DEMCR_MON_STEP_Msk|macro|CoreDebug_DEMCR_MON_STEP_Msk
DECL|CoreDebug_DEMCR_MON_STEP_Pos|macro|CoreDebug_DEMCR_MON_STEP_Pos
DECL|CoreDebug_DEMCR_TRCENA_Msk|macro|CoreDebug_DEMCR_TRCENA_Msk
DECL|CoreDebug_DEMCR_TRCENA_Pos|macro|CoreDebug_DEMCR_TRCENA_Pos
DECL|CoreDebug_DEMCR_VC_BUSERR_Msk|macro|CoreDebug_DEMCR_VC_BUSERR_Msk
DECL|CoreDebug_DEMCR_VC_BUSERR_Pos|macro|CoreDebug_DEMCR_VC_BUSERR_Pos
DECL|CoreDebug_DEMCR_VC_CHKERR_Msk|macro|CoreDebug_DEMCR_VC_CHKERR_Msk
DECL|CoreDebug_DEMCR_VC_CHKERR_Pos|macro|CoreDebug_DEMCR_VC_CHKERR_Pos
DECL|CoreDebug_DEMCR_VC_CORERESET_Msk|macro|CoreDebug_DEMCR_VC_CORERESET_Msk
DECL|CoreDebug_DEMCR_VC_CORERESET_Pos|macro|CoreDebug_DEMCR_VC_CORERESET_Pos
DECL|CoreDebug_DEMCR_VC_HARDERR_Msk|macro|CoreDebug_DEMCR_VC_HARDERR_Msk
DECL|CoreDebug_DEMCR_VC_HARDERR_Pos|macro|CoreDebug_DEMCR_VC_HARDERR_Pos
DECL|CoreDebug_DEMCR_VC_INTERR_Msk|macro|CoreDebug_DEMCR_VC_INTERR_Msk
DECL|CoreDebug_DEMCR_VC_INTERR_Pos|macro|CoreDebug_DEMCR_VC_INTERR_Pos
DECL|CoreDebug_DEMCR_VC_MMERR_Msk|macro|CoreDebug_DEMCR_VC_MMERR_Msk
DECL|CoreDebug_DEMCR_VC_MMERR_Pos|macro|CoreDebug_DEMCR_VC_MMERR_Pos
DECL|CoreDebug_DEMCR_VC_NOCPERR_Msk|macro|CoreDebug_DEMCR_VC_NOCPERR_Msk
DECL|CoreDebug_DEMCR_VC_NOCPERR_Pos|macro|CoreDebug_DEMCR_VC_NOCPERR_Pos
DECL|CoreDebug_DEMCR_VC_STATERR_Msk|macro|CoreDebug_DEMCR_VC_STATERR_Msk
DECL|CoreDebug_DEMCR_VC_STATERR_Pos|macro|CoreDebug_DEMCR_VC_STATERR_Pos
DECL|CoreDebug_DHCSR_C_DEBUGEN_Msk|macro|CoreDebug_DHCSR_C_DEBUGEN_Msk
DECL|CoreDebug_DHCSR_C_DEBUGEN_Pos|macro|CoreDebug_DHCSR_C_DEBUGEN_Pos
DECL|CoreDebug_DHCSR_C_HALT_Msk|macro|CoreDebug_DHCSR_C_HALT_Msk
DECL|CoreDebug_DHCSR_C_HALT_Pos|macro|CoreDebug_DHCSR_C_HALT_Pos
DECL|CoreDebug_DHCSR_C_MASKINTS_Msk|macro|CoreDebug_DHCSR_C_MASKINTS_Msk
DECL|CoreDebug_DHCSR_C_MASKINTS_Pos|macro|CoreDebug_DHCSR_C_MASKINTS_Pos
DECL|CoreDebug_DHCSR_C_SNAPSTALL_Msk|macro|CoreDebug_DHCSR_C_SNAPSTALL_Msk
DECL|CoreDebug_DHCSR_C_SNAPSTALL_Pos|macro|CoreDebug_DHCSR_C_SNAPSTALL_Pos
DECL|CoreDebug_DHCSR_C_STEP_Msk|macro|CoreDebug_DHCSR_C_STEP_Msk
DECL|CoreDebug_DHCSR_C_STEP_Pos|macro|CoreDebug_DHCSR_C_STEP_Pos
DECL|CoreDebug_DHCSR_DBGKEY_Msk|macro|CoreDebug_DHCSR_DBGKEY_Msk
DECL|CoreDebug_DHCSR_DBGKEY_Pos|macro|CoreDebug_DHCSR_DBGKEY_Pos
DECL|CoreDebug_DHCSR_S_HALT_Msk|macro|CoreDebug_DHCSR_S_HALT_Msk
DECL|CoreDebug_DHCSR_S_HALT_Pos|macro|CoreDebug_DHCSR_S_HALT_Pos
DECL|CoreDebug_DHCSR_S_LOCKUP_Msk|macro|CoreDebug_DHCSR_S_LOCKUP_Msk
DECL|CoreDebug_DHCSR_S_LOCKUP_Pos|macro|CoreDebug_DHCSR_S_LOCKUP_Pos
DECL|CoreDebug_DHCSR_S_REGRDY_Msk|macro|CoreDebug_DHCSR_S_REGRDY_Msk
DECL|CoreDebug_DHCSR_S_REGRDY_Pos|macro|CoreDebug_DHCSR_S_REGRDY_Pos
DECL|CoreDebug_DHCSR_S_RESET_ST_Msk|macro|CoreDebug_DHCSR_S_RESET_ST_Msk
DECL|CoreDebug_DHCSR_S_RESET_ST_Pos|macro|CoreDebug_DHCSR_S_RESET_ST_Pos
DECL|CoreDebug_DHCSR_S_RESTART_ST_Msk|macro|CoreDebug_DHCSR_S_RESTART_ST_Msk
DECL|CoreDebug_DHCSR_S_RESTART_ST_Pos|macro|CoreDebug_DHCSR_S_RESTART_ST_Pos
DECL|CoreDebug_DHCSR_S_RETIRE_ST_Msk|macro|CoreDebug_DHCSR_S_RETIRE_ST_Msk
DECL|CoreDebug_DHCSR_S_RETIRE_ST_Pos|macro|CoreDebug_DHCSR_S_RETIRE_ST_Pos
DECL|CoreDebug_DHCSR_S_SLEEP_Msk|macro|CoreDebug_DHCSR_S_SLEEP_Msk
DECL|CoreDebug_DHCSR_S_SLEEP_Pos|macro|CoreDebug_DHCSR_S_SLEEP_Pos
DECL|CoreDebug_DSCSR_CDS_Msk|macro|CoreDebug_DSCSR_CDS_Msk
DECL|CoreDebug_DSCSR_CDS_Pos|macro|CoreDebug_DSCSR_CDS_Pos
DECL|CoreDebug_DSCSR_SBRSELEN_Msk|macro|CoreDebug_DSCSR_SBRSELEN_Msk
DECL|CoreDebug_DSCSR_SBRSELEN_Pos|macro|CoreDebug_DSCSR_SBRSELEN_Pos
DECL|CoreDebug_DSCSR_SBRSEL_Msk|macro|CoreDebug_DSCSR_SBRSEL_Msk
DECL|CoreDebug_DSCSR_SBRSEL_Pos|macro|CoreDebug_DSCSR_SBRSEL_Pos
DECL|CoreDebug_NS|macro|CoreDebug_NS
DECL|CoreDebug_Type|typedef|} CoreDebug_Type;
DECL|CoreDebug|macro|CoreDebug
DECL|C|member|uint32_t C:1; /*!< bit: 29 Carry condition code flag */
DECL|C|member|uint32_t C:1; /*!< bit: 29 Carry condition code flag */
DECL|DAUTHCTRL|member|__IOM uint32_t DAUTHCTRL; /*!< Offset: 0x014 (R/W) Debug Authentication Control Register */
DECL|DCCIMVAC|member|__OM uint32_t DCCIMVAC; /*!< Offset: 0x270 ( /W) D-Cache Clean and Invalidate by MVA to PoC */
DECL|DCCISW|member|__OM uint32_t DCCISW; /*!< Offset: 0x274 ( /W) D-Cache Clean and Invalidate by Set-way */
DECL|DCCMVAC|member|__OM uint32_t DCCMVAC; /*!< Offset: 0x268 ( /W) D-Cache Clean by MVA to PoC */
DECL|DCCMVAU|member|__OM uint32_t DCCMVAU; /*!< Offset: 0x264 ( /W) D-Cache Clean by MVA to PoU */
DECL|DCCSW|member|__OM uint32_t DCCSW; /*!< Offset: 0x26C ( /W) D-Cache Clean by Set-way */
DECL|DCIMVAC|member|__OM uint32_t DCIMVAC; /*!< Offset: 0x25C ( /W) D-Cache Invalidate by MVA to PoC */
DECL|DCISW|member|__OM uint32_t DCISW; /*!< Offset: 0x260 ( /W) D-Cache Invalidate by Set-way */
DECL|DCRDR|member|__IOM uint32_t DCRDR; /*!< Offset: 0x008 (R/W) Debug Core Register Data Register */
DECL|DCRSR|member|__OM uint32_t DCRSR; /*!< Offset: 0x004 ( /W) Debug Core Register Selector Register */
DECL|DEMCR|member|__IOM uint32_t DEMCR; /*!< Offset: 0x00C (R/W) Debug Exception and Monitor Control Register */
DECL|DEVARCH|member|__IM uint32_t DEVARCH; /*!< Offset: 0xFBC (R/ ) Device Architecture Register */
DECL|DEVARCH|member|__IM uint32_t DEVARCH; /*!< Offset: 0xFBC (R/ ) ITM Device Architecture Register */
DECL|DEVID|member|__IM uint32_t DEVID; /*!< Offset: 0xFC8 (R/ ) TPIU_DEVID */
DECL|DEVTYPE|member|__IM uint32_t DEVTYPE; /*!< Offset: 0xFCC (R/ ) TPIU_DEVTYPE */
DECL|DFSR|member|__IOM uint32_t DFSR; /*!< Offset: 0x030 (R/W) Debug Fault Status Register */
DECL|DHCSR|member|__IOM uint32_t DHCSR; /*!< Offset: 0x000 (R/W) Debug Halting Control and Status Register */
DECL|DSCSR|member|__IOM uint32_t DSCSR; /*!< Offset: 0x018 (R/W) Debug Security Control and Status Register */
DECL|DTCMCR|member|__IOM uint32_t DTCMCR; /*!< Offset: 0x294 (R/W) Data Tightly-Coupled Memory Control Registers */
DECL|DWT_BASE|macro|DWT_BASE
DECL|DWT_CPICNT_CPICNT_Msk|macro|DWT_CPICNT_CPICNT_Msk
DECL|DWT_CPICNT_CPICNT_Pos|macro|DWT_CPICNT_CPICNT_Pos
DECL|DWT_CTRL_CPIEVTENA_Msk|macro|DWT_CTRL_CPIEVTENA_Msk
DECL|DWT_CTRL_CPIEVTENA_Pos|macro|DWT_CTRL_CPIEVTENA_Pos
DECL|DWT_CTRL_CYCCNTENA_Msk|macro|DWT_CTRL_CYCCNTENA_Msk
DECL|DWT_CTRL_CYCCNTENA_Pos|macro|DWT_CTRL_CYCCNTENA_Pos
DECL|DWT_CTRL_CYCDISS_Msk|macro|DWT_CTRL_CYCDISS_Msk
DECL|DWT_CTRL_CYCDISS_Pos|macro|DWT_CTRL_CYCDISS_Pos
DECL|DWT_CTRL_CYCEVTENA_Msk|macro|DWT_CTRL_CYCEVTENA_Msk
DECL|DWT_CTRL_CYCEVTENA_Pos|macro|DWT_CTRL_CYCEVTENA_Pos
DECL|DWT_CTRL_CYCTAP_Msk|macro|DWT_CTRL_CYCTAP_Msk
DECL|DWT_CTRL_CYCTAP_Pos|macro|DWT_CTRL_CYCTAP_Pos
DECL|DWT_CTRL_EXCEVTENA_Msk|macro|DWT_CTRL_EXCEVTENA_Msk
DECL|DWT_CTRL_EXCEVTENA_Pos|macro|DWT_CTRL_EXCEVTENA_Pos
DECL|DWT_CTRL_EXCTRCENA_Msk|macro|DWT_CTRL_EXCTRCENA_Msk
DECL|DWT_CTRL_EXCTRCENA_Pos|macro|DWT_CTRL_EXCTRCENA_Pos
DECL|DWT_CTRL_FOLDEVTENA_Msk|macro|DWT_CTRL_FOLDEVTENA_Msk
DECL|DWT_CTRL_FOLDEVTENA_Pos|macro|DWT_CTRL_FOLDEVTENA_Pos
DECL|DWT_CTRL_LSUEVTENA_Msk|macro|DWT_CTRL_LSUEVTENA_Msk
DECL|DWT_CTRL_LSUEVTENA_Pos|macro|DWT_CTRL_LSUEVTENA_Pos
DECL|DWT_CTRL_NOCYCCNT_Msk|macro|DWT_CTRL_NOCYCCNT_Msk
DECL|DWT_CTRL_NOCYCCNT_Pos|macro|DWT_CTRL_NOCYCCNT_Pos
DECL|DWT_CTRL_NOEXTTRIG_Msk|macro|DWT_CTRL_NOEXTTRIG_Msk
DECL|DWT_CTRL_NOEXTTRIG_Pos|macro|DWT_CTRL_NOEXTTRIG_Pos
DECL|DWT_CTRL_NOPRFCNT_Msk|macro|DWT_CTRL_NOPRFCNT_Msk
DECL|DWT_CTRL_NOPRFCNT_Pos|macro|DWT_CTRL_NOPRFCNT_Pos
DECL|DWT_CTRL_NOTRCPKT_Msk|macro|DWT_CTRL_NOTRCPKT_Msk
DECL|DWT_CTRL_NOTRCPKT_Pos|macro|DWT_CTRL_NOTRCPKT_Pos
DECL|DWT_CTRL_NUMCOMP_Msk|macro|DWT_CTRL_NUMCOMP_Msk
DECL|DWT_CTRL_NUMCOMP_Pos|macro|DWT_CTRL_NUMCOMP_Pos
DECL|DWT_CTRL_PCSAMPLENA_Msk|macro|DWT_CTRL_PCSAMPLENA_Msk
DECL|DWT_CTRL_PCSAMPLENA_Pos|macro|DWT_CTRL_PCSAMPLENA_Pos
DECL|DWT_CTRL_POSTINIT_Msk|macro|DWT_CTRL_POSTINIT_Msk
DECL|DWT_CTRL_POSTINIT_Pos|macro|DWT_CTRL_POSTINIT_Pos
DECL|DWT_CTRL_POSTPRESET_Msk|macro|DWT_CTRL_POSTPRESET_Msk
DECL|DWT_CTRL_POSTPRESET_Pos|macro|DWT_CTRL_POSTPRESET_Pos
DECL|DWT_CTRL_SLEEPEVTENA_Msk|macro|DWT_CTRL_SLEEPEVTENA_Msk
DECL|DWT_CTRL_SLEEPEVTENA_Pos|macro|DWT_CTRL_SLEEPEVTENA_Pos
DECL|DWT_CTRL_SYNCTAP_Msk|macro|DWT_CTRL_SYNCTAP_Msk
DECL|DWT_CTRL_SYNCTAP_Pos|macro|DWT_CTRL_SYNCTAP_Pos
DECL|DWT_EXCCNT_EXCCNT_Msk|macro|DWT_EXCCNT_EXCCNT_Msk
DECL|DWT_EXCCNT_EXCCNT_Pos|macro|DWT_EXCCNT_EXCCNT_Pos
DECL|DWT_FOLDCNT_FOLDCNT_Msk|macro|DWT_FOLDCNT_FOLDCNT_Msk
DECL|DWT_FOLDCNT_FOLDCNT_Pos|macro|DWT_FOLDCNT_FOLDCNT_Pos
DECL|DWT_FUNCTION_ACTION_Msk|macro|DWT_FUNCTION_ACTION_Msk
DECL|DWT_FUNCTION_ACTION_Pos|macro|DWT_FUNCTION_ACTION_Pos
DECL|DWT_FUNCTION_DATAVSIZE_Msk|macro|DWT_FUNCTION_DATAVSIZE_Msk
DECL|DWT_FUNCTION_DATAVSIZE_Pos|macro|DWT_FUNCTION_DATAVSIZE_Pos
DECL|DWT_FUNCTION_ID_Msk|macro|DWT_FUNCTION_ID_Msk
DECL|DWT_FUNCTION_ID_Pos|macro|DWT_FUNCTION_ID_Pos
DECL|DWT_FUNCTION_MATCHED_Msk|macro|DWT_FUNCTION_MATCHED_Msk
DECL|DWT_FUNCTION_MATCHED_Pos|macro|DWT_FUNCTION_MATCHED_Pos
DECL|DWT_FUNCTION_MATCH_Msk|macro|DWT_FUNCTION_MATCH_Msk
DECL|DWT_FUNCTION_MATCH_Pos|macro|DWT_FUNCTION_MATCH_Pos
DECL|DWT_LSUCNT_LSUCNT_Msk|macro|DWT_LSUCNT_LSUCNT_Msk
DECL|DWT_LSUCNT_LSUCNT_Pos|macro|DWT_LSUCNT_LSUCNT_Pos
DECL|DWT_SLEEPCNT_SLEEPCNT_Msk|macro|DWT_SLEEPCNT_SLEEPCNT_Msk
DECL|DWT_SLEEPCNT_SLEEPCNT_Pos|macro|DWT_SLEEPCNT_SLEEPCNT_Pos
DECL|DWT_Type|typedef|} DWT_Type;
DECL|DWT|macro|DWT
DECL|EXCCNT|member|__IOM uint32_t EXCCNT; /*!< Offset: 0x00C (R/W) Exception Overhead Count Register */
DECL|FFCR|member|__IOM uint32_t FFCR; /*!< Offset: 0x304 (R/W) Formatter and Flush Control Register */
DECL|FFSR|member|__IM uint32_t FFSR; /*!< Offset: 0x300 (R/ ) Formatter and Flush Status Register */
DECL|FIFO0|member|__IM uint32_t FIFO0; /*!< Offset: 0xEEC (R/ ) Integration ETM Data */
DECL|FIFO1|member|__IM uint32_t FIFO1; /*!< Offset: 0xEFC (R/ ) Integration ITM Data */
DECL|FOLDCNT|member|__IOM uint32_t FOLDCNT; /*!< Offset: 0x018 (R/W) Folded-instruction Count Register */
DECL|FPCAR|member|__IOM uint32_t FPCAR; /*!< Offset: 0x008 (R/W) Floating-Point Context Address Register */
DECL|FPCA|member|uint32_t FPCA:1; /*!< bit: 2 Floating-point context active */
DECL|FPCCR|member|__IOM uint32_t FPCCR; /*!< Offset: 0x004 (R/W) Floating-Point Context Control Register */
DECL|FPDSCR|member|__IOM uint32_t FPDSCR; /*!< Offset: 0x00C (R/W) Floating-Point Default Status Control Register */
DECL|FPU_BASE_NS|macro|FPU_BASE_NS
DECL|FPU_BASE|macro|FPU_BASE
DECL|FPU_FPCAR_ADDRESS_Msk|macro|FPU_FPCAR_ADDRESS_Msk
DECL|FPU_FPCAR_ADDRESS_Pos|macro|FPU_FPCAR_ADDRESS_Pos
DECL|FPU_FPCCR_ASPEN_Msk|macro|FPU_FPCCR_ASPEN_Msk
DECL|FPU_FPCCR_ASPEN_Pos|macro|FPU_FPCCR_ASPEN_Pos
DECL|FPU_FPCCR_BFRDY_Msk|macro|FPU_FPCCR_BFRDY_Msk
DECL|FPU_FPCCR_BFRDY_Pos|macro|FPU_FPCCR_BFRDY_Pos
DECL|FPU_FPCCR_CLRONRETS_Msk|macro|FPU_FPCCR_CLRONRETS_Msk
DECL|FPU_FPCCR_CLRONRETS_Pos|macro|FPU_FPCCR_CLRONRETS_Pos
DECL|FPU_FPCCR_CLRONRET_Msk|macro|FPU_FPCCR_CLRONRET_Msk
DECL|FPU_FPCCR_CLRONRET_Pos|macro|FPU_FPCCR_CLRONRET_Pos
DECL|FPU_FPCCR_HFRDY_Msk|macro|FPU_FPCCR_HFRDY_Msk
DECL|FPU_FPCCR_HFRDY_Pos|macro|FPU_FPCCR_HFRDY_Pos
DECL|FPU_FPCCR_LSPACT_Msk|macro|FPU_FPCCR_LSPACT_Msk
DECL|FPU_FPCCR_LSPACT_Pos|macro|FPU_FPCCR_LSPACT_Pos
DECL|FPU_FPCCR_LSPENS_Msk|macro|FPU_FPCCR_LSPENS_Msk
DECL|FPU_FPCCR_LSPENS_Pos|macro|FPU_FPCCR_LSPENS_Pos
DECL|FPU_FPCCR_LSPEN_Msk|macro|FPU_FPCCR_LSPEN_Msk
DECL|FPU_FPCCR_LSPEN_Pos|macro|FPU_FPCCR_LSPEN_Pos
DECL|FPU_FPCCR_MMRDY_Msk|macro|FPU_FPCCR_MMRDY_Msk
DECL|FPU_FPCCR_MMRDY_Pos|macro|FPU_FPCCR_MMRDY_Pos
DECL|FPU_FPCCR_MONRDY_Msk|macro|FPU_FPCCR_MONRDY_Msk
DECL|FPU_FPCCR_MONRDY_Pos|macro|FPU_FPCCR_MONRDY_Pos
DECL|FPU_FPCCR_SFRDY_Msk|macro|FPU_FPCCR_SFRDY_Msk
DECL|FPU_FPCCR_SFRDY_Pos|macro|FPU_FPCCR_SFRDY_Pos
DECL|FPU_FPCCR_SPLIMVIOL_Msk|macro|FPU_FPCCR_SPLIMVIOL_Msk
DECL|FPU_FPCCR_SPLIMVIOL_Pos|macro|FPU_FPCCR_SPLIMVIOL_Pos
DECL|FPU_FPCCR_S_Msk|macro|FPU_FPCCR_S_Msk
DECL|FPU_FPCCR_S_Pos|macro|FPU_FPCCR_S_Pos
DECL|FPU_FPCCR_THREAD_Msk|macro|FPU_FPCCR_THREAD_Msk
DECL|FPU_FPCCR_THREAD_Pos|macro|FPU_FPCCR_THREAD_Pos
DECL|FPU_FPCCR_TS_Msk|macro|FPU_FPCCR_TS_Msk
DECL|FPU_FPCCR_TS_Pos|macro|FPU_FPCCR_TS_Pos
DECL|FPU_FPCCR_UFRDY_Msk|macro|FPU_FPCCR_UFRDY_Msk
DECL|FPU_FPCCR_UFRDY_Pos|macro|FPU_FPCCR_UFRDY_Pos
DECL|FPU_FPCCR_USER_Msk|macro|FPU_FPCCR_USER_Msk
DECL|FPU_FPCCR_USER_Pos|macro|FPU_FPCCR_USER_Pos
DECL|FPU_FPDSCR_AHP_Msk|macro|FPU_FPDSCR_AHP_Msk
DECL|FPU_FPDSCR_AHP_Pos|macro|FPU_FPDSCR_AHP_Pos
DECL|FPU_FPDSCR_DN_Msk|macro|FPU_FPDSCR_DN_Msk
DECL|FPU_FPDSCR_DN_Pos|macro|FPU_FPDSCR_DN_Pos
DECL|FPU_FPDSCR_FZ_Msk|macro|FPU_FPDSCR_FZ_Msk
DECL|FPU_FPDSCR_FZ_Pos|macro|FPU_FPDSCR_FZ_Pos
DECL|FPU_FPDSCR_RMode_Msk|macro|FPU_FPDSCR_RMode_Msk
DECL|FPU_FPDSCR_RMode_Pos|macro|FPU_FPDSCR_RMode_Pos
DECL|FPU_MVFR0_A_SIMD_registers_Msk|macro|FPU_MVFR0_A_SIMD_registers_Msk
DECL|FPU_MVFR0_A_SIMD_registers_Pos|macro|FPU_MVFR0_A_SIMD_registers_Pos
DECL|FPU_MVFR0_Divide_Msk|macro|FPU_MVFR0_Divide_Msk
DECL|FPU_MVFR0_Divide_Pos|macro|FPU_MVFR0_Divide_Pos
DECL|FPU_MVFR0_Double_precision_Msk|macro|FPU_MVFR0_Double_precision_Msk
DECL|FPU_MVFR0_Double_precision_Pos|macro|FPU_MVFR0_Double_precision_Pos
DECL|FPU_MVFR0_FP_excep_trapping_Msk|macro|FPU_MVFR0_FP_excep_trapping_Msk
DECL|FPU_MVFR0_FP_excep_trapping_Pos|macro|FPU_MVFR0_FP_excep_trapping_Pos
DECL|FPU_MVFR0_FP_rounding_modes_Msk|macro|FPU_MVFR0_FP_rounding_modes_Msk
DECL|FPU_MVFR0_FP_rounding_modes_Pos|macro|FPU_MVFR0_FP_rounding_modes_Pos
DECL|FPU_MVFR0_Short_vectors_Msk|macro|FPU_MVFR0_Short_vectors_Msk
DECL|FPU_MVFR0_Short_vectors_Pos|macro|FPU_MVFR0_Short_vectors_Pos
DECL|FPU_MVFR0_Single_precision_Msk|macro|FPU_MVFR0_Single_precision_Msk
DECL|FPU_MVFR0_Single_precision_Pos|macro|FPU_MVFR0_Single_precision_Pos
DECL|FPU_MVFR0_Square_root_Msk|macro|FPU_MVFR0_Square_root_Msk
DECL|FPU_MVFR0_Square_root_Pos|macro|FPU_MVFR0_Square_root_Pos
DECL|FPU_MVFR1_D_NaN_mode_Msk|macro|FPU_MVFR1_D_NaN_mode_Msk
DECL|FPU_MVFR1_D_NaN_mode_Pos|macro|FPU_MVFR1_D_NaN_mode_Pos
DECL|FPU_MVFR1_FP_HPFP_Msk|macro|FPU_MVFR1_FP_HPFP_Msk
DECL|FPU_MVFR1_FP_HPFP_Pos|macro|FPU_MVFR1_FP_HPFP_Pos
DECL|FPU_MVFR1_FP_fused_MAC_Msk|macro|FPU_MVFR1_FP_fused_MAC_Msk
DECL|FPU_MVFR1_FP_fused_MAC_Pos|macro|FPU_MVFR1_FP_fused_MAC_Pos
DECL|FPU_MVFR1_FtZ_mode_Msk|macro|FPU_MVFR1_FtZ_mode_Msk
DECL|FPU_MVFR1_FtZ_mode_Pos|macro|FPU_MVFR1_FtZ_mode_Pos
DECL|FPU_NS|macro|FPU_NS
DECL|FPU_Type|typedef|} FPU_Type;
DECL|FPU|macro|FPU
DECL|FSCR|member|__IM uint32_t FSCR; /*!< Offset: 0x308 (R/ ) Formatter Synchronization Counter Register */
DECL|FUNCTION0|member|__IOM uint32_t FUNCTION0; /*!< Offset: 0x028 (R/W) Function Register 0 */
DECL|FUNCTION10|member|__IOM uint32_t FUNCTION10; /*!< Offset: 0x0C8 (R/W) Function Register 10 */
DECL|FUNCTION11|member|__IOM uint32_t FUNCTION11; /*!< Offset: 0x0D8 (R/W) Function Register 11 */
DECL|FUNCTION12|member|__IOM uint32_t FUNCTION12; /*!< Offset: 0x0E8 (R/W) Function Register 12 */
DECL|FUNCTION13|member|__IOM uint32_t FUNCTION13; /*!< Offset: 0x0F8 (R/W) Function Register 13 */
DECL|FUNCTION14|member|__IOM uint32_t FUNCTION14; /*!< Offset: 0x108 (R/W) Function Register 14 */
DECL|FUNCTION15|member|__IOM uint32_t FUNCTION15; /*!< Offset: 0x118 (R/W) Function Register 15 */
DECL|FUNCTION1|member|__IOM uint32_t FUNCTION1; /*!< Offset: 0x038 (R/W) Function Register 1 */
DECL|FUNCTION2|member|__IOM uint32_t FUNCTION2; /*!< Offset: 0x048 (R/W) Function Register 2 */
DECL|FUNCTION3|member|__IOM uint32_t FUNCTION3; /*!< Offset: 0x058 (R/W) Function Register 3 */
DECL|FUNCTION4|member|__IOM uint32_t FUNCTION4; /*!< Offset: 0x068 (R/W) Function Register 4 */
DECL|FUNCTION5|member|__IOM uint32_t FUNCTION5; /*!< Offset: 0x078 (R/W) Function Register 5 */
DECL|FUNCTION6|member|__IOM uint32_t FUNCTION6; /*!< Offset: 0x088 (R/W) Function Register 6 */
DECL|FUNCTION7|member|__IOM uint32_t FUNCTION7; /*!< Offset: 0x098 (R/W) Function Register 7 */
DECL|FUNCTION8|member|__IOM uint32_t FUNCTION8; /*!< Offset: 0x0A8 (R/W) Function Register 8 */
DECL|FUNCTION9|member|__IOM uint32_t FUNCTION9; /*!< Offset: 0x0B8 (R/W) Function Register 9 */
DECL|GE|member|uint32_t GE:4; /*!< bit: 16..19 Greater than or Equal flags */
DECL|GE|member|uint32_t GE:4; /*!< bit: 16..19 Greater than or Equal flags */
DECL|HFSR|member|__IOM uint32_t HFSR; /*!< Offset: 0x02C (R/W) HardFault Status Register */
DECL|IABR|member|__IOM uint32_t IABR[16U]; /*!< Offset: 0x200 (R/W) Interrupt Active bit Register */
DECL|ICER|member|__IOM uint32_t ICER[16U]; /*!< Offset: 0x080 (R/W) Interrupt Clear Enable Register */
DECL|ICIALLU|member|__OM uint32_t ICIALLU; /*!< Offset: 0x250 ( /W) I-Cache Invalidate All to PoU */
DECL|ICIMVAU|member|__OM uint32_t ICIMVAU; /*!< Offset: 0x258 ( /W) I-Cache Invalidate by MVA to PoU */
DECL|ICPR|member|__IOM uint32_t ICPR[16U]; /*!< Offset: 0x180 (R/W) Interrupt Clear Pending Register */
DECL|ICSR|member|__IOM uint32_t ICSR; /*!< Offset: 0x004 (R/W) Interrupt Control and State Register */
DECL|ICTR|member|__IM uint32_t ICTR; /*!< Offset: 0x004 (R/ ) Interrupt Controller Type Register */
DECL|ID_ADR|member|__IM uint32_t ID_ADR; /*!< Offset: 0x04C (R/ ) Auxiliary Feature Register */
DECL|ID_DFR|member|__IM uint32_t ID_DFR; /*!< Offset: 0x048 (R/ ) Debug Feature Register */
DECL|ID_ISAR|member|__IM uint32_t ID_ISAR[6U]; /*!< Offset: 0x060 (R/ ) Instruction Set Attributes Register */
DECL|ID_MMFR|member|__IM uint32_t ID_MMFR[4U]; /*!< Offset: 0x050 (R/ ) Memory Model Feature Register */
DECL|ID_PFR|member|__IM uint32_t ID_PFR[2U]; /*!< Offset: 0x040 (R/ ) Processor Feature Register */
DECL|IMCR|member|__IOM uint32_t IMCR; /*!< Offset: 0xF00 (R/W) ITM Integration Mode Control Register */
DECL|IPR|member|__IOM uint8_t IPR[496U]; /*!< Offset: 0x300 (R/W) Interrupt Priority Register (8Bit wide) */
DECL|IPSR_ISR_Msk|macro|IPSR_ISR_Msk
DECL|IPSR_ISR_Pos|macro|IPSR_ISR_Pos
DECL|IPSR_Type|typedef|} IPSR_Type;
DECL|IRR|member|__IM uint32_t IRR; /*!< Offset: 0xEFC (R/ ) ITM Integration Read Register */
DECL|ISER|member|__IOM uint32_t ISER[16U]; /*!< Offset: 0x000 (R/W) Interrupt Set Enable Register */
DECL|ISPR|member|__IOM uint32_t ISPR[16U]; /*!< Offset: 0x100 (R/W) Interrupt Set Pending Register */
DECL|ISR|member|uint32_t ISR:9; /*!< bit: 0.. 8 Exception number */
DECL|ISR|member|uint32_t ISR:9; /*!< bit: 0.. 8 Exception number */
DECL|ITATBCTR0|member|__IM uint32_t ITATBCTR0; /*!< Offset: 0xEF8 (R/ ) ITATBCTR0 */
DECL|ITATBCTR2|member|__IM uint32_t ITATBCTR2; /*!< Offset: 0xEF0 (R/ ) ITATBCTR2 */
DECL|ITCMCR|member|__IOM uint32_t ITCMCR; /*!< Offset: 0x290 (R/W) Instruction Tightly-Coupled Memory Control Register */
DECL|ITCTRL|member|__IOM uint32_t ITCTRL; /*!< Offset: 0xF00 (R/W) Integration Mode Control */
DECL|ITM_BASE|macro|ITM_BASE
DECL|ITM_CheckChar|function|__STATIC_INLINE int32_t ITM_CheckChar (void)
DECL|ITM_IMCR_INTEGRATION_Msk|macro|ITM_IMCR_INTEGRATION_Msk
DECL|ITM_IMCR_INTEGRATION_Pos|macro|ITM_IMCR_INTEGRATION_Pos
DECL|ITM_IRR_ATREADYM_Msk|macro|ITM_IRR_ATREADYM_Msk
DECL|ITM_IRR_ATREADYM_Pos|macro|ITM_IRR_ATREADYM_Pos
DECL|ITM_IWR_ATVALIDM_Msk|macro|ITM_IWR_ATVALIDM_Msk
DECL|ITM_IWR_ATVALIDM_Pos|macro|ITM_IWR_ATVALIDM_Pos
DECL|ITM_LSR_Access_Msk|macro|ITM_LSR_Access_Msk
DECL|ITM_LSR_Access_Pos|macro|ITM_LSR_Access_Pos
DECL|ITM_LSR_ByteAcc_Msk|macro|ITM_LSR_ByteAcc_Msk
DECL|ITM_LSR_ByteAcc_Pos|macro|ITM_LSR_ByteAcc_Pos
DECL|ITM_LSR_Present_Msk|macro|ITM_LSR_Present_Msk
DECL|ITM_LSR_Present_Pos|macro|ITM_LSR_Present_Pos
DECL|ITM_RXBUFFER_EMPTY|macro|ITM_RXBUFFER_EMPTY
DECL|ITM_ReceiveChar|function|__STATIC_INLINE int32_t ITM_ReceiveChar (void)
DECL|ITM_STIM_DISABLED_Msk|macro|ITM_STIM_DISABLED_Msk
DECL|ITM_STIM_DISABLED_Pos|macro|ITM_STIM_DISABLED_Pos
DECL|ITM_STIM_FIFOREADY_Msk|macro|ITM_STIM_FIFOREADY_Msk
DECL|ITM_STIM_FIFOREADY_Pos|macro|ITM_STIM_FIFOREADY_Pos
DECL|ITM_SendChar|function|__STATIC_INLINE uint32_t ITM_SendChar (uint32_t ch)
DECL|ITM_TCR_BUSY_Msk|macro|ITM_TCR_BUSY_Msk
DECL|ITM_TCR_BUSY_Pos|macro|ITM_TCR_BUSY_Pos
DECL|ITM_TCR_DWTENA_Msk|macro|ITM_TCR_DWTENA_Msk
DECL|ITM_TCR_DWTENA_Pos|macro|ITM_TCR_DWTENA_Pos
DECL|ITM_TCR_GTSFREQ_Msk|macro|ITM_TCR_GTSFREQ_Msk
DECL|ITM_TCR_GTSFREQ_Pos|macro|ITM_TCR_GTSFREQ_Pos
DECL|ITM_TCR_ITMENA_Msk|macro|ITM_TCR_ITMENA_Msk
DECL|ITM_TCR_ITMENA_Pos|macro|ITM_TCR_ITMENA_Pos
DECL|ITM_TCR_STALLENA_Msk|macro|ITM_TCR_STALLENA_Msk
DECL|ITM_TCR_STALLENA_Pos|macro|ITM_TCR_STALLENA_Pos
DECL|ITM_TCR_SWOENA_Msk|macro|ITM_TCR_SWOENA_Msk
DECL|ITM_TCR_SWOENA_Pos|macro|ITM_TCR_SWOENA_Pos
DECL|ITM_TCR_SYNCENA_Msk|macro|ITM_TCR_SYNCENA_Msk
DECL|ITM_TCR_SYNCENA_Pos|macro|ITM_TCR_SYNCENA_Pos
DECL|ITM_TCR_TRACEBUSID_Msk|macro|ITM_TCR_TRACEBUSID_Msk
DECL|ITM_TCR_TRACEBUSID_Pos|macro|ITM_TCR_TRACEBUSID_Pos
DECL|ITM_TCR_TSENA_Msk|macro|ITM_TCR_TSENA_Msk
DECL|ITM_TCR_TSENA_Pos|macro|ITM_TCR_TSENA_Pos
DECL|ITM_TCR_TSPRESCALE_Msk|macro|ITM_TCR_TSPRESCALE_Msk
DECL|ITM_TCR_TSPRESCALE_Pos|macro|ITM_TCR_TSPRESCALE_Pos
DECL|ITM_TPR_PRIVMASK_Msk|macro|ITM_TPR_PRIVMASK_Msk
DECL|ITM_TPR_PRIVMASK_Pos|macro|ITM_TPR_PRIVMASK_Pos
DECL|ITM_Type|typedef|} ITM_Type;
DECL|ITM|macro|ITM
DECL|ITNS|member|__IOM uint32_t ITNS[16U]; /*!< Offset: 0x280 (R/W) Interrupt Non-Secure State Register */
DECL|IT|member|uint32_t IT:2; /*!< bit: 25..26 saved IT state (read 0) */
DECL|IWR|member|__OM uint32_t IWR; /*!< Offset: 0xEF8 ( /W) ITM Integration Write Register */
DECL|LAR|member|__OM uint32_t LAR; /*!< Offset: 0xFB0 ( /W) ITM Lock Access Register */
DECL|LOAD|member|__IOM uint32_t LOAD; /*!< Offset: 0x004 (R/W) SysTick Reload Value Register */
DECL|LSR|member|__IM uint32_t LSR; /*!< Offset: 0xFB4 (R ) Lock Status Register */
DECL|LSR|member|__IM uint32_t LSR; /*!< Offset: 0xFB4 (R/ ) ITM Lock Status Register */
DECL|LSUCNT|member|__IOM uint32_t LSUCNT; /*!< Offset: 0x014 (R/W) LSU Count Register */
DECL|MAIR0|member|__IOM uint32_t MAIR0; /*!< Offset: 0x030 (R/W) MPU Memory Attribute Indirection Register 0 */
DECL|MAIR1|member|__IOM uint32_t MAIR1; /*!< Offset: 0x034 (R/W) MPU Memory Attribute Indirection Register 1 */
DECL|MAIR|member|__IOM uint32_t MAIR[2];
DECL|MMFAR|member|__IOM uint32_t MMFAR; /*!< Offset: 0x034 (R/W) MemManage Fault Address Register */
DECL|MPU_BASE_NS|macro|MPU_BASE_NS
DECL|MPU_BASE|macro|MPU_BASE
DECL|MPU_CTRL_ENABLE_Msk|macro|MPU_CTRL_ENABLE_Msk
DECL|MPU_CTRL_ENABLE_Pos|macro|MPU_CTRL_ENABLE_Pos
DECL|MPU_CTRL_HFNMIENA_Msk|macro|MPU_CTRL_HFNMIENA_Msk
DECL|MPU_CTRL_HFNMIENA_Pos|macro|MPU_CTRL_HFNMIENA_Pos
DECL|MPU_CTRL_PRIVDEFENA_Msk|macro|MPU_CTRL_PRIVDEFENA_Msk
DECL|MPU_CTRL_PRIVDEFENA_Pos|macro|MPU_CTRL_PRIVDEFENA_Pos
DECL|MPU_MAIR0_Attr0_Msk|macro|MPU_MAIR0_Attr0_Msk
DECL|MPU_MAIR0_Attr0_Pos|macro|MPU_MAIR0_Attr0_Pos
DECL|MPU_MAIR0_Attr1_Msk|macro|MPU_MAIR0_Attr1_Msk
DECL|MPU_MAIR0_Attr1_Pos|macro|MPU_MAIR0_Attr1_Pos
DECL|MPU_MAIR0_Attr2_Msk|macro|MPU_MAIR0_Attr2_Msk
DECL|MPU_MAIR0_Attr2_Pos|macro|MPU_MAIR0_Attr2_Pos
DECL|MPU_MAIR0_Attr3_Msk|macro|MPU_MAIR0_Attr3_Msk
DECL|MPU_MAIR0_Attr3_Pos|macro|MPU_MAIR0_Attr3_Pos
DECL|MPU_MAIR1_Attr4_Msk|macro|MPU_MAIR1_Attr4_Msk
DECL|MPU_MAIR1_Attr4_Pos|macro|MPU_MAIR1_Attr4_Pos
DECL|MPU_MAIR1_Attr5_Msk|macro|MPU_MAIR1_Attr5_Msk
DECL|MPU_MAIR1_Attr5_Pos|macro|MPU_MAIR1_Attr5_Pos
DECL|MPU_MAIR1_Attr6_Msk|macro|MPU_MAIR1_Attr6_Msk
DECL|MPU_MAIR1_Attr6_Pos|macro|MPU_MAIR1_Attr6_Pos
DECL|MPU_MAIR1_Attr7_Msk|macro|MPU_MAIR1_Attr7_Msk
DECL|MPU_MAIR1_Attr7_Pos|macro|MPU_MAIR1_Attr7_Pos
DECL|MPU_NS|macro|MPU_NS
DECL|MPU_RBAR_ADDR_Msk|macro|MPU_RBAR_ADDR_Msk
DECL|MPU_RBAR_ADDR_Pos|macro|MPU_RBAR_ADDR_Pos
DECL|MPU_RBAR_AP_Msk|macro|MPU_RBAR_AP_Msk
DECL|MPU_RBAR_AP_Pos|macro|MPU_RBAR_AP_Pos
DECL|MPU_RBAR_SH_Msk|macro|MPU_RBAR_SH_Msk
DECL|MPU_RBAR_SH_Pos|macro|MPU_RBAR_SH_Pos
DECL|MPU_RBAR_XN_Msk|macro|MPU_RBAR_XN_Msk
DECL|MPU_RBAR_XN_Pos|macro|MPU_RBAR_XN_Pos
DECL|MPU_RLAR_AttrIndx_Msk|macro|MPU_RLAR_AttrIndx_Msk
DECL|MPU_RLAR_AttrIndx_Pos|macro|MPU_RLAR_AttrIndx_Pos
DECL|MPU_RLAR_EN_Msk|macro|MPU_RLAR_EN_Msk
DECL|MPU_RLAR_EN_Pos|macro|MPU_RLAR_EN_Pos
DECL|MPU_RLAR_LIMIT_Msk|macro|MPU_RLAR_LIMIT_Msk
DECL|MPU_RLAR_LIMIT_Pos|macro|MPU_RLAR_LIMIT_Pos
DECL|MPU_RNR_REGION_Msk|macro|MPU_RNR_REGION_Msk
DECL|MPU_RNR_REGION_Pos|macro|MPU_RNR_REGION_Pos
DECL|MPU_TYPE_DREGION_Msk|macro|MPU_TYPE_DREGION_Msk
DECL|MPU_TYPE_DREGION_Pos|macro|MPU_TYPE_DREGION_Pos
DECL|MPU_TYPE_IREGION_Msk|macro|MPU_TYPE_IREGION_Msk
DECL|MPU_TYPE_IREGION_Pos|macro|MPU_TYPE_IREGION_Pos
DECL|MPU_TYPE_RALIASES|macro|MPU_TYPE_RALIASES
DECL|MPU_TYPE_SEPARATE_Msk|macro|MPU_TYPE_SEPARATE_Msk
DECL|MPU_TYPE_SEPARATE_Pos|macro|MPU_TYPE_SEPARATE_Pos
DECL|MPU_Type|typedef|} MPU_Type;
DECL|MPU|macro|MPU
DECL|MVFR0|member|__IM uint32_t MVFR0; /*!< Offset: 0x010 (R/ ) Media and FP Feature Register 0 */
DECL|MVFR0|member|__IM uint32_t MVFR0; /*!< Offset: 0x240 (R/ ) Media and VFP Feature Register 0 */
DECL|MVFR1|member|__IM uint32_t MVFR1; /*!< Offset: 0x014 (R/ ) Media and FP Feature Register 1 */
DECL|MVFR1|member|__IM uint32_t MVFR1; /*!< Offset: 0x244 (R/ ) Media and VFP Feature Register 1 */
DECL|MVFR2|member|__IM uint32_t MVFR2; /*!< Offset: 0x248 (R/ ) Media and VFP Feature Register 2 */
DECL|NSACR|member|__IOM uint32_t NSACR; /*!< Offset: 0x08C (R/W) Non-Secure Access Control Register */
DECL|NVIC_BASE_NS|macro|NVIC_BASE_NS
DECL|NVIC_BASE|macro|NVIC_BASE
DECL|NVIC_ClearPendingIRQ|macro|NVIC_ClearPendingIRQ
DECL|NVIC_ClearTargetState|function|__STATIC_INLINE uint32_t NVIC_ClearTargetState(IRQn_Type IRQn)
DECL|NVIC_DecodePriority|function|__STATIC_INLINE void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
DECL|NVIC_DisableIRQ|macro|NVIC_DisableIRQ
DECL|NVIC_EnableIRQ|macro|NVIC_EnableIRQ
DECL|NVIC_EncodePriority|function|__STATIC_INLINE uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
DECL|NVIC_GetActive|macro|NVIC_GetActive
DECL|NVIC_GetEnableIRQ|macro|NVIC_GetEnableIRQ
DECL|NVIC_GetPendingIRQ|macro|NVIC_GetPendingIRQ
DECL|NVIC_GetPriorityGrouping|macro|NVIC_GetPriorityGrouping
DECL|NVIC_GetPriority|macro|NVIC_GetPriority
DECL|NVIC_GetTargetState|function|__STATIC_INLINE uint32_t NVIC_GetTargetState(IRQn_Type IRQn)
DECL|NVIC_GetVector|macro|NVIC_GetVector
DECL|NVIC_NS|macro|NVIC_NS
DECL|NVIC_STIR_INTID_Msk|macro|NVIC_STIR_INTID_Msk
DECL|NVIC_STIR_INTID_Pos|macro|NVIC_STIR_INTID_Pos
DECL|NVIC_SetPendingIRQ|macro|NVIC_SetPendingIRQ
DECL|NVIC_SetPriorityGrouping|macro|NVIC_SetPriorityGrouping
DECL|NVIC_SetPriority|macro|NVIC_SetPriority
DECL|NVIC_SetTargetState|function|__STATIC_INLINE uint32_t NVIC_SetTargetState(IRQn_Type IRQn)
DECL|NVIC_SetVector|macro|NVIC_SetVector
DECL|NVIC_SystemReset|macro|NVIC_SystemReset
DECL|NVIC_Type|typedef|} NVIC_Type;
DECL|NVIC_USER_IRQ_OFFSET|macro|NVIC_USER_IRQ_OFFSET
DECL|NVIC|macro|NVIC
DECL|N|member|uint32_t N:1; /*!< bit: 31 Negative condition code flag */
DECL|N|member|uint32_t N:1; /*!< bit: 31 Negative condition code flag */
DECL|PCSR|member|__IM uint32_t PCSR; /*!< Offset: 0x01C (R/ ) Program Counter Sample Register */
DECL|PID0|member|__IM uint32_t PID0; /*!< Offset: 0xFE0 (R/ ) ITM Peripheral Identification Register #0 */
DECL|PID1|member|__IM uint32_t PID1; /*!< Offset: 0xFE4 (R/ ) ITM Peripheral Identification Register #1 */
DECL|PID2|member|__IM uint32_t PID2; /*!< Offset: 0xFE8 (R/ ) ITM Peripheral Identification Register #2 */
DECL|PID3|member|__IM uint32_t PID3; /*!< Offset: 0xFEC (R/ ) ITM Peripheral Identification Register #3 */
DECL|PID4|member|__IM uint32_t PID4; /*!< Offset: 0xFD0 (R/ ) ITM Peripheral Identification Register #4 */
DECL|PID5|member|__IM uint32_t PID5; /*!< Offset: 0xFD4 (R/ ) ITM Peripheral Identification Register #5 */
DECL|PID6|member|__IM uint32_t PID6; /*!< Offset: 0xFD8 (R/ ) ITM Peripheral Identification Register #6 */
DECL|PID7|member|__IM uint32_t PID7; /*!< Offset: 0xFDC (R/ ) ITM Peripheral Identification Register #7 */
DECL|PORT|member|} PORT [32U]; /*!< Offset: 0x000 ( /W) ITM Stimulus Port Registers */
DECL|Q|member|uint32_t Q:1; /*!< bit: 27 Saturation condition flag */
DECL|Q|member|uint32_t Q:1; /*!< bit: 27 Saturation condition flag */
DECL|RBAR_A1|member|__IOM uint32_t RBAR_A1; /*!< Offset: 0x014 (R/W) MPU Region Base Address Register Alias 1 */
DECL|RBAR_A2|member|__IOM uint32_t RBAR_A2; /*!< Offset: 0x01C (R/W) MPU Region Base Address Register Alias 2 */
DECL|RBAR_A3|member|__IOM uint32_t RBAR_A3; /*!< Offset: 0x024 (R/W) MPU Region Base Address Register Alias 3 */
DECL|RBAR|member|__IOM uint32_t RBAR; /*!< Offset: 0x00C (R/W) MPU Region Base Address Register */
DECL|RBAR|member|__IOM uint32_t RBAR; /*!< Offset: 0x00C (R/W) SAU Region Base Address Register */
DECL|RESERVED0|member|uint32_t RESERVED0[16U];
DECL|RESERVED0|member|uint32_t RESERVED0[1U];
DECL|RESERVED0|member|uint32_t RESERVED0[1U];
DECL|RESERVED0|member|uint32_t RESERVED0[1];
DECL|RESERVED0|member|uint32_t RESERVED0[2U];
DECL|RESERVED0|member|uint32_t RESERVED0[3];
DECL|RESERVED0|member|uint32_t RESERVED0[864U];
DECL|RESERVED10|member|uint32_t RESERVED10[1U];
DECL|RESERVED11|member|uint32_t RESERVED11[1U];
DECL|RESERVED12|member|uint32_t RESERVED12[1U];
DECL|RESERVED13|member|uint32_t RESERVED13[1U];
DECL|RESERVED14|member|uint32_t RESERVED14[1U];
DECL|RESERVED15|member|uint32_t RESERVED15[1U];
DECL|RESERVED16|member|uint32_t RESERVED16[1U];
DECL|RESERVED17|member|uint32_t RESERVED17[1U];
DECL|RESERVED18|member|uint32_t RESERVED18[1U];
DECL|RESERVED19|member|uint32_t RESERVED19[1U];
DECL|RESERVED1|member|uint32_t RESERVED1[15U];
DECL|RESERVED1|member|uint32_t RESERVED1[1U];
DECL|RESERVED1|member|uint32_t RESERVED1[55U];
DECL|RESERVED20|member|uint32_t RESERVED20[1U];
DECL|RESERVED21|member|uint32_t RESERVED21[1U];
DECL|RESERVED22|member|uint32_t RESERVED22[1U];
DECL|RESERVED23|member|uint32_t RESERVED23[1U];
DECL|RESERVED24|member|uint32_t RESERVED24[1U];
DECL|RESERVED25|member|uint32_t RESERVED25[1U];
DECL|RESERVED26|member|uint32_t RESERVED26[1U];
DECL|RESERVED27|member|uint32_t RESERVED27[1U];
DECL|RESERVED28|member|uint32_t RESERVED28[1U];
DECL|RESERVED29|member|uint32_t RESERVED29[1U];
DECL|RESERVED2|member|uint32_t RESERVED2[131U];
DECL|RESERVED2|member|uint32_t RESERVED2[15U];
DECL|RESERVED2|member|uint32_t RESERVED2[16U];
DECL|RESERVED2|member|uint32_t RESERVED2[1U];
DECL|RESERVED30|member|uint32_t RESERVED30[1U];
DECL|RESERVED31|member|uint32_t RESERVED31[1U];
DECL|RESERVED32|member|uint32_t RESERVED32[934U];
DECL|RESERVED33|member|uint32_t RESERVED33[1U];
DECL|RESERVED3|member|uint32_t RESERVED3[16U];
DECL|RESERVED3|member|uint32_t RESERVED3[1U];
DECL|RESERVED3|member|uint32_t RESERVED3[29U];
DECL|RESERVED3|member|uint32_t RESERVED3[759U];
DECL|RESERVED3|member|uint32_t RESERVED3[92U];
DECL|RESERVED4|member|uint32_t RESERVED4[15U];
DECL|RESERVED4|member|uint32_t RESERVED4[16U];
DECL|RESERVED4|member|uint32_t RESERVED4[1U];
DECL|RESERVED4|member|uint32_t RESERVED4[1U];
DECL|RESERVED4|member|uint32_t RESERVED4[1U];
DECL|RESERVED4|member|uint32_t RESERVED4[43U];
DECL|RESERVED5|member|uint32_t RESERVED5[16U];
DECL|RESERVED5|member|uint32_t RESERVED5[1U];
DECL|RESERVED5|member|uint32_t RESERVED5[1U];
DECL|RESERVED5|member|uint32_t RESERVED5[1U];
DECL|RESERVED5|member|uint32_t RESERVED5[39U];
DECL|RESERVED6|member|uint32_t RESERVED6[1U];
DECL|RESERVED6|member|uint32_t RESERVED6[1U];
DECL|RESERVED6|member|uint32_t RESERVED6[4U];
DECL|RESERVED6|member|uint32_t RESERVED6[580U];
DECL|RESERVED7|member|uint32_t RESERVED7[1U];
DECL|RESERVED7|member|uint32_t RESERVED7[6U];
DECL|RESERVED7|member|uint32_t RESERVED7[8U];
DECL|RESERVED8|member|uint32_t RESERVED8[1U];
DECL|RESERVED8|member|uint32_t RESERVED8[1U];
DECL|RESERVED9|member|uint32_t RESERVED9[1U];
DECL|RLAR_A1|member|__IOM uint32_t RLAR_A1; /*!< Offset: 0x018 (R/W) MPU Region Limit Address Register Alias 1 */
DECL|RLAR_A2|member|__IOM uint32_t RLAR_A2; /*!< Offset: 0x020 (R/W) MPU Region Limit Address Register Alias 2 */
DECL|RLAR_A3|member|__IOM uint32_t RLAR_A3; /*!< Offset: 0x028 (R/W) MPU Region Limit Address Register Alias 3 */
DECL|RLAR|member|__IOM uint32_t RLAR; /*!< Offset: 0x010 (R/W) MPU Region Limit Address Register */
DECL|RLAR|member|__IOM uint32_t RLAR; /*!< Offset: 0x010 (R/W) SAU Region Limit Address Register */
DECL|RNR|member|__IOM uint32_t RNR; /*!< Offset: 0x008 (R/W) MPU Region Number Register */
DECL|RNR|member|__IOM uint32_t RNR; /*!< Offset: 0x008 (R/W) SAU Region Number Register */
DECL|RSERVED1|member|uint32_t RSERVED1[16U];
DECL|SAU_BASE|macro|SAU_BASE
DECL|SAU_CTRL_ALLNS_Msk|macro|SAU_CTRL_ALLNS_Msk
DECL|SAU_CTRL_ALLNS_Pos|macro|SAU_CTRL_ALLNS_Pos
DECL|SAU_CTRL_ENABLE_Msk|macro|SAU_CTRL_ENABLE_Msk
DECL|SAU_CTRL_ENABLE_Pos|macro|SAU_CTRL_ENABLE_Pos
DECL|SAU_RBAR_BADDR_Msk|macro|SAU_RBAR_BADDR_Msk
DECL|SAU_RBAR_BADDR_Pos|macro|SAU_RBAR_BADDR_Pos
DECL|SAU_RLAR_ENABLE_Msk|macro|SAU_RLAR_ENABLE_Msk
DECL|SAU_RLAR_ENABLE_Pos|macro|SAU_RLAR_ENABLE_Pos
DECL|SAU_RLAR_LADDR_Msk|macro|SAU_RLAR_LADDR_Msk
DECL|SAU_RLAR_LADDR_Pos|macro|SAU_RLAR_LADDR_Pos
DECL|SAU_RLAR_NSC_Msk|macro|SAU_RLAR_NSC_Msk
DECL|SAU_RLAR_NSC_Pos|macro|SAU_RLAR_NSC_Pos
DECL|SAU_RNR_REGION_Msk|macro|SAU_RNR_REGION_Msk
DECL|SAU_RNR_REGION_Pos|macro|SAU_RNR_REGION_Pos
DECL|SAU_SFSR_AUVIOL_Msk|macro|SAU_SFSR_AUVIOL_Msk
DECL|SAU_SFSR_AUVIOL_Pos|macro|SAU_SFSR_AUVIOL_Pos
DECL|SAU_SFSR_INVEP_Msk|macro|SAU_SFSR_INVEP_Msk
DECL|SAU_SFSR_INVEP_Pos|macro|SAU_SFSR_INVEP_Pos
DECL|SAU_SFSR_INVER_Msk|macro|SAU_SFSR_INVER_Msk
DECL|SAU_SFSR_INVER_Pos|macro|SAU_SFSR_INVER_Pos
DECL|SAU_SFSR_INVIS_Msk|macro|SAU_SFSR_INVIS_Msk
DECL|SAU_SFSR_INVIS_Pos|macro|SAU_SFSR_INVIS_Pos
DECL|SAU_SFSR_INVTRAN_Msk|macro|SAU_SFSR_INVTRAN_Msk
DECL|SAU_SFSR_INVTRAN_Pos|macro|SAU_SFSR_INVTRAN_Pos
DECL|SAU_SFSR_LSERR_Msk|macro|SAU_SFSR_LSERR_Msk
DECL|SAU_SFSR_LSERR_Pos|macro|SAU_SFSR_LSERR_Pos
DECL|SAU_SFSR_LSPERR_Msk|macro|SAU_SFSR_LSPERR_Msk
DECL|SAU_SFSR_LSPERR_Pos|macro|SAU_SFSR_LSPERR_Pos
DECL|SAU_SFSR_SFARVALID_Msk|macro|SAU_SFSR_SFARVALID_Msk
DECL|SAU_SFSR_SFARVALID_Pos|macro|SAU_SFSR_SFARVALID_Pos
DECL|SAU_TYPE_SREGION_Msk|macro|SAU_TYPE_SREGION_Msk
DECL|SAU_TYPE_SREGION_Pos|macro|SAU_TYPE_SREGION_Pos
DECL|SAU_Type|typedef|} SAU_Type;
DECL|SAU|macro|SAU
DECL|SCB_ABFSR_AHBP_Msk|macro|SCB_ABFSR_AHBP_Msk
DECL|SCB_ABFSR_AHBP_Pos|macro|SCB_ABFSR_AHBP_Pos
DECL|SCB_ABFSR_AXIMTYPE_Msk|macro|SCB_ABFSR_AXIMTYPE_Msk
DECL|SCB_ABFSR_AXIMTYPE_Pos|macro|SCB_ABFSR_AXIMTYPE_Pos
DECL|SCB_ABFSR_AXIM_Msk|macro|SCB_ABFSR_AXIM_Msk
DECL|SCB_ABFSR_AXIM_Pos|macro|SCB_ABFSR_AXIM_Pos
DECL|SCB_ABFSR_DTCM_Msk|macro|SCB_ABFSR_DTCM_Msk
DECL|SCB_ABFSR_DTCM_Pos|macro|SCB_ABFSR_DTCM_Pos
DECL|SCB_ABFSR_EPPB_Msk|macro|SCB_ABFSR_EPPB_Msk
DECL|SCB_ABFSR_EPPB_Pos|macro|SCB_ABFSR_EPPB_Pos
DECL|SCB_ABFSR_ITCM_Msk|macro|SCB_ABFSR_ITCM_Msk
DECL|SCB_ABFSR_ITCM_Pos|macro|SCB_ABFSR_ITCM_Pos
DECL|SCB_AHBPCR_EN_Msk|macro|SCB_AHBPCR_EN_Msk
DECL|SCB_AHBPCR_EN_Pos|macro|SCB_AHBPCR_EN_Pos
DECL|SCB_AHBPCR_SZ_Msk|macro|SCB_AHBPCR_SZ_Msk
DECL|SCB_AHBPCR_SZ_Pos|macro|SCB_AHBPCR_SZ_Pos
DECL|SCB_AHBSCR_CTL_Msk|macro|SCB_AHBSCR_CTL_Msk
DECL|SCB_AHBSCR_CTL_Pos|macro|SCB_AHBSCR_CTL_Pos
DECL|SCB_AHBSCR_INITCOUNT_Msk|macro|SCB_AHBSCR_INITCOUNT_Msk
DECL|SCB_AHBSCR_INITCOUNT_Pos|macro|SCB_AHBSCR_INITCOUNT_Pos
DECL|SCB_AHBSCR_TPRI_Msk|macro|SCB_AHBSCR_TPRI_Msk
DECL|SCB_AHBSCR_TPRI_Pos|macro|SCB_AHBSCR_TPRI_Pos
DECL|SCB_AIRCR_BFHFNMINS_Msk|macro|SCB_AIRCR_BFHFNMINS_Msk
DECL|SCB_AIRCR_BFHFNMINS_Pos|macro|SCB_AIRCR_BFHFNMINS_Pos
DECL|SCB_AIRCR_ENDIANESS_Msk|macro|SCB_AIRCR_ENDIANESS_Msk
DECL|SCB_AIRCR_ENDIANESS_Pos|macro|SCB_AIRCR_ENDIANESS_Pos
DECL|SCB_AIRCR_PRIGROUP_Msk|macro|SCB_AIRCR_PRIGROUP_Msk
DECL|SCB_AIRCR_PRIGROUP_Pos|macro|SCB_AIRCR_PRIGROUP_Pos
DECL|SCB_AIRCR_PRIS_Msk|macro|SCB_AIRCR_PRIS_Msk
DECL|SCB_AIRCR_PRIS_Pos|macro|SCB_AIRCR_PRIS_Pos
DECL|SCB_AIRCR_SYSRESETREQS_Msk|macro|SCB_AIRCR_SYSRESETREQS_Msk
DECL|SCB_AIRCR_SYSRESETREQS_Pos|macro|SCB_AIRCR_SYSRESETREQS_Pos
DECL|SCB_AIRCR_SYSRESETREQ_Msk|macro|SCB_AIRCR_SYSRESETREQ_Msk
DECL|SCB_AIRCR_SYSRESETREQ_Pos|macro|SCB_AIRCR_SYSRESETREQ_Pos
DECL|SCB_AIRCR_VECTCLRACTIVE_Msk|macro|SCB_AIRCR_VECTCLRACTIVE_Msk
DECL|SCB_AIRCR_VECTCLRACTIVE_Pos|macro|SCB_AIRCR_VECTCLRACTIVE_Pos
DECL|SCB_AIRCR_VECTKEYSTAT_Msk|macro|SCB_AIRCR_VECTKEYSTAT_Msk
DECL|SCB_AIRCR_VECTKEYSTAT_Pos|macro|SCB_AIRCR_VECTKEYSTAT_Pos
DECL|SCB_AIRCR_VECTKEY_Msk|macro|SCB_AIRCR_VECTKEY_Msk
DECL|SCB_AIRCR_VECTKEY_Pos|macro|SCB_AIRCR_VECTKEY_Pos
DECL|SCB_BASE_NS|macro|SCB_BASE_NS
DECL|SCB_BASE|macro|SCB_BASE
DECL|SCB_CACR_ECCEN_Msk|macro|SCB_CACR_ECCEN_Msk
DECL|SCB_CACR_ECCEN_Pos|macro|SCB_CACR_ECCEN_Pos
DECL|SCB_CACR_FORCEWT_Msk|macro|SCB_CACR_FORCEWT_Msk
DECL|SCB_CACR_FORCEWT_Pos|macro|SCB_CACR_FORCEWT_Pos
DECL|SCB_CACR_SIWT_Msk|macro|SCB_CACR_SIWT_Msk
DECL|SCB_CACR_SIWT_Pos|macro|SCB_CACR_SIWT_Pos
DECL|SCB_CCR_BFHFNMIGN_Msk|macro|SCB_CCR_BFHFNMIGN_Msk
DECL|SCB_CCR_BFHFNMIGN_Pos|macro|SCB_CCR_BFHFNMIGN_Pos
DECL|SCB_CCR_BP_Msk|macro|SCB_CCR_BP_Msk
DECL|SCB_CCR_BP_Pos|macro|SCB_CCR_BP_Pos
DECL|SCB_CCR_DC_Msk|macro|SCB_CCR_DC_Msk
DECL|SCB_CCR_DC_Pos|macro|SCB_CCR_DC_Pos
DECL|SCB_CCR_DIV_0_TRP_Msk|macro|SCB_CCR_DIV_0_TRP_Msk
DECL|SCB_CCR_DIV_0_TRP_Pos|macro|SCB_CCR_DIV_0_TRP_Pos
DECL|SCB_CCR_IC_Msk|macro|SCB_CCR_IC_Msk
DECL|SCB_CCR_IC_Pos|macro|SCB_CCR_IC_Pos
DECL|SCB_CCR_STKOFHFNMIGN_Msk|macro|SCB_CCR_STKOFHFNMIGN_Msk
DECL|SCB_CCR_STKOFHFNMIGN_Pos|macro|SCB_CCR_STKOFHFNMIGN_Pos
DECL|SCB_CCR_UNALIGN_TRP_Msk|macro|SCB_CCR_UNALIGN_TRP_Msk
DECL|SCB_CCR_UNALIGN_TRP_Pos|macro|SCB_CCR_UNALIGN_TRP_Pos
DECL|SCB_CCR_USERSETMPEND_Msk|macro|SCB_CCR_USERSETMPEND_Msk
DECL|SCB_CCR_USERSETMPEND_Pos|macro|SCB_CCR_USERSETMPEND_Pos
DECL|SCB_CCSIDR_ASSOCIATIVITY_Msk|macro|SCB_CCSIDR_ASSOCIATIVITY_Msk
DECL|SCB_CCSIDR_ASSOCIATIVITY_Pos|macro|SCB_CCSIDR_ASSOCIATIVITY_Pos
DECL|SCB_CCSIDR_LINESIZE_Msk|macro|SCB_CCSIDR_LINESIZE_Msk
DECL|SCB_CCSIDR_LINESIZE_Pos|macro|SCB_CCSIDR_LINESIZE_Pos
DECL|SCB_CCSIDR_NUMSETS_Msk|macro|SCB_CCSIDR_NUMSETS_Msk
DECL|SCB_CCSIDR_NUMSETS_Pos|macro|SCB_CCSIDR_NUMSETS_Pos
DECL|SCB_CCSIDR_RA_Msk|macro|SCB_CCSIDR_RA_Msk
DECL|SCB_CCSIDR_RA_Pos|macro|SCB_CCSIDR_RA_Pos
DECL|SCB_CCSIDR_WA_Msk|macro|SCB_CCSIDR_WA_Msk
DECL|SCB_CCSIDR_WA_Pos|macro|SCB_CCSIDR_WA_Pos
DECL|SCB_CCSIDR_WB_Msk|macro|SCB_CCSIDR_WB_Msk
DECL|SCB_CCSIDR_WB_Pos|macro|SCB_CCSIDR_WB_Pos
DECL|SCB_CCSIDR_WT_Msk|macro|SCB_CCSIDR_WT_Msk
DECL|SCB_CCSIDR_WT_Pos|macro|SCB_CCSIDR_WT_Pos
DECL|SCB_CFSR_BFARVALID_Msk|macro|SCB_CFSR_BFARVALID_Msk
DECL|SCB_CFSR_BFARVALID_Pos|macro|SCB_CFSR_BFARVALID_Pos
DECL|SCB_CFSR_BUSFAULTSR_Msk|macro|SCB_CFSR_BUSFAULTSR_Msk
DECL|SCB_CFSR_BUSFAULTSR_Pos|macro|SCB_CFSR_BUSFAULTSR_Pos
DECL|SCB_CFSR_DACCVIOL_Msk|macro|SCB_CFSR_DACCVIOL_Msk
DECL|SCB_CFSR_DACCVIOL_Pos|macro|SCB_CFSR_DACCVIOL_Pos
DECL|SCB_CFSR_DIVBYZERO_Msk|macro|SCB_CFSR_DIVBYZERO_Msk
DECL|SCB_CFSR_DIVBYZERO_Pos|macro|SCB_CFSR_DIVBYZERO_Pos
DECL|SCB_CFSR_IACCVIOL_Msk|macro|SCB_CFSR_IACCVIOL_Msk
DECL|SCB_CFSR_IACCVIOL_Pos|macro|SCB_CFSR_IACCVIOL_Pos
DECL|SCB_CFSR_IBUSERR_Msk|macro|SCB_CFSR_IBUSERR_Msk
DECL|SCB_CFSR_IBUSERR_Pos|macro|SCB_CFSR_IBUSERR_Pos
DECL|SCB_CFSR_IMPRECISERR_Msk|macro|SCB_CFSR_IMPRECISERR_Msk
DECL|SCB_CFSR_IMPRECISERR_Pos|macro|SCB_CFSR_IMPRECISERR_Pos
DECL|SCB_CFSR_INVPC_Msk|macro|SCB_CFSR_INVPC_Msk
DECL|SCB_CFSR_INVPC_Pos|macro|SCB_CFSR_INVPC_Pos
DECL|SCB_CFSR_INVSTATE_Msk|macro|SCB_CFSR_INVSTATE_Msk
DECL|SCB_CFSR_INVSTATE_Pos|macro|SCB_CFSR_INVSTATE_Pos
DECL|SCB_CFSR_LSPERR_Msk|macro|SCB_CFSR_LSPERR_Msk
DECL|SCB_CFSR_LSPERR_Pos|macro|SCB_CFSR_LSPERR_Pos
DECL|SCB_CFSR_MEMFAULTSR_Msk|macro|SCB_CFSR_MEMFAULTSR_Msk
DECL|SCB_CFSR_MEMFAULTSR_Pos|macro|SCB_CFSR_MEMFAULTSR_Pos
DECL|SCB_CFSR_MLSPERR_Msk|macro|SCB_CFSR_MLSPERR_Msk
DECL|SCB_CFSR_MLSPERR_Pos|macro|SCB_CFSR_MLSPERR_Pos
DECL|SCB_CFSR_MMARVALID_Msk|macro|SCB_CFSR_MMARVALID_Msk
DECL|SCB_CFSR_MMARVALID_Pos|macro|SCB_CFSR_MMARVALID_Pos
DECL|SCB_CFSR_MSTKERR_Msk|macro|SCB_CFSR_MSTKERR_Msk
DECL|SCB_CFSR_MSTKERR_Pos|macro|SCB_CFSR_MSTKERR_Pos
DECL|SCB_CFSR_MUNSTKERR_Msk|macro|SCB_CFSR_MUNSTKERR_Msk
DECL|SCB_CFSR_MUNSTKERR_Pos|macro|SCB_CFSR_MUNSTKERR_Pos
DECL|SCB_CFSR_NOCP_Msk|macro|SCB_CFSR_NOCP_Msk
DECL|SCB_CFSR_NOCP_Pos|macro|SCB_CFSR_NOCP_Pos
DECL|SCB_CFSR_PRECISERR_Msk|macro|SCB_CFSR_PRECISERR_Msk
DECL|SCB_CFSR_PRECISERR_Pos|macro|SCB_CFSR_PRECISERR_Pos
DECL|SCB_CFSR_STKERR_Msk|macro|SCB_CFSR_STKERR_Msk
DECL|SCB_CFSR_STKERR_Pos|macro|SCB_CFSR_STKERR_Pos
DECL|SCB_CFSR_STKOF_Msk|macro|SCB_CFSR_STKOF_Msk
DECL|SCB_CFSR_STKOF_Pos|macro|SCB_CFSR_STKOF_Pos
DECL|SCB_CFSR_UNALIGNED_Msk|macro|SCB_CFSR_UNALIGNED_Msk
DECL|SCB_CFSR_UNALIGNED_Pos|macro|SCB_CFSR_UNALIGNED_Pos
DECL|SCB_CFSR_UNDEFINSTR_Msk|macro|SCB_CFSR_UNDEFINSTR_Msk
DECL|SCB_CFSR_UNDEFINSTR_Pos|macro|SCB_CFSR_UNDEFINSTR_Pos
DECL|SCB_CFSR_UNSTKERR_Msk|macro|SCB_CFSR_UNSTKERR_Msk
DECL|SCB_CFSR_UNSTKERR_Pos|macro|SCB_CFSR_UNSTKERR_Pos
DECL|SCB_CFSR_USGFAULTSR_Msk|macro|SCB_CFSR_USGFAULTSR_Msk
DECL|SCB_CFSR_USGFAULTSR_Pos|macro|SCB_CFSR_USGFAULTSR_Pos
DECL|SCB_CLIDR_LOC_Msk|macro|SCB_CLIDR_LOC_Msk
DECL|SCB_CLIDR_LOC_Pos|macro|SCB_CLIDR_LOC_Pos
DECL|SCB_CLIDR_LOUU_Msk|macro|SCB_CLIDR_LOUU_Msk
DECL|SCB_CLIDR_LOUU_Pos|macro|SCB_CLIDR_LOUU_Pos
DECL|SCB_CPUID_ARCHITECTURE_Msk|macro|SCB_CPUID_ARCHITECTURE_Msk
DECL|SCB_CPUID_ARCHITECTURE_Pos|macro|SCB_CPUID_ARCHITECTURE_Pos
DECL|SCB_CPUID_IMPLEMENTER_Msk|macro|SCB_CPUID_IMPLEMENTER_Msk
DECL|SCB_CPUID_IMPLEMENTER_Pos|macro|SCB_CPUID_IMPLEMENTER_Pos
DECL|SCB_CPUID_PARTNO_Msk|macro|SCB_CPUID_PARTNO_Msk
DECL|SCB_CPUID_PARTNO_Pos|macro|SCB_CPUID_PARTNO_Pos
DECL|SCB_CPUID_REVISION_Msk|macro|SCB_CPUID_REVISION_Msk
DECL|SCB_CPUID_REVISION_Pos|macro|SCB_CPUID_REVISION_Pos
DECL|SCB_CPUID_VARIANT_Msk|macro|SCB_CPUID_VARIANT_Msk
DECL|SCB_CPUID_VARIANT_Pos|macro|SCB_CPUID_VARIANT_Pos
DECL|SCB_CSSELR_IND_Msk|macro|SCB_CSSELR_IND_Msk
DECL|SCB_CSSELR_IND_Pos|macro|SCB_CSSELR_IND_Pos
DECL|SCB_CSSELR_LEVEL_Msk|macro|SCB_CSSELR_LEVEL_Msk
DECL|SCB_CSSELR_LEVEL_Pos|macro|SCB_CSSELR_LEVEL_Pos
DECL|SCB_CTR_CWG_Msk|macro|SCB_CTR_CWG_Msk
DECL|SCB_CTR_CWG_Pos|macro|SCB_CTR_CWG_Pos
DECL|SCB_CTR_DMINLINE_Msk|macro|SCB_CTR_DMINLINE_Msk
DECL|SCB_CTR_DMINLINE_Pos|macro|SCB_CTR_DMINLINE_Pos
DECL|SCB_CTR_ERG_Msk|macro|SCB_CTR_ERG_Msk
DECL|SCB_CTR_ERG_Pos|macro|SCB_CTR_ERG_Pos
DECL|SCB_CTR_FORMAT_Msk|macro|SCB_CTR_FORMAT_Msk
DECL|SCB_CTR_FORMAT_Pos|macro|SCB_CTR_FORMAT_Pos
DECL|SCB_CTR_IMINLINE_Msk|macro|SCB_CTR_IMINLINE_Msk
DECL|SCB_CTR_IMINLINE_Pos|macro|SCB_CTR_IMINLINE_Pos
DECL|SCB_DCCISW_SET_Msk|macro|SCB_DCCISW_SET_Msk
DECL|SCB_DCCISW_SET_Pos|macro|SCB_DCCISW_SET_Pos
DECL|SCB_DCCISW_WAY_Msk|macro|SCB_DCCISW_WAY_Msk
DECL|SCB_DCCISW_WAY_Pos|macro|SCB_DCCISW_WAY_Pos
DECL|SCB_DCCSW_SET_Msk|macro|SCB_DCCSW_SET_Msk
DECL|SCB_DCCSW_SET_Pos|macro|SCB_DCCSW_SET_Pos
DECL|SCB_DCCSW_WAY_Msk|macro|SCB_DCCSW_WAY_Msk
DECL|SCB_DCCSW_WAY_Pos|macro|SCB_DCCSW_WAY_Pos
DECL|SCB_DCISW_SET_Msk|macro|SCB_DCISW_SET_Msk
DECL|SCB_DCISW_SET_Pos|macro|SCB_DCISW_SET_Pos
DECL|SCB_DCISW_WAY_Msk|macro|SCB_DCISW_WAY_Msk
DECL|SCB_DCISW_WAY_Pos|macro|SCB_DCISW_WAY_Pos
DECL|SCB_DFSR_BKPT_Msk|macro|SCB_DFSR_BKPT_Msk
DECL|SCB_DFSR_BKPT_Pos|macro|SCB_DFSR_BKPT_Pos
DECL|SCB_DFSR_DWTTRAP_Msk|macro|SCB_DFSR_DWTTRAP_Msk
DECL|SCB_DFSR_DWTTRAP_Pos|macro|SCB_DFSR_DWTTRAP_Pos
DECL|SCB_DFSR_EXTERNAL_Msk|macro|SCB_DFSR_EXTERNAL_Msk
DECL|SCB_DFSR_EXTERNAL_Pos|macro|SCB_DFSR_EXTERNAL_Pos
DECL|SCB_DFSR_HALTED_Msk|macro|SCB_DFSR_HALTED_Msk
DECL|SCB_DFSR_HALTED_Pos|macro|SCB_DFSR_HALTED_Pos
DECL|SCB_DFSR_VCATCH_Msk|macro|SCB_DFSR_VCATCH_Msk
DECL|SCB_DFSR_VCATCH_Pos|macro|SCB_DFSR_VCATCH_Pos
DECL|SCB_DTCMCR_EN_Msk|macro|SCB_DTCMCR_EN_Msk
DECL|SCB_DTCMCR_EN_Pos|macro|SCB_DTCMCR_EN_Pos
DECL|SCB_DTCMCR_RETEN_Msk|macro|SCB_DTCMCR_RETEN_Msk
DECL|SCB_DTCMCR_RETEN_Pos|macro|SCB_DTCMCR_RETEN_Pos
DECL|SCB_DTCMCR_RMW_Msk|macro|SCB_DTCMCR_RMW_Msk
DECL|SCB_DTCMCR_RMW_Pos|macro|SCB_DTCMCR_RMW_Pos
DECL|SCB_DTCMCR_SZ_Msk|macro|SCB_DTCMCR_SZ_Msk
DECL|SCB_DTCMCR_SZ_Pos|macro|SCB_DTCMCR_SZ_Pos
DECL|SCB_GetFPUType|function|__STATIC_INLINE uint32_t SCB_GetFPUType(void)
DECL|SCB_HFSR_DEBUGEVT_Msk|macro|SCB_HFSR_DEBUGEVT_Msk
DECL|SCB_HFSR_DEBUGEVT_Pos|macro|SCB_HFSR_DEBUGEVT_Pos
DECL|SCB_HFSR_FORCED_Msk|macro|SCB_HFSR_FORCED_Msk
DECL|SCB_HFSR_FORCED_Pos|macro|SCB_HFSR_FORCED_Pos
DECL|SCB_HFSR_VECTTBL_Msk|macro|SCB_HFSR_VECTTBL_Msk
DECL|SCB_HFSR_VECTTBL_Pos|macro|SCB_HFSR_VECTTBL_Pos
DECL|SCB_ICSR_ISRPENDING_Msk|macro|SCB_ICSR_ISRPENDING_Msk
DECL|SCB_ICSR_ISRPENDING_Pos|macro|SCB_ICSR_ISRPENDING_Pos
DECL|SCB_ICSR_ISRPREEMPT_Msk|macro|SCB_ICSR_ISRPREEMPT_Msk
DECL|SCB_ICSR_ISRPREEMPT_Pos|macro|SCB_ICSR_ISRPREEMPT_Pos
DECL|SCB_ICSR_PENDNMICLR_Msk|macro|SCB_ICSR_PENDNMICLR_Msk
DECL|SCB_ICSR_PENDNMICLR_Pos|macro|SCB_ICSR_PENDNMICLR_Pos
DECL|SCB_ICSR_PENDNMISET_Msk|macro|SCB_ICSR_PENDNMISET_Msk
DECL|SCB_ICSR_PENDNMISET_Pos|macro|SCB_ICSR_PENDNMISET_Pos
DECL|SCB_ICSR_PENDSTCLR_Msk|macro|SCB_ICSR_PENDSTCLR_Msk
DECL|SCB_ICSR_PENDSTCLR_Pos|macro|SCB_ICSR_PENDSTCLR_Pos
DECL|SCB_ICSR_PENDSTSET_Msk|macro|SCB_ICSR_PENDSTSET_Msk
DECL|SCB_ICSR_PENDSTSET_Pos|macro|SCB_ICSR_PENDSTSET_Pos
DECL|SCB_ICSR_PENDSVCLR_Msk|macro|SCB_ICSR_PENDSVCLR_Msk
DECL|SCB_ICSR_PENDSVCLR_Pos|macro|SCB_ICSR_PENDSVCLR_Pos
DECL|SCB_ICSR_PENDSVSET_Msk|macro|SCB_ICSR_PENDSVSET_Msk
DECL|SCB_ICSR_PENDSVSET_Pos|macro|SCB_ICSR_PENDSVSET_Pos
DECL|SCB_ICSR_RETTOBASE_Msk|macro|SCB_ICSR_RETTOBASE_Msk
DECL|SCB_ICSR_RETTOBASE_Pos|macro|SCB_ICSR_RETTOBASE_Pos
DECL|SCB_ICSR_STTNS_Msk|macro|SCB_ICSR_STTNS_Msk
DECL|SCB_ICSR_STTNS_Pos|macro|SCB_ICSR_STTNS_Pos
DECL|SCB_ICSR_VECTACTIVE_Msk|macro|SCB_ICSR_VECTACTIVE_Msk
DECL|SCB_ICSR_VECTACTIVE_Pos|macro|SCB_ICSR_VECTACTIVE_Pos
DECL|SCB_ICSR_VECTPENDING_Msk|macro|SCB_ICSR_VECTPENDING_Msk
DECL|SCB_ICSR_VECTPENDING_Pos|macro|SCB_ICSR_VECTPENDING_Pos
DECL|SCB_ITCMCR_EN_Msk|macro|SCB_ITCMCR_EN_Msk
DECL|SCB_ITCMCR_EN_Pos|macro|SCB_ITCMCR_EN_Pos
DECL|SCB_ITCMCR_RETEN_Msk|macro|SCB_ITCMCR_RETEN_Msk
DECL|SCB_ITCMCR_RETEN_Pos|macro|SCB_ITCMCR_RETEN_Pos
DECL|SCB_ITCMCR_RMW_Msk|macro|SCB_ITCMCR_RMW_Msk
DECL|SCB_ITCMCR_RMW_Pos|macro|SCB_ITCMCR_RMW_Pos
DECL|SCB_ITCMCR_SZ_Msk|macro|SCB_ITCMCR_SZ_Msk
DECL|SCB_ITCMCR_SZ_Pos|macro|SCB_ITCMCR_SZ_Pos
DECL|SCB_NSACR_CP10_Msk|macro|SCB_NSACR_CP10_Msk
DECL|SCB_NSACR_CP10_Pos|macro|SCB_NSACR_CP10_Pos
DECL|SCB_NSACR_CP11_Msk|macro|SCB_NSACR_CP11_Msk
DECL|SCB_NSACR_CP11_Pos|macro|SCB_NSACR_CP11_Pos
DECL|SCB_NSACR_CPn_Msk|macro|SCB_NSACR_CPn_Msk
DECL|SCB_NSACR_CPn_Pos|macro|SCB_NSACR_CPn_Pos
DECL|SCB_NS|macro|SCB_NS
DECL|SCB_SCR_SEVONPEND_Msk|macro|SCB_SCR_SEVONPEND_Msk
DECL|SCB_SCR_SEVONPEND_Pos|macro|SCB_SCR_SEVONPEND_Pos
DECL|SCB_SCR_SLEEPDEEPS_Msk|macro|SCB_SCR_SLEEPDEEPS_Msk
DECL|SCB_SCR_SLEEPDEEPS_Pos|macro|SCB_SCR_SLEEPDEEPS_Pos
DECL|SCB_SCR_SLEEPDEEP_Msk|macro|SCB_SCR_SLEEPDEEP_Msk
DECL|SCB_SCR_SLEEPDEEP_Pos|macro|SCB_SCR_SLEEPDEEP_Pos
DECL|SCB_SCR_SLEEPONEXIT_Msk|macro|SCB_SCR_SLEEPONEXIT_Msk
DECL|SCB_SCR_SLEEPONEXIT_Pos|macro|SCB_SCR_SLEEPONEXIT_Pos
DECL|SCB_SHCSR_BUSFAULTACT_Msk|macro|SCB_SHCSR_BUSFAULTACT_Msk
DECL|SCB_SHCSR_BUSFAULTACT_Pos|macro|SCB_SHCSR_BUSFAULTACT_Pos
DECL|SCB_SHCSR_BUSFAULTENA_Msk|macro|SCB_SHCSR_BUSFAULTENA_Msk
DECL|SCB_SHCSR_BUSFAULTENA_Pos|macro|SCB_SHCSR_BUSFAULTENA_Pos
DECL|SCB_SHCSR_BUSFAULTPENDED_Msk|macro|SCB_SHCSR_BUSFAULTPENDED_Msk
DECL|SCB_SHCSR_BUSFAULTPENDED_Pos|macro|SCB_SHCSR_BUSFAULTPENDED_Pos
DECL|SCB_SHCSR_HARDFAULTACT_Msk|macro|SCB_SHCSR_HARDFAULTACT_Msk
DECL|SCB_SHCSR_HARDFAULTACT_Pos|macro|SCB_SHCSR_HARDFAULTACT_Pos
DECL|SCB_SHCSR_HARDFAULTPENDED_Msk|macro|SCB_SHCSR_HARDFAULTPENDED_Msk
DECL|SCB_SHCSR_HARDFAULTPENDED_Pos|macro|SCB_SHCSR_HARDFAULTPENDED_Pos
DECL|SCB_SHCSR_MEMFAULTACT_Msk|macro|SCB_SHCSR_MEMFAULTACT_Msk
DECL|SCB_SHCSR_MEMFAULTACT_Pos|macro|SCB_SHCSR_MEMFAULTACT_Pos
DECL|SCB_SHCSR_MEMFAULTENA_Msk|macro|SCB_SHCSR_MEMFAULTENA_Msk
DECL|SCB_SHCSR_MEMFAULTENA_Pos|macro|SCB_SHCSR_MEMFAULTENA_Pos
DECL|SCB_SHCSR_MEMFAULTPENDED_Msk|macro|SCB_SHCSR_MEMFAULTPENDED_Msk
DECL|SCB_SHCSR_MEMFAULTPENDED_Pos|macro|SCB_SHCSR_MEMFAULTPENDED_Pos
DECL|SCB_SHCSR_MONITORACT_Msk|macro|SCB_SHCSR_MONITORACT_Msk
DECL|SCB_SHCSR_MONITORACT_Pos|macro|SCB_SHCSR_MONITORACT_Pos
DECL|SCB_SHCSR_NMIACT_Msk|macro|SCB_SHCSR_NMIACT_Msk
DECL|SCB_SHCSR_NMIACT_Pos|macro|SCB_SHCSR_NMIACT_Pos
DECL|SCB_SHCSR_PENDSVACT_Msk|macro|SCB_SHCSR_PENDSVACT_Msk
DECL|SCB_SHCSR_PENDSVACT_Pos|macro|SCB_SHCSR_PENDSVACT_Pos
DECL|SCB_SHCSR_SECUREFAULTACT_Msk|macro|SCB_SHCSR_SECUREFAULTACT_Msk
DECL|SCB_SHCSR_SECUREFAULTACT_Pos|macro|SCB_SHCSR_SECUREFAULTACT_Pos
DECL|SCB_SHCSR_SECUREFAULTENA_Msk|macro|SCB_SHCSR_SECUREFAULTENA_Msk
DECL|SCB_SHCSR_SECUREFAULTENA_Pos|macro|SCB_SHCSR_SECUREFAULTENA_Pos
DECL|SCB_SHCSR_SECUREFAULTPENDED_Msk|macro|SCB_SHCSR_SECUREFAULTPENDED_Msk
DECL|SCB_SHCSR_SECUREFAULTPENDED_Pos|macro|SCB_SHCSR_SECUREFAULTPENDED_Pos
DECL|SCB_SHCSR_SVCALLACT_Msk|macro|SCB_SHCSR_SVCALLACT_Msk
DECL|SCB_SHCSR_SVCALLACT_Pos|macro|SCB_SHCSR_SVCALLACT_Pos
DECL|SCB_SHCSR_SVCALLPENDED_Msk|macro|SCB_SHCSR_SVCALLPENDED_Msk
DECL|SCB_SHCSR_SVCALLPENDED_Pos|macro|SCB_SHCSR_SVCALLPENDED_Pos
DECL|SCB_SHCSR_SYSTICKACT_Msk|macro|SCB_SHCSR_SYSTICKACT_Msk
DECL|SCB_SHCSR_SYSTICKACT_Pos|macro|SCB_SHCSR_SYSTICKACT_Pos
DECL|SCB_SHCSR_USGFAULTACT_Msk|macro|SCB_SHCSR_USGFAULTACT_Msk
DECL|SCB_SHCSR_USGFAULTACT_Pos|macro|SCB_SHCSR_USGFAULTACT_Pos
DECL|SCB_SHCSR_USGFAULTENA_Msk|macro|SCB_SHCSR_USGFAULTENA_Msk
DECL|SCB_SHCSR_USGFAULTENA_Pos|macro|SCB_SHCSR_USGFAULTENA_Pos
DECL|SCB_SHCSR_USGFAULTPENDED_Msk|macro|SCB_SHCSR_USGFAULTPENDED_Msk
DECL|SCB_SHCSR_USGFAULTPENDED_Pos|macro|SCB_SHCSR_USGFAULTPENDED_Pos
DECL|SCB_STIR_INTID_Msk|macro|SCB_STIR_INTID_Msk
DECL|SCB_STIR_INTID_Pos|macro|SCB_STIR_INTID_Pos
DECL|SCB_Type|typedef|} SCB_Type;
DECL|SCB_VTOR_TBLOFF_Msk|macro|SCB_VTOR_TBLOFF_Msk
DECL|SCB_VTOR_TBLOFF_Pos|macro|SCB_VTOR_TBLOFF_Pos
DECL|SCB|macro|SCB
DECL|SCR|member|__IOM uint32_t SCR; /*!< Offset: 0x010 (R/W) System Control Register */
DECL|SCS_BASE_NS|macro|SCS_BASE_NS
DECL|SCS_BASE|macro|SCS_BASE
DECL|SCnSCB_ICTR_INTLINESNUM_Msk|macro|SCnSCB_ICTR_INTLINESNUM_Msk
DECL|SCnSCB_ICTR_INTLINESNUM_Pos|macro|SCnSCB_ICTR_INTLINESNUM_Pos
DECL|SCnSCB_NS|macro|SCnSCB_NS
DECL|SCnSCB_Type|typedef|} SCnSCB_Type;
DECL|SCnSCB|macro|SCnSCB
DECL|SFAR|member|__IOM uint32_t SFAR; /*!< Offset: 0x018 (R/W) Secure Fault Address Register */
DECL|SFPA|member|uint32_t SFPA:1; /*!< bit: 3 Secure floating-point active */
DECL|SFSR|member|__IOM uint32_t SFSR; /*!< Offset: 0x014 (R/W) Secure Fault Status Register */
DECL|SHCSR|member|__IOM uint32_t SHCSR; /*!< Offset: 0x024 (R/W) System Handler Control and State Register */
DECL|SHPR|member|__IOM uint8_t SHPR[12U]; /*!< Offset: 0x018 (R/W) System Handlers Priority Registers (4-7, 8-11, 12-15) */
DECL|SLEEPCNT|member|__IOM uint32_t SLEEPCNT; /*!< Offset: 0x010 (R/W) Sleep Count Register */
DECL|SPPR|member|__IOM uint32_t SPPR; /*!< Offset: 0x0F0 (R/W) Selected Pin Protocol Register */
DECL|SPSEL|member|uint32_t SPSEL:1; /*!< bit: 1 Stack-pointer select */
DECL|SSPSR|member|__IOM uint32_t SSPSR; /*!< Offset: 0x000 (R/ ) Supported Parallel Port Size Register */
DECL|STIR|member|__OM uint32_t STIR; /*!< Offset: 0x200 ( /W) Software Triggered Interrupt Register */
DECL|STIR|member|__OM uint32_t STIR; /*!< Offset: 0xE00 ( /W) Software Trigger Interrupt Register */
DECL|SysTick_BASE_NS|macro|SysTick_BASE_NS
DECL|SysTick_BASE|macro|SysTick_BASE
DECL|SysTick_CALIB_NOREF_Msk|macro|SysTick_CALIB_NOREF_Msk
DECL|SysTick_CALIB_NOREF_Pos|macro|SysTick_CALIB_NOREF_Pos
DECL|SysTick_CALIB_SKEW_Msk|macro|SysTick_CALIB_SKEW_Msk
DECL|SysTick_CALIB_SKEW_Pos|macro|SysTick_CALIB_SKEW_Pos
DECL|SysTick_CALIB_TENMS_Msk|macro|SysTick_CALIB_TENMS_Msk
DECL|SysTick_CALIB_TENMS_Pos|macro|SysTick_CALIB_TENMS_Pos
DECL|SysTick_CTRL_CLKSOURCE_Msk|macro|SysTick_CTRL_CLKSOURCE_Msk
DECL|SysTick_CTRL_CLKSOURCE_Pos|macro|SysTick_CTRL_CLKSOURCE_Pos
DECL|SysTick_CTRL_COUNTFLAG_Msk|macro|SysTick_CTRL_COUNTFLAG_Msk
DECL|SysTick_CTRL_COUNTFLAG_Pos|macro|SysTick_CTRL_COUNTFLAG_Pos
DECL|SysTick_CTRL_ENABLE_Msk|macro|SysTick_CTRL_ENABLE_Msk
DECL|SysTick_CTRL_ENABLE_Pos|macro|SysTick_CTRL_ENABLE_Pos
DECL|SysTick_CTRL_TICKINT_Msk|macro|SysTick_CTRL_TICKINT_Msk
DECL|SysTick_CTRL_TICKINT_Pos|macro|SysTick_CTRL_TICKINT_Pos
DECL|SysTick_Config|function|__STATIC_INLINE uint32_t SysTick_Config(uint32_t ticks)
DECL|SysTick_LOAD_RELOAD_Msk|macro|SysTick_LOAD_RELOAD_Msk
DECL|SysTick_LOAD_RELOAD_Pos|macro|SysTick_LOAD_RELOAD_Pos
DECL|SysTick_NS|macro|SysTick_NS
DECL|SysTick_Type|typedef|} SysTick_Type;
DECL|SysTick_VAL_CURRENT_Msk|macro|SysTick_VAL_CURRENT_Msk
DECL|SysTick_VAL_CURRENT_Pos|macro|SysTick_VAL_CURRENT_Pos
DECL|SysTick|macro|SysTick
DECL|TCR|member|__IOM uint32_t TCR; /*!< Offset: 0xE80 (R/W) ITM Trace Control Register */
DECL|TER|member|__IOM uint32_t TER; /*!< Offset: 0xE00 (R/W) ITM Trace Enable Register */
DECL|TPI_ACPR_PRESCALER_Msk|macro|TPI_ACPR_PRESCALER_Msk
DECL|TPI_ACPR_PRESCALER_Pos|macro|TPI_ACPR_PRESCALER_Pos
DECL|TPI_BASE|macro|TPI_BASE
DECL|TPI_DEVID_AsynClkIn_Msk|macro|TPI_DEVID_AsynClkIn_Msk
DECL|TPI_DEVID_AsynClkIn_Pos|macro|TPI_DEVID_AsynClkIn_Pos
DECL|TPI_DEVID_MANCVALID_Msk|macro|TPI_DEVID_MANCVALID_Msk
DECL|TPI_DEVID_MANCVALID_Pos|macro|TPI_DEVID_MANCVALID_Pos
DECL|TPI_DEVID_MinBufSz_Msk|macro|TPI_DEVID_MinBufSz_Msk
DECL|TPI_DEVID_MinBufSz_Pos|macro|TPI_DEVID_MinBufSz_Pos
DECL|TPI_DEVID_NRZVALID_Msk|macro|TPI_DEVID_NRZVALID_Msk
DECL|TPI_DEVID_NRZVALID_Pos|macro|TPI_DEVID_NRZVALID_Pos
DECL|TPI_DEVID_NrTraceInput_Msk|macro|TPI_DEVID_NrTraceInput_Msk
DECL|TPI_DEVID_NrTraceInput_Pos|macro|TPI_DEVID_NrTraceInput_Pos
DECL|TPI_DEVID_PTINVALID_Msk|macro|TPI_DEVID_PTINVALID_Msk
DECL|TPI_DEVID_PTINVALID_Pos|macro|TPI_DEVID_PTINVALID_Pos
DECL|TPI_DEVTYPE_MajorType_Msk|macro|TPI_DEVTYPE_MajorType_Msk
DECL|TPI_DEVTYPE_MajorType_Pos|macro|TPI_DEVTYPE_MajorType_Pos
DECL|TPI_DEVTYPE_SubType_Msk|macro|TPI_DEVTYPE_SubType_Msk
DECL|TPI_DEVTYPE_SubType_Pos|macro|TPI_DEVTYPE_SubType_Pos
DECL|TPI_FFCR_EnFCont_Msk|macro|TPI_FFCR_EnFCont_Msk
DECL|TPI_FFCR_EnFCont_Pos|macro|TPI_FFCR_EnFCont_Pos
DECL|TPI_FFCR_TrigIn_Msk|macro|TPI_FFCR_TrigIn_Msk
DECL|TPI_FFCR_TrigIn_Pos|macro|TPI_FFCR_TrigIn_Pos
DECL|TPI_FFSR_FlInProg_Msk|macro|TPI_FFSR_FlInProg_Msk
DECL|TPI_FFSR_FlInProg_Pos|macro|TPI_FFSR_FlInProg_Pos
DECL|TPI_FFSR_FtNonStop_Msk|macro|TPI_FFSR_FtNonStop_Msk
DECL|TPI_FFSR_FtNonStop_Pos|macro|TPI_FFSR_FtNonStop_Pos
DECL|TPI_FFSR_FtStopped_Msk|macro|TPI_FFSR_FtStopped_Msk
DECL|TPI_FFSR_FtStopped_Pos|macro|TPI_FFSR_FtStopped_Pos
DECL|TPI_FFSR_TCPresent_Msk|macro|TPI_FFSR_TCPresent_Msk
DECL|TPI_FFSR_TCPresent_Pos|macro|TPI_FFSR_TCPresent_Pos
DECL|TPI_FIFO0_ETM0_Msk|macro|TPI_FIFO0_ETM0_Msk
DECL|TPI_FIFO0_ETM0_Pos|macro|TPI_FIFO0_ETM0_Pos
DECL|TPI_FIFO0_ETM1_Msk|macro|TPI_FIFO0_ETM1_Msk
DECL|TPI_FIFO0_ETM1_Pos|macro|TPI_FIFO0_ETM1_Pos
DECL|TPI_FIFO0_ETM2_Msk|macro|TPI_FIFO0_ETM2_Msk
DECL|TPI_FIFO0_ETM2_Pos|macro|TPI_FIFO0_ETM2_Pos
DECL|TPI_FIFO0_ETM_ATVALID_Msk|macro|TPI_FIFO0_ETM_ATVALID_Msk
DECL|TPI_FIFO0_ETM_ATVALID_Pos|macro|TPI_FIFO0_ETM_ATVALID_Pos
DECL|TPI_FIFO0_ETM_bytecount_Msk|macro|TPI_FIFO0_ETM_bytecount_Msk
DECL|TPI_FIFO0_ETM_bytecount_Pos|macro|TPI_FIFO0_ETM_bytecount_Pos
DECL|TPI_FIFO0_ITM_ATVALID_Msk|macro|TPI_FIFO0_ITM_ATVALID_Msk
DECL|TPI_FIFO0_ITM_ATVALID_Pos|macro|TPI_FIFO0_ITM_ATVALID_Pos
DECL|TPI_FIFO0_ITM_bytecount_Msk|macro|TPI_FIFO0_ITM_bytecount_Msk
DECL|TPI_FIFO0_ITM_bytecount_Pos|macro|TPI_FIFO0_ITM_bytecount_Pos
DECL|TPI_FIFO1_ETM_ATVALID_Msk|macro|TPI_FIFO1_ETM_ATVALID_Msk
DECL|TPI_FIFO1_ETM_ATVALID_Pos|macro|TPI_FIFO1_ETM_ATVALID_Pos
DECL|TPI_FIFO1_ETM_bytecount_Msk|macro|TPI_FIFO1_ETM_bytecount_Msk
DECL|TPI_FIFO1_ETM_bytecount_Pos|macro|TPI_FIFO1_ETM_bytecount_Pos
DECL|TPI_FIFO1_ITM0_Msk|macro|TPI_FIFO1_ITM0_Msk
DECL|TPI_FIFO1_ITM0_Pos|macro|TPI_FIFO1_ITM0_Pos
DECL|TPI_FIFO1_ITM1_Msk|macro|TPI_FIFO1_ITM1_Msk
DECL|TPI_FIFO1_ITM1_Pos|macro|TPI_FIFO1_ITM1_Pos
DECL|TPI_FIFO1_ITM2_Msk|macro|TPI_FIFO1_ITM2_Msk
DECL|TPI_FIFO1_ITM2_Pos|macro|TPI_FIFO1_ITM2_Pos
DECL|TPI_FIFO1_ITM_ATVALID_Msk|macro|TPI_FIFO1_ITM_ATVALID_Msk
DECL|TPI_FIFO1_ITM_ATVALID_Pos|macro|TPI_FIFO1_ITM_ATVALID_Pos
DECL|TPI_FIFO1_ITM_bytecount_Msk|macro|TPI_FIFO1_ITM_bytecount_Msk
DECL|TPI_FIFO1_ITM_bytecount_Pos|macro|TPI_FIFO1_ITM_bytecount_Pos
DECL|TPI_ITATBCTR0_ATREADY_Msk|macro|TPI_ITATBCTR0_ATREADY_Msk
DECL|TPI_ITATBCTR0_ATREADY_Pos|macro|TPI_ITATBCTR0_ATREADY_Pos
DECL|TPI_ITATBCTR2_ATREADY_Msk|macro|TPI_ITATBCTR2_ATREADY_Msk
DECL|TPI_ITATBCTR2_ATREADY_Pos|macro|TPI_ITATBCTR2_ATREADY_Pos
DECL|TPI_ITCTRL_Mode_Msk|macro|TPI_ITCTRL_Mode_Msk
DECL|TPI_ITCTRL_Mode_Pos|macro|TPI_ITCTRL_Mode_Pos
DECL|TPI_SPPR_TXMODE_Msk|macro|TPI_SPPR_TXMODE_Msk
DECL|TPI_SPPR_TXMODE_Pos|macro|TPI_SPPR_TXMODE_Pos
DECL|TPI_TRIGGER_TRIGGER_Msk|macro|TPI_TRIGGER_TRIGGER_Msk
DECL|TPI_TRIGGER_TRIGGER_Pos|macro|TPI_TRIGGER_TRIGGER_Pos
DECL|TPI_Type|typedef|} TPI_Type;
DECL|TPI|macro|TPI
DECL|TPR|member|__IOM uint32_t TPR; /*!< Offset: 0xE40 (R/W) ITM Trace Privilege Register */
DECL|TRIGGER|member|__IM uint32_t TRIGGER; /*!< Offset: 0xEE8 (R/ ) TRIGGER */
DECL|TYPE|member|__IM uint32_t TYPE; /*!< Offset: 0x000 (R/ ) MPU Type Register */
DECL|TYPE|member|__IM uint32_t TYPE; /*!< Offset: 0x004 (R/ ) SAU Type Register */
DECL|TZ_NVIC_ClearPendingIRQ_NS|function|__STATIC_INLINE void TZ_NVIC_ClearPendingIRQ_NS(IRQn_Type IRQn)
DECL|TZ_NVIC_DisableIRQ_NS|function|__STATIC_INLINE void TZ_NVIC_DisableIRQ_NS(IRQn_Type IRQn)
DECL|TZ_NVIC_EnableIRQ_NS|function|__STATIC_INLINE void TZ_NVIC_EnableIRQ_NS(IRQn_Type IRQn)
DECL|TZ_NVIC_GetActive_NS|function|__STATIC_INLINE uint32_t TZ_NVIC_GetActive_NS(IRQn_Type IRQn)
DECL|TZ_NVIC_GetEnableIRQ_NS|function|__STATIC_INLINE uint32_t TZ_NVIC_GetEnableIRQ_NS(IRQn_Type IRQn)
DECL|TZ_NVIC_GetPendingIRQ_NS|function|__STATIC_INLINE uint32_t TZ_NVIC_GetPendingIRQ_NS(IRQn_Type IRQn)
DECL|TZ_NVIC_GetPriorityGrouping_NS|function|__STATIC_INLINE uint32_t TZ_NVIC_GetPriorityGrouping_NS(void)
DECL|TZ_NVIC_GetPriority_NS|function|__STATIC_INLINE uint32_t TZ_NVIC_GetPriority_NS(IRQn_Type IRQn)
DECL|TZ_NVIC_SetPendingIRQ_NS|function|__STATIC_INLINE void TZ_NVIC_SetPendingIRQ_NS(IRQn_Type IRQn)
DECL|TZ_NVIC_SetPriorityGrouping_NS|function|__STATIC_INLINE void TZ_NVIC_SetPriorityGrouping_NS(uint32_t PriorityGroup)
DECL|TZ_NVIC_SetPriority_NS|function|__STATIC_INLINE void TZ_NVIC_SetPriority_NS(IRQn_Type IRQn, uint32_t priority)
DECL|TZ_SAU_Disable|function|__STATIC_INLINE void TZ_SAU_Disable(void)
DECL|TZ_SAU_Enable|function|__STATIC_INLINE void TZ_SAU_Enable(void)
DECL|TZ_SysTick_Config_NS|function|__STATIC_INLINE uint32_t TZ_SysTick_Config_NS(uint32_t ticks)
DECL|T|member|uint32_t T:1; /*!< bit: 24 Thumb bit (read 0) */
DECL|VAL|member|__IOM uint32_t VAL; /*!< Offset: 0x008 (R/W) SysTick Current Value Register */
DECL|VTOR|member|__IOM uint32_t VTOR; /*!< Offset: 0x008 (R/W) Vector Table Offset Register */
DECL|V|member|uint32_t V:1; /*!< bit: 28 Overflow condition code flag */
DECL|V|member|uint32_t V:1; /*!< bit: 28 Overflow condition code flag */
DECL|Z|member|uint32_t Z:1; /*!< bit: 30 Zero condition code flag */
DECL|Z|member|uint32_t Z:1; /*!< bit: 30 Zero condition code flag */
DECL|_FLD2VAL|macro|_FLD2VAL
DECL|_VAL2FLD|macro|_VAL2FLD
DECL|__ARMv8MML_CMSIS_VERSION_MAIN|macro|__ARMv8MML_CMSIS_VERSION_MAIN
DECL|__ARMv8MML_CMSIS_VERSION_SUB|macro|__ARMv8MML_CMSIS_VERSION_SUB
DECL|__ARMv8MML_CMSIS_VERSION|macro|__ARMv8MML_CMSIS_VERSION
DECL|__ARMv8MML_REV|macro|__ARMv8MML_REV
DECL|__CORE_ARMV8MML_H_DEPENDANT|macro|__CORE_ARMV8MML_H_DEPENDANT
DECL|__CORE_ARMV8MML_H_GENERIC|macro|__CORE_ARMV8MML_H_GENERIC
DECL|__CORTEX_M|macro|__CORTEX_M
DECL|__DSP_PRESENT|macro|__DSP_PRESENT
DECL|__DSP_USED|macro|__DSP_USED
DECL|__DSP_USED|macro|__DSP_USED
DECL|__DSP_USED|macro|__DSP_USED
DECL|__DSP_USED|macro|__DSP_USED
DECL|__DSP_USED|macro|__DSP_USED
DECL|__DSP_USED|macro|__DSP_USED
DECL|__DSP_USED|macro|__DSP_USED
DECL|__DSP_USED|macro|__DSP_USED
DECL|__DSP_USED|macro|__DSP_USED
DECL|__DSP_USED|macro|__DSP_USED
DECL|__DSP_USED|macro|__DSP_USED
DECL|__DSP_USED|macro|__DSP_USED
DECL|__FPU_PRESENT|macro|__FPU_PRESENT
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__FPU_USED|macro|__FPU_USED
DECL|__IM|macro|__IM
DECL|__IOM|macro|__IOM
DECL|__IO|macro|__IO
DECL|__I|macro|__I
DECL|__I|macro|__I
DECL|__MPU_PRESENT|macro|__MPU_PRESENT
DECL|__NVIC_ClearPendingIRQ|function|__STATIC_INLINE void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
DECL|__NVIC_DisableIRQ|function|__STATIC_INLINE void __NVIC_DisableIRQ(IRQn_Type IRQn)
DECL|__NVIC_EnableIRQ|function|__STATIC_INLINE void __NVIC_EnableIRQ(IRQn_Type IRQn)
DECL|__NVIC_GetActive|function|__STATIC_INLINE uint32_t __NVIC_GetActive(IRQn_Type IRQn)
DECL|__NVIC_GetEnableIRQ|function|__STATIC_INLINE uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
DECL|__NVIC_GetPendingIRQ|function|__STATIC_INLINE uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
DECL|__NVIC_GetPriorityGrouping|function|__STATIC_INLINE uint32_t __NVIC_GetPriorityGrouping(void)
DECL|__NVIC_GetPriority|function|__STATIC_INLINE uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
DECL|__NVIC_GetVector|function|__STATIC_INLINE uint32_t __NVIC_GetVector(IRQn_Type IRQn)
DECL|__NVIC_PRIO_BITS|macro|__NVIC_PRIO_BITS
DECL|__NVIC_SetPendingIRQ|function|__STATIC_INLINE void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
DECL|__NVIC_SetPriorityGrouping|function|__STATIC_INLINE void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
DECL|__NVIC_SetPriority|function|__STATIC_INLINE void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
DECL|__NVIC_SetVector|function|__STATIC_INLINE void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
DECL|__NVIC_SystemReset|function|__STATIC_INLINE void __NVIC_SystemReset(void)
DECL|__OM|macro|__OM
DECL|__O|macro|__O
DECL|__SAUREGION_PRESENT|macro|__SAUREGION_PRESENT
DECL|__Vendor_SysTickConfig|macro|__Vendor_SysTickConfig
DECL|_reserved0|member|uint32_t _reserved0:16; /*!< bit: 0..15 Reserved */
DECL|_reserved0|member|uint32_t _reserved0:23; /*!< bit: 9..31 Reserved */
DECL|_reserved0|member|uint32_t _reserved0:7; /*!< bit: 9..15 Reserved */
DECL|_reserved1|member|uint32_t _reserved1:28; /*!< bit: 4..31 Reserved */
DECL|_reserved1|member|uint32_t _reserved1:4; /*!< bit: 20..23 Reserved */
DECL|_reserved1|member|uint32_t _reserved1:7; /*!< bit: 20..26 Reserved */
DECL|b|member|} b; /*!< Structure used for bit access */
DECL|b|member|} b; /*!< Structure used for bit access */
DECL|b|member|} b; /*!< Structure used for bit access */
DECL|b|member|} b; /*!< Structure used for bit access */
DECL|nPRIV|member|uint32_t nPRIV:1; /*!< bit: 0 Execution privilege in Thread mode */
DECL|u16|member|__OM uint16_t u16; /*!< Offset: 0x000 ( /W) ITM Stimulus Port 16-bit */
DECL|u32|member|__OM uint32_t u32; /*!< Offset: 0x000 ( /W) ITM Stimulus Port 32-bit */
DECL|u8|member|__OM uint8_t u8; /*!< Offset: 0x000 ( /W) ITM Stimulus Port 8-bit */
DECL|w|member|uint32_t w; /*!< Type used for word access */
DECL|w|member|uint32_t w; /*!< Type used for word access */
DECL|w|member|uint32_t w; /*!< Type used for word access */
DECL|w|member|uint32_t w; /*!< Type used for word access */
DECL|xPSR_C_Msk|macro|xPSR_C_Msk
DECL|xPSR_C_Pos|macro|xPSR_C_Pos
DECL|xPSR_GE_Msk|macro|xPSR_GE_Msk
DECL|xPSR_GE_Pos|macro|xPSR_GE_Pos
DECL|xPSR_ISR_Msk|macro|xPSR_ISR_Msk
DECL|xPSR_ISR_Pos|macro|xPSR_ISR_Pos
DECL|xPSR_IT_Msk|macro|xPSR_IT_Msk
DECL|xPSR_IT_Pos|macro|xPSR_IT_Pos
DECL|xPSR_N_Msk|macro|xPSR_N_Msk
DECL|xPSR_N_Pos|macro|xPSR_N_Pos
DECL|xPSR_Q_Msk|macro|xPSR_Q_Msk
DECL|xPSR_Q_Pos|macro|xPSR_Q_Pos
DECL|xPSR_T_Msk|macro|xPSR_T_Msk
DECL|xPSR_T_Pos|macro|xPSR_T_Pos
DECL|xPSR_Type|typedef|} xPSR_Type;
DECL|xPSR_V_Msk|macro|xPSR_V_Msk
DECL|xPSR_V_Pos|macro|xPSR_V_Pos
DECL|xPSR_Z_Msk|macro|xPSR_Z_Msk
DECL|xPSR_Z_Pos|macro|xPSR_Z_Pos
