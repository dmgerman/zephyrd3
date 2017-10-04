DECL|_handler_bad_syscall|function|static u32_t _handler_bad_syscall(u32_t bad_id, u32_t arg2, u32_t arg3, u32_t arg4, u32_t arg5, u32_t arg6, void *ssf)
DECL|_handler_no_syscall|function|static u32_t _handler_no_syscall(u32_t arg1, u32_t arg2, u32_t arg3, u32_t arg4, u32_t arg5, u32_t arg6, void *ssf)
DECL|_impl_k_object_access_all_grant|function|void _impl_k_object_access_all_grant(void *object)
DECL|_impl_k_object_access_grant|function|void _impl_k_object_access_grant(void *object, struct k_thread *thread)
DECL|_k_object_init|function|void _k_object_init(void *object)
DECL|_k_object_validate|function|int _k_object_validate(void *obj, enum k_objects otype, int init)
DECL|access_check|function|static struct _k_object *access_check(void *object)
DECL|otype_to_str|function|const char *otype_to_str(enum k_objects otype)
DECL|set_thread_perms|function|static void set_thread_perms(struct _k_object *ko, struct k_thread *thread)
DECL|test_thread_perms|function|static int test_thread_perms(struct _k_object *ko)
