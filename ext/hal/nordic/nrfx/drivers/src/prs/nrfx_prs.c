DECL|IS_PRS_BOX|macro|IS_PRS_BOX
DECL|LOG_FUNCTION_EXIT|macro|LOG_FUNCTION_EXIT
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|PRS_BOX_DEFINE|macro|PRS_BOX_DEFINE
DECL|acquired|member|bool acquired;
DECL|handler|member|nrfx_irq_handler_t handler;
DECL|nrfx_prs_acquire|function|nrfx_err_t nrfx_prs_acquire(void const * p_base_addr, nrfx_irq_handler_t irq_handler)
DECL|nrfx_prs_release|function|void nrfx_prs_release(void const * p_base_addr)
DECL|prs_box_get|function|static prs_box_t * prs_box_get(void const * p_base_addr)
DECL|prs_box_t|typedef|} prs_box_t;
