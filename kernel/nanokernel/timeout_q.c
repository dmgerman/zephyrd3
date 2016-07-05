DECL|_do_nano_timeout_abort|function|int _do_nano_timeout_abort(struct _nano_timeout *t)
DECL|_do_nano_timeout_add|function|void _do_nano_timeout_add(struct tcs *tcs, struct _nano_timeout *t, struct _nano_queue *wait_q, int32_t timeout)
DECL|_nano_get_earliest_timeouts_deadline|function|uint32_t _nano_get_earliest_timeouts_deadline(void)
DECL|_nano_timeout_handle_one_timeout|function|static struct _nano_timeout *_nano_timeout_handle_one_timeout(sys_dlist_t *timeout_q)
DECL|_nano_timeout_handle_timeouts|function|void _nano_timeout_handle_timeouts(void)
DECL|_nano_timeout_insert_point_test|function|static int _nano_timeout_insert_point_test(sys_dnode_t *test, void *timeout)
DECL|_nano_timeout_object_dequeue|function|static void _nano_timeout_object_dequeue(struct tcs *tcs, struct _nano_timeout *t)
DECL|_nano_timeout_object_dequeue|macro|_nano_timeout_object_dequeue
DECL|_nano_timeout_remove_tcs_from_wait_q|function|static void _nano_timeout_remove_tcs_from_wait_q(struct tcs *tcs, struct _nano_queue *wait_q)
