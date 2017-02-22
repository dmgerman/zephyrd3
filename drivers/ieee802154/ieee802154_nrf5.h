DECL|NRF5_FCS_LENGTH|macro|NRF5_FCS_LENGTH
DECL|NRF5_PHR_LENGTH|macro|NRF5_PHR_LENGTH
DECL|NRF5_PSDU_LENGTH|macro|NRF5_PSDU_LENGTH
DECL|__IEEE802154_NRF5_H__|macro|__IEEE802154_NRF5_H__
DECL|cca_wait|member|struct k_sem cca_wait;
DECL|channel_ed|member|int8_t channel_ed;
DECL|channel|member|uint8_t channel;
DECL|iface|member|struct net_if *iface;
DECL|lqi|member|uint8_t lqi;
DECL|mac|member|uint8_t mac[8];
DECL|nrf5_802154_data|struct|struct nrf5_802154_data {
DECL|rssi|member|int8_t rssi;
DECL|rx_psdu|member|uint8_t *rx_psdu;
DECL|rx_stack|member|char __stack rx_stack[CONFIG_IEEE802154_NRF5_RX_STACK_SIZE];
DECL|rx_wait|member|struct k_sem rx_wait;
DECL|tx_psdu|member|uint8_t tx_psdu[NRF5_PHR_LENGTH + NRF5_PSDU_LENGTH];
DECL|tx_success|member|bool tx_success;
DECL|tx_wait|member|struct k_sem tx_wait;
DECL|txpower|member|int8_t txpower;
