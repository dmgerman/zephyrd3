DECL|STM32F4X_FLASH_LATENCY_0|enumerator|STM32F4X_FLASH_LATENCY_0 = 0x0,
DECL|STM32F4X_FLASH_LATENCY_1|enumerator|STM32F4X_FLASH_LATENCY_1 = 0x1,
DECL|STM32F4X_FLASH_LATENCY_2|enumerator|STM32F4X_FLASH_LATENCY_2 = 0x2,
DECL|STM32F4X_FLASH_LATENCY_3|enumerator|STM32F4X_FLASH_LATENCY_3 = 0x3,
DECL|STM32F4X_FLASH_LATENCY_4|enumerator|STM32F4X_FLASH_LATENCY_4 = 0x4,
DECL|STM32F4X_FLASH_LATENCY_5|enumerator|STM32F4X_FLASH_LATENCY_5 = 0x5,
DECL|_STM32F4X_FLASH_REGISTERS_H_|macro|_STM32F4X_FLASH_REGISTERS_H_
DECL|__flash_acr|union|union __flash_acr {
DECL|__setup_flash|function|static inline void __setup_flash(void)
DECL|acr|member|union __flash_acr acr;
DECL|bit|member|} bit;
DECL|ctrl|member|volatile uint32_t ctrl;
DECL|dcen|member|uint32_t dcen :1 __packed;
DECL|dcrst|member|uint32_t dcrst :1 __packed;
DECL|icen|member|uint32_t icen :1 __packed;
DECL|icrst|member|uint32_t icrst :1 __packed;
DECL|key|member|uint32_t key;
DECL|latency|member|uint32_t latency :4 __packed;
DECL|optctrl|member|uint32_t optctrl;
DECL|optkey|member|uint32_t optkey;
DECL|prften|member|uint32_t prften :1 __packed;
DECL|rsvd__13_31|member|uint32_t rsvd__13_31 :19 __packed;
DECL|rsvd__4_7|member|uint32_t rsvd__4_7 :4 __packed;
DECL|status|member|volatile uint32_t status;
DECL|stm32f4x_flash|struct|struct stm32f4x_flash {
DECL|val|member|uint32_t val;
