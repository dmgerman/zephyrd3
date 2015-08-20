DECL|K20_SIM_t|typedef|} K20_SIM_t;
DECL|SIM_CLKDIV1_OUTDIV1_MASK|macro|SIM_CLKDIV1_OUTDIV1_MASK
DECL|SIM_CLKDIV1_OUTDIV1_SHIFT|macro|SIM_CLKDIV1_OUTDIV1_SHIFT
DECL|SIM_CLKDIV1_OUTDIV2_MASK|macro|SIM_CLKDIV1_OUTDIV2_MASK
DECL|SIM_CLKDIV1_OUTDIV2_SHIFT|macro|SIM_CLKDIV1_OUTDIV2_SHIFT
DECL|SIM_CLKDIV1_OUTDIV3_MASK|macro|SIM_CLKDIV1_OUTDIV3_MASK
DECL|SIM_CLKDIV1_OUTDIV3_SHIFT|macro|SIM_CLKDIV1_OUTDIV3_SHIFT
DECL|SIM_CLKDIV1_OUTDIV4_MASK|macro|SIM_CLKDIV1_OUTDIV4_MASK
DECL|SIM_CLKDIV1_OUTDIV4_SHIFT|macro|SIM_CLKDIV1_OUTDIV4_SHIFT
DECL|SIM_CLKDIV1_t|typedef|} SIM_CLKDIV1_t; /* 0x1044 */
DECL|SIM_CLKDIV|macro|SIM_CLKDIV
DECL|SIM_OCS32K_LPO|macro|SIM_OCS32K_LPO
DECL|SIM_OCS32K_RTS|macro|SIM_OCS32K_RTS
DECL|SIM_OCS32K_SYS|macro|SIM_OCS32K_SYS
DECL|SIM_SCGC1_t|typedef|} SIM_SCGC1_t; /* 0x1028*/
DECL|SIM_SCGC4_t|typedef|} SIM_SCGC4_t; /* 0x1034 */
DECL|SIM_SCGC5_PORTA_CLK_EN|macro|SIM_SCGC5_PORTA_CLK_EN
DECL|SIM_SCGC5_PORTB_CLK_EN|macro|SIM_SCGC5_PORTB_CLK_EN
DECL|SIM_SCGC5_PORTC_CLK_EN|macro|SIM_SCGC5_PORTC_CLK_EN
DECL|SIM_SCGC5_PORTD_CLK_EN|macro|SIM_SCGC5_PORTD_CLK_EN
DECL|SIM_SCGC5_PORTE_CLK_EN|macro|SIM_SCGC5_PORTE_CLK_EN
DECL|SIM_SCGC5_t|typedef|} SIM_SCGC5_t; /* 0x1038 */
DECL|SIM_SOPT1CFG_t|typedef|} SIM_SOPT1CFG_t; /* 0x004 */
DECL|SIM_SOPT1_t|typedef|} SIM_SOPT1_t; /* 0x000 */
DECL|SIM_SOPT2_t|typedef|} SIM_SOPT2_t; /* 0x1004 */
DECL|SIM_SOPT4_t|typedef|} SIM_SOPT4_t; /* 0x100C */
DECL|SIM_SOPT5_t|typedef|} SIM_SOPT5_t; /* 0x1010 */
DECL|SIM_UART_CLK_ENABLE|macro|SIM_UART_CLK_ENABLE
DECL|_K20SIM_H_|macro|_K20SIM_H_
DECL|_k20_sim_uart_clk_enable|function|static ALWAYS_INLINE void _k20_sim_uart_clk_enable(K20_SIM_t *sim, uint8_t port)
DECL|clk_out_sel|member|uint32_t clk_out_sel : 3 __packed;
DECL|clkdiv1|member|SIM_CLKDIV1_t clkdiv1; /* 0x1044 */
DECL|clkdiv2|member|uint32_t clkdiv2; /* 0x1048 */
DECL|cmp_clk_en|member|uint32_t cmp_clk_en : 1 __packed;
DECL|cmt_clk_en_0|member|uint32_t cmt_clk_en_0 : 1 __packed;
DECL|ewm_clk_en_0|member|uint32_t ewm_clk_en_0 : 1 __packed;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|flex_bus_sl|member|uint32_t flex_bus_sl : 2 __packed;
DECL|fll_pll_clk_sel|member|uint32_t fll_pll_clk_sel : 1 __packed;
DECL|ftm0_clk_sel|member|uint32_t ftm0_clk_sel : 1 __packed;
DECL|ftm0_flt0|member|uint32_t ftm0_flt0 : 1 __packed;
DECL|ftm0_flt1|member|uint32_t ftm0_flt1 : 1 __packed;
DECL|ftm0_flt2|member|uint32_t ftm0_flt2 : 1 __packed;
DECL|ftm0_trg0_src|member|uint32_t ftm0_trg0_src : 1 __packed;
DECL|ftm0_trg1_src|member|uint32_t ftm0_trg1_src : 1 __packed;
DECL|ftm1_ch0_src|member|uint32_t ftm1_ch0_src : 2 __packed;
DECL|ftm1_clk_sel|member|uint32_t ftm1_clk_sel : 1 __packed;
DECL|ftm1_flt0|member|uint32_t ftm1_flt0 : 1 __packed;
DECL|ftm2_ch0_src|member|uint32_t ftm2_ch0_src : 2 __packed;
DECL|ftm2_clk_sel|member|uint32_t ftm2_clk_sel : 1 __packed;
DECL|ftm2_flt0|member|uint32_t ftm2_flt0 : 1 __packed;
DECL|i2c0_clk_en|member|uint32_t i2c0_clk_en : 1 __packed;
DECL|i2c1_clk_en|member|uint32_t i2c1_clk_en : 1 __packed;
DECL|lptimer|member|uint32_t lptimer : 1 __packed;
DECL|osc32k_sel|member|uint32_t osc32k_sel : 2 __packed;
DECL|outdiv1|member|uint32_t outdiv1 : 4 __packed;
DECL|outdiv2|member|uint32_t outdiv2 : 4 __packed;
DECL|outdiv3|member|uint32_t outdiv3 : 4 __packed;
DECL|outdiv4|member|uint32_t outdiv4 : 4 __packed;
DECL|port_a_clk_en|member|uint32_t port_a_clk_en : 1 __packed;
DECL|port_b_clk_en|member|uint32_t port_b_clk_en : 1 __packed;
DECL|port_c_clk_en|member|uint32_t port_c_clk_en : 1 __packed;
DECL|port_d_clk_en|member|uint32_t port_d_clk_en : 1 __packed;
DECL|port_e_clk_en|member|uint32_t port_e_clk_en : 1 __packed;
DECL|ptd7pad|member|uint32_t ptd7pad : 1 __packed;
DECL|ram_size|member|uint32_t ram_size : 4 __packed;
DECL|res0008_1003|member|uint8_t res0008_1003[0x1003 - 0x8]; /* 0x0008-0x1003 Reserved */
DECL|res1008|member|uint32_t res1008; /* 0x1008 Reserved */
DECL|res1014|member|uint32_t res1014; /* 0x1014 Reserved */
DECL|res101c_1027|member|uint8_t res101c_1027[0x1027 - 0x101c]; /* Reserved */
DECL|res104c_1063|member|uint8_t res104c_1063[0x1063 - 0x104c]; /* Reserved */
DECL|res_0_11|member|uint32_t res_0_11 : 12 __packed;
DECL|res_0_15|member|uint32_t res_0_15 : 16 __packed;
DECL|res_0_23|member|uint32_t res_0_23 : 24 __packed;
DECL|res_0_3|member|uint32_t res_0_3 : 4 __packed;
DECL|res_0|member|uint32_t res_0 : 1 __packed;
DECL|res_10|member|uint32_t res_10 : 1 __packed;
DECL|res_13_15|member|uint32_t res_13_15 : 3 __packed;
DECL|res_14_17|member|uint32_t res_14_17 : 4 __packed;
DECL|res_14_31|member|uint32_t res_14_31 : 18 __packed;
DECL|res_16_17|member|uint32_t res_16_17 : 2 __packed;
DECL|res_17|member|uint32_t res_17 : 1 __packed;
DECL|res_19_31|member|uint32_t res_19_31 : 13 __packed;
DECL|res_1_4|member|uint32_t res_1_4 : 4 __packed;
DECL|res_20_28|member|uint32_t res_20_28 : 9 __packed;
DECL|res_21_31|member|uint32_t res_21_31 : 11 __packed;
DECL|res_22_23|member|uint32_t res_22_23 : 2 __packed;
DECL|res_27_31|member|uint32_t res_27_31 : 5 __packed;
DECL|res_27|member|uint32_t res_27 : 1 __packed;
DECL|res_30_31|member|uint32_t res_30_31 : 2 __packed;
DECL|res_3_5|member|uint32_t res_3_5 : 3 __packed;
DECL|res_3|member|uint32_t res_3 : 1 __packed;
DECL|res_5_7|member|uint32_t res_5_7 : 3 __packed;
DECL|res_6_8|member|uint32_t res_6_8 : 3 __packed;
DECL|res_8_31|member|uint32_t res_8_31 : 24 __packed;
DECL|res_8_31|member|uint32_t res_8_31 : 24 __packed;
DECL|res_8_9|member|uint32_t res_8_9 : 2 __packed;
DECL|res_9_17|member|uint32_t res_9_17 : 9 __packed;
DECL|rtc_clk_out_sel|member|uint32_t rtc_clk_out_sel : 1 __packed;
DECL|scgc1|member|SIM_SCGC1_t scgc1; /* 0x1028 */
DECL|scgc2|member|uint32_t scgc2; /* 0x102C */
DECL|scgc3|member|uint32_t scgc3; /* 0x1030 */
DECL|scgc4|member|SIM_SCGC4_t scgc4; /* 0x1034 */
DECL|scgc5|member|SIM_SCGC5_t scgc5; /* 0x1038 */
DECL|scgc6|member|uint32_t scgc6; /* 0x103C */
DECL|scgc7|member|uint32_t scgc7; /* 0x1040 */
DECL|sopt1_cfg|member|SIM_SOPT1CFG_t sopt1_cfg; /* 0x0004 */
DECL|sopt1|member|SIM_SOPT1_t sopt1; /* 0x0000 */
DECL|sopt2|member|SIM_SOPT2_t sopt2; /* 0x1004 */
DECL|sopt4|member|SIM_SOPT4_t sopt4; /* 0x100C */
DECL|sopt5|member|SIM_SOPT5_t sopt5; /* 0x1010 */
DECL|sopt7|member|uint32_t sopt7; /* 0x1018 */
DECL|trace_clk_sel|member|uint32_t trace_clk_sel : 1 __packed;
DECL|tsi|member|uint32_t tsi : 1 __packed;
DECL|uart0_clk_en|member|uint32_t uart0_clk_en : 1 __packed;
DECL|uart0_rx_src|member|uint32_t uart0_rx_src : 2 __packed;
DECL|uart0_rx_src|member|uint32_t uart0_rx_src : 2 __packed;
DECL|uart0_tx_src|member|uint32_t uart0_tx_src : 2 __packed;
DECL|uart0_tx_src|member|uint32_t uart0_tx_src : 2 __packed;
DECL|uart1_clk_en|member|uint32_t uart1_clk_en : 1 __packed;
DECL|uart1_rx_src|member|uint32_t uart1_rx_src : 2 __packed;
DECL|uart1_rx_src|member|uint32_t uart1_rx_src : 2 __packed;
DECL|uart1_tx_src|member|uint32_t uart1_tx_src : 2 __packed;
DECL|uart1_tx_src|member|uint32_t uart1_tx_src : 2 __packed;
DECL|uart2_clk_en|member|uint32_t uart2_clk_en : 1 __packed;
DECL|uart3_clk_en|member|uint32_t uart3_clk_en : 1 __packed;
DECL|usb_clk_en|member|uint32_t usb_clk_en : 1 __packed;
DECL|usb_reg_en|member|uint32_t usb_reg_en : 1 __packed;
DECL|usb_reg_write_en|member|uint32_t usb_reg_write_en : 1 __packed;
DECL|usb_src|member|uint32_t usb_src : 1 __packed;
DECL|usb_stop_stby|member|uint32_t usb_stop_stby : 1 __packed;
DECL|usb_stop_write_en|member|uint32_t usb_stop_write_en : 1 __packed;
DECL|usb_volt_stby|member|uint32_t usb_volt_stby : 1 __packed;
DECL|usb_volt_write_en|member|uint32_t usb_volt_write_en : 1 __packed;
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value; /* reset 0 */
DECL|value|member|uint32_t value; /* reset 0x0001 0000 */
DECL|value|member|uint32_t value; /* reset = 0x8000 F03F */
DECL|vref_clk_en|member|uint32_t vref_clk_en : 1 __packed;
