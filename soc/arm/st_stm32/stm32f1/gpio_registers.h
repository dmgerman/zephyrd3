DECL|_STM32F10X_GPIO_REGISTERS_H_|macro|_STM32F10X_GPIO_REGISTERS_H_
DECL|__afio_evcr|union|union __afio_evcr {
DECL|__afio_exticr|union|union __afio_exticr {
DECL|__afio_mapr2|union|union __afio_mapr2 {
DECL|__afio_mapr|union|union __afio_mapr {
DECL|adc1_etrginj_remap|member|u32_t adc1_etrginj_remap :1 __packed;
DECL|adc1_etrgreg_remap|member|u32_t adc1_etrgreg_remap :1 __packed;
DECL|adc2_etrginj_remap|member|u32_t adc2_etrginj_remap :1 __packed;
DECL|adc2_etrgreg_remap|member|u32_t adc2_etrgreg_remap :1 __packed;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|brr|member|u32_t brr;
DECL|bsrr|member|u32_t bsrr;
DECL|can_remap|member|u32_t can_remap :2 __packed;
DECL|crh|member|u32_t crh;
DECL|crl|member|u32_t crl;
DECL|evcr|member|union __afio_evcr evcr;
DECL|evoe|member|u32_t evoe :1 __packed;
DECL|exticr1|member|union __afio_exticr exticr1;
DECL|exticr2|member|union __afio_exticr exticr2;
DECL|exticr3|member|union __afio_exticr exticr3;
DECL|exticr4|member|union __afio_exticr exticr4;
DECL|exti|member|u16_t exti;
DECL|fsmc_nadv|member|u32_t fsmc_nadv :1 __packed;
DECL|i2c1_remap|member|u32_t i2c1_remap :1 __packed;
DECL|idr|member|u32_t idr;
DECL|lckr|member|u32_t lckr;
DECL|mapr2|member|union __afio_mapr2 mapr2;
DECL|mapr|member|union __afio_mapr mapr;
DECL|odr|member|u32_t odr;
DECL|pd01_remap|member|u32_t pd01_remap :1 __packed;
DECL|pin|member|u32_t pin :4 __packed;
DECL|port|member|u32_t port :3 __packed;
DECL|rsvd__0_4|member|u32_t rsvd__0_4 :5 __packed;
DECL|rsvd__11_31|member|u32_t rsvd__11_31 :21 __packed;
DECL|rsvd__16_31|member|u16_t rsvd__16_31;
DECL|rsvd__21_23|member|u32_t rsvd__21_23 :3 __packed;
DECL|rsvd__27_31|member|u32_t rsvd__27_31 :5 __packed;
DECL|rsvd__8_31|member|u32_t rsvd__8_31 :24 __packed;
DECL|spi1_remap|member|u32_t spi1_remap :1 __packed;
DECL|stm32f10x_afio|struct|struct stm32f10x_afio {
DECL|stm32f10x_gpio|struct|struct stm32f10x_gpio {
DECL|swj_cfg|member|u32_t swj_cfg :3 __packed;
DECL|tim10_remap|member|u32_t tim10_remap :1 __packed;
DECL|tim11_remap|member|u32_t tim11_remap :1 __packed;
DECL|tim13_remap|member|u32_t tim13_remap :1 __packed;
DECL|tim14_remap|member|u32_t tim14_remap :1 __packed;
DECL|tim1_remap|member|u32_t tim1_remap :2 __packed;
DECL|tim2_remap|member|u32_t tim2_remap :2 __packed;
DECL|tim3_remap|member|u32_t tim3_remap :2 __packed;
DECL|tim4_remap|member|u32_t tim4_remap :1 __packed;
DECL|tim5ch4_iremap|member|u32_t tim5ch4_iremap :1 __packed;
DECL|tim9_remap|member|u32_t tim9_remap :1 __packed;
DECL|usart1_remap|member|u32_t usart1_remap :1 __packed;
DECL|usart2_remap|member|u32_t usart2_remap :1 __packed;
DECL|usart3_remap|member|u32_t usart3_remap :2 __packed;
DECL|val|member|u32_t val;
DECL|val|member|u32_t val;
DECL|val|member|u32_t val;
DECL|val|member|u32_t val;
