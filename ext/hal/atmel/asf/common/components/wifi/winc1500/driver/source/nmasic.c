DECL|CLOCKS_EN_REG|macro|CLOCKS_EN_REG
DECL|CORT_HOST_COMM|macro|CORT_HOST_COMM
DECL|GET_UINT32|macro|GET_UINT32
DECL|HOST_CORT_COMM|macro|HOST_CORT_COMM
DECL|NMI_GLB_RESET_0|macro|NMI_GLB_RESET_0
DECL|NMI_INTR_ENABLE|macro|NMI_INTR_ENABLE
DECL|NMI_INTR_REG_BASE|macro|NMI_INTR_REG_BASE
DECL|NMI_PIN_MUX_0|macro|NMI_PIN_MUX_0
DECL|TIMEOUT|macro|TIMEOUT
DECL|WAKE_CLK_REG|macro|WAKE_CLK_REG
DECL|WAKUP_TRAILS_TIMEOUT|macro|WAKUP_TRAILS_TIMEOUT
DECL|chip_apply_conf|function|sint8 chip_apply_conf(uint32 u32Conf)
DECL|chip_deinit|function|sint8 chip_deinit(void)
DECL|chip_idle|function|void chip_idle(void)
DECL|chip_reset_and_cpu_halt|function|sint8 chip_reset_and_cpu_halt(void)
DECL|chip_reset|function|sint8 chip_reset(void)
DECL|chip_sleep|function|sint8 chip_sleep(void)
DECL|chip_wake|function|sint8 chip_wake(void)
DECL|cpu_halt|function|sint8 cpu_halt(void)
DECL|cpu_start|function|sint8 cpu_start(void) {
DECL|enable_interrupts|function|sint8 enable_interrupts(void)
DECL|get_gpio_val|function|sint8 get_gpio_val(uint8 gpio, uint8* val)
DECL|nmi_get_chipid|function|uint32 nmi_get_chipid(void)
DECL|nmi_get_mac_address|function|sint8 nmi_get_mac_address(uint8 *pu8MacAddr)
DECL|nmi_get_otp_mac_address|function|sint8 nmi_get_otp_mac_address(uint8 *pu8MacAddr, uint8 * pu8IsValid)
DECL|nmi_get_rfrevid|function|uint32 nmi_get_rfrevid(void)
DECL|nmi_set_sys_clk_src_to_xo|function|void nmi_set_sys_clk_src_to_xo(void)
DECL|nmi_update_pll|function|void nmi_update_pll(void)
DECL|pullup_ctrl|function|sint8 pullup_ctrl(uint32 pinmask, uint8 enable)
DECL|restore_pmu_settings_after_global_reset|function|void restore_pmu_settings_after_global_reset(void)
DECL|set_gpio_dir|function|sint8 set_gpio_dir(uint8 gpio, uint8 dir)
DECL|set_gpio_val|function|sint8 set_gpio_val(uint8 gpio, uint8 val)
DECL|wait_for_bootrom|function|sint8 wait_for_bootrom(uint8 arg)
DECL|wait_for_firmware_start|function|sint8 wait_for_firmware_start(uint8 arg)
