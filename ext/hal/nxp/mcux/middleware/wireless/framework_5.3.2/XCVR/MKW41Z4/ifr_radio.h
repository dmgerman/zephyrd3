DECL|ADC_GAIN_TRIM_FAILED|enumerator|ADC_GAIN_TRIM_FAILED = 10, /* <*/
DECL|ADC_GAIN|enumerator|ADC_GAIN = 1, /* < ADC gain trim ID */
DECL|BGAP_VOLTAGE_TRIM_FAILED|enumerator|BGAP_VOLTAGE_TRIM_FAILED = 1, /* < algorithm failure in BGAP voltagetrim */
DECL|BLE_FILT_TRIM_FAILED|enumerator|BLE_FILT_TRIM_FAILED = 40, /* < */
DECL|BLE_FILT_TRIM|enumerator|BLE_FILT_TRIM = 3, /* < Baseband Bandwidth filter trim ID for BLE */
DECL|IFR_BBF_CAP_TUNE_MASK|macro|IFR_BBF_CAP_TUNE_MASK
DECL|IFR_BBF_CAP_TUNE_SHIFT|macro|IFR_BBF_CAP_TUNE_SHIFT
DECL|IFR_EOF_SYMBOL|macro|IFR_EOF_SYMBOL
DECL|IFR_ERROR_T_enum|enum|enum IFR_ERROR_T_enum
DECL|IFR_ERROR_T|typedef|typedef uint8_t IFR_ERROR_T;
DECL|IFR_RES_TUNE2_MASK|macro|IFR_RES_TUNE2_MASK
DECL|IFR_RES_TUNE2_SHIFT|macro|IFR_RES_TUNE2_SHIFT
DECL|IFR_SUCCESS|enumerator|IFR_SUCCESS = 0,
DECL|IFR_SW_ID_MAX|macro|IFR_SW_ID_MAX
DECL|IFR_SW_ID_MIN|macro|IFR_SW_ID_MIN
DECL|IFR_SW_TRIM_TBL_ENTRY_T|typedef|} IFR_SW_TRIM_TBL_ENTRY_T;
DECL|IFR_TRIM_STATUS_T_enum|enum|enum IFR_TRIM_STATUS_T_enum
DECL|IFR_TRIM_STATUS_T|typedef|typedef uint32_t IFR_TRIM_STATUS_T;
DECL|IFR_TZA_CAP_TUNE_MASK|macro|IFR_TZA_CAP_TUNE_MASK
DECL|IFR_TZA_CAP_TUNE_SHIFT|macro|IFR_TZA_CAP_TUNE_SHIFT
DECL|IFR_VERSION_HDR|macro|IFR_VERSION_HDR
DECL|IFR_VERSION_MASK|macro|IFR_VERSION_MASK
DECL|INVALID_DEST_SIZE_SHIFT|enumerator|INVALID_DEST_SIZE_SHIFT = 2, /* < the bits won't fit as specified in the destination */
DECL|INVALID_POINTER|enumerator|INVALID_POINTER = 1, /* < NULL pointer error */
DECL|IQMC_DC_GAIN_ADJ_FAILED|enumerator|IQMC_DC_GAIN_ADJ_FAILED = 8, /* < */
DECL|IQMC_GAIN_ADJ_FAILED|enumerator|IQMC_GAIN_ADJ_FAILED = 2, /* < algorithm failure in IQMC gain trim */
DECL|IQMC_PHASE_ADJ_FAILED|enumerator|IQMC_PHASE_ADJ_FAILED = 4, /* < algorithm failure in IQMC phase trim */
DECL|IS_A_SW_ID|macro|IS_A_SW_ID
DECL|IS_VALID_REG_ADDR|macro|IS_VALID_REG_ADDR
DECL|MAKE_MASKSHFT|macro|MAKE_MASKSHFT
DECL|MAKE_MASK|macro|MAKE_MASK
DECL|Q_RELATIVE_GAIN_BY_PART|enumerator|Q_RELATIVE_GAIN_BY_PART = 0, /* < Q vs I relative gain trim ID */
DECL|RDRSRC|macro|RDRSRC
DECL|SW_TRIM_ID_T_enum|enum|enum SW_TRIM_ID_T_enum
DECL|SW_TRIM_ID_T|typedef|typedef uint16_t SW_TRIM_ID_T;
DECL|TRIM_ALGORITHM_SUCCESS|enumerator|TRIM_ALGORITHM_SUCCESS = 0,
DECL|TRIM_STATUS|enumerator|TRIM_STATUS = 4, /* < Status result of the trim process (error indications) */
DECL|TRIM_VERSION|enumerator|TRIM_VERSION = 0xABCD, /* < Version number of the IFR trim algorithm/format. */
DECL|ZB_FILT_TRIM_FAILED|enumerator|ZB_FILT_TRIM_FAILED = 20, /* < */
DECL|ZB_FILT_TRIM|enumerator|ZB_FILT_TRIM = 2, /* < Baseband Bandwidth filter trim ID for BLE */
DECL|_FSL_XCVR_H_|macro|_FSL_XCVR_H_
DECL|__IFR_RADIO_H__|macro|__IFR_RADIO_H__
DECL|trim_id|member|SW_TRIM_ID_T trim_id; /* < The assigned ID */
DECL|trim_value|member|uint32_t trim_value; /* < The value fetched from IFR.*/
DECL|valid|member|uint8_t valid; /* < validity of the trim_value field after IFR processing is complete (TRUE/FALSE).*/
