DECL|BDH|union|union BDH {
DECL|C1|union|union C1 {
DECL|C2|union|union C2 {
DECL|C3|union|union C3 {
DECL|C4|union|union C4 {
DECL|CFIFO|union|union CFIFO {
DECL|FIFO_SIZE_128|macro|FIFO_SIZE_128
DECL|FIFO_SIZE_16|macro|FIFO_SIZE_16
DECL|FIFO_SIZE_1|macro|FIFO_SIZE_1
DECL|FIFO_SIZE_32|macro|FIFO_SIZE_32
DECL|FIFO_SIZE_4|macro|FIFO_SIZE_4
DECL|FIFO_SIZE_64|macro|FIFO_SIZE_64
DECL|FIFO_SIZE_8|macro|FIFO_SIZE_8
DECL|FIFO_SIZE_RES|macro|FIFO_SIZE_RES
DECL|K20_UART|struct|struct K20_UART {
DECL|PFIFO|union|union PFIFO {
DECL|RX_DATA_FULL_MASK|macro|RX_DATA_FULL_MASK
DECL|RX_EN_MASK|macro|RX_EN_MASK
DECL|RX_FIFO_EN_MASK|macro|RX_FIFO_EN_MASK
DECL|RX_FIFO_FLUSH_MASK|macro|RX_FIFO_FLUSH_MASK
DECL|S1|union|union S1 {
DECL|S2|union|union S2 {
DECL|TX_DATA_EMPTY_MASK|macro|TX_DATA_EMPTY_MASK
DECL|TX_EN_MASK|macro|TX_EN_MASK
DECL|TX_FIFO_EN_MASK|macro|TX_FIFO_EN_MASK
DECL|TX_FIFO_FLUSH_MASK|macro|TX_FIFO_FLUSH_MASK
DECL|_K20UART_H_|macro|_K20UART_H_
DECL|_uart_k20_baud_rate_set|function|static ALWAYS_INLINE void _uart_k20_baud_rate_set(volatile struct K20_UART *u, uint32_t clk_freq, uint32_t baud_rate)
DECL|_uart_k20_fifo_enable|function|static inline void _uart_k20_fifo_enable(volatile struct K20_UART *uart_p)
DECL|bdh|member|union BDH bdh; /* 0x000 Baud Rate High */
DECL|bdl|member|uint8_t bdl; /* 0x001 Baud Rate Low (04)*/
DECL|brfa|member|uint8_t brfa : 5 __packed; /* BaudRateFineAdjust*/
DECL|brk_char_len13|member|uint8_t brk_char_len13 : 1 __packed;
DECL|c1|member|union C1 c1; /* 0x002 Control 1 */
DECL|c2|member|union C2 c2; /* 0x003 Control 2 */
DECL|c3|member|union C3 c3; /* 0x006 Control 3 */
DECL|c4|member|union C4 c4; /* 0x00A Control 4 */
DECL|c5|member|uint8_t c5; /* 0x00B Control 5 */
DECL|cfifo|member|union CFIFO cfifo; /* 0x011 FIFO Control */
DECL|d|member|uint8_t d; /* 0x007 Data */
DECL|ed|member|uint8_t ed; /* 0x00C Extended Data */
DECL|e|struct|struct e {
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|frame_err_int_en|member|uint8_t frame_err_int_en : 1 __packed;
DECL|framing_err|member|uint8_t framing_err : 1 __packed;
DECL|idle_line_int_en|member|uint8_t idle_line_int_en : 1 __packed;
DECL|idle_line_type|member|uint8_t idle_line_type : 1 __packed;
DECL|idle_line|member|uint8_t idle_line : 1 __packed;
DECL|ir|member|uint8_t ir; /* 0x00E Infrared */
DECL|lbkd_int_en|member|uint8_t lbkd_int_en : 1 __packed; /* LIN Break Detect */
DECL|lbkdif|member|uint8_t lbkdif : 1 __packed;
DECL|lin_bk_detect_en|member|uint8_t lin_bk_detect_en : 1 __packed;
DECL|loopback_en|member|uint8_t loopback_en : 1 __packed;
DECL|ma1|member|uint8_t ma1; /* 0x008 Match Address 1 */
DECL|ma2|member|uint8_t ma2; /* 0x009 Match Address 1 */
DECL|match_addr_mode2_en|member|uint8_t match_addr_mode2_en : 1 __packed;
DECL|matech_addr_mode1_en|member|uint8_t matech_addr_mode1_en : 1 __packed;
DECL|mode10bit|member|uint8_t mode10bit : 1 __packed;
DECL|mode9bit|member|uint8_t mode9bit : 1 __packed;
DECL|modem|member|uint8_t modem; /* 0x00D Modem */
DECL|msb_first|member|uint8_t msb_first : 1 __packed;
DECL|noice|member|uint8_t noice : 1 __packed;
DECL|noise_err_int_en|member|uint8_t noise_err_int_en : 1 __packed;
DECL|odd_parity|member|uint8_t odd_parity : 1 __packed;
DECL|overrun_err_int_en|member|uint8_t overrun_err_int_en : 1 __packed;
DECL|parity_enable|member|uint8_t parity_enable : 1 __packed;
DECL|parity_err_int_en|member|uint8_t parity_err_int_en : 1 __packed;
DECL|parity_err|member|uint8_t parity_err : 1 __packed;
DECL|pfifo|member|union PFIFO pfifo; /* 0x010 FIFO Param */
DECL|rcfifo|member|uint8_t rcfifo; /* 0x016 FIFO Rx Count */
DECL|remote_loopback|member|uint8_t remote_loopback : 1 __packed;
DECL|res_3|member|uint8_t res_3 : 3 __packed;
DECL|res_5|member|uint8_t res_5 : 1 __packed;
DECL|rwfifo|member|uint8_t rwfifo; /* 0x015 FIFO Rx Watermark (01)*/
DECL|rx_active|member|uint8_t rx_active : 1 __packed;
DECL|rx_bit8|member|uint8_t rx_bit8 : 1 __packed;
DECL|rx_data_full|member|uint8_t rx_data_full : 1 __packed;
DECL|rx_data_inverted|member|uint8_t rx_data_inverted : 1 __packed;
DECL|rx_edge_int_en|member|uint8_t rx_edge_int_en : 1 __packed; /* RxD Active Edge */
DECL|rx_enable|member|uint8_t rx_enable : 1 __packed;
DECL|rx_fifo_en|member|uint8_t rx_fifo_en : 1 __packed;
DECL|rx_fifo_flush|member|uint8_t rx_fifo_flush : 1 __packed; /* write-only */
DECL|rx_fifo_overflow_int_en|member|uint8_t rx_fifo_overflow_int_en : 1 __packed;
DECL|rx_fifo_size|member|uint8_t rx_fifo_size : 3 __packed; /* read-only */
DECL|rx_fifo_underflow_int_en|member|uint8_t rx_fifo_underflow_int_en : 1 __packed;
DECL|rx_full_int_dma_tx_en|member|uint8_t rx_full_int_dma_tx_en : 1 __packed;
DECL|rx_overrun|member|uint8_t rx_overrun : 1 __packed;
DECL|rx_wakep_method|member|uint8_t rx_wakep_method : 1 __packed;
DECL|rx_wakeup_ctrl|member|uint8_t rx_wakeup_ctrl : 1 __packed;
DECL|rx_wakeup_idle_detect|member|uint8_t rx_wakeup_idle_detect : 1 __packed;
DECL|rxedgif|member|uint8_t rxedgif : 1 __packed;
DECL|s1|member|union S1 s1; /* 0x004 Status 1 (C0) RO*/
DECL|s2|member|union S2 s2; /* 0x005 Status 2 */
DECL|sbr|member|uint8_t sbr : 5 __packed; /* Hi Baud Rate Bits */
DECL|send_break|member|uint8_t send_break : 1 __packed;
DECL|seq_port_num|member|uint8_t seq_port_num; /**< Sequential port number */
DECL|sfifo|member|uint8_t sfifo; /* 0x012 FIFO Status (C0)*/
DECL|tcfifo|member|uint8_t tcfifo; /* 0x014 FIFO Tx Count */
DECL|twfifo|member|uint8_t twfifo; /* 0x013 FIFO Tx Watermark */
DECL|tx_bit8|member|uint8_t tx_bit8 : 1 __packed;
DECL|tx_complete_int_en|member|uint8_t tx_complete_int_en : 1 __packed;
DECL|tx_complete|member|uint8_t tx_complete : 1 __packed;
DECL|tx_data_empty|member|uint8_t tx_data_empty : 1 __packed;
DECL|tx_data_invert|member|uint8_t tx_data_invert : 1 __packed;
DECL|tx_data_pin_outt_dir|member|uint8_t tx_data_pin_outt_dir : 1 __packed;
DECL|tx_enable|member|uint8_t tx_enable : 1 __packed;
DECL|tx_fifo_en|member|uint8_t tx_fifo_en : 1 __packed;
DECL|tx_fifo_flush|member|uint8_t tx_fifo_flush : 1 __packed; /* write-only */
DECL|tx_fifo_overflow_int_en|member|uint8_t tx_fifo_overflow_int_en : 1 __packed;
DECL|tx_fifo_size|member|uint8_t tx_fifo_size : 3 __packed; /* read-only */
DECL|tx_int_dma_tx_en|member|uint8_t tx_int_dma_tx_en : 1 __packed;
DECL|u_7816|member|uint8_t u_7816[0x20 - 0x17]; /* 0x017-0x1F UART ISO-7816 standard */
DECL|u_cea709_1|member|uint8_t u_cea709_1[0x32 - 0x20]; /* 0x020-0x31 UART CEA8709.1 standard*/
DECL|uart_k20_dev_data|struct|struct uart_k20_dev_data {
DECL|uart_stop_wait|member|uint8_t uart_stop_wait : 1 __packed;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|value|member|uint8_t value;
DECL|z_reserv_statused038_03c|member|uint8_t z_reserv_statused038_03c[0x1000 - 0x32];
DECL|z_reserved00f|member|uint8_t z_reserved00f; /* 0x00F */
