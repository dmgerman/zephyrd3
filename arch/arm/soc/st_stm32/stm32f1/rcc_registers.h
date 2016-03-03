DECL|STM32F10X_RCC_CFG_HCLK_DIV_0|enumerator|STM32F10X_RCC_CFG_HCLK_DIV_0 = 0x0,
DECL|STM32F10X_RCC_CFG_HCLK_DIV_16|enumerator|STM32F10X_RCC_CFG_HCLK_DIV_16 = 0x7,
DECL|STM32F10X_RCC_CFG_HCLK_DIV_2|enumerator|STM32F10X_RCC_CFG_HCLK_DIV_2 = 0x4,
DECL|STM32F10X_RCC_CFG_HCLK_DIV_4|enumerator|STM32F10X_RCC_CFG_HCLK_DIV_4 = 0x5,
DECL|STM32F10X_RCC_CFG_HCLK_DIV_8|enumerator|STM32F10X_RCC_CFG_HCLK_DIV_8 = 0x6,
DECL|STM32F10X_RCC_CFG_PLL_SRC_HSI|enumerator|STM32F10X_RCC_CFG_PLL_SRC_HSI = 0x0,
DECL|STM32F10X_RCC_CFG_PLL_SRC_PREDIV1|enumerator|STM32F10X_RCC_CFG_PLL_SRC_PREDIV1 = 0x1,
DECL|STM32F10X_RCC_CFG_SYSCLK_DIV_0|enumerator|STM32F10X_RCC_CFG_SYSCLK_DIV_0 = 0x0,
DECL|STM32F10X_RCC_CFG_SYSCLK_DIV_128|enumerator|STM32F10X_RCC_CFG_SYSCLK_DIV_128 = 0xd,
DECL|STM32F10X_RCC_CFG_SYSCLK_DIV_16|enumerator|STM32F10X_RCC_CFG_SYSCLK_DIV_16 = 0xb,
DECL|STM32F10X_RCC_CFG_SYSCLK_DIV_256|enumerator|STM32F10X_RCC_CFG_SYSCLK_DIV_256 = 0xe,
DECL|STM32F10X_RCC_CFG_SYSCLK_DIV_2|enumerator|STM32F10X_RCC_CFG_SYSCLK_DIV_2 = 0x8,
DECL|STM32F10X_RCC_CFG_SYSCLK_DIV_4|enumerator|STM32F10X_RCC_CFG_SYSCLK_DIV_4 = 0x9,
DECL|STM32F10X_RCC_CFG_SYSCLK_DIV_512|enumerator|STM32F10X_RCC_CFG_SYSCLK_DIV_512 = 0xf,
DECL|STM32F10X_RCC_CFG_SYSCLK_DIV_64|enumerator|STM32F10X_RCC_CFG_SYSCLK_DIV_64 = 0xc,
DECL|STM32F10X_RCC_CFG_SYSCLK_DIV_8|enumerator|STM32F10X_RCC_CFG_SYSCLK_DIV_8 = 0xa,
DECL|STM32F10X_RCC_CFG_SYSCLK_SRC_HSE|enumerator|STM32F10X_RCC_CFG_SYSCLK_SRC_HSE = 0x1,
DECL|STM32F10X_RCC_CFG_SYSCLK_SRC_HSI|enumerator|STM32F10X_RCC_CFG_SYSCLK_SRC_HSI = 0x0,
DECL|STM32F10X_RCC_CFG_SYSCLK_SRC_PLL|enumerator|STM32F10X_RCC_CFG_SYSCLK_SRC_PLL = 0x2,
DECL|_STM32F10X_CLOCK_H_|macro|_STM32F10X_CLOCK_H_
DECL|__rcc_cfgr|union|union __rcc_cfgr {
DECL|__rcc_cr|union|union __rcc_cr {
DECL|adcpre|member|uint32_t adcpre :2 __packed;
DECL|ahbenr|member|uint32_t ahbenr;
DECL|apb1enr|member|uint32_t apb1enr;
DECL|apb1rstr|member|uint32_t apb1rstr;
DECL|apb2enr|member|uint32_t apb2enr;
DECL|apb2rstr|member|uint32_t apb2rstr;
DECL|bdcr|member|uint32_t bdcr;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|cfgr|member|union __rcc_cfgr cfgr;
DECL|cir|member|uint32_t cir;
DECL|cr|member|union __rcc_cr cr;
DECL|csr|member|uint32_t csr;
DECL|csson|member|uint32_t csson :1 __packed;
DECL|hpre|member|uint32_t hpre :4 __packed;
DECL|hsebyp|member|uint32_t hsebyp :1 __packed;
DECL|hseon|member|uint32_t hseon :1 __packed;
DECL|hserdy|member|uint32_t hserdy :1 __packed;
DECL|hsical|member|uint32_t hsical :8 __packed;
DECL|hsion|member|uint32_t hsion :1 __packed;
DECL|hsirdy|member|uint32_t hsirdy :1 __packed;
DECL|hsitrim|member|uint32_t hsitrim :5 __packed;
DECL|mco|member|uint32_t mco :3 __packed;
DECL|pllmul|member|uint32_t pllmul :4 __packed;
DECL|pllon|member|uint32_t pllon :1 __packed;
DECL|pllrdy|member|uint32_t pllrdy :1 __packed;
DECL|pllsrc|member|uint32_t pllsrc :1 __packed;
DECL|pllxtpre|member|uint32_t pllxtpre :1 __packed;
DECL|ppre1|member|uint32_t ppre1 :3 __packed;
DECL|ppre2|member|uint32_t ppre2 :3 __packed;
DECL|rsvd__20_23|member|uint32_t rsvd__20_23 :4 __packed;
DECL|rsvd__23|member|uint32_t rsvd__23 :1 __packed;
DECL|rsvd__26_31|member|uint32_t rsvd__26_31 :6 __packed;
DECL|rsvd__27_31|member|uint32_t rsvd__27_31 :5 __packed;
DECL|rsvd__2|member|uint32_t rsvd__2 :1 __packed;
DECL|stm32f10x_rcc|struct|struct stm32f10x_rcc {
DECL|sws|member|uint32_t sws :2 __packed;
DECL|sw|member|uint32_t sw :2 __packed;
DECL|usbpre|member|uint32_t usbpre :1 __packed;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
