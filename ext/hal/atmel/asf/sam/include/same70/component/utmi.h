DECL|APPSTART|member|uint32_t APPSTART:1; /**< bit: 5 Reserved */
DECL|ARIE|member|uint32_t ARIE:1; /**< bit: 4 OHCI Asynchronous Resume Interrupt Enable */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|FREQ|member|uint32_t FREQ:2; /**< bit: 0..1 UTMI Reference Clock Frequency */
DECL|RES0|member|uint32_t RES0:1; /**< bit: 0 USB PORTx Reset */
DECL|REV_UTMI|macro|REV_UTMI
DECL|Reserved1|member|RoReg8 Reserved1[0x10];
DECL|Reserved1|member|__I uint32_t Reserved1[4];
DECL|Reserved2|member|RoReg8 Reserved2[0x1C];
DECL|Reserved2|member|__I uint32_t Reserved2[7];
DECL|UDPPUDIS|member|uint32_t UDPPUDIS:1; /**< bit: 23 USB Device Pull-up Disable */
DECL|UTMI_11300|macro|UTMI_11300
DECL|UTMI_CKTRIM_FREQ_Msk|macro|UTMI_CKTRIM_FREQ_Msk
DECL|UTMI_CKTRIM_FREQ_Pos|macro|UTMI_CKTRIM_FREQ_Pos
DECL|UTMI_CKTRIM_FREQ_XTAL12_Val|macro|UTMI_CKTRIM_FREQ_XTAL12_Val
DECL|UTMI_CKTRIM_FREQ_XTAL12|macro|UTMI_CKTRIM_FREQ_XTAL12
DECL|UTMI_CKTRIM_FREQ_XTAL16_Val|macro|UTMI_CKTRIM_FREQ_XTAL16_Val
DECL|UTMI_CKTRIM_FREQ_XTAL16|macro|UTMI_CKTRIM_FREQ_XTAL16
DECL|UTMI_CKTRIM_FREQ|macro|UTMI_CKTRIM_FREQ
DECL|UTMI_CKTRIM_MASK|macro|UTMI_CKTRIM_MASK
DECL|UTMI_CKTRIM_Msk|macro|UTMI_CKTRIM_Msk
DECL|UTMI_CKTRIM_OFFSET|macro|UTMI_CKTRIM_OFFSET
DECL|UTMI_CKTRIM_Type|typedef|} UTMI_CKTRIM_Type;
DECL|UTMI_CKTRIM|member|__IO UTMI_CKTRIM_Type UTMI_CKTRIM; /**< Offset: 0x30 (R/W 32) UTMI Clock Trimming Register */
DECL|UTMI_CKTRIM|member|__IO uint32_t UTMI_CKTRIM; /**< (UTMI Offset: 0x30) UTMI Clock Trimming Register */
DECL|UTMI_OHCIICR_APPSTART_Msk|macro|UTMI_OHCIICR_APPSTART_Msk
DECL|UTMI_OHCIICR_APPSTART_Pos|macro|UTMI_OHCIICR_APPSTART_Pos
DECL|UTMI_OHCIICR_APPSTART|macro|UTMI_OHCIICR_APPSTART
DECL|UTMI_OHCIICR_ARIE_Msk|macro|UTMI_OHCIICR_ARIE_Msk
DECL|UTMI_OHCIICR_ARIE_Pos|macro|UTMI_OHCIICR_ARIE_Pos
DECL|UTMI_OHCIICR_ARIE|macro|UTMI_OHCIICR_ARIE
DECL|UTMI_OHCIICR_MASK|macro|UTMI_OHCIICR_MASK
DECL|UTMI_OHCIICR_Msk|macro|UTMI_OHCIICR_Msk
DECL|UTMI_OHCIICR_OFFSET|macro|UTMI_OHCIICR_OFFSET
DECL|UTMI_OHCIICR_RES0_Msk|macro|UTMI_OHCIICR_RES0_Msk
DECL|UTMI_OHCIICR_RES0_Pos|macro|UTMI_OHCIICR_RES0_Pos
DECL|UTMI_OHCIICR_RES0|macro|UTMI_OHCIICR_RES0
DECL|UTMI_OHCIICR_Type|typedef|} UTMI_OHCIICR_Type;
DECL|UTMI_OHCIICR_UDPPUDIS_Msk|macro|UTMI_OHCIICR_UDPPUDIS_Msk
DECL|UTMI_OHCIICR_UDPPUDIS_Pos|macro|UTMI_OHCIICR_UDPPUDIS_Pos
DECL|UTMI_OHCIICR_UDPPUDIS|macro|UTMI_OHCIICR_UDPPUDIS
DECL|UTMI_OHCIICR|member|__IO UTMI_OHCIICR_Type UTMI_OHCIICR; /**< Offset: 0x10 (R/W 32) OHCI Interrupt Configuration Register */
DECL|UTMI_OHCIICR|member|__IO uint32_t UTMI_OHCIICR; /**< (UTMI Offset: 0x10) OHCI Interrupt Configuration Register */
DECL|Utmi|typedef|} Utmi;
DECL|Utmi|typedef|} Utmi;
DECL|_SAME70_UTMI_COMPONENT_H_|macro|_SAME70_UTMI_COMPONENT_H_
DECL|_SAME70_UTMI_COMPONENT_|macro|_SAME70_UTMI_COMPONENT_
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :17; /**< bit: 6..22 Reserved */
DECL|uint32_t|member|uint32_t :30; /**< bit: 2..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 1..3 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
