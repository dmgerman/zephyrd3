DECL|SwiP_FAILURE|enumerator|SwiP_FAILURE = -1
DECL|SwiP_Fxn|typedef|typedef void (*SwiP_Fxn)(uintptr_t arg0, uintptr_t arg1);
DECL|SwiP_Handle|typedef|typedef void *SwiP_Handle;
DECL|SwiP_OK|enumerator|SwiP_OK = 0,
DECL|SwiP_Params|struct|typedef struct SwiP_Params {
DECL|SwiP_Params|typedef|} SwiP_Params;
DECL|SwiP_STRUCT_SIZE|macro|SwiP_STRUCT_SIZE
DECL|SwiP_Status|enum|typedef enum SwiP_Status {
DECL|SwiP_Status|typedef|} SwiP_Status;
DECL|SwiP_Struct|typedef|} SwiP_Struct;
DECL|SwiP_Struct|union|typedef union SwiP_Struct {
DECL|arg0|member|uintptr_t arg0; /*!< Argument passed into the SwiP function. */
DECL|arg1|member|uintptr_t arg1; /*!< Argument passed into the SwiP function. */
DECL|data|member|char data[SwiP_STRUCT_SIZE];
DECL|dummy|member|uint32_t dummy; /*!< Align object */
DECL|priority|member|uint32_t priority; /*!< priority, 0 is min, 1, 2, ..., ~0 for max */
DECL|ti_dpl_SwiP__include|macro|ti_dpl_SwiP__include
DECL|trigger|member|uint32_t trigger; /*!< Initial SwiP trigger value. */
