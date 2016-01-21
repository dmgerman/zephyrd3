DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|UART_BRGR|macro|UART_BRGR
DECL|UART_CR_RSTRX|macro|UART_CR_RSTRX
DECL|UART_CR_RSTSTA|macro|UART_CR_RSTSTA
DECL|UART_CR_RSTTX|macro|UART_CR_RSTTX
DECL|UART_CR_RXDIS|macro|UART_CR_RXDIS
DECL|UART_CR_RXEN|macro|UART_CR_RXEN
DECL|UART_CR_TXDIS|macro|UART_CR_TXDIS
DECL|UART_CR_TXEN|macro|UART_CR_TXEN
DECL|UART_CR|macro|UART_CR
DECL|UART_IDR|macro|UART_IDR
DECL|UART_IER|macro|UART_IER
DECL|UART_IMR|macro|UART_IMR
DECL|UART_INT_ENDRX|macro|UART_INT_ENDRX
DECL|UART_INT_ENDTX|macro|UART_INT_ENDTX
DECL|UART_INT_FRAME|macro|UART_INT_FRAME
DECL|UART_INT_OVRE|macro|UART_INT_OVRE
DECL|UART_INT_PARE|macro|UART_INT_PARE
DECL|UART_INT_RXBUFF|macro|UART_INT_RXBUFF
DECL|UART_INT_RXRDY|macro|UART_INT_RXRDY
DECL|UART_INT_TXBUFE|macro|UART_INT_TXBUFE
DECL|UART_INT_TXEMPTY|macro|UART_INT_TXEMPTY
DECL|UART_INT_TXRDY|macro|UART_INT_TXRDY
DECL|UART_MR_CHMODE_AUTOMATIC|macro|UART_MR_CHMODE_AUTOMATIC
DECL|UART_MR_CHMODE_LOCAL_LOOPBACK|macro|UART_MR_CHMODE_LOCAL_LOOPBACK
DECL|UART_MR_CHMODE_MASK|macro|UART_MR_CHMODE_MASK
DECL|UART_MR_CHMODE_NORMAL|macro|UART_MR_CHMODE_NORMAL
DECL|UART_MR_CHMODE_REMOTE_LOOPBACK|macro|UART_MR_CHMODE_REMOTE_LOOPBACK
DECL|UART_MR_PARITY_EVEN|macro|UART_MR_PARITY_EVEN
DECL|UART_MR_PARITY_MARK|macro|UART_MR_PARITY_MARK
DECL|UART_MR_PARITY_NO|macro|UART_MR_PARITY_NO
DECL|UART_MR_PARITY_ODD|macro|UART_MR_PARITY_ODD
DECL|UART_MR_PARITY_SPACE|macro|UART_MR_PARITY_SPACE
DECL|UART_MR_PARTIY_MASK|macro|UART_MR_PARTIY_MASK
DECL|UART_MR|macro|UART_MR
DECL|UART_PDC_PTCR_RXTDIS|macro|UART_PDC_PTCR_RXTDIS
DECL|UART_PDC_PTCR_TXTDIS|macro|UART_PDC_PTCR_TXTDIS
DECL|UART_RHR|macro|UART_RHR
DECL|UART_SR|macro|UART_SR
DECL|UART_STRUCT|macro|UART_STRUCT
DECL|UART_THR|macro|UART_THR
DECL|_uart|struct|struct _uart {
DECL|baud_rate|member|uint32_t baud_rate; /* Baud rate */
DECL|baudrate_set|function|static void baudrate_set(struct device *dev, uint32_t baudrate, uint32_t sys_clk_freq_hz)
DECL|brgr|member|uint32_t brgr; /* 0x20 Baud Rate Generator Register */
DECL|cr|member|uint32_t cr; /* 0x00 Control Register */
DECL|idr|member|uint32_t idr; /* 0x0C Interrupt Disable Register */
DECL|ier|member|uint32_t ier; /* 0x08 Interrupt Enable Register */
DECL|imr|member|uint32_t imr; /* 0x10 Interrupt Mask Register */
DECL|mr|member|uint32_t mr; /* 0x04 Mode Register */
DECL|pdc_ptcr|member|uint32_t pdc_ptcr; /* 0x120 Transfer Control Reg */
DECL|pdc_ptsr|member|uint32_t pdc_ptsr; /* 0x124 Transfer Status Reg */
DECL|pdc_rcr|member|uint32_t pdc_rcr; /* 0x104 Receive Counter Reg */
DECL|pdc_rncr|member|uint32_t pdc_rncr; /* 0x114 Receive Next Counter */
DECL|pdc_rnpr|member|uint32_t pdc_rnpr; /* 0x110 Receive Next Pointer */
DECL|pdc_rpr|member|uint32_t pdc_rpr; /* 0x100 Receive Pointer Reg */
DECL|pdc_tcr|member|uint32_t pdc_tcr; /* 0x10C Transmit Counter Reg */
DECL|pdc_tncr|member|uint32_t pdc_tncr; /* 0x11C Transmit Next Counter */
DECL|pdc_tnpr|member|uint32_t pdc_tnpr; /* 0x118 Transmit Next Pointer */
DECL|pdc_tpr|member|uint32_t pdc_tpr; /* 0x108 Transmit Pointer Reg */
DECL|reserved|member|uint32_t reserved[55]; /* 0x24 - 0xFF */
DECL|rhr|member|uint32_t rhr; /* 0x18 Receive Holding Register */
DECL|sr|member|uint32_t sr; /* 0x14 Status Register */
DECL|thr|member|uint32_t thr; /* 0x1C Transmit Holding Register */
DECL|uart_sam3_dev_cfg_0|variable|uart_sam3_dev_cfg_0
DECL|uart_sam3_dev_data_0|variable|uart_sam3_dev_data_0
DECL|uart_sam3_dev_data_t|struct|struct uart_sam3_dev_data_t {
DECL|uart_sam3_driver_api|variable|uart_sam3_driver_api
DECL|uart_sam3_driver_api|variable|uart_sam3_driver_api
DECL|uart_sam3_init|function|static int uart_sam3_init(struct device *dev)
DECL|uart_sam3_poll_in|function|static int uart_sam3_poll_in(struct device *dev, unsigned char *c)
DECL|uart_sam3_poll_out|function|static unsigned char uart_sam3_poll_out(struct device *dev, unsigned char c)
