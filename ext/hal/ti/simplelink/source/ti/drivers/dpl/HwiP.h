DECL|HwiP_FAILURE|enumerator|HwiP_FAILURE = -1
DECL|HwiP_Fxn|typedef|typedef void (*HwiP_Fxn)(uintptr_t arg);
DECL|HwiP_Handle|typedef|typedef void *HwiP_Handle;
DECL|HwiP_OK|enumerator|HwiP_OK = 0,
DECL|HwiP_Params|struct|typedef struct HwiP_Params {
DECL|HwiP_Params|typedef|} HwiP_Params;
DECL|HwiP_STRUCT_SIZE|macro|HwiP_STRUCT_SIZE
DECL|HwiP_Status|enum|typedef enum HwiP_Status {
DECL|HwiP_Status|typedef|} HwiP_Status;
DECL|HwiP_Struct|typedef|} HwiP_Struct;
DECL|HwiP_Struct|union|typedef union HwiP_Struct {
DECL|arg|member|uintptr_t arg; /*!< Argument passed into the Hwi function. */
DECL|data|member|char data[HwiP_STRUCT_SIZE];
DECL|dummy|member|uint32_t dummy; /*!< Align object */
DECL|enableInt|member|bool enableInt; /*!< Enable interrupt on creation. */
DECL|priority|member|uint32_t priority; /*!< Device specific priority. */
DECL|ti_dpl_HwiP__include|macro|ti_dpl_HwiP__include
