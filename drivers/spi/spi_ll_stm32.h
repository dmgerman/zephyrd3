DECL|ZEPHYR_DRIVERS_SPI_SPI_LL_STM32_H_|macro|ZEPHYR_DRIVERS_SPI_SPI_LL_STM32_H_
DECL|ctx|member|struct spi_context ctx;
DECL|irq_config_func_t|typedef|typedef void (*irq_config_func_t)(struct device *port);
DECL|irq_config|member|irq_config_func_t irq_config;
DECL|pclken|member|struct stm32_pclken pclken;
DECL|spi_stm32_config|struct|struct spi_stm32_config {
DECL|spi_stm32_data|struct|struct spi_stm32_data {
DECL|spi|member|SPI_TypeDef *spi;
