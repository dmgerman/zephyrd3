DECL|CY_SAR_10MV_COUNTS|macro|CY_SAR_10MV_COUNTS
DECL|CY_SAR_10UV_COUNTS|macro|CY_SAR_10UV_COUNTS
DECL|CY_SAR_10V_COUNTS|macro|CY_SAR_10V_COUNTS
DECL|CY_SAR_2US_DELAY|macro|CY_SAR_2US_DELAY
DECL|CY_SAR_AVG_CNT_128|enumerator|CY_SAR_AVG_CNT_128 = 6uL << SAR_SAMPLE_CTRL_AVG_CNT_Pos, /**< Set samples averaged to 128 */
DECL|CY_SAR_AVG_CNT_16|enumerator|CY_SAR_AVG_CNT_16 = 3uL << SAR_SAMPLE_CTRL_AVG_CNT_Pos, /**< Set samples averaged to 16 */
DECL|CY_SAR_AVG_CNT_256|enumerator|CY_SAR_AVG_CNT_256 = 7uL << SAR_SAMPLE_CTRL_AVG_CNT_Pos /**< Set samples averaged to 256 */
DECL|CY_SAR_AVG_CNT_2|enumerator|CY_SAR_AVG_CNT_2 = 0uL << SAR_SAMPLE_CTRL_AVG_CNT_Pos, /**< Set samples averaged to 2 */
DECL|CY_SAR_AVG_CNT_32|enumerator|CY_SAR_AVG_CNT_32 = 4uL << SAR_SAMPLE_CTRL_AVG_CNT_Pos, /**< Set samples averaged to 32 */
DECL|CY_SAR_AVG_CNT_4|enumerator|CY_SAR_AVG_CNT_4 = 1uL << SAR_SAMPLE_CTRL_AVG_CNT_Pos, /**< Set samples averaged to 4 */
DECL|CY_SAR_AVG_CNT_64|enumerator|CY_SAR_AVG_CNT_64 = 5uL << SAR_SAMPLE_CTRL_AVG_CNT_Pos, /**< Set samples averaged to 64 */
DECL|CY_SAR_AVG_CNT_8|enumerator|CY_SAR_AVG_CNT_8 = 2uL << SAR_SAMPLE_CTRL_AVG_CNT_Pos, /**< Set samples averaged to 8 */
DECL|CY_SAR_AVG_MODE_INTERLEAVED|enumerator|CY_SAR_AVG_MODE_INTERLEAVED = SAR_SAMPLE_CTRL_AVG_MODE_Msk, /**< Set mode to interleaved. Number of samples per scan must be 16 or less. */
DECL|CY_SAR_AVG_MODE_SEQUENTIAL_ACCUM|enumerator|CY_SAR_AVG_MODE_SEQUENTIAL_ACCUM = 0uL, /**< Set mode to sequential accumulate and dump */
DECL|CY_SAR_AVG_MODE_SEQUENTIAL_FIXED|enumerator|CY_SAR_AVG_MODE_SEQUENTIAL_FIXED = SAR_SAMPLE_CTRL_AVG_SHIFT_Msk, /**< Set mode to sequential 12-bit fixed */
DECL|CY_SAR_BAD_PARAM|enumerator|CY_SAR_BAD_PARAM = CY_SAR_ID | CY_PDL_STATUS_ERROR | 0x01uL, /**< Invalid input parameters */
DECL|CY_SAR_BYPASS_CAP_DISABLE|enumerator|CY_SAR_BYPASS_CAP_DISABLE = 0uL << SAR_CTRL_VREF_BYP_CAP_EN_Pos, /**< Disable Vref bypass cap */
DECL|CY_SAR_BYPASS_CAP_ENABLE|enumerator|CY_SAR_BYPASS_CAP_ENABLE = 1uL << SAR_CTRL_VREF_BYP_CAP_EN_Pos /**< Enable Vref bypass cap */
DECL|CY_SAR_CAP_TRIM_MAX|macro|CY_SAR_CAP_TRIM_MAX
DECL|CY_SAR_CAP_TRIM_MIN|macro|CY_SAR_CAP_TRIM_MIN
DECL|CY_SAR_CAP_TRIM|macro|CY_SAR_CAP_TRIM
DECL|CY_SAR_CHANMASK|macro|CY_SAR_CHANMASK
DECL|CY_SAR_CHANNUM|macro|CY_SAR_CHANNUM
DECL|CY_SAR_CHAN_AVG_DISABLE|enumerator|CY_SAR_CHAN_AVG_DISABLE = 0uL, /**< Disable averaging for the channel */
DECL|CY_SAR_CHAN_AVG_ENABLE|enumerator|CY_SAR_CHAN_AVG_ENABLE = 1uL << SAR_CHAN_CONFIG_AVG_EN_Pos /**< Enable averaging for the channel */
DECL|CY_SAR_CHAN_CONFIG|macro|CY_SAR_CHAN_CONFIG
DECL|CY_SAR_CHAN_DIFFERENTIAL_PAIRED|enumerator|CY_SAR_CHAN_DIFFERENTIAL_PAIRED = SAR_CHAN_CONFIG_DIFFERENTIAL_EN_Msk, /**< Differential with even-odd pair limitation */
DECL|CY_SAR_CHAN_DIFFERENTIAL_UNPAIRED|enumerator|CY_SAR_CHAN_DIFFERENTIAL_UNPAIRED = SAR_CHAN_CONFIG_NEG_ADDR_EN_Msk /**< Differential with no even-odd pair limitation */
DECL|CY_SAR_CHAN_NEG_PIN_ADDR_0|enumerator|CY_SAR_CHAN_NEG_PIN_ADDR_0 = 0uL, /**< Pin 0 on port specified in \ref cy_en_sar_chan_config_neg_port_addr_t */
DECL|CY_SAR_CHAN_NEG_PIN_ADDR_1|enumerator|CY_SAR_CHAN_NEG_PIN_ADDR_1 = 1uL << SAR_CHAN_CONFIG_NEG_PIN_ADDR_Pos, /**< Pin 1 on port specified in \ref cy_en_sar_chan_config_neg_port_addr_t */
DECL|CY_SAR_CHAN_NEG_PIN_ADDR_2|enumerator|CY_SAR_CHAN_NEG_PIN_ADDR_2 = 2uL << SAR_CHAN_CONFIG_NEG_PIN_ADDR_Pos, /**< Pin 2 on port specified in \ref cy_en_sar_chan_config_neg_port_addr_t */
DECL|CY_SAR_CHAN_NEG_PIN_ADDR_3|enumerator|CY_SAR_CHAN_NEG_PIN_ADDR_3 = 3uL << SAR_CHAN_CONFIG_NEG_PIN_ADDR_Pos, /**< Pin 3 on port specified in \ref cy_en_sar_chan_config_neg_port_addr_t */
DECL|CY_SAR_CHAN_NEG_PIN_ADDR_4|enumerator|CY_SAR_CHAN_NEG_PIN_ADDR_4 = 4uL << SAR_CHAN_CONFIG_NEG_PIN_ADDR_Pos, /**< Pin 4 on port specified in \ref cy_en_sar_chan_config_neg_port_addr_t */
DECL|CY_SAR_CHAN_NEG_PIN_ADDR_5|enumerator|CY_SAR_CHAN_NEG_PIN_ADDR_5 = 5uL << SAR_CHAN_CONFIG_NEG_PIN_ADDR_Pos, /**< Pin 5 on port specified in \ref cy_en_sar_chan_config_neg_port_addr_t */
DECL|CY_SAR_CHAN_NEG_PIN_ADDR_6|enumerator|CY_SAR_CHAN_NEG_PIN_ADDR_6 = 6uL << SAR_CHAN_CONFIG_NEG_PIN_ADDR_Pos, /**< Pin 6 on port specified in \ref cy_en_sar_chan_config_neg_port_addr_t */
DECL|CY_SAR_CHAN_NEG_PIN_ADDR_7|enumerator|CY_SAR_CHAN_NEG_PIN_ADDR_7 = 7uL << SAR_CHAN_CONFIG_NEG_PIN_ADDR_Pos, /**< Pin 7 on port specified in \ref cy_en_sar_chan_config_neg_port_addr_t */
DECL|CY_SAR_CHAN_POS_PIN_ADDR_0|enumerator|CY_SAR_CHAN_POS_PIN_ADDR_0 = 0uL, /**< Pin 0 on port specified in \ref cy_en_sar_chan_config_pos_port_addr_t */
DECL|CY_SAR_CHAN_POS_PIN_ADDR_1|enumerator|CY_SAR_CHAN_POS_PIN_ADDR_1 = 1uL << SAR_CHAN_CONFIG_POS_PIN_ADDR_Pos, /**< Pin 1 on port specified in \ref cy_en_sar_chan_config_pos_port_addr_t */
DECL|CY_SAR_CHAN_POS_PIN_ADDR_2|enumerator|CY_SAR_CHAN_POS_PIN_ADDR_2 = 2uL << SAR_CHAN_CONFIG_POS_PIN_ADDR_Pos, /**< Pin 2 on port specified in \ref cy_en_sar_chan_config_pos_port_addr_t */
DECL|CY_SAR_CHAN_POS_PIN_ADDR_3|enumerator|CY_SAR_CHAN_POS_PIN_ADDR_3 = 3uL << SAR_CHAN_CONFIG_POS_PIN_ADDR_Pos, /**< Pin 3 on port specified in \ref cy_en_sar_chan_config_pos_port_addr_t */
DECL|CY_SAR_CHAN_POS_PIN_ADDR_4|enumerator|CY_SAR_CHAN_POS_PIN_ADDR_4 = 4uL << SAR_CHAN_CONFIG_POS_PIN_ADDR_Pos, /**< Pin 4 on port specified in \ref cy_en_sar_chan_config_pos_port_addr_t */
DECL|CY_SAR_CHAN_POS_PIN_ADDR_5|enumerator|CY_SAR_CHAN_POS_PIN_ADDR_5 = 5uL << SAR_CHAN_CONFIG_POS_PIN_ADDR_Pos, /**< Pin 5 on port specified in \ref cy_en_sar_chan_config_pos_port_addr_t */
DECL|CY_SAR_CHAN_POS_PIN_ADDR_6|enumerator|CY_SAR_CHAN_POS_PIN_ADDR_6 = 6uL << SAR_CHAN_CONFIG_POS_PIN_ADDR_Pos, /**< Pin 6 on port specified in \ref cy_en_sar_chan_config_pos_port_addr_t */
DECL|CY_SAR_CHAN_POS_PIN_ADDR_7|enumerator|CY_SAR_CHAN_POS_PIN_ADDR_7 = 7uL << SAR_CHAN_CONFIG_POS_PIN_ADDR_Pos, /**< Pin 7 on port specified in \ref cy_en_sar_chan_config_pos_port_addr_t */
DECL|CY_SAR_CHAN_SAMPLE_TIME_0|enumerator|CY_SAR_CHAN_SAMPLE_TIME_0 = 0uL, /**< Use sample time 0 for the channel */
DECL|CY_SAR_CHAN_SAMPLE_TIME_1|enumerator|CY_SAR_CHAN_SAMPLE_TIME_1 = 1uL << SAR_CHAN_CONFIG_SAMPLE_TIME_SEL_Pos, /**< Use sample time 1 for the channel */
DECL|CY_SAR_CHAN_SAMPLE_TIME_2|enumerator|CY_SAR_CHAN_SAMPLE_TIME_2 = 2uL << SAR_CHAN_CONFIG_SAMPLE_TIME_SEL_Pos, /**< Use sample time 2 for the channel */
DECL|CY_SAR_CHAN_SAMPLE_TIME_3|enumerator|CY_SAR_CHAN_SAMPLE_TIME_3 = 3uL << SAR_CHAN_CONFIG_SAMPLE_TIME_SEL_Pos, /**< Use sample time 3 for the channel */
DECL|CY_SAR_CHAN_SINGLE_ENDED|enumerator|CY_SAR_CHAN_SINGLE_ENDED = 0uL, /**< Single ended channel */
DECL|CY_SAR_CLEAR_ALL_SWITCHES|macro|CY_SAR_CLEAR_ALL_SWITCHES
DECL|CY_SAR_COMP_PWR_100|enumerator|CY_SAR_COMP_PWR_100 = 0uL << SAR_CTRL_COMP_PWR_Pos, /**< 100% power, use this for > 2 Msps */
DECL|CY_SAR_COMP_PWR_10|enumerator|CY_SAR_COMP_PWR_10 = 7uL << SAR_CTRL_COMP_PWR_Pos, /**< 10% power, use this for < 100 ksps */
DECL|CY_SAR_COMP_PWR_20|enumerator|CY_SAR_COMP_PWR_20 = 6uL << SAR_CTRL_COMP_PWR_Pos, /**< 20% power, use this for TDB sps */
DECL|CY_SAR_COMP_PWR_30|enumerator|CY_SAR_COMP_PWR_30 = 5uL << SAR_CTRL_COMP_PWR_Pos, /**< 30% power, use this for 100 - 250 ksps */
DECL|CY_SAR_COMP_PWR_40|enumerator|CY_SAR_COMP_PWR_40 = 4uL << SAR_CTRL_COMP_PWR_Pos, /**< 40% power, use this for 250 - 500 ksps */
DECL|CY_SAR_COMP_PWR_50|enumerator|CY_SAR_COMP_PWR_50 = 3uL << SAR_CTRL_COMP_PWR_Pos, /**< 50% power, use this for 500 ksps - 1 Msps */
DECL|CY_SAR_COMP_PWR_60|enumerator|CY_SAR_COMP_PWR_60 = 2uL << SAR_CTRL_COMP_PWR_Pos, /**< 60% power, use this for 1.0 - 1.5 Msps */
DECL|CY_SAR_COMP_PWR_80|enumerator|CY_SAR_COMP_PWR_80 = 1uL << SAR_CTRL_COMP_PWR_Pos, /**< 80% power, use this for 1.5 - 2 Msps */
DECL|CY_SAR_CONVERSION_NOT_COMPLETE|enumerator|CY_SAR_CONVERSION_NOT_COMPLETE = CY_SAR_ID | CY_PDL_STATUS_ERROR | 0x03uL, /**< SAR conversion is not complete */
DECL|CY_SAR_CTRL_COMP_DLY_10|enumerator|CY_SAR_CTRL_COMP_DLY_10 = 2uL << SAR_CTRL_COMP_DLY_Pos, /**< 10 ns delay, use for SAR conversion rate up to 1.5 Msps */
DECL|CY_SAR_CTRL_COMP_DLY_12|enumerator|CY_SAR_CTRL_COMP_DLY_12 = 3uL << SAR_CTRL_COMP_DLY_Pos /**< 12 ns delay, use for SAR conversion rate up to 1 Msps */
DECL|CY_SAR_CTRL_COMP_DLY_2P5|enumerator|CY_SAR_CTRL_COMP_DLY_2P5 = 0uL << SAR_CTRL_COMP_DLY_Pos, /**< 2.5 ns delay, use for SAR conversion rate up to 2.5 Msps */
DECL|CY_SAR_CTRL_COMP_DLY_4|enumerator|CY_SAR_CTRL_COMP_DLY_4 = 1uL << SAR_CTRL_COMP_DLY_Pos, /**< 4 ns delay, use for SAR conversion rate up to 2.0 Msps */
DECL|CY_SAR_CTRL_NEGVREF_FW_ONLY|enumerator|CY_SAR_CTRL_NEGVREF_FW_ONLY = 0uL << SAR_CTRL_SAR_HW_CTRL_NEGVREF_Pos, /**< Only firmware control of the switch */
DECL|CY_SAR_CTRL_NEGVREF_HW|enumerator|CY_SAR_CTRL_NEGVREF_HW = 1uL << SAR_CTRL_SAR_HW_CTRL_NEGVREF_Pos /**< Enable hardware control of the switch */
DECL|CY_SAR_CTRL|macro|CY_SAR_CTRL
DECL|CY_SAR_DEEPSLEEP_SARMUX_OFF|enumerator|CY_SAR_DEEPSLEEP_SARMUX_OFF = 0uL << SAR_CTRL_DEEPSLEEP_ON_Pos, /**< Disable SARMUX operation during Deep Sleep */
DECL|CY_SAR_DEEPSLEEP_SARMUX_ON|enumerator|CY_SAR_DEEPSLEEP_SARMUX_ON = 1uL << SAR_CTRL_DEEPSLEEP_ON_Pos /**< Enable SARMUX operation during Deep Sleep */
DECL|CY_SAR_DEINIT_SQ_CTRL|macro|CY_SAR_DEINIT_SQ_CTRL
DECL|CY_SAR_DEINIT|macro|CY_SAR_DEINIT
DECL|CY_SAR_DIFFERENTIAL_SIGNED|enumerator|CY_SAR_DIFFERENTIAL_SIGNED = 1uL << SAR_SAMPLE_CTRL_DIFFERENTIAL_SIGNED_Pos /**< Result data for differential channels is signed */
DECL|CY_SAR_DIFFERENTIAL_UNSIGNED|enumerator|CY_SAR_DIFFERENTIAL_UNSIGNED = 0uL << SAR_SAMPLE_CTRL_DIFFERENTIAL_SIGNED_Pos, /**< Result data for differential channels is unsigned */
DECL|CY_SAR_DRV_VERSION_MAJOR|macro|CY_SAR_DRV_VERSION_MAJOR
DECL|CY_SAR_DRV_VERSION_MINOR|macro|CY_SAR_DRV_VERSION_MINOR
DECL|CY_SAR_H|macro|CY_SAR_H
DECL|CY_SAR_ID|macro|CY_SAR_ID
DECL|CY_SAR_INTRMASK|macro|CY_SAR_INTRMASK
DECL|CY_SAR_INTR_EOS_MASK|enumerator|CY_SAR_INTR_EOS_MASK = SAR_INTR_MASK_EOS_MASK_Msk, /**< Enable end of scan (EOS) interrupt */
DECL|CY_SAR_INTR_FW_COLLISION_MASK|enumerator|CY_SAR_INTR_FW_COLLISION_MASK = SAR_INTR_MASK_FW_COLLISION_MASK_Msk, /**< Enable firmware collision interrupt */
DECL|CY_SAR_INTR_MASK_NONE|enumerator|CY_SAR_INTR_MASK_NONE = 0uL, /**< Disable all interrupt sources */
DECL|CY_SAR_INTR_OVERFLOW_MASK|enumerator|CY_SAR_INTR_OVERFLOW_MASK = SAR_INTR_MASK_OVERFLOW_MASK_Msk, /**< Enable overflow interrupt */
DECL|CY_SAR_LEFT_ALIGN|enumerator|CY_SAR_LEFT_ALIGN = 1uL << SAR_SAMPLE_CTRL_LEFT_ALIGN_Pos /**< Left align result data to bits [15:4] */
DECL|CY_SAR_MAX_NUM_CHANNELS|macro|CY_SAR_MAX_NUM_CHANNELS
DECL|CY_SAR_MUX_FW_AMUXBUSA_VMINUS|enumerator|CY_SAR_MUX_FW_AMUXBUSA_VMINUS = SAR_MUX_SWITCH0_MUX_FW_AMUXBUSA_VMINUS_Msk, /**< Switch between AMUXBUSA and vminus of SARADC */
DECL|CY_SAR_MUX_FW_AMUXBUSA_VPLUS|enumerator|CY_SAR_MUX_FW_AMUXBUSA_VPLUS = SAR_MUX_SWITCH0_MUX_FW_AMUXBUSA_VPLUS_Msk, /**< Switch between AMUXBUSA and vplus of SARADC */
DECL|CY_SAR_MUX_FW_AMUXBUSB_VMINUS|enumerator|CY_SAR_MUX_FW_AMUXBUSB_VMINUS = SAR_MUX_SWITCH0_MUX_FW_AMUXBUSB_VMINUS_Msk, /**< Switch between AMUXBUSB and vminus of SARADC */
DECL|CY_SAR_MUX_FW_AMUXBUSB_VPLUS|enumerator|CY_SAR_MUX_FW_AMUXBUSB_VPLUS = SAR_MUX_SWITCH0_MUX_FW_AMUXBUSB_VPLUS_Msk, /**< Switch between AMUXBUSB and vplus of SARADC */
DECL|CY_SAR_MUX_FW_P0_VMINUS|enumerator|CY_SAR_MUX_FW_P0_VMINUS = SAR_MUX_SWITCH0_MUX_FW_P0_VMINUS_Msk, /**< Switch between Pin 0 of SARMUX and Vminus of SARADC */
DECL|CY_SAR_MUX_FW_P0_VPLUS|enumerator|CY_SAR_MUX_FW_P0_VPLUS = SAR_MUX_SWITCH0_MUX_FW_P0_VPLUS_Msk, /**< Switch between Pin 0 of SARMUX and Vplus of SARADC */
DECL|CY_SAR_MUX_FW_P1_VMINUS|enumerator|CY_SAR_MUX_FW_P1_VMINUS = SAR_MUX_SWITCH0_MUX_FW_P1_VMINUS_Msk, /**< Switch between Pin 1 of SARMUX and Vminus of SARADC */
DECL|CY_SAR_MUX_FW_P1_VPLUS|enumerator|CY_SAR_MUX_FW_P1_VPLUS = SAR_MUX_SWITCH0_MUX_FW_P1_VPLUS_Msk, /**< Switch between Pin 1 of SARMUX and Vplus of SARADC */
DECL|CY_SAR_MUX_FW_P2_VMINUS|enumerator|CY_SAR_MUX_FW_P2_VMINUS = SAR_MUX_SWITCH0_MUX_FW_P2_VMINUS_Msk, /**< Switch between Pin 2 of SARMUX and Vminus of SARADC */
DECL|CY_SAR_MUX_FW_P2_VPLUS|enumerator|CY_SAR_MUX_FW_P2_VPLUS = SAR_MUX_SWITCH0_MUX_FW_P2_VPLUS_Msk, /**< Switch between Pin 2 of SARMUX and Vplus of SARADC */
DECL|CY_SAR_MUX_FW_P3_VMINUS|enumerator|CY_SAR_MUX_FW_P3_VMINUS = SAR_MUX_SWITCH0_MUX_FW_P3_VMINUS_Msk, /**< Switch between Pin 3 of SARMUX and Vminus of SARADC */
DECL|CY_SAR_MUX_FW_P3_VPLUS|enumerator|CY_SAR_MUX_FW_P3_VPLUS = SAR_MUX_SWITCH0_MUX_FW_P3_VPLUS_Msk, /**< Switch between Pin 3 of SARMUX and Vplus of SARADC */
DECL|CY_SAR_MUX_FW_P4_COREIO0|enumerator|CY_SAR_MUX_FW_P4_COREIO0 = SAR_MUX_SWITCH0_MUX_FW_P4_COREIO0_Msk, /**< Switch between Pin 4 of SARMUX and coreio0, if present */
DECL|CY_SAR_MUX_FW_P4_VMINUS|enumerator|CY_SAR_MUX_FW_P4_VMINUS = SAR_MUX_SWITCH0_MUX_FW_P4_VMINUS_Msk, /**< Switch between Pin 4 of SARMUX and Vminus of SARADC */
DECL|CY_SAR_MUX_FW_P4_VPLUS|enumerator|CY_SAR_MUX_FW_P4_VPLUS = SAR_MUX_SWITCH0_MUX_FW_P4_VPLUS_Msk, /**< Switch between Pin 4 of SARMUX and Vplus of SARADC */
DECL|CY_SAR_MUX_FW_P5_COREIO1|enumerator|CY_SAR_MUX_FW_P5_COREIO1 = SAR_MUX_SWITCH0_MUX_FW_P5_COREIO1_Msk, /**< Switch between Pin 5 of SARMUX and coreio1, if present */
DECL|CY_SAR_MUX_FW_P5_VMINUS|enumerator|CY_SAR_MUX_FW_P5_VMINUS = SAR_MUX_SWITCH0_MUX_FW_P5_VMINUS_Msk, /**< Switch between Pin 5 of SARMUX and Vminus of SARADC */
DECL|CY_SAR_MUX_FW_P5_VPLUS|enumerator|CY_SAR_MUX_FW_P5_VPLUS = SAR_MUX_SWITCH0_MUX_FW_P5_VPLUS_Msk, /**< Switch between Pin 5 of SARMUX and Vplus of SARADC */
DECL|CY_SAR_MUX_FW_P6_COREIO2|enumerator|CY_SAR_MUX_FW_P6_COREIO2 = SAR_MUX_SWITCH0_MUX_FW_P6_COREIO2_Msk, /**< Switch between Pin 6 of SARMUX and coreio2, if present */
DECL|CY_SAR_MUX_FW_P6_VMINUS|enumerator|CY_SAR_MUX_FW_P6_VMINUS = SAR_MUX_SWITCH0_MUX_FW_P6_VMINUS_Msk, /**< Switch between Pin 6 of SARMUX and Vminus of SARADC */
DECL|CY_SAR_MUX_FW_P6_VPLUS|enumerator|CY_SAR_MUX_FW_P6_VPLUS = SAR_MUX_SWITCH0_MUX_FW_P6_VPLUS_Msk, /**< Switch between Pin 6 of SARMUX and Vplus of SARADC */
DECL|CY_SAR_MUX_FW_P7_COREIO3|enumerator|CY_SAR_MUX_FW_P7_COREIO3 = SAR_MUX_SWITCH0_MUX_FW_P7_COREIO3_Msk, /**< Switch between Pin 7 of SARMUX and coreio3, if present */
DECL|CY_SAR_MUX_FW_P7_VMINUS|enumerator|CY_SAR_MUX_FW_P7_VMINUS = SAR_MUX_SWITCH0_MUX_FW_P7_VMINUS_Msk, /**< Switch between Pin 7 of SARMUX and Vminus of SARADC */
DECL|CY_SAR_MUX_FW_P7_VPLUS|enumerator|CY_SAR_MUX_FW_P7_VPLUS = SAR_MUX_SWITCH0_MUX_FW_P7_VPLUS_Msk, /**< Switch between Pin 7 of SARMUX and Vplus of SARADC */
DECL|CY_SAR_MUX_FW_SARBUS0_VMINUS|enumerator|CY_SAR_MUX_FW_SARBUS0_VMINUS = SAR_MUX_SWITCH0_MUX_FW_SARBUS0_VMINUS_Msk, /**< Switch between SARBUS0 and vminus of SARADC */
DECL|CY_SAR_MUX_FW_SARBUS0_VPLUS|enumerator|CY_SAR_MUX_FW_SARBUS0_VPLUS = SAR_MUX_SWITCH0_MUX_FW_SARBUS0_VPLUS_Msk, /**< Switch between SARBUS0 and vplus of SARADC */
DECL|CY_SAR_MUX_FW_SARBUS1_VMINUS|enumerator|CY_SAR_MUX_FW_SARBUS1_VMINUS = SAR_MUX_SWITCH0_MUX_FW_SARBUS1_VMINUS_Msk, /**< Switch between SARBUS1 and vminus of SARADC */
DECL|CY_SAR_MUX_FW_SARBUS1_VPLUS|enumerator|CY_SAR_MUX_FW_SARBUS1_VPLUS = SAR_MUX_SWITCH0_MUX_FW_SARBUS1_VPLUS_Msk, /**< Switch between SARBUS1 and vplus of SARADC */
DECL|CY_SAR_MUX_FW_TEMP_VPLUS|enumerator|CY_SAR_MUX_FW_TEMP_VPLUS = SAR_MUX_SWITCH0_MUX_FW_TEMP_VPLUS_Msk, /**< Switch between the DieTemp sensor and vplus of SARADC */
DECL|CY_SAR_MUX_FW_VSSA_VMINUS|enumerator|CY_SAR_MUX_FW_VSSA_VMINUS = SAR_MUX_SWITCH0_MUX_FW_VSSA_VMINUS_Msk, /**< Switch between VSSA and Vminus of SARADC */
DECL|CY_SAR_MUX_SQ_CTRL_AMUXBUSA|enumerator|CY_SAR_MUX_SQ_CTRL_AMUXBUSA = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_AMUXBUSA_Msk, /**< Enable SARSEQ control of AMUXBUSA switches (for Vplus and Vminus) */
DECL|CY_SAR_MUX_SQ_CTRL_AMUXBUSB|enumerator|CY_SAR_MUX_SQ_CTRL_AMUXBUSB = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_AMUXBUSB_Msk, /**< Enable SARSEQ control of AMUXBUSB switches (for Vplus and Vminus) */
DECL|CY_SAR_MUX_SQ_CTRL_P0|enumerator|CY_SAR_MUX_SQ_CTRL_P0 = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_P0_Msk, /**< Enable SARSEQ control of Pin 0 switches (for Vplus and Vminus) of SARMUX dedicated port */
DECL|CY_SAR_MUX_SQ_CTRL_P1|enumerator|CY_SAR_MUX_SQ_CTRL_P1 = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_P1_Msk, /**< Enable SARSEQ control of Pin 1 switches (for Vplus and Vminus) of SARMUX dedicated port */
DECL|CY_SAR_MUX_SQ_CTRL_P2|enumerator|CY_SAR_MUX_SQ_CTRL_P2 = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_P2_Msk, /**< Enable SARSEQ control of Pin 2 switches (for Vplus and Vminus) of SARMUX dedicated port */
DECL|CY_SAR_MUX_SQ_CTRL_P3|enumerator|CY_SAR_MUX_SQ_CTRL_P3 = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_P3_Msk, /**< Enable SARSEQ control of Pin 3 switches (for Vplus and Vminus) of SARMUX dedicated port */
DECL|CY_SAR_MUX_SQ_CTRL_P4|enumerator|CY_SAR_MUX_SQ_CTRL_P4 = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_P4_Msk, /**< Enable SARSEQ control of Pin 4 switches (for Vplus and Vminus) of SARMUX dedicated port */
DECL|CY_SAR_MUX_SQ_CTRL_P5|enumerator|CY_SAR_MUX_SQ_CTRL_P5 = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_P5_Msk, /**< Enable SARSEQ control of Pin 5 switches (for Vplus and Vminus) of SARMUX dedicated port */
DECL|CY_SAR_MUX_SQ_CTRL_P6|enumerator|CY_SAR_MUX_SQ_CTRL_P6 = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_P6_Msk, /**< Enable SARSEQ control of Pin 6 switches (for Vplus and Vminus) of SARMUX dedicated port */
DECL|CY_SAR_MUX_SQ_CTRL_P7|enumerator|CY_SAR_MUX_SQ_CTRL_P7 = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_P7_Msk, /**< Enable SARSEQ control of Pin 7 switches (for Vplus and Vminus) of SARMUX dedicated port */
DECL|CY_SAR_MUX_SQ_CTRL_SARBUS0|enumerator|CY_SAR_MUX_SQ_CTRL_SARBUS0 = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_SARBUS0_Msk, /**< Enable SARSEQ control of SARBUS0 switches (for Vplus and Vminus) */
DECL|CY_SAR_MUX_SQ_CTRL_SARBUS1|enumerator|CY_SAR_MUX_SQ_CTRL_SARBUS1 = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_SARBUS1_Msk, /**< Enable SARSEQ control of SARBUS1 switches (for Vplus and Vminus) */
DECL|CY_SAR_MUX_SQ_CTRL_TEMP|enumerator|CY_SAR_MUX_SQ_CTRL_TEMP = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_TEMP_Msk, /**< Enable SARSEQ control of the switch between DieTemp and Vplus */
DECL|CY_SAR_MUX_SQ_CTRL_VSSA|enumerator|CY_SAR_MUX_SQ_CTRL_VSSA = SAR_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_VSSA_Msk, /**< Enable SARSEQ control of the switch between VSSA and Vminus */
DECL|CY_SAR_MUX_SWITCH0|enumerator|CY_SAR_MUX_SWITCH0 = 0uL, /**< SARMUX switch control register */
DECL|CY_SAR_NEG_PORT_ADDR_AROUTE_VIRT1|enumerator|CY_SAR_NEG_PORT_ADDR_AROUTE_VIRT1 = 6uL << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos, /**< AROUTE virtual port (VPORT1), if present */
DECL|CY_SAR_NEG_PORT_ADDR_AROUTE_VIRT2|enumerator|CY_SAR_NEG_PORT_ADDR_AROUTE_VIRT2 = 5uL << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos, /**< AROUTE virtual port (VPORT2), if present */
DECL|CY_SAR_NEG_PORT_ADDR_SARMUX_VIRT|enumerator|CY_SAR_NEG_PORT_ADDR_SARMUX_VIRT = 7uL << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos, /**< SARMUX virtual port for AMUXBUSA/B */
DECL|CY_SAR_NEG_PORT_ADDR_SARMUX|enumerator|CY_SAR_NEG_PORT_ADDR_SARMUX = 0uL, /**< Dedicated SARMUX port with 8 possible pins */
DECL|CY_SAR_NEG_SEL_ACORE|enumerator|CY_SAR_NEG_SEL_ACORE = 6uL << SAR_CTRL_NEG_SEL_Pos, /**< Connect Vminus to an ACORE in AROUTE */
DECL|CY_SAR_NEG_SEL_P1|enumerator|CY_SAR_NEG_SEL_P1 = 2uL << SAR_CTRL_NEG_SEL_Pos, /**< Connect Vminus to Pin 1 of SARMUX dedicated port */
DECL|CY_SAR_NEG_SEL_P3|enumerator|CY_SAR_NEG_SEL_P3 = 3uL << SAR_CTRL_NEG_SEL_Pos, /**< Connect Vminus to Pin 3 of SARMUX dedicated port */
DECL|CY_SAR_NEG_SEL_P5|enumerator|CY_SAR_NEG_SEL_P5 = 4uL << SAR_CTRL_NEG_SEL_Pos, /**< Connect Vminus to Pin 5 of SARMUX dedicated port */
DECL|CY_SAR_NEG_SEL_P7|enumerator|CY_SAR_NEG_SEL_P7 = 5uL << SAR_CTRL_NEG_SEL_Pos, /**< Connect Vminus to Pin 6 of SARMUX dedicated port */
DECL|CY_SAR_NEG_SEL_VREF|enumerator|CY_SAR_NEG_SEL_VREF = 7uL << SAR_CTRL_NEG_SEL_Pos, /**< Connect Vminus to VREF input of SARADC */
DECL|CY_SAR_NEG_SEL_VSSA_KELVIN|enumerator|CY_SAR_NEG_SEL_VSSA_KELVIN = 0uL << SAR_CTRL_NEG_SEL_Pos, /**< Connect Vminus to VSSA_KELVIN */
DECL|CY_SAR_POS_PORT_ADDR_AROUTE_VIRT1|enumerator|CY_SAR_POS_PORT_ADDR_AROUTE_VIRT1 = 6uL << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos, /**< AROUTE virtual port (VPORT1), if present */
DECL|CY_SAR_POS_PORT_ADDR_AROUTE_VIRT2|enumerator|CY_SAR_POS_PORT_ADDR_AROUTE_VIRT2 = 5uL << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos, /**< AROUTE virtual port (VPORT2), if present */
DECL|CY_SAR_POS_PORT_ADDR_CTB0|enumerator|CY_SAR_POS_PORT_ADDR_CTB0 = 1uL << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos, /**< Outputs from CTB0, if present */
DECL|CY_SAR_POS_PORT_ADDR_CTB1|enumerator|CY_SAR_POS_PORT_ADDR_CTB1 = 2uL << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos, /**< Outputs from CTB1, if present */
DECL|CY_SAR_POS_PORT_ADDR_CTB2|enumerator|CY_SAR_POS_PORT_ADDR_CTB2 = 3uL << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos, /**< Outputs from CTB2, if present */
DECL|CY_SAR_POS_PORT_ADDR_CTB3|enumerator|CY_SAR_POS_PORT_ADDR_CTB3 = 4uL << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos, /**< Outputs from CTB3, if present */
DECL|CY_SAR_POS_PORT_ADDR_SARMUX_VIRT|enumerator|CY_SAR_POS_PORT_ADDR_SARMUX_VIRT = 7uL << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos, /**< SARMUX virtual port for DieTemp and AMUXBUSA/B */
DECL|CY_SAR_POS_PORT_ADDR_SARMUX|enumerator|CY_SAR_POS_PORT_ADDR_SARMUX = 0uL, /**< Dedicated SARMUX port with 8 possible pins */
DECL|CY_SAR_RANGECOND|macro|CY_SAR_RANGECOND
DECL|CY_SAR_RANGE_COND_ABOVE|enumerator|CY_SAR_RANGE_COND_ABOVE = 2uL, /**< Range interrupt detected when RANGE_HIGH <= result */
DECL|CY_SAR_RANGE_COND_BELOW|enumerator|CY_SAR_RANGE_COND_BELOW = 0uL, /**< Range interrupt detected when result < RANGE_LOW */
DECL|CY_SAR_RANGE_COND_INSIDE|enumerator|CY_SAR_RANGE_COND_INSIDE = 1uL, /**< Range interrupt detected when RANGE_LOW <= result < RANGE_HIGH */
DECL|CY_SAR_RANGE_COND_OUTSIDE|enumerator|CY_SAR_RANGE_COND_OUTSIDE = 3uL, /**< Range interrupt detected when result < RANGE_LOW || RANGE_HIGH <= result */
DECL|CY_SAR_RANGE_HIGH_SHIFT|enumerator|CY_SAR_RANGE_HIGH_SHIFT = SAR_RANGE_THRES_RANGE_HIGH_Pos, /**< Shift for setting upper limit of range detection */
DECL|CY_SAR_RANGE_LIMIT_MAX|macro|CY_SAR_RANGE_LIMIT_MAX
DECL|CY_SAR_RANGE_LIMIT|macro|CY_SAR_RANGE_LIMIT
DECL|CY_SAR_RANGE_LOW_SHIFT|enumerator|CY_SAR_RANGE_LOW_SHIFT = SAR_RANGE_THRES_RANGE_LOW_Pos, /**< Shift for setting lower limit of range detection */
DECL|CY_SAR_REG_CHAN_CONFIG_MASK|macro|CY_SAR_REG_CHAN_CONFIG_MASK
DECL|CY_SAR_REG_CTRL_MASK|macro|CY_SAR_REG_CTRL_MASK
DECL|CY_SAR_REG_SAMPLE_CTRL_MASK|macro|CY_SAR_REG_SAMPLE_CTRL_MASK
DECL|CY_SAR_REG_SAMPLE_TIME_MASK|macro|CY_SAR_REG_SAMPLE_TIME_MASK
DECL|CY_SAR_RETURN_STATUS|enumerator|CY_SAR_RETURN_STATUS = 0uL, /**< Immediately returns the conversion status. */
DECL|CY_SAR_RETURN|macro|CY_SAR_RETURN
DECL|CY_SAR_RIGHT_ALIGN|enumerator|CY_SAR_RIGHT_ALIGN = 0uL << SAR_SAMPLE_CTRL_LEFT_ALIGN_Pos, /**< Right align result data to bits [11:0] with sign extension to 16 bits if channel is signed */
DECL|CY_SAR_SAMPLE_CTRL|macro|CY_SAR_SAMPLE_CTRL
DECL|CY_SAR_SAMPLE_TIME0_SHIFT|enumerator|CY_SAR_SAMPLE_TIME0_SHIFT = SAR_SAMPLE_TIME01_SAMPLE_TIME0_Pos, /**< Shift for sample time 0 */
DECL|CY_SAR_SAMPLE_TIME1_SHIFT|enumerator|CY_SAR_SAMPLE_TIME1_SHIFT = SAR_SAMPLE_TIME01_SAMPLE_TIME1_Pos, /**< Shift for sample time 1 */
DECL|CY_SAR_SAMPLE_TIME2_SHIFT|enumerator|CY_SAR_SAMPLE_TIME2_SHIFT = SAR_SAMPLE_TIME23_SAMPLE_TIME2_Pos, /**< Shift for sample time 2 */
DECL|CY_SAR_SAMPLE_TIME3_SHIFT|enumerator|CY_SAR_SAMPLE_TIME3_SHIFT = SAR_SAMPLE_TIME23_SAMPLE_TIME3_Pos, /**< Shift for sample time 3 */
DECL|CY_SAR_SAMPLE_TIME_DEINIT|macro|CY_SAR_SAMPLE_TIME_DEINIT
DECL|CY_SAR_SAMPLE_TIME|macro|CY_SAR_SAMPLE_TIME
DECL|CY_SAR_SARSEQ_SWITCH_DISABLE|enumerator|CY_SAR_SARSEQ_SWITCH_DISABLE = 1uL << SAR_CTRL_SWITCH_DISABLE_Pos /**< Disable the SARSEQ. It is up to the firmware to set the routing switches */
DECL|CY_SAR_SARSEQ_SWITCH_ENABLE|enumerator|CY_SAR_SARSEQ_SWITCH_ENABLE = 0uL << SAR_CTRL_SWITCH_DISABLE_Pos, /**< Enable the SARSEQ to change the routing switches defined in the channel configurations */
DECL|CY_SAR_SINGLE_ENDED_SIGNED|enumerator|CY_SAR_SINGLE_ENDED_SIGNED = 1uL << SAR_SAMPLE_CTRL_SINGLE_ENDED_SIGNED_Pos /**< Result data for single-ended channels is signed */
DECL|CY_SAR_SINGLE_ENDED_UNSIGNED|enumerator|CY_SAR_SINGLE_ENDED_UNSIGNED = 0uL << SAR_SAMPLE_CTRL_SINGLE_ENDED_SIGNED_Pos, /**< Result data for single-ended channels is unsigned */
DECL|CY_SAR_SQCTRL|macro|CY_SAR_SQCTRL
DECL|CY_SAR_SQMASK|macro|CY_SAR_SQMASK
DECL|CY_SAR_STARTCONVERT|macro|CY_SAR_STARTCONVERT
DECL|CY_SAR_START_CONVERT_CONTINUOUS|enumerator|CY_SAR_START_CONVERT_CONTINUOUS = 1uL, /**< Continuously scan enabled channels and ignores all triggers, firmware or hardware */
DECL|CY_SAR_START_CONVERT_SINGLE_SHOT|enumerator|CY_SAR_START_CONVERT_SINGLE_SHOT = 0uL, /**< Start a single scan (one shot) from firmware */
DECL|CY_SAR_SUCCESS|enumerator|CY_SAR_SUCCESS = 0x00uL, /**< Success */
DECL|CY_SAR_SWITCHMASK|macro|CY_SAR_SWITCHMASK
DECL|CY_SAR_SWITCHSELECT|macro|CY_SAR_SWITCHSELECT
DECL|CY_SAR_SWITCHSTATE|macro|CY_SAR_SWITCHSTATE
DECL|CY_SAR_SWITCH_CLOSE|enumerator|CY_SAR_SWITCH_CLOSE = 1uL /**< Close the switch */
DECL|CY_SAR_SWITCH_OPEN|enumerator|CY_SAR_SWITCH_OPEN = 0uL, /**< Open the switch */
DECL|CY_SAR_SWITCH_SEQ_CTRL_DISABLE|enumerator|CY_SAR_SWITCH_SEQ_CTRL_DISABLE = 0uL, /**< Disable sequencer control of switch */
DECL|CY_SAR_SWITCH_SEQ_CTRL_ENABLE|enumerator|CY_SAR_SWITCH_SEQ_CTRL_ENABLE = 1uL /**< Enable sequencer control of switch */
DECL|CY_SAR_TIMEOUT|enumerator|CY_SAR_TIMEOUT = CY_SAR_ID | CY_PDL_STATUS_ERROR | 0x02uL, /**< A timeout occurred */
DECL|CY_SAR_TRIGGER_MODE_FW_AND_HWEDGE|enumerator|CY_SAR_TRIGGER_MODE_FW_AND_HWEDGE = SAR_SAMPLE_CTRL_DSI_TRIGGER_EN_Msk, /**< Enable edge sensitive hardware trigger. Each rising edge will trigger a single scan. */
DECL|CY_SAR_TRIGGER_MODE_FW_AND_HWLEVEL|enumerator|CY_SAR_TRIGGER_MODE_FW_AND_HWLEVEL = SAR_SAMPLE_CTRL_DSI_TRIGGER_EN_Msk | SAR_SAMPLE_CTRL_DSI_TRIGGER_LEVEL_Msk, /**< Enable level sensitive hardware trigger. The SAR will continuously scan while the trigger signal is high. */
DECL|CY_SAR_TRIGGER_MODE_FW_ONLY|enumerator|CY_SAR_TRIGGER_MODE_FW_ONLY = 0uL, /**< Firmware trigger only, disable hardware trigger*/
DECL|CY_SAR_TRIGGER|macro|CY_SAR_TRIGGER
DECL|CY_SAR_VREF_PWR_100|enumerator|CY_SAR_VREF_PWR_100 = 0uL << SAR_CTRL_PWR_CTRL_VREF_Pos, /**< Full power (100%) */
DECL|CY_SAR_VREF_PWR_10|enumerator|CY_SAR_VREF_PWR_10 = 7uL << SAR_CTRL_PWR_CTRL_VREF_Pos, /**< 10% power */
DECL|CY_SAR_VREF_PWR_20|enumerator|CY_SAR_VREF_PWR_20 = 6uL << SAR_CTRL_PWR_CTRL_VREF_Pos, /**< 20% power */
DECL|CY_SAR_VREF_PWR_30|enumerator|CY_SAR_VREF_PWR_30 = 5uL << SAR_CTRL_PWR_CTRL_VREF_Pos, /**< 30% power */
DECL|CY_SAR_VREF_PWR_40|enumerator|CY_SAR_VREF_PWR_40 = 4uL << SAR_CTRL_PWR_CTRL_VREF_Pos, /**< 40% power */
DECL|CY_SAR_VREF_PWR_50|enumerator|CY_SAR_VREF_PWR_50 = 3uL << SAR_CTRL_PWR_CTRL_VREF_Pos, /**< 50% power */
DECL|CY_SAR_VREF_PWR_60|enumerator|CY_SAR_VREF_PWR_60 = 2uL << SAR_CTRL_PWR_CTRL_VREF_Pos, /**< 60% power */
DECL|CY_SAR_VREF_PWR_80|enumerator|CY_SAR_VREF_PWR_80 = 1uL << SAR_CTRL_PWR_CTRL_VREF_Pos, /**< 80% power */
DECL|CY_SAR_VREF_SEL_BGR|enumerator|CY_SAR_VREF_SEL_BGR = 4uL << SAR_CTRL_VREF_SEL_Pos, /**< System wide bandgap from \ref group_sysanalog "AREF" (Vref buffer on) */
DECL|CY_SAR_VREF_SEL_EXT|enumerator|CY_SAR_VREF_SEL_EXT = 5uL << SAR_CTRL_VREF_SEL_Pos, /**< External Vref direct from a pin */
DECL|CY_SAR_VREF_SEL_VDDA_DIV_2|enumerator|CY_SAR_VREF_SEL_VDDA_DIV_2 = 6uL << SAR_CTRL_VREF_SEL_Pos, /**< Vdda/2 (Vref buffer on) */
DECL|CY_SAR_VREF_SEL_VDDA|enumerator|CY_SAR_VREF_SEL_VDDA = 7uL << SAR_CTRL_VREF_SEL_Pos /**< Vdda */
DECL|CY_SAR_WAIT_FOR_RESULT|enumerator|CY_SAR_WAIT_FOR_RESULT = 1uL, /**< Does not return a result until the conversion of all sequential channels is complete. This mode is blocking. */
DECL|CY_SAR_WRK_MAX_12BIT|macro|CY_SAR_WRK_MAX_12BIT
DECL|Cy_SAR_ClearInterrupt|function|__STATIC_INLINE void Cy_SAR_ClearInterrupt(SAR_Type *base, uint32_t intrMask)
DECL|Cy_SAR_ClearRangeInterrupt|function|__STATIC_INLINE void Cy_SAR_ClearRangeInterrupt(SAR_Type *base, uint32_t chanMask)
DECL|Cy_SAR_ClearSatInterrupt|function|__STATIC_INLINE void Cy_SAR_ClearSatInterrupt(SAR_Type *base, uint32_t chanMask)
DECL|Cy_SAR_Disable|function|__STATIC_INLINE void Cy_SAR_Disable(SAR_Type *base)
DECL|Cy_SAR_GetChanResultUpdated|function|__STATIC_INLINE uint32_t Cy_SAR_GetChanResultUpdated(const SAR_Type *base)
DECL|Cy_SAR_GetInterruptCause|function|__STATIC_INLINE uint32_t Cy_SAR_GetInterruptCause(const SAR_Type *base)
DECL|Cy_SAR_GetInterruptMask|function|__STATIC_INLINE uint32_t Cy_SAR_GetInterruptMask(const SAR_Type *base)
DECL|Cy_SAR_GetInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_SAR_GetInterruptStatusMasked(const SAR_Type *base)
DECL|Cy_SAR_GetInterruptStatus|function|__STATIC_INLINE uint32_t Cy_SAR_GetInterruptStatus(const SAR_Type *base)
DECL|Cy_SAR_GetRangeInterruptMask|function|__STATIC_INLINE uint32_t Cy_SAR_GetRangeInterruptMask(const SAR_Type *base)
DECL|Cy_SAR_GetRangeInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_SAR_GetRangeInterruptStatusMasked(const SAR_Type *base)
DECL|Cy_SAR_GetRangeInterruptStatus|function|__STATIC_INLINE uint32_t Cy_SAR_GetRangeInterruptStatus(const SAR_Type *base)
DECL|Cy_SAR_GetSatInterruptMask|function|__STATIC_INLINE uint32_t Cy_SAR_GetSatInterruptMask(const SAR_Type *base)
DECL|Cy_SAR_GetSatInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_SAR_GetSatInterruptStatusMasked(const SAR_Type *base)
DECL|Cy_SAR_GetSatInterruptStatus|function|__STATIC_INLINE uint32_t Cy_SAR_GetSatInterruptStatus(const SAR_Type *base)
DECL|Cy_SAR_IsChannelDifferential|function|__STATIC_INLINE bool Cy_SAR_IsChannelDifferential(const SAR_Type *base, uint32_t chan)
DECL|Cy_SAR_SetChanMask|function|__STATIC_INLINE void Cy_SAR_SetChanMask(SAR_Type *base, uint32_t enableMask)
DECL|Cy_SAR_SetInterruptMask|function|__STATIC_INLINE void Cy_SAR_SetInterruptMask(SAR_Type *base, uint32_t intrMask)
DECL|Cy_SAR_SetInterrupt|function|__STATIC_INLINE void Cy_SAR_SetInterrupt(SAR_Type *base, uint32_t intrMask)
DECL|Cy_SAR_SetRangeCond|function|__STATIC_INLINE void Cy_SAR_SetRangeCond(SAR_Type *base, cy_en_sar_range_detect_condition_t cond)
DECL|Cy_SAR_SetRangeInterruptMask|function|__STATIC_INLINE void Cy_SAR_SetRangeInterruptMask(SAR_Type *base, uint32_t chanMask)
DECL|Cy_SAR_SetRangeInterrupt|function|__STATIC_INLINE void Cy_SAR_SetRangeInterrupt(SAR_Type *base, uint32_t chanMask)
DECL|Cy_SAR_SetSatInterruptMask|function|__STATIC_INLINE void Cy_SAR_SetSatInterruptMask(SAR_Type *base, uint32_t chanMask)
DECL|Cy_SAR_SetSatInterrupt|function|__STATIC_INLINE void Cy_SAR_SetSatInterrupt(SAR_Type *base, uint32_t chanMask)
DECL|Cy_SAR_SetVssaSarSeqCtrl|function|__STATIC_INLINE void Cy_SAR_SetVssaSarSeqCtrl(SAR_Type *base, cy_en_sar_switch_sar_seq_ctrl_t ctrl)
DECL|Cy_SAR_SetVssaVminusSwitch|function|__STATIC_INLINE void Cy_SAR_SetVssaVminusSwitch(SAR_Type *base, cy_en_sar_switch_state_t state)
DECL|chanConfig|member|uint32_t chanConfig[CY_SAR_MAX_NUM_CHANNELS]; /**< Channel configuration */
DECL|chanEn|member|uint32_t chanEn; /**< Enable bits for the channels */
DECL|configRouting|member|bool configRouting; /**< Configure or ignore routing related registers (muxSwitch, muxSwitchSqCtrl) */
DECL|continuous|member|uint32_t continuous; /**< State of the continuous bit */
DECL|ctrl|member|uint32_t ctrl; /**< Control register settings (applies to all channels) */
DECL|cy_en_sar_chan_config_avg_en_t|typedef|}cy_en_sar_chan_config_avg_en_t;
DECL|cy_en_sar_chan_config_input_mode_t|typedef|}cy_en_sar_chan_config_input_mode_t;
DECL|cy_en_sar_chan_config_neg_pin_addr_t|typedef|}cy_en_sar_chan_config_neg_pin_addr_t;
DECL|cy_en_sar_chan_config_neg_port_addr_t|typedef|}cy_en_sar_chan_config_neg_port_addr_t;
DECL|cy_en_sar_chan_config_pos_pin_addr_t|typedef|}cy_en_sar_chan_config_pos_pin_addr_t;
DECL|cy_en_sar_chan_config_pos_port_addr_t|typedef|}cy_en_sar_chan_config_pos_port_addr_t;
DECL|cy_en_sar_chan_config_sample_time_t|typedef|}cy_en_sar_chan_config_sample_time_t;
DECL|cy_en_sar_ctrl_bypass_cap_t|typedef|}cy_en_sar_ctrl_bypass_cap_t;
DECL|cy_en_sar_ctrl_comp_delay_t|typedef|}cy_en_sar_ctrl_comp_delay_t;
DECL|cy_en_sar_ctrl_comp_pwr_t|typedef|}cy_en_sar_ctrl_comp_pwr_t;
DECL|cy_en_sar_ctrl_hw_ctrl_negvref_t|typedef|}cy_en_sar_ctrl_hw_ctrl_negvref_t;
DECL|cy_en_sar_ctrl_neg_sel_t|typedef|}cy_en_sar_ctrl_neg_sel_t;
DECL|cy_en_sar_ctrl_pwr_ctrl_vref_t|typedef|}cy_en_sar_ctrl_pwr_ctrl_vref_t;
DECL|cy_en_sar_ctrl_sarmux_deep_sleep_t|typedef|}cy_en_sar_ctrl_sarmux_deep_sleep_t;
DECL|cy_en_sar_ctrl_sarseq_routing_switches_t|typedef|}cy_en_sar_ctrl_sarseq_routing_switches_t;
DECL|cy_en_sar_ctrl_vref_sel_t|typedef|}cy_en_sar_ctrl_vref_sel_t;
DECL|cy_en_sar_intr_mask_t|typedef|}cy_en_sar_intr_mask_t;
DECL|cy_en_sar_mux_switch_fw_ctrl_t|typedef|}cy_en_sar_mux_switch_fw_ctrl_t;
DECL|cy_en_sar_mux_switch_sq_ctrl_t|typedef|}cy_en_sar_mux_switch_sq_ctrl_t;
DECL|cy_en_sar_range_detect_condition_t|typedef|}cy_en_sar_range_detect_condition_t;
DECL|cy_en_sar_range_thres_shift_t|typedef|}cy_en_sar_range_thres_shift_t;
DECL|cy_en_sar_return_mode_t|typedef|}cy_en_sar_return_mode_t;
DECL|cy_en_sar_sample_ctrl_avg_cnt_t|typedef|}cy_en_sar_sample_ctrl_avg_cnt_t;
DECL|cy_en_sar_sample_ctrl_avg_mode_t|typedef|}cy_en_sar_sample_ctrl_avg_mode_t;
DECL|cy_en_sar_sample_ctrl_differential_format_t|typedef|}cy_en_sar_sample_ctrl_differential_format_t;
DECL|cy_en_sar_sample_ctrl_result_align_t|typedef|}cy_en_sar_sample_ctrl_result_align_t;
DECL|cy_en_sar_sample_ctrl_single_ended_format_t|typedef|}cy_en_sar_sample_ctrl_single_ended_format_t;
DECL|cy_en_sar_sample_ctrl_trigger_mode_t|typedef|}cy_en_sar_sample_ctrl_trigger_mode_t;
DECL|cy_en_sar_sample_time_shift_t|typedef|}cy_en_sar_sample_time_shift_t;
DECL|cy_en_sar_start_convert_sel_t|typedef|}cy_en_sar_start_convert_sel_t;
DECL|cy_en_sar_status_t|typedef|}cy_en_sar_status_t;
DECL|cy_en_sar_switch_register_sel_t|typedef|}cy_en_sar_switch_register_sel_t;
DECL|cy_en_sar_switch_sar_seq_ctrl_t|typedef|}cy_en_sar_switch_sar_seq_ctrl_t;
DECL|cy_en_sar_switch_state_t|typedef|}cy_en_sar_switch_state_t;
DECL|cy_stc_sar_config_t|typedef|} cy_stc_sar_config_t;
DECL|cy_stc_sar_state_backup_t|typedef|} cy_stc_sar_state_backup_t;
DECL|hwEnabled|member|uint32_t hwEnabled; /**< SAR enabled state */
DECL|intrMask|member|uint32_t intrMask; /**< Interrupt enable mask */
DECL|muxSwitchSqCtrl|member|uint32_t muxSwitchSqCtrl; /**< Enable SARSEQ control of specific SARMUX switches */
DECL|muxSwitch|member|uint32_t muxSwitch; /**< SARMUX firmware switches to connect analog signals to SAR */
DECL|rangeCond|member|cy_en_sar_range_detect_condition_t rangeCond; /**< Range detect condition (below, inside, output, or above) for all channels */
DECL|rangeIntrMask|member|uint32_t rangeIntrMask; /**< Range detection interrupt enable mask */
DECL|rangeThres|member|uint32_t rangeThres; /**< Range detect threshold register for all channels */
DECL|sampleCtrl|member|uint32_t sampleCtrl; /**< Sample control register settings (applies to all channels) */
DECL|sampleTime01|member|uint32_t sampleTime01; /**< Sample time in ADC clocks for Sample Time 0 and 1 */
DECL|sampleTime23|member|uint32_t sampleTime23; /**< Sample time in ADC clocks for Sample Time 2 and 3 */
DECL|satIntrMask|member|uint32_t satIntrMask; /**< Saturation detection interrupt enable mask */
DECL|vrefMvValue|member|uint32_t vrefMvValue; /**< Reference voltage in millivolts used in converting counts to volts */
