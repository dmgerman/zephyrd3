DECL|CTIMER_H_|macro|CTIMER_H_
DECL|ctimer|struct|struct ctimer {
DECL|etimer|member|struct etimer etimer;
DECL|f|member|void (*f)(void *);
DECL|next|member|struct ctimer *next;
DECL|ptr|member|void *ptr;
DECL|p|member|struct process *p;
