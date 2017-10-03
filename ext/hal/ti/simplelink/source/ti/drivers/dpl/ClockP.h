DECL|ClockP_FAILURE|enumerator|ClockP_FAILURE = -1
DECL|ClockP_FreqHz|struct|typedef struct ClockP_FreqHz {
DECL|ClockP_FreqHz|typedef|} ClockP_FreqHz;
DECL|ClockP_Fxn|typedef|typedef void (*ClockP_Fxn)(uintptr_t arg);
DECL|ClockP_Handle|typedef|typedef void *ClockP_Handle;
DECL|ClockP_OK|enumerator|ClockP_OK = 0,
DECL|ClockP_Params|struct|typedef struct ClockP_Params {
DECL|ClockP_Params|typedef|} ClockP_Params;
DECL|ClockP_STRUCT_SIZE|macro|ClockP_STRUCT_SIZE
DECL|ClockP_Status|enum|typedef enum ClockP_Status {
DECL|ClockP_Status|typedef|} ClockP_Status;
DECL|ClockP_Struct|typedef|} ClockP_Struct;
DECL|ClockP_Struct|union|typedef union ClockP_Struct {
DECL|ClockP_handle|macro|ClockP_handle
DECL|arg|member|uintptr_t arg; /*!< Argument passed into the clock function. */
DECL|data|member|char data[ClockP_STRUCT_SIZE];
DECL|dummy|member|uint32_t dummy; /*!< Align object */
DECL|hi|member|uint32_t hi; /*! most significant 32-bits of frequency */
DECL|lo|member|uint32_t lo; /*! least significant 32-bits of frequency */
DECL|period|member|uint32_t period; /*!< Period of clock object. */
DECL|startFlag|member|bool startFlag; /*!< Start immediately after instance is created. */
DECL|ti_dpl_ClockP__include|macro|ti_dpl_ClockP__include
