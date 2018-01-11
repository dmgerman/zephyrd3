DECL|ADDEN|member|uint8_t ADDEN:1; /*!< bit: 7 Device Address Enable */
DECL|ADDR|member|__IO USB_DEVICE_ADDR_Type ADDR; /**< \brief Offset: 0x000 (R/W 32) DEVICE_DESC_BANK Endpoint Bank, Adress of Data Buffer */
DECL|ADDR|member|__IO USB_HOST_ADDR_Type ADDR; /**< \brief Offset: 0x000 (R/W 32) HOST_DESC_BANK Host Bank, Adress of Data Buffer */
DECL|ADDR|member|uint32_t ADDR:32; /*!< bit: 0..31 Adress of data buffer */
DECL|ADDR|member|uint32_t ADDR:32; /*!< bit: 0..31 Adress of data buffer */
DECL|AUTO_ZLP|member|uint32_t AUTO_ZLP:1; /*!< bit: 31 Automatic Zero Length Packet */
DECL|AUTO_ZLP|member|uint32_t AUTO_ZLP:1; /*!< bit: 31 Automatic Zero Length Packet */
DECL|BINTERVAL|member|__IO USB_HOST_BINTERVAL_Type BINTERVAL; /**< \brief Offset: 0x003 (R/W 8) HOST_PIPE Bus Access Period of Pipe */
DECL|BITINTERVAL|member|uint8_t BITINTERVAL:8; /*!< bit: 0.. 7 Bit Interval */
DECL|BK0RDY|member|uint8_t BK0RDY:1; /*!< bit: 6 Bank 0 Ready Clear */
DECL|BK0RDY|member|uint8_t BK0RDY:1; /*!< bit: 6 Bank 0 Ready Clear */
DECL|BK0RDY|member|uint8_t BK0RDY:1; /*!< bit: 6 Bank 0 Ready Set */
DECL|BK0RDY|member|uint8_t BK0RDY:1; /*!< bit: 6 Bank 0 Ready Set */
DECL|BK0RDY|member|uint8_t BK0RDY:1; /*!< bit: 6 Bank 0 ready */
DECL|BK0RDY|member|uint8_t BK0RDY:1; /*!< bit: 6 Bank 0 ready */
DECL|BK1RDY|member|uint8_t BK1RDY:1; /*!< bit: 7 Bank 1 Ready Clear */
DECL|BK1RDY|member|uint8_t BK1RDY:1; /*!< bit: 7 Bank 1 Ready Clear */
DECL|BK1RDY|member|uint8_t BK1RDY:1; /*!< bit: 7 Bank 1 Ready Set */
DECL|BK1RDY|member|uint8_t BK1RDY:1; /*!< bit: 7 Bank 1 Ready Set */
DECL|BK1RDY|member|uint8_t BK1RDY:1; /*!< bit: 7 Bank 1 ready */
DECL|BK1RDY|member|uint8_t BK1RDY:1; /*!< bit: 7 Bank 1 ready */
DECL|BK|member|uint8_t BK:1; /*!< bit: 2 Pipe Bank */
DECL|BUSRESET|member|uint16_t BUSRESET:1; /*!< bit: 9 Send USB Reset */
DECL|BYTE_COUNT|member|uint32_t BYTE_COUNT:14; /*!< bit: 0..13 Byte Count */
DECL|BYTE_COUNT|member|uint32_t BYTE_COUNT:14; /*!< bit: 0..13 Byte Count */
DECL|CQOS|member|uint8_t CQOS:2; /*!< bit: 0.. 1 Configuration Quality of Service */
DECL|CRC16ER|member|uint16_t CRC16ER:1; /*!< bit: 4 CRC16 Error */
DECL|CRCERR|member|uint8_t CRCERR:1; /*!< bit: 0 CRC Error Status */
DECL|CRCERR|member|uint8_t CRCERR:1; /*!< bit: 0 CRC Error Status */
DECL|CTRLA|member|__IO USB_CTRLA_Type CTRLA; /**< \brief Offset: 0x000 (R/W 8) Control A */
DECL|CTRLA|member|__IO USB_CTRLA_Type CTRLA; /**< \brief Offset: 0x000 (R/W 8) Control A */
DECL|CTRLB|member|__IO USB_DEVICE_CTRLB_Type CTRLB; /**< \brief Offset: 0x008 (R/W 16) DEVICE Control B */
DECL|CTRLB|member|__IO USB_HOST_CTRLB_Type CTRLB; /**< \brief Offset: 0x008 (R/W 16) HOST Control B */
DECL|CTRL_PIPE|member|__IO USB_HOST_CTRL_PIPE_Type CTRL_PIPE; /**< \brief Offset: 0x00C (R/W 16) HOST_DESC_BANK Host Bank, Host Control Pipe */
DECL|CURBK|member|uint8_t CURBK:1; /*!< bit: 2 Curren Bank Clear */
DECL|CURBK|member|uint8_t CURBK:1; /*!< bit: 2 Curren Bank clear */
DECL|CURBK|member|uint8_t CURBK:1; /*!< bit: 2 Current Bank */
DECL|CURBK|member|uint8_t CURBK:1; /*!< bit: 2 Current Bank */
DECL|CURBK|member|uint8_t CURBK:1; /*!< bit: 2 Current Bank Set */
DECL|CURBK|member|uint8_t CURBK:1; /*!< bit: 2 Current Bank Set */
DECL|DADD|member|__IO USB_DEVICE_DADD_Type DADD; /**< \brief Offset: 0x00A (R/W 8) DEVICE Device Address */
DECL|DADD|member|uint8_t DADD:7; /*!< bit: 0.. 6 Device Address */
DECL|DAPIDER|member|uint16_t DAPIDER:1; /*!< bit: 1 Data PID Error */
DECL|DCONN|member|__I uint16_t DCONN:1; /*!< bit: 8 Device Connection */
DECL|DCONN|member|uint16_t DCONN:1; /*!< bit: 8 Device Connection Interrupt Disable */
DECL|DCONN|member|uint16_t DCONN:1; /*!< bit: 8 Link Power Management Interrupt Enable */
DECL|DDISC|member|__I uint16_t DDISC:1; /*!< bit: 9 Device Disconnection */
DECL|DDISC|member|uint16_t DDISC:1; /*!< bit: 9 Device Disconnection Interrupt Disable */
DECL|DDISC|member|uint16_t DDISC:1; /*!< bit: 9 Device Disconnection Interrupt Enable */
DECL|DESCADD|member|__IO USB_DESCADD_Type DESCADD; /**< \brief Offset: 0x024 (R/W 32) Descriptor Address */
DECL|DESCADD|member|__IO USB_DESCADD_Type DESCADD; /**< \brief Offset: 0x024 (R/W 32) Descriptor Address */
DECL|DESCADD|member|uint32_t DESCADD:32; /*!< bit: 0..31 Descriptor Address Value */
DECL|DETACH|member|uint16_t DETACH:1; /*!< bit: 0 Detach */
DECL|DEVICE|member|UsbDevice DEVICE; /**< \brief Offset: 0x000 USB is Device */
DECL|DNRSM|member|__I uint16_t DNRSM:1; /*!< bit: 5 Downstream */
DECL|DNRSM|member|uint16_t DNRSM:1; /*!< bit: 5 DownStream to Device Interrupt Disable */
DECL|DNRSM|member|uint16_t DNRSM:1; /*!< bit: 5 DownStream to the Device Interrupt Enable */
DECL|DQOS|member|uint8_t DQOS:2; /*!< bit: 2.. 3 Data Quality of Service */
DECL|DTGLER|member|uint16_t DTGLER:1; /*!< bit: 0 Data Toggle Error */
DECL|DTGLIN|member|uint8_t DTGLIN:1; /*!< bit: 1 Data Toggle IN Clear */
DECL|DTGLIN|member|uint8_t DTGLIN:1; /*!< bit: 1 Data Toggle IN Set */
DECL|DTGLIN|member|uint8_t DTGLIN:1; /*!< bit: 1 Data Toggle In */
DECL|DTGLOUT|member|uint8_t DTGLOUT:1; /*!< bit: 0 Data Toggle OUT Clear */
DECL|DTGLOUT|member|uint8_t DTGLOUT:1; /*!< bit: 0 Data Toggle OUT Set */
DECL|DTGLOUT|member|uint8_t DTGLOUT:1; /*!< bit: 0 Data Toggle Out */
DECL|DTGL|member|uint8_t DTGL:1; /*!< bit: 0 Data Toggle */
DECL|DTGL|member|uint8_t DTGL:1; /*!< bit: 0 Data Toggle Set */
DECL|DTGL|member|uint8_t DTGL:1; /*!< bit: 0 Data Toggle clear */
DECL|DeviceDescBank|member|UsbDeviceDescBank DeviceDescBank[2]; /**< \brief Offset: 0x000 UsbDeviceDescBank groups */
DECL|DeviceEndpoint|member|UsbDeviceEndpoint DeviceEndpoint[8]; /**< \brief Offset: 0x100 UsbDeviceEndpoint groups [EPT_NUM] */
DECL|ENABLE|member|uint8_t ENABLE:1; /*!< bit: 1 Enable */
DECL|ENABLE|member|uint8_t ENABLE:1; /*!< bit: 1 Enable Synchronization Busy */
DECL|EORSM|member|__I uint16_t EORSM:1; /*!< bit: 5 End Of Resume */
DECL|EORSM|member|uint16_t EORSM:1; /*!< bit: 5 End Of Resume Interrupt Enable */
DECL|EORSM|member|uint16_t EORSM:1; /*!< bit: 5 End Of Resume Interrupt Enable */
DECL|EORST|member|__I uint16_t EORST:1; /*!< bit: 3 End of Reset */
DECL|EORST|member|uint16_t EORST:1; /*!< bit: 3 End of Reset Interrupt Enable */
DECL|EORST|member|uint16_t EORST:1; /*!< bit: 3 End of Reset Interrupt Enable */
DECL|EPCFG|member|__IO USB_DEVICE_EPCFG_Type EPCFG; /**< \brief Offset: 0x000 (R/W 8) DEVICE_ENDPOINT End Point Configuration */
DECL|EPINT0|member|uint16_t EPINT0:1; /*!< bit: 0 End Point 0 Interrupt */
DECL|EPINT0|member|uint16_t EPINT0:1; /*!< bit: 0 Pipe 0 Interrupt */
DECL|EPINT1|member|uint16_t EPINT1:1; /*!< bit: 1 End Point 1 Interrupt */
DECL|EPINT1|member|uint16_t EPINT1:1; /*!< bit: 1 Pipe 1 Interrupt */
DECL|EPINT2|member|uint16_t EPINT2:1; /*!< bit: 2 End Point 2 Interrupt */
DECL|EPINT2|member|uint16_t EPINT2:1; /*!< bit: 2 Pipe 2 Interrupt */
DECL|EPINT3|member|uint16_t EPINT3:1; /*!< bit: 3 End Point 3 Interrupt */
DECL|EPINT3|member|uint16_t EPINT3:1; /*!< bit: 3 Pipe 3 Interrupt */
DECL|EPINT4|member|uint16_t EPINT4:1; /*!< bit: 4 End Point 4 Interrupt */
DECL|EPINT4|member|uint16_t EPINT4:1; /*!< bit: 4 Pipe 4 Interrupt */
DECL|EPINT5|member|uint16_t EPINT5:1; /*!< bit: 5 End Point 5 Interrupt */
DECL|EPINT5|member|uint16_t EPINT5:1; /*!< bit: 5 Pipe 5 Interrupt */
DECL|EPINT6|member|uint16_t EPINT6:1; /*!< bit: 6 End Point 6 Interrupt */
DECL|EPINT6|member|uint16_t EPINT6:1; /*!< bit: 6 Pipe 6 Interrupt */
DECL|EPINT7|member|uint16_t EPINT7:1; /*!< bit: 7 End Point 7 Interrupt */
DECL|EPINT7|member|uint16_t EPINT7:1; /*!< bit: 7 Pipe 7 Interrupt */
DECL|EPINTENCLR|member|__IO USB_DEVICE_EPINTENCLR_Type EPINTENCLR; /**< \brief Offset: 0x008 (R/W 8) DEVICE_ENDPOINT End Point Interrupt Clear Flag */
DECL|EPINTENSET|member|__IO USB_DEVICE_EPINTENSET_Type EPINTENSET; /**< \brief Offset: 0x009 (R/W 8) DEVICE_ENDPOINT End Point Interrupt Set Flag */
DECL|EPINTFLAG|member|__IO USB_DEVICE_EPINTFLAG_Type EPINTFLAG; /**< \brief Offset: 0x007 (R/W 8) DEVICE_ENDPOINT End Point Interrupt Flag */
DECL|EPINTSMRY|member|__I USB_DEVICE_EPINTSMRY_Type EPINTSMRY; /**< \brief Offset: 0x020 (R/ 16) DEVICE End Point Interrupt Summary */
DECL|EPINT|member|uint16_t EPINT:8; /*!< bit: 0.. 7 End Point x Interrupt */
DECL|EPINT|member|uint16_t EPINT:8; /*!< bit: 0.. 7 Pipe x Interrupt */
DECL|EPSTATUSCLR|member|__O USB_DEVICE_EPSTATUSCLR_Type EPSTATUSCLR; /**< \brief Offset: 0x004 ( /W 8) DEVICE_ENDPOINT End Point Pipe Status Clear */
DECL|EPSTATUSSET|member|__O USB_DEVICE_EPSTATUSSET_Type EPSTATUSSET; /**< \brief Offset: 0x005 ( /W 8) DEVICE_ENDPOINT End Point Pipe Status Set */
DECL|EPSTATUS|member|__I USB_DEVICE_EPSTATUS_Type EPSTATUS; /**< \brief Offset: 0x006 (R/ 8) DEVICE_ENDPOINT End Point Pipe Status */
DECL|EPTYPE0|member|uint8_t EPTYPE0:3; /*!< bit: 0.. 2 End Point Type0 */
DECL|EPTYPE1|member|uint8_t EPTYPE1:3; /*!< bit: 4.. 6 End Point Type1 */
DECL|ERCNT|member|uint16_t ERCNT:3; /*!< bit: 5.. 7 Pipe Error Count */
DECL|ERRORFLOW|member|uint8_t ERRORFLOW:1; /*!< bit: 1 Error Flow Status */
DECL|ERRORFLOW|member|uint8_t ERRORFLOW:1; /*!< bit: 1 Error Flow Status */
DECL|EXTREG|member|__IO USB_DEVICE_EXTREG_Type EXTREG; /**< \brief Offset: 0x008 (R/W 16) DEVICE_DESC_BANK Endpoint Bank, Extended */
DECL|EXTREG|member|__IO USB_HOST_EXTREG_Type EXTREG; /**< \brief Offset: 0x008 (R/W 16) HOST_DESC_BANK Host Bank, Extended */
DECL|FLENCE|member|uint8_t FLENCE:1; /*!< bit: 7 Frame Length Control Enable */
DECL|FLENC|member|uint8_t FLENC:4; /*!< bit: 0.. 3 Frame Length Control */
DECL|FLENHIGH|member|__I USB_HOST_FLENHIGH_Type FLENHIGH; /**< \brief Offset: 0x012 (R/ 8) HOST Host Frame Length */
DECL|FLENHIGH|member|uint8_t FLENHIGH:8; /*!< bit: 0.. 7 Frame Length */
DECL|FNCERR|member|uint16_t FNCERR:1; /*!< bit: 15 Frame Number CRC Error */
DECL|FNUM|member|__I USB_DEVICE_FNUM_Type FNUM; /**< \brief Offset: 0x010 (R/ 16) DEVICE Device Frame Number */
DECL|FNUM|member|__IO USB_HOST_FNUM_Type FNUM; /**< \brief Offset: 0x010 (R/W 16) HOST Host Frame Number */
DECL|FNUM|member|uint16_t FNUM:11; /*!< bit: 3..13 Frame Number */
DECL|FNUM|member|uint16_t FNUM:11; /*!< bit: 3..13 Frame Number */
DECL|FSMSTATE|member|uint8_t FSMSTATE:7; /*!< bit: 0.. 6 Fine State Machine Status */
DECL|FSMSTATUS|member|__I USB_FSMSTATUS_Type FSMSTATUS; /**< \brief Offset: 0x00D (R/ 8) Finite State Machine Status */
DECL|FSMSTATUS|member|__I USB_FSMSTATUS_Type FSMSTATUS; /**< \brief Offset: 0x00D (R/ 8) Finite State Machine Status */
DECL|GNAK|member|uint16_t GNAK:1; /*!< bit: 9 Global NAK */
DECL|HOST|member|UsbHost HOST; /**< \brief Offset: 0x000 USB is Host */
DECL|HSOFC|member|__IO USB_HOST_HSOFC_Type HSOFC; /**< \brief Offset: 0x00A (R/W 8) HOST Host Start Of Frame Control */
DECL|HSOF|member|__I uint16_t HSOF:1; /*!< bit: 2 Host Start Of Frame */
DECL|HSOF|member|uint16_t HSOF:1; /*!< bit: 2 Host Start Of Frame Interrupt Disable */
DECL|HSOF|member|uint16_t HSOF:1; /*!< bit: 2 Host Start Of Frame Interrupt Enable */
DECL|HostDescBank|member|UsbHostDescBank HostDescBank[2]; /**< \brief Offset: 0x000 UsbHostDescBank groups [2*HOST_IMPLEMENTED] */
DECL|HostPipe|member|UsbHostPipe HostPipe[8]; /**< \brief Offset: 0x100 UsbHostPipe groups [EPT_NUM*HOST_IMPLEMENTED] */
DECL|INTENCLR|member|__IO USB_DEVICE_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x014 (R/W 16) DEVICE Device Interrupt Enable Clear */
DECL|INTENCLR|member|__IO USB_HOST_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x014 (R/W 16) HOST Host Interrupt Enable Clear */
DECL|INTENSET|member|__IO USB_DEVICE_INTENSET_Type INTENSET; /**< \brief Offset: 0x018 (R/W 16) DEVICE Device Interrupt Enable Set */
DECL|INTENSET|member|__IO USB_HOST_INTENSET_Type INTENSET; /**< \brief Offset: 0x018 (R/W 16) HOST Host Interrupt Enable Set */
DECL|INTFLAG|member|__IO USB_DEVICE_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x01C (R/W 16) DEVICE Device Interrupt Flag */
DECL|INTFLAG|member|__IO USB_HOST_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x01C (R/W 16) HOST Host Interrupt Flag */
DECL|L1RESUME|member|uint16_t L1RESUME:1; /*!< bit: 11 Send L1 Resume */
DECL|LINESTATE|member|uint8_t LINESTATE:2; /*!< bit: 6.. 7 USB Line State Status */
DECL|LINESTATE|member|uint8_t LINESTATE:2; /*!< bit: 6.. 7 USB Line State Status */
DECL|LPMHDSK|member|uint16_t LPMHDSK:2; /*!< bit: 10..11 Link Power Management Handshake */
DECL|LPMNYET|member|__I uint16_t LPMNYET:1; /*!< bit: 8 Link Power Management Not Yet */
DECL|LPMNYET|member|uint16_t LPMNYET:1; /*!< bit: 8 Link Power Management Not Yet Interrupt Enable */
DECL|LPMNYET|member|uint16_t LPMNYET:1; /*!< bit: 8 Link Power Management Not Yet Interrupt Enable */
DECL|LPMSUSP|member|__I uint16_t LPMSUSP:1; /*!< bit: 9 Link Power Management Suspend */
DECL|LPMSUSP|member|uint16_t LPMSUSP:1; /*!< bit: 9 Link Power Management Suspend Interrupt Enable */
DECL|LPMSUSP|member|uint16_t LPMSUSP:1; /*!< bit: 9 Link Power Management Suspend Interrupt Enable */
DECL|MFNUM|member|uint16_t MFNUM:3; /*!< bit: 0.. 2 Micro Frame Number */
DECL|MFNUM|member|uint16_t MFNUM:3; /*!< bit: 0.. 2 Micro Frame Number */
DECL|MODE|member|uint8_t MODE:1; /*!< bit: 7 Operating Mode */
DECL|MSOF|member|__I uint16_t MSOF:1; /*!< bit: 1 Micro Start of Frame in High Speed Mode */
DECL|MSOF|member|uint16_t MSOF:1; /*!< bit: 1 Micro Start of Frame Interrupt Enable in High Speed Mode */
DECL|MSOF|member|uint16_t MSOF:1; /*!< bit: 1 Micro Start of Frame Interrupt Enable in High Speed Mode */
DECL|MULTI_PACKET_SIZE|member|uint32_t MULTI_PACKET_SIZE:14; /*!< bit: 14..27 Multi Packet In or Out size */
DECL|MULTI_PACKET_SIZE|member|uint32_t MULTI_PACKET_SIZE:14; /*!< bit: 14..27 Multi Packet In or Out size */
DECL|NREPLY|member|uint16_t NREPLY:1; /*!< bit: 4 No Reply */
DECL|NYETDIS|member|uint8_t NYETDIS:1; /*!< bit: 7 NYET Token Disable */
DECL|OPMODE2|member|uint16_t OPMODE2:1; /*!< bit: 8 Specific Operational Mode */
DECL|PADCAL|member|__IO USB_PADCAL_Type PADCAL; /**< \brief Offset: 0x028 (R/W 16) USB PAD Calibration */
DECL|PADCAL|member|__IO USB_PADCAL_Type PADCAL; /**< \brief Offset: 0x028 (R/W 16) USB PAD Calibration */
DECL|PCFG|member|__IO USB_HOST_PCFG_Type PCFG; /**< \brief Offset: 0x000 (R/W 8) HOST_PIPE End Point Configuration */
DECL|PCKSIZE|member|__IO USB_DEVICE_PCKSIZE_Type PCKSIZE; /**< \brief Offset: 0x004 (R/W 32) DEVICE_DESC_BANK Endpoint Bank, Packet Size */
DECL|PCKSIZE|member|__IO USB_HOST_PCKSIZE_Type PCKSIZE; /**< \brief Offset: 0x004 (R/W 32) HOST_DESC_BANK Host Bank, Packet Size */
DECL|PDADDR|member|uint16_t PDADDR:7; /*!< bit: 0.. 6 Pipe Device Adress */
DECL|PEPNUM|member|uint16_t PEPNUM:4; /*!< bit: 8..11 Pipe Endpoint Number */
DECL|PERMAX|member|uint16_t PERMAX:4; /*!< bit: 12..15 Pipe Error Max Number */
DECL|PERR|member|__I uint8_t PERR:1; /*!< bit: 3 Pipe Error Interrupt Flag */
DECL|PERR|member|uint8_t PERR:1; /*!< bit: 3 Pipe Error Interrupt Disable */
DECL|PERR|member|uint8_t PERR:1; /*!< bit: 3 Pipe Error Interrupt Enable */
DECL|PFREEZE|member|uint8_t PFREEZE:1; /*!< bit: 4 Pipe Freeze */
DECL|PFREEZE|member|uint8_t PFREEZE:1; /*!< bit: 4 Pipe Freeze Clear */
DECL|PFREEZE|member|uint8_t PFREEZE:1; /*!< bit: 4 Pipe Freeze Set */
DECL|PIDER|member|uint16_t PIDER:1; /*!< bit: 2 PID Error */
DECL|PINTENCLR|member|__IO USB_HOST_PINTENCLR_Type PINTENCLR; /**< \brief Offset: 0x008 (R/W 8) HOST_PIPE Pipe Interrupt Flag Clear */
DECL|PINTENSET|member|__IO USB_HOST_PINTENSET_Type PINTENSET; /**< \brief Offset: 0x009 (R/W 8) HOST_PIPE Pipe Interrupt Flag Set */
DECL|PINTFLAG|member|__IO USB_HOST_PINTFLAG_Type PINTFLAG; /**< \brief Offset: 0x007 (R/W 8) HOST_PIPE Pipe Interrupt Flag */
DECL|PINTSMRY|member|__I USB_HOST_PINTSMRY_Type PINTSMRY; /**< \brief Offset: 0x020 (R/ 16) HOST Pipe Interrupt Summary */
DECL|PSTATUSCLR|member|__O USB_HOST_PSTATUSCLR_Type PSTATUSCLR; /**< \brief Offset: 0x004 ( /W 8) HOST_PIPE End Point Pipe Status Clear */
DECL|PSTATUSSET|member|__O USB_HOST_PSTATUSSET_Type PSTATUSSET; /**< \brief Offset: 0x005 ( /W 8) HOST_PIPE End Point Pipe Status Set */
DECL|PSTATUS|member|__I USB_HOST_PSTATUS_Type PSTATUS; /**< \brief Offset: 0x006 (R/ 8) HOST_PIPE End Point Pipe Status */
DECL|PTOKEN|member|uint8_t PTOKEN:2; /*!< bit: 0.. 1 Pipe Token */
DECL|PTYPE|member|uint8_t PTYPE:3; /*!< bit: 3.. 5 Pipe Type */
DECL|QOSCTRL|member|__IO USB_QOSCTRL_Type QOSCTRL; /**< \brief Offset: 0x003 (R/W 8) USB Quality Of Service */
DECL|QOSCTRL|member|__IO USB_QOSCTRL_Type QOSCTRL; /**< \brief Offset: 0x003 (R/W 8) USB Quality Of Service */
DECL|RAMACER|member|__I uint16_t RAMACER:1; /*!< bit: 7 Ram Access */
DECL|RAMACER|member|__I uint16_t RAMACER:1; /*!< bit: 7 Ram Access */
DECL|RAMACER|member|uint16_t RAMACER:1; /*!< bit: 7 Ram Access Interrupt Disable */
DECL|RAMACER|member|uint16_t RAMACER:1; /*!< bit: 7 Ram Access Interrupt Enable */
DECL|RAMACER|member|uint16_t RAMACER:1; /*!< bit: 7 Ram Access Interrupt Enable */
DECL|RAMACER|member|uint16_t RAMACER:1; /*!< bit: 7 Ram Access Interrupt Enable */
DECL|RESUME|member|uint16_t RESUME:1; /*!< bit: 1 Send USB Resume */
DECL|REV_USB|macro|REV_USB
DECL|RST|member|__I uint16_t RST:1; /*!< bit: 3 Bus Reset */
DECL|RST|member|uint16_t RST:1; /*!< bit: 3 BUS Reset Interrupt Disable */
DECL|RST|member|uint16_t RST:1; /*!< bit: 3 Bus Reset Interrupt Enable */
DECL|RUNSTDBY|member|uint8_t RUNSTDBY:1; /*!< bit: 2 Run in Standby Mode */
DECL|RXSTP|member|__I uint8_t RXSTP:1; /*!< bit: 4 Received Setup */
DECL|RXSTP|member|uint8_t RXSTP:1; /*!< bit: 4 Received Setup Interrupt Disable */
DECL|RXSTP|member|uint8_t RXSTP:1; /*!< bit: 4 Received Setup Interrupt Enable */
DECL|Reserved10|member|RoReg8 Reserved10[0xD6];
DECL|Reserved10|member|RoReg8 Reserved10[0xD6];
DECL|Reserved1|member|RoReg8 Reserved1[0x1];
DECL|Reserved1|member|RoReg8 Reserved1[0x1];
DECL|Reserved1|member|RoReg8 Reserved1[0x1];
DECL|Reserved1|member|RoReg8 Reserved1[0x2];
DECL|Reserved1|member|RoReg8 Reserved1[0x3];
DECL|Reserved1|member|RoReg8 Reserved1[0x5];
DECL|Reserved2|member|RoReg8 Reserved2[0x16];
DECL|Reserved2|member|RoReg8 Reserved2[0x16];
DECL|Reserved2|member|RoReg8 Reserved2[0x4];
DECL|Reserved2|member|RoReg8 Reserved2[0x4];
DECL|Reserved3|member|RoReg8 Reserved3[0x1];
DECL|Reserved3|member|RoReg8 Reserved3[0x1];
DECL|Reserved4|member|RoReg8 Reserved4[0x2];
DECL|Reserved4|member|RoReg8 Reserved4[0x2];
DECL|Reserved5|member|RoReg8 Reserved5[0x1];
DECL|Reserved5|member|RoReg8 Reserved5[0x2];
DECL|Reserved6|member|RoReg8 Reserved6[0x2];
DECL|Reserved6|member|RoReg8 Reserved6[0x2];
DECL|Reserved7|member|RoReg8 Reserved7[0x2];
DECL|Reserved7|member|RoReg8 Reserved7[0x2];
DECL|Reserved8|member|RoReg8 Reserved8[0x2];
DECL|Reserved8|member|RoReg8 Reserved8[0x2];
DECL|Reserved9|member|RoReg8 Reserved9[0x2];
DECL|Reserved9|member|RoReg8 Reserved9[0x2];
DECL|SECTION_USB_DESCRIPTOR|macro|SECTION_USB_DESCRIPTOR
DECL|SIZE|member|uint32_t SIZE:3; /*!< bit: 28..30 Enpoint size */
DECL|SIZE|member|uint32_t SIZE:3; /*!< bit: 28..30 Pipe size */
DECL|SOFE|member|uint16_t SOFE:1; /*!< bit: 8 Start of Frame Generation Enable */
DECL|SOF|member|__I uint16_t SOF:1; /*!< bit: 2 Start Of Frame */
DECL|SOF|member|uint16_t SOF:1; /*!< bit: 2 Start Of Frame Interrupt Enable */
DECL|SOF|member|uint16_t SOF:1; /*!< bit: 2 Start Of Frame Interrupt Enable */
DECL|SPDCONF|member|uint16_t SPDCONF:2; /*!< bit: 2.. 3 Speed Configuration */
DECL|SPDCONF|member|uint16_t SPDCONF:2; /*!< bit: 2.. 3 Speed Configuration for Host */
DECL|SPEED|member|uint8_t SPEED:2; /*!< bit: 2.. 3 Speed Status */
DECL|SPEED|member|uint8_t SPEED:2; /*!< bit: 2.. 3 Speed Status */
DECL|STALL0|member|__I uint8_t STALL0:1; /*!< bit: 5 Stall 0 In/out */
DECL|STALL0|member|uint8_t STALL0:1; /*!< bit: 5 Stall 0 In/Out Interrupt Disable */
DECL|STALL0|member|uint8_t STALL0:1; /*!< bit: 5 Stall 0 In/out Interrupt enable */
DECL|STALL1|member|__I uint8_t STALL1:1; /*!< bit: 6 Stall 1 In/out */
DECL|STALL1|member|uint8_t STALL1:1; /*!< bit: 6 Stall 1 In/Out Interrupt Disable */
DECL|STALL1|member|uint8_t STALL1:1; /*!< bit: 6 Stall 1 In/out Interrupt enable */
DECL|STALLRQ0|member|uint8_t STALLRQ0:1; /*!< bit: 4 Stall 0 Request */
DECL|STALLRQ0|member|uint8_t STALLRQ0:1; /*!< bit: 4 Stall 0 Request Clear */
DECL|STALLRQ0|member|uint8_t STALLRQ0:1; /*!< bit: 4 Stall 0 Request Set */
DECL|STALLRQ1|member|uint8_t STALLRQ1:1; /*!< bit: 5 Stall 1 Request */
DECL|STALLRQ1|member|uint8_t STALLRQ1:1; /*!< bit: 5 Stall 1 Request Clear */
DECL|STALLRQ1|member|uint8_t STALLRQ1:1; /*!< bit: 5 Stall 1 Request Set */
DECL|STALLRQ|member|uint8_t STALLRQ:2; /*!< bit: 4.. 5 Stall x Request */
DECL|STALLRQ|member|uint8_t STALLRQ:2; /*!< bit: 4.. 5 Stall x Request Clear */
DECL|STALLRQ|member|uint8_t STALLRQ:2; /*!< bit: 4.. 5 Stall x Request Set */
DECL|STALL|member|__I uint8_t STALL:1; /*!< bit: 5 Stall Interrupt Flag */
DECL|STALL|member|__I uint8_t STALL:2; /*!< bit: 5.. 6 Stall x In/out */
DECL|STALL|member|uint8_t STALL:1; /*!< bit: 5 Stall Inetrrupt Disable */
DECL|STALL|member|uint8_t STALL:1; /*!< bit: 5 Stall Interrupt Enable */
DECL|STALL|member|uint8_t STALL:2; /*!< bit: 5.. 6 Stall x In/Out Interrupt Disable */
DECL|STALL|member|uint8_t STALL:2; /*!< bit: 5.. 6 Stall x In/out Interrupt enable */
DECL|STATUS_BK|member|__IO USB_DEVICE_STATUS_BK_Type STATUS_BK; /**< \brief Offset: 0x00A (R/W 8) DEVICE_DESC_BANK Enpoint Bank, Status of Bank */
DECL|STATUS_BK|member|__IO USB_HOST_STATUS_BK_Type STATUS_BK; /**< \brief Offset: 0x00A (R/W 8) HOST_DESC_BANK Host Bank, Status of Bank */
DECL|STATUS_PIPE|member|__IO USB_HOST_STATUS_PIPE_Type STATUS_PIPE; /**< \brief Offset: 0x00E (R/W 16) HOST_DESC_BANK Host Bank, Host Status Pipe */
DECL|STATUS|member|__I USB_DEVICE_STATUS_Type STATUS; /**< \brief Offset: 0x00C (R/ 8) DEVICE Status */
DECL|STATUS|member|__IO USB_HOST_STATUS_Type STATUS; /**< \brief Offset: 0x00C (R/W 8) HOST Status */
DECL|SUBPID|member|uint16_t SUBPID:4; /*!< bit: 0.. 3 SUBPID field send with extended token */
DECL|SUBPID|member|uint16_t SUBPID:4; /*!< bit: 0.. 3 SUBPID field send with extended token */
DECL|SUSPEND|member|__I uint16_t SUSPEND:1; /*!< bit: 0 Suspend */
DECL|SUSPEND|member|uint16_t SUSPEND:1; /*!< bit: 0 Suspend Interrupt Enable */
DECL|SUSPEND|member|uint16_t SUSPEND:1; /*!< bit: 0 Suspend Interrupt Enable */
DECL|SWRST|member|uint8_t SWRST:1; /*!< bit: 0 Software Reset */
DECL|SWRST|member|uint8_t SWRST:1; /*!< bit: 0 Software Reset Synchronization Busy */
DECL|SYNCBUSY|member|__I USB_SYNCBUSY_Type SYNCBUSY; /**< \brief Offset: 0x002 (R/ 8) Synchronization Busy */
DECL|SYNCBUSY|member|__I USB_SYNCBUSY_Type SYNCBUSY; /**< \brief Offset: 0x002 (R/ 8) Synchronization Busy */
DECL|TOUTER|member|uint16_t TOUTER:1; /*!< bit: 3 Time Out Error */
DECL|TRANSN|member|uint16_t TRANSN:5; /*!< bit: 6..10 USB Pad Transn calibration */
DECL|TRANSP|member|uint16_t TRANSP:5; /*!< bit: 0.. 4 USB Pad Transp calibration */
DECL|TRCPT0|member|__I uint8_t TRCPT0:1; /*!< bit: 0 Transfer Complete 0 */
DECL|TRCPT0|member|__I uint8_t TRCPT0:1; /*!< bit: 0 Transfer Complete 0 Interrupt Flag */
DECL|TRCPT0|member|uint8_t TRCPT0:1; /*!< bit: 0 Transfer Complete 0 Disable */
DECL|TRCPT0|member|uint8_t TRCPT0:1; /*!< bit: 0 Transfer Complete 0 Interrupt Disable */
DECL|TRCPT0|member|uint8_t TRCPT0:1; /*!< bit: 0 Transfer Complete 0 Interrupt Enable */
DECL|TRCPT0|member|uint8_t TRCPT0:1; /*!< bit: 0 Transfer Complete 0 Interrupt Enable */
DECL|TRCPT1|member|__I uint8_t TRCPT1:1; /*!< bit: 1 Transfer Complete 1 */
DECL|TRCPT1|member|__I uint8_t TRCPT1:1; /*!< bit: 1 Transfer Complete 1 Interrupt Flag */
DECL|TRCPT1|member|uint8_t TRCPT1:1; /*!< bit: 1 Transfer Complete 1 Disable */
DECL|TRCPT1|member|uint8_t TRCPT1:1; /*!< bit: 1 Transfer Complete 1 Interrupt Disable */
DECL|TRCPT1|member|uint8_t TRCPT1:1; /*!< bit: 1 Transfer Complete 1 Interrupt Enable */
DECL|TRCPT1|member|uint8_t TRCPT1:1; /*!< bit: 1 Transfer Complete 1 Interrupt Enable */
DECL|TRCPT|member|__I uint8_t TRCPT:2; /*!< bit: 0.. 1 Transfer Complete x */
DECL|TRCPT|member|__I uint8_t TRCPT:2; /*!< bit: 0.. 1 Transfer Complete x Interrupt Flag */
DECL|TRCPT|member|uint8_t TRCPT:2; /*!< bit: 0.. 1 Transfer Complete x Disable */
DECL|TRCPT|member|uint8_t TRCPT:2; /*!< bit: 0.. 1 Transfer Complete x Interrupt Disable */
DECL|TRCPT|member|uint8_t TRCPT:2; /*!< bit: 0.. 1 Transfer Complete x Interrupt Enable */
DECL|TRCPT|member|uint8_t TRCPT:2; /*!< bit: 0.. 1 Transfer Complete x Interrupt Enable */
DECL|TRFAIL0|member|__I uint8_t TRFAIL0:1; /*!< bit: 2 Error Flow 0 */
DECL|TRFAIL0|member|uint8_t TRFAIL0:1; /*!< bit: 2 Error Flow 0 Interrupt Disable */
DECL|TRFAIL0|member|uint8_t TRFAIL0:1; /*!< bit: 2 Error Flow 0 Interrupt Enable */
DECL|TRFAIL1|member|__I uint8_t TRFAIL1:1; /*!< bit: 3 Error Flow 1 */
DECL|TRFAIL1|member|uint8_t TRFAIL1:1; /*!< bit: 3 Error Flow 1 Interrupt Disable */
DECL|TRFAIL1|member|uint8_t TRFAIL1:1; /*!< bit: 3 Error Flow 1 Interrupt Enable */
DECL|TRFAIL|member|__I uint8_t TRFAIL:1; /*!< bit: 2 Error Flow Interrupt Flag */
DECL|TRFAIL|member|__I uint8_t TRFAIL:2; /*!< bit: 2.. 3 Error Flow x */
DECL|TRFAIL|member|uint8_t TRFAIL:1; /*!< bit: 2 Error Flow Interrupt Disable */
DECL|TRFAIL|member|uint8_t TRFAIL:1; /*!< bit: 2 Error Flow Interrupt Enable */
DECL|TRFAIL|member|uint8_t TRFAIL:2; /*!< bit: 2.. 3 Error Flow x Interrupt Disable */
DECL|TRFAIL|member|uint8_t TRFAIL:2; /*!< bit: 2.. 3 Error Flow x Interrupt Enable */
DECL|TRIM|member|uint16_t TRIM:3; /*!< bit: 12..14 USB Pad Trim calibration */
DECL|TSTJ|member|uint16_t TSTJ:1; /*!< bit: 5 Test mode J */
DECL|TSTJ|member|uint16_t TSTJ:1; /*!< bit: 5 Test mode J */
DECL|TSTK|member|uint16_t TSTK:1; /*!< bit: 6 Test mode K */
DECL|TSTK|member|uint16_t TSTK:1; /*!< bit: 6 Test mode K */
DECL|TSTPCKT|member|uint16_t TSTPCKT:1; /*!< bit: 7 Test packet mode */
DECL|TXSTP|member|__I uint8_t TXSTP:1; /*!< bit: 4 Transmit Setup Interrupt Flag */
DECL|TXSTP|member|uint8_t TXSTP:1; /*!< bit: 4 Transmit Setup Interrupt Disable */
DECL|TXSTP|member|uint8_t TXSTP:1; /*!< bit: 4 Transmit Setup Interrupt Enable */
DECL|UPRSM|member|__I uint16_t UPRSM:1; /*!< bit: 6 Upstream Resume */
DECL|UPRSM|member|__I uint16_t UPRSM:1; /*!< bit: 6 Upstream Resume from the Device */
DECL|UPRSM|member|uint16_t UPRSM:1; /*!< bit: 1 Upstream Resume */
DECL|UPRSM|member|uint16_t UPRSM:1; /*!< bit: 6 Upstream Resume Interrupt Enable */
DECL|UPRSM|member|uint16_t UPRSM:1; /*!< bit: 6 Upstream Resume Interrupt Enable */
DECL|UPRSM|member|uint16_t UPRSM:1; /*!< bit: 6 Upstream Resume from Device Interrupt Disable */
DECL|UPRSM|member|uint16_t UPRSM:1; /*!< bit: 6 Upstream Resume fromthe device Interrupt Enable */
DECL|USB_CTRLA_ENABLE_Pos|macro|USB_CTRLA_ENABLE_Pos
DECL|USB_CTRLA_ENABLE|macro|USB_CTRLA_ENABLE
DECL|USB_CTRLA_MASK|macro|USB_CTRLA_MASK
DECL|USB_CTRLA_MODE_DEVICE_Val|macro|USB_CTRLA_MODE_DEVICE_Val
DECL|USB_CTRLA_MODE_DEVICE|macro|USB_CTRLA_MODE_DEVICE
DECL|USB_CTRLA_MODE_HOST_Val|macro|USB_CTRLA_MODE_HOST_Val
DECL|USB_CTRLA_MODE_HOST|macro|USB_CTRLA_MODE_HOST
DECL|USB_CTRLA_MODE_Pos|macro|USB_CTRLA_MODE_Pos
DECL|USB_CTRLA_MODE|macro|USB_CTRLA_MODE
DECL|USB_CTRLA_OFFSET|macro|USB_CTRLA_OFFSET
DECL|USB_CTRLA_RESETVALUE|macro|USB_CTRLA_RESETVALUE
DECL|USB_CTRLA_RUNSTDBY_Pos|macro|USB_CTRLA_RUNSTDBY_Pos
DECL|USB_CTRLA_RUNSTDBY|macro|USB_CTRLA_RUNSTDBY
DECL|USB_CTRLA_SWRST_Pos|macro|USB_CTRLA_SWRST_Pos
DECL|USB_CTRLA_SWRST|macro|USB_CTRLA_SWRST
DECL|USB_CTRLA_Type|typedef|} USB_CTRLA_Type;
DECL|USB_DESCADD_DESCADD_Msk|macro|USB_DESCADD_DESCADD_Msk
DECL|USB_DESCADD_DESCADD_Pos|macro|USB_DESCADD_DESCADD_Pos
DECL|USB_DESCADD_DESCADD|macro|USB_DESCADD_DESCADD
DECL|USB_DESCADD_MASK|macro|USB_DESCADD_MASK
DECL|USB_DESCADD_OFFSET|macro|USB_DESCADD_OFFSET
DECL|USB_DESCADD_RESETVALUE|macro|USB_DESCADD_RESETVALUE
DECL|USB_DESCADD_Type|typedef|} USB_DESCADD_Type;
DECL|USB_DEVICE_ADDR_ADDR_Msk|macro|USB_DEVICE_ADDR_ADDR_Msk
DECL|USB_DEVICE_ADDR_ADDR_Pos|macro|USB_DEVICE_ADDR_ADDR_Pos
DECL|USB_DEVICE_ADDR_ADDR|macro|USB_DEVICE_ADDR_ADDR
DECL|USB_DEVICE_ADDR_MASK|macro|USB_DEVICE_ADDR_MASK
DECL|USB_DEVICE_ADDR_OFFSET|macro|USB_DEVICE_ADDR_OFFSET
DECL|USB_DEVICE_ADDR_Type|typedef|} USB_DEVICE_ADDR_Type;
DECL|USB_DEVICE_CTRLB_DETACH_Pos|macro|USB_DEVICE_CTRLB_DETACH_Pos
DECL|USB_DEVICE_CTRLB_DETACH|macro|USB_DEVICE_CTRLB_DETACH
DECL|USB_DEVICE_CTRLB_GNAK_Pos|macro|USB_DEVICE_CTRLB_GNAK_Pos
DECL|USB_DEVICE_CTRLB_GNAK|macro|USB_DEVICE_CTRLB_GNAK
DECL|USB_DEVICE_CTRLB_LPMHDSK_ACK_Val|macro|USB_DEVICE_CTRLB_LPMHDSK_ACK_Val
DECL|USB_DEVICE_CTRLB_LPMHDSK_ACK|macro|USB_DEVICE_CTRLB_LPMHDSK_ACK
DECL|USB_DEVICE_CTRLB_LPMHDSK_Msk|macro|USB_DEVICE_CTRLB_LPMHDSK_Msk
DECL|USB_DEVICE_CTRLB_LPMHDSK_NO_Val|macro|USB_DEVICE_CTRLB_LPMHDSK_NO_Val
DECL|USB_DEVICE_CTRLB_LPMHDSK_NO|macro|USB_DEVICE_CTRLB_LPMHDSK_NO
DECL|USB_DEVICE_CTRLB_LPMHDSK_NYET_Val|macro|USB_DEVICE_CTRLB_LPMHDSK_NYET_Val
DECL|USB_DEVICE_CTRLB_LPMHDSK_NYET|macro|USB_DEVICE_CTRLB_LPMHDSK_NYET
DECL|USB_DEVICE_CTRLB_LPMHDSK_Pos|macro|USB_DEVICE_CTRLB_LPMHDSK_Pos
DECL|USB_DEVICE_CTRLB_LPMHDSK_STALL_Val|macro|USB_DEVICE_CTRLB_LPMHDSK_STALL_Val
DECL|USB_DEVICE_CTRLB_LPMHDSK_STALL|macro|USB_DEVICE_CTRLB_LPMHDSK_STALL
DECL|USB_DEVICE_CTRLB_LPMHDSK|macro|USB_DEVICE_CTRLB_LPMHDSK
DECL|USB_DEVICE_CTRLB_MASK|macro|USB_DEVICE_CTRLB_MASK
DECL|USB_DEVICE_CTRLB_NREPLY_Pos|macro|USB_DEVICE_CTRLB_NREPLY_Pos
DECL|USB_DEVICE_CTRLB_NREPLY|macro|USB_DEVICE_CTRLB_NREPLY
DECL|USB_DEVICE_CTRLB_OFFSET|macro|USB_DEVICE_CTRLB_OFFSET
DECL|USB_DEVICE_CTRLB_OPMODE2_Pos|macro|USB_DEVICE_CTRLB_OPMODE2_Pos
DECL|USB_DEVICE_CTRLB_OPMODE2|macro|USB_DEVICE_CTRLB_OPMODE2
DECL|USB_DEVICE_CTRLB_RESETVALUE|macro|USB_DEVICE_CTRLB_RESETVALUE
DECL|USB_DEVICE_CTRLB_SPDCONF_FS_Val|macro|USB_DEVICE_CTRLB_SPDCONF_FS_Val
DECL|USB_DEVICE_CTRLB_SPDCONF_FS|macro|USB_DEVICE_CTRLB_SPDCONF_FS
DECL|USB_DEVICE_CTRLB_SPDCONF_HSTM_Val|macro|USB_DEVICE_CTRLB_SPDCONF_HSTM_Val
DECL|USB_DEVICE_CTRLB_SPDCONF_HSTM|macro|USB_DEVICE_CTRLB_SPDCONF_HSTM
DECL|USB_DEVICE_CTRLB_SPDCONF_HS_Val|macro|USB_DEVICE_CTRLB_SPDCONF_HS_Val
DECL|USB_DEVICE_CTRLB_SPDCONF_HS|macro|USB_DEVICE_CTRLB_SPDCONF_HS
DECL|USB_DEVICE_CTRLB_SPDCONF_LS_Val|macro|USB_DEVICE_CTRLB_SPDCONF_LS_Val
DECL|USB_DEVICE_CTRLB_SPDCONF_LS|macro|USB_DEVICE_CTRLB_SPDCONF_LS
DECL|USB_DEVICE_CTRLB_SPDCONF_Msk|macro|USB_DEVICE_CTRLB_SPDCONF_Msk
DECL|USB_DEVICE_CTRLB_SPDCONF_Pos|macro|USB_DEVICE_CTRLB_SPDCONF_Pos
DECL|USB_DEVICE_CTRLB_SPDCONF|macro|USB_DEVICE_CTRLB_SPDCONF
DECL|USB_DEVICE_CTRLB_TSTJ_Pos|macro|USB_DEVICE_CTRLB_TSTJ_Pos
DECL|USB_DEVICE_CTRLB_TSTJ|macro|USB_DEVICE_CTRLB_TSTJ
DECL|USB_DEVICE_CTRLB_TSTK_Pos|macro|USB_DEVICE_CTRLB_TSTK_Pos
DECL|USB_DEVICE_CTRLB_TSTK|macro|USB_DEVICE_CTRLB_TSTK
DECL|USB_DEVICE_CTRLB_TSTPCKT_Pos|macro|USB_DEVICE_CTRLB_TSTPCKT_Pos
DECL|USB_DEVICE_CTRLB_TSTPCKT|macro|USB_DEVICE_CTRLB_TSTPCKT
DECL|USB_DEVICE_CTRLB_Type|typedef|} USB_DEVICE_CTRLB_Type;
DECL|USB_DEVICE_CTRLB_UPRSM_Pos|macro|USB_DEVICE_CTRLB_UPRSM_Pos
DECL|USB_DEVICE_CTRLB_UPRSM|macro|USB_DEVICE_CTRLB_UPRSM
DECL|USB_DEVICE_DADD_ADDEN_Pos|macro|USB_DEVICE_DADD_ADDEN_Pos
DECL|USB_DEVICE_DADD_ADDEN|macro|USB_DEVICE_DADD_ADDEN
DECL|USB_DEVICE_DADD_DADD_Msk|macro|USB_DEVICE_DADD_DADD_Msk
DECL|USB_DEVICE_DADD_DADD_Pos|macro|USB_DEVICE_DADD_DADD_Pos
DECL|USB_DEVICE_DADD_DADD|macro|USB_DEVICE_DADD_DADD
DECL|USB_DEVICE_DADD_MASK|macro|USB_DEVICE_DADD_MASK
DECL|USB_DEVICE_DADD_OFFSET|macro|USB_DEVICE_DADD_OFFSET
DECL|USB_DEVICE_DADD_RESETVALUE|macro|USB_DEVICE_DADD_RESETVALUE
DECL|USB_DEVICE_DADD_Type|typedef|} USB_DEVICE_DADD_Type;
DECL|USB_DEVICE_EPCFG_EPTYPE0_Msk|macro|USB_DEVICE_EPCFG_EPTYPE0_Msk
DECL|USB_DEVICE_EPCFG_EPTYPE0_Pos|macro|USB_DEVICE_EPCFG_EPTYPE0_Pos
DECL|USB_DEVICE_EPCFG_EPTYPE0|macro|USB_DEVICE_EPCFG_EPTYPE0
DECL|USB_DEVICE_EPCFG_EPTYPE1_Msk|macro|USB_DEVICE_EPCFG_EPTYPE1_Msk
DECL|USB_DEVICE_EPCFG_EPTYPE1_Pos|macro|USB_DEVICE_EPCFG_EPTYPE1_Pos
DECL|USB_DEVICE_EPCFG_EPTYPE1|macro|USB_DEVICE_EPCFG_EPTYPE1
DECL|USB_DEVICE_EPCFG_MASK|macro|USB_DEVICE_EPCFG_MASK
DECL|USB_DEVICE_EPCFG_NYETDIS_Pos|macro|USB_DEVICE_EPCFG_NYETDIS_Pos
DECL|USB_DEVICE_EPCFG_NYETDIS|macro|USB_DEVICE_EPCFG_NYETDIS
DECL|USB_DEVICE_EPCFG_OFFSET|macro|USB_DEVICE_EPCFG_OFFSET
DECL|USB_DEVICE_EPCFG_RESETVALUE|macro|USB_DEVICE_EPCFG_RESETVALUE
DECL|USB_DEVICE_EPCFG_Type|typedef|} USB_DEVICE_EPCFG_Type;
DECL|USB_DEVICE_EPINTENCLR_MASK|macro|USB_DEVICE_EPINTENCLR_MASK
DECL|USB_DEVICE_EPINTENCLR_OFFSET|macro|USB_DEVICE_EPINTENCLR_OFFSET
DECL|USB_DEVICE_EPINTENCLR_RESETVALUE|macro|USB_DEVICE_EPINTENCLR_RESETVALUE
DECL|USB_DEVICE_EPINTENCLR_RXSTP_Pos|macro|USB_DEVICE_EPINTENCLR_RXSTP_Pos
DECL|USB_DEVICE_EPINTENCLR_RXSTP|macro|USB_DEVICE_EPINTENCLR_RXSTP
DECL|USB_DEVICE_EPINTENCLR_STALL0_Pos|macro|USB_DEVICE_EPINTENCLR_STALL0_Pos
DECL|USB_DEVICE_EPINTENCLR_STALL0|macro|USB_DEVICE_EPINTENCLR_STALL0
DECL|USB_DEVICE_EPINTENCLR_STALL1_Pos|macro|USB_DEVICE_EPINTENCLR_STALL1_Pos
DECL|USB_DEVICE_EPINTENCLR_STALL1|macro|USB_DEVICE_EPINTENCLR_STALL1
DECL|USB_DEVICE_EPINTENCLR_STALL_Msk|macro|USB_DEVICE_EPINTENCLR_STALL_Msk
DECL|USB_DEVICE_EPINTENCLR_STALL_Pos|macro|USB_DEVICE_EPINTENCLR_STALL_Pos
DECL|USB_DEVICE_EPINTENCLR_STALL|macro|USB_DEVICE_EPINTENCLR_STALL
DECL|USB_DEVICE_EPINTENCLR_TRCPT0_Pos|macro|USB_DEVICE_EPINTENCLR_TRCPT0_Pos
DECL|USB_DEVICE_EPINTENCLR_TRCPT0|macro|USB_DEVICE_EPINTENCLR_TRCPT0
DECL|USB_DEVICE_EPINTENCLR_TRCPT1_Pos|macro|USB_DEVICE_EPINTENCLR_TRCPT1_Pos
DECL|USB_DEVICE_EPINTENCLR_TRCPT1|macro|USB_DEVICE_EPINTENCLR_TRCPT1
DECL|USB_DEVICE_EPINTENCLR_TRCPT_Msk|macro|USB_DEVICE_EPINTENCLR_TRCPT_Msk
DECL|USB_DEVICE_EPINTENCLR_TRCPT_Pos|macro|USB_DEVICE_EPINTENCLR_TRCPT_Pos
DECL|USB_DEVICE_EPINTENCLR_TRCPT|macro|USB_DEVICE_EPINTENCLR_TRCPT
DECL|USB_DEVICE_EPINTENCLR_TRFAIL0_Pos|macro|USB_DEVICE_EPINTENCLR_TRFAIL0_Pos
DECL|USB_DEVICE_EPINTENCLR_TRFAIL0|macro|USB_DEVICE_EPINTENCLR_TRFAIL0
DECL|USB_DEVICE_EPINTENCLR_TRFAIL1_Pos|macro|USB_DEVICE_EPINTENCLR_TRFAIL1_Pos
DECL|USB_DEVICE_EPINTENCLR_TRFAIL1|macro|USB_DEVICE_EPINTENCLR_TRFAIL1
DECL|USB_DEVICE_EPINTENCLR_TRFAIL_Msk|macro|USB_DEVICE_EPINTENCLR_TRFAIL_Msk
DECL|USB_DEVICE_EPINTENCLR_TRFAIL_Pos|macro|USB_DEVICE_EPINTENCLR_TRFAIL_Pos
DECL|USB_DEVICE_EPINTENCLR_TRFAIL|macro|USB_DEVICE_EPINTENCLR_TRFAIL
DECL|USB_DEVICE_EPINTENCLR_Type|typedef|} USB_DEVICE_EPINTENCLR_Type;
DECL|USB_DEVICE_EPINTENSET_MASK|macro|USB_DEVICE_EPINTENSET_MASK
DECL|USB_DEVICE_EPINTENSET_OFFSET|macro|USB_DEVICE_EPINTENSET_OFFSET
DECL|USB_DEVICE_EPINTENSET_RESETVALUE|macro|USB_DEVICE_EPINTENSET_RESETVALUE
DECL|USB_DEVICE_EPINTENSET_RXSTP_Pos|macro|USB_DEVICE_EPINTENSET_RXSTP_Pos
DECL|USB_DEVICE_EPINTENSET_RXSTP|macro|USB_DEVICE_EPINTENSET_RXSTP
DECL|USB_DEVICE_EPINTENSET_STALL0_Pos|macro|USB_DEVICE_EPINTENSET_STALL0_Pos
DECL|USB_DEVICE_EPINTENSET_STALL0|macro|USB_DEVICE_EPINTENSET_STALL0
DECL|USB_DEVICE_EPINTENSET_STALL1_Pos|macro|USB_DEVICE_EPINTENSET_STALL1_Pos
DECL|USB_DEVICE_EPINTENSET_STALL1|macro|USB_DEVICE_EPINTENSET_STALL1
DECL|USB_DEVICE_EPINTENSET_STALL_Msk|macro|USB_DEVICE_EPINTENSET_STALL_Msk
DECL|USB_DEVICE_EPINTENSET_STALL_Pos|macro|USB_DEVICE_EPINTENSET_STALL_Pos
DECL|USB_DEVICE_EPINTENSET_STALL|macro|USB_DEVICE_EPINTENSET_STALL
DECL|USB_DEVICE_EPINTENSET_TRCPT0_Pos|macro|USB_DEVICE_EPINTENSET_TRCPT0_Pos
DECL|USB_DEVICE_EPINTENSET_TRCPT0|macro|USB_DEVICE_EPINTENSET_TRCPT0
DECL|USB_DEVICE_EPINTENSET_TRCPT1_Pos|macro|USB_DEVICE_EPINTENSET_TRCPT1_Pos
DECL|USB_DEVICE_EPINTENSET_TRCPT1|macro|USB_DEVICE_EPINTENSET_TRCPT1
DECL|USB_DEVICE_EPINTENSET_TRCPT_Msk|macro|USB_DEVICE_EPINTENSET_TRCPT_Msk
DECL|USB_DEVICE_EPINTENSET_TRCPT_Pos|macro|USB_DEVICE_EPINTENSET_TRCPT_Pos
DECL|USB_DEVICE_EPINTENSET_TRCPT|macro|USB_DEVICE_EPINTENSET_TRCPT
DECL|USB_DEVICE_EPINTENSET_TRFAIL0_Pos|macro|USB_DEVICE_EPINTENSET_TRFAIL0_Pos
DECL|USB_DEVICE_EPINTENSET_TRFAIL0|macro|USB_DEVICE_EPINTENSET_TRFAIL0
DECL|USB_DEVICE_EPINTENSET_TRFAIL1_Pos|macro|USB_DEVICE_EPINTENSET_TRFAIL1_Pos
DECL|USB_DEVICE_EPINTENSET_TRFAIL1|macro|USB_DEVICE_EPINTENSET_TRFAIL1
DECL|USB_DEVICE_EPINTENSET_TRFAIL_Msk|macro|USB_DEVICE_EPINTENSET_TRFAIL_Msk
DECL|USB_DEVICE_EPINTENSET_TRFAIL_Pos|macro|USB_DEVICE_EPINTENSET_TRFAIL_Pos
DECL|USB_DEVICE_EPINTENSET_TRFAIL|macro|USB_DEVICE_EPINTENSET_TRFAIL
DECL|USB_DEVICE_EPINTENSET_Type|typedef|} USB_DEVICE_EPINTENSET_Type;
DECL|USB_DEVICE_EPINTFLAG_MASK|macro|USB_DEVICE_EPINTFLAG_MASK
DECL|USB_DEVICE_EPINTFLAG_OFFSET|macro|USB_DEVICE_EPINTFLAG_OFFSET
DECL|USB_DEVICE_EPINTFLAG_RESETVALUE|macro|USB_DEVICE_EPINTFLAG_RESETVALUE
DECL|USB_DEVICE_EPINTFLAG_RXSTP_Pos|macro|USB_DEVICE_EPINTFLAG_RXSTP_Pos
DECL|USB_DEVICE_EPINTFLAG_RXSTP|macro|USB_DEVICE_EPINTFLAG_RXSTP
DECL|USB_DEVICE_EPINTFLAG_STALL0_Pos|macro|USB_DEVICE_EPINTFLAG_STALL0_Pos
DECL|USB_DEVICE_EPINTFLAG_STALL0|macro|USB_DEVICE_EPINTFLAG_STALL0
DECL|USB_DEVICE_EPINTFLAG_STALL1_Pos|macro|USB_DEVICE_EPINTFLAG_STALL1_Pos
DECL|USB_DEVICE_EPINTFLAG_STALL1|macro|USB_DEVICE_EPINTFLAG_STALL1
DECL|USB_DEVICE_EPINTFLAG_STALL_Msk|macro|USB_DEVICE_EPINTFLAG_STALL_Msk
DECL|USB_DEVICE_EPINTFLAG_STALL_Pos|macro|USB_DEVICE_EPINTFLAG_STALL_Pos
DECL|USB_DEVICE_EPINTFLAG_STALL|macro|USB_DEVICE_EPINTFLAG_STALL
DECL|USB_DEVICE_EPINTFLAG_TRCPT0_Pos|macro|USB_DEVICE_EPINTFLAG_TRCPT0_Pos
DECL|USB_DEVICE_EPINTFLAG_TRCPT0|macro|USB_DEVICE_EPINTFLAG_TRCPT0
DECL|USB_DEVICE_EPINTFLAG_TRCPT1_Pos|macro|USB_DEVICE_EPINTFLAG_TRCPT1_Pos
DECL|USB_DEVICE_EPINTFLAG_TRCPT1|macro|USB_DEVICE_EPINTFLAG_TRCPT1
DECL|USB_DEVICE_EPINTFLAG_TRCPT_Msk|macro|USB_DEVICE_EPINTFLAG_TRCPT_Msk
DECL|USB_DEVICE_EPINTFLAG_TRCPT_Pos|macro|USB_DEVICE_EPINTFLAG_TRCPT_Pos
DECL|USB_DEVICE_EPINTFLAG_TRCPT|macro|USB_DEVICE_EPINTFLAG_TRCPT
DECL|USB_DEVICE_EPINTFLAG_TRFAIL0_Pos|macro|USB_DEVICE_EPINTFLAG_TRFAIL0_Pos
DECL|USB_DEVICE_EPINTFLAG_TRFAIL0|macro|USB_DEVICE_EPINTFLAG_TRFAIL0
DECL|USB_DEVICE_EPINTFLAG_TRFAIL1_Pos|macro|USB_DEVICE_EPINTFLAG_TRFAIL1_Pos
DECL|USB_DEVICE_EPINTFLAG_TRFAIL1|macro|USB_DEVICE_EPINTFLAG_TRFAIL1
DECL|USB_DEVICE_EPINTFLAG_TRFAIL_Msk|macro|USB_DEVICE_EPINTFLAG_TRFAIL_Msk
DECL|USB_DEVICE_EPINTFLAG_TRFAIL_Pos|macro|USB_DEVICE_EPINTFLAG_TRFAIL_Pos
DECL|USB_DEVICE_EPINTFLAG_TRFAIL|macro|USB_DEVICE_EPINTFLAG_TRFAIL
DECL|USB_DEVICE_EPINTFLAG_Type|typedef|} USB_DEVICE_EPINTFLAG_Type;
DECL|USB_DEVICE_EPINTSMRY_EPINT0_Pos|macro|USB_DEVICE_EPINTSMRY_EPINT0_Pos
DECL|USB_DEVICE_EPINTSMRY_EPINT0|macro|USB_DEVICE_EPINTSMRY_EPINT0
DECL|USB_DEVICE_EPINTSMRY_EPINT1_Pos|macro|USB_DEVICE_EPINTSMRY_EPINT1_Pos
DECL|USB_DEVICE_EPINTSMRY_EPINT1|macro|USB_DEVICE_EPINTSMRY_EPINT1
DECL|USB_DEVICE_EPINTSMRY_EPINT2_Pos|macro|USB_DEVICE_EPINTSMRY_EPINT2_Pos
DECL|USB_DEVICE_EPINTSMRY_EPINT2|macro|USB_DEVICE_EPINTSMRY_EPINT2
DECL|USB_DEVICE_EPINTSMRY_EPINT3_Pos|macro|USB_DEVICE_EPINTSMRY_EPINT3_Pos
DECL|USB_DEVICE_EPINTSMRY_EPINT3|macro|USB_DEVICE_EPINTSMRY_EPINT3
DECL|USB_DEVICE_EPINTSMRY_EPINT4_Pos|macro|USB_DEVICE_EPINTSMRY_EPINT4_Pos
DECL|USB_DEVICE_EPINTSMRY_EPINT4|macro|USB_DEVICE_EPINTSMRY_EPINT4
DECL|USB_DEVICE_EPINTSMRY_EPINT5_Pos|macro|USB_DEVICE_EPINTSMRY_EPINT5_Pos
DECL|USB_DEVICE_EPINTSMRY_EPINT5|macro|USB_DEVICE_EPINTSMRY_EPINT5
DECL|USB_DEVICE_EPINTSMRY_EPINT6_Pos|macro|USB_DEVICE_EPINTSMRY_EPINT6_Pos
DECL|USB_DEVICE_EPINTSMRY_EPINT6|macro|USB_DEVICE_EPINTSMRY_EPINT6
DECL|USB_DEVICE_EPINTSMRY_EPINT7_Pos|macro|USB_DEVICE_EPINTSMRY_EPINT7_Pos
DECL|USB_DEVICE_EPINTSMRY_EPINT7|macro|USB_DEVICE_EPINTSMRY_EPINT7
DECL|USB_DEVICE_EPINTSMRY_EPINT_Msk|macro|USB_DEVICE_EPINTSMRY_EPINT_Msk
DECL|USB_DEVICE_EPINTSMRY_EPINT_Pos|macro|USB_DEVICE_EPINTSMRY_EPINT_Pos
DECL|USB_DEVICE_EPINTSMRY_EPINT|macro|USB_DEVICE_EPINTSMRY_EPINT
DECL|USB_DEVICE_EPINTSMRY_MASK|macro|USB_DEVICE_EPINTSMRY_MASK
DECL|USB_DEVICE_EPINTSMRY_OFFSET|macro|USB_DEVICE_EPINTSMRY_OFFSET
DECL|USB_DEVICE_EPINTSMRY_RESETVALUE|macro|USB_DEVICE_EPINTSMRY_RESETVALUE
DECL|USB_DEVICE_EPINTSMRY_Type|typedef|} USB_DEVICE_EPINTSMRY_Type;
DECL|USB_DEVICE_EPSTATUSCLR_BK0RDY_Pos|macro|USB_DEVICE_EPSTATUSCLR_BK0RDY_Pos
DECL|USB_DEVICE_EPSTATUSCLR_BK0RDY|macro|USB_DEVICE_EPSTATUSCLR_BK0RDY
DECL|USB_DEVICE_EPSTATUSCLR_BK1RDY_Pos|macro|USB_DEVICE_EPSTATUSCLR_BK1RDY_Pos
DECL|USB_DEVICE_EPSTATUSCLR_BK1RDY|macro|USB_DEVICE_EPSTATUSCLR_BK1RDY
DECL|USB_DEVICE_EPSTATUSCLR_CURBK_Pos|macro|USB_DEVICE_EPSTATUSCLR_CURBK_Pos
DECL|USB_DEVICE_EPSTATUSCLR_CURBK|macro|USB_DEVICE_EPSTATUSCLR_CURBK
DECL|USB_DEVICE_EPSTATUSCLR_DTGLIN_Pos|macro|USB_DEVICE_EPSTATUSCLR_DTGLIN_Pos
DECL|USB_DEVICE_EPSTATUSCLR_DTGLIN|macro|USB_DEVICE_EPSTATUSCLR_DTGLIN
DECL|USB_DEVICE_EPSTATUSCLR_DTGLOUT_Pos|macro|USB_DEVICE_EPSTATUSCLR_DTGLOUT_Pos
DECL|USB_DEVICE_EPSTATUSCLR_DTGLOUT|macro|USB_DEVICE_EPSTATUSCLR_DTGLOUT
DECL|USB_DEVICE_EPSTATUSCLR_MASK|macro|USB_DEVICE_EPSTATUSCLR_MASK
DECL|USB_DEVICE_EPSTATUSCLR_OFFSET|macro|USB_DEVICE_EPSTATUSCLR_OFFSET
DECL|USB_DEVICE_EPSTATUSCLR_RESETVALUE|macro|USB_DEVICE_EPSTATUSCLR_RESETVALUE
DECL|USB_DEVICE_EPSTATUSCLR_STALLRQ0_Pos|macro|USB_DEVICE_EPSTATUSCLR_STALLRQ0_Pos
DECL|USB_DEVICE_EPSTATUSCLR_STALLRQ0|macro|USB_DEVICE_EPSTATUSCLR_STALLRQ0
DECL|USB_DEVICE_EPSTATUSCLR_STALLRQ1_Pos|macro|USB_DEVICE_EPSTATUSCLR_STALLRQ1_Pos
DECL|USB_DEVICE_EPSTATUSCLR_STALLRQ1|macro|USB_DEVICE_EPSTATUSCLR_STALLRQ1
DECL|USB_DEVICE_EPSTATUSCLR_STALLRQ_Msk|macro|USB_DEVICE_EPSTATUSCLR_STALLRQ_Msk
DECL|USB_DEVICE_EPSTATUSCLR_STALLRQ_Pos|macro|USB_DEVICE_EPSTATUSCLR_STALLRQ_Pos
DECL|USB_DEVICE_EPSTATUSCLR_STALLRQ|macro|USB_DEVICE_EPSTATUSCLR_STALLRQ
DECL|USB_DEVICE_EPSTATUSCLR_Type|typedef|} USB_DEVICE_EPSTATUSCLR_Type;
DECL|USB_DEVICE_EPSTATUSSET_BK0RDY_Pos|macro|USB_DEVICE_EPSTATUSSET_BK0RDY_Pos
DECL|USB_DEVICE_EPSTATUSSET_BK0RDY|macro|USB_DEVICE_EPSTATUSSET_BK0RDY
DECL|USB_DEVICE_EPSTATUSSET_BK1RDY_Pos|macro|USB_DEVICE_EPSTATUSSET_BK1RDY_Pos
DECL|USB_DEVICE_EPSTATUSSET_BK1RDY|macro|USB_DEVICE_EPSTATUSSET_BK1RDY
DECL|USB_DEVICE_EPSTATUSSET_CURBK_Pos|macro|USB_DEVICE_EPSTATUSSET_CURBK_Pos
DECL|USB_DEVICE_EPSTATUSSET_CURBK|macro|USB_DEVICE_EPSTATUSSET_CURBK
DECL|USB_DEVICE_EPSTATUSSET_DTGLIN_Pos|macro|USB_DEVICE_EPSTATUSSET_DTGLIN_Pos
DECL|USB_DEVICE_EPSTATUSSET_DTGLIN|macro|USB_DEVICE_EPSTATUSSET_DTGLIN
DECL|USB_DEVICE_EPSTATUSSET_DTGLOUT_Pos|macro|USB_DEVICE_EPSTATUSSET_DTGLOUT_Pos
DECL|USB_DEVICE_EPSTATUSSET_DTGLOUT|macro|USB_DEVICE_EPSTATUSSET_DTGLOUT
DECL|USB_DEVICE_EPSTATUSSET_MASK|macro|USB_DEVICE_EPSTATUSSET_MASK
DECL|USB_DEVICE_EPSTATUSSET_OFFSET|macro|USB_DEVICE_EPSTATUSSET_OFFSET
DECL|USB_DEVICE_EPSTATUSSET_RESETVALUE|macro|USB_DEVICE_EPSTATUSSET_RESETVALUE
DECL|USB_DEVICE_EPSTATUSSET_STALLRQ0_Pos|macro|USB_DEVICE_EPSTATUSSET_STALLRQ0_Pos
DECL|USB_DEVICE_EPSTATUSSET_STALLRQ0|macro|USB_DEVICE_EPSTATUSSET_STALLRQ0
DECL|USB_DEVICE_EPSTATUSSET_STALLRQ1_Pos|macro|USB_DEVICE_EPSTATUSSET_STALLRQ1_Pos
DECL|USB_DEVICE_EPSTATUSSET_STALLRQ1|macro|USB_DEVICE_EPSTATUSSET_STALLRQ1
DECL|USB_DEVICE_EPSTATUSSET_STALLRQ_Msk|macro|USB_DEVICE_EPSTATUSSET_STALLRQ_Msk
DECL|USB_DEVICE_EPSTATUSSET_STALLRQ_Pos|macro|USB_DEVICE_EPSTATUSSET_STALLRQ_Pos
DECL|USB_DEVICE_EPSTATUSSET_STALLRQ|macro|USB_DEVICE_EPSTATUSSET_STALLRQ
DECL|USB_DEVICE_EPSTATUSSET_Type|typedef|} USB_DEVICE_EPSTATUSSET_Type;
DECL|USB_DEVICE_EPSTATUS_BK0RDY_Pos|macro|USB_DEVICE_EPSTATUS_BK0RDY_Pos
DECL|USB_DEVICE_EPSTATUS_BK0RDY|macro|USB_DEVICE_EPSTATUS_BK0RDY
DECL|USB_DEVICE_EPSTATUS_BK1RDY_Pos|macro|USB_DEVICE_EPSTATUS_BK1RDY_Pos
DECL|USB_DEVICE_EPSTATUS_BK1RDY|macro|USB_DEVICE_EPSTATUS_BK1RDY
DECL|USB_DEVICE_EPSTATUS_CURBK_Pos|macro|USB_DEVICE_EPSTATUS_CURBK_Pos
DECL|USB_DEVICE_EPSTATUS_CURBK|macro|USB_DEVICE_EPSTATUS_CURBK
DECL|USB_DEVICE_EPSTATUS_DTGLIN_Pos|macro|USB_DEVICE_EPSTATUS_DTGLIN_Pos
DECL|USB_DEVICE_EPSTATUS_DTGLIN|macro|USB_DEVICE_EPSTATUS_DTGLIN
DECL|USB_DEVICE_EPSTATUS_DTGLOUT_Pos|macro|USB_DEVICE_EPSTATUS_DTGLOUT_Pos
DECL|USB_DEVICE_EPSTATUS_DTGLOUT|macro|USB_DEVICE_EPSTATUS_DTGLOUT
DECL|USB_DEVICE_EPSTATUS_MASK|macro|USB_DEVICE_EPSTATUS_MASK
DECL|USB_DEVICE_EPSTATUS_OFFSET|macro|USB_DEVICE_EPSTATUS_OFFSET
DECL|USB_DEVICE_EPSTATUS_RESETVALUE|macro|USB_DEVICE_EPSTATUS_RESETVALUE
DECL|USB_DEVICE_EPSTATUS_STALLRQ0_Pos|macro|USB_DEVICE_EPSTATUS_STALLRQ0_Pos
DECL|USB_DEVICE_EPSTATUS_STALLRQ0|macro|USB_DEVICE_EPSTATUS_STALLRQ0
DECL|USB_DEVICE_EPSTATUS_STALLRQ1_Pos|macro|USB_DEVICE_EPSTATUS_STALLRQ1_Pos
DECL|USB_DEVICE_EPSTATUS_STALLRQ1|macro|USB_DEVICE_EPSTATUS_STALLRQ1
DECL|USB_DEVICE_EPSTATUS_STALLRQ_Msk|macro|USB_DEVICE_EPSTATUS_STALLRQ_Msk
DECL|USB_DEVICE_EPSTATUS_STALLRQ_Pos|macro|USB_DEVICE_EPSTATUS_STALLRQ_Pos
DECL|USB_DEVICE_EPSTATUS_STALLRQ|macro|USB_DEVICE_EPSTATUS_STALLRQ
DECL|USB_DEVICE_EPSTATUS_Type|typedef|} USB_DEVICE_EPSTATUS_Type;
DECL|USB_DEVICE_EXTREG_MASK|macro|USB_DEVICE_EXTREG_MASK
DECL|USB_DEVICE_EXTREG_OFFSET|macro|USB_DEVICE_EXTREG_OFFSET
DECL|USB_DEVICE_EXTREG_SUBPID_Msk|macro|USB_DEVICE_EXTREG_SUBPID_Msk
DECL|USB_DEVICE_EXTREG_SUBPID_Pos|macro|USB_DEVICE_EXTREG_SUBPID_Pos
DECL|USB_DEVICE_EXTREG_SUBPID|macro|USB_DEVICE_EXTREG_SUBPID
DECL|USB_DEVICE_EXTREG_Type|typedef|} USB_DEVICE_EXTREG_Type;
DECL|USB_DEVICE_EXTREG_VARIABLE_Msk|macro|USB_DEVICE_EXTREG_VARIABLE_Msk
DECL|USB_DEVICE_EXTREG_VARIABLE_Pos|macro|USB_DEVICE_EXTREG_VARIABLE_Pos
DECL|USB_DEVICE_EXTREG_VARIABLE|macro|USB_DEVICE_EXTREG_VARIABLE
DECL|USB_DEVICE_FNUM_FNCERR_Pos|macro|USB_DEVICE_FNUM_FNCERR_Pos
DECL|USB_DEVICE_FNUM_FNCERR|macro|USB_DEVICE_FNUM_FNCERR
DECL|USB_DEVICE_FNUM_FNUM_Msk|macro|USB_DEVICE_FNUM_FNUM_Msk
DECL|USB_DEVICE_FNUM_FNUM_Pos|macro|USB_DEVICE_FNUM_FNUM_Pos
DECL|USB_DEVICE_FNUM_FNUM|macro|USB_DEVICE_FNUM_FNUM
DECL|USB_DEVICE_FNUM_MASK|macro|USB_DEVICE_FNUM_MASK
DECL|USB_DEVICE_FNUM_MFNUM_Msk|macro|USB_DEVICE_FNUM_MFNUM_Msk
DECL|USB_DEVICE_FNUM_MFNUM_Pos|macro|USB_DEVICE_FNUM_MFNUM_Pos
DECL|USB_DEVICE_FNUM_MFNUM|macro|USB_DEVICE_FNUM_MFNUM
DECL|USB_DEVICE_FNUM_OFFSET|macro|USB_DEVICE_FNUM_OFFSET
DECL|USB_DEVICE_FNUM_RESETVALUE|macro|USB_DEVICE_FNUM_RESETVALUE
DECL|USB_DEVICE_FNUM_Type|typedef|} USB_DEVICE_FNUM_Type;
DECL|USB_DEVICE_INTENCLR_EORSM_Pos|macro|USB_DEVICE_INTENCLR_EORSM_Pos
DECL|USB_DEVICE_INTENCLR_EORSM|macro|USB_DEVICE_INTENCLR_EORSM
DECL|USB_DEVICE_INTENCLR_EORST_Pos|macro|USB_DEVICE_INTENCLR_EORST_Pos
DECL|USB_DEVICE_INTENCLR_EORST|macro|USB_DEVICE_INTENCLR_EORST
DECL|USB_DEVICE_INTENCLR_LPMNYET_Pos|macro|USB_DEVICE_INTENCLR_LPMNYET_Pos
DECL|USB_DEVICE_INTENCLR_LPMNYET|macro|USB_DEVICE_INTENCLR_LPMNYET
DECL|USB_DEVICE_INTENCLR_LPMSUSP_Pos|macro|USB_DEVICE_INTENCLR_LPMSUSP_Pos
DECL|USB_DEVICE_INTENCLR_LPMSUSP|macro|USB_DEVICE_INTENCLR_LPMSUSP
DECL|USB_DEVICE_INTENCLR_MASK|macro|USB_DEVICE_INTENCLR_MASK
DECL|USB_DEVICE_INTENCLR_MSOF_Pos|macro|USB_DEVICE_INTENCLR_MSOF_Pos
DECL|USB_DEVICE_INTENCLR_MSOF|macro|USB_DEVICE_INTENCLR_MSOF
DECL|USB_DEVICE_INTENCLR_OFFSET|macro|USB_DEVICE_INTENCLR_OFFSET
DECL|USB_DEVICE_INTENCLR_RAMACER_Pos|macro|USB_DEVICE_INTENCLR_RAMACER_Pos
DECL|USB_DEVICE_INTENCLR_RAMACER|macro|USB_DEVICE_INTENCLR_RAMACER
DECL|USB_DEVICE_INTENCLR_RESETVALUE|macro|USB_DEVICE_INTENCLR_RESETVALUE
DECL|USB_DEVICE_INTENCLR_SOF_Pos|macro|USB_DEVICE_INTENCLR_SOF_Pos
DECL|USB_DEVICE_INTENCLR_SOF|macro|USB_DEVICE_INTENCLR_SOF
DECL|USB_DEVICE_INTENCLR_SUSPEND_Pos|macro|USB_DEVICE_INTENCLR_SUSPEND_Pos
DECL|USB_DEVICE_INTENCLR_SUSPEND|macro|USB_DEVICE_INTENCLR_SUSPEND
DECL|USB_DEVICE_INTENCLR_Type|typedef|} USB_DEVICE_INTENCLR_Type;
DECL|USB_DEVICE_INTENCLR_UPRSM_Pos|macro|USB_DEVICE_INTENCLR_UPRSM_Pos
DECL|USB_DEVICE_INTENCLR_UPRSM|macro|USB_DEVICE_INTENCLR_UPRSM
DECL|USB_DEVICE_INTENCLR_WAKEUP_Pos|macro|USB_DEVICE_INTENCLR_WAKEUP_Pos
DECL|USB_DEVICE_INTENCLR_WAKEUP|macro|USB_DEVICE_INTENCLR_WAKEUP
DECL|USB_DEVICE_INTENSET_EORSM_Pos|macro|USB_DEVICE_INTENSET_EORSM_Pos
DECL|USB_DEVICE_INTENSET_EORSM|macro|USB_DEVICE_INTENSET_EORSM
DECL|USB_DEVICE_INTENSET_EORST_Pos|macro|USB_DEVICE_INTENSET_EORST_Pos
DECL|USB_DEVICE_INTENSET_EORST|macro|USB_DEVICE_INTENSET_EORST
DECL|USB_DEVICE_INTENSET_LPMNYET_Pos|macro|USB_DEVICE_INTENSET_LPMNYET_Pos
DECL|USB_DEVICE_INTENSET_LPMNYET|macro|USB_DEVICE_INTENSET_LPMNYET
DECL|USB_DEVICE_INTENSET_LPMSUSP_Pos|macro|USB_DEVICE_INTENSET_LPMSUSP_Pos
DECL|USB_DEVICE_INTENSET_LPMSUSP|macro|USB_DEVICE_INTENSET_LPMSUSP
DECL|USB_DEVICE_INTENSET_MASK|macro|USB_DEVICE_INTENSET_MASK
DECL|USB_DEVICE_INTENSET_MSOF_Pos|macro|USB_DEVICE_INTENSET_MSOF_Pos
DECL|USB_DEVICE_INTENSET_MSOF|macro|USB_DEVICE_INTENSET_MSOF
DECL|USB_DEVICE_INTENSET_OFFSET|macro|USB_DEVICE_INTENSET_OFFSET
DECL|USB_DEVICE_INTENSET_RAMACER_Pos|macro|USB_DEVICE_INTENSET_RAMACER_Pos
DECL|USB_DEVICE_INTENSET_RAMACER|macro|USB_DEVICE_INTENSET_RAMACER
DECL|USB_DEVICE_INTENSET_RESETVALUE|macro|USB_DEVICE_INTENSET_RESETVALUE
DECL|USB_DEVICE_INTENSET_SOF_Pos|macro|USB_DEVICE_INTENSET_SOF_Pos
DECL|USB_DEVICE_INTENSET_SOF|macro|USB_DEVICE_INTENSET_SOF
DECL|USB_DEVICE_INTENSET_SUSPEND_Pos|macro|USB_DEVICE_INTENSET_SUSPEND_Pos
DECL|USB_DEVICE_INTENSET_SUSPEND|macro|USB_DEVICE_INTENSET_SUSPEND
DECL|USB_DEVICE_INTENSET_Type|typedef|} USB_DEVICE_INTENSET_Type;
DECL|USB_DEVICE_INTENSET_UPRSM_Pos|macro|USB_DEVICE_INTENSET_UPRSM_Pos
DECL|USB_DEVICE_INTENSET_UPRSM|macro|USB_DEVICE_INTENSET_UPRSM
DECL|USB_DEVICE_INTENSET_WAKEUP_Pos|macro|USB_DEVICE_INTENSET_WAKEUP_Pos
DECL|USB_DEVICE_INTENSET_WAKEUP|macro|USB_DEVICE_INTENSET_WAKEUP
DECL|USB_DEVICE_INTFLAG_EORSM_Pos|macro|USB_DEVICE_INTFLAG_EORSM_Pos
DECL|USB_DEVICE_INTFLAG_EORSM|macro|USB_DEVICE_INTFLAG_EORSM
DECL|USB_DEVICE_INTFLAG_EORST_Pos|macro|USB_DEVICE_INTFLAG_EORST_Pos
DECL|USB_DEVICE_INTFLAG_EORST|macro|USB_DEVICE_INTFLAG_EORST
DECL|USB_DEVICE_INTFLAG_LPMNYET_Pos|macro|USB_DEVICE_INTFLAG_LPMNYET_Pos
DECL|USB_DEVICE_INTFLAG_LPMNYET|macro|USB_DEVICE_INTFLAG_LPMNYET
DECL|USB_DEVICE_INTFLAG_LPMSUSP_Pos|macro|USB_DEVICE_INTFLAG_LPMSUSP_Pos
DECL|USB_DEVICE_INTFLAG_LPMSUSP|macro|USB_DEVICE_INTFLAG_LPMSUSP
DECL|USB_DEVICE_INTFLAG_MASK|macro|USB_DEVICE_INTFLAG_MASK
DECL|USB_DEVICE_INTFLAG_MSOF_Pos|macro|USB_DEVICE_INTFLAG_MSOF_Pos
DECL|USB_DEVICE_INTFLAG_MSOF|macro|USB_DEVICE_INTFLAG_MSOF
DECL|USB_DEVICE_INTFLAG_OFFSET|macro|USB_DEVICE_INTFLAG_OFFSET
DECL|USB_DEVICE_INTFLAG_RAMACER_Pos|macro|USB_DEVICE_INTFLAG_RAMACER_Pos
DECL|USB_DEVICE_INTFLAG_RAMACER|macro|USB_DEVICE_INTFLAG_RAMACER
DECL|USB_DEVICE_INTFLAG_RESETVALUE|macro|USB_DEVICE_INTFLAG_RESETVALUE
DECL|USB_DEVICE_INTFLAG_SOF_Pos|macro|USB_DEVICE_INTFLAG_SOF_Pos
DECL|USB_DEVICE_INTFLAG_SOF|macro|USB_DEVICE_INTFLAG_SOF
DECL|USB_DEVICE_INTFLAG_SUSPEND_Pos|macro|USB_DEVICE_INTFLAG_SUSPEND_Pos
DECL|USB_DEVICE_INTFLAG_SUSPEND|macro|USB_DEVICE_INTFLAG_SUSPEND
DECL|USB_DEVICE_INTFLAG_Type|typedef|} USB_DEVICE_INTFLAG_Type;
DECL|USB_DEVICE_INTFLAG_UPRSM_Pos|macro|USB_DEVICE_INTFLAG_UPRSM_Pos
DECL|USB_DEVICE_INTFLAG_UPRSM|macro|USB_DEVICE_INTFLAG_UPRSM
DECL|USB_DEVICE_INTFLAG_WAKEUP_Pos|macro|USB_DEVICE_INTFLAG_WAKEUP_Pos
DECL|USB_DEVICE_INTFLAG_WAKEUP|macro|USB_DEVICE_INTFLAG_WAKEUP
DECL|USB_DEVICE_PCKSIZE_AUTO_ZLP_Pos|macro|USB_DEVICE_PCKSIZE_AUTO_ZLP_Pos
DECL|USB_DEVICE_PCKSIZE_AUTO_ZLP|macro|USB_DEVICE_PCKSIZE_AUTO_ZLP
DECL|USB_DEVICE_PCKSIZE_BYTE_COUNT_Msk|macro|USB_DEVICE_PCKSIZE_BYTE_COUNT_Msk
DECL|USB_DEVICE_PCKSIZE_BYTE_COUNT_Pos|macro|USB_DEVICE_PCKSIZE_BYTE_COUNT_Pos
DECL|USB_DEVICE_PCKSIZE_BYTE_COUNT|macro|USB_DEVICE_PCKSIZE_BYTE_COUNT
DECL|USB_DEVICE_PCKSIZE_MASK|macro|USB_DEVICE_PCKSIZE_MASK
DECL|USB_DEVICE_PCKSIZE_MULTI_PACKET_SIZE_Msk|macro|USB_DEVICE_PCKSIZE_MULTI_PACKET_SIZE_Msk
DECL|USB_DEVICE_PCKSIZE_MULTI_PACKET_SIZE_Pos|macro|USB_DEVICE_PCKSIZE_MULTI_PACKET_SIZE_Pos
DECL|USB_DEVICE_PCKSIZE_MULTI_PACKET_SIZE|macro|USB_DEVICE_PCKSIZE_MULTI_PACKET_SIZE
DECL|USB_DEVICE_PCKSIZE_OFFSET|macro|USB_DEVICE_PCKSIZE_OFFSET
DECL|USB_DEVICE_PCKSIZE_SIZE_Msk|macro|USB_DEVICE_PCKSIZE_SIZE_Msk
DECL|USB_DEVICE_PCKSIZE_SIZE_Pos|macro|USB_DEVICE_PCKSIZE_SIZE_Pos
DECL|USB_DEVICE_PCKSIZE_SIZE|macro|USB_DEVICE_PCKSIZE_SIZE
DECL|USB_DEVICE_PCKSIZE_Type|typedef|} USB_DEVICE_PCKSIZE_Type;
DECL|USB_DEVICE_STATUS_BK_CRCERR_Pos|macro|USB_DEVICE_STATUS_BK_CRCERR_Pos
DECL|USB_DEVICE_STATUS_BK_CRCERR|macro|USB_DEVICE_STATUS_BK_CRCERR
DECL|USB_DEVICE_STATUS_BK_ERRORFLOW_Pos|macro|USB_DEVICE_STATUS_BK_ERRORFLOW_Pos
DECL|USB_DEVICE_STATUS_BK_ERRORFLOW|macro|USB_DEVICE_STATUS_BK_ERRORFLOW
DECL|USB_DEVICE_STATUS_BK_MASK|macro|USB_DEVICE_STATUS_BK_MASK
DECL|USB_DEVICE_STATUS_BK_OFFSET|macro|USB_DEVICE_STATUS_BK_OFFSET
DECL|USB_DEVICE_STATUS_BK_Type|typedef|} USB_DEVICE_STATUS_BK_Type;
DECL|USB_DEVICE_STATUS_LINESTATE_0_Val|macro|USB_DEVICE_STATUS_LINESTATE_0_Val
DECL|USB_DEVICE_STATUS_LINESTATE_0|macro|USB_DEVICE_STATUS_LINESTATE_0
DECL|USB_DEVICE_STATUS_LINESTATE_1_Val|macro|USB_DEVICE_STATUS_LINESTATE_1_Val
DECL|USB_DEVICE_STATUS_LINESTATE_1|macro|USB_DEVICE_STATUS_LINESTATE_1
DECL|USB_DEVICE_STATUS_LINESTATE_2_Val|macro|USB_DEVICE_STATUS_LINESTATE_2_Val
DECL|USB_DEVICE_STATUS_LINESTATE_2|macro|USB_DEVICE_STATUS_LINESTATE_2
DECL|USB_DEVICE_STATUS_LINESTATE_Msk|macro|USB_DEVICE_STATUS_LINESTATE_Msk
DECL|USB_DEVICE_STATUS_LINESTATE_Pos|macro|USB_DEVICE_STATUS_LINESTATE_Pos
DECL|USB_DEVICE_STATUS_LINESTATE|macro|USB_DEVICE_STATUS_LINESTATE
DECL|USB_DEVICE_STATUS_MASK|macro|USB_DEVICE_STATUS_MASK
DECL|USB_DEVICE_STATUS_OFFSET|macro|USB_DEVICE_STATUS_OFFSET
DECL|USB_DEVICE_STATUS_RESETVALUE|macro|USB_DEVICE_STATUS_RESETVALUE
DECL|USB_DEVICE_STATUS_SPEED_FS_Val|macro|USB_DEVICE_STATUS_SPEED_FS_Val
DECL|USB_DEVICE_STATUS_SPEED_FS|macro|USB_DEVICE_STATUS_SPEED_FS
DECL|USB_DEVICE_STATUS_SPEED_HS_Val|macro|USB_DEVICE_STATUS_SPEED_HS_Val
DECL|USB_DEVICE_STATUS_SPEED_HS|macro|USB_DEVICE_STATUS_SPEED_HS
DECL|USB_DEVICE_STATUS_SPEED_LS_Val|macro|USB_DEVICE_STATUS_SPEED_LS_Val
DECL|USB_DEVICE_STATUS_SPEED_LS|macro|USB_DEVICE_STATUS_SPEED_LS
DECL|USB_DEVICE_STATUS_SPEED_Msk|macro|USB_DEVICE_STATUS_SPEED_Msk
DECL|USB_DEVICE_STATUS_SPEED_Pos|macro|USB_DEVICE_STATUS_SPEED_Pos
DECL|USB_DEVICE_STATUS_SPEED|macro|USB_DEVICE_STATUS_SPEED
DECL|USB_DEVICE_STATUS_Type|typedef|} USB_DEVICE_STATUS_Type;
DECL|USB_FSMSTATUS_FSMSTATE_DNRESUME_Val|macro|USB_FSMSTATUS_FSMSTATE_DNRESUME_Val
DECL|USB_FSMSTATUS_FSMSTATE_DNRESUME|macro|USB_FSMSTATUS_FSMSTATE_DNRESUME
DECL|USB_FSMSTATUS_FSMSTATE_Msk|macro|USB_FSMSTATUS_FSMSTATE_Msk
DECL|USB_FSMSTATUS_FSMSTATE_OFF_Val|macro|USB_FSMSTATUS_FSMSTATE_OFF_Val
DECL|USB_FSMSTATUS_FSMSTATE_OFF|macro|USB_FSMSTATUS_FSMSTATE_OFF
DECL|USB_FSMSTATUS_FSMSTATE_ON_Val|macro|USB_FSMSTATUS_FSMSTATE_ON_Val
DECL|USB_FSMSTATUS_FSMSTATE_ON|macro|USB_FSMSTATUS_FSMSTATE_ON
DECL|USB_FSMSTATUS_FSMSTATE_Pos|macro|USB_FSMSTATUS_FSMSTATE_Pos
DECL|USB_FSMSTATUS_FSMSTATE_RESET_Val|macro|USB_FSMSTATUS_FSMSTATE_RESET_Val
DECL|USB_FSMSTATUS_FSMSTATE_RESET|macro|USB_FSMSTATUS_FSMSTATE_RESET
DECL|USB_FSMSTATUS_FSMSTATE_SLEEP_Val|macro|USB_FSMSTATUS_FSMSTATE_SLEEP_Val
DECL|USB_FSMSTATUS_FSMSTATE_SLEEP|macro|USB_FSMSTATUS_FSMSTATE_SLEEP
DECL|USB_FSMSTATUS_FSMSTATE_SUSPEND_Val|macro|USB_FSMSTATUS_FSMSTATE_SUSPEND_Val
DECL|USB_FSMSTATUS_FSMSTATE_SUSPEND|macro|USB_FSMSTATUS_FSMSTATE_SUSPEND
DECL|USB_FSMSTATUS_FSMSTATE_UPRESUME_Val|macro|USB_FSMSTATUS_FSMSTATE_UPRESUME_Val
DECL|USB_FSMSTATUS_FSMSTATE_UPRESUME|macro|USB_FSMSTATUS_FSMSTATE_UPRESUME
DECL|USB_FSMSTATUS_FSMSTATE|macro|USB_FSMSTATUS_FSMSTATE
DECL|USB_FSMSTATUS_MASK|macro|USB_FSMSTATUS_MASK
DECL|USB_FSMSTATUS_OFFSET|macro|USB_FSMSTATUS_OFFSET
DECL|USB_FSMSTATUS_RESETVALUE|macro|USB_FSMSTATUS_RESETVALUE
DECL|USB_FSMSTATUS_Type|typedef|} USB_FSMSTATUS_Type;
DECL|USB_HOST_ADDR_ADDR_Msk|macro|USB_HOST_ADDR_ADDR_Msk
DECL|USB_HOST_ADDR_ADDR_Pos|macro|USB_HOST_ADDR_ADDR_Pos
DECL|USB_HOST_ADDR_ADDR|macro|USB_HOST_ADDR_ADDR
DECL|USB_HOST_ADDR_MASK|macro|USB_HOST_ADDR_MASK
DECL|USB_HOST_ADDR_OFFSET|macro|USB_HOST_ADDR_OFFSET
DECL|USB_HOST_ADDR_Type|typedef|} USB_HOST_ADDR_Type;
DECL|USB_HOST_BINTERVAL_BITINTERVAL_Msk|macro|USB_HOST_BINTERVAL_BITINTERVAL_Msk
DECL|USB_HOST_BINTERVAL_BITINTERVAL_Pos|macro|USB_HOST_BINTERVAL_BITINTERVAL_Pos
DECL|USB_HOST_BINTERVAL_BITINTERVAL|macro|USB_HOST_BINTERVAL_BITINTERVAL
DECL|USB_HOST_BINTERVAL_MASK|macro|USB_HOST_BINTERVAL_MASK
DECL|USB_HOST_BINTERVAL_OFFSET|macro|USB_HOST_BINTERVAL_OFFSET
DECL|USB_HOST_BINTERVAL_RESETVALUE|macro|USB_HOST_BINTERVAL_RESETVALUE
DECL|USB_HOST_BINTERVAL_Type|typedef|} USB_HOST_BINTERVAL_Type;
DECL|USB_HOST_CTRLB_BUSRESET_Pos|macro|USB_HOST_CTRLB_BUSRESET_Pos
DECL|USB_HOST_CTRLB_BUSRESET|macro|USB_HOST_CTRLB_BUSRESET
DECL|USB_HOST_CTRLB_L1RESUME_Pos|macro|USB_HOST_CTRLB_L1RESUME_Pos
DECL|USB_HOST_CTRLB_L1RESUME|macro|USB_HOST_CTRLB_L1RESUME
DECL|USB_HOST_CTRLB_MASK|macro|USB_HOST_CTRLB_MASK
DECL|USB_HOST_CTRLB_OFFSET|macro|USB_HOST_CTRLB_OFFSET
DECL|USB_HOST_CTRLB_RESETVALUE|macro|USB_HOST_CTRLB_RESETVALUE
DECL|USB_HOST_CTRLB_RESUME_Pos|macro|USB_HOST_CTRLB_RESUME_Pos
DECL|USB_HOST_CTRLB_RESUME|macro|USB_HOST_CTRLB_RESUME
DECL|USB_HOST_CTRLB_SOFE_Pos|macro|USB_HOST_CTRLB_SOFE_Pos
DECL|USB_HOST_CTRLB_SOFE|macro|USB_HOST_CTRLB_SOFE
DECL|USB_HOST_CTRLB_SPDCONF_FS_Val|macro|USB_HOST_CTRLB_SPDCONF_FS_Val
DECL|USB_HOST_CTRLB_SPDCONF_FS|macro|USB_HOST_CTRLB_SPDCONF_FS
DECL|USB_HOST_CTRLB_SPDCONF_Msk|macro|USB_HOST_CTRLB_SPDCONF_Msk
DECL|USB_HOST_CTRLB_SPDCONF_NORMAL_Val|macro|USB_HOST_CTRLB_SPDCONF_NORMAL_Val
DECL|USB_HOST_CTRLB_SPDCONF_NORMAL|macro|USB_HOST_CTRLB_SPDCONF_NORMAL
DECL|USB_HOST_CTRLB_SPDCONF_Pos|macro|USB_HOST_CTRLB_SPDCONF_Pos
DECL|USB_HOST_CTRLB_SPDCONF|macro|USB_HOST_CTRLB_SPDCONF
DECL|USB_HOST_CTRLB_TSTJ_Pos|macro|USB_HOST_CTRLB_TSTJ_Pos
DECL|USB_HOST_CTRLB_TSTJ|macro|USB_HOST_CTRLB_TSTJ
DECL|USB_HOST_CTRLB_TSTK_Pos|macro|USB_HOST_CTRLB_TSTK_Pos
DECL|USB_HOST_CTRLB_TSTK|macro|USB_HOST_CTRLB_TSTK
DECL|USB_HOST_CTRLB_Type|typedef|} USB_HOST_CTRLB_Type;
DECL|USB_HOST_CTRLB_VBUSOK_Pos|macro|USB_HOST_CTRLB_VBUSOK_Pos
DECL|USB_HOST_CTRLB_VBUSOK|macro|USB_HOST_CTRLB_VBUSOK
DECL|USB_HOST_CTRL_PIPE_MASK|macro|USB_HOST_CTRL_PIPE_MASK
DECL|USB_HOST_CTRL_PIPE_OFFSET|macro|USB_HOST_CTRL_PIPE_OFFSET
DECL|USB_HOST_CTRL_PIPE_PDADDR_Msk|macro|USB_HOST_CTRL_PIPE_PDADDR_Msk
DECL|USB_HOST_CTRL_PIPE_PDADDR_Pos|macro|USB_HOST_CTRL_PIPE_PDADDR_Pos
DECL|USB_HOST_CTRL_PIPE_PDADDR|macro|USB_HOST_CTRL_PIPE_PDADDR
DECL|USB_HOST_CTRL_PIPE_PEPNUM_Msk|macro|USB_HOST_CTRL_PIPE_PEPNUM_Msk
DECL|USB_HOST_CTRL_PIPE_PEPNUM_Pos|macro|USB_HOST_CTRL_PIPE_PEPNUM_Pos
DECL|USB_HOST_CTRL_PIPE_PEPNUM|macro|USB_HOST_CTRL_PIPE_PEPNUM
DECL|USB_HOST_CTRL_PIPE_PERMAX_Msk|macro|USB_HOST_CTRL_PIPE_PERMAX_Msk
DECL|USB_HOST_CTRL_PIPE_PERMAX_Pos|macro|USB_HOST_CTRL_PIPE_PERMAX_Pos
DECL|USB_HOST_CTRL_PIPE_PERMAX|macro|USB_HOST_CTRL_PIPE_PERMAX
DECL|USB_HOST_CTRL_PIPE_RESETVALUE|macro|USB_HOST_CTRL_PIPE_RESETVALUE
DECL|USB_HOST_CTRL_PIPE_Type|typedef|} USB_HOST_CTRL_PIPE_Type;
DECL|USB_HOST_EXTREG_MASK|macro|USB_HOST_EXTREG_MASK
DECL|USB_HOST_EXTREG_OFFSET|macro|USB_HOST_EXTREG_OFFSET
DECL|USB_HOST_EXTREG_SUBPID_Msk|macro|USB_HOST_EXTREG_SUBPID_Msk
DECL|USB_HOST_EXTREG_SUBPID_Pos|macro|USB_HOST_EXTREG_SUBPID_Pos
DECL|USB_HOST_EXTREG_SUBPID|macro|USB_HOST_EXTREG_SUBPID
DECL|USB_HOST_EXTREG_Type|typedef|} USB_HOST_EXTREG_Type;
DECL|USB_HOST_EXTREG_VARIABLE_Msk|macro|USB_HOST_EXTREG_VARIABLE_Msk
DECL|USB_HOST_EXTREG_VARIABLE_Pos|macro|USB_HOST_EXTREG_VARIABLE_Pos
DECL|USB_HOST_EXTREG_VARIABLE|macro|USB_HOST_EXTREG_VARIABLE
DECL|USB_HOST_FLENHIGH_FLENHIGH_Msk|macro|USB_HOST_FLENHIGH_FLENHIGH_Msk
DECL|USB_HOST_FLENHIGH_FLENHIGH_Pos|macro|USB_HOST_FLENHIGH_FLENHIGH_Pos
DECL|USB_HOST_FLENHIGH_FLENHIGH|macro|USB_HOST_FLENHIGH_FLENHIGH
DECL|USB_HOST_FLENHIGH_MASK|macro|USB_HOST_FLENHIGH_MASK
DECL|USB_HOST_FLENHIGH_OFFSET|macro|USB_HOST_FLENHIGH_OFFSET
DECL|USB_HOST_FLENHIGH_RESETVALUE|macro|USB_HOST_FLENHIGH_RESETVALUE
DECL|USB_HOST_FLENHIGH_Type|typedef|} USB_HOST_FLENHIGH_Type;
DECL|USB_HOST_FNUM_FNUM_Msk|macro|USB_HOST_FNUM_FNUM_Msk
DECL|USB_HOST_FNUM_FNUM_Pos|macro|USB_HOST_FNUM_FNUM_Pos
DECL|USB_HOST_FNUM_FNUM|macro|USB_HOST_FNUM_FNUM
DECL|USB_HOST_FNUM_MASK|macro|USB_HOST_FNUM_MASK
DECL|USB_HOST_FNUM_MFNUM_Msk|macro|USB_HOST_FNUM_MFNUM_Msk
DECL|USB_HOST_FNUM_MFNUM_Pos|macro|USB_HOST_FNUM_MFNUM_Pos
DECL|USB_HOST_FNUM_MFNUM|macro|USB_HOST_FNUM_MFNUM
DECL|USB_HOST_FNUM_OFFSET|macro|USB_HOST_FNUM_OFFSET
DECL|USB_HOST_FNUM_RESETVALUE|macro|USB_HOST_FNUM_RESETVALUE
DECL|USB_HOST_FNUM_Type|typedef|} USB_HOST_FNUM_Type;
DECL|USB_HOST_HSOFC_FLENCE_Pos|macro|USB_HOST_HSOFC_FLENCE_Pos
DECL|USB_HOST_HSOFC_FLENCE|macro|USB_HOST_HSOFC_FLENCE
DECL|USB_HOST_HSOFC_FLENC_Msk|macro|USB_HOST_HSOFC_FLENC_Msk
DECL|USB_HOST_HSOFC_FLENC_Pos|macro|USB_HOST_HSOFC_FLENC_Pos
DECL|USB_HOST_HSOFC_FLENC|macro|USB_HOST_HSOFC_FLENC
DECL|USB_HOST_HSOFC_MASK|macro|USB_HOST_HSOFC_MASK
DECL|USB_HOST_HSOFC_OFFSET|macro|USB_HOST_HSOFC_OFFSET
DECL|USB_HOST_HSOFC_RESETVALUE|macro|USB_HOST_HSOFC_RESETVALUE
DECL|USB_HOST_HSOFC_Type|typedef|} USB_HOST_HSOFC_Type;
DECL|USB_HOST_INTENCLR_DCONN_Pos|macro|USB_HOST_INTENCLR_DCONN_Pos
DECL|USB_HOST_INTENCLR_DCONN|macro|USB_HOST_INTENCLR_DCONN
DECL|USB_HOST_INTENCLR_DDISC_Pos|macro|USB_HOST_INTENCLR_DDISC_Pos
DECL|USB_HOST_INTENCLR_DDISC|macro|USB_HOST_INTENCLR_DDISC
DECL|USB_HOST_INTENCLR_DNRSM_Pos|macro|USB_HOST_INTENCLR_DNRSM_Pos
DECL|USB_HOST_INTENCLR_DNRSM|macro|USB_HOST_INTENCLR_DNRSM
DECL|USB_HOST_INTENCLR_HSOF_Pos|macro|USB_HOST_INTENCLR_HSOF_Pos
DECL|USB_HOST_INTENCLR_HSOF|macro|USB_HOST_INTENCLR_HSOF
DECL|USB_HOST_INTENCLR_MASK|macro|USB_HOST_INTENCLR_MASK
DECL|USB_HOST_INTENCLR_OFFSET|macro|USB_HOST_INTENCLR_OFFSET
DECL|USB_HOST_INTENCLR_RAMACER_Pos|macro|USB_HOST_INTENCLR_RAMACER_Pos
DECL|USB_HOST_INTENCLR_RAMACER|macro|USB_HOST_INTENCLR_RAMACER
DECL|USB_HOST_INTENCLR_RESETVALUE|macro|USB_HOST_INTENCLR_RESETVALUE
DECL|USB_HOST_INTENCLR_RST_Pos|macro|USB_HOST_INTENCLR_RST_Pos
DECL|USB_HOST_INTENCLR_RST|macro|USB_HOST_INTENCLR_RST
DECL|USB_HOST_INTENCLR_Type|typedef|} USB_HOST_INTENCLR_Type;
DECL|USB_HOST_INTENCLR_UPRSM_Pos|macro|USB_HOST_INTENCLR_UPRSM_Pos
DECL|USB_HOST_INTENCLR_UPRSM|macro|USB_HOST_INTENCLR_UPRSM
DECL|USB_HOST_INTENCLR_WAKEUP_Pos|macro|USB_HOST_INTENCLR_WAKEUP_Pos
DECL|USB_HOST_INTENCLR_WAKEUP|macro|USB_HOST_INTENCLR_WAKEUP
DECL|USB_HOST_INTENSET_DCONN_Pos|macro|USB_HOST_INTENSET_DCONN_Pos
DECL|USB_HOST_INTENSET_DCONN|macro|USB_HOST_INTENSET_DCONN
DECL|USB_HOST_INTENSET_DDISC_Pos|macro|USB_HOST_INTENSET_DDISC_Pos
DECL|USB_HOST_INTENSET_DDISC|macro|USB_HOST_INTENSET_DDISC
DECL|USB_HOST_INTENSET_DNRSM_Pos|macro|USB_HOST_INTENSET_DNRSM_Pos
DECL|USB_HOST_INTENSET_DNRSM|macro|USB_HOST_INTENSET_DNRSM
DECL|USB_HOST_INTENSET_HSOF_Pos|macro|USB_HOST_INTENSET_HSOF_Pos
DECL|USB_HOST_INTENSET_HSOF|macro|USB_HOST_INTENSET_HSOF
DECL|USB_HOST_INTENSET_MASK|macro|USB_HOST_INTENSET_MASK
DECL|USB_HOST_INTENSET_OFFSET|macro|USB_HOST_INTENSET_OFFSET
DECL|USB_HOST_INTENSET_RAMACER_Pos|macro|USB_HOST_INTENSET_RAMACER_Pos
DECL|USB_HOST_INTENSET_RAMACER|macro|USB_HOST_INTENSET_RAMACER
DECL|USB_HOST_INTENSET_RESETVALUE|macro|USB_HOST_INTENSET_RESETVALUE
DECL|USB_HOST_INTENSET_RST_Pos|macro|USB_HOST_INTENSET_RST_Pos
DECL|USB_HOST_INTENSET_RST|macro|USB_HOST_INTENSET_RST
DECL|USB_HOST_INTENSET_Type|typedef|} USB_HOST_INTENSET_Type;
DECL|USB_HOST_INTENSET_UPRSM_Pos|macro|USB_HOST_INTENSET_UPRSM_Pos
DECL|USB_HOST_INTENSET_UPRSM|macro|USB_HOST_INTENSET_UPRSM
DECL|USB_HOST_INTENSET_WAKEUP_Pos|macro|USB_HOST_INTENSET_WAKEUP_Pos
DECL|USB_HOST_INTENSET_WAKEUP|macro|USB_HOST_INTENSET_WAKEUP
DECL|USB_HOST_INTFLAG_DCONN_Pos|macro|USB_HOST_INTFLAG_DCONN_Pos
DECL|USB_HOST_INTFLAG_DCONN|macro|USB_HOST_INTFLAG_DCONN
DECL|USB_HOST_INTFLAG_DDISC_Pos|macro|USB_HOST_INTFLAG_DDISC_Pos
DECL|USB_HOST_INTFLAG_DDISC|macro|USB_HOST_INTFLAG_DDISC
DECL|USB_HOST_INTFLAG_DNRSM_Pos|macro|USB_HOST_INTFLAG_DNRSM_Pos
DECL|USB_HOST_INTFLAG_DNRSM|macro|USB_HOST_INTFLAG_DNRSM
DECL|USB_HOST_INTFLAG_HSOF_Pos|macro|USB_HOST_INTFLAG_HSOF_Pos
DECL|USB_HOST_INTFLAG_HSOF|macro|USB_HOST_INTFLAG_HSOF
DECL|USB_HOST_INTFLAG_MASK|macro|USB_HOST_INTFLAG_MASK
DECL|USB_HOST_INTFLAG_OFFSET|macro|USB_HOST_INTFLAG_OFFSET
DECL|USB_HOST_INTFLAG_RAMACER_Pos|macro|USB_HOST_INTFLAG_RAMACER_Pos
DECL|USB_HOST_INTFLAG_RAMACER|macro|USB_HOST_INTFLAG_RAMACER
DECL|USB_HOST_INTFLAG_RESETVALUE|macro|USB_HOST_INTFLAG_RESETVALUE
DECL|USB_HOST_INTFLAG_RST_Pos|macro|USB_HOST_INTFLAG_RST_Pos
DECL|USB_HOST_INTFLAG_RST|macro|USB_HOST_INTFLAG_RST
DECL|USB_HOST_INTFLAG_Type|typedef|} USB_HOST_INTFLAG_Type;
DECL|USB_HOST_INTFLAG_UPRSM_Pos|macro|USB_HOST_INTFLAG_UPRSM_Pos
DECL|USB_HOST_INTFLAG_UPRSM|macro|USB_HOST_INTFLAG_UPRSM
DECL|USB_HOST_INTFLAG_WAKEUP_Pos|macro|USB_HOST_INTFLAG_WAKEUP_Pos
DECL|USB_HOST_INTFLAG_WAKEUP|macro|USB_HOST_INTFLAG_WAKEUP
DECL|USB_HOST_PCFG_BK_Pos|macro|USB_HOST_PCFG_BK_Pos
DECL|USB_HOST_PCFG_BK|macro|USB_HOST_PCFG_BK
DECL|USB_HOST_PCFG_MASK|macro|USB_HOST_PCFG_MASK
DECL|USB_HOST_PCFG_OFFSET|macro|USB_HOST_PCFG_OFFSET
DECL|USB_HOST_PCFG_PTOKEN_Msk|macro|USB_HOST_PCFG_PTOKEN_Msk
DECL|USB_HOST_PCFG_PTOKEN_Pos|macro|USB_HOST_PCFG_PTOKEN_Pos
DECL|USB_HOST_PCFG_PTOKEN|macro|USB_HOST_PCFG_PTOKEN
DECL|USB_HOST_PCFG_PTYPE_Msk|macro|USB_HOST_PCFG_PTYPE_Msk
DECL|USB_HOST_PCFG_PTYPE_Pos|macro|USB_HOST_PCFG_PTYPE_Pos
DECL|USB_HOST_PCFG_PTYPE|macro|USB_HOST_PCFG_PTYPE
DECL|USB_HOST_PCFG_RESETVALUE|macro|USB_HOST_PCFG_RESETVALUE
DECL|USB_HOST_PCFG_Type|typedef|} USB_HOST_PCFG_Type;
DECL|USB_HOST_PCKSIZE_AUTO_ZLP_Pos|macro|USB_HOST_PCKSIZE_AUTO_ZLP_Pos
DECL|USB_HOST_PCKSIZE_AUTO_ZLP|macro|USB_HOST_PCKSIZE_AUTO_ZLP
DECL|USB_HOST_PCKSIZE_BYTE_COUNT_Msk|macro|USB_HOST_PCKSIZE_BYTE_COUNT_Msk
DECL|USB_HOST_PCKSIZE_BYTE_COUNT_Pos|macro|USB_HOST_PCKSIZE_BYTE_COUNT_Pos
DECL|USB_HOST_PCKSIZE_BYTE_COUNT|macro|USB_HOST_PCKSIZE_BYTE_COUNT
DECL|USB_HOST_PCKSIZE_MASK|macro|USB_HOST_PCKSIZE_MASK
DECL|USB_HOST_PCKSIZE_MULTI_PACKET_SIZE_Msk|macro|USB_HOST_PCKSIZE_MULTI_PACKET_SIZE_Msk
DECL|USB_HOST_PCKSIZE_MULTI_PACKET_SIZE_Pos|macro|USB_HOST_PCKSIZE_MULTI_PACKET_SIZE_Pos
DECL|USB_HOST_PCKSIZE_MULTI_PACKET_SIZE|macro|USB_HOST_PCKSIZE_MULTI_PACKET_SIZE
DECL|USB_HOST_PCKSIZE_OFFSET|macro|USB_HOST_PCKSIZE_OFFSET
DECL|USB_HOST_PCKSIZE_SIZE_Msk|macro|USB_HOST_PCKSIZE_SIZE_Msk
DECL|USB_HOST_PCKSIZE_SIZE_Pos|macro|USB_HOST_PCKSIZE_SIZE_Pos
DECL|USB_HOST_PCKSIZE_SIZE|macro|USB_HOST_PCKSIZE_SIZE
DECL|USB_HOST_PCKSIZE_Type|typedef|} USB_HOST_PCKSIZE_Type;
DECL|USB_HOST_PINTENCLR_MASK|macro|USB_HOST_PINTENCLR_MASK
DECL|USB_HOST_PINTENCLR_OFFSET|macro|USB_HOST_PINTENCLR_OFFSET
DECL|USB_HOST_PINTENCLR_PERR_Pos|macro|USB_HOST_PINTENCLR_PERR_Pos
DECL|USB_HOST_PINTENCLR_PERR|macro|USB_HOST_PINTENCLR_PERR
DECL|USB_HOST_PINTENCLR_RESETVALUE|macro|USB_HOST_PINTENCLR_RESETVALUE
DECL|USB_HOST_PINTENCLR_STALL_Pos|macro|USB_HOST_PINTENCLR_STALL_Pos
DECL|USB_HOST_PINTENCLR_STALL|macro|USB_HOST_PINTENCLR_STALL
DECL|USB_HOST_PINTENCLR_TRCPT0_Pos|macro|USB_HOST_PINTENCLR_TRCPT0_Pos
DECL|USB_HOST_PINTENCLR_TRCPT0|macro|USB_HOST_PINTENCLR_TRCPT0
DECL|USB_HOST_PINTENCLR_TRCPT1_Pos|macro|USB_HOST_PINTENCLR_TRCPT1_Pos
DECL|USB_HOST_PINTENCLR_TRCPT1|macro|USB_HOST_PINTENCLR_TRCPT1
DECL|USB_HOST_PINTENCLR_TRCPT_Msk|macro|USB_HOST_PINTENCLR_TRCPT_Msk
DECL|USB_HOST_PINTENCLR_TRCPT_Pos|macro|USB_HOST_PINTENCLR_TRCPT_Pos
DECL|USB_HOST_PINTENCLR_TRCPT|macro|USB_HOST_PINTENCLR_TRCPT
DECL|USB_HOST_PINTENCLR_TRFAIL_Pos|macro|USB_HOST_PINTENCLR_TRFAIL_Pos
DECL|USB_HOST_PINTENCLR_TRFAIL|macro|USB_HOST_PINTENCLR_TRFAIL
DECL|USB_HOST_PINTENCLR_TXSTP_Pos|macro|USB_HOST_PINTENCLR_TXSTP_Pos
DECL|USB_HOST_PINTENCLR_TXSTP|macro|USB_HOST_PINTENCLR_TXSTP
DECL|USB_HOST_PINTENCLR_Type|typedef|} USB_HOST_PINTENCLR_Type;
DECL|USB_HOST_PINTENSET_MASK|macro|USB_HOST_PINTENSET_MASK
DECL|USB_HOST_PINTENSET_OFFSET|macro|USB_HOST_PINTENSET_OFFSET
DECL|USB_HOST_PINTENSET_PERR_Pos|macro|USB_HOST_PINTENSET_PERR_Pos
DECL|USB_HOST_PINTENSET_PERR|macro|USB_HOST_PINTENSET_PERR
DECL|USB_HOST_PINTENSET_RESETVALUE|macro|USB_HOST_PINTENSET_RESETVALUE
DECL|USB_HOST_PINTENSET_STALL_Pos|macro|USB_HOST_PINTENSET_STALL_Pos
DECL|USB_HOST_PINTENSET_STALL|macro|USB_HOST_PINTENSET_STALL
DECL|USB_HOST_PINTENSET_TRCPT0_Pos|macro|USB_HOST_PINTENSET_TRCPT0_Pos
DECL|USB_HOST_PINTENSET_TRCPT0|macro|USB_HOST_PINTENSET_TRCPT0
DECL|USB_HOST_PINTENSET_TRCPT1_Pos|macro|USB_HOST_PINTENSET_TRCPT1_Pos
DECL|USB_HOST_PINTENSET_TRCPT1|macro|USB_HOST_PINTENSET_TRCPT1
DECL|USB_HOST_PINTENSET_TRCPT_Msk|macro|USB_HOST_PINTENSET_TRCPT_Msk
DECL|USB_HOST_PINTENSET_TRCPT_Pos|macro|USB_HOST_PINTENSET_TRCPT_Pos
DECL|USB_HOST_PINTENSET_TRCPT|macro|USB_HOST_PINTENSET_TRCPT
DECL|USB_HOST_PINTENSET_TRFAIL_Pos|macro|USB_HOST_PINTENSET_TRFAIL_Pos
DECL|USB_HOST_PINTENSET_TRFAIL|macro|USB_HOST_PINTENSET_TRFAIL
DECL|USB_HOST_PINTENSET_TXSTP_Pos|macro|USB_HOST_PINTENSET_TXSTP_Pos
DECL|USB_HOST_PINTENSET_TXSTP|macro|USB_HOST_PINTENSET_TXSTP
DECL|USB_HOST_PINTENSET_Type|typedef|} USB_HOST_PINTENSET_Type;
DECL|USB_HOST_PINTFLAG_MASK|macro|USB_HOST_PINTFLAG_MASK
DECL|USB_HOST_PINTFLAG_OFFSET|macro|USB_HOST_PINTFLAG_OFFSET
DECL|USB_HOST_PINTFLAG_PERR_Pos|macro|USB_HOST_PINTFLAG_PERR_Pos
DECL|USB_HOST_PINTFLAG_PERR|macro|USB_HOST_PINTFLAG_PERR
DECL|USB_HOST_PINTFLAG_RESETVALUE|macro|USB_HOST_PINTFLAG_RESETVALUE
DECL|USB_HOST_PINTFLAG_STALL_Pos|macro|USB_HOST_PINTFLAG_STALL_Pos
DECL|USB_HOST_PINTFLAG_STALL|macro|USB_HOST_PINTFLAG_STALL
DECL|USB_HOST_PINTFLAG_TRCPT0_Pos|macro|USB_HOST_PINTFLAG_TRCPT0_Pos
DECL|USB_HOST_PINTFLAG_TRCPT0|macro|USB_HOST_PINTFLAG_TRCPT0
DECL|USB_HOST_PINTFLAG_TRCPT1_Pos|macro|USB_HOST_PINTFLAG_TRCPT1_Pos
DECL|USB_HOST_PINTFLAG_TRCPT1|macro|USB_HOST_PINTFLAG_TRCPT1
DECL|USB_HOST_PINTFLAG_TRCPT_Msk|macro|USB_HOST_PINTFLAG_TRCPT_Msk
DECL|USB_HOST_PINTFLAG_TRCPT_Pos|macro|USB_HOST_PINTFLAG_TRCPT_Pos
DECL|USB_HOST_PINTFLAG_TRCPT|macro|USB_HOST_PINTFLAG_TRCPT
DECL|USB_HOST_PINTFLAG_TRFAIL_Pos|macro|USB_HOST_PINTFLAG_TRFAIL_Pos
DECL|USB_HOST_PINTFLAG_TRFAIL|macro|USB_HOST_PINTFLAG_TRFAIL
DECL|USB_HOST_PINTFLAG_TXSTP_Pos|macro|USB_HOST_PINTFLAG_TXSTP_Pos
DECL|USB_HOST_PINTFLAG_TXSTP|macro|USB_HOST_PINTFLAG_TXSTP
DECL|USB_HOST_PINTFLAG_Type|typedef|} USB_HOST_PINTFLAG_Type;
DECL|USB_HOST_PINTSMRY_EPINT0_Pos|macro|USB_HOST_PINTSMRY_EPINT0_Pos
DECL|USB_HOST_PINTSMRY_EPINT0|macro|USB_HOST_PINTSMRY_EPINT0
DECL|USB_HOST_PINTSMRY_EPINT1_Pos|macro|USB_HOST_PINTSMRY_EPINT1_Pos
DECL|USB_HOST_PINTSMRY_EPINT1|macro|USB_HOST_PINTSMRY_EPINT1
DECL|USB_HOST_PINTSMRY_EPINT2_Pos|macro|USB_HOST_PINTSMRY_EPINT2_Pos
DECL|USB_HOST_PINTSMRY_EPINT2|macro|USB_HOST_PINTSMRY_EPINT2
DECL|USB_HOST_PINTSMRY_EPINT3_Pos|macro|USB_HOST_PINTSMRY_EPINT3_Pos
DECL|USB_HOST_PINTSMRY_EPINT3|macro|USB_HOST_PINTSMRY_EPINT3
DECL|USB_HOST_PINTSMRY_EPINT4_Pos|macro|USB_HOST_PINTSMRY_EPINT4_Pos
DECL|USB_HOST_PINTSMRY_EPINT4|macro|USB_HOST_PINTSMRY_EPINT4
DECL|USB_HOST_PINTSMRY_EPINT5_Pos|macro|USB_HOST_PINTSMRY_EPINT5_Pos
DECL|USB_HOST_PINTSMRY_EPINT5|macro|USB_HOST_PINTSMRY_EPINT5
DECL|USB_HOST_PINTSMRY_EPINT6_Pos|macro|USB_HOST_PINTSMRY_EPINT6_Pos
DECL|USB_HOST_PINTSMRY_EPINT6|macro|USB_HOST_PINTSMRY_EPINT6
DECL|USB_HOST_PINTSMRY_EPINT7_Pos|macro|USB_HOST_PINTSMRY_EPINT7_Pos
DECL|USB_HOST_PINTSMRY_EPINT7|macro|USB_HOST_PINTSMRY_EPINT7
DECL|USB_HOST_PINTSMRY_EPINT_Msk|macro|USB_HOST_PINTSMRY_EPINT_Msk
DECL|USB_HOST_PINTSMRY_EPINT_Pos|macro|USB_HOST_PINTSMRY_EPINT_Pos
DECL|USB_HOST_PINTSMRY_EPINT|macro|USB_HOST_PINTSMRY_EPINT
DECL|USB_HOST_PINTSMRY_MASK|macro|USB_HOST_PINTSMRY_MASK
DECL|USB_HOST_PINTSMRY_OFFSET|macro|USB_HOST_PINTSMRY_OFFSET
DECL|USB_HOST_PINTSMRY_RESETVALUE|macro|USB_HOST_PINTSMRY_RESETVALUE
DECL|USB_HOST_PINTSMRY_Type|typedef|} USB_HOST_PINTSMRY_Type;
DECL|USB_HOST_PSTATUSCLR_BK0RDY_Pos|macro|USB_HOST_PSTATUSCLR_BK0RDY_Pos
DECL|USB_HOST_PSTATUSCLR_BK0RDY|macro|USB_HOST_PSTATUSCLR_BK0RDY
DECL|USB_HOST_PSTATUSCLR_BK1RDY_Pos|macro|USB_HOST_PSTATUSCLR_BK1RDY_Pos
DECL|USB_HOST_PSTATUSCLR_BK1RDY|macro|USB_HOST_PSTATUSCLR_BK1RDY
DECL|USB_HOST_PSTATUSCLR_CURBK_Pos|macro|USB_HOST_PSTATUSCLR_CURBK_Pos
DECL|USB_HOST_PSTATUSCLR_CURBK|macro|USB_HOST_PSTATUSCLR_CURBK
DECL|USB_HOST_PSTATUSCLR_DTGL_Pos|macro|USB_HOST_PSTATUSCLR_DTGL_Pos
DECL|USB_HOST_PSTATUSCLR_DTGL|macro|USB_HOST_PSTATUSCLR_DTGL
DECL|USB_HOST_PSTATUSCLR_MASK|macro|USB_HOST_PSTATUSCLR_MASK
DECL|USB_HOST_PSTATUSCLR_OFFSET|macro|USB_HOST_PSTATUSCLR_OFFSET
DECL|USB_HOST_PSTATUSCLR_PFREEZE_Pos|macro|USB_HOST_PSTATUSCLR_PFREEZE_Pos
DECL|USB_HOST_PSTATUSCLR_PFREEZE|macro|USB_HOST_PSTATUSCLR_PFREEZE
DECL|USB_HOST_PSTATUSCLR_RESETVALUE|macro|USB_HOST_PSTATUSCLR_RESETVALUE
DECL|USB_HOST_PSTATUSCLR_Type|typedef|} USB_HOST_PSTATUSCLR_Type;
DECL|USB_HOST_PSTATUSSET_BK0RDY_Pos|macro|USB_HOST_PSTATUSSET_BK0RDY_Pos
DECL|USB_HOST_PSTATUSSET_BK0RDY|macro|USB_HOST_PSTATUSSET_BK0RDY
DECL|USB_HOST_PSTATUSSET_BK1RDY_Pos|macro|USB_HOST_PSTATUSSET_BK1RDY_Pos
DECL|USB_HOST_PSTATUSSET_BK1RDY|macro|USB_HOST_PSTATUSSET_BK1RDY
DECL|USB_HOST_PSTATUSSET_CURBK_Pos|macro|USB_HOST_PSTATUSSET_CURBK_Pos
DECL|USB_HOST_PSTATUSSET_CURBK|macro|USB_HOST_PSTATUSSET_CURBK
DECL|USB_HOST_PSTATUSSET_DTGL_Pos|macro|USB_HOST_PSTATUSSET_DTGL_Pos
DECL|USB_HOST_PSTATUSSET_DTGL|macro|USB_HOST_PSTATUSSET_DTGL
DECL|USB_HOST_PSTATUSSET_MASK|macro|USB_HOST_PSTATUSSET_MASK
DECL|USB_HOST_PSTATUSSET_OFFSET|macro|USB_HOST_PSTATUSSET_OFFSET
DECL|USB_HOST_PSTATUSSET_PFREEZE_Pos|macro|USB_HOST_PSTATUSSET_PFREEZE_Pos
DECL|USB_HOST_PSTATUSSET_PFREEZE|macro|USB_HOST_PSTATUSSET_PFREEZE
DECL|USB_HOST_PSTATUSSET_RESETVALUE|macro|USB_HOST_PSTATUSSET_RESETVALUE
DECL|USB_HOST_PSTATUSSET_Type|typedef|} USB_HOST_PSTATUSSET_Type;
DECL|USB_HOST_PSTATUS_BK0RDY_Pos|macro|USB_HOST_PSTATUS_BK0RDY_Pos
DECL|USB_HOST_PSTATUS_BK0RDY|macro|USB_HOST_PSTATUS_BK0RDY
DECL|USB_HOST_PSTATUS_BK1RDY_Pos|macro|USB_HOST_PSTATUS_BK1RDY_Pos
DECL|USB_HOST_PSTATUS_BK1RDY|macro|USB_HOST_PSTATUS_BK1RDY
DECL|USB_HOST_PSTATUS_CURBK_Pos|macro|USB_HOST_PSTATUS_CURBK_Pos
DECL|USB_HOST_PSTATUS_CURBK|macro|USB_HOST_PSTATUS_CURBK
DECL|USB_HOST_PSTATUS_DTGL_Pos|macro|USB_HOST_PSTATUS_DTGL_Pos
DECL|USB_HOST_PSTATUS_DTGL|macro|USB_HOST_PSTATUS_DTGL
DECL|USB_HOST_PSTATUS_MASK|macro|USB_HOST_PSTATUS_MASK
DECL|USB_HOST_PSTATUS_OFFSET|macro|USB_HOST_PSTATUS_OFFSET
DECL|USB_HOST_PSTATUS_PFREEZE_Pos|macro|USB_HOST_PSTATUS_PFREEZE_Pos
DECL|USB_HOST_PSTATUS_PFREEZE|macro|USB_HOST_PSTATUS_PFREEZE
DECL|USB_HOST_PSTATUS_RESETVALUE|macro|USB_HOST_PSTATUS_RESETVALUE
DECL|USB_HOST_PSTATUS_Type|typedef|} USB_HOST_PSTATUS_Type;
DECL|USB_HOST_STATUS_BK_CRCERR_Pos|macro|USB_HOST_STATUS_BK_CRCERR_Pos
DECL|USB_HOST_STATUS_BK_CRCERR|macro|USB_HOST_STATUS_BK_CRCERR
DECL|USB_HOST_STATUS_BK_ERRORFLOW_Pos|macro|USB_HOST_STATUS_BK_ERRORFLOW_Pos
DECL|USB_HOST_STATUS_BK_ERRORFLOW|macro|USB_HOST_STATUS_BK_ERRORFLOW
DECL|USB_HOST_STATUS_BK_MASK|macro|USB_HOST_STATUS_BK_MASK
DECL|USB_HOST_STATUS_BK_OFFSET|macro|USB_HOST_STATUS_BK_OFFSET
DECL|USB_HOST_STATUS_BK_Type|typedef|} USB_HOST_STATUS_BK_Type;
DECL|USB_HOST_STATUS_LINESTATE_Msk|macro|USB_HOST_STATUS_LINESTATE_Msk
DECL|USB_HOST_STATUS_LINESTATE_Pos|macro|USB_HOST_STATUS_LINESTATE_Pos
DECL|USB_HOST_STATUS_LINESTATE|macro|USB_HOST_STATUS_LINESTATE
DECL|USB_HOST_STATUS_MASK|macro|USB_HOST_STATUS_MASK
DECL|USB_HOST_STATUS_OFFSET|macro|USB_HOST_STATUS_OFFSET
DECL|USB_HOST_STATUS_PIPE_CRC16ER_Pos|macro|USB_HOST_STATUS_PIPE_CRC16ER_Pos
DECL|USB_HOST_STATUS_PIPE_CRC16ER|macro|USB_HOST_STATUS_PIPE_CRC16ER
DECL|USB_HOST_STATUS_PIPE_DAPIDER_Pos|macro|USB_HOST_STATUS_PIPE_DAPIDER_Pos
DECL|USB_HOST_STATUS_PIPE_DAPIDER|macro|USB_HOST_STATUS_PIPE_DAPIDER
DECL|USB_HOST_STATUS_PIPE_DTGLER_Pos|macro|USB_HOST_STATUS_PIPE_DTGLER_Pos
DECL|USB_HOST_STATUS_PIPE_DTGLER|macro|USB_HOST_STATUS_PIPE_DTGLER
DECL|USB_HOST_STATUS_PIPE_ERCNT_Msk|macro|USB_HOST_STATUS_PIPE_ERCNT_Msk
DECL|USB_HOST_STATUS_PIPE_ERCNT_Pos|macro|USB_HOST_STATUS_PIPE_ERCNT_Pos
DECL|USB_HOST_STATUS_PIPE_ERCNT|macro|USB_HOST_STATUS_PIPE_ERCNT
DECL|USB_HOST_STATUS_PIPE_MASK|macro|USB_HOST_STATUS_PIPE_MASK
DECL|USB_HOST_STATUS_PIPE_OFFSET|macro|USB_HOST_STATUS_PIPE_OFFSET
DECL|USB_HOST_STATUS_PIPE_PIDER_Pos|macro|USB_HOST_STATUS_PIPE_PIDER_Pos
DECL|USB_HOST_STATUS_PIPE_PIDER|macro|USB_HOST_STATUS_PIPE_PIDER
DECL|USB_HOST_STATUS_PIPE_TOUTER_Pos|macro|USB_HOST_STATUS_PIPE_TOUTER_Pos
DECL|USB_HOST_STATUS_PIPE_TOUTER|macro|USB_HOST_STATUS_PIPE_TOUTER
DECL|USB_HOST_STATUS_PIPE_Type|typedef|} USB_HOST_STATUS_PIPE_Type;
DECL|USB_HOST_STATUS_RESETVALUE|macro|USB_HOST_STATUS_RESETVALUE
DECL|USB_HOST_STATUS_SPEED_Msk|macro|USB_HOST_STATUS_SPEED_Msk
DECL|USB_HOST_STATUS_SPEED_Pos|macro|USB_HOST_STATUS_SPEED_Pos
DECL|USB_HOST_STATUS_SPEED|macro|USB_HOST_STATUS_SPEED
DECL|USB_HOST_STATUS_Type|typedef|} USB_HOST_STATUS_Type;
DECL|USB_PADCAL_MASK|macro|USB_PADCAL_MASK
DECL|USB_PADCAL_OFFSET|macro|USB_PADCAL_OFFSET
DECL|USB_PADCAL_RESETVALUE|macro|USB_PADCAL_RESETVALUE
DECL|USB_PADCAL_TRANSN_Msk|macro|USB_PADCAL_TRANSN_Msk
DECL|USB_PADCAL_TRANSN_Pos|macro|USB_PADCAL_TRANSN_Pos
DECL|USB_PADCAL_TRANSN|macro|USB_PADCAL_TRANSN
DECL|USB_PADCAL_TRANSP_Msk|macro|USB_PADCAL_TRANSP_Msk
DECL|USB_PADCAL_TRANSP_Pos|macro|USB_PADCAL_TRANSP_Pos
DECL|USB_PADCAL_TRANSP|macro|USB_PADCAL_TRANSP
DECL|USB_PADCAL_TRIM_Msk|macro|USB_PADCAL_TRIM_Msk
DECL|USB_PADCAL_TRIM_Pos|macro|USB_PADCAL_TRIM_Pos
DECL|USB_PADCAL_TRIM|macro|USB_PADCAL_TRIM
DECL|USB_PADCAL_Type|typedef|} USB_PADCAL_Type;
DECL|USB_QOSCTRL_CQOS_DISABLE_Val|macro|USB_QOSCTRL_CQOS_DISABLE_Val
DECL|USB_QOSCTRL_CQOS_DISABLE|macro|USB_QOSCTRL_CQOS_DISABLE
DECL|USB_QOSCTRL_CQOS_HIGH_Val|macro|USB_QOSCTRL_CQOS_HIGH_Val
DECL|USB_QOSCTRL_CQOS_HIGH|macro|USB_QOSCTRL_CQOS_HIGH
DECL|USB_QOSCTRL_CQOS_LOW_Val|macro|USB_QOSCTRL_CQOS_LOW_Val
DECL|USB_QOSCTRL_CQOS_LOW|macro|USB_QOSCTRL_CQOS_LOW
DECL|USB_QOSCTRL_CQOS_MEDIUM_Val|macro|USB_QOSCTRL_CQOS_MEDIUM_Val
DECL|USB_QOSCTRL_CQOS_MEDIUM|macro|USB_QOSCTRL_CQOS_MEDIUM
DECL|USB_QOSCTRL_CQOS_Msk|macro|USB_QOSCTRL_CQOS_Msk
DECL|USB_QOSCTRL_CQOS_Pos|macro|USB_QOSCTRL_CQOS_Pos
DECL|USB_QOSCTRL_CQOS|macro|USB_QOSCTRL_CQOS
DECL|USB_QOSCTRL_DQOS_DISABLE_Val|macro|USB_QOSCTRL_DQOS_DISABLE_Val
DECL|USB_QOSCTRL_DQOS_DISABLE|macro|USB_QOSCTRL_DQOS_DISABLE
DECL|USB_QOSCTRL_DQOS_HIGH_Val|macro|USB_QOSCTRL_DQOS_HIGH_Val
DECL|USB_QOSCTRL_DQOS_HIGH|macro|USB_QOSCTRL_DQOS_HIGH
DECL|USB_QOSCTRL_DQOS_LOW_Val|macro|USB_QOSCTRL_DQOS_LOW_Val
DECL|USB_QOSCTRL_DQOS_LOW|macro|USB_QOSCTRL_DQOS_LOW
DECL|USB_QOSCTRL_DQOS_MEDIUM_Val|macro|USB_QOSCTRL_DQOS_MEDIUM_Val
DECL|USB_QOSCTRL_DQOS_MEDIUM|macro|USB_QOSCTRL_DQOS_MEDIUM
DECL|USB_QOSCTRL_DQOS_Msk|macro|USB_QOSCTRL_DQOS_Msk
DECL|USB_QOSCTRL_DQOS_Pos|macro|USB_QOSCTRL_DQOS_Pos
DECL|USB_QOSCTRL_DQOS|macro|USB_QOSCTRL_DQOS
DECL|USB_QOSCTRL_MASK|macro|USB_QOSCTRL_MASK
DECL|USB_QOSCTRL_OFFSET|macro|USB_QOSCTRL_OFFSET
DECL|USB_QOSCTRL_RESETVALUE|macro|USB_QOSCTRL_RESETVALUE
DECL|USB_QOSCTRL_Type|typedef|} USB_QOSCTRL_Type;
DECL|USB_SYNCBUSY_ENABLE_Pos|macro|USB_SYNCBUSY_ENABLE_Pos
DECL|USB_SYNCBUSY_ENABLE|macro|USB_SYNCBUSY_ENABLE
DECL|USB_SYNCBUSY_MASK|macro|USB_SYNCBUSY_MASK
DECL|USB_SYNCBUSY_OFFSET|macro|USB_SYNCBUSY_OFFSET
DECL|USB_SYNCBUSY_RESETVALUE|macro|USB_SYNCBUSY_RESETVALUE
DECL|USB_SYNCBUSY_SWRST_Pos|macro|USB_SYNCBUSY_SWRST_Pos
DECL|USB_SYNCBUSY_SWRST|macro|USB_SYNCBUSY_SWRST
DECL|USB_SYNCBUSY_Type|typedef|} USB_SYNCBUSY_Type;
DECL|USB_U2222|macro|USB_U2222
DECL|UsbDeviceDescBank|typedef|} UsbDeviceDescBank;
DECL|UsbDeviceDescriptor|typedef|} UsbDeviceDescriptor;
DECL|UsbDeviceEndpoint|typedef|} UsbDeviceEndpoint;
DECL|UsbDevice|typedef|} UsbDevice;
DECL|UsbHostDescBank|typedef|} UsbHostDescBank;
DECL|UsbHostDescriptor|typedef|} UsbHostDescriptor;
DECL|UsbHostPipe|typedef|} UsbHostPipe;
DECL|UsbHost|typedef|} UsbHost;
DECL|Usb|typedef|} Usb;
DECL|VARIABLE|member|uint16_t VARIABLE:11; /*!< bit: 4..14 Variable field send with extended token */
DECL|VARIABLE|member|uint16_t VARIABLE:11; /*!< bit: 4..14 Variable field send with extended token */
DECL|VBUSOK|member|uint16_t VBUSOK:1; /*!< bit: 10 VBUS is OK */
DECL|WAKEUP|member|__I uint16_t WAKEUP:1; /*!< bit: 4 Wake Up */
DECL|WAKEUP|member|__I uint16_t WAKEUP:1; /*!< bit: 4 Wake Up */
DECL|WAKEUP|member|uint16_t WAKEUP:1; /*!< bit: 4 Wake Up Interrupt Disable */
DECL|WAKEUP|member|uint16_t WAKEUP:1; /*!< bit: 4 Wake Up Interrupt Enable */
DECL|WAKEUP|member|uint16_t WAKEUP:1; /*!< bit: 4 Wake Up Interrupt Enable */
DECL|WAKEUP|member|uint16_t WAKEUP:1; /*!< bit: 4 Wake Up Interrupt Enable */
DECL|_SAMD21_USB_COMPONENT_|macro|_SAMD21_USB_COMPONENT_
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|bit|member|} bit; /*!< Structure used for bit access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint16_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint32_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|reg|member|uint8_t reg; /*!< Type used for register access */
DECL|uint16_t|member|__I uint16_t :2; /*!< bit: 0.. 1 Reserved */
DECL|uint16_t|member|__I uint16_t :6; /*!< bit: 10..15 Reserved */
DECL|uint16_t|member|__I uint16_t :6; /*!< bit: 10..15 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 0 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 11 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 14 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 15 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 15 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 15 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 4 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 5 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 7 Reserved */
DECL|uint16_t|member|uint16_t :1; /*!< bit: 7 Reserved */
DECL|uint16_t|member|uint16_t :2; /*!< bit: 0.. 1 Reserved */
DECL|uint16_t|member|uint16_t :2; /*!< bit: 0.. 1 Reserved */
DECL|uint16_t|member|uint16_t :2; /*!< bit: 14..15 Reserved */
DECL|uint16_t|member|uint16_t :4; /*!< bit: 12..15 Reserved */
DECL|uint16_t|member|uint16_t :4; /*!< bit: 12..15 Reserved */
DECL|uint16_t|member|uint16_t :6; /*!< bit: 10..15 Reserved */
DECL|uint16_t|member|uint16_t :6; /*!< bit: 10..15 Reserved */
DECL|uint16_t|member|uint16_t :6; /*!< bit: 10..15 Reserved */
DECL|uint16_t|member|uint16_t :6; /*!< bit: 10..15 Reserved */
DECL|uint16_t|member|uint16_t :8; /*!< bit: 8..15 Reserved */
DECL|uint16_t|member|uint16_t :8; /*!< bit: 8..15 Reserved */
DECL|uint16_t|member|uint16_t :8; /*!< bit: 8..15 Reserved */
DECL|uint16_t|member|uint16_t :8; /*!< bit: 8..15 Reserved */
DECL|uint16_t|member|uint16_t :8; /*!< bit: 8..15 Reserved */
DECL|uint8_t|member|__I uint8_t :1; /*!< bit: 4 Reserved */
DECL|uint8_t|member|__I uint8_t :1; /*!< bit: 7 Reserved */
DECL|uint8_t|member|__I uint8_t :1; /*!< bit: 7 Reserved */
DECL|uint8_t|member|__I uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|__I uint8_t :6; /*!< bit: 2.. 7 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 1 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 1 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 1 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 3 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 3 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 3 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 3 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 3 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 3 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 3 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 4 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 4 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 5 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 5 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 5 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 7 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 7 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 7 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 7 Reserved */
DECL|uint8_t|member|uint8_t :1; /*!< bit: 7 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 0.. 1 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 0.. 1 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 4.. 5 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 4.. 5 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|uint8_t :2; /*!< bit: 6.. 7 Reserved */
DECL|uint8_t|member|uint8_t :3; /*!< bit: 4.. 6 Reserved */
DECL|uint8_t|member|uint8_t :4; /*!< bit: 0.. 3 Reserved */
DECL|uint8_t|member|uint8_t :4; /*!< bit: 0.. 3 Reserved */
DECL|uint8_t|member|uint8_t :4; /*!< bit: 0.. 3 Reserved */
DECL|uint8_t|member|uint8_t :4; /*!< bit: 3.. 6 Reserved */
DECL|uint8_t|member|uint8_t :4; /*!< bit: 4.. 7 Reserved */
DECL|uint8_t|member|uint8_t :6; /*!< bit: 2.. 7 Reserved */
DECL|uint8_t|member|uint8_t :6; /*!< bit: 2.. 7 Reserved */
DECL|uint8_t|member|uint8_t :6; /*!< bit: 2.. 7 Reserved */
DECL|uint8_t|member|uint8_t :6; /*!< bit: 2.. 7 Reserved */
DECL|uint8_t|member|uint8_t :6; /*!< bit: 2.. 7 Reserved */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
DECL|vec|member|} vec; /*!< Structure used for vec access */
