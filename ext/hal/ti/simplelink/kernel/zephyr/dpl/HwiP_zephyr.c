DECL|EXCEPTION_LSPI|macro|EXCEPTION_LSPI
DECL|EXCEPTION_NWPIC|macro|EXCEPTION_NWPIC
DECL|EXCEPTION_UDMAERR|macro|EXCEPTION_UDMAERR
DECL|EXCEPTION_UDMA|macro|EXCEPTION_UDMA
DECL|HwiP_Params_init|function|void HwiP_Params_init(HwiP_Params *params)
DECL|HwiP_clearInterrupt|function|void HwiP_clearInterrupt(int interruptNum)
DECL|HwiP_create|function|HwiP_Handle HwiP_create(int interruptNum, HwiP_Fxn hwiFxn, HwiP_Params *params)
DECL|HwiP_delete|function|void HwiP_delete(HwiP_Handle handle)
DECL|HwiP_disable|function|uintptr_t HwiP_disable(void)
DECL|HwiP_restore|function|void HwiP_restore(uintptr_t key)
DECL|arg|member|uintptr_t arg;
DECL|cb|member|HwiP_Fxn cb;
DECL|sl_LSPI_cb|variable|sl_LSPI_cb
DECL|sl_NWPIC_cb|variable|sl_NWPIC_cb
DECL|sl_UDMAERR_cb|variable|sl_UDMAERR_cb
DECL|sl_UDMA_cb|variable|sl_UDMA_cb
DECL|sl_isr_args|struct|struct sl_isr_args
DECL|sl_isr|function|static void sl_isr(void *isr_arg)
