DECL|DEBUG_EXPR|macro|DEBUG_EXPR
DECL|LKC_DIRECT_LINK|macro|LKC_DIRECT_LINK
DECL|__expr_eliminate_eq|function|static void __expr_eliminate_eq(enum expr_type type, struct expr **ep1, struct expr **ep2)
DECL|e1|macro|e1
DECL|e1|macro|e1
DECL|e1|macro|e1
DECL|e1|macro|e1
DECL|e1|macro|e1
DECL|e1|macro|e1
DECL|e1|macro|e1
DECL|e1|macro|e1
DECL|e2|macro|e2
DECL|e2|macro|e2
DECL|e2|macro|e2
DECL|e2|macro|e2
DECL|e2|macro|e2
DECL|e2|macro|e2
DECL|e2|macro|e2
DECL|e2|macro|e2
DECL|expr_alloc_and|function|struct expr *expr_alloc_and(struct expr *e1, struct expr *e2)
DECL|expr_alloc_comp|function|struct expr *expr_alloc_comp(enum expr_type type, struct symbol *s1, struct symbol *s2)
DECL|expr_alloc_one|function|struct expr *expr_alloc_one(enum expr_type type, struct expr *ce)
DECL|expr_alloc_or|function|struct expr *expr_alloc_or(struct expr *e1, struct expr *e2)
DECL|expr_alloc_symbol|function|struct expr *expr_alloc_symbol(struct symbol *sym)
DECL|expr_alloc_two|function|struct expr *expr_alloc_two(enum expr_type type, struct expr *e1, struct expr *e2)
DECL|expr_calc_value|function|tristate expr_calc_value(struct expr *e)
DECL|expr_compare_type|function|int expr_compare_type(enum expr_type t1, enum expr_type t2)
DECL|expr_contains_symbol|function|int expr_contains_symbol(struct expr *dep, struct symbol *sym)
DECL|expr_copy|function|struct expr *expr_copy(struct expr *org)
DECL|expr_depends_symbol|function|bool expr_depends_symbol(struct expr *dep, struct symbol *sym)
DECL|expr_eliminate_dups1|function|static void expr_eliminate_dups1(enum expr_type type, struct expr **ep1, struct expr **ep2)
DECL|expr_eliminate_dups2|function|static void expr_eliminate_dups2(enum expr_type type, struct expr **ep1, struct expr **ep2)
DECL|expr_eliminate_dups|function|struct expr *expr_eliminate_dups(struct expr *e)
DECL|expr_eliminate_eq|function|void expr_eliminate_eq(struct expr **ep1, struct expr **ep2)
DECL|expr_eliminate_yn|function|struct expr *expr_eliminate_yn(struct expr *e)
DECL|expr_eq|function|int expr_eq(struct expr *e1, struct expr *e2)
DECL|expr_extract_eq_and|function|struct expr *expr_extract_eq_and(struct expr **ep1, struct expr **ep2)
DECL|expr_extract_eq_or|function|struct expr *expr_extract_eq_or(struct expr **ep1, struct expr **ep2)
DECL|expr_extract_eq|function|void expr_extract_eq(enum expr_type type, struct expr **ep, struct expr **ep1, struct expr **ep2)
DECL|expr_fprint|function|void expr_fprint(struct expr *e, FILE *out)
DECL|expr_free|function|void expr_free(struct expr *e)
DECL|expr_gstr_print|function|void expr_gstr_print(struct expr *e, struct gstr *gs)
DECL|expr_join_and|function|struct expr *expr_join_and(struct expr *e1, struct expr *e2)
DECL|expr_join_or|function|struct expr *expr_join_or(struct expr *e1, struct expr *e2)
DECL|expr_print_file_helper|function|static void expr_print_file_helper(void *data, struct symbol *sym, const char *str)
DECL|expr_print_gstr_helper|function|static void expr_print_gstr_helper(void *data, struct symbol *sym, const char *str)
DECL|expr_print|function|void expr_print(struct expr *e, void (*fn)(void *, struct symbol *, const char *), void *data, int prevtoken)
DECL|expr_trans_bool|function|struct expr *expr_trans_bool(struct expr *e)
DECL|expr_trans_compare|function|struct expr *expr_trans_compare(struct expr *e, enum expr_type type, struct symbol *sym)
DECL|expr_transform|function|struct expr *expr_transform(struct expr *e)
DECL|trans_count|variable|trans_count
