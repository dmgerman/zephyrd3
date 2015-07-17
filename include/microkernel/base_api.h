DECL|ANYTASK|macro|ANYTASK
DECL|Base|member|char *Base;
DECL|Confl|member|int Confl;
DECL|Count|member|int Count;
DECL|Count|member|int Count;
DECL|Count|member|int Count;
DECL|Count|member|int Count;
DECL|Deqp|member|char *Deqp;
DECL|ENDLIST|macro|ENDLIST
DECL|Endp|member|char *Endp;
DECL|Enqp|member|char *Enqp;
DECL|Esize|member|int Esize;
DECL|Hmark|member|int Hmark;
DECL|K_PIPE_OPTION|typedef|} K_PIPE_OPTION;
DECL|Level|member|int Level;
DECL|Level|member|int Level;
DECL|Nelms|member|int Nelms;
DECL|Nused|member|int Nused;
DECL|OwnerCurrentPrio|member|kpriority_t OwnerCurrentPrio;
DECL|OwnerOriginalPrio|member|kpriority_t OwnerOriginalPrio;
DECL|Owner|member|ktask_t Owner;
DECL|RC_ALIGNMENT|macro|RC_ALIGNMENT
DECL|RC_FAIL|macro|RC_FAIL
DECL|RC_INCOMPLETE|macro|RC_INCOMPLETE
DECL|RC_OK|macro|RC_OK
DECL|RC_TIME|macro|RC_TIME
DECL|Readers|member|struct k_args *Readers;
DECL|Waiters|member|struct k_args *Waiters;
DECL|Waiters|member|struct k_args *Waiters;
DECL|Waiters|member|struct k_args *Waiters;
DECL|Writers|member|struct k_args *Writers;
DECL|_0_TO_N|enumerator|_0_TO_N = 0x00000001,
DECL|_1_TO_N|enumerator|_1_TO_N = 0x00000002,
DECL|_ALL_N|enumerator|_ALL_N = 0x00000004
DECL|_BASE_API_H|macro|_BASE_API_H
DECL|_k_fifo_struct|struct|struct _k_fifo_struct {
DECL|_k_mbox_struct|struct|struct _k_mbox_struct {
DECL|_k_mutex_struct|struct|struct _k_mutex_struct {
DECL|_k_sem_struct|struct|struct _k_sem_struct {
DECL|address_in_pool|member|void *address_in_pool;
DECL|extra|member|} extra;
DECL|info|member|uint32_t info;
DECL|k_block|struct|struct k_block {
DECL|k_msg|struct|struct k_msg {
DECL|kevent_handler_t|typedef|typedef int (*kevent_handler_t)(int event);
DECL|kevent_t|typedef|typedef unsigned int kevent_t;
DECL|kfifo_t|typedef|typedef uint32_t kfifo_t;
DECL|kirq_t|typedef|typedef uint32_t kirq_t;
DECL|kmbox_t|typedef|typedef uint32_t kmbox_t;
DECL|kmemory_map_t|typedef|typedef uint32_t kmemory_map_t;
DECL|kmemory_pool_t|typedef|typedef uint32_t kmemory_pool_t;
DECL|kmutex_t|typedef|typedef uint32_t kmutex_t;
DECL|kpipe_t|typedef|typedef uint32_t kpipe_t;
DECL|kpriority_t|typedef|typedef uint32_t kpriority_t;
DECL|ksem_t|typedef|typedef int32_t ksem_t;
DECL|ksemg_t|typedef|typedef ksem_t *ksemg_t;
DECL|ktask_group_t|typedef|typedef uint32_t ktask_group_t;
DECL|ktask_t|typedef|typedef int32_t ktask_t;
DECL|ktimer_t|typedef|typedef uint32_t ktimer_t;
DECL|mailbox|member|kmbox_t mailbox;
DECL|pointer_to_data|member|void *pointer_to_data;
DECL|poolid|member|kmemory_pool_t poolid;
DECL|req_size|member|uint32_t req_size;
DECL|rx_data|member|void *rx_data;
DECL|rx_task|member|ktask_t rx_task;
DECL|sema|member|ksem_t sema;
DECL|size|member|uint32_t size;
DECL|transfer|member|struct k_args *transfer;
DECL|tx_block|member|struct k_block tx_block;
DECL|tx_data|member|void *tx_data;
DECL|tx_task|member|ktask_t tx_task;
