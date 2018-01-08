DECL|NRFX_QSPI_DEFAULT_CINSTR|macro|NRFX_QSPI_DEFAULT_CINSTR
DECL|NRFX_QSPI_DEFAULT_CONFIG|macro|NRFX_QSPI_DEFAULT_CONFIG
DECL|NRFX_QSPI_EVENT_DONE|enumerator|NRFX_QSPI_EVENT_DONE, /**< Transfer done. */
DECL|NRFX_QSPI_H__|macro|NRFX_QSPI_H__
DECL|irq_priority|member|uint8_t irq_priority; /**< Interrupt priority. */
DECL|nrfx_qspi_config_t|typedef|} nrfx_qspi_config_t;
DECL|nrfx_qspi_evt_t|typedef|} nrfx_qspi_evt_t;
DECL|nrfx_qspi_handler_t|typedef|typedef void (*nrfx_qspi_handler_t)(nrfx_qspi_evt_t event, void * p_context);
DECL|phy_if|member|nrf_qspi_phy_conf_t phy_if; /**< Physical layer interface configuration structure. */
DECL|pins|member|nrf_qspi_pins_t pins; /**< Pins configuration structure. */
DECL|prot_if|member|nrf_qspi_prot_conf_t prot_if; /**< Protocol layer interface configuration structure. */
DECL|xip_offset|member|uint32_t xip_offset; /**< Address offset into the external memory for Execute in Place operation. */
