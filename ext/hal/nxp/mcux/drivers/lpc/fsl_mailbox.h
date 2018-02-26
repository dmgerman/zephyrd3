DECL|FSL_MAILBOX_DRIVER_VERSION|macro|FSL_MAILBOX_DRIVER_VERSION
DECL|MAILBOX_ClearValueBits|function|static inline void MAILBOX_ClearValueBits(MAILBOX_Type *base, mailbox_cpu_id_t cpu_id, uint32_t mboxClrBits)
DECL|MAILBOX_Deinit|function|static inline void MAILBOX_Deinit(MAILBOX_Type *base)
DECL|MAILBOX_GetMutex|function|static inline uint32_t MAILBOX_GetMutex(MAILBOX_Type *base)
DECL|MAILBOX_GetValue|function|static inline uint32_t MAILBOX_GetValue(MAILBOX_Type *base, mailbox_cpu_id_t cpu_id)
DECL|MAILBOX_Init|function|static inline void MAILBOX_Init(MAILBOX_Type *base)
DECL|MAILBOX_SetMutex|function|static inline void MAILBOX_SetMutex(MAILBOX_Type *base)
DECL|MAILBOX_SetValueBits|function|static inline void MAILBOX_SetValueBits(MAILBOX_Type *base, mailbox_cpu_id_t cpu_id, uint32_t mboxSetBits)
DECL|MAILBOX_SetValue|function|static inline void MAILBOX_SetValue(MAILBOX_Type *base, mailbox_cpu_id_t cpu_id, uint32_t mboxData)
DECL|_FSL_MAILBOX_H_|macro|_FSL_MAILBOX_H_
DECL|_mailbox_cpu_id|enum|typedef enum _mailbox_cpu_id
DECL|kMAILBOX_CM0Plus|enumerator|kMAILBOX_CM0Plus = 0,
DECL|kMAILBOX_CM4|enumerator|kMAILBOX_CM4
DECL|mailbox_cpu_id_t|typedef|} mailbox_cpu_id_t;
