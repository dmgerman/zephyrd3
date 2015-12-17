DECL|ARC_HALT_INT_REDIR|macro|ARC_HALT_INT_REDIR
DECL|ARC_HALT_REQ_A|macro|ARC_HALT_REQ_A
DECL|ARC_HALT|macro|ARC_HALT
DECL|ARC_RUN_REQ_A|macro|ARC_RUN_REQ_A
DECL|ARC_RUN|macro|ARC_RUN
DECL|CCU_PERIPH_CLK_DIV_CTL0|macro|CCU_PERIPH_CLK_DIV_CTL0
DECL|CCU_PERIPH_CLK_EN|macro|CCU_PERIPH_CLK_EN
DECL|CCU_PWM_PCLK_EN_SW|macro|CCU_PWM_PCLK_EN_SW
DECL|CCU_RTC_CLK_DIV_OFFSET|macro|CCU_RTC_CLK_DIV_OFFSET
DECL|CLOCK_EXTERNAL_BASE_ADDR|macro|CLOCK_EXTERNAL_BASE_ADDR
DECL|CLOCK_PERIPHERAL_BASE_ADDR|macro|CLOCK_PERIPHERAL_BASE_ADDR
DECL|CLOCK_SENSOR_BASE_ADDR|macro|CLOCK_SENSOR_BASE_ADDR
DECL|CLOCK_SYSTEM_CLOCK_CONTROL|macro|CLOCK_SYSTEM_CLOCK_CONTROL
DECL|GPIO_INT_MASK|macro|GPIO_INT_MASK
DECL|HPET_TIMER0_IRQ|macro|HPET_TIMER0_IRQ
DECL|INT_AIO_CMP_IRQ|macro|INT_AIO_CMP_IRQ
DECL|INT_UNMASK_IA|macro|INT_UNMASK_IA
DECL|INT_VEC_IRQ0|macro|INT_VEC_IRQ0
DECL|RESET_VECTOR|macro|RESET_VECTOR
DECL|RTC_DW_INT_MASK|macro|RTC_DW_INT_MASK
DECL|SCSS_CCU_PERIPH_CLK_GATE_CTL|macro|SCSS_CCU_PERIPH_CLK_GATE_CTL
DECL|SCSS_CCU_SYS_CLK_CTL|macro|SCSS_CCU_SYS_CLK_CTL
DECL|SCSS_CCU|macro|SCSS_CCU
DECL|SCSS_INTERRUPT|macro|SCSS_INTERRUPT
DECL|SCSS_INT_BASE|macro|SCSS_INT_BASE
DECL|SCSS_PERIPHERAL_BASE|macro|SCSS_PERIPHERAL_BASE
DECL|SCSS_PERIPHERAL|macro|SCSS_PERIPHERAL
DECL|SCSS_PERIPH_CFG0|macro|SCSS_PERIPH_CFG0
DECL|SCSS_REGISTER_BASE|macro|SCSS_REGISTER_BASE
DECL|SCSS_SS_CFG|macro|SCSS_SS_CFG
DECL|SCSS_SS_STS|macro|SCSS_SS_STS
DECL|SPI_DW_PORT_0_INT_MASK|macro|SPI_DW_PORT_0_INT_MASK
DECL|SPI_DW_PORT_1_INT_MASK|macro|SPI_DW_PORT_1_INT_MASK
DECL|UART_IOAPIC_FLAGS|macro|UART_IOAPIC_FLAGS
DECL|UART_IRQ_FLAGS|macro|UART_IRQ_FLAGS
DECL|UART_IRQ_FLAGS|macro|UART_IRQ_FLAGS
DECL|UART_IRQ_FLAGS|macro|UART_IRQ_FLAGS
DECL|UART_IRQ_FLAGS|macro|UART_IRQ_FLAGS
DECL|WDT_DW_INT_MASK|macro|WDT_DW_INT_MASK
DECL|__SOC_H_|macro|__SOC_H_
DECL|ccu_ext_clock_ctl|member|volatile uint32_t ccu_ext_clock_ctl; /**< External Clock Control Register */
DECL|ccu_gpio_db_clk_ctl|member|ccu_gpio_db_clk_ctl; /**< Peripheral Clock Divider Control 1 */
DECL|ccu_lp_clk_ctl|member|volatile uint32_t ccu_lp_clk_ctl; /**< System Low Power Clock Control */
DECL|ccu_mlayer_ahb_ctl|member|volatile uint32_t ccu_mlayer_ahb_ctl; /**< AHB Control Register */
DECL|ccu_periph_clk_div_ctl0|member|ccu_periph_clk_div_ctl0; /**< Peripheral Clock Divider Control 0 */
DECL|ccu_periph_clk_gate_ctl|member|ccu_periph_clk_gate_ctl; /**< Peripheral Clock Gate Control */
DECL|ccu_ss_periph_clk_gate_ctl|member|volatile uint32_t ccu_ss_periph_clk_gate_ctl; /**< Sensor subsustem
DECL|ccu_sys_clk_ctl|member|volatile uint32_t ccu_sys_clk_ctl; /**< System Clock Control Register */
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
DECL|osc0_cfg0|member|volatile uint32_t osc0_cfg0; /**< Hybrid Oscillator Configuration 0 */
DECL|osc0_cfg1|member|volatile uint32_t osc0_cfg1; /**< Hybrid Oscillator configuration 1 */
DECL|osc0_stat1|member|volatile uint32_t osc0_stat1; /**< Hybrid Oscillator status 1 */
DECL|osc1_cfg0|member|volatile uint32_t osc1_cfg0; /**< RTC Oscillator Configuration 0 */
DECL|osc1_stat0|member|volatile uint32_t osc1_stat0; /**< RTC Oscillator status 0 */
DECL|osc_lock_0|member|volatile uint32_t osc_lock_0; /**< Clocks Lock Register */
DECL|periph_cfg0|member|volatile uint32_t periph_cfg0; /**< Peripheral Configuration */
DECL|reserved|member|volatile uint32_t reserved;
DECL|reserved|member|volatile uint32_t reserved;
DECL|reserved|member|volatile uint32_t reserved[2];
DECL|rx_avail_mask|member|volatile uint32_t rx_avail_mask;
DECL|rx_avail_mask|member|volatile uint32_t rx_avail_mask;
DECL|scss_ccu|struct|struct scss_ccu {
DECL|scss_interrupt|struct|struct scss_interrupt {
DECL|scss_peripheral|struct|struct scss_peripheral {
DECL|stop_det_mask|member|volatile uint32_t stop_det_mask;
DECL|tx_req_mask|member|volatile uint32_t tx_req_mask;
DECL|tx_req_mask|member|volatile uint32_t tx_req_mask;
DECL|usb_phy_cfg0|member|volatile uint32_t usb_phy_cfg0; /**< USB Configuration */
DECL|usb_pll_cfg0|member|volatile uint32_t usb_pll_cfg0; /**< USB Phase lock look configuration */
