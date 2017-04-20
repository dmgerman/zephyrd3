DECL|STM32F10X_FLASH_LATENCY_0|enumerator|STM32F10X_FLASH_LATENCY_0 = 0x0,
DECL|STM32F10X_FLASH_LATENCY_1|enumerator|STM32F10X_FLASH_LATENCY_1 = 0x1,
DECL|STM32F10X_FLASH_LATENCY_2|enumerator|STM32F10X_FLASH_LATENCY_2 = 0x2,
DECL|_STM32F10X_FLASH_REGISTERS_H_|macro|_STM32F10X_FLASH_REGISTERS_H_
DECL|__ef_acr|union|union __ef_acr {
DECL|acr|member|union __ef_acr acr;
DECL|ar|member|u32_t ar;
DECL|bit|member|} bit;
DECL|cr|member|u32_t cr;
DECL|hlfcya|member|u32_t hlfcya :1 __packed;
DECL|keyr|member|u32_t keyr;
DECL|latency|member|u32_t latency :3 __packed;
DECL|obr|member|u32_t obr;
DECL|optkeyr|member|u32_t optkeyr;
DECL|prftbe|member|u32_t prftbe :1 __packed;
DECL|prftbs|member|u32_t prftbs :1 __packed;
DECL|rsvd__6_31|member|u32_t rsvd__6_31 :26 __packed;
DECL|rsvd|member|u32_t rsvd;
DECL|sr|member|u32_t sr;
DECL|stm32f10x_flash|struct|struct stm32f10x_flash {
DECL|val|member|u32_t val;
DECL|wrpr|member|u32_t wrpr;
