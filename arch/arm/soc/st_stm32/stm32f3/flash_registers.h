DECL|STM32_FLASH_CMD_LATENCY_FOR_CLOCK_SET|enumerator|STM32_FLASH_CMD_LATENCY_FOR_CLOCK_SET,
DECL|STM32_FLASH_LATENCY_0|enumerator|STM32_FLASH_LATENCY_0 = 0x0,
DECL|STM32_FLASH_LATENCY_1|enumerator|STM32_FLASH_LATENCY_1 = 0x1,
DECL|STM32_FLASH_LATENCY_2|enumerator|STM32_FLASH_LATENCY_2 = 0x2,
DECL|_STM32F3X_FLASH_REGISTERS_H_|macro|_STM32F3X_FLASH_REGISTERS_H_
DECL|acr|member|union ef_acr acr;
DECL|ar|member|uint32_t ar;
DECL|bit|member|} bit;
DECL|cr|member|uint32_t cr;
DECL|ef_acr|union|union ef_acr {
DECL|hlfcya|member|uint32_t hlfcya :1 __packed;
DECL|keyr|member|uint32_t keyr;
DECL|latency|member|uint32_t latency :3 __packed;
DECL|obr|member|uint32_t obr;
DECL|optkeyr|member|uint32_t optkeyr;
DECL|prftbe|member|uint32_t prftbe :1 __packed;
DECL|prftbs|member|uint32_t prftbs :1 __packed;
DECL|rsvd__6_31|member|uint32_t rsvd__6_31 :26 __packed;
DECL|rsvd|member|uint32_t rsvd;
DECL|sr|member|uint32_t sr;
DECL|stm32_embedded_flash_cmd|enum|enum stm32_embedded_flash_cmd {
DECL|stm32_flash|struct|struct stm32_flash {
DECL|val|member|uint32_t val;
DECL|wrpr|member|uint32_t wrpr;
