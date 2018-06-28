DECL|CY_IPC_DRV_ERROR|enumerator|CY_IPC_DRV_ERROR = ( CY_IPC_ID_ERROR + 1ul),
DECL|CY_IPC_DRV_H|macro|CY_IPC_DRV_H
DECL|CY_IPC_DRV_SUCCESS|enumerator|CY_IPC_DRV_SUCCESS = (0x00u),
DECL|CY_IPC_DRV_VERSION_MAJOR|macro|CY_IPC_DRV_VERSION_MAJOR
DECL|CY_IPC_DRV_VERSION_MINOR|macro|CY_IPC_DRV_VERSION_MINOR
DECL|CY_IPC_ID_ERROR|macro|CY_IPC_ID_ERROR
DECL|CY_IPC_ID_INFO|macro|CY_IPC_ID_INFO
DECL|CY_IPC_ID_WARNING|macro|CY_IPC_ID_WARNING
DECL|CY_IPC_ID|macro|CY_IPC_ID
DECL|CY_IPC_INTR_NUM_TO_VECT|macro|CY_IPC_INTR_NUM_TO_VECT
DECL|CY_IPC_NO_NOTIFICATION|macro|CY_IPC_NO_NOTIFICATION
DECL|Cy_IPC_Drv_AcquireNotify|function|__STATIC_INLINE void Cy_IPC_Drv_AcquireNotify (IPC_STRUCT_Type* base, uint32_t notifyEventIntr)
DECL|Cy_IPC_Drv_ClearInterrupt|function|__STATIC_INLINE void Cy_IPC_Drv_ClearInterrupt(IPC_INTR_STRUCT_Type* base, uint32_t ipcReleaseMask, uint32_t ipcAcquireMask)
DECL|Cy_IPC_Drv_ExtractAcquireMask|function|__STATIC_INLINE uint32_t Cy_IPC_Drv_ExtractAcquireMask (uint32_t intMask)
DECL|Cy_IPC_Drv_ExtractReleaseMask|function|__STATIC_INLINE uint32_t Cy_IPC_Drv_ExtractReleaseMask (uint32_t intMask)
DECL|Cy_IPC_Drv_GetInterruptMask|function|__STATIC_INLINE uint32_t Cy_IPC_Drv_GetInterruptMask(IPC_INTR_STRUCT_Type const * base)
DECL|Cy_IPC_Drv_GetInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_IPC_Drv_GetInterruptStatusMasked (IPC_INTR_STRUCT_Type const * base)
DECL|Cy_IPC_Drv_GetInterruptStatus|function|__STATIC_INLINE uint32_t Cy_IPC_Drv_GetInterruptStatus(IPC_INTR_STRUCT_Type const * base)
DECL|Cy_IPC_Drv_GetIntrBaseAddr|function|__STATIC_INLINE IPC_INTR_STRUCT_Type* Cy_IPC_Drv_GetIntrBaseAddr (uint32_t ipcIntrIndex)
DECL|Cy_IPC_Drv_GetIpcBaseAddress|function|__STATIC_INLINE IPC_STRUCT_Type* Cy_IPC_Drv_GetIpcBaseAddress (uint32_t ipcIndex)
DECL|Cy_IPC_Drv_GetLockStatus|function|__STATIC_INLINE uint32_t Cy_IPC_Drv_GetLockStatus (IPC_STRUCT_Type const * base)
DECL|Cy_IPC_Drv_IsLockAcquired|function|__STATIC_INLINE bool Cy_IPC_Drv_IsLockAcquired (IPC_STRUCT_Type const * base)
DECL|Cy_IPC_Drv_LockAcquire|function|__STATIC_INLINE cy_en_ipcdrv_status_t Cy_IPC_Drv_LockAcquire (IPC_STRUCT_Type const * base)
DECL|Cy_IPC_Drv_ReadDataValue|function|__STATIC_INLINE uint32_t Cy_IPC_Drv_ReadDataValue (IPC_STRUCT_Type const * base)
DECL|Cy_IPC_Drv_ReadMsgPtr|function|__STATIC_INLINE cy_en_ipcdrv_status_t Cy_IPC_Drv_ReadMsgPtr (IPC_STRUCT_Type const * base, void ** msgPtr)
DECL|Cy_IPC_Drv_ReleaseNotify|function|__STATIC_INLINE void Cy_IPC_Drv_ReleaseNotify (IPC_STRUCT_Type* base, uint32_t notifyEventIntr)
DECL|Cy_IPC_Drv_SendMsgPtr|function|__STATIC_INLINE cy_en_ipcdrv_status_t Cy_IPC_Drv_SendMsgPtr(IPC_STRUCT_Type* base, uint32_t notifyEventIntr, void const * msgPtr)
DECL|Cy_IPC_Drv_SetInterruptMask|function|__STATIC_INLINE void Cy_IPC_Drv_SetInterruptMask (IPC_INTR_STRUCT_Type* base, uint32_t ipcReleaseMask, uint32_t ipcAcquireMask)
DECL|Cy_IPC_Drv_SetInterrupt|function|__STATIC_INLINE void Cy_IPC_Drv_SetInterrupt(IPC_INTR_STRUCT_Type* base, uint32_t ipcReleaseMask, uint32_t ipcAcquireMask)
DECL|Cy_IPC_Drv_WriteDataValue|function|__STATIC_INLINE void Cy_IPC_Drv_WriteDataValue (IPC_STRUCT_Type* base, uint32_t dataValue)
DECL|cy_en_ipcdrv_status_t|typedef|} cy_en_ipcdrv_status_t;
