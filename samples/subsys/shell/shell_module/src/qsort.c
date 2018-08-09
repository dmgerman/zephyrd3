DECL|CMP|macro|CMP
DECL|CMP|macro|CMP
DECL|MIN|macro|MIN
DECL|cmp_t|typedef|typedef int cmp_t(const void *, const void *);
DECL|cmp_t|typedef|typedef int cmp_t(void *, const void *, const void *);
DECL|med3|function|med3(char *a, char *b, char *c, cmp_t *cmp, void *thunk)
DECL|qsort_r|function|void qsort_r(void *a, size_t n, size_t es, void *thunk, cmp_t *cmp)
DECL|sccsid|variable|sccsid
DECL|swapfunc|function|swapfunc(char *a, char *b, size_t es)
DECL|vecswap|macro|vecswap
