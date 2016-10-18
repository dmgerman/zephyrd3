DECL|QM_INTERRUPT_ROUTER_BASE|macro|QM_INTERRUPT_ROUTER_BASE
DECL|QM_INTERRUPT_ROUTER_MASK_DEFAULT|macro|QM_INTERRUPT_ROUTER_MASK_DEFAULT
DECL|QM_INTERRUPT_ROUTER_MASK_NUMREG|macro|QM_INTERRUPT_ROUTER_MASK_NUMREG
DECL|QM_INTERRUPT_ROUTER|macro|QM_INTERRUPT_ROUTER
DECL|QM_INTERRUPT_ROUTER|macro|QM_INTERRUPT_ROUTER
DECL|QM_IR_DMA_ERROR_HOST_MASK|macro|QM_IR_DMA_ERROR_HOST_MASK
DECL|QM_IR_GET_HALT_MASK|macro|QM_IR_GET_HALT_MASK
DECL|QM_IR_GET_LMT_HALT_MASK|macro|QM_IR_GET_LMT_HALT_MASK
DECL|QM_IR_GET_LMT_MASK|macro|QM_IR_GET_LMT_MASK
DECL|QM_IR_GET_MASK|macro|QM_IR_GET_MASK
DECL|QM_IR_INT_HALT_MASK|macro|QM_IR_INT_HALT_MASK
DECL|QM_IR_INT_LMT_HALT_MASK|macro|QM_IR_INT_LMT_HALT_MASK
DECL|QM_IR_INT_LMT_MASK|macro|QM_IR_INT_LMT_MASK
DECL|QM_IR_INT_MASK|macro|QM_IR_INT_MASK
DECL|QM_IR_MASK_HALTS|macro|QM_IR_MASK_HALTS
DECL|QM_IR_MASK_INTERRUPTS|macro|QM_IR_MASK_INTERRUPTS
DECL|QM_IR_MASK_LMT_HALTS|macro|QM_IR_MASK_LMT_HALTS
DECL|QM_IR_MASK_LMT_INTERRUPTS|macro|QM_IR_MASK_LMT_INTERRUPTS
DECL|QM_IR_UNMASK_HALTS|macro|QM_IR_UNMASK_HALTS
DECL|QM_IR_UNMASK_INTERRUPTS|macro|QM_IR_UNMASK_INTERRUPTS
DECL|QM_IR_UNMASK_LMT_HALTS|macro|QM_IR_UNMASK_LMT_HALTS
DECL|QM_IR_UNMASK_LMT_INTERRUPTS|macro|QM_IR_UNMASK_LMT_INTERRUPTS
DECL|__QM_INTERRUPT_ROUTER_REGS_H__|macro|__QM_INTERRUPT_ROUTER_REGS_H__
DECL|adc_0_cal_int_mask|member|QM_RW uint32_t adc_0_cal_int_mask; /**< ADC 0 CAL, Mask 34. */
DECL|adc_0_pwr_int_mask|member|QM_RW uint32_t adc_0_pwr_int_mask; /**< ADC 0 PWR, Mask 33. */
DECL|aonpt_0_int_mask|member|QM_RW uint32_t aonpt_0_int_mask; /**< AONPT 0, Mask 32. */
DECL|comparator_0_host_halt_int_mask|member|QM_RW uint32_t comparator_0_host_halt_int_mask;
DECL|comparator_0_host_int_mask|member|QM_RW uint32_t comparator_0_host_int_mask;
DECL|dma_0_error_int_mask|member|QM_RW uint32_t dma_0_error_int_mask; /**< DMA 0 Error, Mask 28. */
DECL|dma_0_int_0_mask|member|QM_RW uint32_t dma_0_int_0_mask; /**< DMA 0 int 0, Mask 14. */
DECL|dma_0_int_1_mask|member|QM_RW uint32_t dma_0_int_1_mask; /**< DMA 0 int 1, Mask 15. */
DECL|flash_mpr_0_int_mask|member|QM_RW uint32_t flash_mpr_0_int_mask; /**< Flash MPR 0, Mask 30. */
DECL|gpio_0_int_mask|member|QM_RW uint32_t gpio_0_int_mask; /**< GPIO 0, Mask 9. */
DECL|host_bus_error_int_mask|member|QM_RW uint32_t host_bus_error_int_mask; /**< Host bus error, Mask 27. */
DECL|i2c_master_0_int_mask|member|QM_RW uint32_t i2c_master_0_int_mask; /**< I2C Master 0, Mask 0. */
DECL|lock_int_mask_reg|member|QM_RW uint32_t lock_int_mask_reg; /**< Interrupt Mask Lock Register. */
DECL|qm_interrupt_router_reg_t|typedef|} qm_interrupt_router_reg_t;
DECL|reserved1|member|QM_R uint32_t reserved1;
DECL|reserved2|member|QM_RW uint32_t reserved2;
DECL|reserved3|member|QM_R uint32_t reserved3;
DECL|reserved4|member|QM_RW uint32_t reserved4[8];
DECL|reserved5|member|QM_R uint32_t reserved5;
DECL|reserved6|member|QM_R uint32_t reserved6;
DECL|reserved7|member|QM_R uint32_t reserved7;
DECL|reserved|member|QM_R uint32_t reserved[2];
DECL|rtc_0_int_mask|member|QM_RW uint32_t rtc_0_int_mask; /**< RTC 0, Mask 12. */
DECL|spi_master_0_int_mask|member|QM_RW uint32_t spi_master_0_int_mask; /**< SPI Master 0, Mask 3. */
DECL|spi_slave_0_int_mask|member|QM_RW uint32_t spi_slave_0_int_mask; /**< SPI Slave 0, Mask 5. */
DECL|sram_mpr_0_int_mask|member|QM_RW uint32_t sram_mpr_0_int_mask; /**< SRAM MPR 0, Mask 29. */
DECL|test_interrupt_router|variable|test_interrupt_router
DECL|timer_0_int_mask|member|QM_RW uint32_t timer_0_int_mask; /**< Timer 0, Mask 10. */
DECL|uart_0_int_mask|member|QM_RW uint32_t uart_0_int_mask; /**< UART 0, Mask 6. */
DECL|uart_1_int_mask|member|QM_RW uint32_t uart_1_int_mask; /**< UART 1, Mask 7. */
DECL|wdt_0_int_mask|member|QM_RW uint32_t wdt_0_int_mask; /**< WDT 0, Mask 13. */
