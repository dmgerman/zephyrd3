DECL|CY_INT_IRQ_BASE|macro|CY_INT_IRQ_BASE
DECL|CY_SYSINT_BAD_PARAM|enumerator|CY_SYSINT_BAD_PARAM = CY_SYSINT_ID | CY_PDL_STATUS_ERROR | 0x01u, /**< Bad parameter was passed */
DECL|CY_SYSINT_CM0P_MUX0|macro|CY_SYSINT_CM0P_MUX0
DECL|CY_SYSINT_CM0P_MUX1|macro|CY_SYSINT_CM0P_MUX1
DECL|CY_SYSINT_CM0P_MUX2|macro|CY_SYSINT_CM0P_MUX2
DECL|CY_SYSINT_CM0P_MUX3|macro|CY_SYSINT_CM0P_MUX3
DECL|CY_SYSINT_CM0P_MUX4|macro|CY_SYSINT_CM0P_MUX4
DECL|CY_SYSINT_CM0P_MUX5|macro|CY_SYSINT_CM0P_MUX5
DECL|CY_SYSINT_CM0P_MUX6|macro|CY_SYSINT_CM0P_MUX6
DECL|CY_SYSINT_CM0P_MUX7|macro|CY_SYSINT_CM0P_MUX7
DECL|CY_SYSINT_CM0P_MUX_MASK|macro|CY_SYSINT_CM0P_MUX_MASK
DECL|CY_SYSINT_CM0P_MUX_SCALE|macro|CY_SYSINT_CM0P_MUX_SCALE
DECL|CY_SYSINT_CM0P_MUX_SHIFT|macro|CY_SYSINT_CM0P_MUX_SHIFT
DECL|CY_SYSINT_DISABLE|macro|CY_SYSINT_DISABLE
DECL|CY_SYSINT_DRV_VERSION_MAJOR|macro|CY_SYSINT_DRV_VERSION_MAJOR
DECL|CY_SYSINT_DRV_VERSION_MINOR|macro|CY_SYSINT_DRV_VERSION_MINOR
DECL|CY_SYSINT_ENABLE|macro|CY_SYSINT_ENABLE
DECL|CY_SYSINT_H|macro|CY_SYSINT_H
DECL|CY_SYSINT_ID|macro|CY_SYSINT_ID
DECL|CY_SYSINT_INT_STATUS_MSK|macro|CY_SYSINT_INT_STATUS_MSK
DECL|CY_SYSINT_IS_PRIORITY_VALID|macro|CY_SYSINT_IS_PRIORITY_VALID
DECL|CY_SYSINT_IS_VECTOR_VALID|macro|CY_SYSINT_IS_VECTOR_VALID
DECL|CY_SYSINT_MUX_REG_MSK|macro|CY_SYSINT_MUX_REG_MSK
DECL|CY_SYSINT_NMI1|enumerator|CY_SYSINT_NMI1 = 1, /**< NMI source input 1 */
DECL|CY_SYSINT_NMI2|enumerator|CY_SYSINT_NMI2 = 2, /**< NMI source input 2 */
DECL|CY_SYSINT_NMI3|enumerator|CY_SYSINT_NMI3 = 3, /**< NMI source input 3 */
DECL|CY_SYSINT_NMI4|enumerator|CY_SYSINT_NMI4 = 4, /**< NMI source input 4 */
DECL|CY_SYSINT_STATE_MASK|macro|CY_SYSINT_STATE_MASK
DECL|CY_SYSINT_STIR_MASK|macro|CY_SYSINT_STIR_MASK
DECL|CY_SYSINT_SUCCESS|enumerator|CY_SYSINT_SUCCESS = 0x00u, /**< Returned successful */
DECL|Cy_SysInt_GetIntSourceNMI|macro|Cy_SysInt_GetIntSourceNMI
DECL|Cy_SysInt_GetIntSource|macro|Cy_SysInt_GetIntSource
DECL|Cy_SysInt_GetNmiSource|function|__STATIC_INLINE IRQn_Type Cy_SysInt_GetNmiSource(cy_en_sysint_nmi_t nmiNum)
DECL|Cy_SysInt_GetState|macro|Cy_SysInt_GetState
DECL|Cy_SysInt_SetIntSourceNMI|macro|Cy_SysInt_SetIntSourceNMI
DECL|Cy_SysInt_SetIntSource|macro|Cy_SysInt_SetIntSource
DECL|Cy_SysInt_SetNmiSource|function|__STATIC_INLINE void Cy_SysInt_SetNmiSource(cy_en_sysint_nmi_t nmiNum, IRQn_Type intrSrc)
DECL|Cy_SysInt_SoftwareTrig|function|__STATIC_INLINE void Cy_SysInt_SoftwareTrig(IRQn_Type intrSrc)
DECL|cm0pSrc|member|cy_en_intr_t cm0pSrc; /**< Maps cm0pSrc device interrupt to intrSrc */
DECL|cy_en_sysint_nmi_t|typedef|} cy_en_sysint_nmi_t;
DECL|cy_en_sysint_status_t|typedef|} cy_en_sysint_status_t;
DECL|cy_stc_sysint_t|typedef|} cy_stc_sysint_t;
DECL|intrPriority|member|uint32_t intrPriority; /**< Interrupt priority number (Refer to __NVIC_PRIO_BITS) */
DECL|intrSrc|member|IRQn_Type intrSrc; /**< Interrupt source */
