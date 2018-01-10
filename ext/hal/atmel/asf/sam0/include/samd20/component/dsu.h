DECL|ADDOFF|member|uint32_t ADDOFF:20; /*!< bit: 12..31 Address Offset */
DECL|ADDR|member|__IO DSU_ADDR_Type ADDR; /**< \brief Offset: 0x0004 (R/W 32) Address */
DECL|ADDR|member|uint32_t ADDR:30; /*!< bit: 2..31 Address */
DECL|AMOD|member|uint32_t AMOD:2; /*!< bit: 0.. 1 Access Mode */
DECL|ARR|member|uint8_t ARR:1; /*!< bit: 6 Auxiliary Row Read */
DECL|BERR|member|uint8_t BERR:1; /*!< bit: 2 Bus Error */
DECL|CCLASS|member|uint32_t CCLASS:4; /*!< bit: 4.. 7 Component Class */
DECL|CE|member|uint8_t CE:1; /*!< bit: 4 Chip-Erase */
DECL|CID0|member|__I DSU_CID0_Type CID0; /**< \brief Offset: 0x1FF0 (R/ 32) Component Identification 0 */
DECL|CID1|member|__I DSU_CID1_Type CID1; /**< \brief Offset: 0x1FF4 (R/ 32) Component Identification 1 */
DECL|CID2|member|__I DSU_CID2_Type CID2; /**< \brief Offset: 0x1FF8 (R/ 32) Component Identification 2 */
DECL|CID3|member|__I DSU_CID3_Type CID3; /**< \brief Offset: 0x1FFC (R/ 32) Component Identification 3 */
DECL|CRC|member|uint8_t CRC:1; /*!< bit: 2 32-bit Cyclic Redundancy Code */
DECL|CRSTEXT|member|uint8_t CRSTEXT:1; /*!< bit: 1 CPU Reset Phase Extension */
DECL|CTRL|member|__O DSU_CTRL_Type CTRL; /**< \brief Offset: 0x0000 ( /W 8) Control */
DECL|CUSMOD|member|uint32_t CUSMOD:4; /*!< bit: 0.. 3 ARM CUSMOD */
DECL|DATA|member|__IO DSU_DATA_Type DATA; /**< \brief Offset: 0x000C (R/W 32) Data */
DECL|DATA|member|uint32_t DATA:32; /*!< bit: 0..31 Data */
DECL|DATA|member|uint32_t DATA:32; /*!< bit: 0..31 Data */
DECL|DBGPRES|member|uint8_t DBGPRES:1; /*!< bit: 1 Debugger Present */
DECL|DCCD0|member|uint8_t DCCD0:1; /*!< bit: 2 Debug Communication Channel 0 Dirty */
DECL|DCCD1|member|uint8_t DCCD1:1; /*!< bit: 3 Debug Communication Channel 1 Dirty */
DECL|DCCD|member|uint8_t DCCD:2; /*!< bit: 2.. 3 Debug Communication Channel x Dirty */
DECL|DCC|member|__IO DSU_DCC_Type DCC[2]; /**< \brief Offset: 0x0010 (R/W 32) Debug Communication Channel n */
DECL|DCFG|member|__IO DSU_DCFG_Type DCFG[2]; /**< \brief Offset: 0x00F0 (R/W 32) Device Configuration */
DECL|DCFG|member|uint32_t DCFG:32; /*!< bit: 0..31 Device Configuration */
DECL|DEVSEL|member|uint32_t DEVSEL:8; /*!< bit: 0.. 7 Device Select */
DECL|DID|member|__I DSU_DID_Type DID; /**< \brief Offset: 0x0018 (R/ 32) Device Identification */
DECL|DIE|member|uint32_t DIE:4; /*!< bit: 12..15 Die Number */
DECL|DONE|member|uint8_t DONE:1; /*!< bit: 0 Done */
DECL|DSU_ADDR_ADDR_Msk|macro|DSU_ADDR_ADDR_Msk
DECL|DSU_ADDR_ADDR_Pos|macro|DSU_ADDR_ADDR_Pos
DECL|DSU_ADDR_ADDR|macro|DSU_ADDR_ADDR
DECL|DSU_ADDR_AMOD_Msk|macro|DSU_ADDR_AMOD_Msk
DECL|DSU_ADDR_AMOD_Pos|macro|DSU_ADDR_AMOD_Pos
DECL|DSU_ADDR_AMOD|macro|DSU_ADDR_AMOD
DECL|DSU_ADDR_MASK|macro|DSU_ADDR_MASK
DECL|DSU_ADDR_OFFSET|macro|DSU_ADDR_OFFSET
DECL|DSU_ADDR_RESETVALUE|macro|DSU_ADDR_RESETVALUE
DECL|DSU_ADDR_Type|typedef|} DSU_ADDR_Type;
DECL|DSU_CID0_MASK|macro|DSU_CID0_MASK
DECL|DSU_CID0_OFFSET|macro|DSU_CID0_OFFSET
DECL|DSU_CID0_PREAMBLEB0_Msk|macro|DSU_CID0_PREAMBLEB0_Msk
DECL|DSU_CID0_PREAMBLEB0_Pos|macro|DSU_CID0_PREAMBLEB0_Pos
DECL|DSU_CID0_PREAMBLEB0|macro|DSU_CID0_PREAMBLEB0
DECL|DSU_CID0_RESETVALUE|macro|DSU_CID0_RESETVALUE
DECL|DSU_CID0_Type|typedef|} DSU_CID0_Type;
DECL|DSU_CID1_CCLASS_Msk|macro|DSU_CID1_CCLASS_Msk
DECL|DSU_CID1_CCLASS_Pos|macro|DSU_CID1_CCLASS_Pos
DECL|DSU_CID1_CCLASS|macro|DSU_CID1_CCLASS
DECL|DSU_CID1_MASK|macro|DSU_CID1_MASK
DECL|DSU_CID1_OFFSET|macro|DSU_CID1_OFFSET
DECL|DSU_CID1_PREAMBLE_Msk|macro|DSU_CID1_PREAMBLE_Msk
DECL|DSU_CID1_PREAMBLE_Pos|macro|DSU_CID1_PREAMBLE_Pos
DECL|DSU_CID1_PREAMBLE|macro|DSU_CID1_PREAMBLE
DECL|DSU_CID1_RESETVALUE|macro|DSU_CID1_RESETVALUE
DECL|DSU_CID1_Type|typedef|} DSU_CID1_Type;
DECL|DSU_CID2_MASK|macro|DSU_CID2_MASK
DECL|DSU_CID2_OFFSET|macro|DSU_CID2_OFFSET
DECL|DSU_CID2_PREAMBLEB2_Msk|macro|DSU_CID2_PREAMBLEB2_Msk
DECL|DSU_CID2_PREAMBLEB2_Pos|macro|DSU_CID2_PREAMBLEB2_Pos
DECL|DSU_CID2_PREAMBLEB2|macro|DSU_CID2_PREAMBLEB2
DECL|DSU_CID2_RESETVALUE|macro|DSU_CID2_RESETVALUE
DECL|DSU_CID2_Type|typedef|} DSU_CID2_Type;
DECL|DSU_CID3_MASK|macro|DSU_CID3_MASK
DECL|DSU_CID3_OFFSET|macro|DSU_CID3_OFFSET
DECL|DSU_CID3_PREAMBLEB3_Msk|macro|DSU_CID3_PREAMBLEB3_Msk
DECL|DSU_CID3_PREAMBLEB3_Pos|macro|DSU_CID3_PREAMBLEB3_Pos
DECL|DSU_CID3_PREAMBLEB3|macro|DSU_CID3_PREAMBLEB3
DECL|DSU_CID3_RESETVALUE|macro|DSU_CID3_RESETVALUE
DECL|DSU_CID3_Type|typedef|} DSU_CID3_Type;
DECL|DSU_CTRL_ARR_Pos|macro|DSU_CTRL_ARR_Pos
DECL|DSU_CTRL_ARR|macro|DSU_CTRL_ARR
DECL|DSU_CTRL_CE_Pos|macro|DSU_CTRL_CE_Pos
DECL|DSU_CTRL_CE|macro|DSU_CTRL_CE
DECL|DSU_CTRL_CRC_Pos|macro|DSU_CTRL_CRC_Pos
DECL|DSU_CTRL_CRC|macro|DSU_CTRL_CRC
DECL|DSU_CTRL_MASK|macro|DSU_CTRL_MASK
DECL|DSU_CTRL_MBIST_Pos|macro|DSU_CTRL_MBIST_Pos
DECL|DSU_CTRL_MBIST|macro|DSU_CTRL_MBIST
DECL|DSU_CTRL_OFFSET|macro|DSU_CTRL_OFFSET
DECL|DSU_CTRL_RESETVALUE|macro|DSU_CTRL_RESETVALUE
DECL|DSU_CTRL_SMSA_Pos|macro|DSU_CTRL_SMSA_Pos
DECL|DSU_CTRL_SMSA|macro|DSU_CTRL_SMSA
DECL|DSU_CTRL_SWRST_Pos|macro|DSU_CTRL_SWRST_Pos
DECL|DSU_CTRL_SWRST|macro|DSU_CTRL_SWRST
DECL|DSU_CTRL_Type|typedef|} DSU_CTRL_Type;
DECL|DSU_DATA_DATA_Msk|macro|DSU_DATA_DATA_Msk
DECL|DSU_DATA_DATA_Pos|macro|DSU_DATA_DATA_Pos
DECL|DSU_DATA_DATA|macro|DSU_DATA_DATA
DECL|DSU_DATA_MASK|macro|DSU_DATA_MASK
DECL|DSU_DATA_OFFSET|macro|DSU_DATA_OFFSET
DECL|DSU_DATA_RESETVALUE|macro|DSU_DATA_RESETVALUE
DECL|DSU_DATA_Type|typedef|} DSU_DATA_Type;
DECL|DSU_DCC_DATA_Msk|macro|DSU_DCC_DATA_Msk
DECL|DSU_DCC_DATA_Pos|macro|DSU_DCC_DATA_Pos
DECL|DSU_DCC_DATA|macro|DSU_DCC_DATA
DECL|DSU_DCC_MASK|macro|DSU_DCC_MASK
DECL|DSU_DCC_OFFSET|macro|DSU_DCC_OFFSET
DECL|DSU_DCC_RESETVALUE|macro|DSU_DCC_RESETVALUE
DECL|DSU_DCC_Type|typedef|} DSU_DCC_Type;
DECL|DSU_DCFG_DCFG_Msk|macro|DSU_DCFG_DCFG_Msk
DECL|DSU_DCFG_DCFG_Pos|macro|DSU_DCFG_DCFG_Pos
DECL|DSU_DCFG_DCFG|macro|DSU_DCFG_DCFG
DECL|DSU_DCFG_MASK|macro|DSU_DCFG_MASK
DECL|DSU_DCFG_OFFSET|macro|DSU_DCFG_OFFSET
DECL|DSU_DCFG_RESETVALUE|macro|DSU_DCFG_RESETVALUE
DECL|DSU_DCFG_Type|typedef|} DSU_DCFG_Type;
DECL|DSU_DID_DEVSEL_Msk|macro|DSU_DID_DEVSEL_Msk
DECL|DSU_DID_DEVSEL_Pos|macro|DSU_DID_DEVSEL_Pos
DECL|DSU_DID_DEVSEL|macro|DSU_DID_DEVSEL
DECL|DSU_DID_DIE_Msk|macro|DSU_DID_DIE_Msk
DECL|DSU_DID_DIE_Pos|macro|DSU_DID_DIE_Pos
DECL|DSU_DID_DIE|macro|DSU_DID_DIE
DECL|DSU_DID_FAMILY_0_Val|macro|DSU_DID_FAMILY_0_Val
DECL|DSU_DID_FAMILY_0|macro|DSU_DID_FAMILY_0
DECL|DSU_DID_FAMILY_1_Val|macro|DSU_DID_FAMILY_1_Val
DECL|DSU_DID_FAMILY_1|macro|DSU_DID_FAMILY_1
DECL|DSU_DID_FAMILY_Msk|macro|DSU_DID_FAMILY_Msk
DECL|DSU_DID_FAMILY_Pos|macro|DSU_DID_FAMILY_Pos
DECL|DSU_DID_FAMILY|macro|DSU_DID_FAMILY
DECL|DSU_DID_MASK|macro|DSU_DID_MASK
DECL|DSU_DID_OFFSET|macro|DSU_DID_OFFSET
DECL|DSU_DID_PROCESSOR_0_Val|macro|DSU_DID_PROCESSOR_0_Val
DECL|DSU_DID_PROCESSOR_0|macro|DSU_DID_PROCESSOR_0
DECL|DSU_DID_PROCESSOR_1_Val|macro|DSU_DID_PROCESSOR_1_Val
DECL|DSU_DID_PROCESSOR_1|macro|DSU_DID_PROCESSOR_1
DECL|DSU_DID_PROCESSOR_2_Val|macro|DSU_DID_PROCESSOR_2_Val
DECL|DSU_DID_PROCESSOR_2|macro|DSU_DID_PROCESSOR_2
DECL|DSU_DID_PROCESSOR_3_Val|macro|DSU_DID_PROCESSOR_3_Val
DECL|DSU_DID_PROCESSOR_3|macro|DSU_DID_PROCESSOR_3
DECL|DSU_DID_PROCESSOR_Msk|macro|DSU_DID_PROCESSOR_Msk
DECL|DSU_DID_PROCESSOR_Pos|macro|DSU_DID_PROCESSOR_Pos
DECL|DSU_DID_PROCESSOR|macro|DSU_DID_PROCESSOR
DECL|DSU_DID_REVISION_Msk|macro|DSU_DID_REVISION_Msk
DECL|DSU_DID_REVISION_Pos|macro|DSU_DID_REVISION_Pos
DECL|DSU_DID_REVISION|macro|DSU_DID_REVISION
DECL|DSU_DID_SERIES_0_Val|macro|DSU_DID_SERIES_0_Val
DECL|DSU_DID_SERIES_0|macro|DSU_DID_SERIES_0
DECL|DSU_DID_SERIES_1_Val|macro|DSU_DID_SERIES_1_Val
DECL|DSU_DID_SERIES_1|macro|DSU_DID_SERIES_1
DECL|DSU_DID_SERIES_Msk|macro|DSU_DID_SERIES_Msk
DECL|DSU_DID_SERIES_Pos|macro|DSU_DID_SERIES_Pos
DECL|DSU_DID_SERIES|macro|DSU_DID_SERIES
DECL|DSU_DID_Type|typedef|} DSU_DID_Type;
DECL|DSU_END_END_Msk|macro|DSU_END_END_Msk
DECL|DSU_END_END_Pos|macro|DSU_END_END_Pos
DECL|DSU_END_END|macro|DSU_END_END
DECL|DSU_END_MASK|macro|DSU_END_MASK
DECL|DSU_END_OFFSET|macro|DSU_END_OFFSET
DECL|DSU_END_RESETVALUE|macro|DSU_END_RESETVALUE
DECL|DSU_END_Type|typedef|} DSU_END_Type;
DECL|DSU_ENTRY0_ADDOFF_Msk|macro|DSU_ENTRY0_ADDOFF_Msk
DECL|DSU_ENTRY0_ADDOFF_Pos|macro|DSU_ENTRY0_ADDOFF_Pos
DECL|DSU_ENTRY0_ADDOFF|macro|DSU_ENTRY0_ADDOFF
DECL|DSU_ENTRY0_EPRES_Pos|macro|DSU_ENTRY0_EPRES_Pos
DECL|DSU_ENTRY0_EPRES|macro|DSU_ENTRY0_EPRES
DECL|DSU_ENTRY0_FMT_Pos|macro|DSU_ENTRY0_FMT_Pos
DECL|DSU_ENTRY0_FMT|macro|DSU_ENTRY0_FMT
DECL|DSU_ENTRY0_MASK|macro|DSU_ENTRY0_MASK
DECL|DSU_ENTRY0_OFFSET|macro|DSU_ENTRY0_OFFSET
DECL|DSU_ENTRY0_RESETVALUE|macro|DSU_ENTRY0_RESETVALUE
DECL|DSU_ENTRY0_Type|typedef|} DSU_ENTRY0_Type;
DECL|DSU_ENTRY1_MASK|macro|DSU_ENTRY1_MASK
DECL|DSU_ENTRY1_OFFSET|macro|DSU_ENTRY1_OFFSET
DECL|DSU_ENTRY1_RESETVALUE|macro|DSU_ENTRY1_RESETVALUE
DECL|DSU_ENTRY1_Type|typedef|} DSU_ENTRY1_Type;
DECL|DSU_LENGTH_LENGTH_Msk|macro|DSU_LENGTH_LENGTH_Msk
DECL|DSU_LENGTH_LENGTH_Pos|macro|DSU_LENGTH_LENGTH_Pos
DECL|DSU_LENGTH_LENGTH|macro|DSU_LENGTH_LENGTH
DECL|DSU_LENGTH_MASK|macro|DSU_LENGTH_MASK
DECL|DSU_LENGTH_OFFSET|macro|DSU_LENGTH_OFFSET
DECL|DSU_LENGTH_RESETVALUE|macro|DSU_LENGTH_RESETVALUE
DECL|DSU_LENGTH_Type|typedef|} DSU_LENGTH_Type;
DECL|DSU_MEMTYPE_MASK|macro|DSU_MEMTYPE_MASK
DECL|DSU_MEMTYPE_OFFSET|macro|DSU_MEMTYPE_OFFSET
DECL|DSU_MEMTYPE_RESETVALUE|macro|DSU_MEMTYPE_RESETVALUE
DECL|DSU_MEMTYPE_SMEMP_Pos|macro|DSU_MEMTYPE_SMEMP_Pos
DECL|DSU_MEMTYPE_SMEMP|macro|DSU_MEMTYPE_SMEMP
DECL|DSU_MEMTYPE_Type|typedef|} DSU_MEMTYPE_Type;
DECL|DSU_PID0_MASK|macro|DSU_PID0_MASK
DECL|DSU_PID0_OFFSET|macro|DSU_PID0_OFFSET
DECL|DSU_PID0_PARTNBL_Msk|macro|DSU_PID0_PARTNBL_Msk
DECL|DSU_PID0_PARTNBL_Pos|macro|DSU_PID0_PARTNBL_Pos
DECL|DSU_PID0_PARTNBL|macro|DSU_PID0_PARTNBL
DECL|DSU_PID0_RESETVALUE|macro|DSU_PID0_RESETVALUE
DECL|DSU_PID0_Type|typedef|} DSU_PID0_Type;
DECL|DSU_PID1_JEPIDCL_Msk|macro|DSU_PID1_JEPIDCL_Msk
DECL|DSU_PID1_JEPIDCL_Pos|macro|DSU_PID1_JEPIDCL_Pos
DECL|DSU_PID1_JEPIDCL|macro|DSU_PID1_JEPIDCL
DECL|DSU_PID1_MASK|macro|DSU_PID1_MASK
DECL|DSU_PID1_OFFSET|macro|DSU_PID1_OFFSET
DECL|DSU_PID1_PARTNBH_Msk|macro|DSU_PID1_PARTNBH_Msk
DECL|DSU_PID1_PARTNBH_Pos|macro|DSU_PID1_PARTNBH_Pos
DECL|DSU_PID1_PARTNBH|macro|DSU_PID1_PARTNBH
DECL|DSU_PID1_RESETVALUE|macro|DSU_PID1_RESETVALUE
DECL|DSU_PID1_Type|typedef|} DSU_PID1_Type;
DECL|DSU_PID2_JEPIDCH_Msk|macro|DSU_PID2_JEPIDCH_Msk
DECL|DSU_PID2_JEPIDCH_Pos|macro|DSU_PID2_JEPIDCH_Pos
DECL|DSU_PID2_JEPIDCH|macro|DSU_PID2_JEPIDCH
DECL|DSU_PID2_JEPU_Pos|macro|DSU_PID2_JEPU_Pos
DECL|DSU_PID2_JEPU|macro|DSU_PID2_JEPU
DECL|DSU_PID2_MASK|macro|DSU_PID2_MASK
DECL|DSU_PID2_OFFSET|macro|DSU_PID2_OFFSET
DECL|DSU_PID2_RESETVALUE|macro|DSU_PID2_RESETVALUE
DECL|DSU_PID2_REVISION_Msk|macro|DSU_PID2_REVISION_Msk
DECL|DSU_PID2_REVISION_Pos|macro|DSU_PID2_REVISION_Pos
DECL|DSU_PID2_REVISION|macro|DSU_PID2_REVISION
DECL|DSU_PID2_Type|typedef|} DSU_PID2_Type;
DECL|DSU_PID3_CUSMOD_Msk|macro|DSU_PID3_CUSMOD_Msk
DECL|DSU_PID3_CUSMOD_Pos|macro|DSU_PID3_CUSMOD_Pos
DECL|DSU_PID3_CUSMOD|macro|DSU_PID3_CUSMOD
DECL|DSU_PID3_MASK|macro|DSU_PID3_MASK
DECL|DSU_PID3_OFFSET|macro|DSU_PID3_OFFSET
DECL|DSU_PID3_RESETVALUE|macro|DSU_PID3_RESETVALUE
DECL|DSU_PID3_REVAND_Msk|macro|DSU_PID3_REVAND_Msk
DECL|DSU_PID3_REVAND_Pos|macro|DSU_PID3_REVAND_Pos
DECL|DSU_PID3_REVAND|macro|DSU_PID3_REVAND
DECL|DSU_PID3_Type|typedef|} DSU_PID3_Type;
DECL|DSU_PID4_FKBC_Msk|macro|DSU_PID4_FKBC_Msk
DECL|DSU_PID4_FKBC_Pos|macro|DSU_PID4_FKBC_Pos
DECL|DSU_PID4_FKBC|macro|DSU_PID4_FKBC
DECL|DSU_PID4_JEPCC_Msk|macro|DSU_PID4_JEPCC_Msk
DECL|DSU_PID4_JEPCC_Pos|macro|DSU_PID4_JEPCC_Pos
DECL|DSU_PID4_JEPCC|macro|DSU_PID4_JEPCC
DECL|DSU_PID4_MASK|macro|DSU_PID4_MASK
DECL|DSU_PID4_OFFSET|macro|DSU_PID4_OFFSET
DECL|DSU_PID4_RESETVALUE|macro|DSU_PID4_RESETVALUE
DECL|DSU_PID4_Type|typedef|} DSU_PID4_Type;
DECL|DSU_PID5_MASK|macro|DSU_PID5_MASK
DECL|DSU_PID5_OFFSET|macro|DSU_PID5_OFFSET
DECL|DSU_PID5_RESETVALUE|macro|DSU_PID5_RESETVALUE
DECL|DSU_PID5_Type|typedef|} DSU_PID5_Type;
DECL|DSU_PID6_MASK|macro|DSU_PID6_MASK
DECL|DSU_PID6_OFFSET|macro|DSU_PID6_OFFSET
DECL|DSU_PID6_RESETVALUE|macro|DSU_PID6_RESETVALUE
DECL|DSU_PID6_Type|typedef|} DSU_PID6_Type;
DECL|DSU_PID7_MASK|macro|DSU_PID7_MASK
DECL|DSU_PID7_OFFSET|macro|DSU_PID7_OFFSET
DECL|DSU_PID7_RESETVALUE|macro|DSU_PID7_RESETVALUE
DECL|DSU_PID7_Type|typedef|} DSU_PID7_Type;
DECL|DSU_STATUSA_BERR_Pos|macro|DSU_STATUSA_BERR_Pos
DECL|DSU_STATUSA_BERR|macro|DSU_STATUSA_BERR
DECL|DSU_STATUSA_CRSTEXT_Pos|macro|DSU_STATUSA_CRSTEXT_Pos
DECL|DSU_STATUSA_CRSTEXT|macro|DSU_STATUSA_CRSTEXT
DECL|DSU_STATUSA_DONE_Pos|macro|DSU_STATUSA_DONE_Pos
DECL|DSU_STATUSA_DONE|macro|DSU_STATUSA_DONE
DECL|DSU_STATUSA_FAIL_Pos|macro|DSU_STATUSA_FAIL_Pos
DECL|DSU_STATUSA_FAIL|macro|DSU_STATUSA_FAIL
DECL|DSU_STATUSA_MASK|macro|DSU_STATUSA_MASK
DECL|DSU_STATUSA_OFFSET|macro|DSU_STATUSA_OFFSET
DECL|DSU_STATUSA_PERR_Pos|macro|DSU_STATUSA_PERR_Pos
DECL|DSU_STATUSA_PERR|macro|DSU_STATUSA_PERR
DECL|DSU_STATUSA_RESETVALUE|macro|DSU_STATUSA_RESETVALUE
DECL|DSU_STATUSA_Type|typedef|} DSU_STATUSA_Type;
DECL|DSU_STATUSB_DBGPRES_Pos|macro|DSU_STATUSB_DBGPRES_Pos
DECL|DSU_STATUSB_DBGPRES|macro|DSU_STATUSB_DBGPRES
DECL|DSU_STATUSB_DCCD0_Pos|macro|DSU_STATUSB_DCCD0_Pos
DECL|DSU_STATUSB_DCCD0|macro|DSU_STATUSB_DCCD0
DECL|DSU_STATUSB_DCCD1_Pos|macro|DSU_STATUSB_DCCD1_Pos
DECL|DSU_STATUSB_DCCD1|macro|DSU_STATUSB_DCCD1
DECL|DSU_STATUSB_DCCD_Msk|macro|DSU_STATUSB_DCCD_Msk
DECL|DSU_STATUSB_DCCD_Pos|macro|DSU_STATUSB_DCCD_Pos
DECL|DSU_STATUSB_DCCD|macro|DSU_STATUSB_DCCD
DECL|DSU_STATUSB_HPE_Pos|macro|DSU_STATUSB_HPE_Pos
DECL|DSU_STATUSB_HPE|macro|DSU_STATUSB_HPE
DECL|DSU_STATUSB_MASK|macro|DSU_STATUSB_MASK
DECL|DSU_STATUSB_OFFSET|macro|DSU_STATUSB_OFFSET
DECL|DSU_STATUSB_PROT_Pos|macro|DSU_STATUSB_PROT_Pos
DECL|DSU_STATUSB_PROT|macro|DSU_STATUSB_PROT
DECL|DSU_STATUSB_RESETVALUE|macro|DSU_STATUSB_RESETVALUE
DECL|DSU_STATUSB_Type|typedef|} DSU_STATUSB_Type;
DECL|DSU_U2209|macro|DSU_U2209
DECL|Dsu|typedef|} Dsu;
DECL|END|member|__I DSU_END_Type END; /**< \brief Offset: 0x1008 (R/ 32) CoreSight ROM Table End */
DECL|END|member|uint32_t END:32; /*!< bit: 0..31 End Marker */
DECL|ENTRY0|member|__I DSU_ENTRY0_Type ENTRY0; /**< \brief Offset: 0x1000 (R/ 32) CoreSight ROM Table Entry 0 */
DECL|ENTRY1|member|__I DSU_ENTRY1_Type ENTRY1; /**< \brief Offset: 0x1004 (R/ 32) CoreSight ROM Table Entry 1 */
DECL|EPRES|member|uint32_t EPRES:1; /*!< bit: 0 Entry Present */
DECL|FAIL_|member|uint8_t FAIL_:1; /*!< bit: 3 Failure */
DECL|FAMILY|member|uint32_t FAMILY:5; /*!< bit: 23..27 Family */
DECL|FKBC|member|uint32_t FKBC:4; /*!< bit: 4.. 7 4KB count */
DECL|FMT|member|uint32_t FMT:1; /*!< bit: 1 Format */
DECL|HPE|member|uint8_t HPE:1; /*!< bit: 4 Hot-Plugging Enable */
DECL|JEPCC|member|uint32_t JEPCC:4; /*!< bit: 0.. 3 JEP-106 Continuation Code */
DECL|JEPIDCH|member|uint32_t JEPIDCH:3; /*!< bit: 0.. 2 JEP-106 Identity Code High */
DECL|JEPIDCL|member|uint32_t JEPIDCL:4; /*!< bit: 4.. 7 Low part of the JEP-106 Identity Code */
DECL|JEPU|member|uint32_t JEPU:1; /*!< bit: 3 JEP-106 Identity Code is used */
DECL|LENGTH|member|__IO DSU_LENGTH_Type LENGTH; /**< \brief Offset: 0x0008 (R/W 32) Length */
DECL|LENGTH|member|uint32_t LENGTH:30; /*!< bit: 2..31 Length */
DECL|MBIST|member|uint8_t MBIST:1; /*!< bit: 3 Memory built-in self-test */
DECL|MEMTYPE|member|__I DSU_MEMTYPE_Type MEMTYPE; /**< \brief Offset: 0x1FCC (R/ 32) CoreSight ROM Table Memory Type */
DECL|PARTNBH|member|uint32_t PARTNBH:4; /*!< bit: 0.. 3 Part Number High */
DECL|PARTNBL|member|uint32_t PARTNBL:8; /*!< bit: 0.. 7 Part Number Low */
DECL|PERR|member|uint8_t PERR:1; /*!< bit: 4 Protection Error */
DECL|PID0|member|__I DSU_PID0_Type PID0; /**< \brief Offset: 0x1FE0 (R/ 32) Peripheral Identification 0 */
DECL|PID1|member|__I DSU_PID1_Type PID1; /**< \brief Offset: 0x1FE4 (R/ 32) Peripheral Identification 1 */
DECL|PID2|member|__I DSU_PID2_Type PID2; /**< \brief Offset: 0x1FE8 (R/ 32) Peripheral Identification 2 */
DECL|PID3|member|__I DSU_PID3_Type PID3; /**< \brief Offset: 0x1FEC (R/ 32) Peripheral Identification 3 */
DECL|PID4|member|__I DSU_PID4_Type PID4; /**< \brief Offset: 0x1FD0 (R/ 32) Peripheral Identification 4 */
DECL|PID5|member|__I DSU_PID5_Type PID5; /**< \brief Offset: 0x1FD4 (R/ 32) Peripheral Identification 5 */
DECL|PID6|member|__I DSU_PID6_Type PID6; /**< \brief Offset: 0x1FD8 (R/ 32) Peripheral Identification 6 */
DECL|PID7|member|__I DSU_PID7_Type PID7; /**< \brief Offset: 0x1FDC (R/ 32) Peripheral Identification 7 */
DECL|PREAMBLEB0|member|uint32_t PREAMBLEB0:8; /*!< bit: 0.. 7 Preamble Byte 0 */
DECL|PREAMBLEB2|member|uint32_t PREAMBLEB2:8; /*!< bit: 0.. 7 Preamble Byte 2 */
DECL|PREAMBLEB3|member|uint32_t PREAMBLEB3:8; /*!< bit: 0.. 7 Preamble Byte 3 */
DECL|PREAMBLE|member|uint32_t PREAMBLE:4; /*!< bit: 0.. 3 Preamble */
DECL|PROCESSOR|member|uint32_t PROCESSOR:4; /*!< bit: 28..31 Processor */
DECL|PROT|member|uint8_t PROT:1; /*!< bit: 0 Protected */
DECL|REVAND|member|uint32_t REVAND:4; /*!< bit: 4.. 7 Revision Number */
DECL|REVISION|member|uint32_t REVISION:4; /*!< bit: 4.. 7 Revision Number */
DECL|REVISION|member|uint32_t REVISION:4; /*!< bit: 8..11 Revision Number */
DECL|REV_DSU|macro|REV_DSU
DECL|Reserved1|member|RoReg8 Reserved1[0x1];
DECL|Reserved2|member|RoReg8 Reserved2[0xD4];
DECL|Reserved3|member|RoReg8 Reserved3[0xF08];
DECL|Reserved4|member|RoReg8 Reserved4[0xFC0];
DECL|SERIES|member|uint32_t SERIES:6; /*!< bit: 16..21 Series */
DECL|SMEMP|member|uint32_t SMEMP:1; /*!< bit: 0 System Memory Present */
DECL|SMSA|member|uint8_t SMSA:1; /*!< bit: 7 Start Memory Stream Access */
DECL|STATUSA|member|__IO DSU_STATUSA_Type STATUSA; /**< \brief Offset: 0x0001 (R/W 8) Status A */
DECL|STATUSB|member|__I DSU_STATUSB_Type STATUSB; /**< \brief Offset: 0x0002 (R/ 8) Status B */
DECL|SWRST|member|uint8_t SWRST:1; /*!< bit: 0 Software Reset */
DECL|_SAMD20_DSU_COMPONENT_|macro|_SAMD20_DSU_COMPONENT_
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
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|uint32_t|member|uint32_t :10; /*!< bit: 2..11 Reserved */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 22 Reserved */
DECL|uint32_t|member|uint32_t :24; /*!< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /*!< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /*!< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /*!< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /*!< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /*!< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /*!< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /*!< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /*!< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /*!< bit: 0.. 1 Reserved */
DECL|uint32_t|member|uint32_t :31; /*!< bit: 1..31 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 1 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 5 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 0.. 1 Reserved */
DECL|uint8_t|member|uint8_t :3; /*!< bit: 5.. 7 Reserved */
DECL|uint8_t|member|uint8_t :3; /*!< bit: 5.. 7 Reserved */
DECL|uint8_t|member|uint8_t :4; /*!< bit: 4.. 7 Reserved */
DECL|vec|member|} vec; /*!< Structure used for vec access */
