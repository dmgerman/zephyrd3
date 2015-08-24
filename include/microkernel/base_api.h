DECL|ANYTASK|macro|ANYTASK
DECL|BUFF_EMPTY|enumerator|BUFF_EMPTY, /* buffer is empty, disregarding the pending data Xfers
DECL|BUFF_FULL|enumerator|BUFF_FULL, /* buffer is full, disregarding the pending data Xfers
DECL|BUFF_OTHER|enumerator|BUFF_OTHER
DECL|BuffState|member|_K_PIPE_BUFF_STATE BuffState;
DECL|Buffer|member|char *Buffer; /* pointer to statically allocated buffer */
DECL|Deqp|member|char *Deqp;
DECL|ENDLIST|macro|ENDLIST
DECL|Endp|member|char *Endp;
DECL|Enqp|member|char *Enqp;
DECL|Free|member|char *Free;
DECL|Hmark|member|int Hmark;
DECL|Hmark|member|int Hmark;
DECL|K_PIPE_OPTION|typedef|} K_PIPE_OPTION;
DECL|MAXNBR_PIPE_MARKERS|macro|MAXNBR_PIPE_MARKERS
DECL|Nelms|member|int Nelms;
DECL|Nelms|member|int Nelms;
DECL|Next|member|int Next; /* -1 == no successor */
DECL|Nused|member|int Nused;
DECL|Nused|member|int Nused;
DECL|Prev|member|int Prev; /* -1 == no predecessor */
DECL|RC_ALIGNMENT|macro|RC_ALIGNMENT
DECL|RC_FAIL|macro|RC_FAIL
DECL|RC_INCOMPLETE|macro|RC_INCOMPLETE
DECL|RC_OK|macro|RC_OK
DECL|RC_TIME|macro|RC_TIME
DECL|ReadMarkers|member|struct _k_pipe_marker_list ReadMarkers;
DECL|WriteMarkers|member|struct _k_pipe_marker_list WriteMarkers;
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
DECL|aMarkers|member|struct _k_pipe_marker aMarkers[MAXNBR_PIPE_MARKERS];
DECL|address_in_pool|member|void *address_in_pool;
DECL|args|member|struct k_args *args;
DECL|bReadWA|member|bool bReadWA;
DECL|bWriteWA|member|bool bWriteWA;
DECL|bXferBusy|member|bool bXferBusy;
DECL|base|member|char *base;
DECL|base|member|char *base;
DECL|count|member|int count;
DECL|count|member|int count;
DECL|count|member|int count;
DECL|count|member|int count;
DECL|count|member|int count;
DECL|count|member|int count;
DECL|current_owner_priority|member|kpriority_t current_owner_priority;
DECL|desc|member|struct _k_pipe_desc desc;
DECL|element_size|member|int element_size;
DECL|element_size|member|int element_size;
DECL|extra|member|} extra;
DECL|fn_abort|member|void (*fn_abort)(void);
DECL|fn_start|member|void (*fn_start)(void);
DECL|group|member|uint32_t group;
DECL|iAWAMarker|member|int iAWAMarker; /* -1 means no AWAMarkers */
DECL|iAvailDataAWA|member|int iAvailDataAWA; /* AWA == After Wrap Around */
DECL|iAvailDataCont|member|int iAvailDataCont;
DECL|iBuffSize|member|int iBuffSize;
DECL|iBufferSize|member|int iBufferSize; /* size in bytes, must be first for sysgen */
DECL|iFirstMarker|member|int iFirstMarker;
DECL|iFreeSpaceAWA|member|int iFreeSpaceAWA;
DECL|iFreeSpaceCont|member|int iFreeSpaceCont;
DECL|iLastMarker|member|int iLastMarker;
DECL|iNbrMarkers|member|int iNbrMarkers; /* Only used if STORE_NBR_MARKERS is defined */
DECL|iNbrPendingReads|member|int iNbrPendingReads;
DECL|iNbrPendingWrites|member|int iNbrPendingWrites;
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
DECL|level|member|int level;
DECL|level|member|int level;
DECL|mailbox|member|kmbox_t mailbox;
DECL|next|member|struct k_task *next;
DECL|num_conflicts|member|int num_conflicts;
DECL|original_owner_priority|member|kpriority_t original_owner_priority;
DECL|owner|member|ktask_t owner;
DECL|pBegin|member|unsigned char *pBegin;
DECL|pEndOrig|member|unsigned char *pEndOrig;
DECL|pEnd|member|unsigned char *pEnd;
DECL|pReadGuard|member|unsigned char *pReadGuard; /* can be NULL --> invalid */
DECL|pRead|member|unsigned char *pRead;
DECL|pWriteGuard|member|unsigned char *pWriteGuard; /* can be NULL --> invalid */
DECL|pWrite|member|unsigned char *pWrite;
DECL|pointer_to_data|member|void *pointer_to_data;
DECL|pointer|member|unsigned char *pointer; /* NULL == non valid marker == free */
DECL|pool_id|member|kmemory_pool_t pool_id;
DECL|prev|member|struct k_task *prev;
DECL|priority|member|kpriority_t priority;
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
DECL|writers|member|struct k_args *writers;
DECL|writers|member|struct k_args *writers;
