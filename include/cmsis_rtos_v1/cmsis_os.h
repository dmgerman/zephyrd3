DECL|_CMSIS_OS_H|macro|_CMSIS_OS_H
DECL|cm_thread|member|struct k_thread *cm_thread; ///< pointer to k_thread structure
DECL|def|member|} def; ///< event definition
DECL|dummy|member|uint32_t dummy; ///< dummy value.
DECL|dummy|member|uint32_t dummy; ///< dummy value.
DECL|instances|member|uint32_t instances; ///< maximum number of instances of that thread function
DECL|item_sz|member|uint32_t item_sz; ///< size of an item
DECL|item_sz|member|uint32_t item_sz; ///< size of an item
DECL|item_sz|member|uint32_t item_sz; ///< size of an item
DECL|mail_id|member|osMailQId mail_id; ///< mail id obtained by \ref osMailCreate
DECL|mbox|member|struct k_mbox *mbox;
DECL|message_id|member|osMessageQId message_id; ///< message id obtained by \ref osMessageCreate
DECL|msgq|member|struct k_msgq *msgq;
DECL|osCMSIS_KERNEL|macro|osCMSIS_KERNEL
DECL|osCMSIS|macro|osCMSIS
DECL|osErrorISRRecursive|enumerator|osErrorISRRecursive = 0x83, ///< function called multiple times from ISR with same object.
DECL|osErrorISR|enumerator|osErrorISR = 0x82, ///< not allowed in ISR context: the function cannot be called from interrupt service routines.
DECL|osErrorNoMemory|enumerator|osErrorNoMemory = 0x85, ///< system is out of memory: it was impossible to allocate or reserve memory for the operation.
DECL|osErrorOS|enumerator|osErrorOS = 0xFF, ///< unspecified RTOS error: run-time error but no other error message fits.
DECL|osErrorParameter|enumerator|osErrorParameter = 0x80, ///< parameter error: a mandatory parameter was missing or specified an incorrect object.
DECL|osErrorPriority|enumerator|osErrorPriority = 0x84, ///< system cannot determine priority or thread has illegal priority.
DECL|osErrorResource|enumerator|osErrorResource = 0x81, ///< resource not available: a specified resource was not available.
DECL|osErrorTimeoutResource|enumerator|osErrorTimeoutResource = 0xC1, ///< resource not available within given time: a specified resource was not available within the timeout period.
DECL|osErrorValue|enumerator|osErrorValue = 0x86, ///< value of a parameter is out of range.
DECL|osEventMail|enumerator|osEventMail = 0x20, ///< function completed; mail event occurred.
DECL|osEventMessage|enumerator|osEventMessage = 0x10, ///< function completed; message event occurred.
DECL|osEventSignal|enumerator|osEventSignal = 0x08, ///< function completed; signal event occurred.
DECL|osEventTimeout|enumerator|osEventTimeout = 0x40, ///< function completed; timeout occurred.
DECL|osEvent|typedef|} osEvent;
DECL|osFeature_MailQ|macro|osFeature_MailQ
DECL|osFeature_MainThread|macro|osFeature_MainThread
DECL|osFeature_MessageQ|macro|osFeature_MessageQ
DECL|osFeature_Pool|macro|osFeature_Pool
DECL|osFeature_Semaphore|macro|osFeature_Semaphore
DECL|osFeature_Signals|macro|osFeature_Signals
DECL|osFeature_SysTick|macro|osFeature_SysTick
DECL|osFeature_Wait|macro|osFeature_Wait
DECL|osKernelSysTickFrequency|macro|osKernelSysTickFrequency
DECL|osKernelSysTickMicroSec|macro|osKernelSysTickMicroSec
DECL|osKernelSystemId|macro|osKernelSystemId
DECL|osMailQDef_t|typedef|} osMailQDef_t;
DECL|osMailQDef|macro|osMailQDef
DECL|osMailQDef|macro|osMailQDef
DECL|osMailQId|typedef|typedef struct os_mailQ_cb *osMailQId;
DECL|osMailQ|macro|osMailQ
DECL|osMessageQDef_t|typedef|} osMessageQDef_t;
DECL|osMessageQDef|macro|osMessageQDef
DECL|osMessageQDef|macro|osMessageQDef
DECL|osMessageQId|typedef|typedef struct os_messageQ_cb *osMessageQId;
DECL|osMessageQ|macro|osMessageQ
DECL|osMutexDef_t|typedef|} osMutexDef_t;
DECL|osMutexDef|macro|osMutexDef
DECL|osMutexDef|macro|osMutexDef
DECL|osMutexId|typedef|typedef struct os_mutex_cb *osMutexId;
DECL|osMutex|macro|osMutex
DECL|osOK|enumerator|osOK = 0, ///< function completed; no error or event occurred.
DECL|osPoolDef_t|typedef|} osPoolDef_t;
DECL|osPoolDef|macro|osPoolDef
DECL|osPoolDef|macro|osPoolDef
DECL|osPoolId|typedef|typedef struct os_pool_cb *osPoolId;
DECL|osPool|macro|osPool
DECL|osPriorityAboveNormal|enumerator|osPriorityAboveNormal = +1, ///< priority: above normal
DECL|osPriorityBelowNormal|enumerator|osPriorityBelowNormal = -1, ///< priority: below normal
DECL|osPriorityError|enumerator|osPriorityError = 0x84 ///< system cannot determine priority or thread has illegal priority
DECL|osPriorityHigh|enumerator|osPriorityHigh = +2, ///< priority: high
DECL|osPriorityIdle|enumerator|osPriorityIdle = -3, ///< priority: idle (lowest)
DECL|osPriorityLow|enumerator|osPriorityLow = -2, ///< priority: low
DECL|osPriorityNormal|enumerator|osPriorityNormal = 0, ///< priority: normal (default)
DECL|osPriorityRealtime|enumerator|osPriorityRealtime = +3, ///< priority: realtime (highest)
DECL|osPriority|typedef|} osPriority;
DECL|osSemaphoreDef_t|typedef|} osSemaphoreDef_t;
DECL|osSemaphoreDef|macro|osSemaphoreDef
DECL|osSemaphoreDef|macro|osSemaphoreDef
DECL|osSemaphoreId|typedef|typedef struct os_semaphore_cb *osSemaphoreId;
DECL|osSemaphore|macro|osSemaphore
DECL|osStatus|typedef|} osStatus;
DECL|osThreadDef_t|typedef|} osThreadDef_t;
DECL|osThreadDef|macro|osThreadDef
DECL|osThreadDef|macro|osThreadDef
DECL|osThreadId|typedef|typedef struct os_thread_cb *osThreadId;
DECL|osThread|macro|osThread
DECL|osTimerDef_t|typedef|} osTimerDef_t;
DECL|osTimerDef|macro|osTimerDef
DECL|osTimerDef|macro|osTimerDef
DECL|osTimerId|typedef|typedef struct os_timer_cb *osTimerId;
DECL|osTimerOnce|enumerator|osTimerOnce = 0, ///< one-shot timer
DECL|osTimerPeriodic|enumerator|osTimerPeriodic = 1 ///< repeating timer
DECL|osTimer|macro|osTimer
DECL|osWaitForever|macro|osWaitForever
DECL|os_mailQ_def|struct|typedef struct os_mailQ_def {
DECL|os_messageQ_def|struct|typedef struct os_messageQ_def {
DECL|os_mutex_def|struct|typedef struct os_mutex_def {
DECL|os_pool_def|struct|typedef struct os_pool_def {
DECL|os_pthread|typedef|typedef void (*os_pthread) (void const *argument);
DECL|os_ptimer|typedef|typedef void (*os_ptimer) (void const *argument);
DECL|os_semaphore_def|struct|typedef struct os_semaphore_def {
DECL|os_status_reserved|enumerator|os_status_reserved = 0x7FFFFFFF ///< prevent from enum down-size compiler optimization.
DECL|os_thread_def|struct|typedef struct os_thread_def {
DECL|os_timer_def|struct|typedef struct os_timer_def {
DECL|os_timer_type|typedef|} os_timer_type;
DECL|poll_event|member|struct k_poll_event *poll_event;
DECL|poll_signal|member|struct k_poll_signal *poll_signal;
DECL|pool_sz|member|uint32_t pool_sz; ///< number of items (elements) in the pool
DECL|pool|member|void *pool; ///< memory array for mail
DECL|pool|member|void *pool; ///< memory array for messages
DECL|pool|member|void *pool; ///< pointer to memory for pool
DECL|pthread|member|os_pthread pthread; ///< start address of thread function
DECL|ptimer|member|os_ptimer ptimer; ///< start address of a timer function
DECL|p|member|void *p; ///< message or mail as void pointer
DECL|queue_sz|member|uint32_t queue_sz; ///< number of elements in the queue
DECL|queue_sz|member|uint32_t queue_sz; ///< number of elements in the queue
DECL|signal_results|member|int32_t signal_results;
DECL|signals|member|int32_t signals; ///< signal flags
DECL|stack_mem|member|void *stack_mem; ///< pointer to array of stack memory
DECL|stacksize|member|uint32_t stacksize; ///< stack size requirements in bytes; 0 is default stack size
DECL|status|member|osStatus status; ///< status code: event or error information
DECL|tpriority|member|osPriority tpriority; ///< initial thread priority
DECL|value|member|} value; ///< event value
DECL|v|member|uint32_t v; ///< message as 32-bit value
