DECL|TZ_NONSECURE_FUNC_PTR_CREATE|macro|TZ_NONSECURE_FUNC_PTR_CREATE
DECL|TZ_NONSECURE_FUNC_PTR_DECLARE|macro|TZ_NONSECURE_FUNC_PTR_DECLARE
DECL|TZ_NONSECURE_FUNC_PTR_IS_NS|macro|TZ_NONSECURE_FUNC_PTR_IS_NS
DECL|ZEPHYR_ARCH_ARM_INCLUDE_CORTEX_M_TZ_H_|macro|ZEPHYR_ARCH_ARM_INCLUDE_CORTEX_M_TZ_H_
DECL|__TZ_NONSECURE_ENTRY_FUNC|macro|__TZ_NONSECURE_ENTRY_FUNC
DECL|base_addr|member|u32_t base_addr;
DECL|control_ns|member|} control_ns;
DECL|enable|member|u8_t enable:1;
DECL|limit_addr|member|u32_t limit_addr;
DECL|msp_ns|member|u32_t msp_ns;
DECL|npriv|member|u32_t npriv:1;
DECL|nsc|member|u8_t nsc:1;
DECL|psp_ns|member|u32_t psp_ns;
DECL|region_num|member|u8_t region_num;
DECL|reserved|member|u32_t reserved:30;
DECL|spsel|member|u32_t spsel:1;
DECL|typeof|macro|typeof
DECL|tz_nonsecure_setup_conf_t|typedef|} tz_nonsecure_setup_conf_t;
DECL|tz_nonsecure_setup_conf|struct|typedef struct tz_nonsecure_setup_conf {
DECL|tz_ns_func_ptr_t|typedef|typedef void __attribute__((cmse_nonsecure_call)) (*tz_ns_func_ptr_t) (void);
DECL|tz_sau_conf_t|typedef|} tz_sau_conf_t;
DECL|vtor_ns|member|u32_t vtor_ns;
