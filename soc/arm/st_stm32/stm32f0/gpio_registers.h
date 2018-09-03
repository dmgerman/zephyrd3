DECL|_STM32F0X_GPIO_REGISTERS_H_|macro|_STM32F0X_GPIO_REGISTERS_H_
DECL|adc_dma_rmp|member|u32_t adc_dma_rmp :1 __packed;
DECL|afr|member|u32_t afr[2];
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|brr|member|u32_t brr;
DECL|bsrr|member|u32_t bsrr;
DECL|cfgr1|member|union syscfg_cfgr1 cfgr1;
DECL|cfgr2|member|u32_t cfgr2;
DECL|exticr1|member|union syscfg__exticr exticr1;
DECL|exticr2|member|union syscfg__exticr exticr2;
DECL|exticr3|member|union syscfg__exticr exticr3;
DECL|exticr4|member|union syscfg__exticr exticr4;
DECL|exti|member|u16_t exti;
DECL|i2c1_fmp|member|u32_t i2c1_fmp :1 __packed;
DECL|i2c_pa10_fmp|member|u32_t i2c_pa10_fmp :1 __packed;
DECL|i2c_pa9_fmp|member|u32_t i2c_pa9_fmp :1 __packed;
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
DECL|pupdr|member|u32_t pupdr;
DECL|rsvd__13_15|member|u32_t rsvd__13_15 :3 __packed;
DECL|rsvd__16_31|member|u16_t rsvd__16_31;
DECL|rsvd__21|member|u32_t rsvd__21 :1 __packed;
DECL|rsvd__24_25|member|u32_t rsvd__24_25 :2 __packed;
DECL|rsvd__27_31|member|u32_t rsvd__27_31 :5 __packed;
DECL|rsvd__2_7|member|u32_t rsvd__2_7 :6 __packed;
DECL|rsvd|member|u32_t rsvd;
DECL|stm32f0x_gpio|struct|struct stm32f0x_gpio {
DECL|stm32f0x_syscfg|struct|struct stm32f0x_syscfg {
DECL|syscfg__exticr|union|union syscfg__exticr {
DECL|syscfg_cfgr1|union|union syscfg_cfgr1 {
DECL|tim16_dma_rmp|member|u32_t tim16_dma_rmp :1 __packed;
DECL|tim17_dma_rmp|member|u32_t tim17_dma_rmp :1 __packed;
DECL|usart1_rx_dma_rmp|member|u32_t usart1_rx_dma_rmp :1 __packed;
DECL|usart1_tx_dma_rmp|member|u32_t usart1_tx_dma_rmp :1 __packed;
DECL|usart3_dma_rmp|member|u32_t usart3_dma_rmp :1 __packed;
DECL|val|member|u32_t val;
DECL|val|member|u32_t val;
