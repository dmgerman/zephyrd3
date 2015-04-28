DECL|_k_mbox_receive_ack|function|void _k_mbox_receive_ack(struct k_args *pCopyReader)
DECL|_k_mbox_receive_data|function|void _k_mbox_receive_data(struct k_args *Starter)
DECL|_k_mbox_receive_reply|function|void _k_mbox_receive_reply(struct k_args *pCopyReader)
DECL|_k_mbox_receive_request|function|void _k_mbox_receive_request(struct k_args *Reader)
DECL|_k_mbox_send_ack|function|void _k_mbox_send_ack(struct k_args *pCopyWriter)
DECL|_k_mbox_send_data|function|void _k_mbox_send_data(struct k_args *Starter)
DECL|_k_mbox_send_reply|function|void _k_mbox_send_reply(struct k_args *pCopyWriter)
DECL|_k_mbox_send_request|function|void _k_mbox_send_request(struct k_args *Writer)
DECL|_task_mbox_data_get_async_block|function|int _task_mbox_data_get_async_block(struct k_msg *message, struct k_block *rxblock, kmemory_pool_t poolid, int32_t time)
DECL|_task_mbox_data_get|function|void _task_mbox_data_get(struct k_msg *M /* message from which to get data */ )
DECL|_task_mbox_get|function|int _task_mbox_get(kmbox_t mbox, /* mailbox */ struct k_msg *M, /* pointer to message */ int32_t time /* maximum number of ticks to wait */ )
DECL|_task_mbox_put_async|function|void _task_mbox_put_async(kmbox_t mbox, /* mailbox to which to send message */ kpriority_t prio, /* priority of data transfer */ struct k_msg *M, /* pointer to message to send */ ksem_t sema /* semaphore to signal when transfer is complete */ )
DECL|_task_mbox_put|function|int _task_mbox_put(kmbox_t mbox, /* mailbox */ kpriority_t prio, /* priority of data transfer */ struct k_msg *M, /* pointer to message to send */ int32_t time /* maximum number of ticks to wait */ )
DECL|copy_packet|function|static void copy_packet(struct k_args **out, struct k_args *in)
DECL|match|function|static int match(struct k_args *Reader, struct k_args *Writer)
DECL|prepare_transfer|function|static BOOL prepare_transfer(struct k_args *move, struct k_args *reader, struct k_args *writer)
DECL|transfer|function|static void transfer(struct k_args *pMvdReq)
