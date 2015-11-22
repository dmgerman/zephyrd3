DECL|AIO_CMP_POL_FALL|enumerator|AIO_CMP_POL_FALL, /**< Match on falling edge. */
DECL|AIO_CMP_POL_RISE|enumerator|AIO_CMP_POL_RISE, /**< Match on rising edge. */
DECL|AIO_CMP_REF_A|enumerator|AIO_CMP_REF_A, /**< Use reference A. */
DECL|AIO_CMP_REF_B|enumerator|AIO_CMP_REF_B, /**< Use reference B. */
DECL|_AIO_COMPARATOR_H_|macro|_AIO_COMPARATOR_H_
DECL|aio_cmp_api_configure|typedef|typedef int (*aio_cmp_api_configure)(struct device *dev, uint8_t index,
DECL|aio_cmp_api_disable|typedef|typedef int (*aio_cmp_api_disable)(struct device *dev, uint8_t index);
DECL|aio_cmp_cb|typedef|typedef void (*aio_cmp_cb)(void *);
DECL|aio_cmp_configure|function|static inline int aio_cmp_configure(struct device *dev, uint8_t index, enum aio_cmp_polarity polarity, enum aio_cmp_ref refsel, aio_cmp_cb cb, void *param)
DECL|aio_cmp_disable|function|static inline int aio_cmp_disable(struct device *dev, uint8_t index)
DECL|aio_cmp_driver_api|struct|struct aio_cmp_driver_api {
DECL|aio_cmp_polarity|enum|enum aio_cmp_polarity {
DECL|aio_cmp_ref|enum|enum aio_cmp_ref {
DECL|configure|member|aio_cmp_api_configure configure;
DECL|disable|member|aio_cmp_api_disable disable;
