DECL|CCU_PERIPH_CLK_DIV_CTL0|macro|CCU_PERIPH_CLK_DIV_CTL0
DECL|CCU_PERIPH_CLK_EN|macro|CCU_PERIPH_CLK_EN
DECL|CCU_RTC_CLK_DIV_OFFSET|macro|CCU_RTC_CLK_DIV_OFFSET
DECL|CLOCK_EXTERNAL_BASE_ADDR|macro|CLOCK_EXTERNAL_BASE_ADDR
DECL|CLOCK_PERIPHERAL_BASE_ADDR|macro|CLOCK_PERIPHERAL_BASE_ADDR
DECL|CLOCK_SENSOR_BASE_ADDR|macro|CLOCK_SENSOR_BASE_ADDR
DECL|CLOCK_SYSTEM_CLOCK_CONTROL|macro|CLOCK_SYSTEM_CLOCK_CONTROL
DECL|FIXED_HARDWARE_IRQ_TO_VEC_MAPPING|macro|FIXED_HARDWARE_IRQ_TO_VEC_MAPPING
DECL|I2C_DW_0_BASE_ADDR|macro|I2C_DW_0_BASE_ADDR
DECL|I2C_DW_0_IRQ|macro|I2C_DW_0_IRQ
DECL|I2C_DW_IRQ_FLAGS|macro|I2C_DW_IRQ_FLAGS
DECL|I2C_MST_0_INT_MASK|macro|I2C_MST_0_INT_MASK
DECL|INT_AIO_CMP_IRQ|macro|INT_AIO_CMP_IRQ
DECL|INT_UNMASK_IA|macro|INT_UNMASK_IA
DECL|INT_VEC_IRQ0|macro|INT_VEC_IRQ0
DECL|IOAPIC_LO32_RTE_SUPPORTED_MASK|macro|IOAPIC_LO32_RTE_SUPPORTED_MASK
DECL|LOAPIC_IRQ_BASE|macro|LOAPIC_IRQ_BASE
DECL|LOAPIC_IRQ_COUNT|macro|LOAPIC_IRQ_COUNT
DECL|LOAPIC_LVT_REG_SPACING|macro|LOAPIC_LVT_REG_SPACING
DECL|PINMUX_BASE_ADDR|macro|PINMUX_BASE_ADDR
DECL|PINMUX_NUM_PINS|macro|PINMUX_NUM_PINS
DECL|RTC_DW_INT_MASK|macro|RTC_DW_INT_MASK
DECL|SCSS_CCU_PERIPH_CLK_GATE_CTL|macro|SCSS_CCU_PERIPH_CLK_GATE_CTL
DECL|SCSS_INTERRUPT|macro|SCSS_INTERRUPT
DECL|SCSS_INT_BASE|macro|SCSS_INT_BASE
DECL|SCSS_PERIPHERAL_BASE|macro|SCSS_PERIPHERAL_BASE
DECL|SCSS_PERIPHERAL|macro|SCSS_PERIPHERAL
DECL|SCSS_PERIPH_CFG0|macro|SCSS_PERIPH_CFG0
DECL|SCSS_REGISTER_BASE|macro|SCSS_REGISTER_BASE
DECL|UART_IRQ_FLAGS|macro|UART_IRQ_FLAGS
DECL|UART_NS16550_PORT_0_BASE_ADDR|macro|UART_NS16550_PORT_0_BASE_ADDR
DECL|UART_NS16550_PORT_0_CLK_FREQ|macro|UART_NS16550_PORT_0_CLK_FREQ
DECL|UART_NS16550_PORT_0_IRQ|macro|UART_NS16550_PORT_0_IRQ
DECL|UART_NS16550_PORT_1_BASE_ADDR|macro|UART_NS16550_PORT_1_BASE_ADDR
DECL|UART_NS16550_PORT_1_CLK_FREQ|macro|UART_NS16550_PORT_1_CLK_FREQ
DECL|UART_NS16550_PORT_1_IRQ|macro|UART_NS16550_PORT_1_IRQ
DECL|WDT_DW_BASE_ADDR|macro|WDT_DW_BASE_ADDR
DECL|WDT_DW_INT_MASK|macro|WDT_DW_INT_MASK
DECL|WDT_DW_IRQ|macro|WDT_DW_IRQ
DECL|__SOC_H_|macro|__SOC_H_
DECL|cfg_lock|member|volatile uint32_t cfg_lock; /**< Configuration Lock */
DECL|err_int_mask|member|volatile uint32_t err_int_mask;
DECL|err_mask|member|volatile uint32_t err_mask;
DECL|int_adc_calib_mask|member|volatile uint32_t int_adc_calib_mask;
DECL|int_adc_pwr_mask|member|volatile uint32_t int_adc_pwr_mask;
DECL|int_aon_gpio_mask|member|volatile uint32_t int_aon_gpio_mask;
DECL|int_aon_timer_mask|member|volatile uint32_t int_aon_timer_mask;
DECL|int_comparators_host_halt_mask|member|volatile uint32_t int_comparators_host_halt_mask;
DECL|int_comparators_host_mask|member|volatile uint32_t int_comparators_host_mask;
DECL|int_comparators_ss_halt_mask|member|volatile uint32_t int_comparators_ss_halt_mask;
DECL|int_comparators_ss_mask|member|volatile uint32_t int_comparators_ss_mask;
DECL|int_dma_channel_mask|member|volatile uint32_t int_dma_channel_mask[8];
DECL|int_dma_error_mask|member|volatile uint32_t int_dma_error_mask;
DECL|int_flash_controller_mask|member|volatile uint32_t int_flash_controller_mask[2];
DECL|int_gpio_mask|member|volatile uint32_t int_gpio_mask;
DECL|int_host_bus_err_mask|member|volatile uint32_t int_host_bus_err_mask;
DECL|int_i2c_mst_mask|member|volatile uint32_t int_i2c_mst_mask[2];
DECL|int_i2s_mask|member|volatile uint32_t int_i2s_mask;
DECL|int_mailbox_mask|member|volatile uint32_t int_mailbox_mask;
DECL|int_pwm_timer_mask|member|volatile uint32_t int_pwm_timer_mask;
DECL|int_rtc_mask|member|volatile uint32_t int_rtc_mask;
DECL|int_spi_mst_mask|member|volatile uint32_t int_spi_mst_mask[2];
DECL|int_spi_slv_mask|member|volatile uint32_t int_spi_slv_mask[1];
DECL|int_sram_controller_mask|member|volatile uint32_t int_sram_controller_mask;
DECL|int_ss_adc_err_mask|member|volatile uint32_t int_ss_adc_err_mask;
DECL|int_ss_adc_irq_mask|member|volatile uint32_t int_ss_adc_irq_mask;
DECL|int_ss_gpio_intr_mask|member|volatile uint32_t int_ss_gpio_intr_mask[2];
DECL|int_ss_i2c|member|struct int_ss_i2c int_ss_i2c[2];
DECL|int_ss_i2c|struct|struct int_ss_i2c {
DECL|int_ss_spi|member|struct int_ss_spi int_ss_spi[2];
DECL|int_ss_spi|struct|struct int_ss_spi {
DECL|int_uart_mask|member|volatile uint32_t int_uart_mask[2];
DECL|int_usb_mask|member|volatile uint32_t int_usb_mask;
DECL|int_watchdog_mask|member|volatile uint32_t int_watchdog_mask;
DECL|lock_int_mask_reg|member|volatile uint32_t lock_int_mask_reg;
DECL|periph_cfg0|member|volatile uint32_t periph_cfg0; /**< Peripheral Configuration */
DECL|reserved|member|volatile uint32_t reserved;
DECL|reserved|member|volatile uint32_t reserved[2];
DECL|rx_avail_mask|member|volatile uint32_t rx_avail_mask;
DECL|rx_avail_mask|member|volatile uint32_t rx_avail_mask;
DECL|scss_interrupt|struct|struct scss_interrupt {
DECL|scss_peripheral|struct|struct scss_peripheral {
DECL|stop_det_mask|member|volatile uint32_t stop_det_mask;
DECL|tx_req_mask|member|volatile uint32_t tx_req_mask;
DECL|tx_req_mask|member|volatile uint32_t tx_req_mask;
DECL|usb_phy_cfg0|member|volatile uint32_t usb_phy_cfg0; /**< USB Configuration */
