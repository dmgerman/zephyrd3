DECL|DUMMY_IPI_DATA_WORDS|macro|DUMMY_IPI_DATA_WORDS
DECL|busy|member|uint8_t busy;
DECL|cb_context|member|void *cb_context;
DECL|cb|member|ipi_callback_t cb;
DECL|data|member|uint32_t data[DUMMY_IPI_DATA_WORDS];
DECL|enabled|member|uint8_t enabled;
DECL|id|member|uint32_t id;
DECL|ipi_dummy_config_info|struct|struct ipi_dummy_config_info {
DECL|ipi_dummy_driver_data|struct|struct ipi_dummy_driver_data {
DECL|ipi_dummy_regs|struct|struct ipi_dummy_regs {
DECL|regs|member|volatile struct ipi_dummy_regs regs;
DECL|sw_irq|member|int sw_irq;
