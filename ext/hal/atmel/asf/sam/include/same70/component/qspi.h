DECL|ADDREN|member|uint32_t ADDREN:1; /**< bit: 5 Address Enable */
DECL|ADDRL|member|uint32_t ADDRL:1; /**< bit: 10 Address Length */
DECL|ADDR|member|uint32_t ADDR:32; /**< bit: 0..31 Address */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|CPHA|member|uint32_t CPHA:1; /**< bit: 1 Clock Phase */
DECL|CPOL|member|uint32_t CPOL:1; /**< bit: 0 Clock Polarity */
DECL|CRM|member|uint32_t CRM:1; /**< bit: 14 Continuous Read Mode */
DECL|CSMODE|member|uint32_t CSMODE:2; /**< bit: 4..5 Chip Select Mode */
DECL|CSR|member|uint32_t CSR:1; /**< bit: 8 Chip Select Rise */
DECL|CSR|member|uint32_t CSR:1; /**< bit: 8 Chip Select Rise Interrupt Disable */
DECL|CSR|member|uint32_t CSR:1; /**< bit: 8 Chip Select Rise Interrupt Enable */
DECL|CSR|member|uint32_t CSR:1; /**< bit: 8 Chip Select Rise Interrupt Mask */
DECL|CSS|member|uint32_t CSS:1; /**< bit: 9 Chip Select Status */
DECL|CSS|member|uint32_t CSS:1; /**< bit: 9 Chip Select Status Interrupt Disable */
DECL|CSS|member|uint32_t CSS:1; /**< bit: 9 Chip Select Status Interrupt Enable */
DECL|CSS|member|uint32_t CSS:1; /**< bit: 9 Chip Select Status Interrupt Mask */
DECL|DATAEN|member|uint32_t DATAEN:1; /**< bit: 7 Data Enable */
DECL|DLYBCT|member|uint32_t DLYBCT:8; /**< bit: 16..23 Delay Between Consecutive Transfers */
DECL|DLYBS|member|uint32_t DLYBS:8; /**< bit: 16..23 Delay Before QSCK */
DECL|DLYCS|member|uint32_t DLYCS:8; /**< bit: 24..31 Minimum Inactive QCS Delay */
DECL|INSTEN|member|uint32_t INSTEN:1; /**< bit: 4 Instruction Enable */
DECL|INSTRE|member|uint32_t INSTRE:1; /**< bit: 10 Instruction End Interrupt Disable */
DECL|INSTRE|member|uint32_t INSTRE:1; /**< bit: 10 Instruction End Interrupt Enable */
DECL|INSTRE|member|uint32_t INSTRE:1; /**< bit: 10 Instruction End Interrupt Mask */
DECL|INSTRE|member|uint32_t INSTRE:1; /**< bit: 10 Instruction End Status */
DECL|INST|member|uint32_t INST:8; /**< bit: 0..7 Instruction Code */
DECL|LASTXFER|member|uint32_t LASTXFER:1; /**< bit: 24 Last Transfer */
DECL|LLB|member|uint32_t LLB:1; /**< bit: 1 Local Loopback Enable */
DECL|NBBITS|member|uint32_t NBBITS:4; /**< bit: 8..11 Number Of Bits Per Transfer */
DECL|NBDUM|member|uint32_t NBDUM:5; /**< bit: 16..20 Number Of Dummy Cycles */
DECL|OPTEN|member|uint32_t OPTEN:1; /**< bit: 6 Option Enable */
DECL|OPTL|member|uint32_t OPTL:2; /**< bit: 8..9 Option Code Length */
DECL|OPT|member|uint32_t OPT:8; /**< bit: 16..23 Option Code */
DECL|OVRES|member|uint32_t OVRES:1; /**< bit: 3 Overrun Error Interrupt Disable */
DECL|OVRES|member|uint32_t OVRES:1; /**< bit: 3 Overrun Error Interrupt Enable */
DECL|OVRES|member|uint32_t OVRES:1; /**< bit: 3 Overrun Error Interrupt Mask */
DECL|OVRES|member|uint32_t OVRES:1; /**< bit: 3 Overrun Error Status */
DECL|QSPIDIS|member|uint32_t QSPIDIS:1; /**< bit: 1 QSPI Disable */
DECL|QSPIENS|member|uint32_t QSPIENS:1; /**< bit: 24 QSPI Enable Status */
DECL|QSPIEN|member|uint32_t QSPIEN:1; /**< bit: 0 QSPI Enable */
DECL|QSPI_11171|macro|QSPI_11171
DECL|QSPI_CR_LASTXFER_Msk|macro|QSPI_CR_LASTXFER_Msk
DECL|QSPI_CR_LASTXFER_Pos|macro|QSPI_CR_LASTXFER_Pos
DECL|QSPI_CR_LASTXFER|macro|QSPI_CR_LASTXFER
DECL|QSPI_CR_MASK|macro|QSPI_CR_MASK
DECL|QSPI_CR_Msk|macro|QSPI_CR_Msk
DECL|QSPI_CR_OFFSET|macro|QSPI_CR_OFFSET
DECL|QSPI_CR_QSPIDIS_Msk|macro|QSPI_CR_QSPIDIS_Msk
DECL|QSPI_CR_QSPIDIS_Pos|macro|QSPI_CR_QSPIDIS_Pos
DECL|QSPI_CR_QSPIDIS|macro|QSPI_CR_QSPIDIS
DECL|QSPI_CR_QSPIEN_Msk|macro|QSPI_CR_QSPIEN_Msk
DECL|QSPI_CR_QSPIEN_Pos|macro|QSPI_CR_QSPIEN_Pos
DECL|QSPI_CR_QSPIEN|macro|QSPI_CR_QSPIEN
DECL|QSPI_CR_SWRST_Msk|macro|QSPI_CR_SWRST_Msk
DECL|QSPI_CR_SWRST_Pos|macro|QSPI_CR_SWRST_Pos
DECL|QSPI_CR_SWRST|macro|QSPI_CR_SWRST
DECL|QSPI_CR_Type|typedef|} QSPI_CR_Type;
DECL|QSPI_CR|member|__O QSPI_CR_Type QSPI_CR; /**< Offset: 0x00 ( /W 32) Control Register */
DECL|QSPI_CR|member|__O uint32_t QSPI_CR; /**< (QSPI Offset: 0x00) Control Register */
DECL|QSPI_IAR_ADDR_Msk|macro|QSPI_IAR_ADDR_Msk
DECL|QSPI_IAR_ADDR_Pos|macro|QSPI_IAR_ADDR_Pos
DECL|QSPI_IAR_ADDR|macro|QSPI_IAR_ADDR
DECL|QSPI_IAR_MASK|macro|QSPI_IAR_MASK
DECL|QSPI_IAR_Msk|macro|QSPI_IAR_Msk
DECL|QSPI_IAR_OFFSET|macro|QSPI_IAR_OFFSET
DECL|QSPI_IAR_Type|typedef|} QSPI_IAR_Type;
DECL|QSPI_IAR|member|__IO QSPI_IAR_Type QSPI_IAR; /**< Offset: 0x30 (R/W 32) Instruction Address Register */
DECL|QSPI_IAR|member|__IO uint32_t QSPI_IAR; /**< (QSPI Offset: 0x30) Instruction Address Register */
DECL|QSPI_ICR_INST_Msk|macro|QSPI_ICR_INST_Msk
DECL|QSPI_ICR_INST_Pos|macro|QSPI_ICR_INST_Pos
DECL|QSPI_ICR_INST|macro|QSPI_ICR_INST
DECL|QSPI_ICR_MASK|macro|QSPI_ICR_MASK
DECL|QSPI_ICR_Msk|macro|QSPI_ICR_Msk
DECL|QSPI_ICR_OFFSET|macro|QSPI_ICR_OFFSET
DECL|QSPI_ICR_OPT_Msk|macro|QSPI_ICR_OPT_Msk
DECL|QSPI_ICR_OPT_Pos|macro|QSPI_ICR_OPT_Pos
DECL|QSPI_ICR_OPT|macro|QSPI_ICR_OPT
DECL|QSPI_ICR_Type|typedef|} QSPI_ICR_Type;
DECL|QSPI_ICR|member|__IO QSPI_ICR_Type QSPI_ICR; /**< Offset: 0x34 (R/W 32) Instruction Code Register */
DECL|QSPI_ICR|member|__IO uint32_t QSPI_ICR; /**< (QSPI Offset: 0x34) Instruction Code Register */
DECL|QSPI_IDR_CSR_Msk|macro|QSPI_IDR_CSR_Msk
DECL|QSPI_IDR_CSR_Pos|macro|QSPI_IDR_CSR_Pos
DECL|QSPI_IDR_CSR|macro|QSPI_IDR_CSR
DECL|QSPI_IDR_CSS_Msk|macro|QSPI_IDR_CSS_Msk
DECL|QSPI_IDR_CSS_Pos|macro|QSPI_IDR_CSS_Pos
DECL|QSPI_IDR_CSS|macro|QSPI_IDR_CSS
DECL|QSPI_IDR_INSTRE_Msk|macro|QSPI_IDR_INSTRE_Msk
DECL|QSPI_IDR_INSTRE_Pos|macro|QSPI_IDR_INSTRE_Pos
DECL|QSPI_IDR_INSTRE|macro|QSPI_IDR_INSTRE
DECL|QSPI_IDR_MASK|macro|QSPI_IDR_MASK
DECL|QSPI_IDR_Msk|macro|QSPI_IDR_Msk
DECL|QSPI_IDR_OFFSET|macro|QSPI_IDR_OFFSET
DECL|QSPI_IDR_OVRES_Msk|macro|QSPI_IDR_OVRES_Msk
DECL|QSPI_IDR_OVRES_Pos|macro|QSPI_IDR_OVRES_Pos
DECL|QSPI_IDR_OVRES|macro|QSPI_IDR_OVRES
DECL|QSPI_IDR_RDRF_Msk|macro|QSPI_IDR_RDRF_Msk
DECL|QSPI_IDR_RDRF_Pos|macro|QSPI_IDR_RDRF_Pos
DECL|QSPI_IDR_RDRF|macro|QSPI_IDR_RDRF
DECL|QSPI_IDR_TDRE_Msk|macro|QSPI_IDR_TDRE_Msk
DECL|QSPI_IDR_TDRE_Pos|macro|QSPI_IDR_TDRE_Pos
DECL|QSPI_IDR_TDRE|macro|QSPI_IDR_TDRE
DECL|QSPI_IDR_TXEMPTY_Msk|macro|QSPI_IDR_TXEMPTY_Msk
DECL|QSPI_IDR_TXEMPTY_Pos|macro|QSPI_IDR_TXEMPTY_Pos
DECL|QSPI_IDR_TXEMPTY|macro|QSPI_IDR_TXEMPTY
DECL|QSPI_IDR_Type|typedef|} QSPI_IDR_Type;
DECL|QSPI_IDR|member|__O QSPI_IDR_Type QSPI_IDR; /**< Offset: 0x18 ( /W 32) Interrupt Disable Register */
DECL|QSPI_IDR|member|__O uint32_t QSPI_IDR; /**< (QSPI Offset: 0x18) Interrupt Disable Register */
DECL|QSPI_IER_CSR_Msk|macro|QSPI_IER_CSR_Msk
DECL|QSPI_IER_CSR_Pos|macro|QSPI_IER_CSR_Pos
DECL|QSPI_IER_CSR|macro|QSPI_IER_CSR
DECL|QSPI_IER_CSS_Msk|macro|QSPI_IER_CSS_Msk
DECL|QSPI_IER_CSS_Pos|macro|QSPI_IER_CSS_Pos
DECL|QSPI_IER_CSS|macro|QSPI_IER_CSS
DECL|QSPI_IER_INSTRE_Msk|macro|QSPI_IER_INSTRE_Msk
DECL|QSPI_IER_INSTRE_Pos|macro|QSPI_IER_INSTRE_Pos
DECL|QSPI_IER_INSTRE|macro|QSPI_IER_INSTRE
DECL|QSPI_IER_MASK|macro|QSPI_IER_MASK
DECL|QSPI_IER_Msk|macro|QSPI_IER_Msk
DECL|QSPI_IER_OFFSET|macro|QSPI_IER_OFFSET
DECL|QSPI_IER_OVRES_Msk|macro|QSPI_IER_OVRES_Msk
DECL|QSPI_IER_OVRES_Pos|macro|QSPI_IER_OVRES_Pos
DECL|QSPI_IER_OVRES|macro|QSPI_IER_OVRES
DECL|QSPI_IER_RDRF_Msk|macro|QSPI_IER_RDRF_Msk
DECL|QSPI_IER_RDRF_Pos|macro|QSPI_IER_RDRF_Pos
DECL|QSPI_IER_RDRF|macro|QSPI_IER_RDRF
DECL|QSPI_IER_TDRE_Msk|macro|QSPI_IER_TDRE_Msk
DECL|QSPI_IER_TDRE_Pos|macro|QSPI_IER_TDRE_Pos
DECL|QSPI_IER_TDRE|macro|QSPI_IER_TDRE
DECL|QSPI_IER_TXEMPTY_Msk|macro|QSPI_IER_TXEMPTY_Msk
DECL|QSPI_IER_TXEMPTY_Pos|macro|QSPI_IER_TXEMPTY_Pos
DECL|QSPI_IER_TXEMPTY|macro|QSPI_IER_TXEMPTY
DECL|QSPI_IER_Type|typedef|} QSPI_IER_Type;
DECL|QSPI_IER|member|__O QSPI_IER_Type QSPI_IER; /**< Offset: 0x14 ( /W 32) Interrupt Enable Register */
DECL|QSPI_IER|member|__O uint32_t QSPI_IER; /**< (QSPI Offset: 0x14) Interrupt Enable Register */
DECL|QSPI_IFR_ADDREN_Msk|macro|QSPI_IFR_ADDREN_Msk
DECL|QSPI_IFR_ADDREN_Pos|macro|QSPI_IFR_ADDREN_Pos
DECL|QSPI_IFR_ADDREN|macro|QSPI_IFR_ADDREN
DECL|QSPI_IFR_ADDRL_24_BIT_Val|macro|QSPI_IFR_ADDRL_24_BIT_Val
DECL|QSPI_IFR_ADDRL_24_BIT|macro|QSPI_IFR_ADDRL_24_BIT
DECL|QSPI_IFR_ADDRL_32_BIT_Val|macro|QSPI_IFR_ADDRL_32_BIT_Val
DECL|QSPI_IFR_ADDRL_32_BIT|macro|QSPI_IFR_ADDRL_32_BIT
DECL|QSPI_IFR_ADDRL_Msk|macro|QSPI_IFR_ADDRL_Msk
DECL|QSPI_IFR_ADDRL_Pos|macro|QSPI_IFR_ADDRL_Pos
DECL|QSPI_IFR_ADDRL|macro|QSPI_IFR_ADDRL
DECL|QSPI_IFR_CRM_DISABLED_Val|macro|QSPI_IFR_CRM_DISABLED_Val
DECL|QSPI_IFR_CRM_DISABLED|macro|QSPI_IFR_CRM_DISABLED
DECL|QSPI_IFR_CRM_ENABLED_Val|macro|QSPI_IFR_CRM_ENABLED_Val
DECL|QSPI_IFR_CRM_ENABLED|macro|QSPI_IFR_CRM_ENABLED
DECL|QSPI_IFR_CRM_Msk|macro|QSPI_IFR_CRM_Msk
DECL|QSPI_IFR_CRM_Pos|macro|QSPI_IFR_CRM_Pos
DECL|QSPI_IFR_CRM|macro|QSPI_IFR_CRM
DECL|QSPI_IFR_DATAEN_Msk|macro|QSPI_IFR_DATAEN_Msk
DECL|QSPI_IFR_DATAEN_Pos|macro|QSPI_IFR_DATAEN_Pos
DECL|QSPI_IFR_DATAEN|macro|QSPI_IFR_DATAEN
DECL|QSPI_IFR_INSTEN_Msk|macro|QSPI_IFR_INSTEN_Msk
DECL|QSPI_IFR_INSTEN_Pos|macro|QSPI_IFR_INSTEN_Pos
DECL|QSPI_IFR_INSTEN|macro|QSPI_IFR_INSTEN
DECL|QSPI_IFR_MASK|macro|QSPI_IFR_MASK
DECL|QSPI_IFR_Msk|macro|QSPI_IFR_Msk
DECL|QSPI_IFR_NBDUM_Msk|macro|QSPI_IFR_NBDUM_Msk
DECL|QSPI_IFR_NBDUM_Pos|macro|QSPI_IFR_NBDUM_Pos
DECL|QSPI_IFR_NBDUM|macro|QSPI_IFR_NBDUM
DECL|QSPI_IFR_OFFSET|macro|QSPI_IFR_OFFSET
DECL|QSPI_IFR_OPTEN_Msk|macro|QSPI_IFR_OPTEN_Msk
DECL|QSPI_IFR_OPTEN_Pos|macro|QSPI_IFR_OPTEN_Pos
DECL|QSPI_IFR_OPTEN|macro|QSPI_IFR_OPTEN
DECL|QSPI_IFR_OPTL_Msk|macro|QSPI_IFR_OPTL_Msk
DECL|QSPI_IFR_OPTL_OPTION_1BIT_Val|macro|QSPI_IFR_OPTL_OPTION_1BIT_Val
DECL|QSPI_IFR_OPTL_OPTION_1BIT|macro|QSPI_IFR_OPTL_OPTION_1BIT
DECL|QSPI_IFR_OPTL_OPTION_2BIT_Val|macro|QSPI_IFR_OPTL_OPTION_2BIT_Val
DECL|QSPI_IFR_OPTL_OPTION_2BIT|macro|QSPI_IFR_OPTL_OPTION_2BIT
DECL|QSPI_IFR_OPTL_OPTION_4BIT_Val|macro|QSPI_IFR_OPTL_OPTION_4BIT_Val
DECL|QSPI_IFR_OPTL_OPTION_4BIT|macro|QSPI_IFR_OPTL_OPTION_4BIT
DECL|QSPI_IFR_OPTL_OPTION_8BIT_Val|macro|QSPI_IFR_OPTL_OPTION_8BIT_Val
DECL|QSPI_IFR_OPTL_OPTION_8BIT|macro|QSPI_IFR_OPTL_OPTION_8BIT
DECL|QSPI_IFR_OPTL_Pos|macro|QSPI_IFR_OPTL_Pos
DECL|QSPI_IFR_OPTL|macro|QSPI_IFR_OPTL
DECL|QSPI_IFR_TFRTYP_Msk|macro|QSPI_IFR_TFRTYP_Msk
DECL|QSPI_IFR_TFRTYP_Pos|macro|QSPI_IFR_TFRTYP_Pos
DECL|QSPI_IFR_TFRTYP_TRSFR_READ_MEMORY_Val|macro|QSPI_IFR_TFRTYP_TRSFR_READ_MEMORY_Val
DECL|QSPI_IFR_TFRTYP_TRSFR_READ_MEMORY|macro|QSPI_IFR_TFRTYP_TRSFR_READ_MEMORY
DECL|QSPI_IFR_TFRTYP_TRSFR_READ_Val|macro|QSPI_IFR_TFRTYP_TRSFR_READ_Val
DECL|QSPI_IFR_TFRTYP_TRSFR_READ|macro|QSPI_IFR_TFRTYP_TRSFR_READ
DECL|QSPI_IFR_TFRTYP_TRSFR_WRITE_MEMORY_Val|macro|QSPI_IFR_TFRTYP_TRSFR_WRITE_MEMORY_Val
DECL|QSPI_IFR_TFRTYP_TRSFR_WRITE_MEMORY|macro|QSPI_IFR_TFRTYP_TRSFR_WRITE_MEMORY
DECL|QSPI_IFR_TFRTYP_TRSFR_WRITE_Val|macro|QSPI_IFR_TFRTYP_TRSFR_WRITE_Val
DECL|QSPI_IFR_TFRTYP_TRSFR_WRITE|macro|QSPI_IFR_TFRTYP_TRSFR_WRITE
DECL|QSPI_IFR_TFRTYP|macro|QSPI_IFR_TFRTYP
DECL|QSPI_IFR_Type|typedef|} QSPI_IFR_Type;
DECL|QSPI_IFR_WIDTH_DUAL_CMD_Val|macro|QSPI_IFR_WIDTH_DUAL_CMD_Val
DECL|QSPI_IFR_WIDTH_DUAL_CMD|macro|QSPI_IFR_WIDTH_DUAL_CMD
DECL|QSPI_IFR_WIDTH_DUAL_IO_Val|macro|QSPI_IFR_WIDTH_DUAL_IO_Val
DECL|QSPI_IFR_WIDTH_DUAL_IO|macro|QSPI_IFR_WIDTH_DUAL_IO
DECL|QSPI_IFR_WIDTH_DUAL_OUTPUT_Val|macro|QSPI_IFR_WIDTH_DUAL_OUTPUT_Val
DECL|QSPI_IFR_WIDTH_DUAL_OUTPUT|macro|QSPI_IFR_WIDTH_DUAL_OUTPUT
DECL|QSPI_IFR_WIDTH_Msk|macro|QSPI_IFR_WIDTH_Msk
DECL|QSPI_IFR_WIDTH_Pos|macro|QSPI_IFR_WIDTH_Pos
DECL|QSPI_IFR_WIDTH_QUAD_CMD_Val|macro|QSPI_IFR_WIDTH_QUAD_CMD_Val
DECL|QSPI_IFR_WIDTH_QUAD_CMD|macro|QSPI_IFR_WIDTH_QUAD_CMD
DECL|QSPI_IFR_WIDTH_QUAD_IO_Val|macro|QSPI_IFR_WIDTH_QUAD_IO_Val
DECL|QSPI_IFR_WIDTH_QUAD_IO|macro|QSPI_IFR_WIDTH_QUAD_IO
DECL|QSPI_IFR_WIDTH_QUAD_OUTPUT_Val|macro|QSPI_IFR_WIDTH_QUAD_OUTPUT_Val
DECL|QSPI_IFR_WIDTH_QUAD_OUTPUT|macro|QSPI_IFR_WIDTH_QUAD_OUTPUT
DECL|QSPI_IFR_WIDTH_SINGLE_BIT_SPI_Val|macro|QSPI_IFR_WIDTH_SINGLE_BIT_SPI_Val
DECL|QSPI_IFR_WIDTH_SINGLE_BIT_SPI|macro|QSPI_IFR_WIDTH_SINGLE_BIT_SPI
DECL|QSPI_IFR_WIDTH|macro|QSPI_IFR_WIDTH
DECL|QSPI_IFR|member|__IO QSPI_IFR_Type QSPI_IFR; /**< Offset: 0x38 (R/W 32) Instruction Frame Register */
DECL|QSPI_IFR|member|__IO uint32_t QSPI_IFR; /**< (QSPI Offset: 0x38) Instruction Frame Register */
DECL|QSPI_IMR_CSR_Msk|macro|QSPI_IMR_CSR_Msk
DECL|QSPI_IMR_CSR_Pos|macro|QSPI_IMR_CSR_Pos
DECL|QSPI_IMR_CSR|macro|QSPI_IMR_CSR
DECL|QSPI_IMR_CSS_Msk|macro|QSPI_IMR_CSS_Msk
DECL|QSPI_IMR_CSS_Pos|macro|QSPI_IMR_CSS_Pos
DECL|QSPI_IMR_CSS|macro|QSPI_IMR_CSS
DECL|QSPI_IMR_INSTRE_Msk|macro|QSPI_IMR_INSTRE_Msk
DECL|QSPI_IMR_INSTRE_Pos|macro|QSPI_IMR_INSTRE_Pos
DECL|QSPI_IMR_INSTRE|macro|QSPI_IMR_INSTRE
DECL|QSPI_IMR_MASK|macro|QSPI_IMR_MASK
DECL|QSPI_IMR_Msk|macro|QSPI_IMR_Msk
DECL|QSPI_IMR_OFFSET|macro|QSPI_IMR_OFFSET
DECL|QSPI_IMR_OVRES_Msk|macro|QSPI_IMR_OVRES_Msk
DECL|QSPI_IMR_OVRES_Pos|macro|QSPI_IMR_OVRES_Pos
DECL|QSPI_IMR_OVRES|macro|QSPI_IMR_OVRES
DECL|QSPI_IMR_RDRF_Msk|macro|QSPI_IMR_RDRF_Msk
DECL|QSPI_IMR_RDRF_Pos|macro|QSPI_IMR_RDRF_Pos
DECL|QSPI_IMR_RDRF|macro|QSPI_IMR_RDRF
DECL|QSPI_IMR_TDRE_Msk|macro|QSPI_IMR_TDRE_Msk
DECL|QSPI_IMR_TDRE_Pos|macro|QSPI_IMR_TDRE_Pos
DECL|QSPI_IMR_TDRE|macro|QSPI_IMR_TDRE
DECL|QSPI_IMR_TXEMPTY_Msk|macro|QSPI_IMR_TXEMPTY_Msk
DECL|QSPI_IMR_TXEMPTY_Pos|macro|QSPI_IMR_TXEMPTY_Pos
DECL|QSPI_IMR_TXEMPTY|macro|QSPI_IMR_TXEMPTY
DECL|QSPI_IMR_Type|typedef|} QSPI_IMR_Type;
DECL|QSPI_IMR|member|__I QSPI_IMR_Type QSPI_IMR; /**< Offset: 0x1C (R/ 32) Interrupt Mask Register */
DECL|QSPI_IMR|member|__I uint32_t QSPI_IMR; /**< (QSPI Offset: 0x1C) Interrupt Mask Register */
DECL|QSPI_MR_CSMODE_LASTXFER_Val|macro|QSPI_MR_CSMODE_LASTXFER_Val
DECL|QSPI_MR_CSMODE_LASTXFER|macro|QSPI_MR_CSMODE_LASTXFER
DECL|QSPI_MR_CSMODE_Msk|macro|QSPI_MR_CSMODE_Msk
DECL|QSPI_MR_CSMODE_NOT_RELOADED_Val|macro|QSPI_MR_CSMODE_NOT_RELOADED_Val
DECL|QSPI_MR_CSMODE_NOT_RELOADED|macro|QSPI_MR_CSMODE_NOT_RELOADED
DECL|QSPI_MR_CSMODE_Pos|macro|QSPI_MR_CSMODE_Pos
DECL|QSPI_MR_CSMODE_SYSTEMATICALLY_Val|macro|QSPI_MR_CSMODE_SYSTEMATICALLY_Val
DECL|QSPI_MR_CSMODE_SYSTEMATICALLY|macro|QSPI_MR_CSMODE_SYSTEMATICALLY
DECL|QSPI_MR_CSMODE|macro|QSPI_MR_CSMODE
DECL|QSPI_MR_DLYBCT_Msk|macro|QSPI_MR_DLYBCT_Msk
DECL|QSPI_MR_DLYBCT_Pos|macro|QSPI_MR_DLYBCT_Pos
DECL|QSPI_MR_DLYBCT|macro|QSPI_MR_DLYBCT
DECL|QSPI_MR_DLYCS_Msk|macro|QSPI_MR_DLYCS_Msk
DECL|QSPI_MR_DLYCS_Pos|macro|QSPI_MR_DLYCS_Pos
DECL|QSPI_MR_DLYCS|macro|QSPI_MR_DLYCS
DECL|QSPI_MR_LLB_DISABLED_Val|macro|QSPI_MR_LLB_DISABLED_Val
DECL|QSPI_MR_LLB_DISABLED|macro|QSPI_MR_LLB_DISABLED
DECL|QSPI_MR_LLB_ENABLED_Val|macro|QSPI_MR_LLB_ENABLED_Val
DECL|QSPI_MR_LLB_ENABLED|macro|QSPI_MR_LLB_ENABLED
DECL|QSPI_MR_LLB_Msk|macro|QSPI_MR_LLB_Msk
DECL|QSPI_MR_LLB_Pos|macro|QSPI_MR_LLB_Pos
DECL|QSPI_MR_LLB|macro|QSPI_MR_LLB
DECL|QSPI_MR_MASK|macro|QSPI_MR_MASK
DECL|QSPI_MR_Msk|macro|QSPI_MR_Msk
DECL|QSPI_MR_NBBITS_16_BIT_Val|macro|QSPI_MR_NBBITS_16_BIT_Val
DECL|QSPI_MR_NBBITS_16_BIT|macro|QSPI_MR_NBBITS_16_BIT
DECL|QSPI_MR_NBBITS_8_BIT_Val|macro|QSPI_MR_NBBITS_8_BIT_Val
DECL|QSPI_MR_NBBITS_8_BIT|macro|QSPI_MR_NBBITS_8_BIT
DECL|QSPI_MR_NBBITS_Msk|macro|QSPI_MR_NBBITS_Msk
DECL|QSPI_MR_NBBITS_Pos|macro|QSPI_MR_NBBITS_Pos
DECL|QSPI_MR_NBBITS|macro|QSPI_MR_NBBITS
DECL|QSPI_MR_OFFSET|macro|QSPI_MR_OFFSET
DECL|QSPI_MR_SMM_MEMORY_Val|macro|QSPI_MR_SMM_MEMORY_Val
DECL|QSPI_MR_SMM_MEMORY|macro|QSPI_MR_SMM_MEMORY
DECL|QSPI_MR_SMM_Msk|macro|QSPI_MR_SMM_Msk
DECL|QSPI_MR_SMM_Pos|macro|QSPI_MR_SMM_Pos
DECL|QSPI_MR_SMM_SPI_Val|macro|QSPI_MR_SMM_SPI_Val
DECL|QSPI_MR_SMM_SPI|macro|QSPI_MR_SMM_SPI
DECL|QSPI_MR_SMM|macro|QSPI_MR_SMM
DECL|QSPI_MR_Type|typedef|} QSPI_MR_Type;
DECL|QSPI_MR_WDRBT_DISABLED_Val|macro|QSPI_MR_WDRBT_DISABLED_Val
DECL|QSPI_MR_WDRBT_DISABLED|macro|QSPI_MR_WDRBT_DISABLED
DECL|QSPI_MR_WDRBT_ENABLED_Val|macro|QSPI_MR_WDRBT_ENABLED_Val
DECL|QSPI_MR_WDRBT_ENABLED|macro|QSPI_MR_WDRBT_ENABLED
DECL|QSPI_MR_WDRBT_Msk|macro|QSPI_MR_WDRBT_Msk
DECL|QSPI_MR_WDRBT_Pos|macro|QSPI_MR_WDRBT_Pos
DECL|QSPI_MR_WDRBT|macro|QSPI_MR_WDRBT
DECL|QSPI_MR|member|__IO QSPI_MR_Type QSPI_MR; /**< Offset: 0x04 (R/W 32) Mode Register */
DECL|QSPI_MR|member|__IO uint32_t QSPI_MR; /**< (QSPI Offset: 0x04) Mode Register */
DECL|QSPI_RDR_MASK|macro|QSPI_RDR_MASK
DECL|QSPI_RDR_Msk|macro|QSPI_RDR_Msk
DECL|QSPI_RDR_OFFSET|macro|QSPI_RDR_OFFSET
DECL|QSPI_RDR_RD_Msk|macro|QSPI_RDR_RD_Msk
DECL|QSPI_RDR_RD_Pos|macro|QSPI_RDR_RD_Pos
DECL|QSPI_RDR_RD|macro|QSPI_RDR_RD
DECL|QSPI_RDR_Type|typedef|} QSPI_RDR_Type;
DECL|QSPI_RDR|member|__I QSPI_RDR_Type QSPI_RDR; /**< Offset: 0x08 (R/ 32) Receive Data Register */
DECL|QSPI_RDR|member|__I uint32_t QSPI_RDR; /**< (QSPI Offset: 0x08) Receive Data Register */
DECL|QSPI_SCR_CPHA_Msk|macro|QSPI_SCR_CPHA_Msk
DECL|QSPI_SCR_CPHA_Pos|macro|QSPI_SCR_CPHA_Pos
DECL|QSPI_SCR_CPHA|macro|QSPI_SCR_CPHA
DECL|QSPI_SCR_CPOL_Msk|macro|QSPI_SCR_CPOL_Msk
DECL|QSPI_SCR_CPOL_Pos|macro|QSPI_SCR_CPOL_Pos
DECL|QSPI_SCR_CPOL|macro|QSPI_SCR_CPOL
DECL|QSPI_SCR_DLYBS_Msk|macro|QSPI_SCR_DLYBS_Msk
DECL|QSPI_SCR_DLYBS_Pos|macro|QSPI_SCR_DLYBS_Pos
DECL|QSPI_SCR_DLYBS|macro|QSPI_SCR_DLYBS
DECL|QSPI_SCR_MASK|macro|QSPI_SCR_MASK
DECL|QSPI_SCR_Msk|macro|QSPI_SCR_Msk
DECL|QSPI_SCR_OFFSET|macro|QSPI_SCR_OFFSET
DECL|QSPI_SCR_SCBR_Msk|macro|QSPI_SCR_SCBR_Msk
DECL|QSPI_SCR_SCBR_Pos|macro|QSPI_SCR_SCBR_Pos
DECL|QSPI_SCR_SCBR|macro|QSPI_SCR_SCBR
DECL|QSPI_SCR_Type|typedef|} QSPI_SCR_Type;
DECL|QSPI_SCR|member|__IO QSPI_SCR_Type QSPI_SCR; /**< Offset: 0x20 (R/W 32) Serial Clock Register */
DECL|QSPI_SCR|member|__IO uint32_t QSPI_SCR; /**< (QSPI Offset: 0x20) Serial Clock Register */
DECL|QSPI_SKR_MASK|macro|QSPI_SKR_MASK
DECL|QSPI_SKR_Msk|macro|QSPI_SKR_Msk
DECL|QSPI_SKR_OFFSET|macro|QSPI_SKR_OFFSET
DECL|QSPI_SKR_Type|typedef|} QSPI_SKR_Type;
DECL|QSPI_SKR_USRK_Msk|macro|QSPI_SKR_USRK_Msk
DECL|QSPI_SKR_USRK_Pos|macro|QSPI_SKR_USRK_Pos
DECL|QSPI_SKR_USRK|macro|QSPI_SKR_USRK
DECL|QSPI_SKR|member|__O QSPI_SKR_Type QSPI_SKR; /**< Offset: 0x44 ( /W 32) Scrambling Key Register */
DECL|QSPI_SKR|member|__O uint32_t QSPI_SKR; /**< (QSPI Offset: 0x44) Scrambling Key Register */
DECL|QSPI_SMR_MASK|macro|QSPI_SMR_MASK
DECL|QSPI_SMR_Msk|macro|QSPI_SMR_Msk
DECL|QSPI_SMR_OFFSET|macro|QSPI_SMR_OFFSET
DECL|QSPI_SMR_RVDIS_Msk|macro|QSPI_SMR_RVDIS_Msk
DECL|QSPI_SMR_RVDIS_Pos|macro|QSPI_SMR_RVDIS_Pos
DECL|QSPI_SMR_RVDIS|macro|QSPI_SMR_RVDIS
DECL|QSPI_SMR_SCREN_DISABLED_Val|macro|QSPI_SMR_SCREN_DISABLED_Val
DECL|QSPI_SMR_SCREN_DISABLED|macro|QSPI_SMR_SCREN_DISABLED
DECL|QSPI_SMR_SCREN_ENABLED_Val|macro|QSPI_SMR_SCREN_ENABLED_Val
DECL|QSPI_SMR_SCREN_ENABLED|macro|QSPI_SMR_SCREN_ENABLED
DECL|QSPI_SMR_SCREN_Msk|macro|QSPI_SMR_SCREN_Msk
DECL|QSPI_SMR_SCREN_Pos|macro|QSPI_SMR_SCREN_Pos
DECL|QSPI_SMR_SCREN|macro|QSPI_SMR_SCREN
DECL|QSPI_SMR_Type|typedef|} QSPI_SMR_Type;
DECL|QSPI_SMR|member|__IO QSPI_SMR_Type QSPI_SMR; /**< Offset: 0x40 (R/W 32) Scrambling Mode Register */
DECL|QSPI_SMR|member|__IO uint32_t QSPI_SMR; /**< (QSPI Offset: 0x40) Scrambling Mode Register */
DECL|QSPI_SR_CSR_Msk|macro|QSPI_SR_CSR_Msk
DECL|QSPI_SR_CSR_Pos|macro|QSPI_SR_CSR_Pos
DECL|QSPI_SR_CSR|macro|QSPI_SR_CSR
DECL|QSPI_SR_CSS_Msk|macro|QSPI_SR_CSS_Msk
DECL|QSPI_SR_CSS_Pos|macro|QSPI_SR_CSS_Pos
DECL|QSPI_SR_CSS|macro|QSPI_SR_CSS
DECL|QSPI_SR_INSTRE_Msk|macro|QSPI_SR_INSTRE_Msk
DECL|QSPI_SR_INSTRE_Pos|macro|QSPI_SR_INSTRE_Pos
DECL|QSPI_SR_INSTRE|macro|QSPI_SR_INSTRE
DECL|QSPI_SR_MASK|macro|QSPI_SR_MASK
DECL|QSPI_SR_Msk|macro|QSPI_SR_Msk
DECL|QSPI_SR_OFFSET|macro|QSPI_SR_OFFSET
DECL|QSPI_SR_OVRES_Msk|macro|QSPI_SR_OVRES_Msk
DECL|QSPI_SR_OVRES_Pos|macro|QSPI_SR_OVRES_Pos
DECL|QSPI_SR_OVRES|macro|QSPI_SR_OVRES
DECL|QSPI_SR_QSPIENS_Msk|macro|QSPI_SR_QSPIENS_Msk
DECL|QSPI_SR_QSPIENS_Pos|macro|QSPI_SR_QSPIENS_Pos
DECL|QSPI_SR_QSPIENS|macro|QSPI_SR_QSPIENS
DECL|QSPI_SR_RDRF_Msk|macro|QSPI_SR_RDRF_Msk
DECL|QSPI_SR_RDRF_Pos|macro|QSPI_SR_RDRF_Pos
DECL|QSPI_SR_RDRF|macro|QSPI_SR_RDRF
DECL|QSPI_SR_TDRE_Msk|macro|QSPI_SR_TDRE_Msk
DECL|QSPI_SR_TDRE_Pos|macro|QSPI_SR_TDRE_Pos
DECL|QSPI_SR_TDRE|macro|QSPI_SR_TDRE
DECL|QSPI_SR_TXEMPTY_Msk|macro|QSPI_SR_TXEMPTY_Msk
DECL|QSPI_SR_TXEMPTY_Pos|macro|QSPI_SR_TXEMPTY_Pos
DECL|QSPI_SR_TXEMPTY|macro|QSPI_SR_TXEMPTY
DECL|QSPI_SR_Type|typedef|} QSPI_SR_Type;
DECL|QSPI_SR|member|__I QSPI_SR_Type QSPI_SR; /**< Offset: 0x10 (R/ 32) Status Register */
DECL|QSPI_SR|member|__I uint32_t QSPI_SR; /**< (QSPI Offset: 0x10) Status Register */
DECL|QSPI_TDR_MASK|macro|QSPI_TDR_MASK
DECL|QSPI_TDR_Msk|macro|QSPI_TDR_Msk
DECL|QSPI_TDR_OFFSET|macro|QSPI_TDR_OFFSET
DECL|QSPI_TDR_TD_Msk|macro|QSPI_TDR_TD_Msk
DECL|QSPI_TDR_TD_Pos|macro|QSPI_TDR_TD_Pos
DECL|QSPI_TDR_TD|macro|QSPI_TDR_TD
DECL|QSPI_TDR_Type|typedef|} QSPI_TDR_Type;
DECL|QSPI_TDR|member|__O QSPI_TDR_Type QSPI_TDR; /**< Offset: 0x0C ( /W 32) Transmit Data Register */
DECL|QSPI_TDR|member|__O uint32_t QSPI_TDR; /**< (QSPI Offset: 0x0C) Transmit Data Register */
DECL|QSPI_WPMR_MASK|macro|QSPI_WPMR_MASK
DECL|QSPI_WPMR_Msk|macro|QSPI_WPMR_Msk
DECL|QSPI_WPMR_OFFSET|macro|QSPI_WPMR_OFFSET
DECL|QSPI_WPMR_Type|typedef|} QSPI_WPMR_Type;
DECL|QSPI_WPMR_WPEN_Msk|macro|QSPI_WPMR_WPEN_Msk
DECL|QSPI_WPMR_WPEN_Pos|macro|QSPI_WPMR_WPEN_Pos
DECL|QSPI_WPMR_WPEN|macro|QSPI_WPMR_WPEN
DECL|QSPI_WPMR_WPKEY_Msk|macro|QSPI_WPMR_WPKEY_Msk
DECL|QSPI_WPMR_WPKEY_PASSWD_Val|macro|QSPI_WPMR_WPKEY_PASSWD_Val
DECL|QSPI_WPMR_WPKEY_PASSWD|macro|QSPI_WPMR_WPKEY_PASSWD
DECL|QSPI_WPMR_WPKEY_Pos|macro|QSPI_WPMR_WPKEY_Pos
DECL|QSPI_WPMR_WPKEY|macro|QSPI_WPMR_WPKEY
DECL|QSPI_WPMR|member|__IO QSPI_WPMR_Type QSPI_WPMR; /**< Offset: 0xE4 (R/W 32) Write Protection Mode Register */
DECL|QSPI_WPMR|member|__IO uint32_t QSPI_WPMR; /**< (QSPI Offset: 0xE4) Write Protection Mode Register */
DECL|QSPI_WPSR_MASK|macro|QSPI_WPSR_MASK
DECL|QSPI_WPSR_Msk|macro|QSPI_WPSR_Msk
DECL|QSPI_WPSR_OFFSET|macro|QSPI_WPSR_OFFSET
DECL|QSPI_WPSR_Type|typedef|} QSPI_WPSR_Type;
DECL|QSPI_WPSR_WPVSRC_Msk|macro|QSPI_WPSR_WPVSRC_Msk
DECL|QSPI_WPSR_WPVSRC_Pos|macro|QSPI_WPSR_WPVSRC_Pos
DECL|QSPI_WPSR_WPVSRC|macro|QSPI_WPSR_WPVSRC
DECL|QSPI_WPSR_WPVS_Msk|macro|QSPI_WPSR_WPVS_Msk
DECL|QSPI_WPSR_WPVS_Pos|macro|QSPI_WPSR_WPVS_Pos
DECL|QSPI_WPSR_WPVS|macro|QSPI_WPSR_WPVS
DECL|QSPI_WPSR|member|__I QSPI_WPSR_Type QSPI_WPSR; /**< Offset: 0xE8 (R/ 32) Write Protection Status Register */
DECL|QSPI_WPSR|member|__I uint32_t QSPI_WPSR; /**< (QSPI Offset: 0xE8) Write Protection Status Register */
DECL|Qspi|typedef|} Qspi;
DECL|Qspi|typedef|} Qspi;
DECL|RDRF|member|uint32_t RDRF:1; /**< bit: 0 Receive Data Register Full */
DECL|RDRF|member|uint32_t RDRF:1; /**< bit: 0 Receive Data Register Full Interrupt Disable */
DECL|RDRF|member|uint32_t RDRF:1; /**< bit: 0 Receive Data Register Full Interrupt Enable */
DECL|RDRF|member|uint32_t RDRF:1; /**< bit: 0 Receive Data Register Full Interrupt Mask */
DECL|RD|member|uint32_t RD:16; /**< bit: 0..15 Receive Data */
DECL|REV_QSPI|macro|REV_QSPI
DECL|RVDIS|member|uint32_t RVDIS:1; /**< bit: 1 Scrambling/Unscrambling Random Value Disable */
DECL|Reserved1|member|RoReg8 Reserved1[0xC];
DECL|Reserved1|member|__I uint32_t Reserved1[3];
DECL|Reserved2|member|RoReg8 Reserved2[0x4];
DECL|Reserved2|member|__I uint32_t Reserved2[1];
DECL|Reserved3|member|RoReg8 Reserved3[0x9C];
DECL|Reserved3|member|__I uint32_t Reserved3[39];
DECL|SCBR|member|uint32_t SCBR:8; /**< bit: 8..15 Serial Clock Baud Rate */
DECL|SCREN|member|uint32_t SCREN:1; /**< bit: 0 Scrambling/Unscrambling Enable */
DECL|SMM|member|uint32_t SMM:1; /**< bit: 0 Serial Memory Mode */
DECL|SWRST|member|uint32_t SWRST:1; /**< bit: 7 QSPI Software Reset */
DECL|TDRE|member|uint32_t TDRE:1; /**< bit: 1 Transmit Data Register Empty */
DECL|TDRE|member|uint32_t TDRE:1; /**< bit: 1 Transmit Data Register Empty Interrupt Disable */
DECL|TDRE|member|uint32_t TDRE:1; /**< bit: 1 Transmit Data Register Empty Interrupt Enable */
DECL|TDRE|member|uint32_t TDRE:1; /**< bit: 1 Transmit Data Register Empty Interrupt Mask */
DECL|TD|member|uint32_t TD:16; /**< bit: 0..15 Transmit Data */
DECL|TFRTYP|member|uint32_t TFRTYP:2; /**< bit: 12..13 Data Transfer Type */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 2 Transmission Registers Empty */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 2 Transmission Registers Empty Disable */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 2 Transmission Registers Empty Enable */
DECL|TXEMPTY|member|uint32_t TXEMPTY:1; /**< bit: 2 Transmission Registers Empty Mask */
DECL|USRK|member|uint32_t USRK:32; /**< bit: 0..31 Scrambling User Key */
DECL|WDRBT|member|uint32_t WDRBT:1; /**< bit: 2 Wait Data Read Before Transfer */
DECL|WIDTH|member|uint32_t WIDTH:3; /**< bit: 0..2 Width of Instruction Code, Address, Option Code and Data */
DECL|WPEN|member|uint32_t WPEN:1; /**< bit: 0 Write Protection Enable */
DECL|WPKEY|member|uint32_t WPKEY:24; /**< bit: 8..31 Write Protection Key */
DECL|WPVSRC|member|uint32_t WPVSRC:8; /**< bit: 8..15 Write Protection Violation Source */
DECL|WPVS|member|uint32_t WPVS:1; /**< bit: 0 Write Protection Violation Status */
DECL|_SAME70_QSPI_COMPONENT_H_|macro|_SAME70_QSPI_COMPONENT_H_
DECL|_SAME70_QSPI_COMPONENT_|macro|_SAME70_QSPI_COMPONENT_
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :11; /**< bit: 21..31 Reserved */
DECL|uint32_t|member|uint32_t :13; /**< bit: 11..23 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 8..23 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 11 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 3 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 3 Reserved */
DECL|uint32_t|member|uint32_t :21; /**< bit: 11..31 Reserved */
DECL|uint32_t|member|uint32_t :21; /**< bit: 11..31 Reserved */
DECL|uint32_t|member|uint32_t :21; /**< bit: 11..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 6..7 Reserved */
DECL|uint32_t|member|uint32_t :30; /**< bit: 2..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 12..15 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 4..7 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 4..7 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 4..7 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 4..7 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 2..6 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 2..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 8..15 Reserved */
