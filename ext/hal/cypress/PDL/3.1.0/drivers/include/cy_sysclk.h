DECL|CY_SYSCLK_BAD_PARAM|enumerator|CY_SYSCLK_BAD_PARAM = (CY_SYSCLK_ID | CY_PDL_STATUS_ERROR | 1U), /**< Invalid function input parameter */
DECL|CY_SYSCLK_BAK_IN_CLKLF|enumerator|CY_SYSCLK_BAK_IN_CLKLF /**< Backup domain clock input is clkLf */
DECL|CY_SYSCLK_BAK_IN_WCO|enumerator|CY_SYSCLK_BAK_IN_WCO, /**< Backup domain clock input is WCO */
DECL|CY_SYSCLK_CLKHF_CSV_SUPERVISOR_ALTHF|enumerator|CY_SYSCLK_CLKHF_CSV_SUPERVISOR_ALTHF = 2U /**< Supervising clock is clk_althf */
DECL|CY_SYSCLK_CLKHF_CSV_SUPERVISOR_EXT|enumerator|CY_SYSCLK_CLKHF_CSV_SUPERVISOR_EXT = 1U, /**< Supervising clock is the external clock */
DECL|CY_SYSCLK_CLKHF_CSV_SUPERVISOR_IMO|enumerator|CY_SYSCLK_CLKHF_CSV_SUPERVISOR_IMO = 0U, /**< Supervising clock is the IMO. */
DECL|CY_SYSCLK_CLKHF_DIVIDE_BY_2|enumerator|CY_SYSCLK_CLKHF_DIVIDE_BY_2 = 1U, /**< divide clkHf by 2 */
DECL|CY_SYSCLK_CLKHF_DIVIDE_BY_4|enumerator|CY_SYSCLK_CLKHF_DIVIDE_BY_4 = 2U, /**< divide clkHf by 4 */
DECL|CY_SYSCLK_CLKHF_DIVIDE_BY_8|enumerator|CY_SYSCLK_CLKHF_DIVIDE_BY_8 = 3U /**< divide clkHf by 8 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH0|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH0 = 0U, /**< clkHf input is Clock Path 0 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH10|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH10 = 10U, /**< clkHf input is Clock Path 10 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH11|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH11 = 11U, /**< clkHf input is Clock Path 11 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH12|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH12 = 12U, /**< clkHf input is Clock Path 12 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH13|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH13 = 13U, /**< clkHf input is Clock Path 13 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH14|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH14 = 14U, /**< clkHf input is Clock Path 14 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH15|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH15 = 15U, /**< clkHf input is Clock Path 15 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH1|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH1 = 1U, /**< clkHf input is Clock Path 1 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH2|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH2 = 2U, /**< clkHf input is Clock Path 2 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH3|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH3 = 3U, /**< clkHf input is Clock Path 3 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH4|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH4 = 4U, /**< clkHf input is Clock Path 4 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH5|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH5 = 5U, /**< clkHf input is Clock Path 5 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH6|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH6 = 6U, /**< clkHf input is Clock Path 6 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH7|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH7 = 7U, /**< clkHf input is Clock Path 7 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH8|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH8 = 8U, /**< clkHf input is Clock Path 8 */
DECL|CY_SYSCLK_CLKHF_IN_CLKPATH9|enumerator|CY_SYSCLK_CLKHF_IN_CLKPATH9 = 9U, /**< clkHf input is Clock Path 9 */
DECL|CY_SYSCLK_CLKHF_NO_DIVIDE|enumerator|CY_SYSCLK_CLKHF_NO_DIVIDE = 0U, /**< don't divide clkHf. */
DECL|CY_SYSCLK_CLKLF_IN_ALTLF|enumerator|CY_SYSCLK_CLKLF_IN_ALTLF = 2u, /**< clkLf is sourced by the Alternate Low Frequency Clock (ALTLF) */
DECL|CY_SYSCLK_CLKLF_IN_ILO|enumerator|CY_SYSCLK_CLKLF_IN_ILO = 0u, /**< clkLf is sourced by the internal low speed oscillator (ILO) */
DECL|CY_SYSCLK_CLKLF_IN_PILO|enumerator|CY_SYSCLK_CLKLF_IN_PILO = 3u /**< clkLf is sourced by the precision low speed oscillator (PILO) */
DECL|CY_SYSCLK_CLKLF_IN_WCO|enumerator|CY_SYSCLK_CLKLF_IN_WCO = 1U, /**< clkLf is sourced by the watch crystal oscillator (WCO) */
DECL|CY_SYSCLK_CLKPATH_IN_ALTHF|enumerator|CY_SYSCLK_CLKPATH_IN_ALTHF = 3U, /**< Select the ALTHF as the output of the path mux */
DECL|CY_SYSCLK_CLKPATH_IN_ALTLF|enumerator|CY_SYSCLK_CLKPATH_IN_ALTLF = 0x112U, /**< Select the ALTLF (18) as the output of the DSI mux and path mux */
DECL|CY_SYSCLK_CLKPATH_IN_DSIMUX|enumerator|CY_SYSCLK_CLKPATH_IN_DSIMUX = 4U, /**< Select the DSI MUX output as the output of the path mux */
DECL|CY_SYSCLK_CLKPATH_IN_DSI|enumerator|CY_SYSCLK_CLKPATH_IN_DSI = 0x100U, /**< Select a DSI signal (0 - 15) as the output of the DSI mux and path mux */
DECL|CY_SYSCLK_CLKPATH_IN_ECO|enumerator|CY_SYSCLK_CLKPATH_IN_ECO = 2U, /**< Select the ECO as the output of the path mux */
DECL|CY_SYSCLK_CLKPATH_IN_EXT|enumerator|CY_SYSCLK_CLKPATH_IN_EXT = 1U, /**< Select the EXT as the output of the path mux */
DECL|CY_SYSCLK_CLKPATH_IN_ILO|enumerator|CY_SYSCLK_CLKPATH_IN_ILO = 0x110U, /**< Select the ILO (16) as the output of the DSI mux and path mux */
DECL|CY_SYSCLK_CLKPATH_IN_IMO|enumerator|CY_SYSCLK_CLKPATH_IN_IMO = 0U, /**< Select the IMO as the output of the path mux */
DECL|CY_SYSCLK_CLKPATH_IN_PILO|enumerator|CY_SYSCLK_CLKPATH_IN_PILO = 0x113U /**< Select the PILO (19) as the output of the DSI mux and path mux */
DECL|CY_SYSCLK_CLKPATH_IN_WCO|enumerator|CY_SYSCLK_CLKPATH_IN_WCO = 0x111U, /**< Select the WCO (17) as the output of the DSI mux and path mux */
DECL|CY_SYSCLK_CLKTIMER_IN_HF0_DIV2|enumerator|CY_SYSCLK_CLKTIMER_IN_HF0_DIV2 = 0x101U, /**< clk_timer is sourced by clkHf[0] divided by 2 */
DECL|CY_SYSCLK_CLKTIMER_IN_HF0_DIV4|enumerator|CY_SYSCLK_CLKTIMER_IN_HF0_DIV4 = 0x201U, /**< clk_timer is sourced by clkHf[0] divided by 4 */
DECL|CY_SYSCLK_CLKTIMER_IN_HF0_DIV8|enumerator|CY_SYSCLK_CLKTIMER_IN_HF0_DIV8 = 0x301U /**< clk_timer is sourced by clkHf[0] divided by 8 */
DECL|CY_SYSCLK_CLKTIMER_IN_HF0_NODIV|enumerator|CY_SYSCLK_CLKTIMER_IN_HF0_NODIV = 1U, /**< clk_timer is sourced by clkHf[0] undivided */
DECL|CY_SYSCLK_CLKTIMER_IN_IMO|enumerator|CY_SYSCLK_CLKTIMER_IN_IMO = 0u, /**< clk_timer is sourced by the internal main oscillator (IMO) */
DECL|CY_SYSCLK_CSV_ERROR_FAULT_RESET|enumerator|CY_SYSCLK_CSV_ERROR_FAULT_RESET = 3u /**< Trigger a fault then reset when an error is reported by the supervisor. */
DECL|CY_SYSCLK_CSV_ERROR_FAULT|enumerator|CY_SYSCLK_CSV_ERROR_FAULT = 1U, /**< Trigger a fault when an error is reported by the clock supervisor. */
DECL|CY_SYSCLK_CSV_ERROR_IGNORE|enumerator|CY_SYSCLK_CSV_ERROR_IGNORE = 0u, /**< Ignore the error reported by the clock supervisor. */
DECL|CY_SYSCLK_CSV_ERROR_RESET|enumerator|CY_SYSCLK_CSV_ERROR_RESET = 2u, /**< Trigger a reset when an error is reported by the clock supervisor. */
DECL|CY_SYSCLK_CSV_LOSS_128_CYCLES|enumerator|CY_SYSCLK_CSV_LOSS_128_CYCLES = 5u, /**< 1 clock must be seen within 128 cycles of the supervising clock. */
DECL|CY_SYSCLK_CSV_LOSS_16_CYCLES|enumerator|CY_SYSCLK_CSV_LOSS_16_CYCLES = 2u, /**< 1 clock must be seen within 16 cycles of the supervising clock. */
DECL|CY_SYSCLK_CSV_LOSS_256_CYCLES|enumerator|CY_SYSCLK_CSV_LOSS_256_CYCLES = 6u, /**< 1 clock must be seen within 256 cycles of the supervising clock. */
DECL|CY_SYSCLK_CSV_LOSS_32_CYCLES|enumerator|CY_SYSCLK_CSV_LOSS_32_CYCLES = 3u, /**< 1 clock must be seen within 32 cycles of the supervising clock. */
DECL|CY_SYSCLK_CSV_LOSS_4_CYCLES|enumerator|CY_SYSCLK_CSV_LOSS_4_CYCLES = 0u, /**< 1 clock must be seen within 4 cycles of the supervising clock. */
DECL|CY_SYSCLK_CSV_LOSS_512_CYCLES|enumerator|CY_SYSCLK_CSV_LOSS_512_CYCLES = 7u /**< 1 clock must be seen within 512 cycles of the supervising clock. */
DECL|CY_SYSCLK_CSV_LOSS_64_CYCLES|enumerator|CY_SYSCLK_CSV_LOSS_64_CYCLES = 4u, /**< 1 clock must be seen within 64 cycles of the supervising clock. */
DECL|CY_SYSCLK_CSV_LOSS_8_CYCLES|enumerator|CY_SYSCLK_CSV_LOSS_8_CYCLES = 1U, /**< 1 clock must be seen within 8 cycles of the supervising clock. */
DECL|CY_SYSCLK_DIV_16_5_BIT|enumerator|CY_SYSCLK_DIV_16_5_BIT = 2U, /**< Divider Type is a 16.5 bit fractional divider */
DECL|CY_SYSCLK_DIV_16_BIT|enumerator|CY_SYSCLK_DIV_16_BIT = 1U, /**< Divider Type is a 16 bit divider */
DECL|CY_SYSCLK_DIV_24_5_BIT|enumerator|CY_SYSCLK_DIV_24_5_BIT = 3U /**< Divider Type is a 24.5 bit fractional divider */
DECL|CY_SYSCLK_DIV_8_BIT|enumerator|CY_SYSCLK_DIV_8_BIT = 0U, /**< Divider Type is an 8 bit divider */
DECL|CY_SYSCLK_DIV_ROUNDUP|macro|CY_SYSCLK_DIV_ROUNDUP
DECL|CY_SYSCLK_DIV_ROUND|macro|CY_SYSCLK_DIV_ROUND
DECL|CY_SYSCLK_DRV_VERSION_MAJOR|macro|CY_SYSCLK_DRV_VERSION_MAJOR
DECL|CY_SYSCLK_DRV_VERSION_MINOR|macro|CY_SYSCLK_DRV_VERSION_MINOR
DECL|CY_SYSCLK_ECOSTAT_AMPLITUDE|macro|CY_SYSCLK_ECOSTAT_AMPLITUDE
DECL|CY_SYSCLK_ECOSTAT_INACCURATE|macro|CY_SYSCLK_ECOSTAT_INACCURATE
DECL|CY_SYSCLK_ECOSTAT_STABLE|macro|CY_SYSCLK_ECOSTAT_STABLE
DECL|CY_SYSCLK_FLLPLL_OUTPUT_AUTO1|enumerator|CY_SYSCLK_FLLPLL_OUTPUT_AUTO1 = 1U, /**< Same as AUTO */
DECL|CY_SYSCLK_FLLPLL_OUTPUT_AUTO|enumerator|CY_SYSCLK_FLLPLL_OUTPUT_AUTO = 0U, /**< Output FLL/PLL input source when not locked, and FLL/PLL output when locked. */
DECL|CY_SYSCLK_FLLPLL_OUTPUT_INPUT|enumerator|CY_SYSCLK_FLLPLL_OUTPUT_INPUT = 2U, /**< Output FLL/PLL input source regardless of lock status. */
DECL|CY_SYSCLK_FLLPLL_OUTPUT_OUTPUT|enumerator|CY_SYSCLK_FLLPLL_OUTPUT_OUTPUT = 3U /**< Output FLL/PLL output regardless of lock status. This can be dangerous if used to clock clkHf, because FLL/PLL output may be unstable. */
DECL|CY_SYSCLK_FLL_CCO_RANGE0|enumerator|CY_SYSCLK_FLL_CCO_RANGE0, /**< Target frequency is in range 48 - 64 MHz. */
DECL|CY_SYSCLK_FLL_CCO_RANGE1|enumerator|CY_SYSCLK_FLL_CCO_RANGE1, /**< Target frequency is in range 64 - 85 MHz. */
DECL|CY_SYSCLK_FLL_CCO_RANGE2|enumerator|CY_SYSCLK_FLL_CCO_RANGE2, /**< Target frequency is in range 85 - 113 MHz. */
DECL|CY_SYSCLK_FLL_CCO_RANGE3|enumerator|CY_SYSCLK_FLL_CCO_RANGE3, /**< Target frequency is in range 113 - 150 MHz. */
DECL|CY_SYSCLK_FLL_CCO_RANGE4|enumerator|CY_SYSCLK_FLL_CCO_RANGE4 /**< Target frequency is in range 150 - 200 MHz. */
DECL|CY_SYSCLK_ID|macro|CY_SYSCLK_ID
DECL|CY_SYSCLK_INVALID_STATE|enumerator|CY_SYSCLK_INVALID_STATE = (CY_SYSCLK_ID | CY_PDL_STATUS_ERROR | 3U) /**< Clock is in an invalid state */
DECL|CY_SYSCLK_MEAS_CLK_ALTHF|enumerator|CY_SYSCLK_MEAS_CLK_ALTHF = 0x103U,
DECL|CY_SYSCLK_MEAS_CLK_ALTLF|enumerator|CY_SYSCLK_MEAS_CLK_ALTLF = 4U,
DECL|CY_SYSCLK_MEAS_CLK_BAK|enumerator|CY_SYSCLK_MEAS_CLK_BAK = 3U,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF0|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF0 = 0x600U,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF10|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF10 = 0x60AU,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF11|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF11 = 0x60BU,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF12|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF12 = 0x60CU,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF13|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF13 = 0x60DU,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF14|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF14 = 0x60EU,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF15|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF15 = 0x60FU,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF1|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF1 = 0x601U,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF2|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF2 = 0x602U,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF3|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF3 = 0x603U,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF4|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF4 = 0x604U,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF5|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF5 = 0x605U,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF6|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF6 = 0x606U,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF7|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF7 = 0x607U,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF8|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF8 = 0x608U,
DECL|CY_SYSCLK_MEAS_CLK_CLKHF9|enumerator|CY_SYSCLK_MEAS_CLK_CLKHF9 = 0x609U,
DECL|CY_SYSCLK_MEAS_CLK_CLKHFS|enumerator|CY_SYSCLK_MEAS_CLK_CLKHFS = 0x600U,
DECL|CY_SYSCLK_MEAS_CLK_ECO|enumerator|CY_SYSCLK_MEAS_CLK_ECO = 0x101U,
DECL|CY_SYSCLK_MEAS_CLK_EXT|enumerator|CY_SYSCLK_MEAS_CLK_EXT = 0x102U,
DECL|CY_SYSCLK_MEAS_CLK_FAST_CLKS|enumerator|CY_SYSCLK_MEAS_CLK_FAST_CLKS = 0x100U,
DECL|CY_SYSCLK_MEAS_CLK_ILO|enumerator|CY_SYSCLK_MEAS_CLK_ILO = 1U,
DECL|CY_SYSCLK_MEAS_CLK_IMO|enumerator|CY_SYSCLK_MEAS_CLK_IMO = 6U,
DECL|CY_SYSCLK_MEAS_CLK_LAST_CLK|enumerator|CY_SYSCLK_MEAS_CLK_LAST_CLK = 0x610U
DECL|CY_SYSCLK_MEAS_CLK_LFCLK|enumerator|CY_SYSCLK_MEAS_CLK_LFCLK = 5U,
DECL|CY_SYSCLK_MEAS_CLK_PATH0|enumerator|CY_SYSCLK_MEAS_CLK_PATH0 = 0x500U,
DECL|CY_SYSCLK_MEAS_CLK_PATH10|enumerator|CY_SYSCLK_MEAS_CLK_PATH10 = 0x50AU,
DECL|CY_SYSCLK_MEAS_CLK_PATH11|enumerator|CY_SYSCLK_MEAS_CLK_PATH11 = 0x50BU,
DECL|CY_SYSCLK_MEAS_CLK_PATH12|enumerator|CY_SYSCLK_MEAS_CLK_PATH12 = 0x50CU,
DECL|CY_SYSCLK_MEAS_CLK_PATH13|enumerator|CY_SYSCLK_MEAS_CLK_PATH13 = 0x50DU,
DECL|CY_SYSCLK_MEAS_CLK_PATH14|enumerator|CY_SYSCLK_MEAS_CLK_PATH14 = 0x50EU,
DECL|CY_SYSCLK_MEAS_CLK_PATH15|enumerator|CY_SYSCLK_MEAS_CLK_PATH15 = 0x50FU,
DECL|CY_SYSCLK_MEAS_CLK_PATH1|enumerator|CY_SYSCLK_MEAS_CLK_PATH1 = 0x501U,
DECL|CY_SYSCLK_MEAS_CLK_PATH2|enumerator|CY_SYSCLK_MEAS_CLK_PATH2 = 0x502U,
DECL|CY_SYSCLK_MEAS_CLK_PATH3|enumerator|CY_SYSCLK_MEAS_CLK_PATH3 = 0x503U,
DECL|CY_SYSCLK_MEAS_CLK_PATH4|enumerator|CY_SYSCLK_MEAS_CLK_PATH4 = 0x504U,
DECL|CY_SYSCLK_MEAS_CLK_PATH5|enumerator|CY_SYSCLK_MEAS_CLK_PATH5 = 0x505U,
DECL|CY_SYSCLK_MEAS_CLK_PATH6|enumerator|CY_SYSCLK_MEAS_CLK_PATH6 = 0x506U,
DECL|CY_SYSCLK_MEAS_CLK_PATH7|enumerator|CY_SYSCLK_MEAS_CLK_PATH7 = 0x507U,
DECL|CY_SYSCLK_MEAS_CLK_PATH8|enumerator|CY_SYSCLK_MEAS_CLK_PATH8 = 0x508U,
DECL|CY_SYSCLK_MEAS_CLK_PATH9|enumerator|CY_SYSCLK_MEAS_CLK_PATH9 = 0x509U,
DECL|CY_SYSCLK_MEAS_CLK_PATH_CLKS|enumerator|CY_SYSCLK_MEAS_CLK_PATH_CLKS = 0x500U,
DECL|CY_SYSCLK_MEAS_CLK_PILO|enumerator|CY_SYSCLK_MEAS_CLK_PILO = 8U,
DECL|CY_SYSCLK_MEAS_CLK_WCO|enumerator|CY_SYSCLK_MEAS_CLK_WCO = 2U,
DECL|CY_SYSCLK_PUMP_DIV_16|enumerator|CY_SYSCLK_PUMP_DIV_16 /**< Pump clock divided by 16 */
DECL|CY_SYSCLK_PUMP_DIV_2|enumerator|CY_SYSCLK_PUMP_DIV_2, /**< Pump clock divided by 2 */
DECL|CY_SYSCLK_PUMP_DIV_4|enumerator|CY_SYSCLK_PUMP_DIV_4, /**< Pump clock divided by 4 */
DECL|CY_SYSCLK_PUMP_DIV_8|enumerator|CY_SYSCLK_PUMP_DIV_8, /**< Pump clock divided by 8 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH0|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH0, /**< Pump clock input is clock path 0 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH10|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH10, /**< Pump clock input is clock path 10 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH11|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH11, /**< Pump clock input is clock path 11 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH12|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH12, /**< Pump clock input is clock path 12 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH13|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH13, /**< Pump clock input is clock path 13 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH14|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH14, /**< Pump clock input is clock path 14 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH15|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH15 /**< Pump clock input is clock path 15 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH1|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH1, /**< Pump clock input is clock path 1 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH2|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH2, /**< Pump clock input is clock path 2 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH3|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH3, /**< Pump clock input is clock path 3 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH4|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH4, /**< Pump clock input is clock path 4 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH5|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH5, /**< Pump clock input is clock path 5 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH6|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH6, /**< Pump clock input is clock path 6 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH7|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH7, /**< Pump clock input is clock path 7 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH8|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH8, /**< Pump clock input is clock path 8 */
DECL|CY_SYSCLK_PUMP_IN_CLKPATH9|enumerator|CY_SYSCLK_PUMP_IN_CLKPATH9, /**< Pump clock input is clock path 9 */
DECL|CY_SYSCLK_PUMP_NO_DIV|enumerator|CY_SYSCLK_PUMP_NO_DIV, /**< No division on pump clock */
DECL|CY_SYSCLK_SUCCESS|enumerator|CY_SYSCLK_SUCCESS = 0u, /**< Command completed with no errors */
DECL|CY_SYSCLK_TIMEOUT|enumerator|CY_SYSCLK_TIMEOUT = (CY_SYSCLK_ID | CY_PDL_STATUS_ERROR | 2U), /**< Timeout occurred */
DECL|CY_SYSCLK_WCO_BYPASSED|enumerator|CY_SYSCLK_WCO_BYPASSED = 1U /**< WCO is bypassed external clock must be supplied on XTAL pin */
DECL|CY_SYSCLK_WCO_CSV_SUPERVISOR_ALTLF|enumerator|CY_SYSCLK_WCO_CSV_SUPERVISOR_ALTLF, /**< WCO CSV supervisor clock source is the alternate low-frequency clock (ALTLF) */
DECL|CY_SYSCLK_WCO_CSV_SUPERVISOR_ILO|enumerator|CY_SYSCLK_WCO_CSV_SUPERVISOR_ILO, /**< WCO CSV supervisor clock source is the ILO */
DECL|CY_SYSCLK_WCO_CSV_SUPERVISOR_PILO|enumerator|CY_SYSCLK_WCO_CSV_SUPERVISOR_PILO /**< WCO CSV supervisor clock source is the PILO */
DECL|CY_SYSCLK_WCO_NOT_BYPASSED|enumerator|CY_SYSCLK_WCO_NOT_BYPASSED = 0u, /**< WCO is not bypassed crystal is used */
DECL|Cy_SysClk_ClkBakGetSource|function|__STATIC_INLINE cy_en_clkbak_in_sources_t Cy_SysClk_ClkBakGetSource(void)
DECL|Cy_SysClk_ClkBakSetSource|function|__STATIC_INLINE void Cy_SysClk_ClkBakSetSource(cy_en_clkbak_in_sources_t source)
DECL|Cy_SysClk_ClkFastGetDivider|function|__STATIC_INLINE uint8_t Cy_SysClk_ClkFastGetDivider(void)
DECL|Cy_SysClk_ClkFastSetDivider|function|__STATIC_INLINE void Cy_SysClk_ClkFastSetDivider(uint8_t divider)
DECL|Cy_SysClk_ClkHfDisable|function|__STATIC_INLINE cy_en_sysclk_status_t Cy_SysClk_ClkHfDisable(uint32_t clkHf)
DECL|Cy_SysClk_ClkHfEnable|function|__STATIC_INLINE cy_en_sysclk_status_t Cy_SysClk_ClkHfEnable(uint32_t clkHf)
DECL|Cy_SysClk_ClkHfGetDivider|function|__STATIC_INLINE cy_en_clkhf_dividers_t Cy_SysClk_ClkHfGetDivider(uint32_t clkHf)
DECL|Cy_SysClk_ClkHfGetSource|function|__STATIC_INLINE cy_en_clkhf_in_sources_t Cy_SysClk_ClkHfGetSource(uint32_t clkHf)
DECL|Cy_SysClk_ClkHfSetDivider|function|__STATIC_INLINE cy_en_sysclk_status_t Cy_SysClk_ClkHfSetDivider(uint32_t clkHf, cy_en_clkhf_dividers_t divider)
DECL|Cy_SysClk_ClkHfSetSource|function|__STATIC_INLINE cy_en_sysclk_status_t Cy_SysClk_ClkHfSetSource(uint32_t clkHf, cy_en_clkhf_in_sources_t source)
DECL|Cy_SysClk_ClkLfGetSource|function|__STATIC_INLINE cy_en_clklf_in_sources_t Cy_SysClk_ClkLfGetSource(void)
DECL|Cy_SysClk_ClkLfSetSource|function|__STATIC_INLINE void Cy_SysClk_ClkLfSetSource(cy_en_clklf_in_sources_t source)
DECL|Cy_SysClk_ClkMeasurementCountersDone|function|__STATIC_INLINE bool Cy_SysClk_ClkMeasurementCountersDone(void)
DECL|Cy_SysClk_ClkPeriGetDivider|function|__STATIC_INLINE uint8_t Cy_SysClk_ClkPeriGetDivider(void)
DECL|Cy_SysClk_ClkPeriSetDivider|function|__STATIC_INLINE void Cy_SysClk_ClkPeriSetDivider(uint8_t divider)
DECL|Cy_SysClk_ClkPumpDisable|function|__STATIC_INLINE void Cy_SysClk_ClkPumpDisable(void)
DECL|Cy_SysClk_ClkPumpEnable|function|__STATIC_INLINE void Cy_SysClk_ClkPumpEnable(void)
DECL|Cy_SysClk_ClkPumpGetDivider|function|__STATIC_INLINE cy_en_clkpump_divide_t Cy_SysClk_ClkPumpGetDivider(void)
DECL|Cy_SysClk_ClkPumpGetSource|function|__STATIC_INLINE cy_en_clkpump_in_sources_t Cy_SysClk_ClkPumpGetSource(void)
DECL|Cy_SysClk_ClkPumpSetDivider|function|__STATIC_INLINE void Cy_SysClk_ClkPumpSetDivider(cy_en_clkpump_divide_t divider)
DECL|Cy_SysClk_ClkPumpSetSource|function|__STATIC_INLINE void Cy_SysClk_ClkPumpSetSource(cy_en_clkpump_in_sources_t source)
DECL|Cy_SysClk_ClkSlowGetDivider|function|__STATIC_INLINE uint8_t Cy_SysClk_ClkSlowGetDivider(void)
DECL|Cy_SysClk_ClkSlowSetDivider|function|__STATIC_INLINE void Cy_SysClk_ClkSlowSetDivider(uint8_t divider)
DECL|Cy_SysClk_ClkTimerDisable|function|__STATIC_INLINE void Cy_SysClk_ClkTimerDisable(void)
DECL|Cy_SysClk_ClkTimerEnable|function|__STATIC_INLINE void Cy_SysClk_ClkTimerEnable(void)
DECL|Cy_SysClk_ClkTimerGetDivider|function|__STATIC_INLINE uint8_t Cy_SysClk_ClkTimerGetDivider(void)
DECL|Cy_SysClk_ClkTimerGetSource|function|__STATIC_INLINE cy_en_clktimer_in_sources_t Cy_SysClk_ClkTimerGetSource(void)
DECL|Cy_SysClk_ClkTimerSetDivider|function|__STATIC_INLINE void Cy_SysClk_ClkTimerSetDivider(uint8_t divider)
DECL|Cy_SysClk_ClkTimerSetSource|function|__STATIC_INLINE void Cy_SysClk_ClkTimerSetSource(cy_en_clktimer_in_sources_t source)
DECL|Cy_SysClk_EcoDisable|function|__STATIC_INLINE void Cy_SysClk_EcoDisable(void)
DECL|Cy_SysClk_EcoGetStatus|function|__STATIC_INLINE uint32_t Cy_SysClk_EcoGetStatus(void)
DECL|Cy_SysClk_FllDisable|function|__STATIC_INLINE cy_en_sysclk_status_t Cy_SysClk_FllDisable(void)
DECL|Cy_SysClk_FllLocked|function|__STATIC_INLINE bool Cy_SysClk_FllLocked(void)
DECL|Cy_SysClk_FllLostLock|function|__STATIC_INLINE bool Cy_SysClk_FllLostLock(void)
DECL|Cy_SysClk_IloDisable|function|__STATIC_INLINE cy_en_sysclk_status_t Cy_SysClk_IloDisable(void)
DECL|Cy_SysClk_IloEnable|function|__STATIC_INLINE void Cy_SysClk_IloEnable(void)
DECL|Cy_SysClk_IloHibernateOn|function|__STATIC_INLINE void Cy_SysClk_IloHibernateOn(bool on)
DECL|Cy_SysClk_PeriphAssignDivider|function|Cy_SysClk_PeriphAssignDivider(en_clk_dst_t ipBlock, cy_en_divider_types_t dividerType, uint32_t dividerNum)
DECL|Cy_SysClk_PeriphDisableDivider|function|Cy_SysClk_PeriphDisableDivider(cy_en_divider_types_t dividerType, uint32_t dividerNum)
DECL|Cy_SysClk_PeriphEnableDivider|function|Cy_SysClk_PeriphEnableDivider(cy_en_divider_types_t dividerType, uint32_t dividerNum)
DECL|Cy_SysClk_PeriphEnablePhaseAlignDivider|function|Cy_SysClk_PeriphEnablePhaseAlignDivider(cy_en_divider_types_t dividerType, uint32_t dividerNum, cy_en_divider_types_t dividerTypePA, uint32_t dividerNumPA)
DECL|Cy_SysClk_PeriphGetAssignedDivider|function|__STATIC_INLINE uint32_t Cy_SysClk_PeriphGetAssignedDivider(en_clk_dst_t ipBlock)
DECL|Cy_SysClk_PeriphGetDividerEnabled|function|__STATIC_INLINE bool Cy_SysClk_PeriphGetDividerEnabled(cy_en_divider_types_t dividerType, uint32_t dividerNum)
DECL|Cy_SysClk_PeriphGetDivider|function|__STATIC_INLINE uint32_t Cy_SysClk_PeriphGetDivider(cy_en_divider_types_t dividerType, uint32_t dividerNum)
DECL|Cy_SysClk_PeriphGetFracDivider|function|__STATIC_INLINE void Cy_SysClk_PeriphGetFracDivider(cy_en_divider_types_t dividerType, uint32_t dividerNum, uint32_t *dividerIntValue, uint32_t *dividerFracValue)
DECL|Cy_SysClk_PeriphSetDivider|function|Cy_SysClk_PeriphSetDivider(cy_en_divider_types_t dividerType, uint32_t dividerNum, uint32_t dividerValue)
DECL|Cy_SysClk_PeriphSetFracDivider|function|Cy_SysClk_PeriphSetFracDivider(cy_en_divider_types_t dividerType, uint32_t dividerNum, uint32_t dividerIntValue, uint32_t dividerFracValue)
DECL|Cy_SysClk_PiloDisable|function|__STATIC_INLINE void Cy_SysClk_PiloDisable(void)
DECL|Cy_SysClk_PiloEnable|function|__STATIC_INLINE void Cy_SysClk_PiloEnable(void)
DECL|Cy_SysClk_PiloGetTrim|function|__STATIC_INLINE uint32_t Cy_SysClk_PiloGetTrim(void)
DECL|Cy_SysClk_PiloSetTrim|function|__STATIC_INLINE void Cy_SysClk_PiloSetTrim(uint32_t trimVal)
DECL|Cy_SysClk_PllDisable|function|__STATIC_INLINE cy_en_sysclk_status_t Cy_SysClk_PllDisable(uint32_t clkPath)
DECL|Cy_SysClk_PllLocked|function|__STATIC_INLINE bool Cy_SysClk_PllLocked(uint32_t clkPath)
DECL|Cy_SysClk_PllLostLock|function|__STATIC_INLINE bool Cy_SysClk_PllLostLock(uint32_t clkPath)
DECL|Cy_SysClk_WcoBypass|function|__STATIC_INLINE void Cy_SysClk_WcoBypass(cy_en_wco_bypass_modes_t bypass)
DECL|Cy_SysClk_WcoDisable|function|__STATIC_INLINE void Cy_SysClk_WcoDisable(void)
DECL|Cy_SysClk_WcoEnable|function|__STATIC_INLINE cy_en_sysclk_status_t Cy_SysClk_WcoEnable(uint32_t timeoutus)
DECL|Cy_SysClk_WcoOkay|function|__STATIC_INLINE bool Cy_SysClk_WcoOkay(void)
DECL|__CY_SYSCLK_H__|macro|__CY_SYSCLK_H__
DECL|ccoRange|member|cy_en_fll_cco_ranges_t ccoRange; /**< CLK_FLL_CONFIG4 register, CCO_RANGE bits */
DECL|cco_Freq|member|uint16_t cco_Freq; /**< CLK_FLL_CONFIG4 register, CCO_FREQ bits */
DECL|cy_en_clkbak_in_sources_t|typedef|} cy_en_clkbak_in_sources_t;
DECL|cy_en_clkhf_csv_supervisor_clock_t|typedef|} cy_en_clkhf_csv_supervisor_clock_t;
DECL|cy_en_clkhf_dividers_t|typedef|} cy_en_clkhf_dividers_t;
DECL|cy_en_clkhf_in_sources_t|typedef|} cy_en_clkhf_in_sources_t;
DECL|cy_en_clklf_in_sources_t|typedef|} cy_en_clklf_in_sources_t;
DECL|cy_en_clkpath_in_sources_t|typedef|} cy_en_clkpath_in_sources_t;
DECL|cy_en_clkpump_divide_t|typedef|} cy_en_clkpump_divide_t;
DECL|cy_en_clkpump_in_sources_t|typedef|} cy_en_clkpump_in_sources_t;
DECL|cy_en_clktimer_in_sources_t|typedef|} cy_en_clktimer_in_sources_t;
DECL|cy_en_csv_error_actions_t|typedef|} cy_en_csv_error_actions_t;
DECL|cy_en_csv_loss_window_t|typedef|} cy_en_csv_loss_window_t;
DECL|cy_en_divider_types_t|typedef|} cy_en_divider_types_t;
DECL|cy_en_fll_cco_ranges_t|typedef|} cy_en_fll_cco_ranges_t;
DECL|cy_en_fll_pll_output_mode_t|typedef|} cy_en_fll_pll_output_mode_t;
DECL|cy_en_meas_clks_t|typedef|} cy_en_meas_clks_t;
DECL|cy_en_sysclk_status_t|typedef|} cy_en_sysclk_status_t;
DECL|cy_en_wco_bypass_modes_t|typedef|} cy_en_wco_bypass_modes_t;
DECL|cy_en_wco_csv_supervisor_clock_t|typedef|} cy_en_wco_csv_supervisor_clock_t;
DECL|cy_stc_clkhf_csv_config_t|typedef|} cy_stc_clkhf_csv_config_t;
DECL|cy_stc_fll_manual_config_t|typedef|} cy_stc_fll_manual_config_t;
DECL|cy_stc_pll_config_t|typedef|} cy_stc_pll_config_t;
DECL|cy_stc_pll_manual_config_t|typedef|} cy_stc_pll_manual_config_t;
DECL|cy_stc_wco_csv_config_t|typedef|} cy_stc_wco_csv_config_t;
DECL|enableFrequencyFaultDetection|member|bool enableFrequencyFaultDetection; /**< 1= enabled, 0= disabled */
DECL|enableLossDetection|member|bool enableLossDetection; /**< 1= enabled, 0= disabled */
DECL|enableLossDetection|member|bool enableLossDetection; /**< 1= enabled, 0= disabled. Note that if loss detection is enabled, writes to other register bits are ignored. */
DECL|enableOutputDiv|member|bool enableOutputDiv; /**< CLK_FLL_CONFIG register, FLL_OUTPUT_DIV bit */
DECL|feedbackDiv|member|uint8_t feedbackDiv; /**< CLK_PLL_CONFIG register, FEEDBACK_DIV (P) bits */
DECL|fllMult|member|uint32_t fllMult; /**< CLK_FLL_CONFIG register, FLL_MULT bits */
DECL|frequencyAction|member|cy_en_csv_error_actions_t frequencyAction; /**< \ref cy_en_csv_error_actions_t */
DECL|frequencyLowerLimit|member|uint16_t frequencyLowerLimit; /**< Lowest frequency in kHz that supervised clock can go */
DECL|frequencyUpperLimit|member|uint16_t frequencyUpperLimit; /**< Highest frequency in kHz that supervised clock can go */
DECL|igain|member|uint8_t igain; /**< CLK_FLL_CONFIG3 register, FLL_LF_IGAIN bits */
DECL|inputFreq|member|uint32_t inputFreq; /**< frequency of PLL source, in Hz */
DECL|lfMode|member|bool lfMode; /**< CLK_PLL_CONFIG register, PLL_LF_MODE bit */
DECL|lfMode|member|bool lfMode; /**< CLK_PLL_CONFIG register, PLL_LF_MODE bit */
DECL|lockTolerance|member|uint16_t lockTolerance; /**< CLK_FLL_CONFIG2 register, LOCK_TOL bits */
DECL|lossAction|member|cy_en_csv_error_actions_t lossAction; /**< \ref cy_en_csv_error_actions_t */
DECL|lossAction|member|cy_en_csv_error_actions_t lossAction; /**< \ref cy_en_csv_error_actions_t */
DECL|lossWindow|member|cy_en_csv_loss_window_t lossWindow; /**< \ref cy_en_csv_loss_window_t */
DECL|lossWindow|member|cy_en_csv_loss_window_t lossWindow; /**< \ref cy_en_csv_loss_window_t */
DECL|outputDiv|member|uint8_t outputDiv; /**< CLK_PLL_CONFIG register, OUTPUT_DIV bits */
DECL|outputFreq|member|uint32_t outputFreq; /**< frequency of PLL output, in Hz */
DECL|outputMode|member|cy_en_fll_pll_output_mode_t outputMode; /**< CLK_FLL_CONFIG3 register, BYPASS_SEL bits */
DECL|outputMode|member|cy_en_fll_pll_output_mode_t outputMode; /**< CLK_PLL_CONFIG register, BYPASS_SEL bits */
DECL|outputMode|member|cy_en_fll_pll_output_mode_t outputMode; /**< CLK_PLL_CONFIG register, BYPASS_SEL bits */
DECL|pgain|member|uint8_t pgain; /**< CLK_FLL_CONFIG3 register, FLL_LF_PGAIN bits */
DECL|refDiv|member|uint16_t refDiv; /**< CLK_FLL_CONFIG2 register, FLL_REF_DIV bits */
DECL|referenceDiv|member|uint8_t referenceDiv; /**< CLK_PLL_CONFIG register, REFERENCE_DIV (Q) bits */
DECL|settlingCount|member|uint16_t settlingCount; /**< CLK_FLL_CONFIG3 register, SETTLING_COUNT bits */
DECL|supervisingWindow|member|uint16_t supervisingWindow; /**< Number of supervising clock cycles */
DECL|supervisorClock|member|cy_en_clkhf_csv_supervisor_clock_t supervisorClock; /**< \ref cy_en_clkhf_csv_supervisor_clock_t */
DECL|supervisorClock|member|cy_en_wco_csv_supervisor_clock_t supervisorClock; /**< supervisor clock selection */
