DECL|SemaphoreP_FAILURE|enumerator|SemaphoreP_FAILURE = -1,
DECL|SemaphoreP_Handle|typedef|typedef void *SemaphoreP_Handle;
DECL|SemaphoreP_Mode_BINARY|enumerator|SemaphoreP_Mode_BINARY = 0x1
DECL|SemaphoreP_Mode_COUNTING|enumerator|SemaphoreP_Mode_COUNTING = 0x0,
DECL|SemaphoreP_Mode|enum|typedef enum SemaphoreP_Mode {
DECL|SemaphoreP_Mode|typedef|} SemaphoreP_Mode;
DECL|SemaphoreP_NO_WAIT|macro|SemaphoreP_NO_WAIT
DECL|SemaphoreP_OK|enumerator|SemaphoreP_OK = 0,
DECL|SemaphoreP_Params|struct|typedef struct SemaphoreP_Params {
DECL|SemaphoreP_Params|typedef|} SemaphoreP_Params;
DECL|SemaphoreP_STRUCT_SIZE|macro|SemaphoreP_STRUCT_SIZE
DECL|SemaphoreP_Status|enum|typedef enum SemaphoreP_Status {
DECL|SemaphoreP_Status|typedef|} SemaphoreP_Status;
DECL|SemaphoreP_Struct|typedef|} SemaphoreP_Struct;
DECL|SemaphoreP_Struct|union|typedef union SemaphoreP_Struct {
DECL|SemaphoreP_TIMEOUT|enumerator|SemaphoreP_TIMEOUT = -2
DECL|SemaphoreP_WAIT_FOREVER|macro|SemaphoreP_WAIT_FOREVER
DECL|callback|member|void (*callback)(void); /*!< Callback while pending for semaphore post */
DECL|data|member|char data[SemaphoreP_STRUCT_SIZE];
DECL|dummy|member|uint32_t dummy; /*!< Align object */
DECL|mode|member|SemaphoreP_Mode mode; /*!< Mode for the semaphore */
DECL|ti_dpl_SemaphoreP__include|macro|ti_dpl_SemaphoreP__include
