DECL|SYS_SLIST_CONTAINER|macro|SYS_SLIST_CONTAINER
DECL|SYS_SLIST_FOR_EACH_CONTAINER_SAFE|macro|SYS_SLIST_FOR_EACH_CONTAINER_SAFE
DECL|SYS_SLIST_FOR_EACH_CONTAINER|macro|SYS_SLIST_FOR_EACH_CONTAINER
DECL|SYS_SLIST_FOR_EACH_NODE_SAFE|macro|SYS_SLIST_FOR_EACH_NODE_SAFE
DECL|SYS_SLIST_FOR_EACH_NODE|macro|SYS_SLIST_FOR_EACH_NODE
DECL|SYS_SLIST_ITERATE_FROM_NODE|macro|SYS_SLIST_ITERATE_FROM_NODE
DECL|SYS_SLIST_PEEK_HEAD_CONTAINER|macro|SYS_SLIST_PEEK_HEAD_CONTAINER
DECL|SYS_SLIST_PEEK_NEXT_CONTAINER|macro|SYS_SLIST_PEEK_NEXT_CONTAINER
DECL|SYS_SLIST_PEEK_TAIL_CONTAINER|macro|SYS_SLIST_PEEK_TAIL_CONTAINER
DECL|SYS_SLIST_STATIC_INIT|macro|SYS_SLIST_STATIC_INIT
DECL|__SLIST_H__|macro|__SLIST_H__
DECL|_slist|struct|struct _slist {
DECL|_snode|struct|struct _snode {
DECL|head|member|sys_snode_t *head;
DECL|next|member|struct _snode *next;
DECL|slist|variable|slist
DECL|slist|variable|slist
DECL|sys_slist_init|function|static inline void sys_slist_init(sys_slist_t *list)
DECL|sys_slist_peek_head|function|static inline sys_snode_t *sys_slist_peek_head(sys_slist_t *list)
DECL|sys_slist_peek_tail|function|static inline sys_snode_t *sys_slist_peek_tail(sys_slist_t *list)
DECL|sys_slist_t|typedef|typedef struct _slist sys_slist_t;
DECL|sys_snode_t|typedef|typedef struct _snode sys_snode_t;
DECL|tail|member|sys_snode_t *tail;
DECL|z_slist_head_set|function|static inline void z_slist_head_set(sys_slist_t *list, sys_snode_t *node)
DECL|z_slist_tail_set|function|static inline void z_slist_tail_set(sys_slist_t *list, sys_snode_t *node)
DECL|z_snode_next_peek|function|static inline sys_snode_t *z_snode_next_peek(sys_snode_t *node)
DECL|z_snode_next_set|function|static inline void z_snode_next_set(sys_snode_t *parent, sys_snode_t *child)
