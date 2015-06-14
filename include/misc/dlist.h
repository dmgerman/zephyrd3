DECL|_dnode|struct|struct _dnode {
DECL|_misc_dlist__h_|macro|_misc_dlist__h_
DECL|head|member|struct _dnode *head; /* ptr to head of list (sys_dlist_t) */
DECL|next|member|struct _dnode *next; /* ptr to next node (sys_dnode_t) */
DECL|prev|member|struct _dnode *prev; /* ptr to previous node (sys_dnode_t) */
DECL|sys_dlist_append|function|static inline void sys_dlist_append(sys_dlist_t *list, sys_dnode_t *node)
DECL|sys_dlist_get|function|static inline sys_dnode_t *sys_dlist_get(sys_dlist_t *list)
DECL|sys_dlist_init|function|static inline void sys_dlist_init(sys_dlist_t *list)
DECL|sys_dlist_insert_after|function|static inline void sys_dlist_insert_after(sys_dlist_t *list,sys_dnode_t *insert_point, sys_dnode_t *node)
DECL|sys_dlist_insert_at|function|static inline void sys_dlist_insert_at(sys_dlist_t *list, sys_dnode_t *node,int (*cond)(sys_dnode_t *, void *), void *data)
DECL|sys_dlist_insert_before|function|static inline void sys_dlist_insert_before(sys_dlist_t *list,sys_dnode_t *insert_point, sys_dnode_t *node)
DECL|sys_dlist_is_empty|function|static inline int sys_dlist_is_empty(sys_dlist_t *list)
DECL|sys_dlist_is_head|function|static inline int sys_dlist_is_head(sys_dlist_t *list, sys_dnode_t *node)
DECL|sys_dlist_is_tail|function|static inline int sys_dlist_is_tail(sys_dlist_t *list, sys_dnode_t *node)
DECL|sys_dlist_peek_head|function|static inline sys_dnode_t *sys_dlist_peek_head(sys_dlist_t *list)
DECL|sys_dlist_peek_next|function|static inline sys_dnode_t *sys_dlist_peek_next(sys_dlist_t *list,sys_dnode_t *node)
DECL|sys_dlist_prepend|function|static inline void sys_dlist_prepend(sys_dlist_t *list, sys_dnode_t *node)
DECL|sys_dlist_remove|function|static inline void sys_dlist_remove(sys_dnode_t *node)
DECL|sys_dlist_t|typedef|typedef struct _dnode sys_dlist_t;
DECL|sys_dnode_t|typedef|typedef struct _dnode sys_dnode_t;
DECL|tail|member|struct _dnode *tail; /* ptr to tail of list (sys_dlist_t) */
