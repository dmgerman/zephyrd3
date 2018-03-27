DECL|TZ_NONSECURE_FUNC_PTR_CREATE|macro|TZ_NONSECURE_FUNC_PTR_CREATE
DECL|TZ_NONSECURE_FUNC_PTR_DECLARE|macro|TZ_NONSECURE_FUNC_PTR_DECLARE
DECL|TZ_NONSECURE_FUNC_PTR_IS_NS|macro|TZ_NONSECURE_FUNC_PTR_IS_NS
DECL|_ARM_CORTEXM_TZ__H_|macro|_ARM_CORTEXM_TZ__H_
DECL|__TZ_NONSECURE_ENTRY_FUNC|macro|__TZ_NONSECURE_ENTRY_FUNC
DECL|control_ns|member|} control_ns;
DECL|msp_ns|member|u32_t msp_ns;
DECL|npriv|member|u32_t npriv:1;
DECL|psp_ns|member|u32_t psp_ns;
DECL|reserved|member|u32_t reserved:30;
DECL|spsel|member|u32_t spsel:1;
DECL|typeof|macro|typeof
DECL|tz_nonsecure_setup_conf_t|typedef|} tz_nonsecure_setup_conf_t;
DECL|tz_nonsecure_setup_conf|struct|typedef struct tz_nonsecure_setup_conf {
DECL|tz_ns_func_ptr_t|typedef|typedef void __attribute__((cmse_nonsecure_call)) (*tz_ns_func_ptr_t) (void);
DECL|vtor_ns|member|u32_t vtor_ns;
