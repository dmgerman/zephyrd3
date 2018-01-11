DECL|AUTHSTATUS|member|__I MTB_AUTHSTATUS_Type AUTHSTATUS; /**< \brief Offset: 0xFB8 (R/ 32) MTB Authentication Status */
DECL|AUTOHALT|member|uint32_t AUTOHALT:1; /*!< bit: 1 Auto Halt Request */
DECL|AUTOSTOP|member|uint32_t AUTOSTOP:1; /*!< bit: 0 Auto Stop Tracing */
DECL|BASE|member|__I MTB_BASE_Type BASE; /**< \brief Offset: 0x00C (R/ 32) MTB Base */
DECL|CID0|member|__I MTB_CID0_Type CID0; /**< \brief Offset: 0xFF0 (R/ 32) CoreSight */
DECL|CID1|member|__I MTB_CID1_Type CID1; /**< \brief Offset: 0xFF4 (R/ 32) CoreSight */
DECL|CID2|member|__I MTB_CID2_Type CID2; /**< \brief Offset: 0xFF8 (R/ 32) CoreSight */
DECL|CID3|member|__I MTB_CID3_Type CID3; /**< \brief Offset: 0xFFC (R/ 32) CoreSight */
DECL|CLAIMCLR|member|__IO MTB_CLAIMCLR_Type CLAIMCLR; /**< \brief Offset: 0xFA4 (R/W 32) MTB Claim Clear */
DECL|CLAIMSET|member|__IO MTB_CLAIMSET_Type CLAIMSET; /**< \brief Offset: 0xFA0 (R/W 32) MTB Claim Set */
DECL|DEVARCH|member|__I MTB_DEVARCH_Type DEVARCH; /**< \brief Offset: 0xFBC (R/ 32) MTB Device Architecture */
DECL|DEVID|member|__I MTB_DEVID_Type DEVID; /**< \brief Offset: 0xFC8 (R/ 32) MTB Device Configuration */
DECL|DEVTYPE|member|__I MTB_DEVTYPE_Type DEVTYPE; /**< \brief Offset: 0xFCC (R/ 32) MTB Device Type */
DECL|EN|member|uint32_t EN:1; /*!< bit: 31 Main Trace Enable */
DECL|FLOW|member|__IO MTB_FLOW_Type FLOW; /**< \brief Offset: 0x008 (R/W 32) MTB Flow */
DECL|HALTREQ|member|uint32_t HALTREQ:1; /*!< bit: 9 Halt Request */
DECL|ITCTRL|member|__IO MTB_ITCTRL_Type ITCTRL; /**< \brief Offset: 0xF00 (R/W 32) MTB Integration Mode Control */
DECL|LOCKACCESS|member|__IO MTB_LOCKACCESS_Type LOCKACCESS; /**< \brief Offset: 0xFB0 (R/W 32) MTB Lock Access */
DECL|LOCKSTATUS|member|__I MTB_LOCKSTATUS_Type LOCKSTATUS; /**< \brief Offset: 0xFB4 (R/ 32) MTB Lock Status */
DECL|MASK|member|uint32_t MASK:5; /*!< bit: 0.. 4 Maximum Value of the Trace Buffer in SRAM */
DECL|MASTER|member|__IO MTB_MASTER_Type MASTER; /**< \brief Offset: 0x004 (R/W 32) MTB Master */
DECL|MTB_AUTHSTATUS_MASK|macro|MTB_AUTHSTATUS_MASK
DECL|MTB_AUTHSTATUS_OFFSET|macro|MTB_AUTHSTATUS_OFFSET
DECL|MTB_AUTHSTATUS_Type|typedef|} MTB_AUTHSTATUS_Type;
DECL|MTB_BASE_MASK|macro|MTB_BASE_MASK
DECL|MTB_BASE_OFFSET|macro|MTB_BASE_OFFSET
DECL|MTB_BASE_Type|typedef|} MTB_BASE_Type;
DECL|MTB_CID0_MASK|macro|MTB_CID0_MASK
DECL|MTB_CID0_OFFSET|macro|MTB_CID0_OFFSET
DECL|MTB_CID0_Type|typedef|} MTB_CID0_Type;
DECL|MTB_CID1_MASK|macro|MTB_CID1_MASK
DECL|MTB_CID1_OFFSET|macro|MTB_CID1_OFFSET
DECL|MTB_CID1_Type|typedef|} MTB_CID1_Type;
DECL|MTB_CID2_MASK|macro|MTB_CID2_MASK
DECL|MTB_CID2_OFFSET|macro|MTB_CID2_OFFSET
DECL|MTB_CID2_Type|typedef|} MTB_CID2_Type;
DECL|MTB_CID3_MASK|macro|MTB_CID3_MASK
DECL|MTB_CID3_OFFSET|macro|MTB_CID3_OFFSET
DECL|MTB_CID3_Type|typedef|} MTB_CID3_Type;
DECL|MTB_CLAIMCLR_MASK|macro|MTB_CLAIMCLR_MASK
DECL|MTB_CLAIMCLR_OFFSET|macro|MTB_CLAIMCLR_OFFSET
DECL|MTB_CLAIMCLR_Type|typedef|} MTB_CLAIMCLR_Type;
DECL|MTB_CLAIMSET_MASK|macro|MTB_CLAIMSET_MASK
DECL|MTB_CLAIMSET_OFFSET|macro|MTB_CLAIMSET_OFFSET
DECL|MTB_CLAIMSET_Type|typedef|} MTB_CLAIMSET_Type;
DECL|MTB_DEVARCH_MASK|macro|MTB_DEVARCH_MASK
DECL|MTB_DEVARCH_OFFSET|macro|MTB_DEVARCH_OFFSET
DECL|MTB_DEVARCH_Type|typedef|} MTB_DEVARCH_Type;
DECL|MTB_DEVID_MASK|macro|MTB_DEVID_MASK
DECL|MTB_DEVID_OFFSET|macro|MTB_DEVID_OFFSET
DECL|MTB_DEVID_Type|typedef|} MTB_DEVID_Type;
DECL|MTB_DEVTYPE_MASK|macro|MTB_DEVTYPE_MASK
DECL|MTB_DEVTYPE_OFFSET|macro|MTB_DEVTYPE_OFFSET
DECL|MTB_DEVTYPE_Type|typedef|} MTB_DEVTYPE_Type;
DECL|MTB_FLOW_AUTOHALT_Pos|macro|MTB_FLOW_AUTOHALT_Pos
DECL|MTB_FLOW_AUTOHALT|macro|MTB_FLOW_AUTOHALT
DECL|MTB_FLOW_AUTOSTOP_Pos|macro|MTB_FLOW_AUTOSTOP_Pos
DECL|MTB_FLOW_AUTOSTOP|macro|MTB_FLOW_AUTOSTOP
DECL|MTB_FLOW_MASK|macro|MTB_FLOW_MASK
DECL|MTB_FLOW_OFFSET|macro|MTB_FLOW_OFFSET
DECL|MTB_FLOW_RESETVALUE|macro|MTB_FLOW_RESETVALUE
DECL|MTB_FLOW_Type|typedef|} MTB_FLOW_Type;
DECL|MTB_FLOW_WATERMARK_Msk|macro|MTB_FLOW_WATERMARK_Msk
DECL|MTB_FLOW_WATERMARK_Pos|macro|MTB_FLOW_WATERMARK_Pos
DECL|MTB_FLOW_WATERMARK|macro|MTB_FLOW_WATERMARK
DECL|MTB_ITCTRL_MASK|macro|MTB_ITCTRL_MASK
DECL|MTB_ITCTRL_OFFSET|macro|MTB_ITCTRL_OFFSET
DECL|MTB_ITCTRL_Type|typedef|} MTB_ITCTRL_Type;
DECL|MTB_LOCKACCESS_MASK|macro|MTB_LOCKACCESS_MASK
DECL|MTB_LOCKACCESS_OFFSET|macro|MTB_LOCKACCESS_OFFSET
DECL|MTB_LOCKACCESS_Type|typedef|} MTB_LOCKACCESS_Type;
DECL|MTB_LOCKSTATUS_MASK|macro|MTB_LOCKSTATUS_MASK
DECL|MTB_LOCKSTATUS_OFFSET|macro|MTB_LOCKSTATUS_OFFSET
DECL|MTB_LOCKSTATUS_Type|typedef|} MTB_LOCKSTATUS_Type;
DECL|MTB_MASTER_EN_Pos|macro|MTB_MASTER_EN_Pos
DECL|MTB_MASTER_EN|macro|MTB_MASTER_EN
DECL|MTB_MASTER_HALTREQ_Pos|macro|MTB_MASTER_HALTREQ_Pos
DECL|MTB_MASTER_HALTREQ|macro|MTB_MASTER_HALTREQ
DECL|MTB_MASTER_MASK_Msk|macro|MTB_MASTER_MASK_Msk
DECL|MTB_MASTER_MASK_Pos|macro|MTB_MASTER_MASK_Pos
DECL|MTB_MASTER_MASK_|macro|MTB_MASTER_MASK_
DECL|MTB_MASTER_MASK|macro|MTB_MASTER_MASK
DECL|MTB_MASTER_OFFSET|macro|MTB_MASTER_OFFSET
DECL|MTB_MASTER_RAMPRIV_Pos|macro|MTB_MASTER_RAMPRIV_Pos
DECL|MTB_MASTER_RAMPRIV|macro|MTB_MASTER_RAMPRIV
DECL|MTB_MASTER_RESETVALUE|macro|MTB_MASTER_RESETVALUE
DECL|MTB_MASTER_SFRWPRIV_Pos|macro|MTB_MASTER_SFRWPRIV_Pos
DECL|MTB_MASTER_SFRWPRIV|macro|MTB_MASTER_SFRWPRIV
DECL|MTB_MASTER_TSTARTEN_Pos|macro|MTB_MASTER_TSTARTEN_Pos
DECL|MTB_MASTER_TSTARTEN|macro|MTB_MASTER_TSTARTEN
DECL|MTB_MASTER_TSTOPEN_Pos|macro|MTB_MASTER_TSTOPEN_Pos
DECL|MTB_MASTER_TSTOPEN|macro|MTB_MASTER_TSTOPEN
DECL|MTB_MASTER_Type|typedef|} MTB_MASTER_Type;
DECL|MTB_PID0_MASK|macro|MTB_PID0_MASK
DECL|MTB_PID0_OFFSET|macro|MTB_PID0_OFFSET
DECL|MTB_PID0_Type|typedef|} MTB_PID0_Type;
DECL|MTB_PID1_MASK|macro|MTB_PID1_MASK
DECL|MTB_PID1_OFFSET|macro|MTB_PID1_OFFSET
DECL|MTB_PID1_Type|typedef|} MTB_PID1_Type;
DECL|MTB_PID2_MASK|macro|MTB_PID2_MASK
DECL|MTB_PID2_OFFSET|macro|MTB_PID2_OFFSET
DECL|MTB_PID2_Type|typedef|} MTB_PID2_Type;
DECL|MTB_PID3_MASK|macro|MTB_PID3_MASK
DECL|MTB_PID3_OFFSET|macro|MTB_PID3_OFFSET
DECL|MTB_PID3_Type|typedef|} MTB_PID3_Type;
DECL|MTB_PID4_MASK|macro|MTB_PID4_MASK
DECL|MTB_PID4_OFFSET|macro|MTB_PID4_OFFSET
DECL|MTB_PID4_Type|typedef|} MTB_PID4_Type;
DECL|MTB_PID5_MASK|macro|MTB_PID5_MASK
DECL|MTB_PID5_OFFSET|macro|MTB_PID5_OFFSET
DECL|MTB_PID5_Type|typedef|} MTB_PID5_Type;
DECL|MTB_PID6_MASK|macro|MTB_PID6_MASK
DECL|MTB_PID6_OFFSET|macro|MTB_PID6_OFFSET
DECL|MTB_PID6_Type|typedef|} MTB_PID6_Type;
DECL|MTB_PID7_MASK|macro|MTB_PID7_MASK
DECL|MTB_PID7_OFFSET|macro|MTB_PID7_OFFSET
DECL|MTB_PID7_Type|typedef|} MTB_PID7_Type;
DECL|MTB_POSITION_MASK|macro|MTB_POSITION_MASK
DECL|MTB_POSITION_OFFSET|macro|MTB_POSITION_OFFSET
DECL|MTB_POSITION_POINTER_Msk|macro|MTB_POSITION_POINTER_Msk
DECL|MTB_POSITION_POINTER_Pos|macro|MTB_POSITION_POINTER_Pos
DECL|MTB_POSITION_POINTER|macro|MTB_POSITION_POINTER
DECL|MTB_POSITION_Type|typedef|} MTB_POSITION_Type;
DECL|MTB_POSITION_WRAP_Pos|macro|MTB_POSITION_WRAP_Pos
DECL|MTB_POSITION_WRAP|macro|MTB_POSITION_WRAP
DECL|MTB_U2002|macro|MTB_U2002
DECL|Mtb|typedef|} Mtb;
DECL|PID0|member|__I MTB_PID0_Type PID0; /**< \brief Offset: 0xFE0 (R/ 32) CoreSight */
DECL|PID1|member|__I MTB_PID1_Type PID1; /**< \brief Offset: 0xFE4 (R/ 32) CoreSight */
DECL|PID2|member|__I MTB_PID2_Type PID2; /**< \brief Offset: 0xFE8 (R/ 32) CoreSight */
DECL|PID3|member|__I MTB_PID3_Type PID3; /**< \brief Offset: 0xFEC (R/ 32) CoreSight */
DECL|PID4|member|__I MTB_PID4_Type PID4; /**< \brief Offset: 0xFD0 (R/ 32) CoreSight */
DECL|PID5|member|__I MTB_PID5_Type PID5; /**< \brief Offset: 0xFD4 (R/ 32) CoreSight */
DECL|PID6|member|__I MTB_PID6_Type PID6; /**< \brief Offset: 0xFD8 (R/ 32) CoreSight */
DECL|PID7|member|__I MTB_PID7_Type PID7; /**< \brief Offset: 0xFDC (R/ 32) CoreSight */
DECL|POINTER|member|uint32_t POINTER:29; /*!< bit: 3..31 Trace Packet Location Pointer */
DECL|POSITION|member|__IO MTB_POSITION_Type POSITION; /**< \brief Offset: 0x000 (R/W 32) MTB Position */
DECL|RAMPRIV|member|uint32_t RAMPRIV:1; /*!< bit: 8 SRAM Privilege */
DECL|REV_MTB|macro|REV_MTB
DECL|Reserved1|member|RoReg8 Reserved1[0xEF0];
DECL|Reserved2|member|RoReg8 Reserved2[0x9C];
DECL|Reserved3|member|RoReg8 Reserved3[0x8];
DECL|Reserved4|member|RoReg8 Reserved4[0x8];
DECL|SFRWPRIV|member|uint32_t SFRWPRIV:1; /*!< bit: 7 Special Function Register Write Privilege */
DECL|TSTARTEN|member|uint32_t TSTARTEN:1; /*!< bit: 5 Trace Start Input Enable */
DECL|TSTOPEN|member|uint32_t TSTOPEN:1; /*!< bit: 6 Trace Stop Input Enable */
DECL|WATERMARK|member|uint32_t WATERMARK:29; /*!< bit: 3..31 Watermark value */
DECL|WRAP|member|uint32_t WRAP:1; /*!< bit: 2 Pointer Value Wraps */
DECL|_SAMD21_MTB_COMPONENT_|macro|_SAMD21_MTB_COMPONENT_
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
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|uint32_t|member|uint32_t :1; /*!< bit: 2 Reserved */
DECL|uint32_t|member|uint32_t :21; /*!< bit: 10..30 Reserved */
DECL|uint32_t|member|uint32_t :2; /*!< bit: 0.. 1 Reserved */
