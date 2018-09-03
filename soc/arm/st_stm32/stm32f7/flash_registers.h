DECL|_STM32F7X_FLASH_REGISTERS_H_|macro|_STM32F7X_FLASH_REGISTERS_H_
DECL|__flash_acr|union|union __flash_acr {
DECL|acr|member|volatile union __flash_acr acr;
DECL|arten|member|u32_t arten :1 __packed;
DECL|artrst|member|u32_t artrst :1 __packed;
DECL|bit|member|} bit;
DECL|cr|member|volatile u32_t cr;
DECL|keyr|member|volatile u32_t keyr;
DECL|latency|member|u32_t latency :4 __packed;
DECL|optcr1|member|volatile u32_t optcr1;
DECL|optcr|member|volatile u32_t optcr;
DECL|optkeyr|member|volatile u32_t optkeyr;
DECL|prften|member|u32_t prften :1 __packed;
DECL|rsvd__10|member|u32_t rsvd__10 :1 __packed;
DECL|rsvd__12_31|member|u32_t rsvd__12_31 :20 __packed;
DECL|rsvd__4_7|member|u32_t rsvd__4_7 :4 __packed;
DECL|sr|member|volatile u32_t sr;
DECL|stm32f7x_flash|struct|struct stm32f7x_flash {
DECL|val|member|u32_t val;
