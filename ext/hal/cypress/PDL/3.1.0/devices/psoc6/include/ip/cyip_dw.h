DECL|ACT_DESCR_CTL|member|__IM uint32_t ACT_DESCR_CTL; /*!< 0x00000020 Active descriptor control */
DECL|ACT_DESCR_DST|member|__IM uint32_t ACT_DESCR_DST; /*!< 0x00000028 Active descriptor destination */
DECL|ACT_DESCR_NEXT_PTR|member|__IM uint32_t ACT_DESCR_NEXT_PTR; /*!< 0x00000038 Active descriptor next pointer */
DECL|ACT_DESCR_SRC|member|__IM uint32_t ACT_DESCR_SRC; /*!< 0x00000024 Active descriptor source */
DECL|ACT_DESCR_X_CTL|member|__IM uint32_t ACT_DESCR_X_CTL; /*!< 0x00000030 Active descriptor X loop control */
DECL|ACT_DESCR_Y_CTL|member|__IM uint32_t ACT_DESCR_Y_CTL; /*!< 0x00000034 Active descriptor Y loop control */
DECL|ACT_DST|member|__IM uint32_t ACT_DST; /*!< 0x00000044 Active destination */
DECL|ACT_SRC|member|__IM uint32_t ACT_SRC; /*!< 0x00000040 Active source */
DECL|CH_CTL|member|__IOM uint32_t CH_CTL; /*!< 0x00000000 Channel control */
DECL|CH_CURR_PTR|member|__IOM uint32_t CH_CURR_PTR; /*!< 0x0000000C Channel current descriptor pointer */
DECL|CH_IDX|member|__IOM uint32_t CH_IDX; /*!< 0x00000008 Channel current indices */
DECL|CH_STATUS|member|__IM uint32_t CH_STATUS; /*!< 0x00000004 Channel status */
DECL|CH_STRUCT|member|DW_CH_STRUCT_V1_Type CH_STRUCT[32]; /*!< 0x00000800 DW channel structure */
DECL|CTL|member|__IOM uint32_t CTL; /*!< 0x00000000 Control */
DECL|DW_ACT_DESCR_CTL_DATA_Msk|macro|DW_ACT_DESCR_CTL_DATA_Msk
DECL|DW_ACT_DESCR_CTL_DATA_Pos|macro|DW_ACT_DESCR_CTL_DATA_Pos
DECL|DW_ACT_DESCR_DST_DATA_Msk|macro|DW_ACT_DESCR_DST_DATA_Msk
DECL|DW_ACT_DESCR_DST_DATA_Pos|macro|DW_ACT_DESCR_DST_DATA_Pos
DECL|DW_ACT_DESCR_NEXT_PTR_ADDR_Msk|macro|DW_ACT_DESCR_NEXT_PTR_ADDR_Msk
DECL|DW_ACT_DESCR_NEXT_PTR_ADDR_Pos|macro|DW_ACT_DESCR_NEXT_PTR_ADDR_Pos
DECL|DW_ACT_DESCR_SRC_DATA_Msk|macro|DW_ACT_DESCR_SRC_DATA_Msk
DECL|DW_ACT_DESCR_SRC_DATA_Pos|macro|DW_ACT_DESCR_SRC_DATA_Pos
DECL|DW_ACT_DESCR_X_CTL_DATA_Msk|macro|DW_ACT_DESCR_X_CTL_DATA_Msk
DECL|DW_ACT_DESCR_X_CTL_DATA_Pos|macro|DW_ACT_DESCR_X_CTL_DATA_Pos
DECL|DW_ACT_DESCR_Y_CTL_DATA_Msk|macro|DW_ACT_DESCR_Y_CTL_DATA_Msk
DECL|DW_ACT_DESCR_Y_CTL_DATA_Pos|macro|DW_ACT_DESCR_Y_CTL_DATA_Pos
DECL|DW_ACT_DST_DST_ADDR_Msk|macro|DW_ACT_DST_DST_ADDR_Msk
DECL|DW_ACT_DST_DST_ADDR_Pos|macro|DW_ACT_DST_DST_ADDR_Pos
DECL|DW_ACT_SRC_SRC_ADDR_Msk|macro|DW_ACT_SRC_SRC_ADDR_Msk
DECL|DW_ACT_SRC_SRC_ADDR_Pos|macro|DW_ACT_SRC_SRC_ADDR_Pos
DECL|DW_CH_STRUCT_CH_CTL_B_Msk|macro|DW_CH_STRUCT_CH_CTL_B_Msk
DECL|DW_CH_STRUCT_CH_CTL_B_Pos|macro|DW_CH_STRUCT_CH_CTL_B_Pos
DECL|DW_CH_STRUCT_CH_CTL_ENABLED_Msk|macro|DW_CH_STRUCT_CH_CTL_ENABLED_Msk
DECL|DW_CH_STRUCT_CH_CTL_ENABLED_Pos|macro|DW_CH_STRUCT_CH_CTL_ENABLED_Pos
DECL|DW_CH_STRUCT_CH_CTL_NS_Msk|macro|DW_CH_STRUCT_CH_CTL_NS_Msk
DECL|DW_CH_STRUCT_CH_CTL_NS_Pos|macro|DW_CH_STRUCT_CH_CTL_NS_Pos
DECL|DW_CH_STRUCT_CH_CTL_PC_Msk|macro|DW_CH_STRUCT_CH_CTL_PC_Msk
DECL|DW_CH_STRUCT_CH_CTL_PC_Pos|macro|DW_CH_STRUCT_CH_CTL_PC_Pos
DECL|DW_CH_STRUCT_CH_CTL_PREEMPTABLE_Msk|macro|DW_CH_STRUCT_CH_CTL_PREEMPTABLE_Msk
DECL|DW_CH_STRUCT_CH_CTL_PREEMPTABLE_Pos|macro|DW_CH_STRUCT_CH_CTL_PREEMPTABLE_Pos
DECL|DW_CH_STRUCT_CH_CTL_PRIO_Msk|macro|DW_CH_STRUCT_CH_CTL_PRIO_Msk
DECL|DW_CH_STRUCT_CH_CTL_PRIO_Pos|macro|DW_CH_STRUCT_CH_CTL_PRIO_Pos
DECL|DW_CH_STRUCT_CH_CTL_P_Msk|macro|DW_CH_STRUCT_CH_CTL_P_Msk
DECL|DW_CH_STRUCT_CH_CTL_P_Pos|macro|DW_CH_STRUCT_CH_CTL_P_Pos
DECL|DW_CH_STRUCT_CH_CURR_PTR_ADDR_Msk|macro|DW_CH_STRUCT_CH_CURR_PTR_ADDR_Msk
DECL|DW_CH_STRUCT_CH_CURR_PTR_ADDR_Pos|macro|DW_CH_STRUCT_CH_CURR_PTR_ADDR_Pos
DECL|DW_CH_STRUCT_CH_IDX_X_IDX_Msk|macro|DW_CH_STRUCT_CH_IDX_X_IDX_Msk
DECL|DW_CH_STRUCT_CH_IDX_X_IDX_Pos|macro|DW_CH_STRUCT_CH_IDX_X_IDX_Pos
DECL|DW_CH_STRUCT_CH_IDX_Y_IDX_Msk|macro|DW_CH_STRUCT_CH_IDX_Y_IDX_Msk
DECL|DW_CH_STRUCT_CH_IDX_Y_IDX_Pos|macro|DW_CH_STRUCT_CH_IDX_Y_IDX_Pos
DECL|DW_CH_STRUCT_CH_STATUS_INTR_CAUSE_Msk|macro|DW_CH_STRUCT_CH_STATUS_INTR_CAUSE_Msk
DECL|DW_CH_STRUCT_CH_STATUS_INTR_CAUSE_Pos|macro|DW_CH_STRUCT_CH_STATUS_INTR_CAUSE_Pos
DECL|DW_CH_STRUCT_INTR_CH_Msk|macro|DW_CH_STRUCT_INTR_CH_Msk
DECL|DW_CH_STRUCT_INTR_CH_Pos|macro|DW_CH_STRUCT_INTR_CH_Pos
DECL|DW_CH_STRUCT_INTR_MASKED_CH_Msk|macro|DW_CH_STRUCT_INTR_MASKED_CH_Msk
DECL|DW_CH_STRUCT_INTR_MASKED_CH_Pos|macro|DW_CH_STRUCT_INTR_MASKED_CH_Pos
DECL|DW_CH_STRUCT_INTR_MASK_CH_Msk|macro|DW_CH_STRUCT_INTR_MASK_CH_Msk
DECL|DW_CH_STRUCT_INTR_MASK_CH_Pos|macro|DW_CH_STRUCT_INTR_MASK_CH_Pos
DECL|DW_CH_STRUCT_INTR_SET_CH_Msk|macro|DW_CH_STRUCT_INTR_SET_CH_Msk
DECL|DW_CH_STRUCT_INTR_SET_CH_Pos|macro|DW_CH_STRUCT_INTR_SET_CH_Pos
DECL|DW_CH_STRUCT_SECTION_SIZE|macro|DW_CH_STRUCT_SECTION_SIZE
DECL|DW_CH_STRUCT_V1_Type|typedef|} DW_CH_STRUCT_V1_Type; /*!< Size = 32 (0x20) */
DECL|DW_CTL_ENABLED_Msk|macro|DW_CTL_ENABLED_Msk
DECL|DW_CTL_ENABLED_Pos|macro|DW_CTL_ENABLED_Pos
DECL|DW_PENDING_CH_PENDING_Msk|macro|DW_PENDING_CH_PENDING_Msk
DECL|DW_PENDING_CH_PENDING_Pos|macro|DW_PENDING_CH_PENDING_Pos
DECL|DW_SECTION_SIZE|macro|DW_SECTION_SIZE
DECL|DW_STATUS_ACTIVE_Msk|macro|DW_STATUS_ACTIVE_Msk
DECL|DW_STATUS_ACTIVE_Pos|macro|DW_STATUS_ACTIVE_Pos
DECL|DW_STATUS_B_Msk|macro|DW_STATUS_B_Msk
DECL|DW_STATUS_B_Pos|macro|DW_STATUS_B_Pos
DECL|DW_STATUS_CH_IDX_Msk|macro|DW_STATUS_CH_IDX_Msk
DECL|DW_STATUS_CH_IDX_Pos|macro|DW_STATUS_CH_IDX_Pos
DECL|DW_STATUS_INTR_CH_Msk|macro|DW_STATUS_INTR_CH_Msk
DECL|DW_STATUS_INTR_CH_Pos|macro|DW_STATUS_INTR_CH_Pos
DECL|DW_STATUS_INTR_MASKED_CH_Msk|macro|DW_STATUS_INTR_MASKED_CH_Msk
DECL|DW_STATUS_INTR_MASKED_CH_Pos|macro|DW_STATUS_INTR_MASKED_CH_Pos
DECL|DW_STATUS_NS_Msk|macro|DW_STATUS_NS_Msk
DECL|DW_STATUS_NS_Pos|macro|DW_STATUS_NS_Pos
DECL|DW_STATUS_PC_Msk|macro|DW_STATUS_PC_Msk
DECL|DW_STATUS_PC_Pos|macro|DW_STATUS_PC_Pos
DECL|DW_STATUS_PREEMPTABLE_Msk|macro|DW_STATUS_PREEMPTABLE_Msk
DECL|DW_STATUS_PREEMPTABLE_Pos|macro|DW_STATUS_PREEMPTABLE_Pos
DECL|DW_STATUS_PRIO_Msk|macro|DW_STATUS_PRIO_Msk
DECL|DW_STATUS_PRIO_Pos|macro|DW_STATUS_PRIO_Pos
DECL|DW_STATUS_P_Msk|macro|DW_STATUS_P_Msk
DECL|DW_STATUS_P_Pos|macro|DW_STATUS_P_Pos
DECL|DW_STATUS_STATE_Msk|macro|DW_STATUS_STATE_Msk
DECL|DW_STATUS_STATE_Pos|macro|DW_STATUS_STATE_Pos
DECL|DW_V1_Type|typedef|} DW_V1_Type; /*!< Size = 3072 (0xC00) */
DECL|INTR_MASKED|member|__IM uint32_t INTR_MASKED; /*!< 0x0000001C Interrupt masked */
DECL|INTR_MASK|member|__IOM uint32_t INTR_MASK; /*!< 0x00000018 Interrupt mask */
DECL|INTR_SET|member|__IOM uint32_t INTR_SET; /*!< 0x00000014 Interrupt set */
DECL|INTR|member|__IOM uint32_t INTR; /*!< 0x00000010 Interrupt */
DECL|PENDING|member|__IM uint32_t PENDING; /*!< 0x00000008 Pending channels */
DECL|RESERVED1|member|__IM uint32_t RESERVED1[2];
DECL|RESERVED2|member|__IM uint32_t RESERVED2;
DECL|RESERVED3|member|__IM uint32_t RESERVED3;
DECL|RESERVED4|member|__IM uint32_t RESERVED4[494];
DECL|RESERVED|member|__IM uint32_t RESERVED;
DECL|STATUS_INTR_MASKED|member|__IM uint32_t STATUS_INTR_MASKED; /*!< 0x00000014 Status of interrupts masked */
DECL|STATUS_INTR|member|__IM uint32_t STATUS_INTR; /*!< 0x00000010 System interrupt control */
DECL|STATUS|member|__IM uint32_t STATUS; /*!< 0x00000004 Status */
DECL|_CYIP_DW_H_|macro|_CYIP_DW_H_