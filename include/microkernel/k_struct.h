DECL|ALLOCTMO|enumerator|ALLOCTMO,
DECL|ALLOC|enumerator|ALLOC,
DECL|Action|member|MovedAction Action;
DECL|Args|member|K_ARGS_ARGS Args;
DECL|Args|member|struct k_args *Args;
DECL|Args|member|struct k_args *Args;
DECL|Args|member|struct k_args *Args;
DECL|Async|member|struct async_req Async;
DECL|Async|member|struct async_req Async;
DECL|Back|member|K_TIMER *Back;
DECL|Back|member|struct k_proc *Back;
DECL|Base|member|char *Base;
DECL|Base|member|char *Base;
DECL|Buffer|member|char *Buffer; /* pointer to statically allocated buffer */
DECL|Buff|member|struct chbuff Buff;
DECL|CHDEQ_ACK|enumerator|CHDEQ_ACK,
DECL|CHDEQ_REQ|enumerator|CHDEQ_REQ,
DECL|CHDEQ_RPL|enumerator|CHDEQ_RPL,
DECL|CHDEQ_TMO|enumerator|CHDEQ_TMO,
DECL|CHENQ_ACK|enumerator|CHENQ_ACK,
DECL|CHENQ_REQ|enumerator|CHENQ_REQ,
DECL|CHENQ_RPL|enumerator|CHENQ_RPL,
DECL|CHENQ_TMO|enumerator|CHENQ_TMO,
DECL|CHREQ_STATUS|typedef|} CHREQ_STATUS;
DECL|CH_MOVED_ACK|enumerator|CH_MOVED_ACK,
DECL|ChAck|member|struct k_chack ChAck;
DECL|ChMovedAck|member|struct k_chmovedack ChMovedAck;
DECL|ChProc|member|struct k_chproc ChProc;
DECL|ChRef|member|} ChRef;
DECL|ChReq|member|struct k_chreq ChReq;
DECL|Comm|member|K_COMM Comm;
DECL|Comm|member|int Comm;
DECL|Comm|member|int Comm;
DECL|Comm|member|int Comm;
DECL|Comm|member|int Comm;
DECL|Confl|member|int Confl;
DECL|ContRcv|member|struct k_args *ContRcv;
DECL|ContSnd|member|struct k_args *ContSnd;
DECL|Cont|member|struct k_args *Cont;
DECL|Count|member|int Count;
DECL|Count|member|int Count;
DECL|Count|member|int Count;
DECL|Count|member|int Count;
DECL|Count|member|int Count;
DECL|Count|member|int Count;
DECL|Count|member|int Count;
DECL|Count|member|int Count;
DECL|Ctxt|member|K_CREF Ctxt;
DECL|DEALLOC|enumerator|DEALLOC,
DECL|DEBUG_ACK|enumerator|DEBUG_ACK,
DECL|DEBUG_REQ|enumerator|DEBUG_REQ,
DECL|DEQ_REQ|enumerator|DEQ_REQ,
DECL|DEQ_RPL|enumerator|DEQ_RPL,
DECL|DEQ_TMO|enumerator|DEQ_TMO,
DECL|Deqp|member|char *Deqp;
DECL|Dummy|member|int Dummy;
DECL|Dummy|member|struct sync_req Dummy;
DECL|Dummy|member|uint32_t Dummy;
DECL|Dummy|member|uint32_t Dummy;
DECL|ELAPSE|enumerator|ELAPSE,
DECL|ENQ_REQ|enumerator|ENQ_REQ,
DECL|ENQ_RPL|enumerator|ENQ_RPL,
DECL|ENQ_TMO|enumerator|ENQ_TMO,
DECL|EVENTENABLE|enumerator|EVENTENABLE, /* obsolete now */
DECL|EVENTHANDLER|enumerator|EVENTHANDLER,
DECL|EVENTSIGNAL|enumerator|EVENTSIGNAL,
DECL|EVENTTEST|enumerator|EVENTTEST,
DECL|EVENT_TMO|enumerator|EVENT_TMO,
DECL|Endp|member|char *Endp;
DECL|Enqp|member|char *Enqp;
DECL|Esize|member|int Esize;
DECL|Esize|member|int Esize;
DECL|Extra|member|} Extra;
DECL|Forw|member|K_TIMER *Forw;
DECL|Forw|member|struct k_args *Forw;
DECL|Forw|member|struct k_proc *Forw;
DECL|Free|member|char *Free;
DECL|GET_BLOCK_WAIT|enumerator|GET_BLOCK_WAIT,
DECL|GET_BLOCK|enumerator|GET_BLOCK,
DECL|GRPOP|enumerator|GRPOP,
DECL|GTBLTMO|enumerator|GTBLTMO,
DECL|Group|member|uint32_t Group;
DECL|Head|member|struct k_args **Head;
DECL|Head|member|struct k_proc *Head;
DECL|Hmark|member|int Hmark;
DECL|Hmark|member|int Hmark;
DECL|ID|member|int ID; /* if it is a Xfer to/from a buffer,
DECL|INQSEMA|enumerator|INQSEMA,
DECL|Ident|member|ktask_t Ident;
DECL|Id|member|kpipe_t Id;
DECL|Ind|member|int Ind;
DECL|K_ARGS_ARGS|typedef|typedef union k_args_args K_ARGS_ARGS;
DECL|K_COMM|typedef|} K_COMM;
DECL|K_CREF|typedef|} K_CREF;
DECL|K_TIMER|typedef|typedef struct k_timer K_TIMER;
DECL|LOCK_REQ|enumerator|LOCK_REQ,
DECL|LOCK_RPL|enumerator|LOCK_RPL,
DECL|LOCK_TMO|enumerator|LOCK_TMO,
DECL|Laddr|member|int Laddr;
DECL|Level|member|int Level;
DECL|Level|member|int Level;
DECL|Lsize|member|int Lsize;
DECL|MEMCPY_REQ|enumerator|MEMCPY_REQ,
DECL|MEMCPY_RPL|enumerator|MEMCPY_RPL,
DECL|MVDACT_INVALID|macro|MVDACT_INVALID
DECL|MVDACT_NONE|macro|MVDACT_NONE
DECL|MVDACT_RCVACK|macro|MVDACT_RCVACK
DECL|MVDACT_ROR_RCV|macro|MVDACT_ROR_RCV
DECL|MVDACT_ROS_SND|macro|MVDACT_ROS_SND
DECL|MVDACT_SNDACK|macro|MVDACT_SNDACK
DECL|MVDACT_VALID|macro|MVDACT_VALID
DECL|MVDRCV_ACK|enumerator|MVDRCV_ACK,
DECL|MVDRCV_REQ|enumerator|MVDRCV_REQ,
DECL|MVDSND_ACK|enumerator|MVDSND_ACK,
DECL|MVDSND_REQ|enumerator|MVDSND_REQ,
DECL|MVD_REQ|enumerator|MVD_REQ,
DECL|MVD_VOID|enumerator|MVD_VOID, /* obsolete now */
DECL|MovedAction|typedef|typedef uint32_t MovedAction;
DECL|MovedReq|member|struct moved_req MovedReq;
DECL|NOP|enumerator|NOP,
DECL|Nelms|member|int Nelms;
DECL|Nelms|member|int Nelms;
DECL|Nitem|member|int Nitem;
DECL|Nused|member|int Nused;
DECL|Nused|member|int Nused;
DECL|OFFLOAD|enumerator|OFFLOAD,
DECL|OwnerCurrentPrio|member|kpriority_t OwnerCurrentPrio;
DECL|OwnerOriginalPrio|member|kpriority_t OwnerOriginalPrio;
DECL|Owner|member|ktask_t Owner;
DECL|POOL_DEFRAG|enumerator|POOL_DEFRAG,
DECL|Params|member|int Params;
DECL|Prio|member|kpriority_t Prio;
DECL|Prio|member|kpriority_t Prio;
DECL|QUEUE|enumerator|QUEUE,
DECL|RAWDATA|enumerator|RAWDATA,
DECL|READWL|enumerator|READWL,
DECL|RECV_ACK|enumerator|RECV_ACK,
DECL|RECV_DATA|enumerator|RECV_DATA,
DECL|RECV_REQ|enumerator|RECV_REQ,
DECL|RECV_TMO|enumerator|RECV_TMO,
DECL|REL_BLOCK|enumerator|REL_BLOCK,
DECL|REMREPLY|enumerator|REMREPLY,
DECL|REQ_TYPE|typedef|typedef uint32_t REQ_TYPE;
DECL|RESETM|enumerator|RESETM,
DECL|RESETS|enumerator|RESETS,
DECL|Rcv|member|struct moved_req_args_rcv Rcv;
DECL|Readers|member|struct k_args *Readers;
DECL|Readers|member|struct k_args *Readers;
DECL|ReqInfo|member|struct req_info ReqInfo;
DECL|ReqInfo|member|struct req_info ReqInfo;
DECL|ReqInfo|member|struct req_info ReqInfo;
DECL|ReqType|member|} ReqType;
DECL|ReqType|member|} ReqType;
DECL|SEND_ACK|enumerator|SEND_ACK,
DECL|SEND_DATA|enumerator|SEND_DATA,
DECL|SEND_REQ|enumerator|SEND_REQ,
DECL|SEND_TMO|enumerator|SEND_TMO,
DECL|SIGNALM|enumerator|SIGNALM,
DECL|SIGNALS|enumerator|SIGNALS,
DECL|SLEEP|enumerator|SLEEP,
DECL|SPRIO|enumerator|SPRIO,
DECL|Sema|member|ksem_t Sema;
DECL|Setup|member|struct moved_req_args_setup Setup;
DECL|State|member|uint32_t State;
DECL|Status|member|CHREQ_STATUS Status; /* status of processing of request */
DECL|Sync|member|struct sync_req Sync;
DECL|TALLOC|enumerator|TALLOC,
DECL|TDEALLOC|enumerator|TDEALLOC,
DECL|TERM_FORCED|enumerator|TERM_FORCED = 0x0010,
DECL|TERM_SATISFIED|enumerator|TERM_SATISFIED = 0x0020,
DECL|TERM_TMO|enumerator|TERM_TMO = 0x0040,
DECL|TERM_XXX|enumerator|TERM_XXX = TERM_FORCED | TERM_SATISFIED | TERM_TMO
DECL|TIME_TYPE|typedef|typedef uint32_t TIME_TYPE;
DECL|TSKOP|enumerator|TSKOP,
DECL|TSTART|enumerator|TSTART,
DECL|TSTOP|enumerator|TSTOP,
DECL|Tail|member|struct k_proc *Tail;
DECL|Task|member|ktask_t Task;
DECL|Time|member|} Time;
DECL|Ti|member|int Ti;
DECL|Ti|member|int32_t Ti;
DECL|Tr|member|int Tr;
DECL|Tr|member|int32_t Tr;
DECL|UNDEFINED|enumerator|UNDEFINED = -1
DECL|UNLOCK|enumerator|UNLOCK,
DECL|WAITMACC|enumerator|WAITMACC,
DECL|WAITMANY|enumerator|WAITMANY,
DECL|WAITMCAN|enumerator|WAITMCAN,
DECL|WAITMEND|enumerator|WAITMEND,
DECL|WAITMRDY|enumerator|WAITMRDY,
DECL|WAITMREQ|enumerator|WAITMREQ,
DECL|WAITMTMO|enumerator|WAITMTMO,
DECL|WAITSREQ|enumerator|WAITSREQ,
DECL|WAITSRPL|enumerator|WAITSRPL,
DECL|WAITSTMO|enumerator|WAITSTMO,
DECL|WAKEUP|enumerator|WAKEUP,
DECL|Waiters|member|struct k_args *Waiters;
DECL|Waiters|member|struct k_args *Waiters;
DECL|Waiters|member|struct k_args *Waiters;
DECL|Waiters|member|struct k_args *Waiters;
DECL|Waiters|member|struct k_args *Waiters;
DECL|Wmark|member|int Wmark;
DECL|Writers|member|struct k_args *Writers;
DECL|Writers|member|struct k_args *Writers;
DECL|Wsize|member|int Wsize;
DECL|Wused|member|int Wused;
DECL|XFER_B2R|enumerator|XFER_B2R,
DECL|XFER_BUSY|enumerator|XFER_BUSY = 0x0002,
DECL|XFER_IDLE|enumerator|XFER_IDLE = 0x0001,
DECL|XFER_TYPE|typedef|} XFER_TYPE;
DECL|XFER_UNDEFINED|enumerator|XFER_UNDEFINED,
DECL|XFER_W2B|enumerator|XFER_W2B,
DECL|XFER_W2R|enumerator|XFER_W2R
DECL|XferType|member|XFER_TYPE XferType; /* W2B, B2R or W2R */
DECL|YIELD|enumerator|YIELD,
DECL|_ALLREQ|macro|_ALLREQ
DECL|_ALLTIME|macro|_ALLTIME
DECL|_ASYNCREQ|macro|_ASYNCREQ
DECL|_K_STRUCT_H|macro|_K_STRUCT_H
DECL|_SYNCREQL|macro|_SYNCREQL
DECL|_SYNCREQ|macro|_SYNCREQ
DECL|_TIME_BT|macro|_TIME_BT
DECL|_TIME_B|macro|_TIME_B
DECL|_TIME_NB|macro|_TIME_NB
DECL|_a1arg|struct|struct _a1arg {
DECL|_c1arg|struct|struct _c1arg {
DECL|_e1arg|struct|struct _e1arg {
DECL|_g1arg|struct|struct _g1arg {
DECL|_l1arg|struct|struct _l1arg {
DECL|_m1arg|struct|struct _m1arg {
DECL|_p1arg|struct|struct _p1arg {
DECL|_q1arg|struct|struct _q1arg {
DECL|_q2arg|struct|struct _q2arg {
DECL|_s1arg|struct|struct _s1arg {
DECL|_u1arg|struct|struct _u1arg {
DECL|_x1arg|struct|struct _x1arg {
DECL|_z1arg|struct|struct _z1arg {
DECL|_z2arg|struct|struct _z2arg {
DECL|_z3arg|struct|struct _z3arg {
DECL|_z4arg|struct|struct _z4arg {
DECL|a1|member|struct _a1arg a1;
DECL|action|member|int action;
DECL|alloc|member|bool alloc; /* true if allocated via GETARGS(); else false */
DECL|argp|member|void *argp;
DECL|args|member|struct k_args *args;
DECL|async_req|struct|struct async_req {
DECL|block_size|member|int block_size;
DECL|block_stat|struct|struct block_stat {
DECL|blocktable|member|struct block_stat *blocktable;
DECL|block|member|struct k_block block;
DECL|bufblock|member|char *bufblock;
DECL|c1|member|struct _c1arg c1;
DECL|chan|member|struct nano_lifo *chan;
DECL|data1|member|uint32_t data1;
DECL|data2|member|uint32_t data2;
DECL|data|member|char *data;
DECL|data|member|char data[OCTET_TO_SIZEOFUNIT(40)];
DECL|destination|member|void *destination;
DECL|e1|member|struct _e1arg e1;
DECL|event|member|kevent_t event;
DECL|evstr|struct|struct evstr {
DECL|fabort|member|void (*fabort)(void);
DECL|frag_tab|member|struct pool_block *frag_tab;
DECL|fstart|member|void (*fstart)(void);
DECL|func|member|int (*func)();
DECL|func|member|kevent_handler_t func;
DECL|func|member|kevent_handler_t func;
DECL|g1|member|struct _g1arg g1;
DECL|group|member|ktask_group_t group;
DECL|iBufferSize|member|int iBufferSize; /* size in bytes, must be first for sysgen */
DECL|iDone|member|uint32_t iDone;
DECL|iNbrPendXfers|member|int iNbrPendXfers; /* # data Xfers (still) in progress */
DECL|iSizeTotal|member|int iSizeTotal;
DECL|iSizeTotal|member|int iSizeTotal;
DECL|iSizeTotal|member|int iSizeTotal; /* total size of data/free space */
DECL|iSizeXferred|member|int iSizeXferred;
DECL|iSizeXferred|member|int iSizeXferred; /* size of data ALREADY Xferred */
DECL|iSize|member|int iSize; /* amount of data Xferred */
DECL|iTotalSize|member|uint32_t iTotalSize;
DECL|iXferID|member|int iXferID;
DECL|k_args_args|union|union k_args_args {
DECL|k_args|struct|struct k_args {
DECL|k_chack|struct|struct k_chack {
DECL|k_chmovedack|struct|struct k_chmovedack {
DECL|k_chproc|struct|struct k_chproc {
DECL|k_chreq|struct|struct k_chreq {
DECL|k_mrec|struct|struct k_mrec {
DECL|k_proc|struct|struct k_proc {
DECL|k_timer|struct|struct k_timer { /* For pointer declarations only !! */
DECL|k_tqhd|struct|struct k_tqhd {
DECL|l1|member|struct _l1arg l1;
DECL|list|member|ksemg_t list;
DECL|m1|member|struct _m1arg m1;
DECL|map_struct|struct|struct map_struct {
DECL|maxblock_size|member|int maxblock_size;
DECL|mbx_struct|struct|struct mbx_struct {
DECL|mem_blocks|member|char *mem_blocks;
DECL|mem_status|member|uint32_t mem_status;
DECL|mess|member|struct k_msg mess;
DECL|min_nr_blocks|member|int min_nr_blocks;
DECL|minblock_size|member|int minblock_size;
DECL|mmap|member|kmemory_map_t mmap;
DECL|mon_struct|struct|struct mon_struct {
DECL|moved_req_args_rcv|struct|struct moved_req_args_rcv {
DECL|moved_req_args_setup|struct|struct moved_req_args_setup {
DECL|moved_req|struct|struct moved_req {
DECL|mptr|member|void **mptr;
DECL|mrec|member|struct k_mrec mrec;
DECL|mutex_struct|struct|struct mutex_struct {
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
DECL|pPipe|member|struct pipe_struct *pPipe;
DECL|pPipe|member|struct pipe_struct *pPipe;
DECL|pReader|member|struct k_args *pReader; /* if there's a reader involved,
DECL|pWriter|member|struct k_args *pWriter; /* if there's a writer involved,
DECL|parm|member|int parm[7];
DECL|pipe_struct|struct|struct pipe_struct {
DECL|pool_block|struct|struct pool_block {
DECL|pool_struct|struct|struct pool_struct {
DECL|poolid|member|kmemory_pool_t poolid;
DECL|prio|member|kpriority_t prio;
DECL|proc|member|struct k_proc *proc;
DECL|q1|member|struct _q1arg q1;
DECL|q2|member|struct _q2arg q2;
DECL|que_struct|struct|struct que_struct {
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
DECL|sem_struct|struct|struct sem_struct {
DECL|sema|member|ksem_t sema;
DECL|sema|member|ksem_t sema;
DECL|sema|member|ksem_t sema;
DECL|size|member|int size;
DECL|size|member|int size;
DECL|source|member|void *source;
DECL|status|member|int status;
DECL|sync_req|struct|struct sync_req {
DECL|task|member|ktask_t task;
DECL|task|member|ktask_t task;
DECL|task|member|ktask_t task;
DECL|task|member|ktask_t task;
DECL|task|member|ktask_t task;
DECL|ticks|member|int32_t ticks;
DECL|time1|member|int64_t time1;
DECL|time2|member|int32_t time2;
DECL|timer|member|K_TIMER *timer;
DECL|timer|member|K_TIMER *timer;
DECL|timer|member|int timer;
DECL|time|member|uint32_t time;
DECL|total_mem|member|int total_mem;
DECL|u1|member|struct _u1arg u1;
DECL|val|member|int val;
DECL|waiter|member|struct k_args *waiter;
DECL|worksize|member|int worksize;
DECL|workspace|member|char *workspace;
DECL|x1|member|struct _x1arg x1;
DECL|z1|member|struct _z1arg z1;
DECL|z2|member|struct _z2arg z2;
DECL|z3|member|struct _z3arg z3;
DECL|z4|member|struct _z4arg z4;
