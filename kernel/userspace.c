DECL|_handler_bad_syscall|function|static u32_t _handler_bad_syscall(u32_t bad_id, u32_t arg2, u32_t arg3, u32_t arg4, u32_t arg5, u32_t arg6, void *ssf)
DECL|_k_object_init|function|void _k_object_init(void *object)
DECL|_k_object_validate|function|int _k_object_validate(void *obj, enum k_objects otype, int init)
DECL|_k_syscall_table|variable|_k_syscall_table
DECL|k_object_grant_access|function|void k_object_grant_access(void *object, struct k_thread *thread)
DECL|otype_to_str|function|const char *otype_to_str(enum k_objects otype)
DECL|set_thread_perms|function|static void set_thread_perms(struct _k_object *ko, struct k_thread *thread)
DECL|test_thread_perms|function|static int test_thread_perms(struct _k_object *ko)
