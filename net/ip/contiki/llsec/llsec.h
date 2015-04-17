DECL|LLSEC_H_|macro|LLSEC_H_
DECL|bootstrap|member|void (* bootstrap)(llsec_on_bootstrapped_t on_bootstrapped);
DECL|get_overhead|member|uint8_t (* get_overhead)(void);
DECL|input|member|void (* input)(void);
DECL|llsec_driver|struct|struct llsec_driver {
DECL|llsec_on_bootstrapped_t|typedef|typedef void (* llsec_on_bootstrapped_t)(void);
DECL|name|member|char *name;
DECL|on_frame_created|member|int (* on_frame_created)(void);
DECL|send|member|void (* send)(mac_callback_t sent_callback, void *ptr);
