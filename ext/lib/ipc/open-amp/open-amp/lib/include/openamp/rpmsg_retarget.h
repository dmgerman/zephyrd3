DECL|ACK_STATUS_ID|macro|ACK_STATUS_ID
DECL|CLOSE_SYSCALL_ID|macro|CLOSE_SYSCALL_ID
DECL|FILE_NAME_LEN|macro|FILE_NAME_LEN
DECL|OPEN_SYSCALL_ID|macro|OPEN_SYSCALL_ID
DECL|PROXY_ENDPOINT|macro|PROXY_ENDPOINT
DECL|READ_SYSCALL_ID|macro|READ_SYSCALL_ID
DECL|RPC_BUFF_SIZE|macro|RPC_BUFF_SIZE
DECL|RPMSG_RETARGET_H|macro|RPMSG_RETARGET_H
DECL|TERM_SYSCALL_ID|macro|TERM_SYSCALL_ID
DECL|WRITE_SYSCALL_ID|macro|WRITE_SYSCALL_ID
DECL|_rpc_data|struct|struct _rpc_data {
DECL|_sys_call_args|struct|struct _sys_call_args {
DECL|_sys_rpc|struct|struct _sys_rpc {
DECL|data_len|member|unsigned int data_len;
DECL|data|member|char data[0];
DECL|id|member|unsigned int id;
DECL|int_field1|member|int int_field1;
DECL|int_field2|member|int int_field2;
DECL|rp_ept|member|struct rpmsg_endpoint *rp_ept;
DECL|rpc_lock|member|metal_mutex_t rpc_lock;
DECL|rpc_response|member|struct _sys_rpc *rpc_response;
DECL|rpc_shutdown_cb|typedef|typedef void (*rpc_shutdown_cb) (struct rpmsg_channel *);
DECL|rpc|member|struct _sys_rpc *rpc;
DECL|rpmsg_chnl|member|struct rpmsg_channel *rpmsg_chnl;
DECL|shutdown_cb|member|rpc_shutdown_cb shutdown_cb;
DECL|sync|member|atomic_int sync;
DECL|sys_call_args|member|struct _sys_call_args sys_call_args;
