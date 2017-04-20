DECL|STM32F4X_RCC_APB1ENR_PWREN|enumerator|STM32F4X_RCC_APB1ENR_PWREN = 0x10000000U,
DECL|STM32F4X_RCC_CFG_HCLK_DIV_0|enumerator|STM32F4X_RCC_CFG_HCLK_DIV_0 = 0x0,
DECL|STM32F4X_RCC_CFG_HCLK_DIV_16|enumerator|STM32F4X_RCC_CFG_HCLK_DIV_16 = 0x7,
DECL|STM32F4X_RCC_CFG_HCLK_DIV_2|enumerator|STM32F4X_RCC_CFG_HCLK_DIV_2 = 0x4,
DECL|STM32F4X_RCC_CFG_HCLK_DIV_4|enumerator|STM32F4X_RCC_CFG_HCLK_DIV_4 = 0x5,
DECL|STM32F4X_RCC_CFG_HCLK_DIV_8|enumerator|STM32F4X_RCC_CFG_HCLK_DIV_8 = 0x6,
DECL|STM32F4X_RCC_CFG_PLLP_DIV_2|enumerator|STM32F4X_RCC_CFG_PLLP_DIV_2 = 0x0,
DECL|STM32F4X_RCC_CFG_PLLP_DIV_4|enumerator|STM32F4X_RCC_CFG_PLLP_DIV_4 = 0x1,
DECL|STM32F4X_RCC_CFG_PLLP_DIV_6|enumerator|STM32F4X_RCC_CFG_PLLP_DIV_6 = 0x2,
DECL|STM32F4X_RCC_CFG_PLLP_DIV_8|enumerator|STM32F4X_RCC_CFG_PLLP_DIV_8 = 0x3,
DECL|STM32F4X_RCC_CFG_PLL_SRC_HSE|enumerator|STM32F4X_RCC_CFG_PLL_SRC_HSE = 0x1,
DECL|STM32F4X_RCC_CFG_PLL_SRC_HSI|enumerator|STM32F4X_RCC_CFG_PLL_SRC_HSI = 0x0,
DECL|STM32F4X_RCC_CFG_SYSCLK_DIV_0|enumerator|STM32F4X_RCC_CFG_SYSCLK_DIV_0 = 0x0,
DECL|STM32F4X_RCC_CFG_SYSCLK_DIV_128|enumerator|STM32F4X_RCC_CFG_SYSCLK_DIV_128 = 0xd,
DECL|STM32F4X_RCC_CFG_SYSCLK_DIV_16|enumerator|STM32F4X_RCC_CFG_SYSCLK_DIV_16 = 0xb,
DECL|STM32F4X_RCC_CFG_SYSCLK_DIV_256|enumerator|STM32F4X_RCC_CFG_SYSCLK_DIV_256 = 0xe,
DECL|STM32F4X_RCC_CFG_SYSCLK_DIV_2|enumerator|STM32F4X_RCC_CFG_SYSCLK_DIV_2 = 0x8,
DECL|STM32F4X_RCC_CFG_SYSCLK_DIV_4|enumerator|STM32F4X_RCC_CFG_SYSCLK_DIV_4 = 0x9,
DECL|STM32F4X_RCC_CFG_SYSCLK_DIV_512|enumerator|STM32F4X_RCC_CFG_SYSCLK_DIV_512 = 0xf,
DECL|STM32F4X_RCC_CFG_SYSCLK_DIV_64|enumerator|STM32F4X_RCC_CFG_SYSCLK_DIV_64 = 0xc,
DECL|STM32F4X_RCC_CFG_SYSCLK_DIV_8|enumerator|STM32F4X_RCC_CFG_SYSCLK_DIV_8 = 0xa,
DECL|STM32F4X_RCC_CFG_SYSCLK_SRC_HSE|enumerator|STM32F4X_RCC_CFG_SYSCLK_SRC_HSE = 0x1,
DECL|STM32F4X_RCC_CFG_SYSCLK_SRC_HSI|enumerator|STM32F4X_RCC_CFG_SYSCLK_SRC_HSI = 0x0,
DECL|STM32F4X_RCC_CFG_SYSCLK_SRC_PLL|enumerator|STM32F4X_RCC_CFG_SYSCLK_SRC_PLL = 0x2,
DECL|_STM32F4X_CLOCK_H_|macro|_STM32F4X_CLOCK_H_
DECL|__rcc_cfgr|union|union __rcc_cfgr {
DECL|__rcc_cr|union|union __rcc_cr {
DECL|__rcc_pllcfgr|union|union __rcc_pllcfgr {
DECL|ahb1enr|member|u32_t ahb1enr;
DECL|ahb1lpenr|member|u32_t ahb1lpenr;
DECL|ahb1rstr|member|u32_t ahb1rstr;
DECL|ahb2enr|member|u32_t ahb2enr;
DECL|ahb2lpenr|member|u32_t ahb2lpenr;
DECL|ahb2rstr|member|u32_t ahb2rstr;
DECL|ahb3enr|member|u32_t ahb3enr;
DECL|ahb3lpenr|member|u32_t ahb3lpenr;
DECL|ahb3rstr|member|u32_t ahb3rstr;
DECL|apb1enr|member|u32_t apb1enr;
DECL|apb1lpenr|member|u32_t apb1lpenr;
DECL|apb1rstr|member|u32_t apb1rstr;
DECL|apb2enr|member|u32_t apb2enr;
DECL|apb2lpenr|member|u32_t apb2lpenr;
DECL|apb2rstr|member|u32_t apb2rstr;
DECL|bdcr|member|u32_t bdcr;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|cfgr|member|union __rcc_cfgr cfgr;
DECL|cir|member|u32_t cir;
DECL|cr|member|union __rcc_cr cr;
DECL|csr|member|u32_t csr;
DECL|csson|member|u32_t csson :1 __packed;
DECL|dckcfgr|member|u32_t dckcfgr;
DECL|hpre|member|u32_t hpre :4 __packed;
DECL|hsebyp|member|u32_t hsebyp :1 __packed;
DECL|hseon|member|u32_t hseon :1 __packed;
DECL|hserdy|member|u32_t hserdy :1 __packed;
DECL|hsical|member|u32_t hsical :8 __packed;
DECL|hsion|member|u32_t hsion :1 __packed;
DECL|hsirdy|member|u32_t hsirdy :1 __packed;
DECL|hsitrim|member|u32_t hsitrim :5 __packed;
DECL|i2sscr|member|u32_t i2sscr :1 __packed;
DECL|mco1pre|member|u32_t mco1pre :3 __packed;
DECL|mco1|member|u32_t mco1 :2 __packed;
DECL|mco2pre|member|u32_t mco2pre :3 __packed;
DECL|mco2|member|u32_t mco2 :2 __packed;
DECL|pllcfgr|member|union __rcc_pllcfgr pllcfgr;
DECL|plli2scfgr|member|u32_t plli2scfgr;
DECL|plli2son|member|u32_t plli2son :1 __packed;
DECL|plli2srdy|member|u32_t plli2srdy :1 __packed;
DECL|pllm|member|u32_t pllm :6 __packed;
DECL|plln|member|u32_t plln :9 __packed;
DECL|pllon|member|u32_t pllon :1 __packed;
DECL|pllp|member|u32_t pllp :2 __packed;
DECL|pllq|member|u32_t pllq :4 __packed;
DECL|pllrdy|member|u32_t pllrdy :1 __packed;
DECL|pllsaion|member|u32_t pllsaion :1 __packed;
DECL|pllsairdy|member|u32_t pllsairdy :1 __packed;
DECL|pllsrc|member|u32_t pllsrc :1 __packed;
DECL|ppre1|member|u32_t ppre1 :3 __packed;
DECL|ppre2|member|u32_t ppre2 :3 __packed;
DECL|rsvd0|member|u32_t rsvd0;
DECL|rsvd1|member|u32_t rsvd1[2];
DECL|rsvd2|member|u32_t rsvd2;
DECL|rsvd3|member|u32_t rsvd3[2];
DECL|rsvd4|member|u32_t rsvd4;
DECL|rsvd5|member|u32_t rsvd5[2];
DECL|rsvd6|member|u32_t rsvd6[2];
DECL|rsvd7|member|u32_t rsvd7;
DECL|rsvd__15|member|u32_t rsvd__15 :1 __packed;
DECL|rsvd__18_21|member|u32_t rsvd__18_21 :4 __packed;
DECL|rsvd__20_23|member|u32_t rsvd__20_23 :4 __packed;
DECL|rsvd__23|member|u32_t rsvd__23 :1 __packed;
DECL|rsvd__28_31|member|u32_t rsvd__28_31 :4 __packed;
DECL|rsvd__2|member|u32_t rsvd__2 :1 __packed;
DECL|rsvd__30_31|member|u32_t rsvd__30_31 :2 __packed;
DECL|rsvd__8_9|member|u32_t rsvd__8_9 :2 __packed;
DECL|rtcpre|member|u32_t rtcpre :5 __packed;
DECL|sscgr|member|u32_t sscgr;
DECL|stm32f4x_rcc|struct|struct stm32f4x_rcc {
DECL|sws|member|u32_t sws :2 __packed;
DECL|sw|member|u32_t sw :2 __packed;
DECL|val|member|u32_t val;
DECL|val|member|u32_t val;
DECL|val|member|u32_t val;
