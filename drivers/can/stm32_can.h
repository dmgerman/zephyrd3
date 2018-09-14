DECL|BIT_SEG_LENGTH|macro|BIT_SEG_LENGTH
DECL|CAN_BANK_IN_32BIT_MODE|macro|CAN_BANK_IN_32BIT_MODE
DECL|CAN_BANK_IN_LIST_MODE|macro|CAN_BANK_IN_LIST_MODE
DECL|CAN_BANK_IS_EMPTY|macro|CAN_BANK_IS_EMPTY
DECL|CAN_FILTER_EXTENDED_MASKED|enumerator|CAN_FILTER_EXTENDED_MASKED
DECL|CAN_FILTER_EXTENDED|enumerator|CAN_FILTER_EXTENDED,
DECL|CAN_FILTER_STANDARD_MASKED|enumerator|CAN_FILTER_STANDARD_MASKED,
DECL|CAN_FILTER_STANDARD|enumerator|CAN_FILTER_STANDARD,
DECL|CAN_FIRX_EXT_EXT_ID_POS|macro|CAN_FIRX_EXT_EXT_ID_POS
DECL|CAN_FIRX_EXT_IDE_POS|macro|CAN_FIRX_EXT_IDE_POS
DECL|CAN_FIRX_EXT_RTR_POS|macro|CAN_FIRX_EXT_RTR_POS
DECL|CAN_FIRX_EXT_STD_ID_POS|macro|CAN_FIRX_EXT_STD_ID_POS
DECL|CAN_FIRX_STD_IDE_POS|macro|CAN_FIRX_STD_IDE_POS
DECL|CAN_FIRX_STD_ID_POS|macro|CAN_FIRX_STD_ID_POS
DECL|CAN_FIRX_STD_RTR_POS|macro|CAN_FIRX_STD_RTR_POS
DECL|CAN_IN_16BIT_LIST_MODE|macro|CAN_IN_16BIT_LIST_MODE
DECL|CAN_IN_16BIT_MASK_MODE|macro|CAN_IN_16BIT_MASK_MODE
DECL|CAN_IN_32BIT_LIST_MODE|macro|CAN_IN_32BIT_LIST_MODE
DECL|CAN_IN_32BIT_MASK_MODE|macro|CAN_IN_32BIT_MASK_MODE
DECL|CAN_MAX_NUMBER_OF_FILTES|macro|CAN_MAX_NUMBER_OF_FILTES
DECL|CAN_NUMBER_OF_FILTER_BANKS|macro|CAN_NUMBER_OF_FILTER_BANKS
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|ZEPHYR_DRIVERS_CAN_STM32_CAN_H_|macro|ZEPHYR_DRIVERS_CAN_STM32_CAN_H_
DECL|bs2|member|u8_t bs2;
DECL|bus_speed|member|u32_t bus_speed;
DECL|can_filter_type|enum|enum can_filter_type {
DECL|can_mailbox|struct|struct can_mailbox {
DECL|can_stm32_config|struct|struct can_stm32_config {
DECL|can_stm32_data|struct|struct can_stm32_data {
DECL|can|member|CAN_TypeDef *can; /*!< CAN Registers*/
DECL|config_irq|member|void (*config_irq)(CAN_TypeDef *can);
DECL|error_flags|member|u32_t error_flags;
DECL|filter_usage|member|u64_t filter_usage;
DECL|mb0|member|struct can_mailbox mb0;
DECL|mb1|member|struct can_mailbox mb1;
DECL|mb2|member|struct can_mailbox mb2;
DECL|pclken|member|struct stm32_pclken pclken;
DECL|prop_bs1|member|u8_t prop_bs1;
DECL|response_type|member|u64_t response_type;
DECL|rx_response|member|void *rx_response[CONFIG_CAN_MAX_FILTER];
DECL|set_filter_mutex|member|struct k_mutex set_filter_mutex;
DECL|swj|member|u8_t swj;
DECL|tx_callback|member|can_tx_callback_t tx_callback;
DECL|tx_int_sem|member|struct k_sem tx_int_sem;
DECL|tx_int_sem|member|struct k_sem tx_int_sem;
DECL|tx_mutex|member|struct k_mutex tx_mutex;
