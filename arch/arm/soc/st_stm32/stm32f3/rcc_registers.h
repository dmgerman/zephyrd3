DECL|_STM32F3X_CLOCK_H_|macro|_STM32F3X_CLOCK_H_
DECL|__rcc_cfgr2|union|union __rcc_cfgr2 {
DECL|__rcc_cfgr|union|union __rcc_cfgr {
DECL|__rcc_cr|union|union __rcc_cr {
DECL|adc12pres|member|uint32_t adc12pres : 5 __packed;
DECL|ahbenr|member|uint32_t ahbenr;
DECL|ahbrstr|member|uint32_t ahbrstr;
DECL|apb1enr|member|uint32_t apb1enr;
DECL|apb1rstr|member|uint32_t apb1rstr;
DECL|apb2enr|member|uint32_t apb2enr;
DECL|apb2rstr|member|uint32_t apb2rstr;
DECL|bdcr|member|uint32_t bdcr;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|cfgr2|member|union __rcc_cfgr2 cfgr2;
DECL|cfgr3|member|uint32_t cfgr3;
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
DECL|mcopre|member|uint32_t mcopre :3 __packed;
DECL|mco|member|uint32_t mco :3 __packed;
DECL|pllmul|member|uint32_t pllmul :4 __packed;
DECL|pllnodiv|member|uint32_t pllnodiv :1 __packed;
DECL|pllon|member|uint32_t pllon :1 __packed;
DECL|pllrdy|member|uint32_t pllrdy :1 __packed;
DECL|pllsrc|member|uint32_t pllsrc :1 __packed;
DECL|pllxtpre|member|uint32_t pllxtpre :1 __packed;
DECL|ppre1|member|uint32_t ppre1 :3 __packed;
DECL|ppre2|member|uint32_t ppre2 :3 __packed;
DECL|prediv|member|uint32_t prediv :4 __packed;
DECL|rsvd__14_15|member|uint32_t rsvd__14_15 :2 __packed;
DECL|rsvd__20_23|member|uint32_t rsvd__20_23 :4 __packed;
DECL|rsvd__22_23|member|uint32_t rsvd__22_23 :2 __packed;
DECL|rsvd__26_31|member|uint32_t rsvd__26_31 :6 __packed;
DECL|rsvd__27|member|uint32_t rsvd__27 :1 __packed;
DECL|rsvd__2|member|uint32_t rsvd__2 :1 __packed;
DECL|rsvd__9_31|member|uint32_t rsvd__9_31 :23 __packed;
DECL|stm32f3x_rcc|struct|struct stm32f3x_rcc {
DECL|sws|member|uint32_t sws :2 __packed;
DECL|sw|member|uint32_t sw :2 __packed;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
