DECL|Cy_BLE_EcoConfigure|function|cy_en_ble_eco_status_t Cy_BLE_EcoConfigure(cy_en_ble_eco_freq_t freq, cy_en_ble_eco_sys_clk_div_t sysClkDiv, uint32_t cLoad, uint32_t xtalStartUpTime, cy_en_ble_eco_voltage_reg_t voltageReg)
DECL|Cy_BLE_EcoReset|function|void Cy_BLE_EcoReset(void)
DECL|Cy_BLE_EcoStart|function|cy_en_ble_eco_status_t Cy_BLE_EcoStart(const cy_stc_ble_eco_config_t *config)
DECL|Cy_BLE_EcoStop|function|void Cy_BLE_EcoStop(void)
DECL|Cy_BLE_HAL_EcoSetTrim|function|static cy_en_ble_eco_status_t Cy_BLE_HAL_EcoSetTrim(uint32_t trim, uint32_t startUpTime)
DECL|Cy_BLE_HAL_Init|function|void Cy_BLE_HAL_Init(void)
DECL|Cy_BLE_HAL_MxdRadioEnableClocks|function|static cy_en_ble_eco_status_t Cy_BLE_HAL_MxdRadioEnableClocks(cy_en_ble_eco_freq_t ecoFreq, cy_en_ble_eco_sys_clk_div_t sysClkDiv)
DECL|Cy_BLE_HAL_RcbRegRead|function|static cy_en_ble_eco_status_t Cy_BLE_HAL_RcbRegRead(uint16_t addr, uint16_t *data)
DECL|Cy_BLE_HAL_RcbRegWrite|function|static cy_en_ble_eco_status_t Cy_BLE_HAL_RcbRegWrite(uint16_t addr, uint16_t data)