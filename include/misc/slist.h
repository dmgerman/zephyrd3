DECL|SYS_SLIST_FOR_EACH_NODE_SAFE|macro|SYS_SLIST_FOR_EACH_NODE_SAFE
DECL|SYS_SLIST_FOR_EACH_NODE|macro|SYS_SLIST_FOR_EACH_NODE
DECL|SYS_SLIST_STATIC_INIT|macro|SYS_SLIST_STATIC_INIT
DECL|__SLIST_H__|macro|__SLIST_H__
DECL|_slist|struct|struct _slist {
DECL|_snode|struct|struct _snode {
DECL|head|member|sys_snode_t *head;
DECL|next|member|struct _snode *next;
DECL|sys_slist_append_list|function|static inline void sys_slist_append_list(sys_slist_t *list, void *head, void *tail)
DECL|sys_slist_append|function|static inline void sys_slist_append(sys_slist_t *list, sys_snode_t *node)
DECL|sys_slist_find_and_remove|function|static inline void sys_slist_find_and_remove(sys_slist_t *list, sys_snode_t *node)
DECL|sys_slist_get_not_empty|function|static inline sys_snode_t *sys_slist_get_not_empty(sys_slist_t *list)
DECL|sys_slist_get|function|static inline sys_snode_t *sys_slist_get(sys_slist_t *list)
DECL|sys_slist_init|function|static inline void sys_slist_init(sys_slist_t *list)
DECL|sys_slist_insert|function|static inline void sys_slist_insert(sys_slist_t *list, sys_snode_t *prev, sys_snode_t *node)
DECL|sys_slist_is_empty|function|static inline bool sys_slist_is_empty(sys_slist_t *list)
DECL|sys_slist_merge_slist|function|static inline void sys_slist_merge_slist(sys_slist_t *list, sys_slist_t *list_to_append)
DECL|sys_slist_peek_head|function|static inline sys_snode_t *sys_slist_peek_head(sys_slist_t *list)
DECL|sys_slist_peek_next|function|static inline sys_snode_t *sys_slist_peek_next(sys_snode_t *node)
DECL|sys_slist_peek_tail|function|static inline sys_snode_t *sys_slist_peek_tail(sys_slist_t *list)
DECL|sys_slist_prepend|function|static inline void sys_slist_prepend(sys_slist_t *list, sys_snode_t *node)
DECL|sys_slist_remove|function|static inline void sys_slist_remove(sys_slist_t *list, sys_snode_t *prev_node, sys_snode_t *node)
DECL|sys_slist_t|typedef|typedef struct _slist sys_slist_t;
DECL|sys_snode_t|typedef|typedef struct _snode sys_snode_t;
DECL|tail|member|sys_snode_t *tail;
