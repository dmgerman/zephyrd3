DECL|CY_IPC_CYPIPE_ENABLE|macro|CY_IPC_CYPIPE_ENABLE
DECL|CY_IPC_CYPIPE_ENABLE|macro|CY_IPC_CYPIPE_ENABLE
DECL|CY_IPC_PIPE_CFG_CHAN_Msk|macro|CY_IPC_PIPE_CFG_CHAN_Msk
DECL|CY_IPC_PIPE_CFG_CHAN_Pos|macro|CY_IPC_PIPE_CFG_CHAN_Pos
DECL|CY_IPC_PIPE_CFG_IMASK_Msk|macro|CY_IPC_PIPE_CFG_IMASK_Msk
DECL|CY_IPC_PIPE_CFG_IMASK_Pos|macro|CY_IPC_PIPE_CFG_IMASK_Pos
DECL|CY_IPC_PIPE_CFG_INTR_Msk|macro|CY_IPC_PIPE_CFG_INTR_Msk
DECL|CY_IPC_PIPE_CFG_INTR_Pos|macro|CY_IPC_PIPE_CFG_INTR_Pos
DECL|CY_IPC_PIPE_ENDPOINT_BUSY|macro|CY_IPC_PIPE_ENDPOINT_BUSY
DECL|CY_IPC_PIPE_ENDPOINT_NOTBUSY|macro|CY_IPC_PIPE_ENDPOINT_NOTBUSY
DECL|CY_IPC_PIPE_ERROR_BAD_CLIENT|enumerator|CY_IPC_PIPE_ERROR_BAD_CLIENT =(uint32_t)(CY_IPC_PIPE_ID_ERROR | 10ul) /**< Pipe API return for client out of range */
DECL|CY_IPC_PIPE_ERROR_BAD_CPU|enumerator|CY_IPC_PIPE_ERROR_BAD_CPU =(uint32_t)(CY_IPC_PIPE_ID_ERROR | 9ul), /**< Pipe API return for invalid CPU value */
DECL|CY_IPC_PIPE_ERROR_BAD_HANDLE|enumerator|CY_IPC_PIPE_ERROR_BAD_HANDLE =(uint32_t)(CY_IPC_PIPE_ID_ERROR | 4ul), /**< Pipe API return for bad pipe handle */
DECL|CY_IPC_PIPE_ERROR_BAD_ID|enumerator|CY_IPC_PIPE_ERROR_BAD_ID =(uint32_t)(CY_IPC_PIPE_ID_ERROR | 5ul), /**< Pipe API return for bad pipe ID */
DECL|CY_IPC_PIPE_ERROR_BAD_PRIORITY|enumerator|CY_IPC_PIPE_ERROR_BAD_PRIORITY =(uint32_t)(CY_IPC_PIPE_ID_ERROR | 3ul), /**< Pipe API return for bad priority parameter */
DECL|CY_IPC_PIPE_ERROR_DIR_ERROR|enumerator|CY_IPC_PIPE_ERROR_DIR_ERROR =(uint32_t)(CY_IPC_PIPE_ID_ERROR | 6ul), /**< Pipe API return for invalid direction (Not used at this time) */
DECL|CY_IPC_PIPE_ERROR_NO_INTR|enumerator|CY_IPC_PIPE_ERROR_NO_INTR =(uint32_t)(CY_IPC_PIPE_ID_ERROR | 2ul), /**< Pipe API return for no valid interrupt */
DECL|CY_IPC_PIPE_ERROR_NO_IPC|enumerator|CY_IPC_PIPE_ERROR_NO_IPC =(uint32_t)(CY_IPC_PIPE_ID_ERROR | 1ul), /**< Pipe API return for no valid IPC channel */
DECL|CY_IPC_PIPE_ERROR_NO_MESSAGE|enumerator|CY_IPC_PIPE_ERROR_NO_MESSAGE =(uint32_t)(CY_IPC_PIPE_ID_ERROR | 8ul), /**< Pipe API return for no message indicated */
DECL|CY_IPC_PIPE_ERROR_SEND_BUSY|enumerator|CY_IPC_PIPE_ERROR_SEND_BUSY =(uint32_t)(CY_IPC_PIPE_ID_ERROR | 7ul), /**< Pipe API return for pipe is currently busy */
DECL|CY_IPC_PIPE_H|macro|CY_IPC_PIPE_H
DECL|CY_IPC_PIPE_ID_ERROR|macro|CY_IPC_PIPE_ID_ERROR
DECL|CY_IPC_PIPE_ID_INFO|macro|CY_IPC_PIPE_ID_INFO
DECL|CY_IPC_PIPE_ID_WARNING|macro|CY_IPC_PIPE_ID_WARNING
DECL|CY_IPC_PIPE_MSG_CLIENT_Msk|macro|CY_IPC_PIPE_MSG_CLIENT_Msk
DECL|CY_IPC_PIPE_MSG_CLIENT_Pos|macro|CY_IPC_PIPE_MSG_CLIENT_Pos
DECL|CY_IPC_PIPE_MSG_RELEASE_Msk|macro|CY_IPC_PIPE_MSG_RELEASE_Msk
DECL|CY_IPC_PIPE_MSG_RELEASE_Pos|macro|CY_IPC_PIPE_MSG_RELEASE_Pos
DECL|CY_IPC_PIPE_MSG_USR_Msk|macro|CY_IPC_PIPE_MSG_USR_Msk
DECL|CY_IPC_PIPE_MSG_USR_Pos|macro|CY_IPC_PIPE_MSG_USR_Pos
DECL|CY_IPC_PIPE_RTN|macro|CY_IPC_PIPE_RTN
DECL|CY_IPC_PIPE_SUCCESS|enumerator|CY_IPC_PIPE_SUCCESS =(uint32_t)(0x00u), /**< Pipe API return for no error */
DECL|busy|member|uint32_t busy; /**< Endpoint busy flag. If sent no messages can be sent from this endpoint */
DECL|callbackArray|member|cy_ipc_pipe_callback_array_ptr_t callbackArray; /**< Pointer to array of callback functions, one for each Client */
DECL|clientCount|member|uint32_t clientCount; /**< Client count and size of MsgCallback array */
DECL|cy_en_ipc_pipe_status_t|typedef|} cy_en_ipc_pipe_status_t;
DECL|cy_ipc_pipe_callback_array_ptr_t|typedef|typedef cy_ipc_pipe_callback_ptr_t *cy_ipc_pipe_callback_array_ptr_t;
DECL|cy_ipc_pipe_callback_ptr_t|typedef|typedef void (* cy_ipc_pipe_callback_ptr_t)(uint32_t * msgPtr);
DECL|cy_ipc_pipe_relcallback_ptr_t|typedef|typedef void (* cy_ipc_pipe_relcallback_ptr_t)(void);
DECL|cy_stc_ipc_pipe_config_t|typedef|} cy_stc_ipc_pipe_config_t;
DECL|cy_stc_ipc_pipe_ep_config_t|typedef|} cy_stc_ipc_pipe_ep_config_t;
DECL|cy_stc_ipc_pipe_ep_t|typedef|} cy_stc_ipc_pipe_ep_t;
DECL|defaultReleaseCallbackPtr|member|cy_ipc_pipe_relcallback_ptr_t defaultReleaseCallbackPtr; /**< Pointer to default release callback function */
DECL|endpointClientsCount|member|uint32_t endpointClientsCount;
DECL|endpointsCallbacksArray|member|cy_ipc_pipe_callback_array_ptr_t endpointsCallbacksArray;
DECL|ep0ConfigData|member|cy_stc_ipc_pipe_ep_config_t ep0ConfigData;
DECL|ep1ConfigData|member|cy_stc_ipc_pipe_ep_config_t ep1ConfigData;
DECL|epAddress|member|uint32_t epAddress; /**< Index in the array of endpoint structure */
DECL|epConfig|member|uint32_t epConfig; /**< Configuration mask, contains IPC channel, IPC interrupt number,
DECL|intrChan|member|uint32_t intrChan; /**< IPC interrupt channel number used for this endpoint to receive interrupts */
DECL|ipcChan|member|uint32_t ipcChan; /**< IPC channel number used for this endpoint to receive messages */
DECL|ipcIntrPtr|member|IPC_INTR_STRUCT_Type *ipcIntrPtr; /**< Pointer to IPC interrupt, needed to clear the interrupt */
DECL|ipcNotifierMuxNumber|member|uint32_t ipcNotifierMuxNumber; /**< CM0+ interrupt multiplexer number */
DECL|ipcNotifierNumber|member|uint32_t ipcNotifierNumber; /**< Notifier */
DECL|ipcNotifierPriority|member|uint32_t ipcNotifierPriority; /**< Notifier Priority */
DECL|ipcPtr|member|IPC_STRUCT_Type *ipcPtr; /**< Pointer to receive IPC channel ( If ipcPtr == NULL, cannot receive ) */
DECL|pipeIntMask|member|uint32_t pipeIntMask; /**< Release/Notify interrupt mask that includes all endpoints on pipe */
DECL|pipeIntrSrc|member|IRQn_Type pipeIntrSrc; /**< Interrupt vector number that includes all endpoints on pipe */
DECL|releaseCallbackPtr|member|cy_ipc_pipe_relcallback_ptr_t releaseCallbackPtr; /**< Pointer to release callback function */
DECL|userPipeIsrHandler|member|cy_israddress userPipeIsrHandler;
