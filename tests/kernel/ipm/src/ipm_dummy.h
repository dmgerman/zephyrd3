DECL|DUMMY_IPM_DATA_WORDS|macro|DUMMY_IPM_DATA_WORDS
DECL|busy|member|uint8_t busy;
DECL|cb_context|member|void *cb_context;
DECL|cb|member|ipm_callback_t cb;
DECL|data|member|uint32_t data[DUMMY_IPM_DATA_WORDS];
DECL|enabled|member|uint8_t enabled;
DECL|id|member|uint32_t id;
DECL|ipm_dummy_driver_data|struct|struct ipm_dummy_driver_data {
DECL|ipm_dummy_regs|struct|struct ipm_dummy_regs {
DECL|regs|member|volatile struct ipm_dummy_regs regs;
