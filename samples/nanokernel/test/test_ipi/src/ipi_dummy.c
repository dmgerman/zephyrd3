DECL|ipi_dummy_api|variable|ipi_dummy_api
DECL|ipi_dummy_init|function|int ipi_dummy_init(struct device *d)
DECL|ipi_dummy_isr|function|static void ipi_dummy_isr(void *data)
DECL|ipi_dummy_max_data_size_get|function|static int ipi_dummy_max_data_size_get(struct device *d)
DECL|ipi_dummy_max_id_val_get|function|static uint32_t ipi_dummy_max_id_val_get(struct device *d)
DECL|ipi_dummy_register_callback|function|static void ipi_dummy_register_callback(struct device *d, ipi_callback_t cb,void *cb_context)
DECL|ipi_dummy_send|function|static int ipi_dummy_send(struct device *d, int wait, uint32_t id, const void *data, int size)
DECL|ipi_dummy_set_enabled|function|static int ipi_dummy_set_enabled(struct device *d, int enable)
