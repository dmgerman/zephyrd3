DECL|NRF5_FCS_LENGTH|macro|NRF5_FCS_LENGTH
DECL|NRF5_PHR_LENGTH|macro|NRF5_PHR_LENGTH
DECL|NRF5_PSDU_LENGTH|macro|NRF5_PSDU_LENGTH
DECL|ZEPHYR_DRIVERS_IEEE802154_IEEE802154_NRF5_H_|macro|ZEPHYR_DRIVERS_IEEE802154_IEEE802154_NRF5_H_
DECL|cca_wait|member|struct k_sem cca_wait;
DECL|channel_ed|member|s8_t channel_ed;
DECL|channel|member|u8_t channel;
DECL|iface|member|struct net_if *iface;
DECL|lqi|member|u8_t lqi;
DECL|mac|member|u8_t mac[8];
DECL|nrf5_802154_data|struct|struct nrf5_802154_data {
DECL|rssi|member|s8_t rssi;
DECL|rx_psdu|member|u8_t *rx_psdu;
DECL|rx_thread|member|struct k_thread rx_thread;
DECL|rx_wait|member|struct k_sem rx_wait;
DECL|tx_psdu|member|u8_t tx_psdu[NRF5_PHR_LENGTH + NRF5_PSDU_LENGTH];
DECL|tx_success|member|bool tx_success;
DECL|tx_wait|member|struct k_sem tx_wait;
DECL|txpower|member|s8_t txpower;
