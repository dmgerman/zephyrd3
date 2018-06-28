DECL|_priq_mq|struct|struct _priq_mq {
DECL|_priq_rb|struct|struct _priq_rb {
DECL|_sched_priq__h_|macro|_sched_priq__h_
DECL|bitmask|member|unsigned int bitmask; /* bit 1<<i set if queues[i] is non-empty */
DECL|next_order_key|member|int next_order_key;
DECL|queues|member|sys_dlist_t queues[32];
DECL|tree|member|struct rbtree tree;
