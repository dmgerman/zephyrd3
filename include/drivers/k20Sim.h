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
DECL|_k20SimUartClkEnable|function|static ALWAYS_INLINE void _k20SimUartClkEnable(K20_SIM_t *sim_p, uint8_t which)
DECL|clkOutSel|member|uint32_t clkOutSel : 3 __attribute__((packed));
DECL|clkdiv1|member|SIM_CLKDIV1_t clkdiv1; /* 0x1044 */
DECL|clkdiv2|member|uint32_t clkdiv2; /* 0x1048 */
DECL|cmpClkEn|member|uint32_t cmpClkEn : 1 __attribute__((packed));
DECL|cmtClkEn_0|member|uint32_t cmtClkEn_0 : 1 __attribute__((packed));
DECL|ewmClkEn_0|member|uint32_t ewmClkEn_0 : 1 __attribute__((packed));
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|flexBusSL|member|uint32_t flexBusSL : 2 __attribute__((packed));
DECL|fllPllClkSel|member|uint32_t fllPllClkSel : 1 __attribute__((packed));
DECL|ftm0ClkSel|member|uint32_t ftm0ClkSel : 1 __attribute__((packed));
DECL|ftm0Flt0|member|uint32_t ftm0Flt0 : 1 __attribute__((packed));
DECL|ftm0Flt1|member|uint32_t ftm0Flt1 : 1 __attribute__((packed));
DECL|ftm0Flt2|member|uint32_t ftm0Flt2 : 1 __attribute__((packed));
DECL|ftm0Trg0Src|member|uint32_t ftm0Trg0Src : 1 __attribute__((packed));
DECL|ftm0Trg1Src|member|uint32_t ftm0Trg1Src : 1 __attribute__((packed));
DECL|ftm1Ch0Src|member|uint32_t ftm1Ch0Src : 2 __attribute__((packed));
DECL|ftm1ClkSel|member|uint32_t ftm1ClkSel : 1 __attribute__((packed));
DECL|ftm1Flt0|member|uint32_t ftm1Flt0 : 1 __attribute__((packed));
DECL|ftm2Ch0Src|member|uint32_t ftm2Ch0Src : 2 __attribute__((packed));
DECL|ftm2ClkSel|member|uint32_t ftm2ClkSel : 1 __attribute__((packed));
DECL|ftm2Flt0|member|uint32_t ftm2Flt0 : 1 __attribute__((packed));
DECL|i2c0ClkEn|member|uint32_t i2c0ClkEn : 1 __attribute__((packed));
DECL|i2c1ClkEn|member|uint32_t i2c1ClkEn : 1 __attribute__((packed));
DECL|lptimer|member|uint32_t lptimer : 1 __attribute__((packed));
DECL|osc32kSel|member|uint32_t osc32kSel : 2 __attribute__((packed));
DECL|outdiv1|member|uint32_t outdiv1 : 4 __attribute__((packed));
DECL|outdiv2|member|uint32_t outdiv2 : 4 __attribute__((packed));
DECL|outdiv3|member|uint32_t outdiv3 : 4 __attribute__((packed));
DECL|outdiv4|member|uint32_t outdiv4 : 4 __attribute__((packed));
DECL|portA_ClkEn|member|uint32_t portA_ClkEn : 1 __attribute__((packed));
DECL|portB_ClkEn|member|uint32_t portB_ClkEn : 1 __attribute__((packed));
DECL|portC_ClkEn|member|uint32_t portC_ClkEn : 1 __attribute__((packed));
DECL|portD_ClkEn|member|uint32_t portD_ClkEn : 1 __attribute__((packed));
DECL|portE_ClkEn|member|uint32_t portE_ClkEn : 1 __attribute__((packed));
DECL|ptd7Pad|member|uint32_t ptd7Pad : 1 __attribute__((packed));
DECL|ramSize|member|uint32_t ramSize : 4 __attribute__((packed));
DECL|res0008_1003|member|uint8_t res0008_1003[0x1003 - 0x8]; /* 0x0008-0x1003 Reserved */
DECL|res1008|member|uint32_t res1008; /* 0x1008 Reserved */
DECL|res1014|member|uint32_t res1014; /* 0x1014 Reserved */
DECL|res101c_1027|member|uint8_t res101c_1027[0x1027 - 0x101c]; /* Reserved */
DECL|res104c_1063|member|uint8_t res104c_1063[0x1063 - 0x104c]; /* Reserved */
DECL|res_0_11|member|uint32_t res_0_11 : 12 __attribute__((packed));
DECL|res_0_15|member|uint32_t res_0_15 : 16 __attribute__((packed));
DECL|res_0_23|member|uint32_t res_0_23 : 24 __attribute__((packed));
DECL|res_0_3|member|uint32_t res_0_3 : 4 __attribute__((packed));
DECL|res_0|member|uint32_t res_0 : 1 __attribute__((packed));
DECL|res_10|member|uint32_t res_10 : 1 __attribute__((packed));
DECL|res_13_15|member|uint32_t res_13_15 : 3 __attribute__((packed));
DECL|res_14_17|member|uint32_t res_14_17 : 4 __attribute__((packed));
DECL|res_14_31|member|uint32_t res_14_31 : 18 __attribute__((packed));
DECL|res_16_17|member|uint32_t res_16_17 : 2 __attribute__((packed));
DECL|res_17|member|uint32_t res_17 : 1 __attribute__((packed));
DECL|res_19_31|member|uint32_t res_19_31 : 13 __attribute__((packed));
DECL|res_1_4|member|uint32_t res_1_4 : 4 __attribute__((packed));
DECL|res_20_28|member|uint32_t res_20_28 : 9 __attribute__((packed));
DECL|res_21_31|member|uint32_t res_21_31 : 11 __attribute__((packed));
DECL|res_22_23|member|uint32_t res_22_23 : 2 __attribute__((packed));
DECL|res_27_31|member|uint32_t res_27_31 : 5 __attribute__((packed));
DECL|res_27|member|uint32_t res_27 : 1 __attribute__((packed));
DECL|res_30_31|member|uint32_t res_30_31 : 2 __attribute__((packed));
DECL|res_3_5|member|uint32_t res_3_5 : 3 __attribute__((packed));
DECL|res_3|member|uint32_t res_3 : 1 __attribute__((packed));
DECL|res_5_7|member|uint32_t res_5_7 : 3 __attribute__((packed));
DECL|res_6_8|member|uint32_t res_6_8 : 3 __attribute__((packed));
DECL|res_8_31|member|uint32_t res_8_31 : 24 __attribute__((packed));
DECL|res_8_31|member|uint32_t res_8_31 : 24 __attribute__((packed));
DECL|res_8_9|member|uint32_t res_8_9 : 2 __attribute__((packed));
DECL|res_9_17|member|uint32_t res_9_17 : 9 __attribute__((packed));
DECL|rtcClkOutSel|member|uint32_t rtcClkOutSel : 1 __attribute__((packed));
DECL|scgc1|member|SIM_SCGC1_t scgc1; /* 0x1028 */
DECL|scgc2|member|uint32_t scgc2; /* 0x102C */
DECL|scgc3|member|uint32_t scgc3; /* 0x1030 */
DECL|scgc4|member|SIM_SCGC4_t scgc4; /* 0x1034 */
DECL|scgc5|member|SIM_SCGC5_t scgc5; /* 0x1038 */
DECL|scgc6|member|uint32_t scgc6; /* 0x103C */
DECL|scgc7|member|uint32_t scgc7; /* 0x1040 */
DECL|sopt1Cfg|member|SIM_SOPT1CFG_t sopt1Cfg; /* 0x0004 */
DECL|sopt1|member|SIM_SOPT1_t sopt1; /* 0x0000 */
DECL|sopt2|member|SIM_SOPT2_t sopt2; /* 0x1004 */
DECL|sopt4|member|SIM_SOPT4_t sopt4; /* 0x100C */
DECL|sopt5|member|SIM_SOPT5_t sopt5; /* 0x1010 */
DECL|sopt7|member|uint32_t sopt7; /* 0x1018 */
DECL|traceClkSel|member|uint32_t traceClkSel : 1 __attribute__((packed));
DECL|tsi|member|uint32_t tsi : 1 __attribute__((packed));
DECL|uart0ClkEn|member|uint32_t uart0ClkEn : 1 __attribute__((packed));
DECL|uart0RxSrc|member|uint32_t uart0RxSrc : 2 __attribute__((packed));
DECL|uart0RxSrc|member|uint32_t uart0RxSrc : 2 __attribute__((packed));
DECL|uart0TxSrc|member|uint32_t uart0TxSrc : 2 __attribute__((packed));
DECL|uart0TxSrc|member|uint32_t uart0TxSrc : 2 __attribute__((packed));
DECL|uart1ClkEn|member|uint32_t uart1ClkEn : 1 __attribute__((packed));
DECL|uart1RxSrc|member|uint32_t uart1RxSrc : 2 __attribute__((packed));
DECL|uart1RxSrc|member|uint32_t uart1RxSrc : 2 __attribute__((packed));
DECL|uart1TxSrc|member|uint32_t uart1TxSrc : 2 __attribute__((packed));
DECL|uart1TxSrc|member|uint32_t uart1TxSrc : 2 __attribute__((packed));
DECL|uart2ClkEn|member|uint32_t uart2ClkEn : 1 __attribute__((packed));
DECL|uart3ClkEn|member|uint32_t uart3ClkEn : 1 __attribute__((packed));
DECL|usbClkEn|member|uint32_t usbClkEn : 1 __attribute__((packed));
DECL|usbRegEn|member|uint32_t usbRegEn : 1 __attribute__((packed));
DECL|usbRegWriteEn|member|uint32_t usbRegWriteEn : 1 __attribute__((packed));
DECL|usbSrc|member|uint32_t usbSrc : 1 __attribute__((packed));
DECL|usbStopStby|member|uint32_t usbStopStby : 1 __attribute__((packed));
DECL|usbStopWriteEn|member|uint32_t usbStopWriteEn : 1 __attribute__((packed));
DECL|usbVoltStby|member|uint32_t usbVoltStby : 1 __attribute__((packed));
DECL|usbVoltWriteEn|member|uint32_t usbVoltWriteEn : 1 __attribute__((packed));
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value; /* reset 0 */
DECL|value|member|uint32_t value; /* reset 0x0001 0000 */
DECL|value|member|uint32_t value; /* reset = 0x8000 F03F */
DECL|vrefClkEn|member|uint32_t vrefClkEn : 1 __attribute__((packed));
