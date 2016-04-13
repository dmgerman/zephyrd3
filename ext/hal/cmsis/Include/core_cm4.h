DECL|ACPR|member|__IOM uint32_t ACPR; /*!< Offset: 0x010 (R/W) Asynchronous Clock Prescaler Register */
DECL|ACTLR|member|__IOM uint32_t ACTLR; /*!< Offset: 0x008 (R/W) Auxiliary Control Register */
DECL|ADR|member|__IM uint32_t ADR; /*!< Offset: 0x04C (R/ ) Auxiliary Feature Register */
DECL|AFSR|member|__IOM uint32_t AFSR; /*!< Offset: 0x03C (R/W) Auxiliary Fault Status Register */
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
DECL|CALIB|member|__IM uint32_t CALIB; /*!< Offset: 0x00C (R/ ) SysTick Calibration Register */
DECL|CCR|member|__IOM uint32_t CCR; /*!< Offset: 0x014 (R/W) Configuration Control Register */
DECL|CFSR|member|__IOM uint32_t CFSR; /*!< Offset: 0x028 (R/W) Configurable Fault Status Register */
DECL|CID0|member|__IM uint32_t CID0; /*!< Offset: 0xFF0 (R/ ) ITM Component Identification Register #0 */
DECL|CID1|member|__IM uint32_t CID1; /*!< Offset: 0xFF4 (R/ ) ITM Component Identification Register #1 */
DECL|CID2|member|__IM uint32_t CID2; /*!< Offset: 0xFF8 (R/ ) ITM Component Identification Register #2 */
DECL|CID3|member|__IM uint32_t CID3; /*!< Offset: 0xFFC (R/ ) ITM Component Identification Register #3 */
DECL|CLAIMCLR|member|__IOM uint32_t CLAIMCLR; /*!< Offset: 0xFA4 (R/W) Claim tag clear */
DECL|CLAIMSET|member|__IOM uint32_t CLAIMSET; /*!< Offset: 0xFA0 (R/W) Claim tag set */
DECL|COMP0|member|__IOM uint32_t COMP0; /*!< Offset: 0x020 (R/W) Comparator Register 0 */
DECL|COMP1|member|__IOM uint32_t COMP1; /*!< Offset: 0x030 (R/W) Comparator Register 1 */
DECL|COMP2|member|__IOM uint32_t COMP2; /*!< Offset: 0x040 (R/W) Comparator Register 2 */
DECL|COMP3|member|__IOM uint32_t COMP3; /*!< Offset: 0x050 (R/W) Comparator Register 3 */
DECL|CONTROL_FPCA_Msk|macro|CONTROL_FPCA_Msk
DECL|CONTROL_FPCA_Pos|macro|CONTROL_FPCA_Pos
DECL|CONTROL_SPSEL_Msk|macro|CONTROL_SPSEL_Msk
DECL|CONTROL_SPSEL_Pos|macro|CONTROL_SPSEL_Pos
DECL|CONTROL_Type|typedef|} CONTROL_Type;
DECL|CONTROL_nPRIV_Msk|macro|CONTROL_nPRIV_Msk
DECL|CONTROL_nPRIV_Pos|macro|CONTROL_nPRIV_Pos
DECL|CPACR|member|__IOM uint32_t CPACR; /*!< Offset: 0x088 (R/W) Coprocessor Access Control Register */
DECL|CPICNT|member|__IOM uint32_t CPICNT; /*!< Offset: 0x008 (R/W) CPI Count Register */
DECL|CPUID|member|__IM uint32_t CPUID; /*!< Offset: 0x000 (R/ ) CPUID Base Register */
DECL|CSPSR|member|__IOM uint32_t CSPSR; /*!< Offset: 0x004 (R/W) Current Parallel Port Size Register */
DECL|CTRL|member|__IOM uint32_t CTRL; /*!< Offset: 0x000 (R/W) Control Register */
DECL|CTRL|member|__IOM uint32_t CTRL; /*!< Offset: 0x000 (R/W) SysTick Control and Status Register */
DECL|CTRL|member|__IOM uint32_t CTRL; /*!< Offset: 0x004 (R/W) MPU Control Register */
DECL|CYCCNT|member|__IOM uint32_t CYCCNT; /*!< Offset: 0x004 (R/W) Cycle Count Register */
DECL|CoreDebug_BASE|macro|CoreDebug_BASE
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
DECL|CoreDebug_DHCSR_S_RETIRE_ST_Msk|macro|CoreDebug_DHCSR_S_RETIRE_ST_Msk
DECL|CoreDebug_DHCSR_S_RETIRE_ST_Pos|macro|CoreDebug_DHCSR_S_RETIRE_ST_Pos
DECL|CoreDebug_DHCSR_S_SLEEP_Msk|macro|CoreDebug_DHCSR_S_SLEEP_Msk
DECL|CoreDebug_DHCSR_S_SLEEP_Pos|macro|CoreDebug_DHCSR_S_SLEEP_Pos
DECL|CoreDebug_Type|typedef|} CoreDebug_Type;
DECL|CoreDebug|macro|CoreDebug
DECL|C|member|uint32_t C:1; /*!< bit: 29 Carry condition code flag */
DECL|C|member|uint32_t C:1; /*!< bit: 29 Carry condition code flag */
DECL|DCRDR|member|__IOM uint32_t DCRDR; /*!< Offset: 0x008 (R/W) Debug Core Register Data Register */
DECL|DCRSR|member|__OM uint32_t DCRSR; /*!< Offset: 0x004 ( /W) Debug Core Register Selector Register */
DECL|DEMCR|member|__IOM uint32_t DEMCR; /*!< Offset: 0x00C (R/W) Debug Exception and Monitor Control Register */
DECL|DEVID|member|__IM uint32_t DEVID; /*!< Offset: 0xFC8 (R/ ) TPIU_DEVID */
DECL|DEVTYPE|member|__IM uint32_t DEVTYPE; /*!< Offset: 0xFCC (R/ ) TPIU_DEVTYPE */
DECL|DFR|member|__IM uint32_t DFR; /*!< Offset: 0x048 (R/ ) Debug Feature Register */
DECL|DFSR|member|__IOM uint32_t DFSR; /*!< Offset: 0x030 (R/W) Debug Fault Status Register */
DECL|DHCSR|member|__IOM uint32_t DHCSR; /*!< Offset: 0x000 (R/W) Debug Halting Control and Status Register */
DECL|DWT_BASE|macro|DWT_BASE
DECL|DWT_CPICNT_CPICNT_Msk|macro|DWT_CPICNT_CPICNT_Msk
DECL|DWT_CPICNT_CPICNT_Pos|macro|DWT_CPICNT_CPICNT_Pos
DECL|DWT_CTRL_CPIEVTENA_Msk|macro|DWT_CTRL_CPIEVTENA_Msk
DECL|DWT_CTRL_CPIEVTENA_Pos|macro|DWT_CTRL_CPIEVTENA_Pos
DECL|DWT_CTRL_CYCCNTENA_Msk|macro|DWT_CTRL_CYCCNTENA_Msk
DECL|DWT_CTRL_CYCCNTENA_Pos|macro|DWT_CTRL_CYCCNTENA_Pos
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
DECL|DWT_FUNCTION_CYCMATCH_Msk|macro|DWT_FUNCTION_CYCMATCH_Msk
DECL|DWT_FUNCTION_CYCMATCH_Pos|macro|DWT_FUNCTION_CYCMATCH_Pos
DECL|DWT_FUNCTION_DATAVADDR0_Msk|macro|DWT_FUNCTION_DATAVADDR0_Msk
DECL|DWT_FUNCTION_DATAVADDR0_Pos|macro|DWT_FUNCTION_DATAVADDR0_Pos
DECL|DWT_FUNCTION_DATAVADDR1_Msk|macro|DWT_FUNCTION_DATAVADDR1_Msk
DECL|DWT_FUNCTION_DATAVADDR1_Pos|macro|DWT_FUNCTION_DATAVADDR1_Pos
DECL|DWT_FUNCTION_DATAVMATCH_Msk|macro|DWT_FUNCTION_DATAVMATCH_Msk
DECL|DWT_FUNCTION_DATAVMATCH_Pos|macro|DWT_FUNCTION_DATAVMATCH_Pos
DECL|DWT_FUNCTION_DATAVSIZE_Msk|macro|DWT_FUNCTION_DATAVSIZE_Msk
DECL|DWT_FUNCTION_DATAVSIZE_Pos|macro|DWT_FUNCTION_DATAVSIZE_Pos
DECL|DWT_FUNCTION_EMITRANGE_Msk|macro|DWT_FUNCTION_EMITRANGE_Msk
DECL|DWT_FUNCTION_EMITRANGE_Pos|macro|DWT_FUNCTION_EMITRANGE_Pos
DECL|DWT_FUNCTION_FUNCTION_Msk|macro|DWT_FUNCTION_FUNCTION_Msk
DECL|DWT_FUNCTION_FUNCTION_Pos|macro|DWT_FUNCTION_FUNCTION_Pos
DECL|DWT_FUNCTION_LNK1ENA_Msk|macro|DWT_FUNCTION_LNK1ENA_Msk
DECL|DWT_FUNCTION_LNK1ENA_Pos|macro|DWT_FUNCTION_LNK1ENA_Pos
DECL|DWT_FUNCTION_MATCHED_Msk|macro|DWT_FUNCTION_MATCHED_Msk
DECL|DWT_FUNCTION_MATCHED_Pos|macro|DWT_FUNCTION_MATCHED_Pos
DECL|DWT_LSUCNT_LSUCNT_Msk|macro|DWT_LSUCNT_LSUCNT_Msk
DECL|DWT_LSUCNT_LSUCNT_Pos|macro|DWT_LSUCNT_LSUCNT_Pos
DECL|DWT_MASK_MASK_Msk|macro|DWT_MASK_MASK_Msk
DECL|DWT_MASK_MASK_Pos|macro|DWT_MASK_MASK_Pos
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
DECL|FPCA|member|uint32_t FPCA:1; /*!< bit: 2 FP extension active flag */
DECL|FPCCR|member|__IOM uint32_t FPCCR; /*!< Offset: 0x004 (R/W) Floating-Point Context Control Register */
DECL|FPDSCR|member|__IOM uint32_t FPDSCR; /*!< Offset: 0x00C (R/W) Floating-Point Default Status Control Register */
DECL|FPU_BASE|macro|FPU_BASE
DECL|FPU_FPCAR_ADDRESS_Msk|macro|FPU_FPCAR_ADDRESS_Msk
DECL|FPU_FPCAR_ADDRESS_Pos|macro|FPU_FPCAR_ADDRESS_Pos
DECL|FPU_FPCCR_ASPEN_Msk|macro|FPU_FPCCR_ASPEN_Msk
DECL|FPU_FPCCR_ASPEN_Pos|macro|FPU_FPCCR_ASPEN_Pos
DECL|FPU_FPCCR_BFRDY_Msk|macro|FPU_FPCCR_BFRDY_Msk
DECL|FPU_FPCCR_BFRDY_Pos|macro|FPU_FPCCR_BFRDY_Pos
DECL|FPU_FPCCR_HFRDY_Msk|macro|FPU_FPCCR_HFRDY_Msk
DECL|FPU_FPCCR_HFRDY_Pos|macro|FPU_FPCCR_HFRDY_Pos
DECL|FPU_FPCCR_LSPACT_Msk|macro|FPU_FPCCR_LSPACT_Msk
DECL|FPU_FPCCR_LSPACT_Pos|macro|FPU_FPCCR_LSPACT_Pos
DECL|FPU_FPCCR_LSPEN_Msk|macro|FPU_FPCCR_LSPEN_Msk
DECL|FPU_FPCCR_LSPEN_Pos|macro|FPU_FPCCR_LSPEN_Pos
DECL|FPU_FPCCR_MMRDY_Msk|macro|FPU_FPCCR_MMRDY_Msk
DECL|FPU_FPCCR_MMRDY_Pos|macro|FPU_FPCCR_MMRDY_Pos
DECL|FPU_FPCCR_MONRDY_Msk|macro|FPU_FPCCR_MONRDY_Msk
DECL|FPU_FPCCR_MONRDY_Pos|macro|FPU_FPCCR_MONRDY_Pos
DECL|FPU_FPCCR_THREAD_Msk|macro|FPU_FPCCR_THREAD_Msk
DECL|FPU_FPCCR_THREAD_Pos|macro|FPU_FPCCR_THREAD_Pos
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
DECL|FPU_Type|typedef|} FPU_Type;
DECL|FPU|macro|FPU
DECL|FSCR|member|__IM uint32_t FSCR; /*!< Offset: 0x308 (R/ ) Formatter Synchronization Counter Register */
DECL|FUNCTION0|member|__IOM uint32_t FUNCTION0; /*!< Offset: 0x028 (R/W) Function Register 0 */
DECL|FUNCTION1|member|__IOM uint32_t FUNCTION1; /*!< Offset: 0x038 (R/W) Function Register 1 */
DECL|FUNCTION2|member|__IOM uint32_t FUNCTION2; /*!< Offset: 0x048 (R/W) Function Register 2 */
DECL|FUNCTION3|member|__IOM uint32_t FUNCTION3; /*!< Offset: 0x058 (R/W) Function Register 3 */
DECL|GE|member|uint32_t GE:4; /*!< bit: 16..19 Greater than or Equal flags */
DECL|GE|member|uint32_t GE:4; /*!< bit: 16..19 Greater than or Equal flags */
DECL|HFSR|member|__IOM uint32_t HFSR; /*!< Offset: 0x02C (R/W) HardFault Status Register */
DECL|IABR|member|__IOM uint32_t IABR[8U]; /*!< Offset: 0x200 (R/W) Interrupt Active bit Register */
DECL|ICER|member|__IOM uint32_t ICER[8U]; /*!< Offset: 0x080 (R/W) Interrupt Clear Enable Register */
DECL|ICPR|member|__IOM uint32_t ICPR[8U]; /*!< Offset: 0x180 (R/W) Interrupt Clear Pending Register */
DECL|ICSR|member|__IOM uint32_t ICSR; /*!< Offset: 0x004 (R/W) Interrupt Control and State Register */
DECL|ICTR|member|__IM uint32_t ICTR; /*!< Offset: 0x004 (R/ ) Interrupt Controller Type Register */
DECL|IMCR|member|__IOM uint32_t IMCR; /*!< Offset: 0xF00 (R/W) ITM Integration Mode Control Register */
DECL|IPSR_ISR_Msk|macro|IPSR_ISR_Msk
DECL|IPSR_ISR_Pos|macro|IPSR_ISR_Pos
DECL|IPSR_Type|typedef|} IPSR_Type;
DECL|IP|member|__IOM uint8_t IP[240U]; /*!< Offset: 0x300 (R/W) Interrupt Priority Register (8Bit wide) */
DECL|IRR|member|__IM uint32_t IRR; /*!< Offset: 0xEFC (R/ ) ITM Integration Read Register */
DECL|ISAR|member|__IM uint32_t ISAR[5U]; /*!< Offset: 0x060 (R/ ) Instruction Set Attributes Register */
DECL|ISER|member|__IOM uint32_t ISER[8U]; /*!< Offset: 0x000 (R/W) Interrupt Set Enable Register */
DECL|ISPR|member|__IOM uint32_t ISPR[8U]; /*!< Offset: 0x100 (R/W) Interrupt Set Pending Register */
DECL|ISR|member|uint32_t ISR:9; /*!< bit: 0.. 8 Exception number */
DECL|ISR|member|uint32_t ISR:9; /*!< bit: 0.. 8 Exception number */
DECL|ITATBCTR0|member|__IM uint32_t ITATBCTR0; /*!< Offset: 0xEF8 (R/ ) ITATBCTR0 */
DECL|ITATBCTR2|member|__IM uint32_t ITATBCTR2; /*!< Offset: 0xEF0 (R/ ) ITATBCTR2 */
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
DECL|ITM_SendChar|function|__STATIC_INLINE uint32_t ITM_SendChar (uint32_t ch)
DECL|ITM_TCR_BUSY_Msk|macro|ITM_TCR_BUSY_Msk
DECL|ITM_TCR_BUSY_Pos|macro|ITM_TCR_BUSY_Pos
DECL|ITM_TCR_DWTENA_Msk|macro|ITM_TCR_DWTENA_Msk
DECL|ITM_TCR_DWTENA_Pos|macro|ITM_TCR_DWTENA_Pos
DECL|ITM_TCR_GTSFREQ_Msk|macro|ITM_TCR_GTSFREQ_Msk
DECL|ITM_TCR_GTSFREQ_Pos|macro|ITM_TCR_GTSFREQ_Pos
DECL|ITM_TCR_ITMENA_Msk|macro|ITM_TCR_ITMENA_Msk
DECL|ITM_TCR_ITMENA_Pos|macro|ITM_TCR_ITMENA_Pos
DECL|ITM_TCR_SWOENA_Msk|macro|ITM_TCR_SWOENA_Msk
DECL|ITM_TCR_SWOENA_Pos|macro|ITM_TCR_SWOENA_Pos
DECL|ITM_TCR_SYNCENA_Msk|macro|ITM_TCR_SYNCENA_Msk
DECL|ITM_TCR_SYNCENA_Pos|macro|ITM_TCR_SYNCENA_Pos
DECL|ITM_TCR_TSENA_Msk|macro|ITM_TCR_TSENA_Msk
DECL|ITM_TCR_TSENA_Pos|macro|ITM_TCR_TSENA_Pos
DECL|ITM_TCR_TSPrescale_Msk|macro|ITM_TCR_TSPrescale_Msk
DECL|ITM_TCR_TSPrescale_Pos|macro|ITM_TCR_TSPrescale_Pos
DECL|ITM_TCR_TraceBusID_Msk|macro|ITM_TCR_TraceBusID_Msk
DECL|ITM_TCR_TraceBusID_Pos|macro|ITM_TCR_TraceBusID_Pos
DECL|ITM_TPR_PRIVMASK_Msk|macro|ITM_TPR_PRIVMASK_Msk
DECL|ITM_TPR_PRIVMASK_Pos|macro|ITM_TPR_PRIVMASK_Pos
DECL|ITM_Type|typedef|} ITM_Type;
DECL|ITM|macro|ITM
DECL|IT|member|uint32_t IT:2; /*!< bit: 25..26 saved IT state (read 0) */
DECL|IWR|member|__OM uint32_t IWR; /*!< Offset: 0xEF8 ( /W) ITM Integration Write Register */
DECL|LAR|member|__OM uint32_t LAR; /*!< Offset: 0xFB0 ( /W) ITM Lock Access Register */
DECL|LOAD|member|__IOM uint32_t LOAD; /*!< Offset: 0x004 (R/W) SysTick Reload Value Register */
DECL|LSR|member|__IM uint32_t LSR; /*!< Offset: 0xFB4 (R/ ) ITM Lock Status Register */
DECL|LSUCNT|member|__IOM uint32_t LSUCNT; /*!< Offset: 0x014 (R/W) LSU Count Register */
DECL|MASK0|member|__IOM uint32_t MASK0; /*!< Offset: 0x024 (R/W) Mask Register 0 */
DECL|MASK1|member|__IOM uint32_t MASK1; /*!< Offset: 0x034 (R/W) Mask Register 1 */
DECL|MASK2|member|__IOM uint32_t MASK2; /*!< Offset: 0x044 (R/W) Mask Register 2 */
DECL|MASK3|member|__IOM uint32_t MASK3; /*!< Offset: 0x054 (R/W) Mask Register 3 */
DECL|MMFAR|member|__IOM uint32_t MMFAR; /*!< Offset: 0x034 (R/W) MemManage Fault Address Register */
DECL|MMFR|member|__IM uint32_t MMFR[4U]; /*!< Offset: 0x050 (R/ ) Memory Model Feature Register */
DECL|MPU_BASE|macro|MPU_BASE
DECL|MPU_CTRL_ENABLE_Msk|macro|MPU_CTRL_ENABLE_Msk
DECL|MPU_CTRL_ENABLE_Pos|macro|MPU_CTRL_ENABLE_Pos
DECL|MPU_CTRL_HFNMIENA_Msk|macro|MPU_CTRL_HFNMIENA_Msk
DECL|MPU_CTRL_HFNMIENA_Pos|macro|MPU_CTRL_HFNMIENA_Pos
DECL|MPU_CTRL_PRIVDEFENA_Msk|macro|MPU_CTRL_PRIVDEFENA_Msk
DECL|MPU_CTRL_PRIVDEFENA_Pos|macro|MPU_CTRL_PRIVDEFENA_Pos
DECL|MPU_RASR_AP_Msk|macro|MPU_RASR_AP_Msk
DECL|MPU_RASR_AP_Pos|macro|MPU_RASR_AP_Pos
DECL|MPU_RASR_ATTRS_Msk|macro|MPU_RASR_ATTRS_Msk
DECL|MPU_RASR_ATTRS_Pos|macro|MPU_RASR_ATTRS_Pos
DECL|MPU_RASR_B_Msk|macro|MPU_RASR_B_Msk
DECL|MPU_RASR_B_Pos|macro|MPU_RASR_B_Pos
DECL|MPU_RASR_C_Msk|macro|MPU_RASR_C_Msk
DECL|MPU_RASR_C_Pos|macro|MPU_RASR_C_Pos
DECL|MPU_RASR_ENABLE_Msk|macro|MPU_RASR_ENABLE_Msk
DECL|MPU_RASR_ENABLE_Pos|macro|MPU_RASR_ENABLE_Pos
DECL|MPU_RASR_SIZE_Msk|macro|MPU_RASR_SIZE_Msk
DECL|MPU_RASR_SIZE_Pos|macro|MPU_RASR_SIZE_Pos
DECL|MPU_RASR_SRD_Msk|macro|MPU_RASR_SRD_Msk
DECL|MPU_RASR_SRD_Pos|macro|MPU_RASR_SRD_Pos
DECL|MPU_RASR_S_Msk|macro|MPU_RASR_S_Msk
DECL|MPU_RASR_S_Pos|macro|MPU_RASR_S_Pos
DECL|MPU_RASR_TEX_Msk|macro|MPU_RASR_TEX_Msk
DECL|MPU_RASR_TEX_Pos|macro|MPU_RASR_TEX_Pos
DECL|MPU_RASR_XN_Msk|macro|MPU_RASR_XN_Msk
DECL|MPU_RASR_XN_Pos|macro|MPU_RASR_XN_Pos
DECL|MPU_RBAR_ADDR_Msk|macro|MPU_RBAR_ADDR_Msk
DECL|MPU_RBAR_ADDR_Pos|macro|MPU_RBAR_ADDR_Pos
DECL|MPU_RBAR_REGION_Msk|macro|MPU_RBAR_REGION_Msk
DECL|MPU_RBAR_REGION_Pos|macro|MPU_RBAR_REGION_Pos
DECL|MPU_RBAR_VALID_Msk|macro|MPU_RBAR_VALID_Msk
DECL|MPU_RBAR_VALID_Pos|macro|MPU_RBAR_VALID_Pos
DECL|MPU_RNR_REGION_Msk|macro|MPU_RNR_REGION_Msk
DECL|MPU_RNR_REGION_Pos|macro|MPU_RNR_REGION_Pos
DECL|MPU_TYPE_DREGION_Msk|macro|MPU_TYPE_DREGION_Msk
DECL|MPU_TYPE_DREGION_Pos|macro|MPU_TYPE_DREGION_Pos
DECL|MPU_TYPE_IREGION_Msk|macro|MPU_TYPE_IREGION_Msk
DECL|MPU_TYPE_IREGION_Pos|macro|MPU_TYPE_IREGION_Pos
DECL|MPU_TYPE_SEPARATE_Msk|macro|MPU_TYPE_SEPARATE_Msk
DECL|MPU_TYPE_SEPARATE_Pos|macro|MPU_TYPE_SEPARATE_Pos
DECL|MPU_Type|typedef|} MPU_Type;
DECL|MPU|macro|MPU
DECL|MVFR0|member|__IM uint32_t MVFR0; /*!< Offset: 0x010 (R/ ) Media and FP Feature Register 0 */
DECL|MVFR1|member|__IM uint32_t MVFR1; /*!< Offset: 0x014 (R/ ) Media and FP Feature Register 1 */
DECL|NVIC_BASE|macro|NVIC_BASE
DECL|NVIC_ClearPendingIRQ|function|__STATIC_INLINE void NVIC_ClearPendingIRQ(IRQn_Type IRQn)
DECL|NVIC_DecodePriority|function|__STATIC_INLINE void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
DECL|NVIC_DisableIRQ|function|__STATIC_INLINE void NVIC_DisableIRQ(IRQn_Type IRQn)
DECL|NVIC_EnableIRQ|function|__STATIC_INLINE void NVIC_EnableIRQ(IRQn_Type IRQn)
DECL|NVIC_EncodePriority|function|__STATIC_INLINE uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
DECL|NVIC_GetActive|function|__STATIC_INLINE uint32_t NVIC_GetActive(IRQn_Type IRQn)
DECL|NVIC_GetPendingIRQ|function|__STATIC_INLINE uint32_t NVIC_GetPendingIRQ(IRQn_Type IRQn)
DECL|NVIC_GetPriorityGrouping|function|__STATIC_INLINE uint32_t NVIC_GetPriorityGrouping(void)
DECL|NVIC_GetPriority|function|__STATIC_INLINE uint32_t NVIC_GetPriority(IRQn_Type IRQn)
DECL|NVIC_STIR_INTID_Msk|macro|NVIC_STIR_INTID_Msk
DECL|NVIC_STIR_INTID_Pos|macro|NVIC_STIR_INTID_Pos
DECL|NVIC_SetPendingIRQ|function|__STATIC_INLINE void NVIC_SetPendingIRQ(IRQn_Type IRQn)
DECL|NVIC_SetPriorityGrouping|function|__STATIC_INLINE void NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
DECL|NVIC_SetPriority|function|__STATIC_INLINE void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
DECL|NVIC_SystemReset|function|__STATIC_INLINE void NVIC_SystemReset(void)
DECL|NVIC_Type|typedef|} NVIC_Type;
DECL|NVIC|macro|NVIC
DECL|N|member|uint32_t N:1; /*!< bit: 31 Negative condition code flag */
DECL|N|member|uint32_t N:1; /*!< bit: 31 Negative condition code flag */
DECL|PCSR|member|__IM uint32_t PCSR; /*!< Offset: 0x01C (R/ ) Program Counter Sample Register */
DECL|PFR|member|__IM uint32_t PFR[2U]; /*!< Offset: 0x040 (R/ ) Processor Feature Register */
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
DECL|RASR_A1|member|__IOM uint32_t RASR_A1; /*!< Offset: 0x018 (R/W) MPU Alias 1 Region Attribute and Size Register */
DECL|RASR_A2|member|__IOM uint32_t RASR_A2; /*!< Offset: 0x020 (R/W) MPU Alias 2 Region Attribute and Size Register */
DECL|RASR_A3|member|__IOM uint32_t RASR_A3; /*!< Offset: 0x028 (R/W) MPU Alias 3 Region Attribute and Size Register */
DECL|RASR|member|__IOM uint32_t RASR; /*!< Offset: 0x010 (R/W) MPU Region Attribute and Size Register */
DECL|RBAR_A1|member|__IOM uint32_t RBAR_A1; /*!< Offset: 0x014 (R/W) MPU Alias 1 Region Base Address Register */
DECL|RBAR_A2|member|__IOM uint32_t RBAR_A2; /*!< Offset: 0x01C (R/W) MPU Alias 2 Region Base Address Register */
DECL|RBAR_A3|member|__IOM uint32_t RBAR_A3; /*!< Offset: 0x024 (R/W) MPU Alias 3 Region Base Address Register */
DECL|RBAR|member|__IOM uint32_t RBAR; /*!< Offset: 0x00C (R/W) MPU Region Base Address Register */
DECL|RESERVED0|member|uint32_t RESERVED0[1U];
DECL|RESERVED0|member|uint32_t RESERVED0[1U];
DECL|RESERVED0|member|uint32_t RESERVED0[1U];
DECL|RESERVED0|member|uint32_t RESERVED0[24U];
DECL|RESERVED0|member|uint32_t RESERVED0[2U];
DECL|RESERVED0|member|uint32_t RESERVED0[5U];
DECL|RESERVED0|member|uint32_t RESERVED0[864U];
DECL|RESERVED1|member|uint32_t RESERVED1[15U];
DECL|RESERVED1|member|uint32_t RESERVED1[1U];
DECL|RESERVED1|member|uint32_t RESERVED1[55U];
DECL|RESERVED2|member|uint32_t RESERVED2[131U];
DECL|RESERVED2|member|uint32_t RESERVED2[15U];
DECL|RESERVED2|member|uint32_t RESERVED2[1U];
DECL|RESERVED2|member|uint32_t RESERVED2[24U];
DECL|RESERVED3|member|uint32_t RESERVED3[24U];
DECL|RESERVED3|member|uint32_t RESERVED3[29U];
DECL|RESERVED3|member|uint32_t RESERVED3[759U];
DECL|RESERVED4|member|uint32_t RESERVED4[1U];
DECL|RESERVED4|member|uint32_t RESERVED4[43U];
DECL|RESERVED4|member|uint32_t RESERVED4[56U];
DECL|RESERVED5|member|uint32_t RESERVED5[39U];
DECL|RESERVED5|member|uint32_t RESERVED5[644U];
DECL|RESERVED5|member|uint32_t RESERVED5[6U];
DECL|RESERVED7|member|uint32_t RESERVED7[8U];
DECL|RNR|member|__IOM uint32_t RNR; /*!< Offset: 0x008 (R/W) MPU Region RNRber Register */
DECL|RSERVED1|member|uint32_t RSERVED1[24U];
DECL|SCB_AIRCR_ENDIANESS_Msk|macro|SCB_AIRCR_ENDIANESS_Msk
DECL|SCB_AIRCR_ENDIANESS_Pos|macro|SCB_AIRCR_ENDIANESS_Pos
DECL|SCB_AIRCR_PRIGROUP_Msk|macro|SCB_AIRCR_PRIGROUP_Msk
DECL|SCB_AIRCR_PRIGROUP_Pos|macro|SCB_AIRCR_PRIGROUP_Pos
DECL|SCB_AIRCR_SYSRESETREQ_Msk|macro|SCB_AIRCR_SYSRESETREQ_Msk
DECL|SCB_AIRCR_SYSRESETREQ_Pos|macro|SCB_AIRCR_SYSRESETREQ_Pos
DECL|SCB_AIRCR_VECTCLRACTIVE_Msk|macro|SCB_AIRCR_VECTCLRACTIVE_Msk
DECL|SCB_AIRCR_VECTCLRACTIVE_Pos|macro|SCB_AIRCR_VECTCLRACTIVE_Pos
DECL|SCB_AIRCR_VECTKEYSTAT_Msk|macro|SCB_AIRCR_VECTKEYSTAT_Msk
DECL|SCB_AIRCR_VECTKEYSTAT_Pos|macro|SCB_AIRCR_VECTKEYSTAT_Pos
DECL|SCB_AIRCR_VECTKEY_Msk|macro|SCB_AIRCR_VECTKEY_Msk
DECL|SCB_AIRCR_VECTKEY_Pos|macro|SCB_AIRCR_VECTKEY_Pos
DECL|SCB_AIRCR_VECTRESET_Msk|macro|SCB_AIRCR_VECTRESET_Msk
DECL|SCB_AIRCR_VECTRESET_Pos|macro|SCB_AIRCR_VECTRESET_Pos
DECL|SCB_BASE|macro|SCB_BASE
DECL|SCB_CCR_BFHFNMIGN_Msk|macro|SCB_CCR_BFHFNMIGN_Msk
DECL|SCB_CCR_BFHFNMIGN_Pos|macro|SCB_CCR_BFHFNMIGN_Pos
DECL|SCB_CCR_DIV_0_TRP_Msk|macro|SCB_CCR_DIV_0_TRP_Msk
DECL|SCB_CCR_DIV_0_TRP_Pos|macro|SCB_CCR_DIV_0_TRP_Pos
DECL|SCB_CCR_NONBASETHRDENA_Msk|macro|SCB_CCR_NONBASETHRDENA_Msk
DECL|SCB_CCR_NONBASETHRDENA_Pos|macro|SCB_CCR_NONBASETHRDENA_Pos
DECL|SCB_CCR_STKALIGN_Msk|macro|SCB_CCR_STKALIGN_Msk
DECL|SCB_CCR_STKALIGN_Pos|macro|SCB_CCR_STKALIGN_Pos
DECL|SCB_CCR_UNALIGN_TRP_Msk|macro|SCB_CCR_UNALIGN_TRP_Msk
DECL|SCB_CCR_UNALIGN_TRP_Pos|macro|SCB_CCR_UNALIGN_TRP_Pos
DECL|SCB_CCR_USERSETMPEND_Msk|macro|SCB_CCR_USERSETMPEND_Msk
DECL|SCB_CCR_USERSETMPEND_Pos|macro|SCB_CCR_USERSETMPEND_Pos
DECL|SCB_CFSR_BUSFAULTSR_Msk|macro|SCB_CFSR_BUSFAULTSR_Msk
DECL|SCB_CFSR_BUSFAULTSR_Pos|macro|SCB_CFSR_BUSFAULTSR_Pos
DECL|SCB_CFSR_MEMFAULTSR_Msk|macro|SCB_CFSR_MEMFAULTSR_Msk
DECL|SCB_CFSR_MEMFAULTSR_Pos|macro|SCB_CFSR_MEMFAULTSR_Pos
DECL|SCB_CFSR_USGFAULTSR_Msk|macro|SCB_CFSR_USGFAULTSR_Msk
DECL|SCB_CFSR_USGFAULTSR_Pos|macro|SCB_CFSR_USGFAULTSR_Pos
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
DECL|SCB_ICSR_NMIPENDSET_Msk|macro|SCB_ICSR_NMIPENDSET_Msk
DECL|SCB_ICSR_NMIPENDSET_Pos|macro|SCB_ICSR_NMIPENDSET_Pos
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
DECL|SCB_ICSR_VECTACTIVE_Msk|macro|SCB_ICSR_VECTACTIVE_Msk
DECL|SCB_ICSR_VECTACTIVE_Pos|macro|SCB_ICSR_VECTACTIVE_Pos
DECL|SCB_ICSR_VECTPENDING_Msk|macro|SCB_ICSR_VECTPENDING_Msk
DECL|SCB_ICSR_VECTPENDING_Pos|macro|SCB_ICSR_VECTPENDING_Pos
DECL|SCB_SCR_SEVONPEND_Msk|macro|SCB_SCR_SEVONPEND_Msk
DECL|SCB_SCR_SEVONPEND_Pos|macro|SCB_SCR_SEVONPEND_Pos
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
DECL|SCB_SHCSR_MEMFAULTACT_Msk|macro|SCB_SHCSR_MEMFAULTACT_Msk
DECL|SCB_SHCSR_MEMFAULTACT_Pos|macro|SCB_SHCSR_MEMFAULTACT_Pos
DECL|SCB_SHCSR_MEMFAULTENA_Msk|macro|SCB_SHCSR_MEMFAULTENA_Msk
DECL|SCB_SHCSR_MEMFAULTENA_Pos|macro|SCB_SHCSR_MEMFAULTENA_Pos
DECL|SCB_SHCSR_MEMFAULTPENDED_Msk|macro|SCB_SHCSR_MEMFAULTPENDED_Msk
DECL|SCB_SHCSR_MEMFAULTPENDED_Pos|macro|SCB_SHCSR_MEMFAULTPENDED_Pos
DECL|SCB_SHCSR_MONITORACT_Msk|macro|SCB_SHCSR_MONITORACT_Msk
DECL|SCB_SHCSR_MONITORACT_Pos|macro|SCB_SHCSR_MONITORACT_Pos
DECL|SCB_SHCSR_PENDSVACT_Msk|macro|SCB_SHCSR_PENDSVACT_Msk
DECL|SCB_SHCSR_PENDSVACT_Pos|macro|SCB_SHCSR_PENDSVACT_Pos
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
DECL|SCB_Type|typedef|} SCB_Type;
DECL|SCB_VTOR_TBLOFF_Msk|macro|SCB_VTOR_TBLOFF_Msk
DECL|SCB_VTOR_TBLOFF_Pos|macro|SCB_VTOR_TBLOFF_Pos
DECL|SCB|macro|SCB
DECL|SCR|member|__IOM uint32_t SCR; /*!< Offset: 0x010 (R/W) System Control Register */
DECL|SCS_BASE|macro|SCS_BASE
DECL|SCnSCB_ACTLR_DISDEFWBUF_Msk|macro|SCnSCB_ACTLR_DISDEFWBUF_Msk
DECL|SCnSCB_ACTLR_DISDEFWBUF_Pos|macro|SCnSCB_ACTLR_DISDEFWBUF_Pos
DECL|SCnSCB_ACTLR_DISFOLD_Msk|macro|SCnSCB_ACTLR_DISFOLD_Msk
DECL|SCnSCB_ACTLR_DISFOLD_Pos|macro|SCnSCB_ACTLR_DISFOLD_Pos
DECL|SCnSCB_ACTLR_DISFPCA_Msk|macro|SCnSCB_ACTLR_DISFPCA_Msk
DECL|SCnSCB_ACTLR_DISFPCA_Pos|macro|SCnSCB_ACTLR_DISFPCA_Pos
DECL|SCnSCB_ACTLR_DISMCYCINT_Msk|macro|SCnSCB_ACTLR_DISMCYCINT_Msk
DECL|SCnSCB_ACTLR_DISMCYCINT_Pos|macro|SCnSCB_ACTLR_DISMCYCINT_Pos
DECL|SCnSCB_ACTLR_DISOOFP_Msk|macro|SCnSCB_ACTLR_DISOOFP_Msk
DECL|SCnSCB_ACTLR_DISOOFP_Pos|macro|SCnSCB_ACTLR_DISOOFP_Pos
DECL|SCnSCB_ICTR_INTLINESNUM_Msk|macro|SCnSCB_ICTR_INTLINESNUM_Msk
DECL|SCnSCB_ICTR_INTLINESNUM_Pos|macro|SCnSCB_ICTR_INTLINESNUM_Pos
DECL|SCnSCB_Type|typedef|} SCnSCB_Type;
DECL|SCnSCB|macro|SCnSCB
DECL|SHCSR|member|__IOM uint32_t SHCSR; /*!< Offset: 0x024 (R/W) System Handler Control and State Register */
DECL|SHP|member|__IOM uint8_t SHP[12U]; /*!< Offset: 0x018 (R/W) System Handlers Priority Registers (4-7, 8-11, 12-15) */
DECL|SLEEPCNT|member|__IOM uint32_t SLEEPCNT; /*!< Offset: 0x010 (R/W) Sleep Count Register */
DECL|SPPR|member|__IOM uint32_t SPPR; /*!< Offset: 0x0F0 (R/W) Selected Pin Protocol Register */
DECL|SPSEL|member|uint32_t SPSEL:1; /*!< bit: 1 Stack to be used */
DECL|SSPSR|member|__IOM uint32_t SSPSR; /*!< Offset: 0x000 (R/ ) Supported Parallel Port Size Register */
DECL|STIR|member|__OM uint32_t STIR; /*!< Offset: 0xE00 ( /W) Software Trigger Interrupt Register */
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
DECL|T|member|uint32_t T:1; /*!< bit: 24 Thumb bit (read 0) */
DECL|VAL|member|__IOM uint32_t VAL; /*!< Offset: 0x008 (R/W) SysTick Current Value Register */
DECL|VTOR|member|__IOM uint32_t VTOR; /*!< Offset: 0x008 (R/W) Vector Table Offset Register */
DECL|V|member|uint32_t V:1; /*!< bit: 28 Overflow condition code flag */
DECL|V|member|uint32_t V:1; /*!< bit: 28 Overflow condition code flag */
DECL|Z|member|uint32_t Z:1; /*!< bit: 30 Zero condition code flag */
DECL|Z|member|uint32_t Z:1; /*!< bit: 30 Zero condition code flag */
DECL|_FLD2VAL|macro|_FLD2VAL
DECL|_VAL2FLD|macro|_VAL2FLD
DECL|__ASM|macro|__ASM
DECL|__ASM|macro|__ASM
DECL|__ASM|macro|__ASM
DECL|__ASM|macro|__ASM
DECL|__ASM|macro|__ASM
DECL|__ASM|macro|__ASM
DECL|__ASM|macro|__ASM
DECL|__CM4_CMSIS_VERSION_MAIN|macro|__CM4_CMSIS_VERSION_MAIN
DECL|__CM4_CMSIS_VERSION_SUB|macro|__CM4_CMSIS_VERSION_SUB
DECL|__CM4_CMSIS_VERSION|macro|__CM4_CMSIS_VERSION
DECL|__CM4_REV|macro|__CM4_REV
DECL|__CORE_CM4_H_DEPENDANT|macro|__CORE_CM4_H_DEPENDANT
DECL|__CORE_CM4_H_GENERIC|macro|__CORE_CM4_H_GENERIC
DECL|__CORTEX_M|macro|__CORTEX_M
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
DECL|__INLINE|macro|__INLINE
DECL|__INLINE|macro|__INLINE
DECL|__INLINE|macro|__INLINE
DECL|__INLINE|macro|__INLINE
DECL|__INLINE|macro|__INLINE
DECL|__INLINE|macro|__INLINE
DECL|__IOM|macro|__IOM
DECL|__IO|macro|__IO
DECL|__I|macro|__I
DECL|__I|macro|__I
DECL|__MPU_PRESENT|macro|__MPU_PRESENT
DECL|__NVIC_PRIO_BITS|macro|__NVIC_PRIO_BITS
DECL|__OM|macro|__OM
DECL|__O|macro|__O
DECL|__STATIC_INLINE|macro|__STATIC_INLINE
DECL|__STATIC_INLINE|macro|__STATIC_INLINE
DECL|__STATIC_INLINE|macro|__STATIC_INLINE
DECL|__STATIC_INLINE|macro|__STATIC_INLINE
DECL|__STATIC_INLINE|macro|__STATIC_INLINE
DECL|__STATIC_INLINE|macro|__STATIC_INLINE
DECL|__STATIC_INLINE|macro|__STATIC_INLINE
DECL|__Vendor_SysTickConfig|macro|__Vendor_SysTickConfig
DECL|__packed|macro|__packed
DECL|_reserved0|member|uint32_t _reserved0:16; /*!< bit: 0..15 Reserved */
DECL|_reserved0|member|uint32_t _reserved0:23; /*!< bit: 9..31 Reserved */
DECL|_reserved0|member|uint32_t _reserved0:29; /*!< bit: 3..31 Reserved */
DECL|_reserved0|member|uint32_t _reserved0:7; /*!< bit: 9..15 Reserved */
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
