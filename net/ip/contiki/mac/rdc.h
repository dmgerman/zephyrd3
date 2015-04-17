DECL|RDC_H_|macro|RDC_H_
DECL|RDC_WITH_DUPLICATE_DETECTION|macro|RDC_WITH_DUPLICATE_DETECTION
DECL|RDC_WITH_DUPLICATE_DETECTION|macro|RDC_WITH_DUPLICATE_DETECTION
DECL|buf|member|struct queuebuf *buf;
DECL|channel_check_interval|member|unsigned short (* channel_check_interval)(void);
DECL|init|member|void (* init)(void);
DECL|input|member|void (* input)(void);
DECL|name|member|char *name;
DECL|next|member|struct rdc_buf_list *next;
DECL|off|member|int (* off)(int keep_radio_on);
DECL|on|member|int (* on)(void);
DECL|ptr|member|void *ptr;
DECL|rdc_buf_list|struct|struct rdc_buf_list {
DECL|rdc_driver|struct|struct rdc_driver {
DECL|send_list|member|void (* send_list)(mac_callback_t sent_callback, void *ptr, struct rdc_buf_list *list);
DECL|send|member|void (* send)(mac_callback_t sent_callback, void *ptr);
