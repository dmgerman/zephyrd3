DECL|_STM32F3X_GPIO_REGISTERS_H_|macro|_STM32F3X_GPIO_REGISTERS_H_
DECL|afr|member|u32_t afr[2];
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|brr|member|u32_t brr;
DECL|bsrr|member|u32_t bsrr;
DECL|cfgr1|member|union syscfg_cfgr1 cfgr1;
DECL|cfgr2|member|u32_t cfgr2;
DECL|cfgr3|member|u32_t cfgr3;
DECL|dac2_ch1_dma_rmp|member|u32_t dac2_ch1_dma_rmp :1 __packed;
DECL|dac_trig_rmp|member|u32_t dac_trig_rmp :1 __packed;
DECL|encoder_mode|member|u32_t encoder_mode :2 __packed;
DECL|exticr1|member|union syscfg__exticr exticr1;
DECL|exticr2|member|union syscfg__exticr exticr2;
DECL|exticr3|member|union syscfg__exticr exticr3;
DECL|exticr4|member|union syscfg__exticr exticr4;
DECL|exti|member|u16_t exti;
DECL|fpu_ie|member|u32_t fpu_ie :6 __packed;
DECL|i2c1_fmp|member|u32_t i2c1_fmp :1 __packed;
DECL|i2c_pb6_fmp|member|u32_t i2c_pb6_fmp :1 __packed;
DECL|i2c_pb7_fmp|member|u32_t i2c_pb7_fmp :1 __packed;
DECL|i2c_pb8_fmp|member|u32_t i2c_pb8_fmp :1 __packed;
DECL|i2c_pb9_fmp|member|u32_t i2c_pb9_fmp :1 __packed;
DECL|idr|member|u32_t idr;
DECL|lckr|member|u32_t lckr;
DECL|mem_mode|member|u32_t mem_mode :2 __packed;
DECL|moder|member|u32_t moder;
DECL|odr|member|u32_t odr;
DECL|ospeedr|member|u32_t ospeedr;
DECL|otyper|member|u32_t otyper;
DECL|page0_wp|member|u32_t page0_wp :1 __packed;
DECL|page1_wp|member|u32_t page1_wp :1 __packed;
DECL|page2_wp|member|u32_t page2_wp :1 __packed;
DECL|page3_wp|member|u32_t page3_wp :1 __packed;
DECL|pupdr|member|u32_t pupdr;
DECL|rcr|member|union syscfg_rcr rcr;
DECL|rsvd_0x1C|member|u32_t rsvd_0x1C;
DECL|rsvd_0x20|member|u32_t rsvd_0x20;
DECL|rsvd_0x24|member|u32_t rsvd_0x24;
DECL|rsvd_0x28|member|u32_t rsvd_0x28;
DECL|rsvd_0x2C|member|u32_t rsvd_0x2C;
DECL|rsvd_0x30|member|u32_t rsvd_0x30;
DECL|rsvd_0x34|member|u32_t rsvd_0x34;
DECL|rsvd_0x38|member|u32_t rsvd_0x38;
DECL|rsvd_0x3C|member|u32_t rsvd_0x3C;
DECL|rsvd_0x40|member|u32_t rsvd_0x40;
DECL|rsvd_0x44|member|u32_t rsvd_0x44;
DECL|rsvd_0x48|member|u32_t rsvd_0x48;
DECL|rsvd_0x4C|member|u32_t rsvd_0x4C;
DECL|rsvd__16_31|member|u16_t rsvd__16_31;
DECL|rsvd__21|member|u32_t rsvd__21 :1 __packed;
DECL|rsvd__24_25|member|u32_t rsvd__24_25 :2 __packed;
DECL|rsvd__2_5|member|u32_t rsvd__2_5 :4 __packed;
DECL|rsvd__4_31|member|u32_t rsvd__4_31 :28 __packed;
DECL|rsvd__8_10|member|u32_t rsvd__8_10 :3 __packed;
DECL|stm32f3x_gpio|struct|struct stm32f3x_gpio {
DECL|stm32f3x_syscfg|struct|struct stm32f3x_syscfg {
DECL|syscfg__exticr|union|union syscfg__exticr {
DECL|syscfg_cfgr1|union|union syscfg_cfgr1 {
DECL|syscfg_rcr|union|union syscfg_rcr {
DECL|tim16_dac1_dma_rmp|member|u32_t tim16_dac1_dma_rmp :1 __packed;
DECL|tim16_dma_rmp|member|u32_t tim16_dma_rmp :1 __packed;
DECL|tim17_dac2_dma_rmp|member|u32_t tim17_dac2_dma_rmp :1 __packed;
DECL|tim17_dma_rmp|member|u32_t tim17_dma_rmp :1 __packed;
DECL|tim1_itr3_rmo|member|u32_t tim1_itr3_rmo :1 __packed;
DECL|val|member|u32_t val;
DECL|val|member|u32_t val;
DECL|val|member|u32_t val;
