DECL|CTIMER_H_|macro|CTIMER_H_
DECL|buf|member|struct net_buf *buf;
DECL|ctimer_process|variable|ctimer_process
DECL|ctimer|struct|struct ctimer {
DECL|etimer|member|struct etimer etimer;
DECL|f|member|void (*f)(struct net_buf *, void *);
DECL|next|member|struct ctimer *next;
DECL|ptr|member|void *ptr;
DECL|p|member|struct process *p;
