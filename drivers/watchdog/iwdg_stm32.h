DECL|STM32_IWDG_KR_RELOAD|macro|STM32_IWDG_KR_RELOAD
DECL|STM32_IWDG_KR_START|macro|STM32_IWDG_KR_START
DECL|STM32_IWDG_KR_UNLOCK|macro|STM32_IWDG_KR_UNLOCK
DECL|_STM32_IWDG_H_|macro|_STM32_IWDG_H_
DECL|__iwdg_kr|union|union __iwdg_kr {
DECL|__iwdg_pr|union|union __iwdg_pr {
DECL|__iwdg_rlr|union|union __iwdg_rlr {
DECL|__iwdg_sr|union|union __iwdg_sr {
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|iwdg_stm32|struct|struct iwdg_stm32 {
DECL|key|member|u16_t key;
DECL|kr|member|union __iwdg_kr kr;
DECL|pr|member|u32_t pr :3 __packed;
DECL|pr|member|union __iwdg_pr pr;
DECL|pvu|member|u32_t pvu :1 __packed;
DECL|rlr|member|union __iwdg_rlr rlr;
DECL|rl|member|u32_t rl :12 __packed;
DECL|rsvd__12_31|member|u32_t rsvd__12_31 :20 __packed;
DECL|rsvd__2_31|member|u32_t rsvd__2_31 :30 __packed;
DECL|rsvd__3_31|member|u32_t rsvd__3_31 :29 __packed;
DECL|rsvd|member|u16_t rsvd;
DECL|rvu|member|u32_t rvu :1 __packed;
DECL|sr|member|union __iwdg_sr sr;
DECL|val|member|u32_t val;
DECL|val|member|u32_t val;
DECL|val|member|u32_t val;
DECL|val|member|u32_t val;
