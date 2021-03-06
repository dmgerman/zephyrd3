DECL|Cy_IPC_Pipe_Config|function|void Cy_IPC_Pipe_Config(cy_stc_ipc_pipe_ep_t * theEpArray)
DECL|Cy_IPC_Pipe_EndpointInit|function|void Cy_IPC_Pipe_EndpointInit(uint32_t epAddr, cy_ipc_pipe_callback_array_ptr_t cbArray, uint32_t cbCnt, uint32_t epConfig, cy_stc_sysint_t const *epInterrupt)
DECL|Cy_IPC_Pipe_EndpointPause|function|cy_en_ipc_pipe_status_t Cy_IPC_Pipe_EndpointPause(uint32_t epAddr)
DECL|Cy_IPC_Pipe_EndpointResume|function|cy_en_ipc_pipe_status_t Cy_IPC_Pipe_EndpointResume(uint32_t epAddr)
DECL|Cy_IPC_Pipe_ExecCallback|function|void Cy_IPC_Pipe_ExecCallback(cy_stc_ipc_pipe_ep_t * endpoint)
DECL|Cy_IPC_Pipe_ExecuteCallback|function|void Cy_IPC_Pipe_ExecuteCallback(uint32_t epAddr)
DECL|Cy_IPC_Pipe_Init|function|void Cy_IPC_Pipe_Init(cy_stc_ipc_pipe_config_t const *config)
DECL|Cy_IPC_Pipe_RegisterCallbackRel|function|void Cy_IPC_Pipe_RegisterCallbackRel(uint32_t epAddr, cy_ipc_pipe_relcallback_ptr_t callBackPtr)
DECL|Cy_IPC_Pipe_RegisterCallback|function|cy_en_ipc_pipe_status_t Cy_IPC_Pipe_RegisterCallback(uint32_t epAddr, cy_ipc_pipe_callback_ptr_t callBackPtr, uint32_t clientId)
DECL|Cy_IPC_Pipe_SendMessage|function|cy_en_ipc_pipe_status_t Cy_IPC_Pipe_SendMessage(uint32_t toAddr, uint32_t fromAddr, void * msgPtr, cy_ipc_pipe_relcallback_ptr_t callBackPtr)
DECL|cy_ipc_pipe_epArray|variable|cy_ipc_pipe_epArray
