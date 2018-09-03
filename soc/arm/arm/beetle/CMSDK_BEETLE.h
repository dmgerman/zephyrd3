DECL|BusFault_IRQn|enumerator|BusFault_IRQn = -11, /* 5 Bus Fault Interrupt */
DECL|CMSDK_BEETLE_H|macro|CMSDK_BEETLE_H
DECL|DMA_IRQn|enumerator|DMA_IRQn = 15, /* Reserved for DMA Interrup */
DECL|DUALTIMER_IRQn|enumerator|DUALTIMER_IRQn = 10, /* Dual Timer Interrupt */
DECL|DebugMonitor_IRQn|enumerator|DebugMonitor_IRQn = -4, /* 12 Debug Monitor Interrupt */
DECL|EFLASH_IRQn|enumerator|EFLASH_IRQn = 33, /* Embedded Flash Interrupt */
DECL|HardFault_IRQn|enumerator|HardFault_IRQn = -13, /* 3 HardFault Interrupt */
DECL|I2C0_IRQn|enumerator|I2C0_IRQn = 3, /* I2C 0 Interrupt */
DECL|I2C1_IRQn|enumerator|I2C1_IRQn = 4, /* I2C 1 Interrupt */
DECL|IRQn_Type|typedef|} IRQn_Type;
DECL|IRQn|enum|typedef enum IRQn
DECL|LLCC_RXCMD_VALID_IRQn|enumerator|LLCC_RXCMD_VALID_IRQn = 38, /* t.b.a */
DECL|LLCC_RXDMAH_DONE_IRQn|enumerator|LLCC_RXDMAH_DONE_IRQn = 40, /* t.b.a */
DECL|LLCC_RXDMAL_DONE_IRQn|enumerator|LLCC_RXDMAL_DONE_IRQn = 41, /* t.b.a */
DECL|LLCC_RXEVT_VALID_IRQn|enumerator|LLCC_RXEVT_VALID_IRQn = 39, /* t.b.a */
DECL|LLCC_TXCMD_EMPTY_IRQn|enumerator|LLCC_TXCMD_EMPTY_IRQn = 34, /* t.b.a */
DECL|LLCC_TXDMAH_DONE_IRQn|enumerator|LLCC_TXDMAH_DONE_IRQn = 36, /* t.b.a */
DECL|LLCC_TXDMAL_DONE_IRQn|enumerator|LLCC_TXDMAL_DONE_IRQn = 37, /* t.b.a */
DECL|LLCC_TXEVT_EMPTY_IRQn|enumerator|LLCC_TXEVT_EMPTY_IRQn = 35, /* t.b.a */
DECL|MemoryManagement_IRQn|enumerator|MemoryManagement_IRQn = -12, /* 4 Memory Management Interrupt */
DECL|NonMaskableInt_IRQn|enumerator|NonMaskableInt_IRQn = -14, /* 2 Non Maskable Interrupt */
DECL|PORT0_0_IRQn|enumerator|PORT0_0_IRQn = 16, /* All P0 I/O pins used as irq source */
DECL|PORT0_10_IRQn|enumerator|PORT0_10_IRQn = 26,
DECL|PORT0_11_IRQn|enumerator|PORT0_11_IRQn = 27,
DECL|PORT0_12_IRQn|enumerator|PORT0_12_IRQn = 28,
DECL|PORT0_13_IRQn|enumerator|PORT0_13_IRQn = 29,
DECL|PORT0_14_IRQn|enumerator|PORT0_14_IRQn = 30,
DECL|PORT0_15_IRQn|enumerator|PORT0_15_IRQn = 31,
DECL|PORT0_1_IRQn|enumerator|PORT0_1_IRQn = 17, /* There are 16 pins in total */
DECL|PORT0_2_IRQn|enumerator|PORT0_2_IRQn = 18,
DECL|PORT0_3_IRQn|enumerator|PORT0_3_IRQn = 19,
DECL|PORT0_4_IRQn|enumerator|PORT0_4_IRQn = 20,
DECL|PORT0_5_IRQn|enumerator|PORT0_5_IRQn = 21,
DECL|PORT0_6_IRQn|enumerator|PORT0_6_IRQn = 22,
DECL|PORT0_7_IRQn|enumerator|PORT0_7_IRQn = 23,
DECL|PORT0_8_IRQn|enumerator|PORT0_8_IRQn = 24,
DECL|PORT0_9_IRQn|enumerator|PORT0_9_IRQn = 25,
DECL|PORT0_ALL_IRQn|enumerator|PORT0_ALL_IRQn = 6, /* GPIO Port 0 combined Interrupt */
DECL|PORT1_ALL_IRQn|enumerator|PORT1_ALL_IRQn = 7, /* GPIO Port 1 combined Interrupt */
DECL|PORT2_ALL_IRQn|enumerator|PORT2_ALL_IRQn = 42, /* GPIO Port 2 combined Interrupt */
DECL|PORT3_ALL_IRQn|enumerator|PORT3_ALL_IRQn = 43, /* GPIO Port 3 combined Interrupt */
DECL|PendSV_IRQn|enumerator|PendSV_IRQn = -2, /* 14 Pend SV Interrupt */
DECL|QSPI_IRQn|enumerator|QSPI_IRQn = 14, /* QUAD SPI Interrupt */
DECL|RTC_IRQn|enumerator|RTC_IRQn = 5, /* RTC Interrupt */
DECL|SPI0_IRQn|enumerator|SPI0_IRQn = 11, /* SPI 0 Interrupt */
DECL|SPI1_IRQn|enumerator|SPI1_IRQn = 13, /* SPI 1 Interrupt */
DECL|SVCall_IRQn|enumerator|SVCall_IRQn = -5, /* 11 SV Call Interrupt */
DECL|SYSERROR_IRQn|enumerator|SYSERROR_IRQn = 32, /* System Error Interrupt */
DECL|Spare_IRQn|enumerator|Spare_IRQn = 1, /* Undefined */
DECL|SysTick_IRQn|enumerator|SysTick_IRQn = -1, /* 15 System Tick Interrupt */
DECL|TIMER0_IRQn|enumerator|TIMER0_IRQn = 8, /* TIMER 0 Interrupt */
DECL|TIMER1_IRQn|enumerator|TIMER1_IRQn = 9, /* TIMER 1 Interrupt */
DECL|TRNG_IRQn|enumerator|TRNG_IRQn = 44, /* Random number generator Interrupt */
DECL|UART0_IRQn|enumerator|UART0_IRQn = 0, /* UART 0 RX and TX Combined Interrupt */
DECL|UART1_IRQn|enumerator|UART1_IRQn = 2, /* UART 1 RX and TX Combined Interrupt */
DECL|UARTOVF_IRQn|enumerator|UARTOVF_IRQn = 12, /* UART 0,1,2 Overflow Interrupt */
DECL|UsageFault_IRQn|enumerator|UsageFault_IRQn = -10, /* 6 Usage Fault Interrupt */
DECL|__CM3_REV|macro|__CM3_REV
DECL|__MPU_PRESENT|macro|__MPU_PRESENT
DECL|__NVIC_PRIO_BITS|macro|__NVIC_PRIO_BITS
DECL|__VTOR_PRESENT|macro|__VTOR_PRESENT
DECL|__Vendor_SysTickConfig|macro|__Vendor_SysTickConfig
