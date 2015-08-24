DECL|ANYTASK|macro|ANYTASK
DECL|BUFF_EMPTY|enumerator|BUFF_EMPTY, /* buffer is empty, disregarding the pending data Xfers
DECL|BUFF_FULL|enumerator|BUFF_FULL, /* buffer is full, disregarding the pending data Xfers
DECL|BUFF_OTHER|enumerator|BUFF_OTHER
DECL|Buffer|member|char *Buffer; /* pointer to statically allocated buffer */
DECL|ENDLIST|macro|ENDLIST
DECL|Free|member|char *Free;
DECL|K_PIPE_OPTION|typedef|} K_PIPE_OPTION;
DECL|MAXNBR_PIPE_MARKERS|macro|MAXNBR_PIPE_MARKERS
DECL|Nelms|member|int Nelms;
DECL|Nelms|member|int Nelms;
DECL|RC_ALIGNMENT|macro|RC_ALIGNMENT
DECL|RC_FAIL|macro|RC_FAIL
DECL|RC_INCOMPLETE|macro|RC_INCOMPLETE
DECL|RC_OK|macro|RC_OK
DECL|RC_TIME|macro|RC_TIME
DECL|_0_TO_N|enumerator|_0_TO_N = 0x00000001,
DECL|_1_TO_N|enumerator|_1_TO_N = 0x00000002,
DECL|_ALL_N|enumerator|_ALL_N = 0x00000004
DECL|_BASE_API_H|macro|_BASE_API_H
DECL|_K_PIPE_BUFF_STATE|typedef|} _K_PIPE_BUFF_STATE;
DECL|_k_fifo_struct|struct|struct _k_fifo_struct {
DECL|_k_mbox_struct|struct|struct _k_mbox_struct {
DECL|_k_mem_map_struct|struct|struct _k_mem_map_struct {
DECL|_k_mutex_struct|struct|struct _k_mutex_struct {
DECL|_k_pipe_desc|struct|struct _k_pipe_desc {
DECL|_k_pipe_marker_list|struct|struct _k_pipe_marker_list {
DECL|_k_pipe_marker|struct|struct _k_pipe_marker {
DECL|_k_pipe_struct|struct|struct _k_pipe_struct {
DECL|_k_sem_struct|struct|struct _k_sem_struct {
DECL|address_in_pool|member|void *address_in_pool;
DECL|args|member|struct k_args *args;
DECL|available_data_count|member|int available_data_count;
DECL|available_data_post_wrap_around|member|int available_data_post_wrap_around; /* AWA == After Wrap Around */
DECL|base|member|char *base;
DECL|base|member|char *base;
DECL|begin_ptr|member|unsigned char *begin_ptr;
DECL|buffer_size|member|int buffer_size;
DECL|buffer_size|member|int buffer_size; /* size in bytes, must be first for sysgen */
DECL|buffer_state|member|_K_PIPE_BUFF_STATE buffer_state;
DECL|buffer_xfer_busy|member|bool buffer_xfer_busy;
DECL|count|member|int count;
DECL|count|member|int count;
DECL|count|member|int count;
DECL|count|member|int count;
DECL|count|member|int count;
DECL|count|member|int count;
DECL|current_owner_priority|member|kpriority_t current_owner_priority;
DECL|dequeue_point|member|char *dequeue_point;
DECL|desc|member|struct _k_pipe_desc desc;
DECL|element_size|member|int element_size;
DECL|element_size|member|int element_size;
DECL|end_point|member|char *end_point;
DECL|end_ptr|member|unsigned char *end_ptr;
DECL|enqueue_point|member|char *enqueue_point;
DECL|extra|member|} extra;
DECL|first_marker|member|int first_marker;
DECL|fn_abort|member|void (*fn_abort)(void);
DECL|fn_start|member|void (*fn_start)(void);
DECL|free_space_count|member|int free_space_count;
DECL|free_space_post_wrap_around|member|int free_space_post_wrap_around;
DECL|group|member|uint32_t group;
DECL|high_watermark|member|int high_watermark;
DECL|high_watermark|member|int high_watermark;
DECL|id|member|ktask_t id;
DECL|info|member|uint32_t info;
DECL|k_block|struct|struct k_block {
DECL|k_msg|struct|struct k_msg {
DECL|k_task|struct|struct k_task {
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
DECL|last_marker|member|int last_marker;
DECL|level|member|int level;
DECL|level|member|int level;
DECL|mailbox|member|kmbox_t mailbox;
DECL|markers|member|struct _k_pipe_marker markers[MAXNBR_PIPE_MARKERS];
DECL|next|member|int next; /* -1 == no successor */
DECL|next|member|struct k_task *next;
DECL|num_conflicts|member|int num_conflicts;
DECL|num_markers|member|int num_markers; /* Only used if STORE_NBR_MARKERS is defined */
DECL|num_pending_reads|member|int num_pending_reads;
DECL|num_pending_writes|member|int num_pending_writes;
DECL|num_used|member|int num_used;
DECL|num_used|member|int num_used;
DECL|original_end_ptr|member|unsigned char *original_end_ptr;
DECL|original_owner_priority|member|kpriority_t original_owner_priority;
DECL|owner|member|ktask_t owner;
DECL|pointer_to_data|member|void *pointer_to_data;
DECL|pointer|member|unsigned char *pointer; /* NULL == non valid marker == free */
DECL|pool_id|member|kmemory_pool_t pool_id;
DECL|post_wrap_around_marker|member|int post_wrap_around_marker; /* -1 means no post wrap around markers */
DECL|prev|member|int prev; /* -1 == no predecessor */
DECL|prev|member|struct k_task *prev;
DECL|priority|member|kpriority_t priority;
DECL|read_guard|member|unsigned char *read_guard; /* can be NULL --> invalid */
DECL|read_markers|member|struct _k_pipe_marker_list read_markers;
DECL|read_ptr|member|unsigned char *read_ptr;
DECL|readers|member|struct k_args *readers;
DECL|readers|member|struct k_args *readers;
DECL|req_size|member|uint32_t req_size;
DECL|rx_data|member|void *rx_data;
DECL|rx_task|member|ktask_t rx_task;
DECL|sema|member|ksem_t sema;
DECL|size|member|int size;
DECL|size|member|uint32_t size;
DECL|state|member|uint32_t state;
DECL|transfer|member|struct k_args *transfer;
DECL|tx_block|member|struct k_block tx_block;
DECL|tx_data|member|void *tx_data;
DECL|tx_task|member|ktask_t tx_task;
DECL|waiters|member|struct k_args *waiters;
DECL|waiters|member|struct k_args *waiters;
DECL|waiters|member|struct k_args *waiters;
DECL|waiters|member|struct k_args *waiters;
DECL|worksize|member|int worksize;
DECL|workspace|member|char *workspace;
DECL|wrap_around_read|member|bool wrap_around_read;
DECL|wrap_around_write|member|bool wrap_around_write;
DECL|write_guard|member|unsigned char *write_guard; /* can be NULL --> invalid */
DECL|write_markers|member|struct _k_pipe_marker_list write_markers;
DECL|write_ptr|member|unsigned char *write_ptr;
DECL|writers|member|struct k_args *writers;
DECL|writers|member|struct k_args *writers;
