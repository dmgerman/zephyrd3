DECL|NRFX_POWER_H__|macro|NRFX_POWER_H__
DECL|NRFX_POWER_MODE_CONSTLAT|enumerator|NRFX_POWER_MODE_CONSTLAT, /**< Constant latency mode */
DECL|NRFX_POWER_MODE_LOWPWR|enumerator|NRFX_POWER_MODE_LOWPWR /**< Low power mode */
DECL|NRFX_POWER_SLEEP_EVT_ENTER|enumerator|NRFX_POWER_SLEEP_EVT_ENTER, /**< CPU entered WFI/WFE sleep
DECL|NRFX_POWER_SLEEP_EVT_EXIT|enumerator|NRFX_POWER_SLEEP_EVT_EXIT /**< CPU exited WFI/WFE sleep */
DECL|NRFX_POWER_USB_EVT_DETECTED|enumerator|NRFX_POWER_USB_EVT_DETECTED, /**< USB power detected on the connector (plugged in). */
DECL|NRFX_POWER_USB_EVT_READY|enumerator|NRFX_POWER_USB_EVT_READY /**< USB power regulator ready. */
DECL|NRFX_POWER_USB_EVT_REMOVED|enumerator|NRFX_POWER_USB_EVT_REMOVED, /**< USB power removed from the connector. */
DECL|NRFX_POWER_USB_STATE_CONNECTED|enumerator|NRFX_POWER_USB_STATE_CONNECTED, /**< The USB power is detected, but USB power regulator is not ready */
DECL|NRFX_POWER_USB_STATE_DISCONNECTED|enumerator|NRFX_POWER_USB_STATE_DISCONNECTED, /**< No power on USB lines detected */
DECL|NRFX_POWER_USB_STATE_READY|enumerator|NRFX_POWER_USB_STATE_READY /**< From the power point of view USB is ready for working */
DECL|dcdcenhv|member|bool dcdcenhv: 1;
DECL|dcdcen|member|bool dcdcen:1;
DECL|en_enter|member|bool en_enter:1; //!< Enable event on sleep entering
DECL|en_exit|member|bool en_exit :1; //!< Enable event on sleep exiting
DECL|handler|member|nrfx_power_pofwarn_event_handler_t handler; //!< Event handler
DECL|handler|member|nrfx_power_sleep_event_handler_t handler; //!< Event handler
DECL|handler|member|nrfx_power_usb_event_handler_t handler; //!< Event processing
DECL|nrfx_power_config_t|typedef|}nrfx_power_config_t;
DECL|nrfx_power_mode_t|typedef|}nrfx_power_mode_t;
DECL|nrfx_power_pofwarn_config_t|typedef|}nrfx_power_pofwarn_config_t;
DECL|nrfx_power_pofwarn_event_handler_t|typedef|typedef void (*nrfx_power_pofwarn_event_handler_t)(void);
DECL|nrfx_power_sleep_event_handler_t|typedef|typedef void (*nrfx_power_sleep_event_handler_t)(nrfx_power_sleep_evt_t event);
DECL|nrfx_power_sleep_evt_t|typedef|}nrfx_power_sleep_evt_t;
DECL|nrfx_power_sleepevt_config_t|typedef|}nrfx_power_sleepevt_config_t;
DECL|nrfx_power_usb_event_handler_t|typedef|typedef void (*nrfx_power_usb_event_handler_t)(nrfx_power_usb_evt_t event);
DECL|nrfx_power_usb_evt_t|typedef|}nrfx_power_usb_evt_t;
DECL|nrfx_power_usb_state_t|typedef|}nrfx_power_usb_state_t;
DECL|nrfx_power_usbevt_config_t|typedef|}nrfx_power_usbevt_config_t;
DECL|nrfx_power_usbstatus_get|function|__STATIC_INLINE nrfx_power_usb_state_t nrfx_power_usbstatus_get(void)
DECL|thrvddh|member|nrf_power_pof_thrvddh_t thrvddh; //!< Threshold for power failure detection on VDDH pin
DECL|thr|member|nrf_power_pof_thr_t thr; //!< Threshold for power failure detection
