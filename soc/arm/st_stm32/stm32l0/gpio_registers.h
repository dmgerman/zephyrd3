DECL|_STM32L0X_GPIO_REGISTERS_H_|macro|_STM32L0X_GPIO_REGISTERS_H_
DECL|afr|member|u32_t afr[2];
DECL|bit|member|} bit;
DECL|brr|member|u32_t brr;
DECL|bsrr|member|u32_t bsrr;
DECL|cfgr1|member|u32_t cfgr1;
DECL|cfgr2|member|u32_t cfgr2;
DECL|cfgr3|member|u32_t cfgr3;
DECL|comp1_ctrl|member|u32_t comp1_ctrl;
DECL|comp2_ctrl|member|u32_t comp2_ctrl;
DECL|exticr1|member|union syscfg_exticr exticr1;
DECL|exticr2|member|union syscfg_exticr exticr2;
DECL|exticr3|member|union syscfg_exticr exticr3;
DECL|exticr4|member|union syscfg_exticr exticr4;
DECL|exti|member|u16_t exti;
DECL|idr|member|u32_t idr;
DECL|lckr|member|u32_t lckr;
DECL|moder|member|u32_t moder;
DECL|odr|member|u32_t odr;
DECL|ospeedr|member|u32_t ospeedr;
DECL|otyper|member|u32_t otyper;
DECL|pupdr|member|u32_t pupdr;
DECL|rsvd__16_31|member|u16_t rsvd__16_31;
DECL|stm32l0x_gpio|struct|struct stm32l0x_gpio {
DECL|stm32l0x_syscfg|struct|struct stm32l0x_syscfg {
DECL|syscfg_exticr|union|union syscfg_exticr {
DECL|val|member|u32_t val;
