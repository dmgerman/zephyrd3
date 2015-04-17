DECL|RTIMER_CLOCK_LT|macro|RTIMER_CLOCK_LT
DECL|RTIMER_ERR_ALREADY_SCHEDULED|enumerator|RTIMER_ERR_ALREADY_SCHEDULED,
DECL|RTIMER_ERR_FULL|enumerator|RTIMER_ERR_FULL,
DECL|RTIMER_ERR_TIME|enumerator|RTIMER_ERR_TIME,
DECL|RTIMER_H_|macro|RTIMER_H_
DECL|RTIMER_NOW|macro|RTIMER_NOW
DECL|RTIMER_OK|enumerator|RTIMER_OK,
DECL|RTIMER_SECOND|macro|RTIMER_SECOND
DECL|RTIMER_TIME|macro|RTIMER_TIME
DECL|func|member|rtimer_callback_t func;
DECL|ptr|member|void *ptr;
DECL|rtimer_callback_t|typedef|typedef void (* rtimer_callback_t)(struct rtimer *t, void *ptr);
DECL|rtimer_clock_t|typedef|typedef unsigned short rtimer_clock_t;
DECL|rtimer|struct|struct rtimer {
DECL|time|member|rtimer_clock_t time;
