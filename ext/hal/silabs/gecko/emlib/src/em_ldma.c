DECL|LDMA_DeInit|function|void LDMA_DeInit(void)
DECL|LDMA_EnableChannelRequest|function|void LDMA_EnableChannelRequest(int ch, bool enable)
DECL|LDMA_IRQHandler|function|void LDMA_IRQHandler(void)
DECL|LDMA_Init|function|void LDMA_Init(const LDMA_Init_t *init)
DECL|LDMA_StartTransfer|function|void LDMA_StartTransfer(int ch, const LDMA_TransferCfg_t *transfer, const LDMA_Descriptor_t *descriptor)
DECL|LDMA_StopTransfer|function|void LDMA_StopTransfer(int ch)
DECL|LDMA_TransferDone|function|bool LDMA_TransferDone(int ch)
DECL|LDMA_TransferRemainingCount|function|uint32_t LDMA_TransferRemainingCount(int ch)
