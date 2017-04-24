DECL|OSA_PRIORITY_ABOVE_NORMAL|macro|OSA_PRIORITY_ABOVE_NORMAL
DECL|OSA_PRIORITY_BELOW_NORMAL|macro|OSA_PRIORITY_BELOW_NORMAL
DECL|OSA_PRIORITY_HIGH|macro|OSA_PRIORITY_HIGH
DECL|OSA_PRIORITY_IDLE|macro|OSA_PRIORITY_IDLE
DECL|OSA_PRIORITY_LOW|macro|OSA_PRIORITY_LOW
DECL|OSA_PRIORITY_NORMAL|macro|OSA_PRIORITY_NORMAL
DECL|OSA_PRIORITY_REAL_TIME|macro|OSA_PRIORITY_REAL_TIME
DECL|OSA_TASK_DEFINE|macro|OSA_TASK_DEFINE
DECL|OSA_TASK_DEFINE|macro|OSA_TASK_DEFINE
DECL|OSA_TASK_DEFINE|macro|OSA_TASK_DEFINE
DECL|OSA_TASK_DEFINE|macro|OSA_TASK_DEFINE
DECL|OSA_TASK_PRIORITY_MAX|macro|OSA_TASK_PRIORITY_MAX
DECL|OSA_TASK_PRIORITY_MIN|macro|OSA_TASK_PRIORITY_MIN
DECL|OSA_TASK_PROTO|macro|OSA_TASK_PROTO
DECL|OSA_TASK|macro|OSA_TASK
DECL|OSA_TIMER_DEF|macro|OSA_TIMER_DEF
DECL|OSA_TIMER|macro|OSA_TIMER
DECL|SIZE_IN_UINT32_UNITS|macro|SIZE_IN_UINT32_UNITS
DECL|USE_RTOS|macro|USE_RTOS
DECL|USE_RTOS|macro|USE_RTOS
DECL|USE_RTOS|macro|USE_RTOS
DECL|USE_RTOS|macro|USE_RTOS
DECL|USE_RTOS|macro|USE_RTOS
DECL|_FSL_OS_ABSTRACTION_H_|macro|_FSL_OS_ABSTRACTION_H_
DECL|argument|member|void *argument;
DECL|instances|member|uint32_t instances; /*!< maximum number of instances of that thread function*/
DECL|link|member|uint8_t link[12];
DECL|osThreadDefHandle|member|osaThreadDef_t *osThreadDefHandle;
DECL|osThreadId|member|osaTaskId_t osThreadId;
DECL|osThreadStackArray|macro|osThreadStackArray
DECL|osThreadStackDef|macro|osThreadStackDef
DECL|osThreadStackHandle|member|uint32_t *osThreadStackHandle;
DECL|osaEventFlagsAll_c|macro|osaEventFlagsAll_c
DECL|osaEventFlags_t|typedef|typedef uint32_t osaEventFlags_t;
DECL|osaEventId_t|typedef|typedef void* osaEventId_t;
DECL|osaMsgQId_t|typedef|typedef void* osaMsgQId_t;
DECL|osaMsg_t|typedef|typedef void* osaMsg_t;
DECL|osaMutexId_t|typedef|typedef void* osaMutexId_t;
DECL|osaSemaphoreId_t|typedef|typedef void* osaSemaphoreId_t;
DECL|osaStatus_Error|enumerator|osaStatus_Error = 1U, /*!< Failed */
DECL|osaStatus_Idle|enumerator|osaStatus_Idle = 3U /*!< Used for bare metal only, the wait object is not ready
DECL|osaStatus_Success|enumerator|osaStatus_Success = 0U, /*!< Success */
DECL|osaStatus_Timeout|enumerator|osaStatus_Timeout = 2U, /*!< Timeout occurs while waiting */
DECL|osaStatus_tag|enum|typedef enum osaStatus_tag
DECL|osaStatus_t|typedef|}osaStatus_t;
DECL|osaTaskId_t|typedef|typedef void* osaTaskId_t;
DECL|osaTaskParam_t|typedef|typedef void* osaTaskParam_t;
DECL|osaTaskPriority_t|typedef|typedef uint16_t osaTaskPriority_t;
DECL|osaTaskPtr_t|typedef|typedef void (*osaTaskPtr_t) (osaTaskParam_t task_param);
DECL|osaThreadDef_tag|struct|typedef struct osaThreadDef_tag {
DECL|osaThreadDef_t|typedef|} osaThreadDef_t;
DECL|osaThreadLinkHandle_t|typedef|}osaThreadLink_t, *osaThreadLinkHandle_t;
DECL|osaThreadLink_tag|struct|typedef struct osaThreadLink_tag{
DECL|osaThreadLink_t|typedef|}osaThreadLink_t, *osaThreadLinkHandle_t;
DECL|osaTimerDef_tag|struct|typedef struct osaTimerDef_tag {
DECL|osaTimerDef_t|typedef|} osaTimerDef_t;
DECL|osaTimerFctPtr_t|typedef|typedef void (*osaTimerFctPtr_t) (void const *argument);
DECL|osaTimerId_t|typedef|typedef void *osaTimerId_t;
DECL|osaTimer_Once|enumerator|osaTimer_Once = 0, /*!< one-shot timer*/
DECL|osaTimer_Periodic|enumerator|osaTimer_Periodic = 1 /*!< repeating timer*/
DECL|osaTimer_t|typedef|} osaTimer_t;
DECL|osaWaitForever_c|macro|osaWaitForever_c
DECL|pfCallback|member|osaTimerFctPtr_t pfCallback; /* < start address of a timer function */
DECL|pthread|member|osaTaskPtr_t pthread; /*!< start address of thread function*/
DECL|stacksize|member|uint32_t stacksize; /*!< stack size requirements in bytes; 0 is default stack size*/
DECL|tlink|member|void *tlink;
DECL|tname|member|uint8_t *tname;
DECL|tpriority|member|uint32_t tpriority; /*!< initial thread priority*/
DECL|tstack|member|uint32_t *tstack;
DECL|useFloat|member|bool_t useFloat;
