DECL|CTRL|member|__IO PORT_CTRL_Type CTRL; /**< \brief Offset: 0x24 (R/W 32) Control */
DECL|DIRCLR|member|__IO PORT_DIRCLR_Type DIRCLR; /**< \brief Offset: 0x04 (R/W 32) Data Direction Clear */
DECL|DIRCLR|member|uint32_t DIRCLR:32; /*!< bit: 0..31 Port Data Direction Clear */
DECL|DIRSET|member|__IO PORT_DIRSET_Type DIRSET; /**< \brief Offset: 0x08 (R/W 32) Data Direction Set */
DECL|DIRSET|member|uint32_t DIRSET:32; /*!< bit: 0..31 Port Data Direction Set */
DECL|DIRTGL|member|__IO PORT_DIRTGL_Type DIRTGL; /**< \brief Offset: 0x0C (R/W 32) Data Direction Toggle */
DECL|DIRTGL|member|uint32_t DIRTGL:32; /*!< bit: 0..31 Port Data Direction Toggle */
DECL|DIR|member|__IO PORT_DIR_Type DIR; /**< \brief Offset: 0x00 (R/W 32) Data Direction */
DECL|DIR|member|uint32_t DIR:32; /*!< bit: 0..31 Port Data Direction */
DECL|DRVSTR|member|uint32_t DRVSTR:1; /*!< bit: 22 Output Driver Strength Selection */
DECL|DRVSTR|member|uint8_t DRVSTR:1; /*!< bit: 6 Output Driver Strength Selection */
DECL|Group|member|PortGroup Group[2]; /**< \brief Offset: 0x00 PortGroup groups [GROUPS] */
DECL|HWSEL|member|uint32_t HWSEL:1; /*!< bit: 31 Half-Word Select */
DECL|INEN|member|uint32_t INEN:1; /*!< bit: 17 Input Enable */
DECL|INEN|member|uint8_t INEN:1; /*!< bit: 1 Input Enable */
DECL|IN|member|__I PORT_IN_Type IN; /**< \brief Offset: 0x20 (R/ 32) Data Input Value */
DECL|IN|member|uint32_t IN:32; /*!< bit: 0..31 Port Data Input Value */
DECL|OUTCLR|member|__IO PORT_OUTCLR_Type OUTCLR; /**< \brief Offset: 0x14 (R/W 32) Data Output Value Clear */
DECL|OUTCLR|member|uint32_t OUTCLR:32; /*!< bit: 0..31 Port Data Output Value Clear */
DECL|OUTSET|member|__IO PORT_OUTSET_Type OUTSET; /**< \brief Offset: 0x18 (R/W 32) Data Output Value Set */
DECL|OUTSET|member|uint32_t OUTSET:32; /*!< bit: 0..31 Port Data Output Value Set */
DECL|OUTTGL|member|__IO PORT_OUTTGL_Type OUTTGL; /**< \brief Offset: 0x1C (R/W 32) Data Output Value Toggle */
DECL|OUTTGL|member|uint32_t OUTTGL:32; /*!< bit: 0..31 Port Data Output Value Toggle */
DECL|OUT|member|__IO PORT_OUT_Type OUT; /**< \brief Offset: 0x10 (R/W 32) Data Output Value */
DECL|OUT|member|uint32_t OUT:32; /*!< bit: 0..31 Port Data Output Value */
DECL|PINCFG|member|__IO PORT_PINCFG_Type PINCFG[32]; /**< \brief Offset: 0x40 (R/W 8) Pin Configuration n */
DECL|PINMASK|member|uint32_t PINMASK:16; /*!< bit: 0..15 Pin Mask for Multiple Pin Configuration */
DECL|PMUXEN|member|uint32_t PMUXEN:1; /*!< bit: 16 Peripheral Multiplexer Enable */
DECL|PMUXEN|member|uint8_t PMUXEN:1; /*!< bit: 0 Peripheral Multiplexer Enable */
DECL|PMUXE|member|uint8_t PMUXE:4; /*!< bit: 0.. 3 Peripheral Multiplexing Even */
DECL|PMUXO|member|uint8_t PMUXO:4; /*!< bit: 4.. 7 Peripheral Multiplexing Odd */
DECL|PMUX|member|__IO PORT_PMUX_Type PMUX[16]; /**< \brief Offset: 0x30 (R/W 8) Peripheral Multiplexing n */
DECL|PMUX|member|uint32_t PMUX:4; /*!< bit: 24..27 Peripheral Multiplexing */
DECL|PORT_CTRL_MASK|macro|PORT_CTRL_MASK
DECL|PORT_CTRL_OFFSET|macro|PORT_CTRL_OFFSET
DECL|PORT_CTRL_RESETVALUE|macro|PORT_CTRL_RESETVALUE
DECL|PORT_CTRL_SAMPLING_Msk|macro|PORT_CTRL_SAMPLING_Msk
DECL|PORT_CTRL_SAMPLING_Pos|macro|PORT_CTRL_SAMPLING_Pos
DECL|PORT_CTRL_SAMPLING|macro|PORT_CTRL_SAMPLING
DECL|PORT_CTRL_Type|typedef|} PORT_CTRL_Type;
DECL|PORT_DIRCLR_DIRCLR_Msk|macro|PORT_DIRCLR_DIRCLR_Msk
DECL|PORT_DIRCLR_DIRCLR_Pos|macro|PORT_DIRCLR_DIRCLR_Pos
DECL|PORT_DIRCLR_DIRCLR|macro|PORT_DIRCLR_DIRCLR
DECL|PORT_DIRCLR_MASK|macro|PORT_DIRCLR_MASK
DECL|PORT_DIRCLR_OFFSET|macro|PORT_DIRCLR_OFFSET
DECL|PORT_DIRCLR_RESETVALUE|macro|PORT_DIRCLR_RESETVALUE
DECL|PORT_DIRCLR_Type|typedef|} PORT_DIRCLR_Type;
DECL|PORT_DIRSET_DIRSET_Msk|macro|PORT_DIRSET_DIRSET_Msk
DECL|PORT_DIRSET_DIRSET_Pos|macro|PORT_DIRSET_DIRSET_Pos
DECL|PORT_DIRSET_DIRSET|macro|PORT_DIRSET_DIRSET
DECL|PORT_DIRSET_MASK|macro|PORT_DIRSET_MASK
DECL|PORT_DIRSET_OFFSET|macro|PORT_DIRSET_OFFSET
DECL|PORT_DIRSET_RESETVALUE|macro|PORT_DIRSET_RESETVALUE
DECL|PORT_DIRSET_Type|typedef|} PORT_DIRSET_Type;
DECL|PORT_DIRTGL_DIRTGL_Msk|macro|PORT_DIRTGL_DIRTGL_Msk
DECL|PORT_DIRTGL_DIRTGL_Pos|macro|PORT_DIRTGL_DIRTGL_Pos
DECL|PORT_DIRTGL_DIRTGL|macro|PORT_DIRTGL_DIRTGL
DECL|PORT_DIRTGL_MASK|macro|PORT_DIRTGL_MASK
DECL|PORT_DIRTGL_OFFSET|macro|PORT_DIRTGL_OFFSET
DECL|PORT_DIRTGL_RESETVALUE|macro|PORT_DIRTGL_RESETVALUE
DECL|PORT_DIRTGL_Type|typedef|} PORT_DIRTGL_Type;
DECL|PORT_DIR_DIR_Msk|macro|PORT_DIR_DIR_Msk
DECL|PORT_DIR_DIR_Pos|macro|PORT_DIR_DIR_Pos
DECL|PORT_DIR_DIR|macro|PORT_DIR_DIR
DECL|PORT_DIR_MASK|macro|PORT_DIR_MASK
DECL|PORT_DIR_OFFSET|macro|PORT_DIR_OFFSET
DECL|PORT_DIR_RESETVALUE|macro|PORT_DIR_RESETVALUE
DECL|PORT_DIR_Type|typedef|} PORT_DIR_Type;
DECL|PORT_IN_IN_Msk|macro|PORT_IN_IN_Msk
DECL|PORT_IN_IN_Pos|macro|PORT_IN_IN_Pos
DECL|PORT_IN_IN|macro|PORT_IN_IN
DECL|PORT_IN_MASK|macro|PORT_IN_MASK
DECL|PORT_IN_OFFSET|macro|PORT_IN_OFFSET
DECL|PORT_IN_RESETVALUE|macro|PORT_IN_RESETVALUE
DECL|PORT_IN_Type|typedef|} PORT_IN_Type;
DECL|PORT_OUTCLR_MASK|macro|PORT_OUTCLR_MASK
DECL|PORT_OUTCLR_OFFSET|macro|PORT_OUTCLR_OFFSET
DECL|PORT_OUTCLR_OUTCLR_Msk|macro|PORT_OUTCLR_OUTCLR_Msk
DECL|PORT_OUTCLR_OUTCLR_Pos|macro|PORT_OUTCLR_OUTCLR_Pos
DECL|PORT_OUTCLR_OUTCLR|macro|PORT_OUTCLR_OUTCLR
DECL|PORT_OUTCLR_RESETVALUE|macro|PORT_OUTCLR_RESETVALUE
DECL|PORT_OUTCLR_Type|typedef|} PORT_OUTCLR_Type;
DECL|PORT_OUTSET_MASK|macro|PORT_OUTSET_MASK
DECL|PORT_OUTSET_OFFSET|macro|PORT_OUTSET_OFFSET
DECL|PORT_OUTSET_OUTSET_Msk|macro|PORT_OUTSET_OUTSET_Msk
DECL|PORT_OUTSET_OUTSET_Pos|macro|PORT_OUTSET_OUTSET_Pos
DECL|PORT_OUTSET_OUTSET|macro|PORT_OUTSET_OUTSET
DECL|PORT_OUTSET_RESETVALUE|macro|PORT_OUTSET_RESETVALUE
DECL|PORT_OUTSET_Type|typedef|} PORT_OUTSET_Type;
DECL|PORT_OUTTGL_MASK|macro|PORT_OUTTGL_MASK
DECL|PORT_OUTTGL_OFFSET|macro|PORT_OUTTGL_OFFSET
DECL|PORT_OUTTGL_OUTTGL_Msk|macro|PORT_OUTTGL_OUTTGL_Msk
DECL|PORT_OUTTGL_OUTTGL_Pos|macro|PORT_OUTTGL_OUTTGL_Pos
DECL|PORT_OUTTGL_OUTTGL|macro|PORT_OUTTGL_OUTTGL
DECL|PORT_OUTTGL_RESETVALUE|macro|PORT_OUTTGL_RESETVALUE
DECL|PORT_OUTTGL_Type|typedef|} PORT_OUTTGL_Type;
DECL|PORT_OUT_MASK|macro|PORT_OUT_MASK
DECL|PORT_OUT_OFFSET|macro|PORT_OUT_OFFSET
DECL|PORT_OUT_OUT_Msk|macro|PORT_OUT_OUT_Msk
DECL|PORT_OUT_OUT_Pos|macro|PORT_OUT_OUT_Pos
DECL|PORT_OUT_OUT|macro|PORT_OUT_OUT
DECL|PORT_OUT_RESETVALUE|macro|PORT_OUT_RESETVALUE
DECL|PORT_OUT_Type|typedef|} PORT_OUT_Type;
DECL|PORT_PINCFG_DRVSTR_Pos|macro|PORT_PINCFG_DRVSTR_Pos
DECL|PORT_PINCFG_DRVSTR|macro|PORT_PINCFG_DRVSTR
DECL|PORT_PINCFG_INEN_Pos|macro|PORT_PINCFG_INEN_Pos
DECL|PORT_PINCFG_INEN|macro|PORT_PINCFG_INEN
DECL|PORT_PINCFG_MASK|macro|PORT_PINCFG_MASK
DECL|PORT_PINCFG_OFFSET|macro|PORT_PINCFG_OFFSET
DECL|PORT_PINCFG_PMUXEN_Pos|macro|PORT_PINCFG_PMUXEN_Pos
DECL|PORT_PINCFG_PMUXEN|macro|PORT_PINCFG_PMUXEN
DECL|PORT_PINCFG_PULLEN_Pos|macro|PORT_PINCFG_PULLEN_Pos
DECL|PORT_PINCFG_PULLEN|macro|PORT_PINCFG_PULLEN
DECL|PORT_PINCFG_RESETVALUE|macro|PORT_PINCFG_RESETVALUE
DECL|PORT_PINCFG_Type|typedef|} PORT_PINCFG_Type;
DECL|PORT_PMUX_MASK|macro|PORT_PMUX_MASK
DECL|PORT_PMUX_OFFSET|macro|PORT_PMUX_OFFSET
DECL|PORT_PMUX_PMUXE_A_Val|macro|PORT_PMUX_PMUXE_A_Val
DECL|PORT_PMUX_PMUXE_A|macro|PORT_PMUX_PMUXE_A
DECL|PORT_PMUX_PMUXE_B_Val|macro|PORT_PMUX_PMUXE_B_Val
DECL|PORT_PMUX_PMUXE_B|macro|PORT_PMUX_PMUXE_B
DECL|PORT_PMUX_PMUXE_C_Val|macro|PORT_PMUX_PMUXE_C_Val
DECL|PORT_PMUX_PMUXE_C|macro|PORT_PMUX_PMUXE_C
DECL|PORT_PMUX_PMUXE_D_Val|macro|PORT_PMUX_PMUXE_D_Val
DECL|PORT_PMUX_PMUXE_D|macro|PORT_PMUX_PMUXE_D
DECL|PORT_PMUX_PMUXE_E_Val|macro|PORT_PMUX_PMUXE_E_Val
DECL|PORT_PMUX_PMUXE_E|macro|PORT_PMUX_PMUXE_E
DECL|PORT_PMUX_PMUXE_F_Val|macro|PORT_PMUX_PMUXE_F_Val
DECL|PORT_PMUX_PMUXE_F|macro|PORT_PMUX_PMUXE_F
DECL|PORT_PMUX_PMUXE_G_Val|macro|PORT_PMUX_PMUXE_G_Val
DECL|PORT_PMUX_PMUXE_G|macro|PORT_PMUX_PMUXE_G
DECL|PORT_PMUX_PMUXE_H_Val|macro|PORT_PMUX_PMUXE_H_Val
DECL|PORT_PMUX_PMUXE_H|macro|PORT_PMUX_PMUXE_H
DECL|PORT_PMUX_PMUXE_Msk|macro|PORT_PMUX_PMUXE_Msk
DECL|PORT_PMUX_PMUXE_Pos|macro|PORT_PMUX_PMUXE_Pos
DECL|PORT_PMUX_PMUXE|macro|PORT_PMUX_PMUXE
DECL|PORT_PMUX_PMUXO_A_Val|macro|PORT_PMUX_PMUXO_A_Val
DECL|PORT_PMUX_PMUXO_A|macro|PORT_PMUX_PMUXO_A
DECL|PORT_PMUX_PMUXO_B_Val|macro|PORT_PMUX_PMUXO_B_Val
DECL|PORT_PMUX_PMUXO_B|macro|PORT_PMUX_PMUXO_B
DECL|PORT_PMUX_PMUXO_C_Val|macro|PORT_PMUX_PMUXO_C_Val
DECL|PORT_PMUX_PMUXO_C|macro|PORT_PMUX_PMUXO_C
DECL|PORT_PMUX_PMUXO_D_Val|macro|PORT_PMUX_PMUXO_D_Val
DECL|PORT_PMUX_PMUXO_D|macro|PORT_PMUX_PMUXO_D
DECL|PORT_PMUX_PMUXO_E_Val|macro|PORT_PMUX_PMUXO_E_Val
DECL|PORT_PMUX_PMUXO_E|macro|PORT_PMUX_PMUXO_E
DECL|PORT_PMUX_PMUXO_F_Val|macro|PORT_PMUX_PMUXO_F_Val
DECL|PORT_PMUX_PMUXO_F|macro|PORT_PMUX_PMUXO_F
DECL|PORT_PMUX_PMUXO_G_Val|macro|PORT_PMUX_PMUXO_G_Val
DECL|PORT_PMUX_PMUXO_G|macro|PORT_PMUX_PMUXO_G
DECL|PORT_PMUX_PMUXO_H_Val|macro|PORT_PMUX_PMUXO_H_Val
DECL|PORT_PMUX_PMUXO_H|macro|PORT_PMUX_PMUXO_H
DECL|PORT_PMUX_PMUXO_Msk|macro|PORT_PMUX_PMUXO_Msk
DECL|PORT_PMUX_PMUXO_Pos|macro|PORT_PMUX_PMUXO_Pos
DECL|PORT_PMUX_PMUXO|macro|PORT_PMUX_PMUXO
DECL|PORT_PMUX_RESETVALUE|macro|PORT_PMUX_RESETVALUE
DECL|PORT_PMUX_Type|typedef|} PORT_PMUX_Type;
DECL|PORT_U2210|macro|PORT_U2210
DECL|PORT_WRCONFIG_DRVSTR_Pos|macro|PORT_WRCONFIG_DRVSTR_Pos
DECL|PORT_WRCONFIG_DRVSTR|macro|PORT_WRCONFIG_DRVSTR
DECL|PORT_WRCONFIG_HWSEL_Pos|macro|PORT_WRCONFIG_HWSEL_Pos
DECL|PORT_WRCONFIG_HWSEL|macro|PORT_WRCONFIG_HWSEL
DECL|PORT_WRCONFIG_INEN_Pos|macro|PORT_WRCONFIG_INEN_Pos
DECL|PORT_WRCONFIG_INEN|macro|PORT_WRCONFIG_INEN
DECL|PORT_WRCONFIG_MASK|macro|PORT_WRCONFIG_MASK
DECL|PORT_WRCONFIG_OFFSET|macro|PORT_WRCONFIG_OFFSET
DECL|PORT_WRCONFIG_PINMASK_Msk|macro|PORT_WRCONFIG_PINMASK_Msk
DECL|PORT_WRCONFIG_PINMASK_Pos|macro|PORT_WRCONFIG_PINMASK_Pos
DECL|PORT_WRCONFIG_PINMASK|macro|PORT_WRCONFIG_PINMASK
DECL|PORT_WRCONFIG_PMUXEN_Pos|macro|PORT_WRCONFIG_PMUXEN_Pos
DECL|PORT_WRCONFIG_PMUXEN|macro|PORT_WRCONFIG_PMUXEN
DECL|PORT_WRCONFIG_PMUX_Msk|macro|PORT_WRCONFIG_PMUX_Msk
DECL|PORT_WRCONFIG_PMUX_Pos|macro|PORT_WRCONFIG_PMUX_Pos
DECL|PORT_WRCONFIG_PMUX|macro|PORT_WRCONFIG_PMUX
DECL|PORT_WRCONFIG_PULLEN_Pos|macro|PORT_WRCONFIG_PULLEN_Pos
DECL|PORT_WRCONFIG_PULLEN|macro|PORT_WRCONFIG_PULLEN
DECL|PORT_WRCONFIG_RESETVALUE|macro|PORT_WRCONFIG_RESETVALUE
DECL|PORT_WRCONFIG_Type|typedef|} PORT_WRCONFIG_Type;
DECL|PORT_WRCONFIG_WRPINCFG_Pos|macro|PORT_WRCONFIG_WRPINCFG_Pos
DECL|PORT_WRCONFIG_WRPINCFG|macro|PORT_WRCONFIG_WRPINCFG
DECL|PORT_WRCONFIG_WRPMUX_Pos|macro|PORT_WRCONFIG_WRPMUX_Pos
DECL|PORT_WRCONFIG_WRPMUX|macro|PORT_WRCONFIG_WRPMUX
DECL|PULLEN|member|uint32_t PULLEN:1; /*!< bit: 18 Pull Enable */
DECL|PULLEN|member|uint8_t PULLEN:1; /*!< bit: 2 Pull Enable */
DECL|PortGroup|typedef|} PortGroup;
DECL|Port|typedef|} Port;
DECL|REV_PORT|macro|REV_PORT
DECL|Reserved1|member|RoReg8 Reserved1[0x4];
DECL|Reserved2|member|RoReg8 Reserved2[0x20];
DECL|SAMPLING|member|uint32_t SAMPLING:32; /*!< bit: 0..31 Input Sampling Mode */
DECL|WRCONFIG|member|__O PORT_WRCONFIG_Type WRCONFIG; /**< \brief Offset: 0x28 ( /W 32) Write Configuration */
DECL|WRPINCFG|member|uint32_t WRPINCFG:1; /*!< bit: 30 Write PINCFG */
DECL|WRPMUX|member|uint32_t WRPMUX:1; /*!< bit: 28 Write PMUX */
DECL|_SAMD20_PORT_COMPONENT_|macro|_SAMD20_PORT_COMPONENT_
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 23 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 29 Reserved */
DECL|uint32_t|member|uint32_t :3; /*!< bit: 19..21 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 7 Reserved */
DECL|uint8_t|member|uint8_t :3; /*!< bit: 3.. 5 Reserved */
