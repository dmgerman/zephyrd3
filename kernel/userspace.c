DECL|MAX_THREAD_BITS|macro|MAX_THREAD_BITS
DECL|_dump_object_error|function|void _dump_object_error(int retval, void *obj, struct _k_object *ko,enum k_objects otype)
DECL|_impl_k_object_access_grant|function|void _impl_k_object_access_grant(void *object, struct k_thread *thread)
DECL|_impl_k_object_alloc|function|void *_impl_k_object_alloc(enum k_objects otype)
DECL|_impl_k_object_release|function|void _impl_k_object_release(void *object)
DECL|_k_object_find|function|struct _k_object *_k_object_find(void *obj)
DECL|_k_object_init|function|void _k_object_init(void *object)
DECL|_k_object_recycle|function|void _k_object_recycle(void *object)
DECL|_k_object_uninit|function|void _k_object_uninit(void *object)
DECL|_k_object_validate|function|int _k_object_validate(struct _k_object *ko, enum k_objects otype, enum _obj_init_check init)
DECL|_k_object_wordlist_foreach|function|void _k_object_wordlist_foreach(_wordlist_cb_func_t func, void *context)
DECL|_thread_idx_alloc|function|static int _thread_idx_alloc(u32_t *tidx)
DECL|_thread_idx_free|function|static void _thread_idx_free(u32_t tidx)
DECL|_thread_perms_all_clear|function|void _thread_perms_all_clear(struct k_thread *thread)
DECL|_thread_perms_clear|function|void _thread_perms_clear(struct _k_object *ko, struct k_thread *thread)
DECL|_thread_perms_inherit|function|void _thread_perms_inherit(struct k_thread *parent, struct k_thread *child)
DECL|_thread_perms_set|function|void _thread_perms_set(struct _k_object *ko, struct k_thread *thread)
DECL|child_id|member|int child_id;
DECL|clear_perms_cb|function|static void clear_perms_cb(struct _k_object *ko, void *ctx_ptr)
DECL|data|member|u8_t data[]; /* The object itself */
DECL|dump_permission_error|function|static void dump_permission_error(struct _k_object *ko)
DECL|dyn_object_find|function|static struct dyn_obj *dyn_object_find(void *obj)
DECL|dyn_obj|struct|struct dyn_obj {
DECL|handler_bad_syscall|function|static u32_t handler_bad_syscall(u32_t bad_id, u32_t arg2, u32_t arg3, u32_t arg4, u32_t arg5, u32_t arg6, void *ssf)
DECL|handler_no_syscall|function|static u32_t handler_no_syscall(u32_t arg1, u32_t arg2, u32_t arg3, u32_t arg4, u32_t arg5, u32_t arg6, void *ssf)
DECL|k_object_access_all_grant|function|void k_object_access_all_grant(void *object)
DECL|k_object_access_revoke|function|void k_object_access_revoke(void *object, struct k_thread *thread)
DECL|k_object_free|function|void k_object_free(void *obj)
DECL|kobj|member|struct _k_object kobj;
DECL|node_lessthan|function|static int node_lessthan(struct rbnode *a, struct rbnode *b)
DECL|node_to_dyn_obj|function|static inline struct dyn_obj *node_to_dyn_obj(struct rbnode *node)
DECL|node|member|struct rbnode node; /* must be immediately before data member */
DECL|obj_list|member|sys_dnode_t obj_list;
DECL|obj_list|variable|obj_list
DECL|obj_rb_tree|variable|obj_rb_tree
DECL|obj_size_get|function|static size_t obj_size_get(enum k_objects otype)
DECL|otype_to_str|function|const char *otype_to_str(enum k_objects otype)
DECL|parent_id|member|int parent_id;
DECL|parent|member|struct k_thread *parent;
DECL|perm_ctx|struct|struct perm_ctx {
DECL|thread_index_get|function|static int thread_index_get(struct k_thread *t)
DECL|thread_perms_test|function|static int thread_perms_test(struct _k_object *ko)
DECL|unref_check|function|static void unref_check(struct _k_object *ko)
DECL|user_copy|function|static int user_copy(void *dst, void *src, size_t size, bool to_user)
DECL|wordlist_cb|function|static void wordlist_cb(struct _k_object *ko, void *ctx_ptr)
DECL|z_user_alloc_from_copy|function|void *z_user_alloc_from_copy(void *src, size_t size)
DECL|z_user_from_copy|function|int z_user_from_copy(void *dst, void *src, size_t size)
DECL|z_user_string_alloc_copy|function|char *z_user_string_alloc_copy(char *src, size_t maxlen)
DECL|z_user_string_copy|function|int z_user_string_copy(char *dst, char *src, size_t maxlen)
DECL|z_user_to_copy|function|int z_user_to_copy(void *dst, void *src, size_t size)
