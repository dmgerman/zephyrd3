DECL|DMA_ISSUE_EGU_IDX|macro|DMA_ISSUE_EGU_IDX
DECL|DMA_ISSUE_EGU_IRQHandler|function|void DMA_ISSUE_EGU_IRQHandler(void)
DECL|DMA_ISSUE_EGU_IRQHandler|macro|DMA_ISSUE_EGU_IRQHandler
DECL|DMA_ISSUE_EGU_IRQn|macro|DMA_ISSUE_EGU_IRQn
DECL|DMA_ISSUE_EGU|macro|DMA_ISSUE_EGU
DECL|EGU_IRQHandler_|macro|EGU_IRQHandler_
DECL|EGU_IRQHandler|macro|EGU_IRQHandler
DECL|EGU_IRQn_|macro|EGU_IRQn_
DECL|EGU_IRQn|macro|EGU_IRQn
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|USE_DMA_ISSUE_WORKAROUND|macro|USE_DMA_ISSUE_WORKAROUND
DECL|configure_pins|function|static void configure_pins(nrfx_pwm_t const * const p_instance, nrfx_pwm_config_t const * p_config)
DECL|flags|member|uint8_t flags;
DECL|handler|member|nrfx_pwm_handler_t handler;
DECL|irq_handler|function|static void irq_handler(NRF_PWM_Type * p_pwm, pwm_control_block_t * p_cb)
DECL|m_cb|variable|m_cb
DECL|nrfx_pwm_0_irq_handler|function|void nrfx_pwm_0_irq_handler(void)
DECL|nrfx_pwm_1_irq_handler|function|void nrfx_pwm_1_irq_handler(void)
DECL|nrfx_pwm_2_irq_handler|function|void nrfx_pwm_2_irq_handler(void)
DECL|nrfx_pwm_3_irq_handler|function|void nrfx_pwm_3_irq_handler(void)
DECL|nrfx_pwm_complex_playback|function|uint32_t nrfx_pwm_complex_playback(nrfx_pwm_t const * const p_instance, nrf_pwm_sequence_t const * p_sequence_0, nrf_pwm_sequence_t const * p_sequence_1, uint16_t playback_count, uint32_t flags)
DECL|nrfx_pwm_init|function|nrfx_err_t nrfx_pwm_init(nrfx_pwm_t const * const p_instance, nrfx_pwm_config_t const * p_config, nrfx_pwm_handler_t handler)
DECL|nrfx_pwm_is_stopped|function|bool nrfx_pwm_is_stopped(nrfx_pwm_t const * const p_instance)
DECL|nrfx_pwm_simple_playback|function|uint32_t nrfx_pwm_simple_playback(nrfx_pwm_t const * const p_instance, nrf_pwm_sequence_t const * p_sequence, uint16_t playback_count, uint32_t flags)
DECL|nrfx_pwm_stop|function|bool nrfx_pwm_stop(nrfx_pwm_t const * const p_instance, bool wait_until_stopped)
DECL|nrfx_pwm_uninit|function|void nrfx_pwm_uninit(nrfx_pwm_t const * const p_instance)
DECL|pwm_control_block_t|typedef|} pwm_control_block_t;
DECL|start_playback|function|static uint32_t start_playback(nrfx_pwm_t const * const p_instance, pwm_control_block_t * p_cb, uint8_t flags, nrf_pwm_task_t starting_task)
DECL|starting_task_address|member|uint32_t starting_task_address;
DECL|state|member|nrfx_drv_state_t volatile state;
