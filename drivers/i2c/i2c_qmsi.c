DECL|GET_CONTROLLER_INSTANCE|macro|GET_CONTROLLER_INSTANCE
DECL|GET_DRIVER_DATA|macro|GET_DRIVER_DATA
DECL|api|variable|api
DECL|clock_gate|member|clk_periph_t clock_gate;
DECL|config_info_0|variable|config_info_0
DECL|config_info_1|variable|config_info_1
DECL|ctx_save|member|struct i2c_context_t ctx_save;
DECL|default_cfg|member|union dev_config default_cfg;
DECL|driver_data_0|variable|driver_data_0
DECL|driver_data_1|variable|driver_data_1
DECL|i2c_context_t|struct|struct i2c_context_t {
DECL|i2c_qmsi_config_info|struct|struct i2c_qmsi_config_info {
DECL|i2c_qmsi_configure|function|static int i2c_qmsi_configure(struct device *dev, uint32_t config)
DECL|i2c_qmsi_driver_data|struct|struct i2c_qmsi_driver_data {
DECL|i2c_qmsi_init|function|static int i2c_qmsi_init(struct device *dev)
DECL|i2c_qmsi_transfer|function|static int i2c_qmsi_transfer(struct device *dev, struct i2c_msg *msgs, uint8_t num_msgs, uint16_t addr)
DECL|i2c_resume_device|function|static int i2c_resume_device(struct device *dev, int pm_policy)
DECL|i2c_suspend_device|function|static int i2c_suspend_device(struct device *dev, int pm_policy)
DECL|ic_ack_general_call|member|uint32_t ic_ack_general_call; /**< General Call Ack. */
DECL|ic_con|member|uint32_t ic_con; /**< Control Register. */
DECL|ic_dma_cr|member|uint32_t ic_dma_cr; /**< DMA Control Register. */
DECL|ic_dma_rdlr|member|uint32_t ic_dma_rdlr; /**< DMA Receive Data Level Register. */
DECL|ic_dma_tdlr|member|uint32_t ic_dma_tdlr; /**< DMA Transmit Data Level Register. */
DECL|ic_fs_scl_hcnt|member|uint32_t ic_fs_scl_hcnt; /**< Fast Speed Clock SCL High Count. */
DECL|ic_fs_scl_lcnt|member|uint32_t ic_fs_scl_lcnt; /**< Fast Speed Clock SCL Low Count. */
DECL|ic_fs_spklen|member|uint32_t ic_fs_spklen; /**< SS and FS Spike Suppression Limit. */
DECL|ic_hs_scl_hcnt|member|uint32_t ic_hs_scl_hcnt; /**< High Speed Clock SCL High Count. */
DECL|ic_hs_scl_lcnt|member|uint32_t ic_hs_scl_lcnt; /**< High Speed Clock SCL Low Count. */
DECL|ic_hs_spklen|member|uint32_t ic_hs_spklen; /**< HS Spike Suppression Limit. */
DECL|ic_intr_mask|member|uint32_t ic_intr_mask; /**< Interrupt Mask. */
DECL|ic_sar|member|uint32_t ic_sar; /**< Slave Address. */
DECL|ic_sda_hold|member|uint32_t ic_sda_hold; /**< SDA Hold. */
DECL|ic_sda_setup|member|uint32_t ic_sda_setup; /**< SDA Setup. */
DECL|ic_ss_scl_hcnt|member|uint32_t ic_ss_scl_hcnt; /**< Standard Speed Clock SCL High Count. */
DECL|ic_ss_scl_lcnt|member|uint32_t ic_ss_scl_lcnt; /**< Standard Speed Clock SCL Low Count. */
DECL|instance|member|qm_i2c_t instance; /* Controller instance. */
DECL|int_i2c_mst_mask|member|uint32_t int_i2c_mst_mask; /**< Interrupt Mask. */
DECL|sem|member|struct nano_sem sem;
DECL|sync|member|device_sync_call_t sync;
DECL|transfer_complete|function|static void transfer_complete(void *data, int rc, qm_i2c_status_t status, uint32_t len)
DECL|transfer_status|member|int transfer_status;
