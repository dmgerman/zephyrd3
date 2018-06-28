DECL|CY_SMARTIO_BAD_PARAM|enumerator|CY_SMARTIO_BAD_PARAM = CY_SMARTIO_ID | CY_PDL_STATUS_ERROR | 0x01u, /**< Bad parameter was passed */
DECL|CY_SMARTIO_CHANNEL0|macro|CY_SMARTIO_CHANNEL0
DECL|CY_SMARTIO_CHANNEL1|macro|CY_SMARTIO_CHANNEL1
DECL|CY_SMARTIO_CHANNEL2|macro|CY_SMARTIO_CHANNEL2
DECL|CY_SMARTIO_CHANNEL3|macro|CY_SMARTIO_CHANNEL3
DECL|CY_SMARTIO_CHANNEL4|macro|CY_SMARTIO_CHANNEL4
DECL|CY_SMARTIO_CHANNEL5|macro|CY_SMARTIO_CHANNEL5
DECL|CY_SMARTIO_CHANNEL6|macro|CY_SMARTIO_CHANNEL6
DECL|CY_SMARTIO_CHANNEL7|macro|CY_SMARTIO_CHANNEL7
DECL|CY_SMARTIO_CHANNEL_ALL|macro|CY_SMARTIO_CHANNEL_ALL
DECL|CY_SMARTIO_CHANNEL_NONE|macro|CY_SMARTIO_CHANNEL_NONE
DECL|CY_SMARTIO_CLK_ASYNC|enumerator|CY_SMARTIO_CLK_ASYNC = 31, /**< Asynchronous operation (only allow combinatorial logic) */
DECL|CY_SMARTIO_CLK_CHIP0|enumerator|CY_SMARTIO_CLK_CHIP0 = 8, /**< Clock sourced from signal on chip0 */
DECL|CY_SMARTIO_CLK_CHIP1|enumerator|CY_SMARTIO_CLK_CHIP1 = 9, /**< Clock sourced from signal on chip1 */
DECL|CY_SMARTIO_CLK_CHIP2|enumerator|CY_SMARTIO_CLK_CHIP2 = 10, /**< Clock sourced from signal on chip2 */
DECL|CY_SMARTIO_CLK_CHIP3|enumerator|CY_SMARTIO_CLK_CHIP3 = 11, /**< Clock sourced from signal on chip3 */
DECL|CY_SMARTIO_CLK_CHIP4|enumerator|CY_SMARTIO_CLK_CHIP4 = 12, /**< Clock sourced from signal on chip4 */
DECL|CY_SMARTIO_CLK_CHIP5|enumerator|CY_SMARTIO_CLK_CHIP5 = 13, /**< Clock sourced from signal on chip5 */
DECL|CY_SMARTIO_CLK_CHIP6|enumerator|CY_SMARTIO_CLK_CHIP6 = 14, /**< Clock sourced from signal on chip6 */
DECL|CY_SMARTIO_CLK_CHIP7|enumerator|CY_SMARTIO_CLK_CHIP7 = 15, /**< Clock sourced from signal on chip7 */
DECL|CY_SMARTIO_CLK_DIVACT|enumerator|CY_SMARTIO_CLK_DIVACT = 16, /**< Clock sourced from a peripheral clock divider (Active) */
DECL|CY_SMARTIO_CLK_DIVDS|enumerator|CY_SMARTIO_CLK_DIVDS = 17, /**< Clock sourced from a peripheral clock divider (Deep-Sleep) */
DECL|CY_SMARTIO_CLK_DIVHIB|enumerator|CY_SMARTIO_CLK_DIVHIB = 18, /**< Clock sourced from a peripheral clock divider (Hibernate) */
DECL|CY_SMARTIO_CLK_GATED|enumerator|CY_SMARTIO_CLK_GATED = 20, /**< Disables the clock. Used when turning off the block */
DECL|CY_SMARTIO_CLK_IO0|enumerator|CY_SMARTIO_CLK_IO0 = 0, /**< Clock sourced from signal on io0 */
DECL|CY_SMARTIO_CLK_IO1|enumerator|CY_SMARTIO_CLK_IO1 = 1, /**< Clock sourced from signal on io1 */
DECL|CY_SMARTIO_CLK_IO2|enumerator|CY_SMARTIO_CLK_IO2 = 2, /**< Clock sourced from signal on io2 */
DECL|CY_SMARTIO_CLK_IO3|enumerator|CY_SMARTIO_CLK_IO3 = 3, /**< Clock sourced from signal on io3 */
DECL|CY_SMARTIO_CLK_IO4|enumerator|CY_SMARTIO_CLK_IO4 = 4, /**< Clock sourced from signal on io4 */
DECL|CY_SMARTIO_CLK_IO5|enumerator|CY_SMARTIO_CLK_IO5 = 5, /**< Clock sourced from signal on io5 */
DECL|CY_SMARTIO_CLK_IO6|enumerator|CY_SMARTIO_CLK_IO6 = 6, /**< Clock sourced from signal on io6 */
DECL|CY_SMARTIO_CLK_IO7|enumerator|CY_SMARTIO_CLK_IO7 = 7, /**< Clock sourced from signal on io7 */
DECL|CY_SMARTIO_CLK_LFCLK|enumerator|CY_SMARTIO_CLK_LFCLK = 19, /**< Clock sourced from LFCLK */
DECL|CY_SMARTIO_DATA0|enumerator|CY_SMARTIO_DATA0 = 0, /**< Input DATA #0 */
DECL|CY_SMARTIO_DATA1|enumerator|CY_SMARTIO_DATA1 = 1, /**< Input DATA #1 */
DECL|CY_SMARTIO_DEINIT|macro|CY_SMARTIO_DEINIT
DECL|CY_SMARTIO_DISABLE|macro|CY_SMARTIO_DISABLE
DECL|CY_SMARTIO_DRV_VERSION_MAJOR|macro|CY_SMARTIO_DRV_VERSION_MAJOR
DECL|CY_SMARTIO_DRV_VERSION_MINOR|macro|CY_SMARTIO_DRV_VERSION_MINOR
DECL|CY_SMARTIO_DUDATA_CHIP|enumerator|CY_SMARTIO_DUDATA_CHIP = 1, /**< Chip signal [7:0] */
DECL|CY_SMARTIO_DUDATA_DATAREG|enumerator|CY_SMARTIO_DUDATA_DATAREG = 3, /**< SMARTIO.DATA register */
DECL|CY_SMARTIO_DUDATA_IO|enumerator|CY_SMARTIO_DUDATA_IO = 2, /**< I/O signal [7:0] */
DECL|CY_SMARTIO_DUDATA_ZERO|enumerator|CY_SMARTIO_DUDATA_ZERO = 0, /**< Constant 0 */
DECL|CY_SMARTIO_DUOPC_AND_OR|enumerator|CY_SMARTIO_DUOPC_AND_OR = 9, /**< out = ((DATA0 & DATA1) == 0) ? 0 : 1 */
DECL|CY_SMARTIO_DUOPC_DECR_WRAP|enumerator|CY_SMARTIO_DUOPC_DECR_WRAP = 4, /**< Decrement and wrap-around (Count down and wrap) */
DECL|CY_SMARTIO_DUOPC_DECR|enumerator|CY_SMARTIO_DUOPC_DECR = 2, /**< Decrement (Count down) */
DECL|CY_SMARTIO_DUOPC_INCR_DECR_WRAP|enumerator|CY_SMARTIO_DUOPC_INCR_DECR_WRAP = 6, /**< Increment or decrement with wrap-around (Count up/down and wrap) */
DECL|CY_SMARTIO_DUOPC_INCR_DECR|enumerator|CY_SMARTIO_DUOPC_INCR_DECR = 5, /**< Increment or decrement (Count up/down) */
DECL|CY_SMARTIO_DUOPC_INCR_WRAP|enumerator|CY_SMARTIO_DUOPC_INCR_WRAP = 3, /**< Increment and wrap-around (Count up and wrap) */
DECL|CY_SMARTIO_DUOPC_INCR|enumerator|CY_SMARTIO_DUOPC_INCR = 1, /**< Increment (Count up) */
DECL|CY_SMARTIO_DUOPC_ROR|enumerator|CY_SMARTIO_DUOPC_ROR = 7, /**< Rotate right (shift right and wrap) */
DECL|CY_SMARTIO_DUOPC_SHR_EQL|enumerator|CY_SMARTIO_DUOPC_SHR_EQL = 11, /**< Check for equality against DATA1. Also perform Shift right */
DECL|CY_SMARTIO_DUOPC_SHR_MAJ3|enumerator|CY_SMARTIO_DUOPC_SHR_MAJ3 = 10, /**< Majority 3 (Check if 2 out of 3 LSB bits are logic 1) */
DECL|CY_SMARTIO_DUOPC_SHR|enumerator|CY_SMARTIO_DUOPC_SHR = 8, /**< Shift right and shift data in through MSB */
DECL|CY_SMARTIO_DUSIZE_1|enumerator|CY_SMARTIO_DUSIZE_1 = 0, /**< 1-bit size/width operand */
DECL|CY_SMARTIO_DUSIZE_2|enumerator|CY_SMARTIO_DUSIZE_2 = 1, /**< 2-bits size/width operand */
DECL|CY_SMARTIO_DUSIZE_3|enumerator|CY_SMARTIO_DUSIZE_3 = 2, /**< 3-bits size/width operand */
DECL|CY_SMARTIO_DUSIZE_4|enumerator|CY_SMARTIO_DUSIZE_4 = 3, /**< 4-bits size/width operand */
DECL|CY_SMARTIO_DUSIZE_5|enumerator|CY_SMARTIO_DUSIZE_5 = 4, /**< 5-bits size/width operand */
DECL|CY_SMARTIO_DUSIZE_6|enumerator|CY_SMARTIO_DUSIZE_6 = 5, /**< 6-bits size/width operand */
DECL|CY_SMARTIO_DUSIZE_7|enumerator|CY_SMARTIO_DUSIZE_7 = 6, /**< 7-bits size/width operand */
DECL|CY_SMARTIO_DUSIZE_8|enumerator|CY_SMARTIO_DUSIZE_8 = 7, /**< 8-bits size/width operand */
DECL|CY_SMARTIO_DUTR_DU_OUT|enumerator|CY_SMARTIO_DUTR_DU_OUT = 2, /**< Data Unit output */
DECL|CY_SMARTIO_DUTR_INVALID|enumerator|CY_SMARTIO_DUTR_INVALID = 255, /**< Invalid input trigger selected */
DECL|CY_SMARTIO_DUTR_LUT0_OUT|enumerator|CY_SMARTIO_DUTR_LUT0_OUT = 3, /**< LUT0 output */
DECL|CY_SMARTIO_DUTR_LUT1_OUT|enumerator|CY_SMARTIO_DUTR_LUT1_OUT = 4, /**< LUT1 output */
DECL|CY_SMARTIO_DUTR_LUT2_OUT|enumerator|CY_SMARTIO_DUTR_LUT2_OUT = 5, /**< LUT2 output */
DECL|CY_SMARTIO_DUTR_LUT3_OUT|enumerator|CY_SMARTIO_DUTR_LUT3_OUT = 6, /**< LUT3 output */
DECL|CY_SMARTIO_DUTR_LUT4_OUT|enumerator|CY_SMARTIO_DUTR_LUT4_OUT = 7, /**< LUT4 output */
DECL|CY_SMARTIO_DUTR_LUT5_OUT|enumerator|CY_SMARTIO_DUTR_LUT5_OUT = 8, /**< LUT5 output */
DECL|CY_SMARTIO_DUTR_LUT6_OUT|enumerator|CY_SMARTIO_DUTR_LUT6_OUT = 9, /**< LUT6 output */
DECL|CY_SMARTIO_DUTR_LUT7_OUT|enumerator|CY_SMARTIO_DUTR_LUT7_OUT = 10, /**< LUT7 output */
DECL|CY_SMARTIO_DUTR_ONE|enumerator|CY_SMARTIO_DUTR_ONE = 1, /**< Constant 1 */
DECL|CY_SMARTIO_DUTR_ZERO|enumerator|CY_SMARTIO_DUTR_ZERO = 0, /**< Constant 0 */
DECL|CY_SMARTIO_ENABLE|macro|CY_SMARTIO_ENABLE
DECL|CY_SMARTIO_H|macro|CY_SMARTIO_H
DECL|CY_SMARTIO_ID|macro|CY_SMARTIO_ID
DECL|CY_SMARTIO_LOCKED|enumerator|CY_SMARTIO_LOCKED = CY_SMARTIO_ID | CY_PDL_STATUS_ERROR | 0x02u, /**< Smart I/O is not disabled */
DECL|CY_SMARTIO_LUT0|enumerator|CY_SMARTIO_LUT0 = 0, /**< Look-Up-Table #0 */
DECL|CY_SMARTIO_LUT1|enumerator|CY_SMARTIO_LUT1 = 1, /**< Look-Up-Table #1 */
DECL|CY_SMARTIO_LUT2|enumerator|CY_SMARTIO_LUT2 = 2, /**< Look-Up-Table #2 */
DECL|CY_SMARTIO_LUT3|enumerator|CY_SMARTIO_LUT3 = 3, /**< Look-Up-Table #3 */
DECL|CY_SMARTIO_LUT4|enumerator|CY_SMARTIO_LUT4 = 4, /**< Look-Up-Table #4 */
DECL|CY_SMARTIO_LUT5|enumerator|CY_SMARTIO_LUT5 = 5, /**< Look-Up-Table #5 */
DECL|CY_SMARTIO_LUT6|enumerator|CY_SMARTIO_LUT6 = 6, /**< Look-Up-Table #6 */
DECL|CY_SMARTIO_LUT7|enumerator|CY_SMARTIO_LUT7 = 7, /**< Look-Up-Table #7 */
DECL|CY_SMARTIO_LUTMAX|macro|CY_SMARTIO_LUTMAX
DECL|CY_SMARTIO_LUTOPC_ASYNC_SR|enumerator|CY_SMARTIO_LUTOPC_ASYNC_SR = 3, /**< Asynchronous Set/Reset mode */
DECL|CY_SMARTIO_LUTOPC_COMB|enumerator|CY_SMARTIO_LUTOPC_COMB = 0, /**< Combinatorial output */
DECL|CY_SMARTIO_LUTOPC_GATED_OUT|enumerator|CY_SMARTIO_LUTOPC_GATED_OUT = 2, /**< Sequential (gated) output */
DECL|CY_SMARTIO_LUTOPC_GATED_TR2|enumerator|CY_SMARTIO_LUTOPC_GATED_TR2 = 1, /**< TR2 gated, Combinatorial output */
DECL|CY_SMARTIO_LUTTR_CHIP0|enumerator|CY_SMARTIO_LUTTR_CHIP0 = 8, /**< Chip signal 0 (for LUT 0,1,2,3) */
DECL|CY_SMARTIO_LUTTR_CHIP1|enumerator|CY_SMARTIO_LUTTR_CHIP1 = 9, /**< Chip signal 1 (for LUT 0,1,2,3) */
DECL|CY_SMARTIO_LUTTR_CHIP2|enumerator|CY_SMARTIO_LUTTR_CHIP2 = 10, /**< Chip signal 2 (for LUT 0,1,2,3) */
DECL|CY_SMARTIO_LUTTR_CHIP3|enumerator|CY_SMARTIO_LUTTR_CHIP3 = 11, /**< Chip signal 3 (for LUT 0,1,2,3) */
DECL|CY_SMARTIO_LUTTR_CHIP4|enumerator|CY_SMARTIO_LUTTR_CHIP4 = 8, /**< Chip signal 4 (for LUT 4,5,6,7) */
DECL|CY_SMARTIO_LUTTR_CHIP5|enumerator|CY_SMARTIO_LUTTR_CHIP5 = 9, /**< Chip signal 5 (for LUT 4,5,6,7) */
DECL|CY_SMARTIO_LUTTR_CHIP6|enumerator|CY_SMARTIO_LUTTR_CHIP6 = 10, /**< Chip signal 6 (for LUT 4,5,6,7) */
DECL|CY_SMARTIO_LUTTR_CHIP7|enumerator|CY_SMARTIO_LUTTR_CHIP7 = 11, /**< Chip signal 7 (for LUT 4,5,6,7) */
DECL|CY_SMARTIO_LUTTR_DU_OUT|enumerator|CY_SMARTIO_LUTTR_DU_OUT = 0, /**< Data Unit output */
DECL|CY_SMARTIO_LUTTR_INVALID|enumerator|CY_SMARTIO_LUTTR_INVALID = 255, /**< Invalid input trigger selecttion */
DECL|CY_SMARTIO_LUTTR_IO0|enumerator|CY_SMARTIO_LUTTR_IO0 = 12, /**< I/O signal 0 (for LUT 0,1,2,3) */
DECL|CY_SMARTIO_LUTTR_IO1|enumerator|CY_SMARTIO_LUTTR_IO1 = 13, /**< I/O signal 1 (for LUT 0,1,2,3) */
DECL|CY_SMARTIO_LUTTR_IO2|enumerator|CY_SMARTIO_LUTTR_IO2 = 14, /**< I/O signal 2 (for LUT 0,1,2,3) */
DECL|CY_SMARTIO_LUTTR_IO3|enumerator|CY_SMARTIO_LUTTR_IO3 = 15, /**< I/O signal 3 (for LUT 0,1,2,3) */
DECL|CY_SMARTIO_LUTTR_IO4|enumerator|CY_SMARTIO_LUTTR_IO4 = 12, /**< I/O signal 4 (for LUT 4,5,6,7) */
DECL|CY_SMARTIO_LUTTR_IO5|enumerator|CY_SMARTIO_LUTTR_IO5 = 13, /**< I/O signal 5 (for LUT 4,5,6,7) */
DECL|CY_SMARTIO_LUTTR_IO6|enumerator|CY_SMARTIO_LUTTR_IO6 = 14, /**< I/O signal 6 (for LUT 4,5,6,7) */
DECL|CY_SMARTIO_LUTTR_IO7|enumerator|CY_SMARTIO_LUTTR_IO7 = 15, /**< I/O signal 7 (for LUT 4,5,6,7) */
DECL|CY_SMARTIO_LUTTR_LUT0_OUT|enumerator|CY_SMARTIO_LUTTR_LUT0_OUT = 0, /**< LUT0 output */
DECL|CY_SMARTIO_LUTTR_LUT1_OUT|enumerator|CY_SMARTIO_LUTTR_LUT1_OUT = 1, /**< LUT1 output */
DECL|CY_SMARTIO_LUTTR_LUT2_OUT|enumerator|CY_SMARTIO_LUTTR_LUT2_OUT = 2, /**< LUT2 output */
DECL|CY_SMARTIO_LUTTR_LUT3_OUT|enumerator|CY_SMARTIO_LUTTR_LUT3_OUT = 3, /**< LUT3 output */
DECL|CY_SMARTIO_LUTTR_LUT4_OUT|enumerator|CY_SMARTIO_LUTTR_LUT4_OUT = 4, /**< LUT4 output */
DECL|CY_SMARTIO_LUTTR_LUT5_OUT|enumerator|CY_SMARTIO_LUTTR_LUT5_OUT = 5, /**< LUT5 output */
DECL|CY_SMARTIO_LUTTR_LUT6_OUT|enumerator|CY_SMARTIO_LUTTR_LUT6_OUT = 6, /**< LUT6 output */
DECL|CY_SMARTIO_LUTTR_LUT7_OUT|enumerator|CY_SMARTIO_LUTTR_LUT7_OUT = 7, /**< LUT7 output */
DECL|CY_SMARTIO_SUCCESS|enumerator|CY_SMARTIO_SUCCESS = 0x00u, /**< Returned successful */
DECL|CY_SMARTIO_TR0|enumerator|CY_SMARTIO_TR0 = 0, /**< Input trigger #0 */
DECL|CY_SMARTIO_TR1|enumerator|CY_SMARTIO_TR1 = 1, /**< Input trigger #1 */
DECL|CY_SMARTIO_TR2|enumerator|CY_SMARTIO_TR2 = 2, /**< Input trigger #2 */
DECL|Cy_SmartIO_GetChBypass|function|__STATIC_INLINE uint8_t Cy_SmartIO_GetChBypass(SMARTIO_PRT_Type* base)
DECL|Cy_SmartIO_GetChipSync|function|__STATIC_INLINE uint8_t Cy_SmartIO_GetChipSync(SMARTIO_PRT_Type* base)
DECL|Cy_SmartIO_GetClock|function|__STATIC_INLINE cy_en_smartio_clksrc_t Cy_SmartIO_GetClock(SMARTIO_PRT_Type* base)
DECL|Cy_SmartIO_GetDataReg|function|__STATIC_INLINE uint8_t Cy_SmartIO_GetDataReg(SMARTIO_PRT_Type* base)
DECL|Cy_SmartIO_GetDuData|function|__STATIC_INLINE cy_en_smartio_dudata_t Cy_SmartIO_GetDuData(SMARTIO_PRT_Type* base, cy_en_smartio_datanum_t dataNum)
DECL|Cy_SmartIO_GetDuOpc|function|__STATIC_INLINE cy_en_smartio_duopc_t Cy_SmartIO_GetDuOpc(SMARTIO_PRT_Type* base)
DECL|Cy_SmartIO_GetDuSize|function|__STATIC_INLINE cy_en_smartio_dusize_t Cy_SmartIO_GetDuSize(SMARTIO_PRT_Type* base)
DECL|Cy_SmartIO_GetIoSync|function|__STATIC_INLINE uint8_t Cy_SmartIO_GetIoSync(SMARTIO_PRT_Type* base)
DECL|Cy_SmartIO_GetLutMap|function|__STATIC_INLINE uint8_t Cy_SmartIO_GetLutMap(SMARTIO_PRT_Type* base, cy_en_smartio_lutnum_t lutNum)
DECL|Cy_SmartIO_GetLutOpcode|function|__STATIC_INLINE cy_en_smartio_lutopc_t Cy_SmartIO_GetLutOpcode(SMARTIO_PRT_Type* base, cy_en_smartio_lutnum_t lutNum)
DECL|bypassMask|member|uint8_t bypassMask; /**< Smart I/O io<->chip channel bypass mask */
DECL|chipSyncEn|member|uint8_t chipSyncEn; /**< Syncronization enable/disable for Chip terminals */
DECL|clkSrc|member|cy_en_smartio_clksrc_t clkSrc; /**< Smart I/O instance clock source */
DECL|cy_en_smartio_clksrc_t|typedef|}cy_en_smartio_clksrc_t;
DECL|cy_en_smartio_datanum_t|typedef|}cy_en_smartio_datanum_t;
DECL|cy_en_smartio_dudata_t|typedef|}cy_en_smartio_dudata_t;
DECL|cy_en_smartio_duopc_t|typedef|}cy_en_smartio_duopc_t;
DECL|cy_en_smartio_dusize_t|typedef|}cy_en_smartio_dusize_t;
DECL|cy_en_smartio_dutr_t|typedef|}cy_en_smartio_dutr_t;
DECL|cy_en_smartio_lutnum_t|typedef|}cy_en_smartio_lutnum_t;
DECL|cy_en_smartio_lutopc_t|typedef|}cy_en_smartio_lutopc_t;
DECL|cy_en_smartio_luttr_t|typedef|}cy_en_smartio_luttr_t;
DECL|cy_en_smartio_status_t|typedef|} cy_en_smartio_status_t;
DECL|cy_en_smartio_trnum_t|typedef|}cy_en_smartio_trnum_t;
DECL|cy_stc_smartio_config_t|typedef|}cy_stc_smartio_config_t;
DECL|cy_stc_smartio_ducfg_t|typedef|}cy_stc_smartio_ducfg_t;
DECL|cy_stc_smartio_lutcfg_t|typedef|}cy_stc_smartio_lutcfg_t;
DECL|data0|member|cy_en_smartio_dudata_t data0; /**< DU input DATA0 source selection */
DECL|data1|member|cy_en_smartio_dudata_t data1; /**< DU input DATA1 source selection */
DECL|dataReg|member|uint8_t dataReg; /**< DU DATA register value */
DECL|duCfg|member|const cy_stc_smartio_ducfg_t* duCfg; /**< Pointer to Data Unit configuration (NULL if not used) */
DECL|hldOvr|member|bool hldOvr; /**< Hold override enable (true) / disable (false) */
DECL|ioSyncEn|member|uint8_t ioSyncEn; /**< Syncronization enable/disable for I/O terminals */
DECL|lutCfg0|member|const cy_stc_smartio_lutcfg_t* lutCfg0; /**< Pointer to LUT0 configuration (NULL if not used) */
DECL|lutCfg1|member|const cy_stc_smartio_lutcfg_t* lutCfg1; /**< Pointer to LUT1 configuration (NULL if not used) */
DECL|lutCfg2|member|const cy_stc_smartio_lutcfg_t* lutCfg2; /**< Pointer to LUT2 configuration (NULL if not used) */
DECL|lutCfg3|member|const cy_stc_smartio_lutcfg_t* lutCfg3; /**< Pointer to LUT3 configuration (NULL if not used) */
DECL|lutCfg4|member|const cy_stc_smartio_lutcfg_t* lutCfg4; /**< Pointer to LUT4 configuration (NULL if not used) */
DECL|lutCfg5|member|const cy_stc_smartio_lutcfg_t* lutCfg5; /**< Pointer to LUT5 configuration (NULL if not used) */
DECL|lutCfg6|member|const cy_stc_smartio_lutcfg_t* lutCfg6; /**< Pointer to LUT6 configuration (NULL if not used) */
DECL|lutCfg7|member|const cy_stc_smartio_lutcfg_t* lutCfg7; /**< Pointer to LUT7 configuration (NULL if not used) */
DECL|lutMap|member|uint8_t lutMap; /**< LUT output mapping */
DECL|opcode|member|cy_en_smartio_duopc_t opcode; /**< DU op-code */
DECL|opcode|member|cy_en_smartio_lutopc_t opcode; /**< LUT Opcode */
DECL|size|member|cy_en_smartio_dusize_t size; /**< DU operation bit size */
DECL|tr0|member|cy_en_smartio_dutr_t tr0; /**< DU input trigger 0 source selection */
DECL|tr0|member|cy_en_smartio_luttr_t tr0; /**< LUT input trigger 0 source selection */
DECL|tr1|member|cy_en_smartio_dutr_t tr1; /**< DU input trigger 1 source selection */
DECL|tr1|member|cy_en_smartio_luttr_t tr1; /**< LUT input trigger 1 source selection */
DECL|tr2|member|cy_en_smartio_dutr_t tr2; /**< DU input trigger 2 source selection */
DECL|tr2|member|cy_en_smartio_luttr_t tr2; /**< LUT input trigger 2 source selection */
