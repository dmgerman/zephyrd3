DECL|RB_FOR_EACH_CONTAINER|macro|RB_FOR_EACH_CONTAINER
DECL|RB_FOR_EACH|macro|RB_FOR_EACH
DECL|_RB_FOREACH_INIT|macro|_RB_FOREACH_INIT
DECL|_RB_H|macro|_RB_H
DECL|_rb_foreach|struct|struct _rb_foreach {
DECL|alloca|macro|alloca
DECL|children|member|struct rbnode *children[2];
DECL|is_left|member|char *is_left;
DECL|lessthan_fn|member|rb_lessthan_t lessthan_fn;
DECL|max_depth|member|int max_depth;
DECL|rb_get_max|function|static inline struct rbnode *rb_get_max(struct rbtree *tree)
DECL|rb_get_min|function|static inline struct rbnode *rb_get_min(struct rbtree *tree)
DECL|rb_lessthan_t|typedef|typedef int (*rb_lessthan_t)(struct rbnode *a, struct rbnode *b);
DECL|rb_visit_t|typedef|typedef void (*rb_visit_t)(struct rbnode *node, void *cookie);
DECL|rb_walk|function|static inline void rb_walk(struct rbtree *tree, rb_visit_t visit_fn, void *cookie)
DECL|rbnode|struct|struct rbnode {
DECL|rbtree|struct|struct rbtree {
DECL|root|member|struct rbnode *root;
DECL|stack|member|struct rbnode **stack;
DECL|top|member|int top;
