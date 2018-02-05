DECL|AIRCR|member|__IOM uint32_t AIRCR; /*!< Offset: 0x00C (R/W) Application Interrupt and Reset Control Register */
DECL|APSR_C_Msk|macro|APSR_C_Msk
DECL|APSR_C_Pos|macro|APSR_C_Pos
DECL|APSR_N_Msk|macro|APSR_N_Msk
DECL|APSR_N_Pos|macro|APSR_N_Pos
DECL|APSR_Type|typedef|} APSR_Type;
DECL|APSR_V_Msk|macro|APSR_V_Msk
DECL|APSR_V_Pos|macro|APSR_V_Pos
DECL|APSR_Z_Msk|macro|APSR_Z_Msk
DECL|APSR_Z_Pos|macro|APSR_Z_Pos
DECL|CALIB|member|__IM uint32_t CALIB; /*!< Offset: 0x00C (R/ ) SysTick Calibration Register */
DECL|CCR|member|__IOM uint32_t CCR; /*!< Offset: 0x014 (R/W) Configuration Control Register */
DECL|CMSIS_NVIC_VIRTUAL_HEADER_FILE|macro|CMSIS_NVIC_VIRTUAL_HEADER_FILE
DECL|CMSIS_VECTAB_VIRTUAL_HEADER_FILE|macro|CMSIS_VECTAB_VIRTUAL_HEADER_FILE
DECL|CONTROL_SPSEL_Msk|macro|CONTROL_SPSEL_Msk
DECL|CONTROL_SPSEL_Pos|macro|CONTROL_SPSEL_Pos
DECL|CONTROL_Type|typedef|} CONTROL_Type;
DECL|CONTROL_nPRIV_Msk|macro|CONTROL_nPRIV_Msk
DECL|CONTROL_nPRIV_Pos|macro|CONTROL_nPRIV_Pos
DECL|CPUID|member|__IM uint32_t CPUID; /*!< Offset: 0x000 (R/ ) CPUID Base Register */
DECL|CTRL|member|__IOM uint32_t CTRL; /*!< Offset: 0x000 (R/W) SysTick Control and Status Register */
DECL|CTRL|member|__IOM uint32_t CTRL; /*!< Offset: 0x004 (R/W) MPU Control Register */
DECL|C|member|uint32_t C:1; /*!< bit: 29 Carry condition code flag */
DECL|C|member|uint32_t C:1; /*!< bit: 29 Carry condition code flag */
DECL|ICER|member|__IOM uint32_t ICER[1U]; /*!< Offset: 0x080 (R/W) Interrupt Clear Enable Register */
DECL|ICPR|member|__IOM uint32_t ICPR[1U]; /*!< Offset: 0x180 (R/W) Interrupt Clear Pending Register */
DECL|ICSR|member|__IOM uint32_t ICSR; /*!< Offset: 0x004 (R/W) Interrupt Control and State Register */
DECL|IPSR_ISR_Msk|macro|IPSR_ISR_Msk
DECL|IPSR_ISR_Pos|macro|IPSR_ISR_Pos
DECL|IPSR_Type|typedef|} IPSR_Type;
DECL|IP|member|__IOM uint32_t IP[8U]; /*!< Offset: 0x300 (R/W) Interrupt Priority Register */
DECL|ISER|member|__IOM uint32_t ISER[1U]; /*!< Offset: 0x000 (R/W) Interrupt Set Enable Register */
DECL|ISPR|member|__IOM uint32_t ISPR[1U]; /*!< Offset: 0x100 (R/W) Interrupt Set Pending Register */
DECL|ISR|member|uint32_t ISR:9; /*!< bit: 0.. 8 Exception number */
DECL|ISR|member|uint32_t ISR:9; /*!< bit: 0.. 8 Exception number */
DECL|LOAD|member|__IOM uint32_t LOAD; /*!< Offset: 0x004 (R/W) SysTick Reload Value Register */
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
DECL|MPU_TYPE_RALIASES|macro|MPU_TYPE_RALIASES
DECL|MPU_TYPE_SEPARATE_Msk|macro|MPU_TYPE_SEPARATE_Msk
DECL|MPU_TYPE_SEPARATE_Pos|macro|MPU_TYPE_SEPARATE_Pos
DECL|MPU_Type|typedef|} MPU_Type;
DECL|MPU|macro|MPU
DECL|NVIC_BASE|macro|NVIC_BASE
DECL|NVIC_ClearPendingIRQ|macro|NVIC_ClearPendingIRQ
DECL|NVIC_DisableIRQ|macro|NVIC_DisableIRQ
DECL|NVIC_EnableIRQ|macro|NVIC_EnableIRQ
DECL|NVIC_GetEnableIRQ|macro|NVIC_GetEnableIRQ
DECL|NVIC_GetPendingIRQ|macro|NVIC_GetPendingIRQ
DECL|NVIC_GetPriority|macro|NVIC_GetPriority
DECL|NVIC_GetVector|macro|NVIC_GetVector
DECL|NVIC_SetPendingIRQ|macro|NVIC_SetPendingIRQ
DECL|NVIC_SetPriority|macro|NVIC_SetPriority
DECL|NVIC_SetVector|macro|NVIC_SetVector
DECL|NVIC_SystemReset|macro|NVIC_SystemReset
DECL|NVIC_Type|typedef|} NVIC_Type;
DECL|NVIC_USER_IRQ_OFFSET|macro|NVIC_USER_IRQ_OFFSET
DECL|NVIC|macro|NVIC
DECL|N|member|uint32_t N:1; /*!< bit: 31 Negative condition code flag */
DECL|N|member|uint32_t N:1; /*!< bit: 31 Negative condition code flag */
DECL|RASR|member|__IOM uint32_t RASR; /*!< Offset: 0x010 (R/W) MPU Region Attribute and Size Register */
DECL|RBAR|member|__IOM uint32_t RBAR; /*!< Offset: 0x00C (R/W) MPU Region Base Address Register */
DECL|RESERVED0|member|uint32_t RESERVED0;
DECL|RESERVED0|member|uint32_t RESERVED0[31U];
DECL|RESERVED1|member|uint32_t RESERVED1;
DECL|RESERVED2|member|uint32_t RESERVED2[31U];
DECL|RESERVED3|member|uint32_t RESERVED3[31U];
DECL|RESERVED4|member|uint32_t RESERVED4[64U];
DECL|RNR|member|__IOM uint32_t RNR; /*!< Offset: 0x008 (R/W) MPU Region RNRber Register */
DECL|RSERVED1|member|uint32_t RSERVED1[31U];
DECL|SCB_AIRCR_ENDIANESS_Msk|macro|SCB_AIRCR_ENDIANESS_Msk
DECL|SCB_AIRCR_ENDIANESS_Pos|macro|SCB_AIRCR_ENDIANESS_Pos
DECL|SCB_AIRCR_SYSRESETREQ_Msk|macro|SCB_AIRCR_SYSRESETREQ_Msk
DECL|SCB_AIRCR_SYSRESETREQ_Pos|macro|SCB_AIRCR_SYSRESETREQ_Pos
DECL|SCB_AIRCR_VECTCLRACTIVE_Msk|macro|SCB_AIRCR_VECTCLRACTIVE_Msk
DECL|SCB_AIRCR_VECTCLRACTIVE_Pos|macro|SCB_AIRCR_VECTCLRACTIVE_Pos
DECL|SCB_AIRCR_VECTKEYSTAT_Msk|macro|SCB_AIRCR_VECTKEYSTAT_Msk
DECL|SCB_AIRCR_VECTKEYSTAT_Pos|macro|SCB_AIRCR_VECTKEYSTAT_Pos
DECL|SCB_AIRCR_VECTKEY_Msk|macro|SCB_AIRCR_VECTKEY_Msk
DECL|SCB_AIRCR_VECTKEY_Pos|macro|SCB_AIRCR_VECTKEY_Pos
DECL|SCB_BASE|macro|SCB_BASE
DECL|SCB_CCR_STKALIGN_Msk|macro|SCB_CCR_STKALIGN_Msk
DECL|SCB_CCR_STKALIGN_Pos|macro|SCB_CCR_STKALIGN_Pos
DECL|SCB_CCR_UNALIGN_TRP_Msk|macro|SCB_CCR_UNALIGN_TRP_Msk
DECL|SCB_CCR_UNALIGN_TRP_Pos|macro|SCB_CCR_UNALIGN_TRP_Pos
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
DECL|SCB_GetFPUType|function|__STATIC_INLINE uint32_t SCB_GetFPUType(void)
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
DECL|SCB_SHCSR_SVCALLPENDED_Msk|macro|SCB_SHCSR_SVCALLPENDED_Msk
DECL|SCB_SHCSR_SVCALLPENDED_Pos|macro|SCB_SHCSR_SVCALLPENDED_Pos
DECL|SCB_Type|typedef|} SCB_Type;
DECL|SCB_VTOR_TBLOFF_Msk|macro|SCB_VTOR_TBLOFF_Msk
DECL|SCB_VTOR_TBLOFF_Pos|macro|SCB_VTOR_TBLOFF_Pos
DECL|SCB|macro|SCB
DECL|SCR|member|__IOM uint32_t SCR; /*!< Offset: 0x010 (R/W) System Control Register */
DECL|SCS_BASE|macro|SCS_BASE
DECL|SHCSR|member|__IOM uint32_t SHCSR; /*!< Offset: 0x024 (R/W) System Handler Control and State Register */
DECL|SHP|member|__IOM uint32_t SHP[2U]; /*!< Offset: 0x01C (R/W) System Handlers Priority Registers. [0] is RESERVED */
DECL|SPSEL|member|uint32_t SPSEL:1; /*!< bit: 1 Stack to be used */
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
DECL|TYPE|member|__IM uint32_t TYPE; /*!< Offset: 0x000 (R/ ) MPU Type Register */
DECL|T|member|uint32_t T:1; /*!< bit: 24 Thumb bit (read 0) */
DECL|VAL|member|__IOM uint32_t VAL; /*!< Offset: 0x008 (R/W) SysTick Current Value Register */
DECL|VTOR|member|__IOM uint32_t VTOR; /*!< Offset: 0x008 (R/W) Vector Table Offset Register */
DECL|V|member|uint32_t V:1; /*!< bit: 28 Overflow condition code flag */
DECL|V|member|uint32_t V:1; /*!< bit: 28 Overflow condition code flag */
DECL|Z|member|uint32_t Z:1; /*!< bit: 30 Zero condition code flag */
DECL|Z|member|uint32_t Z:1; /*!< bit: 30 Zero condition code flag */
DECL|_BIT_SHIFT|macro|_BIT_SHIFT
DECL|_FLD2VAL|macro|_FLD2VAL
DECL|_IP_IDX|macro|_IP_IDX
DECL|_SHP_IDX|macro|_SHP_IDX
DECL|_VAL2FLD|macro|_VAL2FLD
DECL|__CM0PLUS_CMSIS_VERSION_MAIN|macro|__CM0PLUS_CMSIS_VERSION_MAIN
DECL|__CM0PLUS_CMSIS_VERSION_SUB|macro|__CM0PLUS_CMSIS_VERSION_SUB
DECL|__CM0PLUS_CMSIS_VERSION|macro|__CM0PLUS_CMSIS_VERSION
DECL|__CM0PLUS_REV|macro|__CM0PLUS_REV
DECL|__CORE_CM0PLUS_H_DEPENDANT|macro|__CORE_CM0PLUS_H_DEPENDANT
DECL|__CORE_CM0PLUS_H_GENERIC|macro|__CORE_CM0PLUS_H_GENERIC
DECL|__CORTEX_M|macro|__CORTEX_M
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
DECL|__NVIC_GetEnableIRQ|function|__STATIC_INLINE uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
DECL|__NVIC_GetPendingIRQ|function|__STATIC_INLINE uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
DECL|__NVIC_GetPriority|function|__STATIC_INLINE uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
DECL|__NVIC_GetVector|function|__STATIC_INLINE uint32_t __NVIC_GetVector(IRQn_Type IRQn)
DECL|__NVIC_PRIO_BITS|macro|__NVIC_PRIO_BITS
DECL|__NVIC_SetPendingIRQ|function|__STATIC_INLINE void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
DECL|__NVIC_SetPriority|function|__STATIC_INLINE void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
DECL|__NVIC_SetVector|function|__STATIC_INLINE void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
DECL|__NVIC_SystemReset|function|__STATIC_INLINE void __NVIC_SystemReset(void)
DECL|__OM|macro|__OM
DECL|__O|macro|__O
DECL|__VTOR_PRESENT|macro|__VTOR_PRESENT
DECL|__Vendor_SysTickConfig|macro|__Vendor_SysTickConfig
DECL|_reserved0|member|uint32_t _reserved0:15; /*!< bit: 9..23 Reserved */
DECL|_reserved0|member|uint32_t _reserved0:23; /*!< bit: 9..31 Reserved */
DECL|_reserved0|member|uint32_t _reserved0:28; /*!< bit: 0..27 Reserved */
DECL|_reserved1|member|uint32_t _reserved1:30; /*!< bit: 2..31 Reserved */
DECL|_reserved1|member|uint32_t _reserved1:3; /*!< bit: 25..27 Reserved */
DECL|b|member|} b; /*!< Structure used for bit access */
DECL|b|member|} b; /*!< Structure used for bit access */
DECL|b|member|} b; /*!< Structure used for bit access */
DECL|b|member|} b; /*!< Structure used for bit access */
DECL|nPRIV|member|uint32_t nPRIV:1; /*!< bit: 0 Execution privilege in Thread mode */
DECL|w|member|uint32_t w; /*!< Type used for word access */
DECL|w|member|uint32_t w; /*!< Type used for word access */
DECL|w|member|uint32_t w; /*!< Type used for word access */
DECL|w|member|uint32_t w; /*!< Type used for word access */
DECL|xPSR_C_Msk|macro|xPSR_C_Msk
DECL|xPSR_C_Pos|macro|xPSR_C_Pos
DECL|xPSR_ISR_Msk|macro|xPSR_ISR_Msk
DECL|xPSR_ISR_Pos|macro|xPSR_ISR_Pos
DECL|xPSR_N_Msk|macro|xPSR_N_Msk
DECL|xPSR_N_Pos|macro|xPSR_N_Pos
DECL|xPSR_T_Msk|macro|xPSR_T_Msk
DECL|xPSR_T_Pos|macro|xPSR_T_Pos
DECL|xPSR_Type|typedef|} xPSR_Type;
DECL|xPSR_V_Msk|macro|xPSR_V_Msk
DECL|xPSR_V_Pos|macro|xPSR_V_Pos
DECL|xPSR_Z_Msk|macro|xPSR_Z_Msk
DECL|xPSR_Z_Pos|macro|xPSR_Z_Pos
