DECL|_WORK_H_|macro|_WORK_H_
DECL|ack|member|uint8_t ack;
DECL|fp|member|work_fp fp;
DECL|group|member|uint8_t group;
DECL|next|member|void *next;
DECL|params|member|void *params;
DECL|req|member|uint8_t req;
DECL|work_fp|typedef|typedef void (*work_fp) (void *params);
DECL|work|struct|struct work {
