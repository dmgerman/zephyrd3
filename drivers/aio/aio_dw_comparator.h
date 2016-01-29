DECL|AIO_DW_CMP_COUNT|macro|AIO_DW_CMP_COUNT
DECL|_AIO_DW_COMPARATOR_H_|macro|_AIO_DW_COMPARATOR_H_
DECL|base_address|member|uint32_t base_address;
DECL|cb|member|aio_cmp_cb cb;
DECL|cb|member|struct dw_aio_cmp_cb cb[AIO_DW_CMP_COUNT];
DECL|config_func|member|int (*config_func)(struct device *dev);
DECL|dw_aio_cmp_cb|struct|struct dw_aio_cmp_cb {
DECL|dw_aio_cmp_dev_cfg_t|struct|struct dw_aio_cmp_dev_cfg_t {
DECL|dw_aio_cmp_dev_data_t|struct|struct dw_aio_cmp_dev_data_t {
DECL|dw_aio_cmp_t|struct|struct dw_aio_cmp_t {
DECL|en|member|volatile uint32_t en; /**< Enable Register (0x00) */
DECL|interrupt_num|member|uint32_t interrupt_num;
DECL|num_cmp|member|uint8_t num_cmp;
DECL|param|member|void *param;
DECL|pwr|member|volatile uint32_t pwr; /**< Power Register (0x0C) */
DECL|ref_pol|member|volatile uint32_t ref_pol; /**< Reference Polarity Register (0x08) */
DECL|ref_sel|member|volatile uint32_t ref_sel; /**< Reference Selection Register (0x04) */
DECL|reversed|member|uint32_t reversed[6];
DECL|stat_clr|member|volatile uint32_t stat_clr; /**< Status Clear Register (0x28) */
