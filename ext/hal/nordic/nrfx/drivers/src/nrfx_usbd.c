DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|NRFX_USBD_ASSERT_EP_VALID|macro|NRFX_USBD_ASSERT_EP_VALID
DECL|NRFX_USBD_CONFIG_ISO_IN_ZLP|macro|NRFX_USBD_CONFIG_ISO_IN_ZLP
DECL|NRFX_USBD_DMAREQ_PROCESS_DEBUG|macro|NRFX_USBD_DMAREQ_PROCESS_DEBUG
DECL|NRFX_USBD_EARLY_DMA_PROCESS|macro|NRFX_USBD_EARLY_DMA_PROCESS
DECL|NRFX_USBD_EPIN_BITPOS_0|macro|NRFX_USBD_EPIN_BITPOS_0
DECL|NRFX_USBD_EPIN_BIT_MASK|macro|NRFX_USBD_EPIN_BIT_MASK
DECL|NRFX_USBD_EPOUT_BITPOS_0|macro|NRFX_USBD_EPOUT_BITPOS_0
DECL|NRFX_USBD_EPOUT_BIT_MASK|macro|NRFX_USBD_EPOUT_BIT_MASK
DECL|NRFX_USBD_EP_BITPOS|macro|NRFX_USBD_EP_BITPOS
DECL|NRFX_USBD_EP_TRANSFER_EVENT|macro|NRFX_USBD_EP_TRANSFER_EVENT
DECL|NRFX_USBD_FAILED_TRANSFERS_DEBUG|macro|NRFX_USBD_FAILED_TRANSFERS_DEBUG
DECL|NRFX_USBD_ISO_DEBUG|macro|NRFX_USBD_ISO_DEBUG
DECL|NRFX_USBD_LOG_PROTO1_FIX_PRINTF|macro|NRFX_USBD_LOG_PROTO1_FIX_PRINTF
DECL|NRFX_USBD_PROTO1_FIX_DEBUG|macro|NRFX_USBD_PROTO1_FIX_DEBUG
DECL|NRFX_USBD_STARTED_EV_ENABLE|macro|NRFX_USBD_STARTED_EV_ENABLE
DECL|USBD_EPDATASTATUS_EPIN1_Pos|variable|USBD_EPDATASTATUS_EPIN1_Pos
DECL|USBD_EPDATASTATUS_EPIN2_Pos|variable|USBD_EPDATASTATUS_EPIN2_Pos
DECL|USBD_EPDATASTATUS_EPIN3_Pos|variable|USBD_EPDATASTATUS_EPIN3_Pos
DECL|USBD_EPDATASTATUS_EPIN4_Pos|variable|USBD_EPDATASTATUS_EPIN4_Pos
DECL|USBD_EPDATASTATUS_EPIN5_Pos|variable|USBD_EPDATASTATUS_EPIN5_Pos
DECL|USBD_EPDATASTATUS_EPIN6_Pos|variable|USBD_EPDATASTATUS_EPIN6_Pos
DECL|USBD_EPDATASTATUS_EPIN7_Pos|variable|USBD_EPDATASTATUS_EPIN7_Pos
DECL|USBD_EPDATASTATUS_EPOUT1_Pos|variable|USBD_EPDATASTATUS_EPOUT1_Pos
DECL|USBD_EPDATASTATUS_EPOUT2_Pos|variable|USBD_EPDATASTATUS_EPOUT2_Pos
DECL|USBD_EPDATASTATUS_EPOUT3_Pos|variable|USBD_EPDATASTATUS_EPOUT3_Pos
DECL|USBD_EPDATASTATUS_EPOUT4_Pos|variable|USBD_EPDATASTATUS_EPOUT4_Pos
DECL|USBD_EPDATASTATUS_EPOUT5_Pos|variable|USBD_EPDATASTATUS_EPOUT5_Pos
DECL|USBD_EPDATASTATUS_EPOUT6_Pos|variable|USBD_EPDATASTATUS_EPOUT6_Pos
DECL|USBD_EPDATASTATUS_EPOUT7_Pos|variable|USBD_EPDATASTATUS_EPOUT7_Pos
DECL|USBD_EPISO_BIT_MASK|macro|USBD_EPISO_BIT_MASK
DECL|bit2ep|function|static inline nrfx_usbd_ep_t bit2ep(uint8_t bitpos)
DECL|ep2bit|function|static inline uint8_t ep2bit(nrfx_usbd_ep_t ep)
DECL|ep_in|member|usbd_ep_state_t ep_in [NRF_USBD_EPIN_CNT ]; //!< Status for IN endpoints.
DECL|ep_out|member|usbd_ep_state_t ep_out[NRF_USBD_EPOUT_CNT]; //!< Status for OUT endpoints.
DECL|ep_state_access|function|static inline usbd_ep_state_t* ep_state_access(nrfx_usbd_ep_t ep)
DECL|ep_to_hal|function|static inline uint8_t ep_to_hal(nrfx_usbd_ep_t ep)
DECL|ev_dma_epin0_handler|function|static void ev_dma_epin0_handler(void) { nrf_usbd_ep0in_dma_handler(); }
DECL|ev_dma_epin1_handler|function|static void ev_dma_epin1_handler(void) { nrf_usbd_epin_dma_handler(NRFX_USBD_EPIN1 ); }
DECL|ev_dma_epin2_handler|function|static void ev_dma_epin2_handler(void) { nrf_usbd_epin_dma_handler(NRFX_USBD_EPIN2 ); }
DECL|ev_dma_epin3_handler|function|static void ev_dma_epin3_handler(void) { nrf_usbd_epin_dma_handler(NRFX_USBD_EPIN3 ); }
DECL|ev_dma_epin4_handler|function|static void ev_dma_epin4_handler(void) { nrf_usbd_epin_dma_handler(NRFX_USBD_EPIN4 ); }
DECL|ev_dma_epin5_handler|function|static void ev_dma_epin5_handler(void) { nrf_usbd_epin_dma_handler(NRFX_USBD_EPIN5 ); }
DECL|ev_dma_epin6_handler|function|static void ev_dma_epin6_handler(void) { nrf_usbd_epin_dma_handler(NRFX_USBD_EPIN6 ); }
DECL|ev_dma_epin7_handler|function|static void ev_dma_epin7_handler(void) { nrf_usbd_epin_dma_handler(NRFX_USBD_EPIN7 ); }
DECL|ev_dma_epin8_handler|function|static void ev_dma_epin8_handler(void) { nrf_usbd_epiniso_dma_handler(NRFX_USBD_EPIN8 ); }
DECL|ev_dma_epout0_handler|function|static void ev_dma_epout0_handler(void) { nrf_usbd_ep0out_dma_handler(); }
DECL|ev_dma_epout1_handler|function|static void ev_dma_epout1_handler(void) { nrf_usbd_epout_dma_handler(NRFX_USBD_EPOUT1); }
DECL|ev_dma_epout2_handler|function|static void ev_dma_epout2_handler(void) { nrf_usbd_epout_dma_handler(NRFX_USBD_EPOUT2); }
DECL|ev_dma_epout3_handler|function|static void ev_dma_epout3_handler(void) { nrf_usbd_epout_dma_handler(NRFX_USBD_EPOUT3); }
DECL|ev_dma_epout4_handler|function|static void ev_dma_epout4_handler(void) { nrf_usbd_epout_dma_handler(NRFX_USBD_EPOUT4); }
DECL|ev_dma_epout5_handler|function|static void ev_dma_epout5_handler(void) { nrf_usbd_epout_dma_handler(NRFX_USBD_EPOUT5); }
DECL|ev_dma_epout6_handler|function|static void ev_dma_epout6_handler(void) { nrf_usbd_epout_dma_handler(NRFX_USBD_EPOUT6); }
DECL|ev_dma_epout7_handler|function|static void ev_dma_epout7_handler(void) { nrf_usbd_epout_dma_handler(NRFX_USBD_EPOUT7); }
DECL|ev_dma_epout8_handler|function|static void ev_dma_epout8_handler(void) { nrf_usbd_epoutiso_dma_handler(NRFX_USBD_EPOUT8); }
DECL|ev_epdata_handler|function|static void ev_epdata_handler(void)
DECL|ev_setup_data_handler|function|static void ev_setup_data_handler(void)
DECL|ev_setup_handler|function|static void ev_setup_handler(void)
DECL|ev_sof_handler|function|static void ev_sof_handler(void)
DECL|ev_started_handler|function|static void ev_started_handler(void)
DECL|ev_usbevent_handler|function|static void ev_usbevent_handler(void)
DECL|ev_usbreset_handler|function|static void ev_usbreset_handler(void)
DECL|handler|member|nrfx_usbd_handler_t handler; //!< Handler for current transfer, function pointer.
DECL|m_bus_suspend|variable|m_bus_suspend
DECL|m_dma_pending|variable|m_dma_pending
DECL|m_drv_state|variable|m_drv_state
DECL|m_ep_consumer_state|variable|m_ep_consumer_state
DECL|m_ep_dma_waiting|variable|m_ep_dma_waiting
DECL|m_ep_feeder_state|variable|m_ep_feeder_state
DECL|m_ep_ready|variable|m_ep_ready
DECL|m_ep_state|variable|m_ep_state
DECL|m_event_handler|variable|m_event_handler
DECL|m_irq_disabled_in_suspend|variable|m_irq_disabled_in_suspend
DECL|m_isr|variable|m_isr
DECL|m_last_setup_dir|variable|m_last_setup_dir
DECL|m_simulated_dataepstatus|variable|m_simulated_dataepstatus
DECL|m_tx_buffer|variable|m_tx_buffer
DECL|max_packet_size|member|uint16_t max_packet_size; //!< Configured endpoint size.
DECL|nrf_usbd_ep0in_dma_handler|function|static inline void nrf_usbd_ep0in_dma_handler(void)
DECL|nrf_usbd_ep0out_dma_handler|function|static inline void nrf_usbd_ep0out_dma_handler(void)
DECL|nrf_usbd_epin_dma_handler|function|static inline void nrf_usbd_epin_dma_handler(nrfx_usbd_ep_t ep)
DECL|nrf_usbd_epiniso_dma_handler|function|static inline void nrf_usbd_epiniso_dma_handler(nrfx_usbd_ep_t ep)
DECL|nrf_usbd_epout_dma_handler|function|static inline void nrf_usbd_epout_dma_handler(nrfx_usbd_ep_t ep)
DECL|nrf_usbd_epoutiso_dma_handler|function|static inline void nrf_usbd_epoutiso_dma_handler(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_active_irq_config|function|void nrfx_usbd_active_irq_config(void)
DECL|nrfx_usbd_bus_suspend_check|function|bool nrfx_usbd_bus_suspend_check(void)
DECL|nrfx_usbd_consumer|function|bool nrfx_usbd_consumer( nrfx_usbd_ep_transfer_t * p_next, void * p_context, size_t ep_size, size_t data_size)
DECL|nrfx_usbd_disable|function|void nrfx_usbd_disable(void)
DECL|nrfx_usbd_enable|function|void nrfx_usbd_enable(void)
DECL|nrfx_usbd_ep_abort|function|void nrfx_usbd_ep_abort(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_ep_default_config|function|void nrfx_usbd_ep_default_config(void)
DECL|nrfx_usbd_ep_disable|function|void nrfx_usbd_ep_disable(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_ep_dtoggle_clear|function|void nrfx_usbd_ep_dtoggle_clear(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_ep_enable_check|function|bool nrfx_usbd_ep_enable_check(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_ep_enable|function|void nrfx_usbd_ep_enable(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_ep_handled_transfer|function|nrfx_err_t nrfx_usbd_ep_handled_transfer( nrfx_usbd_ep_t ep, nrfx_usbd_handler_desc_t const * p_handler)
DECL|nrfx_usbd_ep_is_busy|function|bool nrfx_usbd_ep_is_busy(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_ep_max_packet_size_get|function|uint16_t nrfx_usbd_ep_max_packet_size_get(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_ep_max_packet_size_set|function|void nrfx_usbd_ep_max_packet_size_set(nrfx_usbd_ep_t ep, uint16_t size)
DECL|nrfx_usbd_ep_stall_check|function|bool nrfx_usbd_ep_stall_check(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_ep_stall_clear|function|void nrfx_usbd_ep_stall_clear(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_ep_stall|function|void nrfx_usbd_ep_stall(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_ep_status_get|function|nrfx_usbd_ep_status_t nrfx_usbd_ep_status_get(nrfx_usbd_ep_t ep, size_t * p_size)
DECL|nrfx_usbd_ep_to_endevent|function|static inline nrf_usbd_event_t nrfx_usbd_ep_to_endevent(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_ep_to_int|function|static inline uint32_t nrfx_usbd_ep_to_int(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_ep_transfer|function|nrfx_err_t nrfx_usbd_ep_transfer( nrfx_usbd_ep_t ep, nrfx_usbd_transfer_t const * p_transfer)
DECL|nrfx_usbd_epout_size_get|function|size_t nrfx_usbd_epout_size_get(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_feeder_buffer_get|function|void * nrfx_usbd_feeder_buffer_get(void)
DECL|nrfx_usbd_feeder_flash_zlp|function|bool nrfx_usbd_feeder_flash_zlp(nrfx_usbd_ep_transfer_t * p_next, void * p_context, size_t ep_size)
DECL|nrfx_usbd_feeder_flash|function|bool nrfx_usbd_feeder_flash(nrfx_usbd_ep_transfer_t * p_next, void * p_context, size_t ep_size)
DECL|nrfx_usbd_feeder_ram_zlp|function|bool nrfx_usbd_feeder_ram_zlp( nrfx_usbd_ep_transfer_t * p_next, void * p_context, size_t ep_size)
DECL|nrfx_usbd_feeder_ram|function|bool nrfx_usbd_feeder_ram( nrfx_usbd_ep_transfer_t * p_next, void * p_context, size_t ep_size)
DECL|nrfx_usbd_force_bus_wakeup|function|void nrfx_usbd_force_bus_wakeup(void)
DECL|nrfx_usbd_init|function|nrfx_err_t nrfx_usbd_init(nrfx_usbd_event_handler_t event_handler)
DECL|nrfx_usbd_irq_handler|function|void nrfx_usbd_irq_handler(void)
DECL|nrfx_usbd_is_enabled|function|bool nrfx_usbd_is_enabled(void)
DECL|nrfx_usbd_is_initialized|function|bool nrfx_usbd_is_initialized(void)
DECL|nrfx_usbd_is_started|function|bool nrfx_usbd_is_started(void)
DECL|nrfx_usbd_isoinconfig_get|function|nrf_usbd_isoinconfig_t nrfx_usbd_isoinconfig_get(void)
DECL|nrfx_usbd_isoinconfig_set|function|void nrfx_usbd_isoinconfig_set(nrf_usbd_isoinconfig_t config)
DECL|nrfx_usbd_last_setup_dir_get|function|nrfx_usbd_ep_t nrfx_usbd_last_setup_dir_get(void)
DECL|nrfx_usbd_setup_clear|function|void nrfx_usbd_setup_clear(void)
DECL|nrfx_usbd_setup_data_clear|function|void nrfx_usbd_setup_data_clear(void)
DECL|nrfx_usbd_setup_get|function|void nrfx_usbd_setup_get(nrfx_usbd_setup_t * p_setup)
DECL|nrfx_usbd_setup_stall|function|void nrfx_usbd_setup_stall(void)
DECL|nrfx_usbd_start|function|void nrfx_usbd_start(bool enable_sof)
DECL|nrfx_usbd_stop|function|void nrfx_usbd_stop(void)
DECL|nrfx_usbd_suspend_check|function|bool nrfx_usbd_suspend_check(void)
DECL|nrfx_usbd_suspend_irq_config|function|void nrfx_usbd_suspend_irq_config(void)
DECL|nrfx_usbd_suspend|function|bool nrfx_usbd_suspend(void)
DECL|nrfx_usbd_transfer_out_drop|function|void nrfx_usbd_transfer_out_drop(nrfx_usbd_ep_t ep)
DECL|nrfx_usbd_uninit|function|void nrfx_usbd_uninit(void)
DECL|nrfx_usbd_wakeup_req|function|bool nrfx_usbd_wakeup_req(void)
DECL|p_context|member|void * p_context; //!< Context for transfer handler.
DECL|status|member|nrfx_usbd_ep_status_t status; //!< NRFX_SUCCESS or error code, never NRFX_ERROR_BUSY - this one is calculated.
DECL|task_start_ep|function|static inline nrf_usbd_task_t task_start_ep(nrfx_usbd_ep_t ep)
DECL|transfer_cnt|member|size_t transfer_cnt; //!< Number of transferred bytes in the current transfer.
DECL|usbd_dma_pending_clear|function|static inline void usbd_dma_pending_clear(void)
DECL|usbd_dma_pending_set|function|static inline void usbd_dma_pending_set(void)
DECL|usbd_dma_scheduler_algorithm|function|static uint8_t usbd_dma_scheduler_algorithm(uint32_t req)
DECL|usbd_dma_start|function|static inline void usbd_dma_start(nrfx_usbd_ep_t ep)
DECL|usbd_dmareq_process|function|static void usbd_dmareq_process(void)
DECL|usbd_ep_abort_all|function|static void usbd_ep_abort_all(void)
DECL|usbd_ep_abort|function|static inline void usbd_ep_abort(nrfx_usbd_ep_t ep)
DECL|usbd_ep_data_handler|function|static void usbd_ep_data_handler(nrfx_usbd_ep_t ep, uint8_t bitpos)
DECL|usbd_ep_iso_capacity|function|static inline size_t usbd_ep_iso_capacity(nrfx_usbd_ep_t ep)
DECL|usbd_ep_state_t|typedef|} usbd_ep_state_t;
DECL|usbd_int_rise|function|static inline void usbd_int_rise(void)
