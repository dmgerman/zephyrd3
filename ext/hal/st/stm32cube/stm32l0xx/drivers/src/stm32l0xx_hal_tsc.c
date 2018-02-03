DECL|HAL_TSC_ConvCpltCallback|function|__weak void HAL_TSC_ConvCpltCallback(TSC_HandleTypeDef* htsc)
DECL|HAL_TSC_DeInit|function|HAL_StatusTypeDef HAL_TSC_DeInit(TSC_HandleTypeDef* htsc)
DECL|HAL_TSC_ErrorCallback|function|__weak void HAL_TSC_ErrorCallback(TSC_HandleTypeDef* htsc)
DECL|HAL_TSC_GetState|function|HAL_TSC_StateTypeDef HAL_TSC_GetState(TSC_HandleTypeDef* htsc)
DECL|HAL_TSC_GroupGetStatus|function|TSC_GroupStatusTypeDef HAL_TSC_GroupGetStatus(TSC_HandleTypeDef* htsc, uint32_t gx_index)
DECL|HAL_TSC_GroupGetValue|function|uint32_t HAL_TSC_GroupGetValue(TSC_HandleTypeDef* htsc, uint32_t gx_index)
DECL|HAL_TSC_IOConfig|function|HAL_StatusTypeDef HAL_TSC_IOConfig(TSC_HandleTypeDef* htsc, TSC_IOConfigTypeDef* config)
DECL|HAL_TSC_IODischarge|function|HAL_StatusTypeDef HAL_TSC_IODischarge(TSC_HandleTypeDef* htsc, uint32_t choice)
DECL|HAL_TSC_IRQHandler|function|void HAL_TSC_IRQHandler(TSC_HandleTypeDef* htsc)
DECL|HAL_TSC_Init|function|HAL_StatusTypeDef HAL_TSC_Init(TSC_HandleTypeDef* htsc)
DECL|HAL_TSC_MspDeInit|function|__weak void HAL_TSC_MspDeInit(TSC_HandleTypeDef* htsc)
DECL|HAL_TSC_MspInit|function|__weak void HAL_TSC_MspInit(TSC_HandleTypeDef* htsc)
DECL|HAL_TSC_PollForAcquisition|function|HAL_StatusTypeDef HAL_TSC_PollForAcquisition(TSC_HandleTypeDef* htsc)
DECL|HAL_TSC_Start_IT|function|HAL_StatusTypeDef HAL_TSC_Start_IT(TSC_HandleTypeDef* htsc)
DECL|HAL_TSC_Start|function|HAL_StatusTypeDef HAL_TSC_Start(TSC_HandleTypeDef* htsc)
DECL|HAL_TSC_Stop_IT|function|HAL_StatusTypeDef HAL_TSC_Stop_IT(TSC_HandleTypeDef* htsc)
DECL|HAL_TSC_Stop|function|HAL_StatusTypeDef HAL_TSC_Stop(TSC_HandleTypeDef* htsc)
DECL|TSC_extract_groups|function|static uint32_t TSC_extract_groups(uint32_t iomask)