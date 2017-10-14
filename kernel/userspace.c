DECL|_dump_object_error|function|void _dump_object_error(int retval, void *obj, struct _k_object *ko,enum k_objects otype)
DECL|_handler_bad_syscall|function|static u32_t _handler_bad_syscall(u32_t bad_id, u32_t arg2, u32_t arg3, u32_t arg4, u32_t arg5, u32_t arg6, void *ssf)
DECL|_handler_no_syscall|function|static u32_t _handler_no_syscall(u32_t arg1, u32_t arg2, u32_t arg3, u32_t arg4, u32_t arg5, u32_t arg6, void *ssf)
DECL|_impl_k_object_access_grant|function|void _impl_k_object_access_grant(void *object, struct k_thread *thread)
DECL|_impl_k_object_access_revoke|function|void _impl_k_object_access_revoke(void *object, struct k_thread *thread)
DECL|_k_object_init|function|void _k_object_init(void *object)
DECL|_k_object_uninit|function|void _k_object_uninit(void *object)
DECL|_k_object_validate|function|int _k_object_validate(struct _k_object *ko, enum k_objects otype, int init)
DECL|_thread_perms_all_clear|function|void _thread_perms_all_clear(struct k_thread *thread)
DECL|_thread_perms_clear|function|void _thread_perms_clear(struct _k_object *ko, struct k_thread *thread)
DECL|_thread_perms_inherit|function|void _thread_perms_inherit(struct k_thread *parent, struct k_thread *child)
DECL|_thread_perms_set|function|void _thread_perms_set(struct _k_object *ko, struct k_thread *thread)
DECL|child_id|member|int child_id;
DECL|clear_perms_cb|function|static void clear_perms_cb(struct _k_object *ko, void *ctx_ptr)
DECL|dump_permission_error|function|static void dump_permission_error(struct _k_object *ko)
DECL|k_object_access_all_grant|function|void k_object_access_all_grant(void *object)
DECL|otype_to_str|function|const char *otype_to_str(enum k_objects otype)
DECL|parent_id|member|int parent_id;
DECL|parent|member|struct k_thread *parent;
DECL|perm_ctx|struct|struct perm_ctx {
DECL|thread_perms_test|function|static int thread_perms_test(struct _k_object *ko)
DECL|wordlist_cb|function|static void wordlist_cb(struct _k_object *ko, void *ctx_ptr)
