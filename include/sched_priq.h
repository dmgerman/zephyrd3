DECL|ZEPHYR_INCLUDE_SCHED_PRIQ_H_|macro|ZEPHYR_INCLUDE_SCHED_PRIQ_H_
DECL|_priq_mq|struct|struct _priq_mq {
DECL|_priq_rb|struct|struct _priq_rb {
DECL|bitmask|member|unsigned int bitmask; /* bit 1<<i set if queues[i] is non-empty */
DECL|next_order_key|member|int next_order_key;
DECL|queues|member|sys_dlist_t queues[32];
DECL|tree|member|struct rbtree tree;
