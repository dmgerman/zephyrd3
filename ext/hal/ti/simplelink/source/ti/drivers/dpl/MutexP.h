DECL|MutexP_FAILURE|enumerator|MutexP_FAILURE = -1
DECL|MutexP_Handle|typedef|typedef void *MutexP_Handle;
DECL|MutexP_OK|enumerator|MutexP_OK = 0,
DECL|MutexP_Params|struct|typedef struct MutexP_Params {
DECL|MutexP_Params|typedef|} MutexP_Params;
DECL|MutexP_STRUCT_SIZE|macro|MutexP_STRUCT_SIZE
DECL|MutexP_Status|enum|typedef enum MutexP_Status {
DECL|MutexP_Status|typedef|} MutexP_Status;
DECL|MutexP_Struct|typedef|} MutexP_Struct;
DECL|MutexP_Struct|union|typedef union MutexP_Struct {
DECL|callback|member|void (*callback)(void); /*!< Callback while waiting for mutex unlock */
DECL|data|member|char data[MutexP_STRUCT_SIZE];
DECL|dummy|member|uint32_t dummy; /*!< Align object */
DECL|ti_dpl_MutexP__include|macro|ti_dpl_MutexP__include
