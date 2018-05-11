DECL|BLACK|enumerator|enum rb_color { RED = 0, BLACK = 1 };
DECL|CHECK|macro|CHECK
DECL|RED|enumerator|enum rb_color { RED = 0, BLACK = 1 };
DECL|_rb_child|function|struct rbnode *_rb_child(struct rbnode *node, int side)
DECL|_rb_foreach_next|function|struct rbnode *_rb_foreach_next(struct rbtree *tree, struct _rb_foreach *f)
DECL|_rb_get_minmax|function|struct rbnode *_rb_get_minmax(struct rbtree *tree, int side)
DECL|_rb_is_black|function|int _rb_is_black(struct rbnode *node)
DECL|_rb_walk|function|void _rb_walk(struct rbnode *node, rb_visit_t visit_fn, void *cookie)
DECL|find_and_stack|function|static int find_and_stack(struct rbtree *tree, struct rbnode *node, struct rbnode **stack)
DECL|fix_extra_red|function|static void fix_extra_red(struct rbnode **stack, int stacksz)
DECL|fix_missing_black|function|static void fix_missing_black(struct rbnode **stack, int stacksz, struct rbnode *null_node)
DECL|get_child|function|static struct rbnode *get_child(struct rbnode *n, int side)
DECL|get_color|function|static enum rb_color get_color(struct rbnode *n)
DECL|get_side|function|static int get_side(struct rbnode *parent, struct rbnode *child)
DECL|is_black|function|static int is_black(struct rbnode *n)
DECL|is_red|function|static int is_red(struct rbnode *n)
DECL|rb_color|enum|enum rb_color { RED = 0, BLACK = 1 };
DECL|rb_contains|function|int rb_contains(struct rbtree *tree, struct rbnode *node)
DECL|rb_insert|function|void rb_insert(struct rbtree *tree, struct rbnode *node)
DECL|rb_remove|function|void rb_remove(struct rbtree *tree, struct rbnode *node)
DECL|rotate|function|static void rotate(struct rbnode **stack, int stacksz)
DECL|set_child|function|static void set_child(struct rbnode *n, int side, void *val)
DECL|set_color|function|static void set_color(struct rbnode *n, enum rb_color color)
DECL|stack_left_limb|function|static inline struct rbnode *stack_left_limb(struct rbnode *n, struct _rb_foreach *f)
