DECL|_STM32_UART_H_|macro|_STM32_UART_H_
DECL|__brr|union|union __brr {
DECL|__cr1|union|union __cr1 {
DECL|__cr2|union|union __cr2 {
DECL|__cr3|union|union __cr3 {
DECL|__dr|union|union __dr {
DECL|__gtpr|union|union __gtpr {
DECL|__sr|union|union __sr {
DECL|addr|member|uint32_t addr :4 __packed;
DECL|baud_rate|member|uint32_t baud_rate;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|brr|member|union __brr brr;
DECL|clken|member|uint32_t clken :1 __packed;
DECL|clock_subsys|member|clock_control_subsys_t clock_subsys;
DECL|clock|member|struct device *clock;
DECL|cpha|member|uint32_t cpha :1 __packed;
DECL|cpol|member|uint32_t cpol :1 __packed;
DECL|cr1|member|union __cr1 cr1;
DECL|cr2|member|union __cr2 cr2;
DECL|cr3|member|union __cr3 cr3;
DECL|ctse|member|uint32_t ctse :1 __packed;
DECL|ctsie|member|uint32_t ctsie :1 __packed;
DECL|cts|member|uint32_t cts :1 __packed;
DECL|dmar|member|uint32_t dmar :1 __packed;
DECL|dmat|member|uint32_t dmat :1 __packed;
DECL|dr|member|uint32_t dr :8 __packed;
DECL|dr|member|union __dr dr;
DECL|eie|member|uint32_t eie :1 __packed;
DECL|fe|member|uint32_t fe :1 __packed;
DECL|fraction|member|uint32_t fraction :4 __packed;
DECL|gtpr|member|union __gtpr gtpr;
DECL|gt|member|uint32_t gt :8 __packed;
DECL|hdsel|member|uint32_t hdsel :1 __packed;
DECL|idleie|member|uint32_t idleie :1 __packed;
DECL|idle|member|uint32_t idle :1 __packed;
DECL|iren|member|uint32_t iren :1 __packed;
DECL|irlp|member|uint32_t irlp :1 __packed;
DECL|lbcl|member|uint32_t lbcl :1 __packed;
DECL|lbdie|member|uint32_t lbdie :1 __packed;
DECL|lbdl|member|uint32_t lbdl :1 __packed;
DECL|lbd|member|uint32_t lbd :1 __packed;
DECL|linen|member|uint32_t linen :1 __packed;
DECL|mantissa|member|uint32_t mantissa :12 __packed;
DECL|m|member|uint32_t m :1 __packed;
DECL|nack|member|uint32_t nack :1 __packed;
DECL|nf|member|uint32_t nf :1 __packed;
DECL|ore|member|uint32_t ore :1 __packed;
DECL|pce|member|uint32_t pce :1 __packed;
DECL|peie|member|uint32_t peie :1 __packed;
DECL|pe|member|uint32_t pe :1 __packed;
DECL|psc|member|uint32_t psc :8 __packed;
DECL|ps|member|uint32_t ps :1 __packed;
DECL|re|member|uint32_t re :1 __packed;
DECL|rsvd__10_15|member|uint32_t rsvd__10_15 : 6 __packed;
DECL|rsvd__11_31|member|uint32_t rsvd__11_31 :21 __packed;
DECL|rsvd__14_15|member|uint32_t rsvd__14_15 :2 __packed;
DECL|rsvd__15_31|member|uint32_t rsvd__15_31 :17 __packed;
DECL|rsvd__16_31|member|uint32_t rsvd__16_31 : 16 __packed;
DECL|rsvd__16_31|member|uint32_t rsvd__16_31 :16 __packed;
DECL|rsvd__16_31|member|uint32_t rsvd__16_31 :16 __packed;
DECL|rsvd__16_31|member|uint32_t rsvd__16_31 :16 __packed;
DECL|rsvd__4|member|uint32_t rsvd__4 :1 __packed;
DECL|rsvd__7|member|uint32_t rsvd__7 :1 __packed;
DECL|rsvd__9_31|member|uint32_t rsvd__9_31 :24 __packed;
DECL|rtse|member|uint32_t rtse :1 __packed;
DECL|rwu|member|uint32_t rwu :1 __packed;
DECL|rxneie|member|uint32_t rxneie :1 __packed;
DECL|rxne|member|uint32_t rxne :1 __packed;
DECL|sbk|member|uint32_t sbk :1 __packed;
DECL|scen|member|uint32_t scen :1 __packed;
DECL|sr|member|union __sr sr;
DECL|stop|member|uint32_t stop :2 __packed;
DECL|tcie|member|uint32_t tcie :1 __packed;
DECL|tc|member|uint32_t tc :1 __packed;
DECL|te|member|uint32_t te :1 __packed;
DECL|txeie|member|uint32_t txeie :1 __packed;
DECL|txe|member|uint32_t txe :1 __packed;
DECL|uart_stm32_config|struct|struct uart_stm32_config {
DECL|uart_stm32_data|struct|struct uart_stm32_data {
DECL|uart_stm32|struct|struct uart_stm32 {
DECL|uconf|member|struct uart_device_config uconf;
DECL|ue|member|uint32_t ue :1 __packed;
DECL|user_cb|member|uart_irq_callback_t user_cb;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|wake|member|uint32_t wake :1 __packed;
