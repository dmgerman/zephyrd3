DECL|STM32L4X_RCC_CFG_HCLK_DIV_0|enumerator|STM32L4X_RCC_CFG_HCLK_DIV_0 = 0x0,
DECL|STM32L4X_RCC_CFG_HCLK_DIV_16|enumerator|STM32L4X_RCC_CFG_HCLK_DIV_16 = 0x7,
DECL|STM32L4X_RCC_CFG_HCLK_DIV_2|enumerator|STM32L4X_RCC_CFG_HCLK_DIV_2 = 0x4,
DECL|STM32L4X_RCC_CFG_HCLK_DIV_4|enumerator|STM32L4X_RCC_CFG_HCLK_DIV_4 = 0x5,
DECL|STM32L4X_RCC_CFG_HCLK_DIV_8|enumerator|STM32L4X_RCC_CFG_HCLK_DIV_8 = 0x6,
DECL|STM32L4X_RCC_CFG_MCO_DIV_0|enumerator|STM32L4X_RCC_CFG_MCO_DIV_0 = 0x0,
DECL|STM32L4X_RCC_CFG_MCO_DIV_16|enumerator|STM32L4X_RCC_CFG_MCO_DIV_16 = 0x4,
DECL|STM32L4X_RCC_CFG_MCO_DIV_2|enumerator|STM32L4X_RCC_CFG_MCO_DIV_2 = 0x1,
DECL|STM32L4X_RCC_CFG_MCO_DIV_4|enumerator|STM32L4X_RCC_CFG_MCO_DIV_4 = 0x2,
DECL|STM32L4X_RCC_CFG_MCO_DIV_8|enumerator|STM32L4X_RCC_CFG_MCO_DIV_8 = 0x3,
DECL|STM32L4X_RCC_CFG_PLL_Q_R_0|enumerator|STM32L4X_RCC_CFG_PLL_Q_R_0 = 0x1,
DECL|STM32L4X_RCC_CFG_PLL_Q_R_2|enumerator|STM32L4X_RCC_CFG_PLL_Q_R_2 = 0x2,
DECL|STM32L4X_RCC_CFG_PLL_SRC_HSE|enumerator|STM32L4X_RCC_CFG_PLL_SRC_HSE = 0x3,
DECL|STM32L4X_RCC_CFG_PLL_SRC_HSI|enumerator|STM32L4X_RCC_CFG_PLL_SRC_HSI = 0x2,
DECL|STM32L4X_RCC_CFG_PLL_SRC_MSI|enumerator|STM32L4X_RCC_CFG_PLL_SRC_MSI = 0x1,
DECL|STM32L4X_RCC_CFG_SYSCLK_DIV_0|enumerator|STM32L4X_RCC_CFG_SYSCLK_DIV_0 = 0x0,
DECL|STM32L4X_RCC_CFG_SYSCLK_DIV_128|enumerator|STM32L4X_RCC_CFG_SYSCLK_DIV_128 = 0xd,
DECL|STM32L4X_RCC_CFG_SYSCLK_DIV_16|enumerator|STM32L4X_RCC_CFG_SYSCLK_DIV_16 = 0xb,
DECL|STM32L4X_RCC_CFG_SYSCLK_DIV_256|enumerator|STM32L4X_RCC_CFG_SYSCLK_DIV_256 = 0xe,
DECL|STM32L4X_RCC_CFG_SYSCLK_DIV_2|enumerator|STM32L4X_RCC_CFG_SYSCLK_DIV_2 = 0x8,
DECL|STM32L4X_RCC_CFG_SYSCLK_DIV_4|enumerator|STM32L4X_RCC_CFG_SYSCLK_DIV_4 = 0x9,
DECL|STM32L4X_RCC_CFG_SYSCLK_DIV_512|enumerator|STM32L4X_RCC_CFG_SYSCLK_DIV_512 = 0xf,
DECL|STM32L4X_RCC_CFG_SYSCLK_DIV_64|enumerator|STM32L4X_RCC_CFG_SYSCLK_DIV_64 = 0xc,
DECL|STM32L4X_RCC_CFG_SYSCLK_DIV_8|enumerator|STM32L4X_RCC_CFG_SYSCLK_DIV_8 = 0xa,
DECL|STM32L4X_RCC_CFG_SYSCLK_SRC_HSE|enumerator|STM32L4X_RCC_CFG_SYSCLK_SRC_HSE = 0x2,
DECL|STM32L4X_RCC_CFG_SYSCLK_SRC_HSI|enumerator|STM32L4X_RCC_CFG_SYSCLK_SRC_HSI = 0x1,
DECL|STM32L4X_RCC_CFG_SYSCLK_SRC_MSI|enumerator|STM32L4X_RCC_CFG_SYSCLK_SRC_MSI = 0x0,
DECL|STM32L4X_RCC_CFG_SYSCLK_SRC_PLL|enumerator|STM32L4X_RCC_CFG_SYSCLK_SRC_PLL = 0x3,
DECL|_STM32L4X_CLOCK_H_|macro|_STM32L4X_CLOCK_H_
DECL|__rcc_cfgr|union|union __rcc_cfgr {
DECL|__rcc_cr|union|union __rcc_cr {
DECL|__rcc_pllcfgr|union|union __rcc_pllcfgr {
DECL|ahb1enr|member|uint32_t ahb1enr;
DECL|ahb1rstr|member|uint32_t ahb1rstr;
DECL|ahb1smenr|member|uint32_t ahb1smenr;
DECL|ahb2enr|member|uint32_t ahb2enr;
DECL|ahb2rstr|member|uint32_t ahb2rstr;
DECL|ahb2smenr|member|uint32_t ahb2smenr;
DECL|ahb3enr|member|uint32_t ahb3enr;
DECL|ahb3rstr|member|uint32_t ahb3rstr;
DECL|ahb3smenr|member|uint32_t ahb3smenr;
DECL|apb1enr1|member|uint32_t apb1enr1;
DECL|apb1enr2|member|uint32_t apb1enr2;
DECL|apb1rstr1|member|uint32_t apb1rstr1;
DECL|apb1rstr2|member|uint32_t apb1rstr2;
DECL|apb1smenr1|member|uint32_t apb1smenr1;
DECL|apb1smenr2|member|uint32_t apb1smenr2;
DECL|apb2enr|member|uint32_t apb2enr;
DECL|apb2rstr|member|uint32_t apb2rstr;
DECL|apb2smenr|member|uint32_t apb2smenr;
DECL|bdcr|member|uint32_t bdcr;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|ccipr|member|uint32_t ccipr;
DECL|cfgr|member|union __rcc_cfgr cfgr;
DECL|cicr|member|uint32_t cicr;
DECL|cier|member|uint32_t cier;
DECL|cifr|member|uint32_t cifr;
DECL|cr|member|union __rcc_cr cr;
DECL|csr|member|uint32_t csr;
DECL|csson|member|uint32_t csson :1 __packed;
DECL|hpre|member|uint32_t hpre :4 __packed;
DECL|hsebyp|member|uint32_t hsebyp :1 __packed;
DECL|hseon|member|uint32_t hseon :1 __packed;
DECL|hserdy|member|uint32_t hserdy :1 __packed;
DECL|hsiasfs|member|uint32_t hsiasfs :1 __packed;
DECL|hsikeron|member|uint32_t hsikeron :1 __packed;
DECL|hsion|member|uint32_t hsion :1 __packed;
DECL|hsirdy|member|uint32_t hsirdy :1 __packed;
DECL|icscr|member|uint32_t icscr;
DECL|mcopre|member|uint32_t mcopre :3 __packed;
DECL|mcosel|member|uint32_t mcosel :3 __packed; /* 2 bits long on L4x{1,5,6} */
DECL|msion|member|uint32_t msion :1 __packed;
DECL|msipllen|member|uint32_t msipllen :1 __packed;
DECL|msirange|member|uint32_t msirange :4 __packed;
DECL|msirdy|member|uint32_t msirdy :1 __packed;
DECL|msirgsel|member|uint32_t msirgsel :1 __packed;
DECL|pllcfgr|member|union __rcc_pllcfgr pllcfgr;
DECL|pllm|member|uint32_t pllm :3 __packed;
DECL|plln|member|uint32_t plln :7 __packed;
DECL|pllon|member|uint32_t pllon :1 __packed;
DECL|pllpdiv|member|uint32_t pllpdiv :5 __packed; /* Not present on L4x{1,5,6} */
DECL|pllpen|member|uint32_t pllpen :1 __packed;
DECL|pllp|member|uint32_t pllp :1 __packed;
DECL|pllqen|member|uint32_t pllqen :1 __packed;
DECL|pllq|member|uint32_t pllq :2 __packed;
DECL|pllrdy|member|uint32_t pllrdy :1 __packed;
DECL|pllren|member|uint32_t pllren :1 __packed;
DECL|pllr|member|uint32_t pllr :2 __packed;
DECL|pllsai1cfgr|member|uint32_t pllsai1cfgr;
DECL|pllsai1on|member|uint32_t pllsai1on :1 __packed;
DECL|pllsai1rdy|member|uint32_t pllsai1rdy :1 __packed;
DECL|pllsai2cfgr|member|uint32_t pllsai2cfgr;
DECL|pllsai2on|member|uint32_t pllsai2on :1 __packed;
DECL|pllsai2rdy|member|uint32_t pllsai2rdy :1 __packed;
DECL|pllsrc|member|uint32_t pllsrc :2 __packed;
DECL|ppre1|member|uint32_t ppre1 :3 __packed;
DECL|ppre2|member|uint32_t ppre2 :3 __packed;
DECL|rsvd_0|member|uint32_t rsvd_0;
DECL|rsvd_1|member|uint32_t rsvd_1;
DECL|rsvd_2|member|uint32_t rsvd_2;
DECL|rsvd_3|member|uint32_t rsvd_3;
DECL|rsvd_4|member|uint32_t rsvd_4;
DECL|rsvd_5|member|uint32_t rsvd_5;
DECL|rsvd_6|member|uint32_t rsvd_6;
DECL|rsvd_7|member|uint32_t rsvd_7;
DECL|rsvd__12_15|member|uint32_t rsvd__12_15 :4 __packed;
DECL|rsvd__15|member|uint32_t rsvd__15 :1 __packed;
DECL|rsvd__16_23|member|uint32_t rsvd__16_23 :8 __packed;
DECL|rsvd__18_19|member|uint32_t rsvd__18_19 :2 __packed;
DECL|rsvd__20_23|member|uint32_t rsvd__20_23 :4 __packed;
DECL|rsvd__23|member|uint32_t rsvd__23 :1 __packed;
DECL|rsvd__2_3|member|uint32_t rsvd__2_3 :2 __packed;
DECL|rsvd__30_31|member|uint32_t rsvd__30_31 :2 __packed;
DECL|rsvd__31|member|uint32_t rsvd__31 :1 __packed;
DECL|rsvd__7|member|uint32_t rsvd__7 :1 __packed;
DECL|stm32l4x_rcc|struct|struct stm32l4x_rcc {
DECL|stopwuck|member|uint32_t stopwuck :1 __packed;
DECL|sws|member|uint32_t sws :2 __packed;
DECL|sw|member|uint32_t sw :2 __packed;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
