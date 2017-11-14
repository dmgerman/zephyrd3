DECL|__ALT_PRIV_ALARM_H__|macro|__ALT_PRIV_ALARM_H__
DECL|alt_alarm_s|struct|struct alt_alarm_s
DECL|callback|member|alt_u32 (*callback) (void* context); /* callback function. The return
DECL|context|member|void* context; /* Argument for the callback */
DECL|llist|member|alt_llist llist; /* linked list */
DECL|rollover|member|alt_u8 rollover; /* set when desired alarm time + current time causes
DECL|time|member|alt_u32 time; /* time in system ticks of the callback */
