DECL|FSL_FLEXBUS_DRIVER_VERSION|macro|FSL_FLEXBUS_DRIVER_VERSION
DECL|_FSL_FLEXBUS_H_|macro|_FSL_FLEXBUS_H_
DECL|_flexbus_address_setup|enum|typedef enum _flexbus_address_setup
DECL|_flexbus_bytelane_shift|enum|typedef enum _flexbus_bytelane_shift
DECL|_flexbus_config|struct|typedef struct _flexbus_config
DECL|_flexbus_multiplex_group1_signal|enum|typedef enum _flexbus_multiplex_group1_signal
DECL|_flexbus_multiplex_group2_signal|enum|typedef enum _flexbus_multiplex_group2_signal
DECL|_flexbus_multiplex_group3_signal|enum|typedef enum _flexbus_multiplex_group3_signal
DECL|_flexbus_multiplex_group4_signal|enum|typedef enum _flexbus_multiplex_group4_signal
DECL|_flexbus_multiplex_group5_signal|enum|typedef enum _flexbus_multiplex_group5_signal
DECL|_flexbus_port_size|enum|typedef enum _flexbus_port_size
DECL|_flexbus_read_address_hold|enum|typedef enum _flexbus_read_address_hold
DECL|_flexbus_write_address_hold|enum|typedef enum _flexbus_write_address_hold
DECL|addressSetup|member|flexbus_address_setup_t addressSetup; /*!< Address setup setting */
DECL|autoAcknowledge|member|bool autoAcknowledge; /*!< Auto acknowledge setting */
DECL|burstRead|member|bool burstRead; /*!< Burst-Read enable */
DECL|burstWrite|member|bool burstWrite; /*!< Burst-Write enable */
DECL|byteEnableMode|member|bool byteEnableMode; /*!< Byte-enable mode support */
DECL|byteLaneShift|member|flexbus_bytelane_shift_t byteLaneShift; /*!< Byte-lane shift enable */
DECL|chipBaseAddressMask|member|uint32_t chipBaseAddressMask; /*!< Chip base address mask */
DECL|chipBaseAddress|member|uint32_t chipBaseAddress; /*!< Chip base address for using FlexBus */
DECL|chip|member|uint8_t chip; /*!< Chip FlexBus for validation */
DECL|extendTransferAddress|member|bool extendTransferAddress; /*!< Extend transfer start/extend address latch enable */
DECL|flexbus_address_setup_t|typedef|} flexbus_address_setup_t;
DECL|flexbus_bytelane_shift_t|typedef|} flexbus_bytelane_shift_t;
DECL|flexbus_config_t|typedef|} flexbus_config_t;
DECL|flexbus_multiplex_group1_t|typedef|} flexbus_multiplex_group1_t;
DECL|flexbus_multiplex_group2_t|typedef|} flexbus_multiplex_group2_t;
DECL|flexbus_multiplex_group3_t|typedef|} flexbus_multiplex_group3_t;
DECL|flexbus_multiplex_group4_t|typedef|} flexbus_multiplex_group4_t;
DECL|flexbus_multiplex_group5_t|typedef|} flexbus_multiplex_group5_t;
DECL|flexbus_port_size_t|typedef|} flexbus_port_size_t;
DECL|flexbus_read_address_hold_t|typedef|} flexbus_read_address_hold_t;
DECL|flexbus_write_address_hold_t|typedef|} flexbus_write_address_hold_t;
DECL|group1MultiplexControl|member|flexbus_multiplex_group1_t group1MultiplexControl; /*!< FlexBus Signal Group 1 Multiplex control */
DECL|group2MultiplexControl|member|flexbus_multiplex_group2_t group2MultiplexControl; /*!< FlexBus Signal Group 2 Multiplex control */
DECL|group3MultiplexControl|member|flexbus_multiplex_group3_t group3MultiplexControl; /*!< FlexBus Signal Group 3 Multiplex control */
DECL|group4MultiplexControl|member|flexbus_multiplex_group4_t group4MultiplexControl; /*!< FlexBus Signal Group 4 Multiplex control */
DECL|group5MultiplexControl|member|flexbus_multiplex_group5_t group5MultiplexControl; /*!< FlexBus Signal Group 5 Multiplex control */
DECL|kFLEXBUS_1Byte|enumerator|kFLEXBUS_1Byte = 0x01U, /*!< 8-bit port size */
DECL|kFLEXBUS_2Bytes|enumerator|kFLEXBUS_2Bytes = 0x02U /*!< 16-bit port size */
DECL|kFLEXBUS_4Bytes|enumerator|kFLEXBUS_4Bytes = 0x00U, /*!< 32-bit port size */
DECL|kFLEXBUS_FirstRisingEdge|enumerator|kFLEXBUS_FirstRisingEdge = 0x00U, /*!< Assert FB_CSn on first rising clock edge after address is asserted */
DECL|kFLEXBUS_FourthRisingEdge|enumerator|kFLEXBUS_FourthRisingEdge = 0x03U, /*!< Assert FB_CSn on fourth rising clock edge after address is asserted */
DECL|kFLEXBUS_Hold1Cycle|enumerator|kFLEXBUS_Hold1Cycle = 0x00U, /*!< Hold address and attributes one cycles after FB_CSn negates on writes */
DECL|kFLEXBUS_Hold1Or0Cycles|enumerator|kFLEXBUS_Hold1Or0Cycles = 0x00U, /*!< Hold address and attributes 1 or 0 cycles on reads */
DECL|kFLEXBUS_Hold2Cycles|enumerator|kFLEXBUS_Hold2Cycles = 0x01U, /*!< Hold address and attributes two cycles after FB_CSn negates on writes */
DECL|kFLEXBUS_Hold2Or1Cycles|enumerator|kFLEXBUS_Hold2Or1Cycles = 0x01U, /*!< Hold address and attributes 2 or 1 cycles on reads */
DECL|kFLEXBUS_Hold3Cycles|enumerator|kFLEXBUS_Hold3Cycles = 0x02U, /*!< Hold address and attributes three cycles after FB_CSn negates on writes */
DECL|kFLEXBUS_Hold3Or2Cycle|enumerator|kFLEXBUS_Hold3Or2Cycle = 0x02U, /*!< Hold address and attributes 3 or 2 cycles on reads */
DECL|kFLEXBUS_Hold4Cycles|enumerator|kFLEXBUS_Hold4Cycles = 0x03U /*!< Hold address and attributes four cycles after FB_CSn negates on writes */
DECL|kFLEXBUS_Hold4Or3Cycle|enumerator|kFLEXBUS_Hold4Or3Cycle = 0x03U /*!< Hold address and attributes 4 or 3 cycles on reads */
DECL|kFLEXBUS_MultiplexGroup1_FB_ALE|enumerator|kFLEXBUS_MultiplexGroup1_FB_ALE = 0x00U, /*!< FB_ALE */
DECL|kFLEXBUS_MultiplexGroup1_FB_CS1|enumerator|kFLEXBUS_MultiplexGroup1_FB_CS1 = 0x01U, /*!< FB_CS1 */
DECL|kFLEXBUS_MultiplexGroup1_FB_TS|enumerator|kFLEXBUS_MultiplexGroup1_FB_TS = 0x02U, /*!< FB_TS */
DECL|kFLEXBUS_MultiplexGroup2_FB_BE_31_24|enumerator|kFLEXBUS_MultiplexGroup2_FB_BE_31_24 = 0x02U, /*!< FB_BE_31_24 */
DECL|kFLEXBUS_MultiplexGroup2_FB_CS4|enumerator|kFLEXBUS_MultiplexGroup2_FB_CS4 = 0x00U, /*!< FB_CS4 */
DECL|kFLEXBUS_MultiplexGroup2_FB_TSIZ0|enumerator|kFLEXBUS_MultiplexGroup2_FB_TSIZ0 = 0x01U, /*!< FB_TSIZ0 */
DECL|kFLEXBUS_MultiplexGroup3_FB_BE_23_16|enumerator|kFLEXBUS_MultiplexGroup3_FB_BE_23_16 = 0x02U, /*!< FB_BE_23_16 */
DECL|kFLEXBUS_MultiplexGroup3_FB_CS5|enumerator|kFLEXBUS_MultiplexGroup3_FB_CS5 = 0x00U, /*!< FB_CS5 */
DECL|kFLEXBUS_MultiplexGroup3_FB_TSIZ1|enumerator|kFLEXBUS_MultiplexGroup3_FB_TSIZ1 = 0x01U, /*!< FB_TSIZ1 */
DECL|kFLEXBUS_MultiplexGroup4_FB_BE_15_8|enumerator|kFLEXBUS_MultiplexGroup4_FB_BE_15_8 = 0x02U, /*!< FB_BE_15_8 */
DECL|kFLEXBUS_MultiplexGroup4_FB_CS2|enumerator|kFLEXBUS_MultiplexGroup4_FB_CS2 = 0x01U, /*!< FB_CS2 */
DECL|kFLEXBUS_MultiplexGroup4_FB_TBST|enumerator|kFLEXBUS_MultiplexGroup4_FB_TBST = 0x00U, /*!< FB_TBST */
DECL|kFLEXBUS_MultiplexGroup5_FB_BE_7_0|enumerator|kFLEXBUS_MultiplexGroup5_FB_BE_7_0 = 0x02U, /*!< FB_BE_7_0 */
DECL|kFLEXBUS_MultiplexGroup5_FB_CS3|enumerator|kFLEXBUS_MultiplexGroup5_FB_CS3 = 0x01U, /*!< FB_CS3 */
DECL|kFLEXBUS_MultiplexGroup5_FB_TA|enumerator|kFLEXBUS_MultiplexGroup5_FB_TA = 0x00U, /*!< FB_TA */
DECL|kFLEXBUS_NotShifted|enumerator|kFLEXBUS_NotShifted = 0x00U, /*!< Not shifted. Data is left-justified on FB_AD */
DECL|kFLEXBUS_SecondRisingEdge|enumerator|kFLEXBUS_SecondRisingEdge = 0x01U, /*!< Assert FB_CSn on second rising clock edge after address is asserted */
DECL|kFLEXBUS_Shifted|enumerator|kFLEXBUS_Shifted = 0x01U, /*!< Shifted. Data is right justified on FB_AD */
DECL|kFLEXBUS_ThirdRisingEdge|enumerator|kFLEXBUS_ThirdRisingEdge = 0x02U, /*!< Assert FB_CSn on third rising clock edge after address is asserted */
DECL|portSize|member|flexbus_port_size_t portSize; /*!< Port size of transfer */
DECL|readAddressHold|member|flexbus_read_address_hold_t readAddressHold; /*!< Read address hold or deselect option */
DECL|secondaryWaitStates|member|bool secondaryWaitStates; /*!< Secondary wait states number */
DECL|waitStates|member|uint8_t waitStates; /*!< Value of wait states */
DECL|writeAddressHold|member|flexbus_write_address_hold_t writeAddressHold; /*!< Write address hold or deselect option */
DECL|writeProtect|member|bool writeProtect; /*!< Write protected */
