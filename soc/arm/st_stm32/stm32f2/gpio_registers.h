DECL|_STM32F2X_GPIO_REGISTERS_H_|macro|_STM32F2X_GPIO_REGISTERS_H_
DECL|afr|member|u32_t afr[2];
DECL|bit|member|} bit;
DECL|bsrr|member|u32_t bsrr;
DECL|cmpcr|member|u32_t cmpcr;
DECL|exticr1|member|union syscfg_exticr exticr1;
DECL|exticr2|member|union syscfg_exticr exticr2;
DECL|exticr3|member|union syscfg_exticr exticr3;
DECL|exticr4|member|union syscfg_exticr exticr4;
DECL|exti|member|u16_t exti;
DECL|idr|member|u32_t idr;
DECL|lckr|member|u32_t lckr;
DECL|memrmp|member|u32_t memrmp;
DECL|moder|member|u32_t moder;
DECL|odr|member|u32_t odr;
DECL|ospeedr|member|u32_t ospeedr;
DECL|otyper|member|u32_t otyper;
DECL|pmc|member|u32_t pmc;
DECL|pupdr|member|u32_t pupdr;
DECL|rsvd__16_31|member|u16_t rsvd__16_31;
DECL|stm32f2x_gpio|struct|struct stm32f2x_gpio {
DECL|stm32f2x_syscfg|struct|struct stm32f2x_syscfg {
DECL|syscfg_exticr|union|union syscfg_exticr {
DECL|val|member|u32_t val;
