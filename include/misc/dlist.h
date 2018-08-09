DECL|SYS_DLIST_CONTAINER|macro|SYS_DLIST_CONTAINER
DECL|SYS_DLIST_FOR_EACH_CONTAINER_SAFE|macro|SYS_DLIST_FOR_EACH_CONTAINER_SAFE
DECL|SYS_DLIST_FOR_EACH_CONTAINER|macro|SYS_DLIST_FOR_EACH_CONTAINER
DECL|SYS_DLIST_FOR_EACH_NODE_SAFE|macro|SYS_DLIST_FOR_EACH_NODE_SAFE
DECL|SYS_DLIST_FOR_EACH_NODE|macro|SYS_DLIST_FOR_EACH_NODE
DECL|SYS_DLIST_ITERATE_FROM_NODE|macro|SYS_DLIST_ITERATE_FROM_NODE
DECL|SYS_DLIST_PEEK_HEAD_CONTAINER|macro|SYS_DLIST_PEEK_HEAD_CONTAINER
DECL|SYS_DLIST_PEEK_NEXT_CONTAINER|macro|SYS_DLIST_PEEK_NEXT_CONTAINER
DECL|SYS_DLIST_STATIC_INIT|macro|SYS_DLIST_STATIC_INIT
DECL|ZEPHYR_INCLUDE_MISC_DLIST_H_|macro|ZEPHYR_INCLUDE_MISC_DLIST_H_
DECL|_dnode|struct|struct _dnode {
DECL|head|member|struct _dnode *head; /* ptr to head of list (sys_dlist_t) */
DECL|next|member|struct _dnode *next; /* ptr to next node (sys_dnode_t) */
DECL|prev|member|struct _dnode *prev; /* ptr to previous node (sys_dnode_t) */
DECL|sys_dlist_append|function|static inline void sys_dlist_append(sys_dlist_t *list, sys_dnode_t *node)
DECL|sys_dlist_get|function|static inline sys_dnode_t *sys_dlist_get(sys_dlist_t *list)
DECL|sys_dlist_has_multiple_nodes|function|static inline int sys_dlist_has_multiple_nodes(sys_dlist_t *list)
DECL|sys_dlist_init|function|static inline void sys_dlist_init(sys_dlist_t *list)
DECL|sys_dlist_insert_after|function|static inline void sys_dlist_insert_after(sys_dlist_t *list,sys_dnode_t *insert_point, sys_dnode_t *node)
DECL|sys_dlist_insert_at|function|static inline void sys_dlist_insert_at(sys_dlist_t *list, sys_dnode_t *node,int (*cond)(sys_dnode_t *, void *), void *data)
DECL|sys_dlist_insert_before|function|static inline void sys_dlist_insert_before(sys_dlist_t *list,sys_dnode_t *insert_point, sys_dnode_t *node)
DECL|sys_dlist_is_empty|function|static inline int sys_dlist_is_empty(sys_dlist_t *list)
DECL|sys_dlist_is_head|function|static inline int sys_dlist_is_head(sys_dlist_t *list, sys_dnode_t *node)
DECL|sys_dlist_is_tail|function|static inline int sys_dlist_is_tail(sys_dlist_t *list, sys_dnode_t *node)
DECL|sys_dlist_peek_head_not_empty|function|static inline sys_dnode_t *sys_dlist_peek_head_not_empty(sys_dlist_t *list)
DECL|sys_dlist_peek_head|function|static inline sys_dnode_t *sys_dlist_peek_head(sys_dlist_t *list)
DECL|sys_dlist_peek_next_no_check|function|static inline sys_dnode_t *sys_dlist_peek_next_no_check(sys_dlist_t *list,sys_dnode_t *node)
DECL|sys_dlist_peek_next|function|static inline sys_dnode_t *sys_dlist_peek_next(sys_dlist_t *list, sys_dnode_t *node)
DECL|sys_dlist_peek_prev_no_check|function|static inline sys_dnode_t *sys_dlist_peek_prev_no_check(sys_dlist_t *list,sys_dnode_t *node)
DECL|sys_dlist_peek_prev|function|static inline sys_dnode_t *sys_dlist_peek_prev(sys_dlist_t *list, sys_dnode_t *node)
DECL|sys_dlist_peek_tail|function|static inline sys_dnode_t *sys_dlist_peek_tail(sys_dlist_t *list)
DECL|sys_dlist_prepend|function|static inline void sys_dlist_prepend(sys_dlist_t *list, sys_dnode_t *node)
DECL|sys_dlist_remove|function|static inline void sys_dlist_remove(sys_dnode_t *node)
DECL|sys_dlist_t|typedef|typedef struct _dnode sys_dlist_t;
DECL|sys_dnode_t|typedef|typedef struct _dnode sys_dnode_t;
DECL|tail|member|struct _dnode *tail; /* ptr to tail of list (sys_dlist_t) */
