DECL|NMI_AHB_DATA_MEM_BASE|macro|NMI_AHB_DATA_MEM_BASE
DECL|NMI_AHB_SHARE_MEM_BASE|macro|NMI_AHB_SHARE_MEM_BASE
DECL|WIFI_HOST_RCV_CTRL_0|macro|WIFI_HOST_RCV_CTRL_0
DECL|WIFI_HOST_RCV_CTRL_1|macro|WIFI_HOST_RCV_CTRL_1
DECL|WIFI_HOST_RCV_CTRL_2|macro|WIFI_HOST_RCV_CTRL_2
DECL|WIFI_HOST_RCV_CTRL_3|macro|WIFI_HOST_RCV_CTRL_3
DECL|WIFI_HOST_RCV_CTRL_4|macro|WIFI_HOST_RCV_CTRL_4
DECL|WIFI_HOST_RCV_CTRL_5|macro|WIFI_HOST_RCV_CTRL_5
DECL|gstrHifCxt|variable|gstrHifCxt
DECL|hif_chip_sleep_sc|function|sint8 hif_chip_sleep_sc(void)
DECL|hif_chip_sleep|function|sint8 hif_chip_sleep(void)
DECL|hif_chip_wake|function|sint8 hif_chip_wake(void)
DECL|hif_deinit|function|sint8 hif_deinit(void * arg)
DECL|hif_get_sleep_mode|function|uint8 hif_get_sleep_mode(void)
DECL|hif_handle_isr|function|sint8 hif_handle_isr(void)
DECL|hif_init|function|sint8 hif_init(void * arg)
DECL|hif_isr|function|static sint8 hif_isr(void)
DECL|hif_receive|function|sint8 hif_receive(uint32 u32Addr, uint8 *pu8Buf, uint16 u16Sz, uint8 isDone)
DECL|hif_register_cb|function|sint8 hif_register_cb(uint8 u8Grp,tpfHifCallBack fn)
DECL|hif_send|function|sint8 hif_send(uint8 u8Gid,uint8 u8Opcode,uint8 *pu8CtrlBuf,uint16 u16CtrlBufSize, uint8 *pu8DataBuf,uint16 u16DataSize, uint16 u16DataOffset)
DECL|hif_set_rx_done|function|static sint8 hif_set_rx_done(void)
DECL|hif_set_sleep_mode|function|void hif_set_sleep_mode(uint8 u8Pstype)
DECL|isr|function|static void isr(void)
DECL|m2m_hif_cb|function|static void m2m_hif_cb(uint8 u8OpCode, uint16 u16DataSize, uint32 u32Addr)
DECL|pfCryptoCb|member|tpfHifCallBack pfCryptoCb;
DECL|pfHifCb|member|tpfHifCallBack pfHifCb;
DECL|pfIpCb|member|tpfHifCallBack pfIpCb;
DECL|pfOtaCb|member|tpfHifCallBack pfOtaCb;
DECL|pfSigmaCb|member|tpfHifCallBack pfSigmaCb;
DECL|pfSslCb|member|tpfHifCallBack pfSslCb;
DECL|pfWifiCb|member|tpfHifCallBack pfWifiCb;
DECL|tstrHifContext|typedef|}tstrHifContext;
DECL|u32RxAddr|member|uint32 u32RxAddr;
DECL|u32RxSize|member|uint32 u32RxSize;
DECL|u8ChipMode|member|uint8 u8ChipMode;
DECL|u8ChipSleep|member|uint8 u8ChipSleep;
DECL|u8HifRXDone|member|uint8 u8HifRXDone;
DECL|u8Interrupt|member|uint8 u8Interrupt;
