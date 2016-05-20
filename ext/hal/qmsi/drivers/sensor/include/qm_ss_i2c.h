DECL|QM_I2C_BUSY|enumerator|QM_I2C_BUSY = BIT(17) /**< Controller busy. */
DECL|QM_I2C_FSP_50_DC_NS|macro|QM_I2C_FSP_50_DC_NS
DECL|QM_I2C_FS_50_DC_NS|macro|QM_I2C_FS_50_DC_NS
DECL|QM_I2C_IDLE|enumerator|QM_I2C_IDLE = 0, /**< Controller idle. */
DECL|QM_I2C_MIN_FSP_NS|macro|QM_I2C_MIN_FSP_NS
DECL|QM_I2C_MIN_FS_NS|macro|QM_I2C_MIN_FS_NS
DECL|QM_I2C_MIN_SS_NS|macro|QM_I2C_MIN_SS_NS
DECL|QM_I2C_SS_50_DC_NS|macro|QM_I2C_SS_50_DC_NS
DECL|QM_I2C_TX_ABRT_7B_ADDR_NOACK|enumerator|QM_I2C_TX_ABRT_7B_ADDR_NOACK = BIT(0), /**< 7-bit address noack. */
DECL|QM_I2C_TX_ABRT_MASTER_DIS|enumerator|QM_I2C_TX_ABRT_MASTER_DIS = BIT(11), /**< Master disabled. */
DECL|QM_I2C_TX_ABRT_SBYTE_ACKDET|enumerator|QM_I2C_TX_ABRT_SBYTE_ACKDET = BIT(7), /**< Start ACK. */
DECL|QM_I2C_TX_ABRT_SLVFLUSH_TXFIFO|enumerator|QM_I2C_TX_ABRT_SLVFLUSH_TXFIFO = BIT(13), /**< Slave flush tx FIFO. */
DECL|QM_I2C_TX_ABRT_SLVRD_INTX|enumerator|QM_I2C_TX_ABRT_SLVRD_INTX = BIT(15), /**< Slave read completion. */
DECL|QM_I2C_TX_ABRT_SLV_ARBLOST|enumerator|QM_I2C_TX_ABRT_SLV_ARBLOST = BIT(14), /**< Slave lost bus. */
DECL|QM_I2C_TX_ABRT_TXDATA_NOACK|enumerator|QM_I2C_TX_ABRT_TXDATA_NOACK = BIT(3), /**< Tx data noack. */
DECL|QM_I2C_TX_ABRT_USER_ABRT|enumerator|QM_I2C_TX_ABRT_USER_ABRT = BIT(16), /**< User abort. */
DECL|QM_I2C_TX_ARB_LOST|enumerator|QM_I2C_TX_ARB_LOST = BIT(12), /**< Master lost arbitration. */
DECL|QM_SS_I2C_10_BIT|enumerator|QM_SS_I2C_10_BIT /**< 10-bit mode. */
DECL|QM_SS_I2C_7_BIT|enumerator|QM_SS_I2C_7_BIT = 0, /**< 7-bit mode. */
DECL|QM_SS_I2C_SPEED_FAST|enumerator|QM_SS_I2C_SPEED_FAST = 2 /**< Fast mode (400 Kbps). */
DECL|QM_SS_I2C_SPEED_STD|enumerator|QM_SS_I2C_SPEED_STD = 1, /**< Standard mode (100 Kbps). */
DECL|__QM_SS_I2C_H__|macro|__QM_SS_I2C_H__
DECL|address_mode|member|qm_ss_i2c_addr_t address_mode; /**< 7 or 10 bit addressing. */
DECL|callback_data|member|void *callback_data; /**< User callback data. */
DECL|callback|member|void (*callback)(void *data, int rc, qm_ss_i2c_status_t status,
DECL|qm_ss_i2c_addr_t|typedef|} qm_ss_i2c_addr_t;
DECL|qm_ss_i2c_config_t|typedef|} qm_ss_i2c_config_t;
DECL|qm_ss_i2c_speed_t|typedef|} qm_ss_i2c_speed_t;
DECL|qm_ss_i2c_status_t|typedef|} qm_ss_i2c_status_t;
DECL|qm_ss_i2c_transfer_t|typedef|} qm_ss_i2c_transfer_t;
DECL|rx_len|member|uint32_t rx_len; /**< Read buffer length. */
DECL|rx|member|uint8_t *rx; /**< Read data. */
DECL|speed|member|qm_ss_i2c_speed_t speed; /**< Standard, Fast Mode. */
DECL|stop|member|bool stop; /**< Generate master STOP. */
DECL|tx_len|member|uint32_t tx_len; /**< Write data length. */
DECL|tx|member|uint8_t *tx; /**< Write data. */
