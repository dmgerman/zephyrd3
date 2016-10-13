DECL|I2C_POLL_COUNT|macro|I2C_POLL_COUNT
DECL|I2C_POLL_MICROSECOND|macro|I2C_POLL_MICROSECOND
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_i2c_0_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_i2c_1_isr)
DECL|RX_TL|macro|RX_TL
DECL|SPK_LEN_FS_FSP|macro|SPK_LEN_FS_FSP
DECL|SPK_LEN_SS|macro|SPK_LEN_SS
DECL|TX_TL|macro|TX_TL
DECL|controller_disable|function|static int controller_disable(const qm_i2c_t i2c)
DECL|controller_enable|function|static void controller_enable(const qm_i2c_t i2c)
DECL|dma_cmd_transfer_config|member|qm_dma_transfer_t dma_cmd_transfer_config;
DECL|dma_controller_id|member|qm_dma_t dma_controller_id;
DECL|dma_rx_channel_id|member|qm_dma_channel_id_t dma_rx_channel_id; /* RX channel ID. */
DECL|dma_rx_transfer_config|member|qm_dma_transfer_t dma_rx_transfer_config; /* Configuration for RX. */
DECL|dma_tx_channel_id|member|qm_dma_channel_id_t dma_tx_channel_id; /* TX channel ID. */
DECL|dma_tx_transfer_config|member|qm_dma_transfer_t dma_tx_transfer_config; /* Configuration for TX. */
DECL|get_hi_cnt|function|static uint32_t get_hi_cnt(qm_i2c_t i2c, uint32_t hi_time_ns)
DECL|get_lo_cnt|function|static uint32_t get_lo_cnt(uint32_t lo_time_ns)
DECL|handle_tx_abrt|function|handle_tx_abrt(const qm_i2c_t i2c, const volatile qm_i2c_transfer_t *const transfer, qm_i2c_reg_t *const controller)
DECL|i2c_dma_callbacks|variable|i2c_dma_callbacks
DECL|i2c_dma_context_t|typedef|} i2c_dma_context_t;
DECL|i2c_dma_context|variable|i2c_dma_context
DECL|i2c_dma_interfaces|variable|i2c_dma_interfaces
DECL|i2c_dma_interfaces|variable|i2c_dma_interfaces
DECL|i2c_dma_receive_callback|function|static void i2c_dma_receive_callback(void *callback_context, uint32_t len, int error_code)
DECL|i2c_dma_transfer_error_callback|function|static void i2c_dma_transfer_error_callback(uint32_t i2c, int error_code, uint32_t len)
DECL|i2c_dma_transmit_callback|function|static void i2c_dma_transmit_callback(void *callback_context, uint32_t len, int error_code)
DECL|i2c_error_code|member|int i2c_error_code;
DECL|i2c_isr_handler|function|static void i2c_isr_handler(const qm_i2c_t i2c)
DECL|i2c_isr_master_handler|function|i2c_isr_master_handler(const qm_i2c_t i2c, const volatile qm_i2c_transfer_t *const transfer, qm_i2c_reg_t *const controller)
DECL|i2c_read_cmd_send|variable|i2c_read_cmd_send
DECL|i2c_read_pos|variable|i2c_read_pos
DECL|i2c_start_dma_read|function|static int i2c_start_dma_read(const qm_i2c_t i2c)
DECL|i2c_transfer|variable|i2c_transfer
DECL|i2c_write_pos|variable|i2c_write_pos
DECL|i2c|member|qm_i2c_t i2c; /* I2C controller. */
DECL|ongoing_dma_rx_operation|member|volatile bool ongoing_dma_rx_operation; /* Keep track of oingoing RX. */
DECL|ongoing_dma_tx_operation|member|volatile bool ongoing_dma_tx_operation; /* Keep track of ongoing TX. */
DECL|qm_i2c_dma_channel_config|function|int qm_i2c_dma_channel_config(const qm_i2c_t i2c, const qm_dma_t dma_controller_id, const qm_dma_channel_id_t channel_id, const qm_dma_channel_direction_t direction)
DECL|qm_i2c_dma_transfer_terminate|function|int qm_i2c_dma_transfer_terminate(const qm_i2c_t i2c)
DECL|qm_i2c_get_status|function|int qm_i2c_get_status(const qm_i2c_t i2c, qm_i2c_status_t *const status)
DECL|qm_i2c_irq_transfer_terminate|function|int qm_i2c_irq_transfer_terminate(const qm_i2c_t i2c)
DECL|qm_i2c_master_dma_transfer|function|int qm_i2c_master_dma_transfer(const qm_i2c_t i2c, qm_i2c_transfer_t *const xfer, const uint16_t slave_addr)
DECL|qm_i2c_master_irq_transfer|function|int qm_i2c_master_irq_transfer(const qm_i2c_t i2c, const qm_i2c_transfer_t *const xfer, const uint16_t slave_addr)
DECL|qm_i2c_master_read|function|int qm_i2c_master_read(const qm_i2c_t i2c, const uint16_t slave_addr, uint8_t *const data, uint32_t len, const bool stop, qm_i2c_status_t *const status)
DECL|qm_i2c_master_write|function|int qm_i2c_master_write(const qm_i2c_t i2c, const uint16_t slave_addr,const uint8_t *const data, uint32_t len, const bool stop, qm_i2c_status_t *const status)
DECL|qm_i2c_set_config|function|int qm_i2c_set_config(const qm_i2c_t i2c, const qm_i2c_config_t *const cfg)
DECL|qm_i2c_set_speed|function|int qm_i2c_set_speed(const qm_i2c_t i2c, const qm_i2c_speed_t speed, const uint16_t lo_cnt, const uint16_t hi_cnt)
DECL|qm_i2c|variable|qm_i2c
DECL|qm_i2c|variable|qm_i2c
DECL|tx_abort_status|member|int tx_abort_status;
