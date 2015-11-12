DECL|ipm_dummy_api|variable|ipm_dummy_api
DECL|ipm_dummy_init|function|int ipm_dummy_init(struct device *d)
DECL|ipm_dummy_isr|function|static void ipm_dummy_isr(void *data)
DECL|ipm_dummy_max_data_size_get|function|static int ipm_dummy_max_data_size_get(struct device *d)
DECL|ipm_dummy_max_id_val_get|function|static uint32_t ipm_dummy_max_id_val_get(struct device *d)
DECL|ipm_dummy_register_callback|function|static void ipm_dummy_register_callback(struct device *d, ipm_callback_t cb,void *cb_context)
DECL|ipm_dummy_send|function|static int ipm_dummy_send(struct device *d, int wait, uint32_t id, const void *data, int size)
DECL|ipm_dummy_set_enabled|function|static int ipm_dummy_set_enabled(struct device *d, int enable)
