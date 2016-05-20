DECL|QM_PIC_TIMER_MODE_ONE_SHOT|enumerator|QM_PIC_TIMER_MODE_ONE_SHOT, /**< One shot mode. */
DECL|QM_PIC_TIMER_MODE_PERIODIC|enumerator|QM_PIC_TIMER_MODE_PERIODIC /**< Periodic mode. */
DECL|__QM_PIC_TIMER_H__|macro|__QM_PIC_TIMER_H__
DECL|callback_data|member|void *callback_data; /**< Callback user data. */
DECL|callback|member|void (*callback)(void *data);
DECL|int_en|member|bool int_en; /**< Interrupt enable. */
DECL|mode|member|qm_pic_timer_mode_t mode; /**< Operation mode. */
DECL|qm_pic_timer_config_t|typedef|} qm_pic_timer_config_t;
DECL|qm_pic_timer_mode_t|typedef|} qm_pic_timer_mode_t;
