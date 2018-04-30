DECL|SYS_SFLIST_CONTAINER|macro|SYS_SFLIST_CONTAINER
DECL|SYS_SFLIST_FLAGS_MASK|macro|SYS_SFLIST_FLAGS_MASK
DECL|SYS_SFLIST_FOR_EACH_CONTAINER_SAFE|macro|SYS_SFLIST_FOR_EACH_CONTAINER_SAFE
DECL|SYS_SFLIST_FOR_EACH_CONTAINER|macro|SYS_SFLIST_FOR_EACH_CONTAINER
DECL|SYS_SFLIST_FOR_EACH_NODE_SAFE|macro|SYS_SFLIST_FOR_EACH_NODE_SAFE
DECL|SYS_SFLIST_FOR_EACH_NODE|macro|SYS_SFLIST_FOR_EACH_NODE
DECL|SYS_SFLIST_ITERATE_FROM_NODE|macro|SYS_SFLIST_ITERATE_FROM_NODE
DECL|SYS_SFLIST_PEEK_HEAD_CONTAINER|macro|SYS_SFLIST_PEEK_HEAD_CONTAINER
DECL|SYS_SFLIST_PEEK_NEXT_CONTAINER|macro|SYS_SFLIST_PEEK_NEXT_CONTAINER
DECL|SYS_SFLIST_PEEK_TAIL_CONTAINER|macro|SYS_SFLIST_PEEK_TAIL_CONTAINER
DECL|SYS_SFLIST_STATIC_INIT|macro|SYS_SFLIST_STATIC_INIT
DECL|__SFLIST_H__|macro|__SFLIST_H__
DECL|_sflist|struct|struct _sflist {
DECL|_sfnode|struct|struct _sfnode {
DECL|head|member|sys_sfnode_t *head;
DECL|next_and_flags|member|unative_t next_and_flags;
DECL|sflist|variable|sflist
DECL|sflist|variable|sflist
DECL|sys_sflist_init|function|static inline void sys_sflist_init(sys_sflist_t *list)
DECL|sys_sflist_peek_head|function|static inline sys_sfnode_t *sys_sflist_peek_head(sys_sflist_t *list)
DECL|sys_sflist_peek_tail|function|static inline sys_sfnode_t *sys_sflist_peek_tail(sys_sflist_t *list)
DECL|sys_sflist_t|typedef|typedef struct _sflist sys_sflist_t;
DECL|sys_sfnode_flags_get|function|static inline u8_t sys_sfnode_flags_get(sys_sfnode_t *node)
DECL|sys_sfnode_flags_set|function|static inline void sys_sfnode_flags_set(sys_sfnode_t *node, u8_t flags)
DECL|sys_sfnode_init|function|static inline void sys_sfnode_init(sys_sfnode_t *node, u8_t flags)
DECL|sys_sfnode_t|typedef|typedef struct _sfnode sys_sfnode_t;
DECL|tail|member|sys_sfnode_t *tail;
DECL|unative_t|typedef|typedef u32_t unative_t;
DECL|unative_t|typedef|typedef u64_t unative_t;
DECL|z_sflist_head_set|function|static inline void z_sflist_head_set(sys_sflist_t *list, sys_sfnode_t *node)
DECL|z_sflist_tail_set|function|static inline void z_sflist_tail_set(sys_sflist_t *list, sys_sfnode_t *node)
DECL|z_sfnode_next_peek|function|static inline sys_sfnode_t *z_sfnode_next_peek(sys_sfnode_t *node)
DECL|z_sfnode_next_set|function|static inline void z_sfnode_next_set(sys_sfnode_t *parent, sys_sfnode_t *child)
