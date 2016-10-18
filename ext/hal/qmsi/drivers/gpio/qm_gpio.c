DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_aon_gpio_0_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_gpio_0_isr)
DECL|callback_data|variable|callback_data
DECL|callback|variable|callback
DECL|gpio_isr|function|static void gpio_isr(const qm_gpio_t gpio)
DECL|qm_gpio_clear_pin|function|int qm_gpio_clear_pin(const qm_gpio_t gpio, const uint8_t pin)
DECL|qm_gpio_read_pin|function|int qm_gpio_read_pin(const qm_gpio_t gpio, const uint8_t pin, qm_gpio_state_t *const state)
DECL|qm_gpio_read_port|function|int qm_gpio_read_port(const qm_gpio_t gpio, uint32_t *const port)
DECL|qm_gpio_restore_context|function|int qm_gpio_restore_context(const qm_gpio_t gpio, const qm_gpio_context_t *const ctx)
DECL|qm_gpio_save_context|function|int qm_gpio_save_context(const qm_gpio_t gpio, qm_gpio_context_t *const ctx)
DECL|qm_gpio_set_config|function|int qm_gpio_set_config(const qm_gpio_t gpio, const qm_gpio_port_config_t *const cfg)
DECL|qm_gpio_set_pin_state|function|int qm_gpio_set_pin_state(const qm_gpio_t gpio, const uint8_t pin, const qm_gpio_state_t state)
DECL|qm_gpio_set_pin|function|int qm_gpio_set_pin(const qm_gpio_t gpio, const uint8_t pin)
DECL|qm_gpio_write_port|function|int qm_gpio_write_port(const qm_gpio_t gpio, const uint32_t val)
DECL|qm_gpio|variable|qm_gpio
DECL|qm_gpio|variable|qm_gpio
