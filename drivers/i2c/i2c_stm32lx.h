DECL|_STM32LX_I2C_H_|macro|_STM32LX_I2C_H_
DECL|__cr1|union|union __cr1 {
DECL|__cr2|union|union __cr2 {
DECL|__dr|union|union __dr {
DECL|__icr|union|union __icr {
DECL|__isr|union|union __isr {
DECL|__oar1|union|union __oar1 {
DECL|__oar2|union|union __oar2 {
DECL|__pecr|union|union __pecr {
DECL|__timeoutr|union|union __timeoutr {
DECL|__timingr|union|union __timingr {
DECL|add10|member|uint32_t add10 :1 __packed;
DECL|addcode|member|uint32_t addcode :7 __packed;
DECL|addrie|member|uint32_t addrie :1 __packed;
DECL|addr|member|uint32_t addr :1 __packed;
DECL|addr|member|uint32_t addr :1 __packed;
DECL|alerten|member|uint32_t alerten :1 __packed;
DECL|alert|member|uint32_t alert :1 __packed;
DECL|alert|member|uint32_t alert :1 __packed;
DECL|anfoff|member|uint32_t anfoff :1 __packed;
DECL|arlo|member|uint32_t arlo :1 __packed;
DECL|arlo|member|uint32_t arlo :1 __packed;
DECL|autoend|member|uint32_t autoend :1 __packed;
DECL|base|member|void *base;
DECL|berr|member|uint32_t berr :1 __packed;
DECL|berr|member|uint32_t berr :1 __packed;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|buf|member|uint8_t *buf;
DECL|busy|member|uint32_t busy :1 __packed;
DECL|clock_subsys|member|clock_control_subsys_t clock_subsys;
DECL|clock|member|struct device *clock;
DECL|cr1|member|union __cr1 cr1;
DECL|cr2|member|union __cr2 cr2;
DECL|current|member|} current;
DECL|data|member|uint32_t data:8 __packed;
DECL|dev_config|member|union dev_config dev_config;
DECL|device_sync_sem|member|struct k_sem device_sync_sem;
DECL|dir|member|uint32_t dir :1 __packed;
DECL|dnf|member|uint32_t dnf :4 __packed;
DECL|errie|member|uint32_t errie :1 __packed;
DECL|gcen|member|uint32_t gcen :1 __packed;
DECL|head10r|member|uint32_t head10r :1 __packed;
DECL|i2c_stm32lx_config|struct|struct i2c_stm32lx_config {
DECL|i2c_stm32lx_data|struct|struct i2c_stm32lx_data {
DECL|i2c_stm32lx|struct|struct i2c_stm32lx {
DECL|icr|member|union __icr icr;
DECL|irq_config_func_t|typedef|typedef void (*irq_config_func_t)(struct device *port);
DECL|irq_config_func|member|irq_config_func_t irq_config_func;
DECL|is_err|member|unsigned int is_err;
DECL|is_nack|member|unsigned int is_nack;
DECL|is_write|member|unsigned int is_write;
DECL|isr|member|union __isr isr;
DECL|len|member|unsigned int len;
DECL|msg|member|struct i2c_msg *msg;
DECL|nackf|member|uint32_t nackf :1 __packed;
DECL|nackie|member|uint32_t nackie :1 __packed;
DECL|nack|member|uint32_t nack :1 __packed;
DECL|nack|member|uint32_t nack :1 __packed;
DECL|nbytes|member|uint32_t nbytes :8 __packed;
DECL|nostretch|member|uint32_t nostretch :1 __packed;
DECL|oa1en|member|uint32_t oa1en :1 __packed;
DECL|oa1mode|member|uint32_t oa1mode :1 __packed;
DECL|oa1|member|uint32_t oa1 :10 __packed;
DECL|oa2en|member|uint32_t oa2en :1 __packed;
DECL|oa2msk|member|uint32_t oa2msk :3 __packed;
DECL|oa2|member|uint32_t oa2 :7 __packed;
DECL|oar1|member|union __oar1 oar1;
DECL|oar2|member|union __oar2 oar2;
DECL|ovr|member|uint32_t ovr :1 __packed;
DECL|ovr|member|uint32_t ovr :1 __packed;
DECL|pecbyte|member|uint32_t pecbyte :1 __packed;
DECL|pecen|member|uint32_t pecen :1 __packed;
DECL|pecerr|member|uint32_t pecerr :1 __packed;
DECL|pecr|member|union __pecr pecr;
DECL|pec|member|uint32_t pec :1 __packed;
DECL|pec|member|uint32_t pec:8 __packed;
DECL|pe|member|uint32_t pe :1 __packed;
DECL|presc|member|uint32_t presc :4 __packed;
DECL|rd_wrn|member|uint32_t rd_wrn :1 __packed;
DECL|reload|member|uint32_t reload :1 __packed;
DECL|rsvd__0_2|member|uint32_t rsvd__0_2 :3 __packed;
DECL|rsvd__0|member|uint32_t rsvd__0 :1 __packed;
DECL|rsvd__11_14|member|uint32_t rsvd__11_14 :4 __packed;
DECL|rsvd__11_14|member|uint32_t rsvd__11_14 :4 __packed;
DECL|rsvd__13_14|member|uint32_t rsvd__13_14 :1 __packed;
DECL|rsvd__13|member|uint32_t rsvd__13 :1 __packed;
DECL|rsvd__14_31|member|uint32_t rsvd__14_31 :17 __packed;
DECL|rsvd__14|member|uint32_t rsvd__14 :1 __packed;
DECL|rsvd__16_31|member|uint32_t rsvd__16_31 :16 __packed;
DECL|rsvd__16_31|member|uint32_t rsvd__16_31 :16 __packed;
DECL|rsvd__24_27|member|uint32_t rsvd__24_27 :4 __packed;
DECL|rsvd__24_31|member|uint32_t rsvd__24_31 :8 __packed;
DECL|rsvd__24_31|member|uint32_t rsvd__24_31 :8 __packed;
DECL|rsvd__27_31|member|uint32_t rsvd__27_31 :5 __packed;
DECL|rsvd__28_30|member|uint32_t rsvd__28_30 :1 __packed;
DECL|rsvd__6_7|member|uint32_t rsvd__6_7 :2 __packed;
DECL|rsvd__9_31|member|uint32_t rsvd__9_31 :24 __packed;
DECL|rsvd__9_31|member|uint32_t rsvd__9_31 :24 __packed;
DECL|rxdmaen|member|uint32_t rxdmaen :1 __packed;
DECL|rxdr|member|union __dr rxdr;
DECL|rxie|member|uint32_t rxie :1 __packed;
DECL|rxne|member|uint32_t rxne :1 __packed;
DECL|sadd|member|uint32_t sadd :10 __packed;
DECL|sbc|member|uint32_t sbc :1 __packed;
DECL|scldel|member|uint32_t scldel :4 __packed;
DECL|sclh|member|uint32_t sclh :8 __packed;
DECL|scll|member|uint32_t scll :8 __packed;
DECL|sdadel|member|uint32_t sdadel :4 __packed;
DECL|smbden|member|uint32_t smbden :1 __packed;
DECL|smbhen|member|uint32_t smbhen :1 __packed;
DECL|start|member|uint32_t start :1 __packed;
DECL|stopf|member|uint32_t stopf :1 __packed;
DECL|stopie|member|uint32_t stopie :1 __packed;
DECL|stop|member|uint32_t stop :1 __packed;
DECL|stop|member|uint32_t stop :1 __packed;
DECL|tcie|member|uint32_t tcie :1 __packed;
DECL|tcr|member|uint32_t tcr :1 __packed;
DECL|tc|member|uint32_t tc :1 __packed;
DECL|texten|member|uint32_t texten :1 __packed;
DECL|tidle|member|uint32_t tidle :1 __packed;
DECL|timeouta|member|uint32_t timeouta :12 __packed;
DECL|timeoutb|member|uint32_t timeoutb :12 __packed;
DECL|timeoutr|member|union __timeoutr timeoutr;
DECL|timeout|member|uint32_t timeout :1 __packed;
DECL|timeout|member|uint32_t timeout :1 __packed;
DECL|timingr|member|union __timingr timingr;
DECL|timouten|member|uint32_t timouten :1 __packed;
DECL|txdmaen|member|uint32_t txdmaen :1 __packed;
DECL|txdr|member|uint32_t txdr;
DECL|txe|member|uint32_t txe :1 __packed;
DECL|txie|member|uint32_t txie :1 __packed;
DECL|txis|member|uint32_t txis :1 __packed;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|wupen|member|uint32_t wupen :1 __packed;
