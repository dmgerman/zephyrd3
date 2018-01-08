DECL|NRFX_GPIOTE_CONFIG_IN_SENSE_HITOLO|macro|NRFX_GPIOTE_CONFIG_IN_SENSE_HITOLO
DECL|NRFX_GPIOTE_CONFIG_IN_SENSE_LOTOHI|macro|NRFX_GPIOTE_CONFIG_IN_SENSE_LOTOHI
DECL|NRFX_GPIOTE_CONFIG_IN_SENSE_TOGGLE|macro|NRFX_GPIOTE_CONFIG_IN_SENSE_TOGGLE
DECL|NRFX_GPIOTE_CONFIG_OUT_SIMPLE|macro|NRFX_GPIOTE_CONFIG_OUT_SIMPLE
DECL|NRFX_GPIOTE_CONFIG_OUT_TASK_HIGH|macro|NRFX_GPIOTE_CONFIG_OUT_TASK_HIGH
DECL|NRFX_GPIOTE_CONFIG_OUT_TASK_LOW|macro|NRFX_GPIOTE_CONFIG_OUT_TASK_LOW
DECL|NRFX_GPIOTE_CONFIG_OUT_TASK_TOGGLE|macro|NRFX_GPIOTE_CONFIG_OUT_TASK_TOGGLE
DECL|NRFX_GPIOTE_H__|macro|NRFX_GPIOTE_H__
DECL|action|member|nrf_gpiote_polarity_t action; /**< Configuration of the pin task. */
DECL|hi_accuracy|member|bool hi_accuracy;/**< True when high accuracy (IN_EVENT) is used. */
DECL|init_state|member|nrf_gpiote_outinit_t init_state; /**< Initial state of the output pin. */
DECL|is_watcher|member|bool is_watcher; /**< True when the input pin is tracking an output pin. */
DECL|nrfx_gpiote_evt_handler_t|typedef|typedef void (*nrfx_gpiote_evt_handler_t)(nrfx_gpiote_pin_t pin, nrf_gpiote_polarity_t action);
DECL|nrfx_gpiote_in_config_t|typedef|} nrfx_gpiote_in_config_t;
DECL|nrfx_gpiote_out_config_t|typedef|} nrfx_gpiote_out_config_t;
DECL|nrfx_gpiote_pin_t|typedef|typedef uint32_t nrfx_gpiote_pin_t;
DECL|pull|member|nrf_gpio_pin_pull_t pull; /**< Pulling mode. */
DECL|sense|member|nrf_gpiote_polarity_t sense; /**< Transition that triggers interrupt. */
DECL|task_pin|member|bool task_pin; /**< True if the pin is controlled by a GPIOTE task. */
