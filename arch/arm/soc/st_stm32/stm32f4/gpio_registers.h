DECL|_STM32F4X_GPIO_REGISTERS_H_|macro|_STM32F4X_GPIO_REGISTERS_H_
DECL|afr|member|u32_t afr[2];
DECL|bit|member|} bit;
DECL|bsr|member|u32_t bsr;
DECL|cmpcr|member|u32_t cmpcr;
DECL|exticr1|member|union syscfg_exticr exticr1;
DECL|exticr2|member|union syscfg_exticr exticr2;
DECL|exticr3|member|union syscfg_exticr exticr3;
DECL|exticr4|member|union syscfg_exticr exticr4;
DECL|exti|member|u16_t exti;
DECL|idr|member|u32_t idr;
DECL|lck|member|u32_t lck;
DECL|memrmp|member|u32_t memrmp;
DECL|mode|member|u32_t mode;
DECL|odr|member|u32_t odr;
DECL|ospeed|member|u32_t ospeed;
DECL|otype|member|u32_t otype;
DECL|pmc|member|u32_t pmc;
DECL|pupdr|member|u32_t pupdr;
DECL|rsvd__16_31|member|u16_t rsvd__16_31;
DECL|stm32f4x_gpio|struct|struct stm32f4x_gpio {
DECL|stm32f4x_syscfg|struct|struct stm32f4x_syscfg {
DECL|syscfg_exticr|union|union syscfg_exticr {
DECL|val|member|u32_t val;
