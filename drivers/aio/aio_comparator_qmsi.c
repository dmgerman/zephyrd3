DECL|AIO_QMSI_CMP_COUNT|macro|AIO_QMSI_CMP_COUNT
DECL|INT_COMPARATORS_MASK|macro|INT_COMPARATORS_MASK
DECL|aio_cmp_config|function|static int aio_cmp_config(struct device *dev)
DECL|aio_cmp_funcs|variable|aio_cmp_funcs
DECL|aio_qmsi_cmp_cb|struct|struct aio_qmsi_cmp_cb {
DECL|aio_qmsi_cmp_configure|function|static int aio_qmsi_cmp_configure(struct device *dev, uint8_t index, enum aio_cmp_polarity polarity, enum aio_cmp_ref refsel, aio_cmp_cb cb, void *param)
DECL|aio_qmsi_cmp_dev_data_t|struct|struct aio_qmsi_cmp_dev_data_t {
DECL|aio_qmsi_cmp_dev_data|variable|aio_qmsi_cmp_dev_data
DECL|aio_qmsi_cmp_disable|function|static int aio_qmsi_cmp_disable(struct device *dev, uint8_t index)
DECL|aio_qmsi_cmp_init|function|static int aio_qmsi_cmp_init(struct device *dev)
DECL|aio_qmsi_cmp_isr|function|static void aio_qmsi_cmp_isr(struct device *dev)
DECL|cb|member|aio_cmp_cb cb;
DECL|cb|member|struct aio_qmsi_cmp_cb cb[AIO_QMSI_CMP_COUNT];
DECL|config|variable|config
DECL|num_cmp|member|uint8_t num_cmp;
DECL|param|member|void *param;
