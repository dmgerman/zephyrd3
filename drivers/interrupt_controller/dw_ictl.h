DECL|APB_ICTL_COMP_VERSION|member|u32_t APB_ICTL_COMP_VERSION; /* offset e0 */
DECL|Reserved10|member|u32_t Reserved10; /* offset 84 */
DECL|Reserved11|member|u32_t Reserved11; /* offset 8c */
DECL|Reserved12|member|u32_t Reserved12; /* offset 94 */
DECL|Reserved13|member|u32_t Reserved13; /* offset 9c */
DECL|Reserved14|member|u32_t Reserved14; /* offset a4 */
DECL|Reserved15|member|u32_t Reserved15; /* offset ac */
DECL|Reserved16|member|u32_t Reserved16; /* offset b4 */
DECL|Reserved17|member|u32_t Reserved17; /* offset bc */
DECL|Reserved18|member|u32_t Reserved18; /* offset dc */
DECL|Reserved19|member|u32_t Reserved19; /* offset e4 */
DECL|Reserved1|member|u32_t Reserved1; /* offset 3c */
DECL|Reserved2|member|u32_t Reserved2; /* offset 44 */
DECL|Reserved3|member|u32_t Reserved3; /* offset 4c */
DECL|Reserved4|member|u32_t Reserved4; /* offset 54 */
DECL|Reserved5|member|u32_t Reserved5; /* offset 5c */
DECL|Reserved6|member|u32_t Reserved6; /* offset 64 */
DECL|Reserved7|member|u32_t Reserved7; /* offset 6c */
DECL|Reserved8|member|u32_t Reserved8; /* offset 74 */
DECL|Reserved9|member|u32_t Reserved9; /* offset 7c */
DECL|_DW_ICTL_H_|macro|_DW_ICTL_H_
DECL|base_addr|member|u32_t base_addr;
DECL|config_func|member|dw_ictl_config_irq_t config_func;
DECL|dw_ictl_config_irq_t|typedef|typedef void (*dw_ictl_config_irq_t)(struct device *port);
DECL|dw_ictl_config|struct|struct dw_ictl_config {
DECL|dw_ictl_registers|struct|struct dw_ictl_registers {
DECL|dw_ictl_runtime|struct|struct dw_ictl_runtime {
DECL|fiq_finalstatus|member|u32_t fiq_finalstatus; /* offset d4 */
DECL|fiq_inten|member|u32_t fiq_inten; /* offset c0 */
DECL|fiq_intforce|member|u32_t fiq_intforce; /* offset c8 */
DECL|fiq_intmask|member|u32_t fiq_intmask; /* offset c4 */
DECL|fiq_rawstatus|member|u32_t fiq_rawstatus; /* offset cc */
DECL|fiq_status|member|u32_t fiq_status; /* offset d0 */
DECL|irq_finalstatus_h|member|u32_t irq_finalstatus_h; /* offset 34 */
DECL|irq_finalstatus_l|member|u32_t irq_finalstatus_l; /* offset 30 */
DECL|irq_inten_h|member|u32_t irq_inten_h; /* offset 04 */
DECL|irq_inten_l|member|u32_t irq_inten_l; /* offset 00 */
DECL|irq_intforce_h|member|u32_t irq_intforce_h; /* offset 14 */
DECL|irq_intforce_l|member|u32_t irq_intforce_l; /* offset 10 */
DECL|irq_intmask_h|member|u32_t irq_intmask_h; /* offset 0C */
DECL|irq_intmask_l|member|u32_t irq_intmask_l; /* offset 08 */
DECL|irq_maskstatus_h|member|u32_t irq_maskstatus_h; /* offset 2c */
DECL|irq_maskstatus_l|member|u32_t irq_maskstatus_l; /* offset 28 */
DECL|irq_num|member|u32_t irq_num;
DECL|irq_plevel|member|u32_t irq_plevel; /* offset d8 */
DECL|irq_rawstatus_h|member|u32_t irq_rawstatus_h; /* offset 1c */
DECL|irq_rawstatus_l|member|u32_t irq_rawstatus_l; /* offset 18 */
DECL|irq_status_h|member|u32_t irq_status_h; /* offset 24 */
DECL|irq_status_l|member|u32_t irq_status_l; /* offset 20 */
DECL|irq_vector_0|member|u32_t irq_vector_0; /* offset 40 */
DECL|irq_vector_10|member|u32_t irq_vector_10; /* offset 90 */
DECL|irq_vector_11|member|u32_t irq_vector_11; /* offset 98 */
DECL|irq_vector_12|member|u32_t irq_vector_12; /* offset a0 */
DECL|irq_vector_13|member|u32_t irq_vector_13; /* offset a8 */
DECL|irq_vector_14|member|u32_t irq_vector_14; /* offset b0 */
DECL|irq_vector_15|member|u32_t irq_vector_15; /* offset b8 */
DECL|irq_vector_1|member|u32_t irq_vector_1; /* offset 48 */
DECL|irq_vector_2|member|u32_t irq_vector_2; /* offset 50 */
DECL|irq_vector_3|member|u32_t irq_vector_3; /* offset 58 */
DECL|irq_vector_4|member|u32_t irq_vector_4; /* offset 60 */
DECL|irq_vector_5|member|u32_t irq_vector_5; /* offset 68 */
DECL|irq_vector_6|member|u32_t irq_vector_6; /* offset 70 */
DECL|irq_vector_7|member|u32_t irq_vector_7; /* offset 78 */
DECL|irq_vector_8|member|u32_t irq_vector_8; /* offset 80 */
DECL|irq_vector_9|member|u32_t irq_vector_9; /* offset 88 */
DECL|irq_vector|member|u32_t irq_vector; /* offset 38 */
DECL|isr_table_offset|member|u32_t isr_table_offset;
DECL|numirqs|member|u32_t numirqs;
