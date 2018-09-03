DECL|_STM32F4X_FLASH_REGISTERS_H_|macro|_STM32F4X_FLASH_REGISTERS_H_
DECL|__flash_acr|union|union __flash_acr {
DECL|acr|member|volatile union __flash_acr acr;
DECL|bit|member|} bit;
DECL|cr|member|volatile u32_t cr;
DECL|dcen|member|u32_t dcen :1 __packed;
DECL|dcrst|member|u32_t dcrst :1 __packed;
DECL|icen|member|u32_t icen :1 __packed;
DECL|icrst|member|u32_t icrst :1 __packed;
DECL|keyr|member|volatile u32_t keyr;
DECL|latency|member|u32_t latency :4 __packed;
DECL|optcr|member|volatile u32_t optcr;
DECL|optkeyr|member|volatile u32_t optkeyr;
DECL|prften|member|u32_t prften :1 __packed;
DECL|rsvd__13_31|member|u32_t rsvd__13_31 :19 __packed;
DECL|rsvd__4_7|member|u32_t rsvd__4_7 :4 __packed;
DECL|sr|member|volatile u32_t sr;
DECL|stm32f4x_flash|struct|struct stm32f4x_flash {
DECL|val|member|u32_t val;
