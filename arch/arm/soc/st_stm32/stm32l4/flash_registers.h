DECL|STM32L4X_FLASH_LATENCY_0|enumerator|STM32L4X_FLASH_LATENCY_0 = 0x0,
DECL|STM32L4X_FLASH_LATENCY_1|enumerator|STM32L4X_FLASH_LATENCY_1 = 0x1,
DECL|STM32L4X_FLASH_LATENCY_2|enumerator|STM32L4X_FLASH_LATENCY_2 = 0x2,
DECL|STM32L4X_FLASH_LATENCY_3|enumerator|STM32L4X_FLASH_LATENCY_3 = 0x3,
DECL|STM32L4X_FLASH_LATENCY_4|enumerator|STM32L4X_FLASH_LATENCY_4 = 0x4,
DECL|_STM32L4X_FLASH_REGISTERS_H_|macro|_STM32L4X_FLASH_REGISTERS_H_
DECL|__ef_acr|union|union __ef_acr {
DECL|acr|member|volatile union __ef_acr acr;
DECL|bit|member|} bit;
DECL|cr|member|volatile u32_t cr;
DECL|dcen|member|u32_t dcen :1 __packed;
DECL|dcrst|member|u32_t dcrst :1 __packed;
DECL|eccr|member|volatile u32_t eccr;
DECL|icen|member|u32_t icen :1 __packed;
DECL|icrst|member|u32_t icrst :1 __packed;
DECL|keyr|member|volatile u32_t keyr;
DECL|latency|member|u32_t latency :3 __packed;
DECL|optkeyr|member|volatile u32_t optkeyr;
DECL|optr|member|volatile u32_t optr;
DECL|pcrop1er|member|volatile u32_t pcrop1er;
DECL|pcrop1sr|member|volatile u32_t pcrop1sr;
DECL|pcrop2er|member|volatile u32_t pcrop2er;
DECL|pcrop2sr|member|volatile u32_t pcrop2sr;
DECL|pdkeyr|member|volatile u32_t pdkeyr;
DECL|prften|member|u32_t prften :1 __packed;
DECL|rsvd_0|member|volatile u32_t rsvd_0;
DECL|rsvd_2|member|volatile u32_t rsvd_2[4];
DECL|rsvd__16_31|member|u32_t rsvd__16_31 :17 __packed;
DECL|rsvd__3_7|member|u32_t rsvd__3_7 :5 __packed;
DECL|run_pd|member|u32_t run_pd :1 __packed;
DECL|sleep_pd|member|u32_t sleep_pd :1 __packed;
DECL|sr|member|volatile u32_t sr;
DECL|stm32l4x_flash|struct|struct stm32l4x_flash {
DECL|val|member|u32_t val;
DECL|wrp1ar|member|volatile u32_t wrp1ar;
DECL|wrp1br|member|volatile u32_t wrp1br;
DECL|wrp2ar|member|volatile u32_t wrp2ar;
DECL|wrp2br|member|volatile u32_t wrp2br;
