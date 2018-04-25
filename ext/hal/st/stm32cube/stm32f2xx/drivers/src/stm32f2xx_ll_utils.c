DECL|IS_LL_UTILS_APB1_DIV|macro|IS_LL_UTILS_APB1_DIV
DECL|IS_LL_UTILS_APB2_DIV|macro|IS_LL_UTILS_APB2_DIV
DECL|IS_LL_UTILS_HSE_BYPASS|macro|IS_LL_UTILS_HSE_BYPASS
DECL|IS_LL_UTILS_HSE_FREQUENCY|macro|IS_LL_UTILS_HSE_FREQUENCY
DECL|IS_LL_UTILS_PLLM_VALUE|macro|IS_LL_UTILS_PLLM_VALUE
DECL|IS_LL_UTILS_PLLN_VALUE|macro|IS_LL_UTILS_PLLN_VALUE
DECL|IS_LL_UTILS_PLLP_VALUE|macro|IS_LL_UTILS_PLLP_VALUE
DECL|IS_LL_UTILS_PLLVCO_INPUT|macro|IS_LL_UTILS_PLLVCO_INPUT
DECL|IS_LL_UTILS_PLLVCO_OUTPUT|macro|IS_LL_UTILS_PLLVCO_OUTPUT
DECL|IS_LL_UTILS_PLL_FREQUENCY|macro|IS_LL_UTILS_PLL_FREQUENCY
DECL|IS_LL_UTILS_SYSCLK_DIV|macro|IS_LL_UTILS_SYSCLK_DIV
DECL|LL_Init1msTick|function|void LL_Init1msTick(uint32_t HCLKFrequency)
DECL|LL_PLL_ConfigSystemClock_HSE|function|ErrorStatus LL_PLL_ConfigSystemClock_HSE(uint32_t HSEFrequency, uint32_t HSEBypass, LL_UTILS_PLLInitTypeDef *UTILS_PLLInitStruct, LL_UTILS_ClkInitTypeDef *UTILS_ClkInitStruct)
DECL|LL_PLL_ConfigSystemClock_HSI|function|ErrorStatus LL_PLL_ConfigSystemClock_HSI(LL_UTILS_PLLInitTypeDef *UTILS_PLLInitStruct, LL_UTILS_ClkInitTypeDef *UTILS_ClkInitStruct)
DECL|LL_SetSystemCoreClock|function|void LL_SetSystemCoreClock(uint32_t HCLKFrequency)
DECL|LL_mDelay|function|void LL_mDelay(uint32_t Delay)
DECL|UTILS_EnablePLLAndSwitchSystem|function|static ErrorStatus UTILS_EnablePLLAndSwitchSystem(uint32_t SYSCLK_Frequency, LL_UTILS_ClkInitTypeDef *UTILS_ClkInitStruct)
DECL|UTILS_GetPLLOutputFrequency|function|static uint32_t UTILS_GetPLLOutputFrequency(uint32_t PLL_InputFrequency, LL_UTILS_PLLInitTypeDef *UTILS_PLLInitStruct)
DECL|UTILS_HSE_FREQUENCY_MAX|macro|UTILS_HSE_FREQUENCY_MAX
DECL|UTILS_HSE_FREQUENCY_MIN|macro|UTILS_HSE_FREQUENCY_MIN
DECL|UTILS_LATENCY1_FREQ|macro|UTILS_LATENCY1_FREQ
DECL|UTILS_LATENCY2_FREQ|macro|UTILS_LATENCY2_FREQ
DECL|UTILS_LATENCY3_FREQ|macro|UTILS_LATENCY3_FREQ
DECL|UTILS_MAX_FREQUENCY|macro|UTILS_MAX_FREQUENCY
DECL|UTILS_PLLVCO_INPUT_MAX|macro|UTILS_PLLVCO_INPUT_MAX
DECL|UTILS_PLLVCO_INPUT_MIN|macro|UTILS_PLLVCO_INPUT_MIN
DECL|UTILS_PLLVCO_OUTPUT_MAX|macro|UTILS_PLLVCO_OUTPUT_MAX
DECL|UTILS_PLLVCO_OUTPUT_MIN|macro|UTILS_PLLVCO_OUTPUT_MIN
DECL|UTILS_PLL_IsBusy|function|static ErrorStatus UTILS_PLL_IsBusy(void)
DECL|UTILS_SetFlashLatency|function|static ErrorStatus UTILS_SetFlashLatency(uint32_t HCLK_Frequency)
DECL|assert_param|macro|assert_param
