DECL|_MODEM_RECEIVER_H_|macro|_MODEM_RECEIVER_H_
DECL|data_imei|member|char *data_imei;
DECL|data_manufacturer|member|char *data_manufacturer;
DECL|data_model|member|char *data_model;
DECL|data_revision|member|char *data_revision;
DECL|data_rssi|member|int data_rssi;
DECL|mdm_receiver_context|struct|struct mdm_receiver_context {
DECL|rx_sem|member|struct k_sem rx_sem;
DECL|uart_dev|member|struct device *uart_dev;
DECL|uart_pipe_buf|member|u8_t *uart_pipe_buf;
DECL|uart_pipe_size|member|size_t uart_pipe_size;
DECL|uart_pipe|member|struct k_pipe uart_pipe;
