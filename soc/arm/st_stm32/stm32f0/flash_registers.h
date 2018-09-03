DECL|STM32_FLASH_LATENCY_0|enumerator|STM32_FLASH_LATENCY_0 = 0x0,
DECL|STM32_FLASH_LATENCY_1|enumerator|STM32_FLASH_LATENCY_1 = 0x1
DECL|_STM32F0X_FLASH_REGISTERS_H_|macro|_STM32F0X_FLASH_REGISTERS_H_
DECL|acr|member|volatile union ef_acr acr;
DECL|ar|member|volatile u32_t ar;
DECL|bit|member|} bit;
DECL|cr|member|volatile u32_t cr;
DECL|ef_acr|union|union ef_acr {
DECL|keyr|member|volatile u32_t keyr;
DECL|latency|member|u32_t latency :3 __packed;
DECL|obr|member|volatile u32_t obr;
DECL|optkeyr|member|volatile u32_t optkeyr;
DECL|prftbe|member|u32_t prftbe :1 __packed;
DECL|prftbs|member|u32_t prftbs :1 __packed;
DECL|rsvd__3|member|u32_t rsvd__3 :1 __packed;
DECL|rsvd__6_31|member|u32_t rsvd__6_31 :26 __packed;
DECL|rsvd|member|volatile u32_t rsvd;
DECL|sr|member|volatile u32_t sr;
DECL|stm32f0x_flash|struct|struct stm32f0x_flash {
DECL|val|member|u32_t val;
DECL|wrpr|member|volatile u32_t wrpr;
