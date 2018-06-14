DECL|TICKER_CALL_ID_ISR|macro|TICKER_CALL_ID_ISR
DECL|TICKER_CALL_ID_JOB|macro|TICKER_CALL_ID_JOB
DECL|TICKER_CALL_ID_NONE|macro|TICKER_CALL_ID_NONE
DECL|TICKER_CALL_ID_PROGRAM|macro|TICKER_CALL_ID_PROGRAM
DECL|TICKER_CALL_ID_TRIGGER|macro|TICKER_CALL_ID_TRIGGER
DECL|TICKER_CALL_ID_WORKER|macro|TICKER_CALL_ID_WORKER
DECL|TICKER_NODE_T_SIZE|macro|TICKER_NODE_T_SIZE
DECL|TICKER_NULL_LAZY|macro|TICKER_NULL_LAZY
DECL|TICKER_NULL_PERIOD|macro|TICKER_NULL_PERIOD
DECL|TICKER_NULL_REMAINDER|macro|TICKER_NULL_REMAINDER
DECL|TICKER_NULL_SLOT|macro|TICKER_NULL_SLOT
DECL|TICKER_NULL|macro|TICKER_NULL
DECL|TICKER_STATUS_BUSY|macro|TICKER_STATUS_BUSY
DECL|TICKER_STATUS_FAILURE|macro|TICKER_STATUS_FAILURE
DECL|TICKER_STATUS_SUCCESS|macro|TICKER_STATUS_SUCCESS
DECL|TICKER_USER_OP_T_SIZE|macro|TICKER_USER_OP_T_SIZE
DECL|TICKER_USER_T_SIZE|macro|TICKER_USER_T_SIZE
DECL|ticker_caller_id_get_cb_t|typedef|typedef u8_t (*ticker_caller_id_get_cb_t)(u8_t user_id);
DECL|ticker_op_func|typedef|typedef void (*ticker_op_func) (u32_t status, void *op_context);
DECL|ticker_sched_cb_t|typedef|typedef void (*ticker_sched_cb_t)(u8_t caller_id, u8_t callee_id, u8_t chain,
DECL|ticker_timeout_func|typedef|typedef void (*ticker_timeout_func) (u32_t ticks_at_expire, u32_t remainder,
DECL|ticker_trigger_set_cb_t|typedef|typedef void (*ticker_trigger_set_cb_t)(u32_t value);
