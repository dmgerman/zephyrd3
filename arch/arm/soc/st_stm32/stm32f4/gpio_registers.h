DECL|_STM32F4X_GPIO_REGISTERS_H_|macro|_STM32F4X_GPIO_REGISTERS_H_
DECL|afr|member|uint32_t afr[2];
DECL|bit|member|} bit;
DECL|bsr|member|uint32_t bsr;
DECL|cmpcr|member|uint32_t cmpcr;
DECL|exticr1|member|union syscfg_exticr exticr1;
DECL|exticr2|member|union syscfg_exticr exticr2;
DECL|exticr3|member|union syscfg_exticr exticr3;
DECL|exticr4|member|union syscfg_exticr exticr4;
DECL|exti|member|uint16_t exti;
DECL|idr|member|uint32_t idr;
DECL|lck|member|uint32_t lck;
DECL|memrmp|member|uint32_t memrmp;
DECL|mode|member|uint32_t mode;
DECL|odr|member|uint32_t odr;
DECL|ospeed|member|uint32_t ospeed;
DECL|otype|member|uint32_t otype;
DECL|pmc|member|uint32_t pmc;
DECL|pupdr|member|uint32_t pupdr;
DECL|rsvd__16_31|member|uint16_t rsvd__16_31;
DECL|stm32f4x_gpio|struct|struct stm32f4x_gpio {
DECL|stm32f4x_syscfg|struct|struct stm32f4x_syscfg {
DECL|syscfg_exticr|union|union syscfg_exticr {
DECL|val|member|uint32_t val;
