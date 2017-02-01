DECL|BAT|member|uint32_t BAT:1; /**< bit: 8 Byte Access Type */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|CS0SE|member|uint32_t CS0SE:1; /**< bit: 8 Chip Select 0 Scrambling Enable */
DECL|CS1SE|member|uint32_t CS1SE:1; /**< bit: 9 Chip Select 1 Scrambling Enable */
DECL|CS2SE|member|uint32_t CS2SE:1; /**< bit: 10 Chip Select 2 Scrambling Enable */
DECL|CS3SE|member|uint32_t CS3SE:1; /**< bit: 11 Chip Select 3 Scrambling Enable */
DECL|DBW|member|uint32_t DBW:1; /**< bit: 12 Data Bus Width */
DECL|EXNW_MODE|member|uint32_t EXNW_MODE:2; /**< bit: 4..5 NWAIT Mode */
DECL|KEY1|member|uint32_t KEY1:32; /**< bit: 0..31 Off Chip Memory Scrambling (OCMS) Key Part 1 */
DECL|KEY2|member|uint32_t KEY2:32; /**< bit: 0..31 Off Chip Memory Scrambling (OCMS) Key Part 2 */
DECL|NCS_RD_PULSE|member|uint32_t NCS_RD_PULSE:7; /**< bit: 24..30 NCS Pulse Length in READ Access */
DECL|NCS_RD_SETUP|member|uint32_t NCS_RD_SETUP:6; /**< bit: 24..29 NCS Setup Length in READ Access */
DECL|NCS_WR_PULSE|member|uint32_t NCS_WR_PULSE:7; /**< bit: 8..14 NCS Pulse Length in WRITE Access */
DECL|NCS_WR_SETUP|member|uint32_t NCS_WR_SETUP:6; /**< bit: 8..13 NCS Setup Length in WRITE Access */
DECL|NRD_CYCLE|member|uint32_t NRD_CYCLE:9; /**< bit: 16..24 Total Read Cycle Length */
DECL|NRD_PULSE|member|uint32_t NRD_PULSE:7; /**< bit: 16..22 NRD Pulse Length */
DECL|NRD_SETUP|member|uint32_t NRD_SETUP:6; /**< bit: 16..21 NRD Setup Length */
DECL|NWE_CYCLE|member|uint32_t NWE_CYCLE:9; /**< bit: 0..8 Total Write Cycle Length */
DECL|NWE_PULSE|member|uint32_t NWE_PULSE:7; /**< bit: 0..6 NWE Pulse Length */
DECL|NWE_SETUP|member|uint32_t NWE_SETUP:6; /**< bit: 0..5 NWE Setup Length */
DECL|PMEN|member|uint32_t PMEN:1; /**< bit: 24 Page Mode Enabled */
DECL|PS|member|uint32_t PS:2; /**< bit: 28..29 Page Size */
DECL|READ_MODE|member|uint32_t READ_MODE:1; /**< bit: 0 Read Mode */
DECL|REV_SMC|macro|REV_SMC
DECL|Reserved1|member|RoReg8 Reserved1[0x40];
DECL|Reserved1|member|__I uint32_t Reserved1[16];
DECL|Reserved2|member|RoReg8 Reserved2[0x58];
DECL|Reserved2|member|__I uint32_t Reserved2[22];
DECL|SMCCSNUMBER_NUMBER|macro|SMCCSNUMBER_NUMBER
DECL|SMC_6498|macro|SMC_6498
DECL|SMC_CS_NUMBER|member|SmcCsNumber SMC_CS_NUMBER[4]; /**< Offset: 0x00 SMC Setup Register (CS_number = 0) */
DECL|SMC_CS_NUMBER|member|SmcCsNumber SMC_CS_NUMBER[SMCCSNUMBER_NUMBER]; /**< Offset: 0x00 SMC Setup Register (CS_number = 0) */
DECL|SMC_CYCLE_MASK|macro|SMC_CYCLE_MASK
DECL|SMC_CYCLE_Msk|macro|SMC_CYCLE_Msk
DECL|SMC_CYCLE_NRD_CYCLE_Msk|macro|SMC_CYCLE_NRD_CYCLE_Msk
DECL|SMC_CYCLE_NRD_CYCLE_Pos|macro|SMC_CYCLE_NRD_CYCLE_Pos
DECL|SMC_CYCLE_NRD_CYCLE|macro|SMC_CYCLE_NRD_CYCLE
DECL|SMC_CYCLE_NWE_CYCLE_Msk|macro|SMC_CYCLE_NWE_CYCLE_Msk
DECL|SMC_CYCLE_NWE_CYCLE_Pos|macro|SMC_CYCLE_NWE_CYCLE_Pos
DECL|SMC_CYCLE_NWE_CYCLE|macro|SMC_CYCLE_NWE_CYCLE
DECL|SMC_CYCLE_OFFSET|macro|SMC_CYCLE_OFFSET
DECL|SMC_CYCLE_Type|typedef|} SMC_CYCLE_Type;
DECL|SMC_CYCLE|member|__IO SMC_CYCLE_Type SMC_CYCLE; /**< Offset: 0x08 (R/W 32) SMC Cycle Register (CS_number = 0) */
DECL|SMC_CYCLE|member|__IO uint32_t SMC_CYCLE; /**< (SMC_CS_NUMBER Offset: 0x08) SMC Cycle Register (CS_number = 0) */
DECL|SMC_KEY1_KEY1_Msk|macro|SMC_KEY1_KEY1_Msk
DECL|SMC_KEY1_KEY1_Pos|macro|SMC_KEY1_KEY1_Pos
DECL|SMC_KEY1_KEY1|macro|SMC_KEY1_KEY1
DECL|SMC_KEY1_MASK|macro|SMC_KEY1_MASK
DECL|SMC_KEY1_Msk|macro|SMC_KEY1_Msk
DECL|SMC_KEY1_OFFSET|macro|SMC_KEY1_OFFSET
DECL|SMC_KEY1_Type|typedef|} SMC_KEY1_Type;
DECL|SMC_KEY1|member|__O SMC_KEY1_Type SMC_KEY1; /**< Offset: 0x84 ( /W 32) SMC OCMS KEY1 Register */
DECL|SMC_KEY1|member|__O uint32_t SMC_KEY1; /**< (SMC Offset: 0x84) SMC OCMS KEY1 Register */
DECL|SMC_KEY2_KEY2_Msk|macro|SMC_KEY2_KEY2_Msk
DECL|SMC_KEY2_KEY2_Pos|macro|SMC_KEY2_KEY2_Pos
DECL|SMC_KEY2_KEY2|macro|SMC_KEY2_KEY2
DECL|SMC_KEY2_MASK|macro|SMC_KEY2_MASK
DECL|SMC_KEY2_Msk|macro|SMC_KEY2_Msk
DECL|SMC_KEY2_OFFSET|macro|SMC_KEY2_OFFSET
DECL|SMC_KEY2_Type|typedef|} SMC_KEY2_Type;
DECL|SMC_KEY2|member|__O SMC_KEY2_Type SMC_KEY2; /**< Offset: 0x88 ( /W 32) SMC OCMS KEY2 Register */
DECL|SMC_KEY2|member|__O uint32_t SMC_KEY2; /**< (SMC Offset: 0x88) SMC OCMS KEY2 Register */
DECL|SMC_MODE_BAT_BYTE_SELECT_Val|macro|SMC_MODE_BAT_BYTE_SELECT_Val
DECL|SMC_MODE_BAT_BYTE_SELECT|macro|SMC_MODE_BAT_BYTE_SELECT
DECL|SMC_MODE_BAT_BYTE_WRITE_Val|macro|SMC_MODE_BAT_BYTE_WRITE_Val
DECL|SMC_MODE_BAT_BYTE_WRITE|macro|SMC_MODE_BAT_BYTE_WRITE
DECL|SMC_MODE_BAT_Msk|macro|SMC_MODE_BAT_Msk
DECL|SMC_MODE_BAT_Pos|macro|SMC_MODE_BAT_Pos
DECL|SMC_MODE_BAT|macro|SMC_MODE_BAT
DECL|SMC_MODE_DBW_16_BIT_Val|macro|SMC_MODE_DBW_16_BIT_Val
DECL|SMC_MODE_DBW_16_BIT|macro|SMC_MODE_DBW_16_BIT
DECL|SMC_MODE_DBW_8_BIT_Val|macro|SMC_MODE_DBW_8_BIT_Val
DECL|SMC_MODE_DBW_8_BIT|macro|SMC_MODE_DBW_8_BIT
DECL|SMC_MODE_DBW_Msk|macro|SMC_MODE_DBW_Msk
DECL|SMC_MODE_DBW_Pos|macro|SMC_MODE_DBW_Pos
DECL|SMC_MODE_DBW|macro|SMC_MODE_DBW
DECL|SMC_MODE_EXNW_MODE_DISABLED_Val|macro|SMC_MODE_EXNW_MODE_DISABLED_Val
DECL|SMC_MODE_EXNW_MODE_DISABLED|macro|SMC_MODE_EXNW_MODE_DISABLED
DECL|SMC_MODE_EXNW_MODE_FROZEN_Val|macro|SMC_MODE_EXNW_MODE_FROZEN_Val
DECL|SMC_MODE_EXNW_MODE_FROZEN|macro|SMC_MODE_EXNW_MODE_FROZEN
DECL|SMC_MODE_EXNW_MODE_Msk|macro|SMC_MODE_EXNW_MODE_Msk
DECL|SMC_MODE_EXNW_MODE_Pos|macro|SMC_MODE_EXNW_MODE_Pos
DECL|SMC_MODE_EXNW_MODE_READY_Val|macro|SMC_MODE_EXNW_MODE_READY_Val
DECL|SMC_MODE_EXNW_MODE_READY|macro|SMC_MODE_EXNW_MODE_READY
DECL|SMC_MODE_EXNW_MODE|macro|SMC_MODE_EXNW_MODE
DECL|SMC_MODE_MASK|macro|SMC_MODE_MASK
DECL|SMC_MODE_Msk|macro|SMC_MODE_Msk
DECL|SMC_MODE_OFFSET|macro|SMC_MODE_OFFSET
DECL|SMC_MODE_PMEN_Msk|macro|SMC_MODE_PMEN_Msk
DECL|SMC_MODE_PMEN_Pos|macro|SMC_MODE_PMEN_Pos
DECL|SMC_MODE_PMEN|macro|SMC_MODE_PMEN
DECL|SMC_MODE_PS_16_BYTE_Val|macro|SMC_MODE_PS_16_BYTE_Val
DECL|SMC_MODE_PS_16_BYTE|macro|SMC_MODE_PS_16_BYTE
DECL|SMC_MODE_PS_32_BYTE_Val|macro|SMC_MODE_PS_32_BYTE_Val
DECL|SMC_MODE_PS_32_BYTE|macro|SMC_MODE_PS_32_BYTE
DECL|SMC_MODE_PS_4_BYTE_Val|macro|SMC_MODE_PS_4_BYTE_Val
DECL|SMC_MODE_PS_4_BYTE|macro|SMC_MODE_PS_4_BYTE
DECL|SMC_MODE_PS_8_BYTE_Val|macro|SMC_MODE_PS_8_BYTE_Val
DECL|SMC_MODE_PS_8_BYTE|macro|SMC_MODE_PS_8_BYTE
DECL|SMC_MODE_PS_Msk|macro|SMC_MODE_PS_Msk
DECL|SMC_MODE_PS_Pos|macro|SMC_MODE_PS_Pos
DECL|SMC_MODE_PS|macro|SMC_MODE_PS
DECL|SMC_MODE_READ_MODE_Msk|macro|SMC_MODE_READ_MODE_Msk
DECL|SMC_MODE_READ_MODE_Pos|macro|SMC_MODE_READ_MODE_Pos
DECL|SMC_MODE_READ_MODE|macro|SMC_MODE_READ_MODE
DECL|SMC_MODE_TDF_CYCLES_Msk|macro|SMC_MODE_TDF_CYCLES_Msk
DECL|SMC_MODE_TDF_CYCLES_Pos|macro|SMC_MODE_TDF_CYCLES_Pos
DECL|SMC_MODE_TDF_CYCLES|macro|SMC_MODE_TDF_CYCLES
DECL|SMC_MODE_TDF_MODE_Msk|macro|SMC_MODE_TDF_MODE_Msk
DECL|SMC_MODE_TDF_MODE_Pos|macro|SMC_MODE_TDF_MODE_Pos
DECL|SMC_MODE_TDF_MODE|macro|SMC_MODE_TDF_MODE
DECL|SMC_MODE_Type|typedef|} SMC_MODE_Type;
DECL|SMC_MODE_WRITE_MODE_Msk|macro|SMC_MODE_WRITE_MODE_Msk
DECL|SMC_MODE_WRITE_MODE_Pos|macro|SMC_MODE_WRITE_MODE_Pos
DECL|SMC_MODE_WRITE_MODE|macro|SMC_MODE_WRITE_MODE
DECL|SMC_MODE|member|__IO SMC_MODE_Type SMC_MODE; /**< Offset: 0x0C (R/W 32) SMC MODE Register (CS_number = 0) */
DECL|SMC_MODE|member|__IO uint32_t SMC_MODE; /**< (SMC_CS_NUMBER Offset: 0x0C) SMC MODE Register (CS_number = 0) */
DECL|SMC_OCMS_CS0SE_Msk|macro|SMC_OCMS_CS0SE_Msk
DECL|SMC_OCMS_CS0SE_Pos|macro|SMC_OCMS_CS0SE_Pos
DECL|SMC_OCMS_CS0SE|macro|SMC_OCMS_CS0SE
DECL|SMC_OCMS_CS1SE_Msk|macro|SMC_OCMS_CS1SE_Msk
DECL|SMC_OCMS_CS1SE_Pos|macro|SMC_OCMS_CS1SE_Pos
DECL|SMC_OCMS_CS1SE|macro|SMC_OCMS_CS1SE
DECL|SMC_OCMS_CS2SE_Msk|macro|SMC_OCMS_CS2SE_Msk
DECL|SMC_OCMS_CS2SE_Pos|macro|SMC_OCMS_CS2SE_Pos
DECL|SMC_OCMS_CS2SE|macro|SMC_OCMS_CS2SE
DECL|SMC_OCMS_CS3SE_Msk|macro|SMC_OCMS_CS3SE_Msk
DECL|SMC_OCMS_CS3SE_Pos|macro|SMC_OCMS_CS3SE_Pos
DECL|SMC_OCMS_CS3SE|macro|SMC_OCMS_CS3SE
DECL|SMC_OCMS_MASK|macro|SMC_OCMS_MASK
DECL|SMC_OCMS_Msk|macro|SMC_OCMS_Msk
DECL|SMC_OCMS_OFFSET|macro|SMC_OCMS_OFFSET
DECL|SMC_OCMS_SMSE_Msk|macro|SMC_OCMS_SMSE_Msk
DECL|SMC_OCMS_SMSE_Pos|macro|SMC_OCMS_SMSE_Pos
DECL|SMC_OCMS_SMSE|macro|SMC_OCMS_SMSE
DECL|SMC_OCMS_Type|typedef|} SMC_OCMS_Type;
DECL|SMC_OCMS|member|__IO SMC_OCMS_Type SMC_OCMS; /**< Offset: 0x80 (R/W 32) SMC OCMS MODE Register */
DECL|SMC_OCMS|member|__IO uint32_t SMC_OCMS; /**< (SMC Offset: 0x80) SMC OCMS MODE Register */
DECL|SMC_PULSE_MASK|macro|SMC_PULSE_MASK
DECL|SMC_PULSE_Msk|macro|SMC_PULSE_Msk
DECL|SMC_PULSE_NCS_RD_PULSE_Msk|macro|SMC_PULSE_NCS_RD_PULSE_Msk
DECL|SMC_PULSE_NCS_RD_PULSE_Pos|macro|SMC_PULSE_NCS_RD_PULSE_Pos
DECL|SMC_PULSE_NCS_RD_PULSE|macro|SMC_PULSE_NCS_RD_PULSE
DECL|SMC_PULSE_NCS_WR_PULSE_Msk|macro|SMC_PULSE_NCS_WR_PULSE_Msk
DECL|SMC_PULSE_NCS_WR_PULSE_Pos|macro|SMC_PULSE_NCS_WR_PULSE_Pos
DECL|SMC_PULSE_NCS_WR_PULSE|macro|SMC_PULSE_NCS_WR_PULSE
DECL|SMC_PULSE_NRD_PULSE_Msk|macro|SMC_PULSE_NRD_PULSE_Msk
DECL|SMC_PULSE_NRD_PULSE_Pos|macro|SMC_PULSE_NRD_PULSE_Pos
DECL|SMC_PULSE_NRD_PULSE|macro|SMC_PULSE_NRD_PULSE
DECL|SMC_PULSE_NWE_PULSE_Msk|macro|SMC_PULSE_NWE_PULSE_Msk
DECL|SMC_PULSE_NWE_PULSE_Pos|macro|SMC_PULSE_NWE_PULSE_Pos
DECL|SMC_PULSE_NWE_PULSE|macro|SMC_PULSE_NWE_PULSE
DECL|SMC_PULSE_OFFSET|macro|SMC_PULSE_OFFSET
DECL|SMC_PULSE_Type|typedef|} SMC_PULSE_Type;
DECL|SMC_PULSE|member|__IO SMC_PULSE_Type SMC_PULSE; /**< Offset: 0x04 (R/W 32) SMC Pulse Register (CS_number = 0) */
DECL|SMC_PULSE|member|__IO uint32_t SMC_PULSE; /**< (SMC_CS_NUMBER Offset: 0x04) SMC Pulse Register (CS_number = 0) */
DECL|SMC_SETUP_MASK|macro|SMC_SETUP_MASK
DECL|SMC_SETUP_Msk|macro|SMC_SETUP_Msk
DECL|SMC_SETUP_NCS_RD_SETUP_Msk|macro|SMC_SETUP_NCS_RD_SETUP_Msk
DECL|SMC_SETUP_NCS_RD_SETUP_Pos|macro|SMC_SETUP_NCS_RD_SETUP_Pos
DECL|SMC_SETUP_NCS_RD_SETUP|macro|SMC_SETUP_NCS_RD_SETUP
DECL|SMC_SETUP_NCS_WR_SETUP_Msk|macro|SMC_SETUP_NCS_WR_SETUP_Msk
DECL|SMC_SETUP_NCS_WR_SETUP_Pos|macro|SMC_SETUP_NCS_WR_SETUP_Pos
DECL|SMC_SETUP_NCS_WR_SETUP|macro|SMC_SETUP_NCS_WR_SETUP
DECL|SMC_SETUP_NRD_SETUP_Msk|macro|SMC_SETUP_NRD_SETUP_Msk
DECL|SMC_SETUP_NRD_SETUP_Pos|macro|SMC_SETUP_NRD_SETUP_Pos
DECL|SMC_SETUP_NRD_SETUP|macro|SMC_SETUP_NRD_SETUP
DECL|SMC_SETUP_NWE_SETUP_Msk|macro|SMC_SETUP_NWE_SETUP_Msk
DECL|SMC_SETUP_NWE_SETUP_Pos|macro|SMC_SETUP_NWE_SETUP_Pos
DECL|SMC_SETUP_NWE_SETUP|macro|SMC_SETUP_NWE_SETUP
DECL|SMC_SETUP_OFFSET|macro|SMC_SETUP_OFFSET
DECL|SMC_SETUP_Type|typedef|} SMC_SETUP_Type;
DECL|SMC_SETUP|member|__IO SMC_SETUP_Type SMC_SETUP; /**< Offset: 0x00 (R/W 32) SMC Setup Register (CS_number = 0) */
DECL|SMC_SETUP|member|__IO uint32_t SMC_SETUP; /**< (SMC_CS_NUMBER Offset: 0x00) SMC Setup Register (CS_number = 0) */
DECL|SMC_WPMR_MASK|macro|SMC_WPMR_MASK
DECL|SMC_WPMR_Msk|macro|SMC_WPMR_Msk
DECL|SMC_WPMR_OFFSET|macro|SMC_WPMR_OFFSET
DECL|SMC_WPMR_Type|typedef|} SMC_WPMR_Type;
DECL|SMC_WPMR_WPEN_Msk|macro|SMC_WPMR_WPEN_Msk
DECL|SMC_WPMR_WPEN_Pos|macro|SMC_WPMR_WPEN_Pos
DECL|SMC_WPMR_WPEN|macro|SMC_WPMR_WPEN
DECL|SMC_WPMR_WPKEY_Msk|macro|SMC_WPMR_WPKEY_Msk
DECL|SMC_WPMR_WPKEY_PASSWD_Val|macro|SMC_WPMR_WPKEY_PASSWD_Val
DECL|SMC_WPMR_WPKEY_PASSWD|macro|SMC_WPMR_WPKEY_PASSWD
DECL|SMC_WPMR_WPKEY_Pos|macro|SMC_WPMR_WPKEY_Pos
DECL|SMC_WPMR_WPKEY|macro|SMC_WPMR_WPKEY
DECL|SMC_WPMR|member|__IO SMC_WPMR_Type SMC_WPMR; /**< Offset: 0xE4 (R/W 32) SMC Write Protection Mode Register */
DECL|SMC_WPMR|member|__IO uint32_t SMC_WPMR; /**< (SMC Offset: 0xE4) SMC Write Protection Mode Register */
DECL|SMC_WPSR_MASK|macro|SMC_WPSR_MASK
DECL|SMC_WPSR_Msk|macro|SMC_WPSR_Msk
DECL|SMC_WPSR_OFFSET|macro|SMC_WPSR_OFFSET
DECL|SMC_WPSR_Type|typedef|} SMC_WPSR_Type;
DECL|SMC_WPSR_WPVSRC_Msk|macro|SMC_WPSR_WPVSRC_Msk
DECL|SMC_WPSR_WPVSRC_Pos|macro|SMC_WPSR_WPVSRC_Pos
DECL|SMC_WPSR_WPVSRC|macro|SMC_WPSR_WPVSRC
DECL|SMC_WPSR_WPVS_Msk|macro|SMC_WPSR_WPVS_Msk
DECL|SMC_WPSR_WPVS_Pos|macro|SMC_WPSR_WPVS_Pos
DECL|SMC_WPSR_WPVS|macro|SMC_WPSR_WPVS
DECL|SMC_WPSR|member|__I SMC_WPSR_Type SMC_WPSR; /**< Offset: 0xE8 (R/ 32) SMC Write Protection Status Register */
DECL|SMC_WPSR|member|__I uint32_t SMC_WPSR; /**< (SMC Offset: 0xE8) SMC Write Protection Status Register */
DECL|SMSE|member|uint32_t SMSE:1; /**< bit: 0 Static Memory Controller Scrambling Enable */
DECL|SmcCsNumber|typedef|} SmcCsNumber;
DECL|SmcCsNumber|typedef|} SmcCsNumber;
DECL|Smc|typedef|} Smc;
DECL|Smc|typedef|} Smc;
DECL|TDF_CYCLES|member|uint32_t TDF_CYCLES:4; /**< bit: 16..19 Data Float Time */
DECL|TDF_MODE|member|uint32_t TDF_MODE:1; /**< bit: 20 TDF Optimization */
DECL|WPEN|member|uint32_t WPEN:1; /**< bit: 0 Write Protect Enable */
DECL|WPKEY|member|uint32_t WPKEY:24; /**< bit: 8..31 Write Protection Key */
DECL|WPVSRC|member|uint32_t WPVSRC:16; /**< bit: 8..23 Write Protection Violation Source */
DECL|WPVS|member|uint32_t WPVS:1; /**< bit: 0 Write Protection Violation Status */
DECL|WRITE_MODE|member|uint32_t WRITE_MODE:1; /**< bit: 1 Write Mode */
DECL|_SAME70_SMC_COMPONENT_H_|macro|_SAME70_SMC_COMPONENT_H_
DECL|_SAME70_SMC_COMPONENT_|macro|_SAME70_SMC_COMPONENT_
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
DECL|uint32_t|member|uint32_t :1; /**< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 23 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 31 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :20; /**< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 14..15 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 22..23 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 30..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 30..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 6..7 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 6..7 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 13..15 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 21..23 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 25..27 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 9..11 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 9..15 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
