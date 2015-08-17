DECL|Action|member|MovedAction Action;
DECL|Args|member|K_ARGS_ARGS Args;
DECL|Args|member|struct k_args *Args;
DECL|Async|member|struct async_req Async;
DECL|Async|member|struct async_req Async;
DECL|Back|member|struct k_timer *Back;
DECL|Comm|member|int Comm;
DECL|ContRcv|member|struct k_args *ContRcv;
DECL|ContSnd|member|struct k_args *ContSnd;
DECL|Count|member|int Count;
DECL|Count|member|int Count;
DECL|Ctxt|member|K_CREF Ctxt;
DECL|Dummy|member|int Dummy;
DECL|Dummy|member|struct sync_req Dummy;
DECL|Dummy|member|uint32_t Dummy;
DECL|Extra|member|} Extra;
DECL|Forw|member|struct k_args *Forw;
DECL|Forw|member|struct k_timer *Forw;
DECL|Head|member|struct k_args **Head;
DECL|Head|member|struct k_task *Head;
DECL|ID|member|int ID; /* if it is a Xfer to/from a buffer,
DECL|K_ARGS_ARGS|typedef|typedef union k_args_args K_ARGS_ARGS;
DECL|K_CREF|typedef|} K_CREF;
DECL|MVDACT_INVALID|macro|MVDACT_INVALID
DECL|MVDACT_NONE|macro|MVDACT_NONE
DECL|MVDACT_RCVACK|macro|MVDACT_RCVACK
DECL|MVDACT_ROR_RCV|macro|MVDACT_ROR_RCV
DECL|MVDACT_ROS_SND|macro|MVDACT_ROS_SND
DECL|MVDACT_SNDACK|macro|MVDACT_SNDACK
DECL|MVDACT_VALID|macro|MVDACT_VALID
DECL|MovedAction|typedef|typedef uint32_t MovedAction;
DECL|MovedReq|member|struct moved_req MovedReq;
DECL|PIPE_REQUEST_STATUS|typedef|} PIPE_REQUEST_STATUS;
DECL|Params|member|int Params;
DECL|Prio|member|kpriority_t Prio;
DECL|ReqInfo|member|struct req_info ReqInfo;
DECL|ReqInfo|member|struct req_info ReqInfo;
DECL|ReqInfo|member|struct req_info ReqInfo;
DECL|ReqType|member|} ReqType;
DECL|ReqType|member|} ReqType;
DECL|Sema|member|ksem_t Sema;
DECL|Setup|member|struct moved_req_args_setup Setup;
DECL|Sync|member|struct sync_req Sync;
DECL|TERM_FORCED|enumerator|TERM_FORCED = 0x0010,
DECL|TERM_SATISFIED|enumerator|TERM_SATISFIED = 0x0020,
DECL|TERM_TMO|enumerator|TERM_TMO = 0x0040,
DECL|TERM_XXX|enumerator|TERM_XXX = TERM_FORCED | TERM_SATISFIED | TERM_TMO
DECL|Tail|member|struct k_task *Tail;
DECL|Time|member|} Time;
DECL|Waiters|member|struct k_args *Waiters;
DECL|XFER_B2R|enumerator|XFER_B2R,
DECL|XFER_BUSY|enumerator|XFER_BUSY = 0x0002,
DECL|XFER_IDLE|enumerator|XFER_IDLE = 0x0001,
DECL|XFER_TYPE|typedef|} XFER_TYPE;
DECL|XFER_UNDEFINED|enumerator|XFER_UNDEFINED,
DECL|XFER_W2B|enumerator|XFER_W2B,
DECL|XFER_W2R|enumerator|XFER_W2R
DECL|XferType|member|XFER_TYPE XferType; /* W2B, B2R or W2R */
DECL|_K_SVC_BLOCK_WAITERS_GET|macro|_K_SVC_BLOCK_WAITERS_GET
DECL|_K_SVC_DEFRAG|macro|_K_SVC_DEFRAG
DECL|_K_SVC_EVENT_HANDLER_SET|macro|_K_SVC_EVENT_HANDLER_SET
DECL|_K_SVC_EVENT_SIGNAL|macro|_K_SVC_EVENT_SIGNAL
DECL|_K_SVC_EVENT_TEST_TIMEOUT|macro|_K_SVC_EVENT_TEST_TIMEOUT
DECL|_K_SVC_EVENT_TEST|macro|_K_SVC_EVENT_TEST
DECL|_K_SVC_FIFO_DEQUE_REPLY_TIMEOUT|macro|_K_SVC_FIFO_DEQUE_REPLY_TIMEOUT
DECL|_K_SVC_FIFO_DEQUE_REPLY|macro|_K_SVC_FIFO_DEQUE_REPLY
DECL|_K_SVC_FIFO_DEQUE_REQUEST|macro|_K_SVC_FIFO_DEQUE_REQUEST
DECL|_K_SVC_FIFO_ENQUE_REPLY_TIMEOUT|macro|_K_SVC_FIFO_ENQUE_REPLY_TIMEOUT
DECL|_K_SVC_FIFO_ENQUE_REPLY|macro|_K_SVC_FIFO_ENQUE_REPLY
DECL|_K_SVC_FIFO_ENQUE_REQUEST|macro|_K_SVC_FIFO_ENQUE_REQUEST
DECL|_K_SVC_FIFO_IOCTL|macro|_K_SVC_FIFO_IOCTL
DECL|_K_SVC_MBOX_RECEIVE_ACK|macro|_K_SVC_MBOX_RECEIVE_ACK
DECL|_K_SVC_MBOX_RECEIVE_DATA|macro|_K_SVC_MBOX_RECEIVE_DATA
DECL|_K_SVC_MBOX_RECEIVE_REPLY|macro|_K_SVC_MBOX_RECEIVE_REPLY
DECL|_K_SVC_MBOX_RECEIVE_REQUEST|macro|_K_SVC_MBOX_RECEIVE_REQUEST
DECL|_K_SVC_MBOX_SEND_ACK|macro|_K_SVC_MBOX_SEND_ACK
DECL|_K_SVC_MBOX_SEND_DATA|macro|_K_SVC_MBOX_SEND_DATA
DECL|_K_SVC_MBOX_SEND_REPLY|macro|_K_SVC_MBOX_SEND_REPLY
DECL|_K_SVC_MBOX_SEND_REQUEST|macro|_K_SVC_MBOX_SEND_REQUEST
DECL|_K_SVC_MEM_MAP_ALLOC_TIMEOUT|macro|_K_SVC_MEM_MAP_ALLOC_TIMEOUT
DECL|_K_SVC_MEM_MAP_ALLOC|macro|_K_SVC_MEM_MAP_ALLOC
DECL|_K_SVC_MEM_MAP_DEALLOC|macro|_K_SVC_MEM_MAP_DEALLOC
DECL|_K_SVC_MEM_POOL_BLOCK_GET_TIMEOUT_HANDLE|macro|_K_SVC_MEM_POOL_BLOCK_GET_TIMEOUT_HANDLE
DECL|_K_SVC_MEM_POOL_BLOCK_GET|macro|_K_SVC_MEM_POOL_BLOCK_GET
DECL|_K_SVC_MEM_POOL_BLOCK_RELEASE|macro|_K_SVC_MEM_POOL_BLOCK_RELEASE
DECL|_K_SVC_MOVEDATA_REQ|macro|_K_SVC_MOVEDATA_REQ
DECL|_K_SVC_MUTEX_LOCK_REPLY_TIMEOUT|macro|_K_SVC_MUTEX_LOCK_REPLY_TIMEOUT
DECL|_K_SVC_MUTEX_LOCK_REPLY|macro|_K_SVC_MUTEX_LOCK_REPLY
DECL|_K_SVC_MUTEX_LOCK_REQUEST|macro|_K_SVC_MUTEX_LOCK_REQUEST
DECL|_K_SVC_MUTEX_UNLOCK|macro|_K_SVC_MUTEX_UNLOCK
DECL|_K_SVC_NOP|macro|_K_SVC_NOP
DECL|_K_SVC_OFFLOAD_TO_FIBER|macro|_K_SVC_OFFLOAD_TO_FIBER
DECL|_K_SVC_PIPE_GET_ACK|macro|_K_SVC_PIPE_GET_ACK
DECL|_K_SVC_PIPE_GET_REPLY|macro|_K_SVC_PIPE_GET_REPLY
DECL|_K_SVC_PIPE_GET_REQUEST|macro|_K_SVC_PIPE_GET_REQUEST
DECL|_K_SVC_PIPE_GET_TIMEOUT|macro|_K_SVC_PIPE_GET_TIMEOUT
DECL|_K_SVC_PIPE_MOVEDATA_ACK|macro|_K_SVC_PIPE_MOVEDATA_ACK
DECL|_K_SVC_PIPE_PUT_ACK|macro|_K_SVC_PIPE_PUT_ACK
DECL|_K_SVC_PIPE_PUT_REPLY|macro|_K_SVC_PIPE_PUT_REPLY
DECL|_K_SVC_PIPE_PUT_REQUEST|macro|_K_SVC_PIPE_PUT_REQUEST
DECL|_K_SVC_PIPE_PUT_TIMEOUT|macro|_K_SVC_PIPE_PUT_TIMEOUT
DECL|_K_SVC_SEM_GROUP_RESET|macro|_K_SVC_SEM_GROUP_RESET
DECL|_K_SVC_SEM_GROUP_SIGNAL|macro|_K_SVC_SEM_GROUP_SIGNAL
DECL|_K_SVC_SEM_GROUP_WAIT_ACCEPT|macro|_K_SVC_SEM_GROUP_WAIT_ACCEPT
DECL|_K_SVC_SEM_GROUP_WAIT_ANY|macro|_K_SVC_SEM_GROUP_WAIT_ANY
DECL|_K_SVC_SEM_GROUP_WAIT_CANCEL|macro|_K_SVC_SEM_GROUP_WAIT_CANCEL
DECL|_K_SVC_SEM_GROUP_WAIT_READY|macro|_K_SVC_SEM_GROUP_WAIT_READY
DECL|_K_SVC_SEM_GROUP_WAIT_REQUEST|macro|_K_SVC_SEM_GROUP_WAIT_REQUEST
DECL|_K_SVC_SEM_GROUP_WAIT_TIMEOUT|macro|_K_SVC_SEM_GROUP_WAIT_TIMEOUT
DECL|_K_SVC_SEM_GROUP_WAIT|macro|_K_SVC_SEM_GROUP_WAIT
DECL|_K_SVC_SEM_INQUIRY|macro|_K_SVC_SEM_INQUIRY
DECL|_K_SVC_SEM_RESET|macro|_K_SVC_SEM_RESET
DECL|_K_SVC_SEM_SIGNAL|macro|_K_SVC_SEM_SIGNAL
DECL|_K_SVC_SEM_WAIT_REPLY_TIMEOUT|macro|_K_SVC_SEM_WAIT_REPLY_TIMEOUT
DECL|_K_SVC_SEM_WAIT_REPLY|macro|_K_SVC_SEM_WAIT_REPLY
DECL|_K_SVC_SEM_WAIT_REQUEST|macro|_K_SVC_SEM_WAIT_REQUEST
DECL|_K_SVC_TASK_GROUP_OP|macro|_K_SVC_TASK_GROUP_OP
DECL|_K_SVC_TASK_OP|macro|_K_SVC_TASK_OP
DECL|_K_SVC_TASK_PRIORITY_SET|macro|_K_SVC_TASK_PRIORITY_SET
DECL|_K_SVC_TASK_SLEEP|macro|_K_SVC_TASK_SLEEP
DECL|_K_SVC_TASK_WAKEUP|macro|_K_SVC_TASK_WAKEUP
DECL|_K_SVC_TASK_YIELD|macro|_K_SVC_TASK_YIELD
DECL|_K_SVC_TIMER_ALLOC|macro|_K_SVC_TIMER_ALLOC
DECL|_K_SVC_TIMER_DEALLOC|macro|_K_SVC_TIMER_DEALLOC
DECL|_K_SVC_TIMER_START|macro|_K_SVC_TIMER_START
DECL|_K_SVC_TIMER_STOP|macro|_K_SVC_TIMER_STOP
DECL|_K_SVC_TIME_ELAPSE|macro|_K_SVC_TIME_ELAPSE
DECL|_K_SVC_UNDEFINED|macro|_K_SVC_UNDEFINED
DECL|_K_SVC_WORKLOAD_GET|macro|_K_SVC_WORKLOAD_GET
DECL|_MICRO_PRIVATE_TYPES_H|macro|_MICRO_PRIVATE_TYPES_H
DECL|__packed|variable|__packed
DECL|_a1arg|struct|struct _a1arg {
DECL|_c1arg|struct|struct _c1arg {
DECL|_e1arg|struct|struct _e1arg {
DECL|_g1arg|struct|struct _g1arg {
DECL|_l1arg|struct|struct _l1arg {
DECL|_m1arg|struct|struct _m1arg {
DECL|_p1arg|struct|struct _p1arg {
DECL|_pipe_ack_arg|struct|struct _pipe_ack_arg {
DECL|_pipe_req_arg|struct|struct _pipe_req_arg {
DECL|_pipe_xfer_ack_arg|struct|struct _pipe_xfer_ack_arg {
DECL|_pipe_xfer_req_arg|struct|struct _pipe_xfer_req_arg {
DECL|_q1arg|struct|struct _q1arg {
DECL|_q2arg|struct|struct _q2arg {
DECL|_s1arg|struct|struct _s1arg {
DECL|_u1arg|struct|struct _u1arg {
DECL|_z4arg|struct|struct _z4arg {
DECL|a1|member|struct _a1arg a1;
DECL|alloc|member|bool alloc;
DECL|argp|member|void *argp;
DECL|args|member|struct k_args *args;
DECL|async_req|struct|struct async_req {
DECL|block_size|member|int block_size;
DECL|block_stat|struct|struct block_stat {
DECL|blocktable|member|struct block_stat *blocktable;
DECL|block|member|struct k_block block;
DECL|bufblock|member|char *bufblock;
DECL|c1|member|struct _c1arg c1;
DECL|data1|member|uint32_t data1;
DECL|data2|member|uint32_t data2;
DECL|data|member|char *data;
DECL|data|member|char data[OCTET_TO_SIZEOFUNIT(40)];
DECL|destination|member|void *destination;
DECL|duration|member|int32_t duration;
DECL|e1|member|struct _e1arg e1;
DECL|event|member|kevent_t event;
DECL|evstr|struct|struct evstr {
DECL|frag_tab|member|struct pool_block *frag_tab;
DECL|func|member|int (*func)();
DECL|func|member|kevent_handler_t func;
DECL|func|member|kevent_handler_t func;
DECL|g1|member|struct _g1arg g1;
DECL|group|member|ktask_group_t group;
DECL|iNbrPendXfers|member|int iNbrPendXfers; /* # data Xfers (still) in progress */
DECL|iSizeTotal|member|int iSizeTotal;
DECL|iSizeTotal|member|int iSizeTotal;
DECL|iSizeTotal|member|int iSizeTotal; /* total size of data/free space */
DECL|iSizeXferred|member|int iSizeXferred;
DECL|iSizeXferred|member|int iSizeXferred; /* size of data ALREADY Xferred */
DECL|iSize|member|int iSize; /* amount of data Xferred */
DECL|iTotalSize|member|uint32_t iTotalSize;
DECL|id|member|kpipe_t id;
DECL|k_args_args|union|union k_args_args {
DECL|k_args|struct|struct k_args {
DECL|k_mrec|struct|struct k_mrec {
DECL|k_timer|struct|struct k_timer {
DECL|k_tqhd|struct|struct k_tqhd {
DECL|l1|member|struct _l1arg l1;
DECL|list|member|ksemg_t list;
DECL|m1|member|struct _m1arg m1;
DECL|maxblock_size|member|int maxblock_size;
DECL|mem_blocks|member|char *mem_blocks;
DECL|mem_status|member|uint32_t mem_status;
DECL|mess|member|struct k_msg mess;
DECL|min_nr_blocks|member|int min_nr_blocks;
DECL|minblock_size|member|int minblock_size;
DECL|mmap|member|kmemory_map_t mmap;
DECL|moved_req_args_setup|struct|struct moved_req_args_setup {
DECL|moved_req|struct|struct moved_req {
DECL|mptr|member|void **mptr;
DECL|mrec|member|struct k_mrec mrec;
DECL|mutex|member|kmutex_t mutex;
DECL|nr_of_entries|member|int nr_of_entries;
DECL|nr_of_frags|member|int nr_of_frags;
DECL|nr_of_maxblocks|member|int nr_of_maxblocks;
DECL|nrec|member|int nrec;
DECL|nsem|member|int nsem;
DECL|opt|member|int opt;
DECL|opt|member|int opt;
DECL|p1|member|struct _p1arg p1;
DECL|pData|member|void *pData;
DECL|pData|member|void *pData; /* if NULL, data is embedded in
DECL|pPipe|member|struct _k_pipe_struct *pPipe;
DECL|pReader|member|struct k_args *pReader; /* if there's a reader involved,
DECL|pWriter|member|struct k_args *pWriter; /* if there's a writer involved,
DECL|period|member|int32_t period;
DECL|pipe_ack|member|struct _pipe_ack_arg pipe_ack;
DECL|pipe_req|member|struct _pipe_req_arg pipe_req;
DECL|pipe_xfer_ack|member|struct _pipe_xfer_ack_arg pipe_xfer_ack;
DECL|pipe_xfer_req|member|struct _pipe_xfer_req_arg pipe_xfer_req;
DECL|pipe|member|} pipe;
DECL|pool_block|struct|struct pool_block {
DECL|pool_struct|struct|struct pool_struct {
DECL|poolid|member|kmemory_pool_t poolid;
DECL|prio|member|kpriority_t prio;
DECL|ptr|member|struct _k_pipe_struct *ptr;
DECL|q1|member|struct _q1arg q1;
DECL|q2|member|struct _q2arg q2;
DECL|queue|member|kfifo_t queue;
DECL|queue|member|kfifo_t queue;
DECL|rcode|member|int rcode;
DECL|rep_dataptr|member|void *rep_dataptr;
DECL|rep_poolptr|member|void *rep_poolptr;
DECL|req_info|struct|struct req_info {
DECL|req_size|member|int req_size;
DECL|rind|member|int rind;
DECL|rval|member|int rval;
DECL|s1|member|struct _s1arg s1;
DECL|sema|member|ksem_t sema;
DECL|sema|member|ksem_t sema;
DECL|sema|member|ksem_t sema;
DECL|size|member|int size;
DECL|size|member|int size;
DECL|source|member|void *source;
DECL|status|member|PIPE_REQUEST_STATUS status; /* status of processing of request */
DECL|status|member|int status;
DECL|sync_req|struct|struct sync_req {
DECL|task_id|member|ktask_t task_id;
DECL|task|member|ktask_t task;
DECL|task|member|ktask_t task;
DECL|task|member|ktask_t task;
DECL|task|member|struct k_task *task;
DECL|ticks|member|int32_t ticks;
DECL|time1|member|int64_t time1;
DECL|time2|member|int64_t time2;
DECL|timer|member|struct k_timer *timer;
DECL|timer|member|struct k_timer *timer;
DECL|time|member|uint32_t time;
DECL|total_mem|member|int total_mem;
DECL|u1|member|struct _u1arg u1;
DECL|val|member|int val;
DECL|waiter|member|struct k_args *waiter;
DECL|z4|member|struct _z4arg z4;
