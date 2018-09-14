DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|ETH_RX_BUF_SIZE|macro|ETH_RX_BUF_SIZE
DECL|ETH_STM32_HAL_FRAME_SIZE_MAX|macro|ETH_STM32_HAL_FRAME_SIZE_MAX
DECL|ETH_STM32_HAL_MTU|macro|ETH_STM32_HAL_MTU
DECL|ETH_TX_BUF_SIZE|macro|ETH_TX_BUF_SIZE
DECL|ZEPHYR_DRIVERS_ETHERNET_ETH_STM32_HAL_PRIV_H_|macro|ZEPHYR_DRIVERS_ETHERNET_ETH_STM32_HAL_PRIV_H_
DECL|clock|member|struct device *clock;
DECL|config_func|member|void (*config_func)(void);
DECL|eth_stm32_hal_dev_cfg|struct|struct eth_stm32_hal_dev_cfg {
DECL|eth_stm32_hal_dev_data|struct|struct eth_stm32_hal_dev_data {
DECL|heth|member|ETH_HandleTypeDef heth;
DECL|iface|member|struct net_if *iface;
DECL|mac_addr|member|u8_t mac_addr[6];
DECL|pclken_ptp|member|struct stm32_pclken pclken_ptp;
DECL|pclken_rx|member|struct stm32_pclken pclken_rx;
DECL|pclken_tx|member|struct stm32_pclken pclken_tx;
DECL|pclken|member|struct stm32_pclken pclken;
DECL|rx_int_sem|member|struct k_sem rx_int_sem;
DECL|rx_thread|member|struct k_thread rx_thread;
DECL|tx_mutex|member|struct k_mutex tx_mutex;
