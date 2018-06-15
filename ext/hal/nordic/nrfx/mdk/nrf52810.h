DECL|A0|member|__IM uint32_t A0; /*!< (@ 0x00000000) Slope definition A0 */
DECL|A0|member|__IOM uint32_t A0; /*!< (@ 0x00000520) Slope of 1st piece wise linear function */
DECL|A1|member|__IM uint32_t A1; /*!< (@ 0x00000004) Slope definition A1 */
DECL|A1|member|__IOM uint32_t A1; /*!< (@ 0x00000524) Slope of 2nd piece wise linear function */
DECL|A2|member|__IM uint32_t A2; /*!< (@ 0x00000008) Slope definition A2 */
DECL|A2|member|__IOM uint32_t A2; /*!< (@ 0x00000528) Slope of 3rd piece wise linear function */
DECL|A3|member|__IM uint32_t A3; /*!< (@ 0x0000000C) Slope definition A3 */
DECL|A3|member|__IOM uint32_t A3; /*!< (@ 0x0000052C) Slope of 4th piece wise linear function */
DECL|A4|member|__IM uint32_t A4; /*!< (@ 0x00000010) Slope definition A4 */
DECL|A4|member|__IOM uint32_t A4; /*!< (@ 0x00000530) Slope of 5th piece wise linear function */
DECL|A5|member|__IM uint32_t A5; /*!< (@ 0x00000014) Slope definition A5 */
DECL|A5|member|__IOM uint32_t A5; /*!< (@ 0x00000534) Slope of 6th piece wise linear function */
DECL|ACCDBLREAD|member|__IM uint32_t ACCDBLREAD; /*!< (@ 0x00000548) Snapshot of the ACCDBL, updated by the READCLRACC
DECL|ACCDBL|member|__IM uint32_t ACCDBL; /*!< (@ 0x00000544) Register accumulating the number of detected
DECL|ACCREAD|member|__IM int32_t ACCREAD; /*!< (@ 0x00000518) Snapshot of the ACC register, updated by the
DECL|ACC|member|__IM int32_t ACC; /*!< (@ 0x00000514) Register accumulating the valid transitions */
DECL|ADDRESS|member|__IOM uint32_t ADDRESS; /*!< (@ 0x00000588) Address used in the TWI transfer */
DECL|ADDRESS|member|__IOM uint32_t ADDRESS[2]; /*!< (@ 0x00000588) Description collection[n]: TWI slave address
DECL|ADDRPTR|member|__IOM uint32_t ADDRPTR; /*!< (@ 0x00000510) Pointer to the resolvable address */
DECL|AMOUNT|member|__IM uint32_t AMOUNT; /*!< (@ 0x00000008) Number of buffer words transferred since last
DECL|AMOUNT|member|__IM uint32_t AMOUNT; /*!< (@ 0x00000008) Number of bytes received in last granted transaction */
DECL|AMOUNT|member|__IM uint32_t AMOUNT; /*!< (@ 0x00000008) Number of bytes transferred in the last RXD transaction */
DECL|AMOUNT|member|__IM uint32_t AMOUNT; /*!< (@ 0x00000008) Number of bytes transferred in the last TXD transaction */
DECL|AMOUNT|member|__IM uint32_t AMOUNT; /*!< (@ 0x00000008) Number of bytes transferred in the last transaction */
DECL|AMOUNT|member|__IM uint32_t AMOUNT; /*!< (@ 0x00000008) Number of bytes transferred in the last transaction */
DECL|AMOUNT|member|__IM uint32_t AMOUNT; /*!< (@ 0x00000008) Number of bytes transferred in the last transaction */
DECL|AMOUNT|member|__IM uint32_t AMOUNT; /*!< (@ 0x00000008) Number of bytes transferred in the last transaction */
DECL|AMOUNT|member|__IM uint32_t AMOUNT; /*!< (@ 0x00000008) Number of bytes transferred in the last transaction */
DECL|AMOUNT|member|__IM uint32_t AMOUNT; /*!< (@ 0x00000008) Number of bytes transferred in the last transaction */
DECL|AMOUNT|member|__IM uint32_t AMOUNT; /*!< (@ 0x00000008) Number of bytes transmitted in last granted transaction */
DECL|APPROTECT|member|__IOM uint32_t APPROTECT; /*!< (@ 0x00000208) Access port protection */
DECL|A|member|__IOM uint32_t A; /*!< (@ 0x00000004) Pin select for A signal */
DECL|B0|member|__IM uint32_t B0; /*!< (@ 0x00000018) Y-intercept B0 */
DECL|B0|member|__IOM uint32_t B0; /*!< (@ 0x00000540) y-intercept of 1st piece wise linear function */
DECL|B1|member|__IM uint32_t B1; /*!< (@ 0x0000001C) Y-intercept B1 */
DECL|B1|member|__IOM uint32_t B1; /*!< (@ 0x00000544) y-intercept of 2nd piece wise linear function */
DECL|B2|member|__IM uint32_t B2; /*!< (@ 0x00000020) Y-intercept B2 */
DECL|B2|member|__IOM uint32_t B2; /*!< (@ 0x00000548) y-intercept of 3rd piece wise linear function */
DECL|B3|member|__IM uint32_t B3; /*!< (@ 0x00000024) Y-intercept B3 */
DECL|B3|member|__IOM uint32_t B3; /*!< (@ 0x0000054C) y-intercept of 4th piece wise linear function */
DECL|B4|member|__IM uint32_t B4; /*!< (@ 0x00000028) Y-intercept B4 */
DECL|B4|member|__IOM uint32_t B4; /*!< (@ 0x00000550) y-intercept of 5th piece wise linear function */
DECL|B5|member|__IM uint32_t B5; /*!< (@ 0x0000002C) Y-intercept B5 */
DECL|B5|member|__IOM uint32_t B5; /*!< (@ 0x00000554) y-intercept of 6th piece wise linear function */
DECL|BASE0|member|__IOM uint32_t BASE0; /*!< (@ 0x0000051C) Base address 0 */
DECL|BASE1|member|__IOM uint32_t BASE1; /*!< (@ 0x00000520) Base address 1 */
DECL|BAUDRATE|member|__IOM uint32_t BAUDRATE; /*!< (@ 0x00000524) Baud rate. Accuracy depends on the HFCLK source
DECL|BCC|member|__IOM uint32_t BCC; /*!< (@ 0x00000560) Bit counter compare */
DECL|BITMODE|member|__IOM uint32_t BITMODE; /*!< (@ 0x00000508) Configure the number of bits used by the TIMER */
DECL|BusFault_IRQn|enumerator|BusFault_IRQn = -11, /*!< -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory
DECL|B|member|__IOM uint32_t B; /*!< (@ 0x00000008) Pin select for B signal */
DECL|CCM_AAR_IRQn|enumerator|CCM_AAR_IRQn = 15, /*!< 15 CCM_AAR */
DECL|CC|member|__IOM uint32_t CC[4]; /*!< (@ 0x00000540) Description collection[n]: Compare register n */
DECL|CC|member|__IOM uint32_t CC[6]; /*!< (@ 0x00000540) Description collection[n]: Capture/Compare register
DECL|CHENCLR|member|__IOM uint32_t CHENCLR; /*!< (@ 0x00000508) Channel enable clear register */
DECL|CHENSET|member|__IOM uint32_t CHENSET; /*!< (@ 0x00000504) Channel enable set register */
DECL|CHEN|member|__IOM uint32_t CHEN; /*!< (@ 0x00000500) Channel enable register */
DECL|CHG|member|__IOM uint32_t CHG[6]; /*!< (@ 0x00000800) Description collection[n]: Channel group n */
DECL|CH|member|__IOM PPI_CH_Type CH[20]; /*!< (@ 0x00000510) PPI Channel */
DECL|CH|member|__IOM SAADC_CH_Type CH[8]; /*!< (@ 0x00000510) Unspecified */
DECL|CLK|member|__IOM uint32_t CLK; /*!< (@ 0x00000000) Pin number configuration for PDM CLK signal */
DECL|CNFPTR|member|__IOM uint32_t CNFPTR; /*!< (@ 0x00000508) Pointer to data structure holding AES key and
DECL|CNT|member|__IOM uint32_t CNT; /*!< (@ 0x00000004) Description cluster[n]: Number of values (duty
DECL|CODEPAGESIZE|member|__IM uint32_t CODEPAGESIZE; /*!< (@ 0x00000010) Code memory page size */
DECL|CODESIZE|member|__IM uint32_t CODESIZE; /*!< (@ 0x00000014) Code memory size */
DECL|COMP_IRQn|enumerator|COMP_IRQn = 19, /*!< 19 COMP */
DECL|CONFIG0|member|__IOM uint32_t CONFIG0; /*!< (@ 0x00000600) Block protect configuration register 0 */
DECL|CONFIG1|member|__IOM uint32_t CONFIG1; /*!< (@ 0x00000604) Block protect configuration register 1 */
DECL|CONFIG|member|__IOM uint32_t CONFIG; /*!< (@ 0x00000008) Description cluster[n]: Input configuration for
DECL|CONFIG|member|__IOM uint32_t CONFIG; /*!< (@ 0x00000504) Configuration register */
DECL|CONFIG|member|__IOM uint32_t CONFIG; /*!< (@ 0x00000504) Configuration register */
DECL|CONFIG|member|__IOM uint32_t CONFIG; /*!< (@ 0x0000050C) Configuration register */
DECL|CONFIG|member|__IOM uint32_t CONFIG; /*!< (@ 0x00000554) Configuration register */
DECL|CONFIG|member|__IOM uint32_t CONFIG; /*!< (@ 0x00000554) Configuration register */
DECL|CONFIG|member|__IOM uint32_t CONFIG; /*!< (@ 0x0000056C) Configuration of parity and hardware flow control */
DECL|CONFIG|member|__IOM uint32_t CONFIG; /*!< (@ 0x00000594) Configuration register for the address match
DECL|CONFIG|member|__IOM uint32_t CONFIG[8]; /*!< (@ 0x00000510) Description collection[n]: Configuration for
DECL|COUNTERTOP|member|__IOM uint32_t COUNTERTOP; /*!< (@ 0x00000508) Value up to which the pulse generator counter
DECL|COUNTER|member|__IM uint32_t COUNTER; /*!< (@ 0x00000504) Current COUNTER value */
DECL|CRCCNF|member|__IOM uint32_t CRCCNF; /*!< (@ 0x00000534) CRC configuration */
DECL|CRCINIT|member|__IOM uint32_t CRCINIT; /*!< (@ 0x0000053C) CRC initial value */
DECL|CRCPOLY|member|__IOM uint32_t CRCPOLY; /*!< (@ 0x00000538) CRC polynomial */
DECL|CRCSTATUS|member|__IM uint32_t CRCSTATUS; /*!< (@ 0x00000400) CRC status */
DECL|CRV|member|__IOM uint32_t CRV; /*!< (@ 0x00000504) Counter reload value */
DECL|CSN|member|__IOM uint32_t CSN; /*!< (@ 0x0000000C) Pin select for CSN signal */
DECL|CTIV|member|__IOM uint32_t CTIV; /*!< (@ 0x00000538) Calibration timer interval */
DECL|CTS|member|__IOM uint32_t CTS; /*!< (@ 0x00000008) Pin select for CTS signal */
DECL|CUSTOMER|member|__IOM uint32_t CUSTOMER[32]; /*!< (@ 0x00000080) Description collection[n]: Reserved for customer */
DECL|DAB|member|__IOM uint32_t DAB[8]; /*!< (@ 0x00000600) Description collection[n]: Device address base
DECL|DACNF|member|__IOM uint32_t DACNF; /*!< (@ 0x00000640) Device address match configuration */
DECL|DAI|member|__IM uint32_t DAI; /*!< (@ 0x00000410) Device address match index */
DECL|DAP|member|__IOM uint32_t DAP[8]; /*!< (@ 0x00000620) Description collection[n]: Device address prefix
DECL|DATAWHITEIV|member|__IOM uint32_t DATAWHITEIV; /*!< (@ 0x00000554) Data whitening initial value */
DECL|DBFEN|member|__IOM uint32_t DBFEN; /*!< (@ 0x00000528) Enable input debounce filters */
DECL|DCDCEN|member|__IOM uint32_t DCDCEN; /*!< (@ 0x00000578) DC/DC enable register */
DECL|DECODER|member|__IOM uint32_t DECODER; /*!< (@ 0x00000510) Configuration of the decoder */
DECL|DEF|member|__IOM uint32_t DEF; /*!< (@ 0x0000055C) Default character. Character clocked out in case
DECL|DETECTMODE|member|__IOM uint32_t DETECTMODE; /*!< (@ 0x00000524) Select between default DETECT signal behaviour
DECL|DEVICEADDRTYPE|member|__IM uint32_t DEVICEADDRTYPE; /*!< (@ 0x000000A0) Device address type */
DECL|DEVICEADDR|member|__IM uint32_t DEVICEADDR[2]; /*!< (@ 0x000000A4) Description collection[n]: Device address n */
DECL|DEVICEID|member|__IM uint32_t DEVICEID[2]; /*!< (@ 0x00000060) Description collection[n]: Device identifier */
DECL|DIN|member|__IOM uint32_t DIN; /*!< (@ 0x00000004) Pin number configuration for PDM DIN signal */
DECL|DIRCLR|member|__IOM uint32_t DIRCLR; /*!< (@ 0x0000051C) DIR clear register */
DECL|DIRSET|member|__IOM uint32_t DIRSET; /*!< (@ 0x00000518) DIR set register */
DECL|DIR|member|__IOM uint32_t DIR; /*!< (@ 0x00000514) Direction of GPIO pins */
DECL|DISABLEINDEBUG|member|__IOM uint32_t DISABLEINDEBUG; /*!< (@ 0x00000608) Disable protection mechanism in debug mode */
DECL|DIS|member|__OM uint32_t DIS; /*!< (@ 0x00000004) Description cluster[n]: Disable channel group
DECL|DebugMonitor_IRQn|enumerator|DebugMonitor_IRQn = -4, /*!< -4 Debug Monitor */
DECL|ECBDATAPTR|member|__IOM uint32_t ECBDATAPTR; /*!< (@ 0x00000504) ECB block encrypt memory pointers */
DECL|ECB_IRQn|enumerator|ECB_IRQn = 14, /*!< 14 ECB */
DECL|EEP|member|__IOM uint32_t EEP; /*!< (@ 0x00000000) Description cluster[n]: Channel n event end-point */
DECL|ENABLE|member|__IOM uint32_t ENABLE; /*!< (@ 0x00000500) COMP enable */
DECL|ENABLE|member|__IOM uint32_t ENABLE; /*!< (@ 0x00000500) Enable */
DECL|ENABLE|member|__IOM uint32_t ENABLE; /*!< (@ 0x00000500) Enable AAR */
DECL|ENABLE|member|__IOM uint32_t ENABLE; /*!< (@ 0x00000500) Enable SPI slave */
DECL|ENABLE|member|__IOM uint32_t ENABLE; /*!< (@ 0x00000500) Enable SPIM */
DECL|ENABLE|member|__IOM uint32_t ENABLE; /*!< (@ 0x00000500) Enable TWIM */
DECL|ENABLE|member|__IOM uint32_t ENABLE; /*!< (@ 0x00000500) Enable TWIS */
DECL|ENABLE|member|__IOM uint32_t ENABLE; /*!< (@ 0x00000500) Enable UART */
DECL|ENABLE|member|__IOM uint32_t ENABLE; /*!< (@ 0x00000500) Enable or disable ADC */
DECL|ENABLE|member|__IOM uint32_t ENABLE; /*!< (@ 0x00000500) Enable the quadrature decoder */
DECL|ENABLE|member|__IOM uint32_t ENABLE; /*!< (@ 0x00000500) PDM module enable register */
DECL|ENABLE|member|__IOM uint32_t ENABLE; /*!< (@ 0x00000500) PWM module enable register */
DECL|ENDDELAY|member|__IOM uint32_t ENDDELAY; /*!< (@ 0x0000000C) Description cluster[n]: Time added after the
DECL|EN|member|__OM uint32_t EN; /*!< (@ 0x00000000) Description cluster[n]: Enable channel group
DECL|ERASEALL|member|__IOM uint32_t ERASEALL; /*!< (@ 0x0000050C) Register for erasing all non-volatile user memory */
DECL|ERASEPAGEPARTIALCFG|member|__IOM uint32_t ERASEPAGEPARTIALCFG; /*!< (@ 0x0000051C) Register for partial erase configuration */
DECL|ERASEPAGEPARTIAL|member|__IOM uint32_t ERASEPAGEPARTIAL; /*!< (@ 0x00000518) Register for partial erase of a page in code
DECL|ERASEPAGE|member|__IOM uint32_t ERASEPAGE; /*!< (@ 0x00000508) Register for erasing a page in code area */
DECL|ERASEPCR0|member|__IOM uint32_t ERASEPCR0; /*!< (@ 0x00000510) Deprecated register - Register for erasing a
DECL|ERASEPCR1|member|__IOM uint32_t ERASEPCR1; /*!< (@ 0x00000508) Deprecated register - Register for erasing a
DECL|ERASEUICR|member|__IOM uint32_t ERASEUICR; /*!< (@ 0x00000514) Register for erasing user information configuration
DECL|ERRORSRC|member|__IOM uint32_t ERRORSRC; /*!< (@ 0x00000480) Error source Note : this register is read / write
DECL|ERRORSRC|member|__IOM uint32_t ERRORSRC; /*!< (@ 0x000004C4) Error source */
DECL|ERRORSRC|member|__IOM uint32_t ERRORSRC; /*!< (@ 0x000004D0) Error source */
DECL|ER|member|__IM uint32_t ER[4]; /*!< (@ 0x00000080) Description collection[n]: Encryption root, word
DECL|EVENTS_ACCOF|member|__IOM uint32_t EVENTS_ACCOF; /*!< (@ 0x00000108) ACC or ACCDBL register overflow */
DECL|EVENTS_ACQUIRED|member|__IOM uint32_t EVENTS_ACQUIRED; /*!< (@ 0x00000128) Semaphore acquired */
DECL|EVENTS_ADDRESS|member|__IOM uint32_t EVENTS_ADDRESS; /*!< (@ 0x00000104) Address sent or received */
DECL|EVENTS_BCMATCH|member|__IOM uint32_t EVENTS_BCMATCH; /*!< (@ 0x00000128) Bit counter reached bit count value. */
DECL|EVENTS_CALIBRATEDONE|member|__IOM uint32_t EVENTS_CALIBRATEDONE; /*!< (@ 0x00000110) Calibration is complete */
DECL|EVENTS_CH|member|__IOM SAADC_EVENTS_CH_Type EVENTS_CH[8]; /*!< (@ 0x00000118) Unspecified */
DECL|EVENTS_COMPARE|member|__IOM uint32_t EVENTS_COMPARE[4]; /*!< (@ 0x00000140) Description collection[n]: Compare event on CC[n]
DECL|EVENTS_COMPARE|member|__IOM uint32_t EVENTS_COMPARE[6]; /*!< (@ 0x00000140) Description collection[n]: Compare event on CC[n]
DECL|EVENTS_CRCERROR|member|__IOM uint32_t EVENTS_CRCERROR; /*!< (@ 0x00000134) Packet received with CRC error */
DECL|EVENTS_CRCOK|member|__IOM uint32_t EVENTS_CRCOK; /*!< (@ 0x00000130) Packet received with CRC ok */
DECL|EVENTS_CROSS|member|__IOM uint32_t EVENTS_CROSS; /*!< (@ 0x0000010C) Downward or upward crossing */
DECL|EVENTS_CTS|member|__IOM uint32_t EVENTS_CTS; /*!< (@ 0x00000100) CTS is activated (set low). Clear To Send. */
DECL|EVENTS_CTTO|member|__IOM uint32_t EVENTS_CTTO; /*!< (@ 0x00000110) Calibration timer timeout */
DECL|EVENTS_DATARDY|member|__IOM uint32_t EVENTS_DATARDY; /*!< (@ 0x00000100) Temperature measurement complete, data ready */
DECL|EVENTS_DBLRDY|member|__IOM uint32_t EVENTS_DBLRDY; /*!< (@ 0x0000010C) Double displacement(s) detected */
DECL|EVENTS_DEVMATCH|member|__IOM uint32_t EVENTS_DEVMATCH; /*!< (@ 0x00000114) A device address match occurred on the last received
DECL|EVENTS_DEVMISS|member|__IOM uint32_t EVENTS_DEVMISS; /*!< (@ 0x00000118) No device address match occurred on the last
DECL|EVENTS_DISABLED|member|__IOM uint32_t EVENTS_DISABLED; /*!< (@ 0x00000110) RADIO has been disabled */
DECL|EVENTS_DONE|member|__IOM uint32_t EVENTS_DONE; /*!< (@ 0x00000108) A conversion task has been completed. Depending
DECL|EVENTS_DONE|member|__IOM uint32_t EVENTS_DONE; /*!< (@ 0x0000010C) Calibration of LFCLK RC oscillator complete event */
DECL|EVENTS_DOWN|member|__IOM uint32_t EVENTS_DOWN; /*!< (@ 0x00000104) Downward crossing */
DECL|EVENTS_ENDCRYPT|member|__IOM uint32_t EVENTS_ENDCRYPT; /*!< (@ 0x00000104) Encrypt/decrypt complete */
DECL|EVENTS_ENDECB|member|__IOM uint32_t EVENTS_ENDECB; /*!< (@ 0x00000100) ECB block encrypt complete */
DECL|EVENTS_ENDKSGEN|member|__IOM uint32_t EVENTS_ENDKSGEN; /*!< (@ 0x00000100) Key-stream generation complete */
DECL|EVENTS_ENDRX|member|__IOM uint32_t EVENTS_ENDRX; /*!< (@ 0x00000110) End of RXD buffer reached */
DECL|EVENTS_ENDRX|member|__IOM uint32_t EVENTS_ENDRX; /*!< (@ 0x00000110) End of RXD buffer reached */
DECL|EVENTS_ENDRX|member|__IOM uint32_t EVENTS_ENDRX; /*!< (@ 0x00000110) Receive buffer is filled up */
DECL|EVENTS_ENDTX|member|__IOM uint32_t EVENTS_ENDTX; /*!< (@ 0x00000120) End of TXD buffer reached */
DECL|EVENTS_ENDTX|member|__IOM uint32_t EVENTS_ENDTX; /*!< (@ 0x00000120) Last TX byte transmitted */
DECL|EVENTS_END|member|__IOM uint32_t EVENTS_END; /*!< (@ 0x00000100) Address resolution procedure complete */
DECL|EVENTS_END|member|__IOM uint32_t EVENTS_END; /*!< (@ 0x00000104) Granted transaction completed */
DECL|EVENTS_END|member|__IOM uint32_t EVENTS_END; /*!< (@ 0x00000104) The ADC has filled up the Result buffer */
DECL|EVENTS_END|member|__IOM uint32_t EVENTS_END; /*!< (@ 0x00000108) The PDM has written the last sample specified
DECL|EVENTS_END|member|__IOM uint32_t EVENTS_END; /*!< (@ 0x0000010C) Packet sent or received */
DECL|EVENTS_END|member|__IOM uint32_t EVENTS_END; /*!< (@ 0x00000118) End of RXD buffer and TXD buffer reached */
DECL|EVENTS_ERRORECB|member|__IOM uint32_t EVENTS_ERRORECB; /*!< (@ 0x00000104) ECB block encrypt aborted because of a STOPECB
DECL|EVENTS_ERROR|member|__IOM uint32_t EVENTS_ERROR; /*!< (@ 0x00000108) Deprecated register - CCM error event */
DECL|EVENTS_ERROR|member|__IOM uint32_t EVENTS_ERROR; /*!< (@ 0x00000124) Error detected */
DECL|EVENTS_ERROR|member|__IOM uint32_t EVENTS_ERROR; /*!< (@ 0x00000124) TWI error */
DECL|EVENTS_ERROR|member|__IOM uint32_t EVENTS_ERROR; /*!< (@ 0x00000124) TWI error */
DECL|EVENTS_HFCLKSTARTED|member|__IOM uint32_t EVENTS_HFCLKSTARTED; /*!< (@ 0x00000100) HFCLK oscillator started */
DECL|EVENTS_IN|member|__IOM uint32_t EVENTS_IN[8]; /*!< (@ 0x00000100) Description collection[n]: Event generated from
DECL|EVENTS_LASTRX|member|__IOM uint32_t EVENTS_LASTRX; /*!< (@ 0x0000015C) Byte boundary, starting to receive the last byte */
DECL|EVENTS_LASTTX|member|__IOM uint32_t EVENTS_LASTTX; /*!< (@ 0x00000160) Byte boundary, starting to transmit the last
DECL|EVENTS_LFCLKSTARTED|member|__IOM uint32_t EVENTS_LFCLKSTARTED; /*!< (@ 0x00000104) LFCLK started */
DECL|EVENTS_LOOPSDONE|member|__IOM uint32_t EVENTS_LOOPSDONE; /*!< (@ 0x0000011C) Concatenated sequences have been played the amount
DECL|EVENTS_NCTS|member|__IOM uint32_t EVENTS_NCTS; /*!< (@ 0x00000104) CTS is deactivated (set high). Not Clear To Send. */
DECL|EVENTS_NOTRESOLVED|member|__IOM uint32_t EVENTS_NOTRESOLVED; /*!< (@ 0x00000108) Address not resolved */
DECL|EVENTS_OVRFLW|member|__IOM uint32_t EVENTS_OVRFLW; /*!< (@ 0x00000104) Event on COUNTER overflow */
DECL|EVENTS_PAYLOAD|member|__IOM uint32_t EVENTS_PAYLOAD; /*!< (@ 0x00000108) Packet payload sent or received */
DECL|EVENTS_POFWARN|member|__IOM uint32_t EVENTS_POFWARN; /*!< (@ 0x00000108) Power failure warning */
DECL|EVENTS_PORT|member|__IOM uint32_t EVENTS_PORT; /*!< (@ 0x0000017C) Event generated from multiple input GPIO pins
DECL|EVENTS_PWMPERIODEND|member|__IOM uint32_t EVENTS_PWMPERIODEND; /*!< (@ 0x00000118) Emitted at the end of each PWM period */
DECL|EVENTS_READY|member|__IOM uint32_t EVENTS_READY; /*!< (@ 0x00000100) COMP is ready and output is valid */
DECL|EVENTS_READY|member|__IOM uint32_t EVENTS_READY; /*!< (@ 0x00000100) RADIO has ramped up and is ready to be started */
DECL|EVENTS_READ|member|__IOM uint32_t EVENTS_READ; /*!< (@ 0x00000168) Read command received */
DECL|EVENTS_REPORTRDY|member|__IOM uint32_t EVENTS_REPORTRDY; /*!< (@ 0x00000104) Non-null report ready */
DECL|EVENTS_RESOLVED|member|__IOM uint32_t EVENTS_RESOLVED; /*!< (@ 0x00000104) Address resolved */
DECL|EVENTS_RESULTDONE|member|__IOM uint32_t EVENTS_RESULTDONE; /*!< (@ 0x0000010C) A result is ready to get transferred to RAM. */
DECL|EVENTS_RSSIEND|member|__IOM uint32_t EVENTS_RSSIEND; /*!< (@ 0x0000011C) Sampling of receive signal strength complete. */
DECL|EVENTS_RXDRDY|member|__IOM uint32_t EVENTS_RXDRDY; /*!< (@ 0x00000108) Data received in RXD (but potentially not yet
DECL|EVENTS_RXSTARTED|member|__IOM uint32_t EVENTS_RXSTARTED; /*!< (@ 0x0000014C) Receive sequence started */
DECL|EVENTS_RXSTARTED|member|__IOM uint32_t EVENTS_RXSTARTED; /*!< (@ 0x0000014C) Receive sequence started */
DECL|EVENTS_RXSTARTED|member|__IOM uint32_t EVENTS_RXSTARTED; /*!< (@ 0x0000014C) UART receiver has started */
DECL|EVENTS_RXTO|member|__IOM uint32_t EVENTS_RXTO; /*!< (@ 0x00000144) Receiver timeout */
DECL|EVENTS_SAMPLERDY|member|__IOM uint32_t EVENTS_SAMPLERDY; /*!< (@ 0x00000100) Event being generated for every new sample value
DECL|EVENTS_SEQEND|member|__IOM uint32_t EVENTS_SEQEND[2]; /*!< (@ 0x00000110) Description collection[n]: Emitted at end of
DECL|EVENTS_SEQSTARTED|member|__IOM uint32_t EVENTS_SEQSTARTED[2]; /*!< (@ 0x00000108) Description collection[n]: First PWM period started
DECL|EVENTS_SLEEPENTER|member|__IOM uint32_t EVENTS_SLEEPENTER; /*!< (@ 0x00000114) CPU entered WFI/WFE sleep */
DECL|EVENTS_SLEEPEXIT|member|__IOM uint32_t EVENTS_SLEEPEXIT; /*!< (@ 0x00000118) CPU exited WFI/WFE sleep */
DECL|EVENTS_STARTED|member|__IOM uint32_t EVENTS_STARTED; /*!< (@ 0x00000100) PDM transfer has started */
DECL|EVENTS_STARTED|member|__IOM uint32_t EVENTS_STARTED; /*!< (@ 0x00000100) The ADC has started */
DECL|EVENTS_STARTED|member|__IOM uint32_t EVENTS_STARTED; /*!< (@ 0x0000014C) Transaction started */
DECL|EVENTS_STOPPED|member|__IOM uint32_t EVENTS_STOPPED; /*!< (@ 0x00000104) PDM transfer has finished */
DECL|EVENTS_STOPPED|member|__IOM uint32_t EVENTS_STOPPED; /*!< (@ 0x00000104) Response to STOP task, emitted when PWM pulses
DECL|EVENTS_STOPPED|member|__IOM uint32_t EVENTS_STOPPED; /*!< (@ 0x00000104) SPI transaction has stopped */
DECL|EVENTS_STOPPED|member|__IOM uint32_t EVENTS_STOPPED; /*!< (@ 0x00000104) TWI stopped */
DECL|EVENTS_STOPPED|member|__IOM uint32_t EVENTS_STOPPED; /*!< (@ 0x00000104) TWI stopped */
DECL|EVENTS_STOPPED|member|__IOM uint32_t EVENTS_STOPPED; /*!< (@ 0x00000110) QDEC has been stopped */
DECL|EVENTS_STOPPED|member|__IOM uint32_t EVENTS_STOPPED; /*!< (@ 0x00000114) The ADC has stopped */
DECL|EVENTS_SUSPENDED|member|__IOM uint32_t EVENTS_SUSPENDED; /*!< (@ 0x00000148) Last byte has been sent out after the SUSPEND
DECL|EVENTS_TICK|member|__IOM uint32_t EVENTS_TICK; /*!< (@ 0x00000100) Event on COUNTER increment */
DECL|EVENTS_TIMEOUT|member|__IOM uint32_t EVENTS_TIMEOUT; /*!< (@ 0x00000100) Watchdog timeout */
DECL|EVENTS_TRIGGERED|member|__IOM uint32_t EVENTS_TRIGGERED[16]; /*!< (@ 0x00000100) Description collection[n]: Event number n generated
DECL|EVENTS_TXDRDY|member|__IOM uint32_t EVENTS_TXDRDY; /*!< (@ 0x0000011C) Data sent from TXD */
DECL|EVENTS_TXSTARTED|member|__IOM uint32_t EVENTS_TXSTARTED; /*!< (@ 0x00000150) Transmit sequence started */
DECL|EVENTS_TXSTARTED|member|__IOM uint32_t EVENTS_TXSTARTED; /*!< (@ 0x00000150) Transmit sequence started */
DECL|EVENTS_TXSTARTED|member|__IOM uint32_t EVENTS_TXSTARTED; /*!< (@ 0x00000150) UART transmitter has started */
DECL|EVENTS_TXSTOPPED|member|__IOM uint32_t EVENTS_TXSTOPPED; /*!< (@ 0x00000158) Transmitter stopped */
DECL|EVENTS_UP|member|__IOM uint32_t EVENTS_UP; /*!< (@ 0x00000108) Upward crossing */
DECL|EVENTS_VALRDY|member|__IOM uint32_t EVENTS_VALRDY; /*!< (@ 0x00000100) Event being generated for every new random number
DECL|EVENTS_WRITE|member|__IOM uint32_t EVENTS_WRITE; /*!< (@ 0x00000164) Write command received */
DECL|EVTENCLR|member|__IOM uint32_t EVTENCLR; /*!< (@ 0x00000348) Disable event routing */
DECL|EVTENSET|member|__IOM uint32_t EVTENSET; /*!< (@ 0x00000344) Enable event routing */
DECL|EVTEN|member|__IOM uint32_t EVTEN; /*!< (@ 0x00000340) Enable or disable event routing */
DECL|EXTREFSEL|member|__IOM uint32_t EXTREFSEL; /*!< (@ 0x0000050C) External reference select */
DECL|FICR_INFO_Type|typedef|} FICR_INFO_Type; /*!< Size = 32 (0x20) */
DECL|FICR_TEMP_Type|typedef|} FICR_TEMP_Type; /*!< Size = 68 (0x44) */
DECL|FLASH|member|__IM uint32_t FLASH; /*!< (@ 0x00000010) Flash variant */
DECL|FORK|member|__IOM PPI_FORK_Type FORK[32]; /*!< (@ 0x00000910) Fork */
DECL|FREQUENCY|member|__IOM uint32_t FREQUENCY; /*!< (@ 0x00000508) Frequency */
DECL|FREQUENCY|member|__IOM uint32_t FREQUENCY; /*!< (@ 0x00000524) SPI frequency. Accuracy depends on the HFCLK
DECL|FREQUENCY|member|__IOM uint32_t FREQUENCY; /*!< (@ 0x00000524) TWI frequency. Accuracy depends on the HFCLK
DECL|GAINL|member|__IOM uint32_t GAINL; /*!< (@ 0x00000518) Left output gain adjustment */
DECL|GAINR|member|__IOM uint32_t GAINR; /*!< (@ 0x0000051C) Right output gain adjustment */
DECL|GPIOTE_IRQn|enumerator|GPIOTE_IRQn = 6, /*!< 6 GPIOTE */
DECL|GPREGRET2|member|__IOM uint32_t GPREGRET2; /*!< (@ 0x00000520) General purpose retention register */
DECL|GPREGRET|member|__IOM uint32_t GPREGRET; /*!< (@ 0x0000051C) General purpose retention register */
DECL|HFCLKRUN|member|__IM uint32_t HFCLKRUN; /*!< (@ 0x00000408) Status indicating that HFCLKSTART task has been
DECL|HFCLKSTAT|member|__IM uint32_t HFCLKSTAT; /*!< (@ 0x0000040C) HFCLK status */
DECL|HYST|member|__IOM uint32_t HYST; /*!< (@ 0x00000538) Comparator hysteresis enable */
DECL|HardFault_IRQn|enumerator|HardFault_IRQn = -13, /*!< -13 Hard Fault, all classes of Fault */
DECL|INFO|member|__IOM FICR_INFO_Type INFO; /*!< (@ 0x00000100) Device info */
DECL|INPTR|member|__IOM uint32_t INPTR; /*!< (@ 0x0000050C) Input pointer */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENCLR|member|__IOM uint32_t INTENCLR; /*!< (@ 0x00000308) Disable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTENSET|member|__IOM uint32_t INTENSET; /*!< (@ 0x00000304) Enable interrupt */
DECL|INTEN|member|__IOM uint32_t INTEN; /*!< (@ 0x00000300) Enable or disable interrupt */
DECL|INTEN|member|__IOM uint32_t INTEN; /*!< (@ 0x00000300) Enable or disable interrupt */
DECL|INTEN|member|__IOM uint32_t INTEN; /*!< (@ 0x00000300) Enable or disable interrupt */
DECL|INTEN|member|__IOM uint32_t INTEN; /*!< (@ 0x00000300) Enable or disable interrupt */
DECL|INTEN|member|__IOM uint32_t INTEN; /*!< (@ 0x00000300) Enable or disable interrupt */
DECL|INTEN|member|__IOM uint32_t INTEN; /*!< (@ 0x00000300) Enable or disable interrupt */
DECL|INTEN|member|__IOM uint32_t INTEN; /*!< (@ 0x00000300) Enable or disable interrupt */
DECL|INTEN|member|__IOM uint32_t INTEN; /*!< (@ 0x00000300) Enable or disable interrupt */
DECL|IN|member|__IM uint32_t IN; /*!< (@ 0x00000510) Read GPIO port */
DECL|IRKPTR|member|__IOM uint32_t IRKPTR; /*!< (@ 0x00000508) Pointer to IRK data structure */
DECL|IRQn_Type|typedef|} IRQn_Type;
DECL|IR|member|__IM uint32_t IR[4]; /*!< (@ 0x00000090) Description collection[n]: Identity root, word
DECL|LATCH|member|__IOM uint32_t LATCH; /*!< (@ 0x00000520) Latch register indicating what GPIO pins that
DECL|LEDPOL|member|__IOM uint32_t LEDPOL; /*!< (@ 0x00000504) LED output pin polarity */
DECL|LEDPRE|member|__IOM uint32_t LEDPRE; /*!< (@ 0x00000540) Time period the LED is switched ON prior to sampling */
DECL|LED|member|__IOM uint32_t LED; /*!< (@ 0x00000000) Pin select for LED signal */
DECL|LFCLKRUN|member|__IM uint32_t LFCLKRUN; /*!< (@ 0x00000414) Status indicating that LFCLKSTART task has been
DECL|LFCLKSRCCOPY|member|__IM uint32_t LFCLKSRCCOPY; /*!< (@ 0x0000041C) Copy of LFCLKSRC register, set when LFCLKSTART
DECL|LFCLKSRC|member|__IOM uint32_t LFCLKSRC; /*!< (@ 0x00000518) Clock source for the LFCLK */
DECL|LFCLKSTAT|member|__IM uint32_t LFCLKSTAT; /*!< (@ 0x00000418) LFCLK status */
DECL|LIMITH|member|__IOM uint32_t LIMITH; /*!< (@ 0x00000000) Description cluster[n]: Last results is equal
DECL|LIMITL|member|__IOM uint32_t LIMITL; /*!< (@ 0x00000004) Description cluster[n]: Last results is equal
DECL|LIMIT|member|__IOM uint32_t LIMIT; /*!< (@ 0x0000000C) Description cluster[n]: High/low limits for event
DECL|LIST|member|__IOM uint32_t LIST; /*!< (@ 0x0000000C) EasyDMA list type */
DECL|LIST|member|__IOM uint32_t LIST; /*!< (@ 0x0000000C) EasyDMA list type */
DECL|LIST|member|__IOM uint32_t LIST; /*!< (@ 0x0000000C) EasyDMA list type */
DECL|LIST|member|__IOM uint32_t LIST; /*!< (@ 0x0000000C) EasyDMA list type */
DECL|LOOP|member|__IOM uint32_t LOOP; /*!< (@ 0x00000514) Number of playbacks of a loop */
DECL|MATCH|member|__IM uint32_t MATCH; /*!< (@ 0x000004D4) Status register indicating which address had
DECL|MAXCNT|member|__IOM uint32_t MAXCNT; /*!< (@ 0x00000004) Maximum number of buffer words to transfer */
DECL|MAXCNT|member|__IOM uint32_t MAXCNT; /*!< (@ 0x00000004) Maximum number of bytes in RXD buffer */
DECL|MAXCNT|member|__IOM uint32_t MAXCNT; /*!< (@ 0x00000004) Maximum number of bytes in TXD buffer */
DECL|MAXCNT|member|__IOM uint32_t MAXCNT; /*!< (@ 0x00000004) Maximum number of bytes in receive buffer */
DECL|MAXCNT|member|__IOM uint32_t MAXCNT; /*!< (@ 0x00000004) Maximum number of bytes in receive buffer */
DECL|MAXCNT|member|__IOM uint32_t MAXCNT; /*!< (@ 0x00000004) Maximum number of bytes in receive buffer */
DECL|MAXCNT|member|__IOM uint32_t MAXCNT; /*!< (@ 0x00000004) Maximum number of bytes in receive buffer */
DECL|MAXCNT|member|__IOM uint32_t MAXCNT; /*!< (@ 0x00000004) Maximum number of bytes in transmit buffer */
DECL|MAXCNT|member|__IOM uint32_t MAXCNT; /*!< (@ 0x00000004) Maximum number of bytes in transmit buffer */
DECL|MAXCNT|member|__IOM uint32_t MAXCNT; /*!< (@ 0x00000004) Maximum number of bytes in transmit buffer */
DECL|MAXCNT|member|__IOM uint32_t MAXCNT; /*!< (@ 0x00000004) Maximum number of bytes in transmit buffer */
DECL|MAXCNT|member|__IOM uint32_t MAXCNT; /*!< (@ 0x00000004) Number of samples to allocate memory for in EasyDMA
DECL|MAXPACKETSIZE|member|__IOM uint32_t MAXPACKETSIZE; /*!< (@ 0x00000518) Length of key-stream generated when MODE.LENGTH
DECL|MICSTATUS|member|__IM uint32_t MICSTATUS; /*!< (@ 0x00000400) MIC check result */
DECL|MISO|member|__IOM uint32_t MISO; /*!< (@ 0x00000004) Pin select for MISO signal */
DECL|MISO|member|__IOM uint32_t MISO; /*!< (@ 0x00000008) Pin select for MISO signal */
DECL|MODECNF0|member|__IOM uint32_t MODECNF0; /*!< (@ 0x00000650) Radio mode configuration register 0 */
DECL|MODE|member|__IOM uint32_t MODE; /*!< (@ 0x00000504) Operation mode */
DECL|MODE|member|__IOM uint32_t MODE; /*!< (@ 0x00000504) Selects operating mode of the wave counter */
DECL|MODE|member|__IOM uint32_t MODE; /*!< (@ 0x00000504) Timer mode selection */
DECL|MODE|member|__IOM uint32_t MODE; /*!< (@ 0x00000508) Defines the routing of the connected PDM microphones'
DECL|MODE|member|__IOM uint32_t MODE; /*!< (@ 0x00000510) Data rate and modulation */
DECL|MODE|member|__IOM uint32_t MODE; /*!< (@ 0x00000534) Mode configuration */
DECL|MOSI|member|__IOM uint32_t MOSI; /*!< (@ 0x00000004) Pin select for MOSI signal */
DECL|MOSI|member|__IOM uint32_t MOSI; /*!< (@ 0x00000008) Pin select for MOSI signal */
DECL|MemoryManagement_IRQn|enumerator|MemoryManagement_IRQn = -12, /*!< -12 Memory Management, MPU mismatch, including Access Violation
DECL|NIRK|member|__IOM uint32_t NIRK; /*!< (@ 0x00000504) Number of IRKs */
DECL|NRF52810_H|macro|NRF52810_H
DECL|NRFFW|member|__IOM uint32_t NRFFW[15]; /*!< (@ 0x00000014) Description collection[n]: Reserved for Nordic
DECL|NRFHW|member|__IOM uint32_t NRFHW[12]; /*!< (@ 0x00000050) Description collection[n]: Reserved for Nordic
DECL|NRF_AAR_BASE|macro|NRF_AAR_BASE
DECL|NRF_AAR_Type|typedef|} NRF_AAR_Type; /*!< Size = 1304 (0x518) */
DECL|NRF_AAR|macro|NRF_AAR
DECL|NRF_BPROT_BASE|macro|NRF_BPROT_BASE
DECL|NRF_BPROT_Type|typedef|} NRF_BPROT_Type; /*!< Size = 1552 (0x610) */
DECL|NRF_BPROT|macro|NRF_BPROT
DECL|NRF_CCM_BASE|macro|NRF_CCM_BASE
DECL|NRF_CCM_Type|typedef|} NRF_CCM_Type; /*!< Size = 1312 (0x520) */
DECL|NRF_CCM|macro|NRF_CCM
DECL|NRF_CLOCK_BASE|macro|NRF_CLOCK_BASE
DECL|NRF_CLOCK_Type|typedef|} NRF_CLOCK_Type; /*!< Size = 1340 (0x53c) */
DECL|NRF_CLOCK|macro|NRF_CLOCK
DECL|NRF_COMP_BASE|macro|NRF_COMP_BASE
DECL|NRF_COMP_Type|typedef|} NRF_COMP_Type; /*!< Size = 1340 (0x53c) */
DECL|NRF_COMP|macro|NRF_COMP
DECL|NRF_ECB_BASE|macro|NRF_ECB_BASE
DECL|NRF_ECB_Type|typedef|} NRF_ECB_Type; /*!< Size = 1288 (0x508) */
DECL|NRF_ECB|macro|NRF_ECB
DECL|NRF_EGU0_BASE|macro|NRF_EGU0_BASE
DECL|NRF_EGU0|macro|NRF_EGU0
DECL|NRF_EGU1_BASE|macro|NRF_EGU1_BASE
DECL|NRF_EGU1|macro|NRF_EGU1
DECL|NRF_EGU_Type|typedef|} NRF_EGU_Type; /*!< Size = 780 (0x30c) */
DECL|NRF_FICR_BASE|macro|NRF_FICR_BASE
DECL|NRF_FICR_Type|typedef|} NRF_FICR_Type; /*!< Size = 1096 (0x448) */
DECL|NRF_FICR|macro|NRF_FICR
DECL|NRF_GPIOTE_BASE|macro|NRF_GPIOTE_BASE
DECL|NRF_GPIOTE_Type|typedef|} NRF_GPIOTE_Type; /*!< Size = 1328 (0x530) */
DECL|NRF_GPIOTE|macro|NRF_GPIOTE
DECL|NRF_GPIO_Type|typedef|} NRF_GPIO_Type; /*!< Size = 1920 (0x780) */
DECL|NRF_NVMC_BASE|macro|NRF_NVMC_BASE
DECL|NRF_NVMC_Type|typedef|} NRF_NVMC_Type; /*!< Size = 1312 (0x520) */
DECL|NRF_NVMC|macro|NRF_NVMC
DECL|NRF_P0_BASE|macro|NRF_P0_BASE
DECL|NRF_P0|macro|NRF_P0
DECL|NRF_PDM_BASE|macro|NRF_PDM_BASE
DECL|NRF_PDM_Type|typedef|} NRF_PDM_Type; /*!< Size = 1384 (0x568) */
DECL|NRF_PDM|macro|NRF_PDM
DECL|NRF_POWER_BASE|macro|NRF_POWER_BASE
DECL|NRF_POWER_Type|typedef|} NRF_POWER_Type; /*!< Size = 2432 (0x980) */
DECL|NRF_POWER|macro|NRF_POWER
DECL|NRF_PPI_BASE|macro|NRF_PPI_BASE
DECL|NRF_PPI_Type|typedef|} NRF_PPI_Type; /*!< Size = 2448 (0x990) */
DECL|NRF_PPI|macro|NRF_PPI
DECL|NRF_PWM0_BASE|macro|NRF_PWM0_BASE
DECL|NRF_PWM0|macro|NRF_PWM0
DECL|NRF_PWM_Type|typedef|} NRF_PWM_Type; /*!< Size = 1392 (0x570) */
DECL|NRF_QDEC_BASE|macro|NRF_QDEC_BASE
DECL|NRF_QDEC_Type|typedef|} NRF_QDEC_Type; /*!< Size = 1356 (0x54c) */
DECL|NRF_QDEC|macro|NRF_QDEC
DECL|NRF_RADIO_BASE|macro|NRF_RADIO_BASE
DECL|NRF_RADIO_Type|typedef|} NRF_RADIO_Type; /*!< Size = 4096 (0x1000) */
DECL|NRF_RADIO|macro|NRF_RADIO
DECL|NRF_RNG_BASE|macro|NRF_RNG_BASE
DECL|NRF_RNG_Type|typedef|} NRF_RNG_Type; /*!< Size = 1292 (0x50c) */
DECL|NRF_RNG|macro|NRF_RNG
DECL|NRF_RTC0_BASE|macro|NRF_RTC0_BASE
DECL|NRF_RTC0|macro|NRF_RTC0
DECL|NRF_RTC1_BASE|macro|NRF_RTC1_BASE
DECL|NRF_RTC1|macro|NRF_RTC1
DECL|NRF_RTC_Type|typedef|} NRF_RTC_Type; /*!< Size = 1360 (0x550) */
DECL|NRF_SAADC_BASE|macro|NRF_SAADC_BASE
DECL|NRF_SAADC_Type|typedef|} NRF_SAADC_Type; /*!< Size = 1592 (0x638) */
DECL|NRF_SAADC|macro|NRF_SAADC
DECL|NRF_SPIM0_BASE|macro|NRF_SPIM0_BASE
DECL|NRF_SPIM0|macro|NRF_SPIM0
DECL|NRF_SPIM_Type|typedef|} NRF_SPIM_Type; /*!< Size = 1476 (0x5c4) */
DECL|NRF_SPIS0_BASE|macro|NRF_SPIS0_BASE
DECL|NRF_SPIS0|macro|NRF_SPIS0
DECL|NRF_SPIS_Type|typedef|} NRF_SPIS_Type; /*!< Size = 1476 (0x5c4) */
DECL|NRF_SWI0_BASE|macro|NRF_SWI0_BASE
DECL|NRF_SWI0|macro|NRF_SWI0
DECL|NRF_SWI1_BASE|macro|NRF_SWI1_BASE
DECL|NRF_SWI1|macro|NRF_SWI1
DECL|NRF_SWI2_BASE|macro|NRF_SWI2_BASE
DECL|NRF_SWI2|macro|NRF_SWI2
DECL|NRF_SWI3_BASE|macro|NRF_SWI3_BASE
DECL|NRF_SWI3|macro|NRF_SWI3
DECL|NRF_SWI4_BASE|macro|NRF_SWI4_BASE
DECL|NRF_SWI4|macro|NRF_SWI4
DECL|NRF_SWI5_BASE|macro|NRF_SWI5_BASE
DECL|NRF_SWI5|macro|NRF_SWI5
DECL|NRF_SWI_Type|typedef|} NRF_SWI_Type; /*!< Size = 4 (0x4) */
DECL|NRF_TEMP_BASE|macro|NRF_TEMP_BASE
DECL|NRF_TEMP_Type|typedef|} NRF_TEMP_Type; /*!< Size = 1396 (0x574) */
DECL|NRF_TEMP|macro|NRF_TEMP
DECL|NRF_TIMER0_BASE|macro|NRF_TIMER0_BASE
DECL|NRF_TIMER0|macro|NRF_TIMER0
DECL|NRF_TIMER1_BASE|macro|NRF_TIMER1_BASE
DECL|NRF_TIMER1|macro|NRF_TIMER1
DECL|NRF_TIMER2_BASE|macro|NRF_TIMER2_BASE
DECL|NRF_TIMER2|macro|NRF_TIMER2
DECL|NRF_TIMER_Type|typedef|} NRF_TIMER_Type; /*!< Size = 1368 (0x558) */
DECL|NRF_TWIM0_BASE|macro|NRF_TWIM0_BASE
DECL|NRF_TWIM0|macro|NRF_TWIM0
DECL|NRF_TWIM_Type|typedef|} NRF_TWIM_Type; /*!< Size = 1420 (0x58c) */
DECL|NRF_TWIS0_BASE|macro|NRF_TWIS0_BASE
DECL|NRF_TWIS0|macro|NRF_TWIS0
DECL|NRF_TWIS_Type|typedef|} NRF_TWIS_Type; /*!< Size = 1476 (0x5c4) */
DECL|NRF_UARTE0_BASE|macro|NRF_UARTE0_BASE
DECL|NRF_UARTE0|macro|NRF_UARTE0
DECL|NRF_UARTE_Type|typedef|} NRF_UARTE_Type; /*!< Size = 1392 (0x570) */
DECL|NRF_UICR_BASE|macro|NRF_UICR_BASE
DECL|NRF_UICR_Type|typedef|} NRF_UICR_Type; /*!< Size = 524 (0x20c) */
DECL|NRF_UICR|macro|NRF_UICR
DECL|NRF_WDT_BASE|macro|NRF_WDT_BASE
DECL|NRF_WDT_Type|typedef|} NRF_WDT_Type; /*!< Size = 1568 (0x620) */
DECL|NRF_WDT|macro|NRF_WDT
DECL|NonMaskableInt_IRQn|enumerator|NonMaskableInt_IRQn = -14, /*!< -14 Non maskable Interrupt, cannot be stopped or preempted */
DECL|ORC|member|__IOM uint32_t ORC; /*!< (@ 0x000005C0) Over-read character */
DECL|ORC|member|__IOM uint32_t ORC; /*!< (@ 0x000005C0) Over-read character. Character clocked out in
DECL|ORC|member|__IOM uint32_t ORC; /*!< (@ 0x000005C0) Over-read character. Character sent out in case
DECL|OUTCLR|member|__IOM uint32_t OUTCLR; /*!< (@ 0x0000050C) Clear individual bits in GPIO port */
DECL|OUTPTR|member|__IOM uint32_t OUTPTR; /*!< (@ 0x00000510) Output pointer */
DECL|OUTSET|member|__IOM uint32_t OUTSET; /*!< (@ 0x00000508) Set individual bits in GPIO port */
DECL|OUT|member|__IOM uint32_t OUT; /*!< (@ 0x00000504) Write GPIO port */
DECL|OUT|member|__IOM uint32_t OUT[4]; /*!< (@ 0x00000000) Description collection[n]: Output pin select
DECL|OVERSAMPLE|member|__IOM uint32_t OVERSAMPLE; /*!< (@ 0x000005F4) Oversampling configuration. OVERSAMPLE should
DECL|PACKAGE|member|__IM uint32_t PACKAGE; /*!< (@ 0x00000008) Package option */
DECL|PACKETPTR|member|__IOM uint32_t PACKETPTR; /*!< (@ 0x00000504) Packet pointer */
DECL|PART|member|__IM uint32_t PART; /*!< (@ 0x00000000) Part code */
DECL|PCNF0|member|__IOM uint32_t PCNF0; /*!< (@ 0x00000514) Packet configuration register 0 */
DECL|PCNF1|member|__IOM uint32_t PCNF1; /*!< (@ 0x00000518) Packet configuration register 1 */
DECL|PDMCLKCTRL|member|__IOM uint32_t PDMCLKCTRL; /*!< (@ 0x00000504) PDM clock generator control */
DECL|PDM_IRQn|enumerator|PDM_IRQn = 29 /*!< 29 PDM */
DECL|PDM_PSEL_Type|typedef|} PDM_PSEL_Type; /*!< Size = 8 (0x8) */
DECL|PDM_SAMPLE_Type|typedef|} PDM_SAMPLE_Type; /*!< Size = 8 (0x8) */
DECL|PIN_CNF|member|__IOM uint32_t PIN_CNF[32]; /*!< (@ 0x00000700) Description collection[n]: Configuration of GPIO
DECL|POFCON|member|__IOM uint32_t POFCON; /*!< (@ 0x00000510) Power failure comparator configuration */
DECL|POWERCLR|member|__OM uint32_t POWERCLR; /*!< (@ 0x00000008) Description cluster[n]: RAMn power control clear
DECL|POWERSET|member|__OM uint32_t POWERSET; /*!< (@ 0x00000004) Description cluster[n]: RAMn power control set
DECL|POWER_CLOCK_IRQn|enumerator|POWER_CLOCK_IRQn = 0, /*!< 0 POWER_CLOCK */
DECL|POWER_RAM_Type|typedef|} POWER_RAM_Type; /*!< Size = 16 (0x10) */
DECL|POWER|member|__IOM uint32_t POWER; /*!< (@ 0x00000000) Description cluster[n]: RAMn power control register.
DECL|POWER|member|__IOM uint32_t POWER; /*!< (@ 0x00000FFC) Peripheral power control */
DECL|PPI_CH_Type|typedef|} PPI_CH_Type; /*!< Size = 8 (0x8) */
DECL|PPI_FORK_Type|typedef|} PPI_FORK_Type; /*!< Size = 4 (0x4) */
DECL|PPI_TASKS_CHG_Type|typedef|} PPI_TASKS_CHG_Type; /*!< Size = 8 (0x8) */
DECL|PREFIX0|member|__IOM uint32_t PREFIX0; /*!< (@ 0x00000524) Prefixes bytes for logical addresses 0-3 */
DECL|PREFIX1|member|__IOM uint32_t PREFIX1; /*!< (@ 0x00000528) Prefixes bytes for logical addresses 4-7 */
DECL|PRESCALER|member|__IOM uint32_t PRESCALER; /*!< (@ 0x00000508) 12 bit prescaler for COUNTER frequency (32768/(PRESCALER+1)).Mu
DECL|PRESCALER|member|__IOM uint32_t PRESCALER; /*!< (@ 0x0000050C) Configuration for PWM_CLK */
DECL|PRESCALER|member|__IOM uint32_t PRESCALER; /*!< (@ 0x00000510) Timer prescaler register */
DECL|PSELN|member|__IOM uint32_t PSELN; /*!< (@ 0x00000004) Description cluster[n]: Input negative pin selection
DECL|PSELP|member|__IOM uint32_t PSELP; /*!< (@ 0x00000000) Description cluster[n]: Input positive pin selection
DECL|PSELRESET|member|__IOM uint32_t PSELRESET[2]; /*!< (@ 0x00000200) Description collection[n]: Mapping of the nRESET
DECL|PSEL|member|__IOM PDM_PSEL_Type PSEL; /*!< (@ 0x00000540) Unspecified */
DECL|PSEL|member|__IOM PWM_PSEL_Type PSEL; /*!< (@ 0x00000560) Unspecified */
DECL|PSEL|member|__IOM QDEC_PSEL_Type PSEL; /*!< (@ 0x0000051C) Unspecified */
DECL|PSEL|member|__IOM SPIM_PSEL_Type PSEL; /*!< (@ 0x00000508) Unspecified */
DECL|PSEL|member|__IOM SPIS_PSEL_Type PSEL; /*!< (@ 0x00000508) Unspecified */
DECL|PSEL|member|__IOM TWIM_PSEL_Type PSEL; /*!< (@ 0x00000508) Unspecified */
DECL|PSEL|member|__IOM TWIS_PSEL_Type PSEL; /*!< (@ 0x00000508) Unspecified */
DECL|PSEL|member|__IOM UARTE_PSEL_Type PSEL; /*!< (@ 0x00000508) Unspecified */
DECL|PSEL|member|__IOM uint32_t PSEL; /*!< (@ 0x00000504) Pin select */
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) Data pointer */
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) Data pointer */
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) Data pointer */
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) Data pointer */
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) Data pointer */
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) Data pointer */
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) Data pointer */
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) Description cluster[n]: Beginning address in
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) RAM address pointer to write samples to with
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) RXD Data pointer */
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) RXD data pointer */
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) TXD Data pointer */
DECL|PTR|member|__IOM uint32_t PTR; /*!< (@ 0x00000000) TXD data pointer */
DECL|PWM0_IRQn|enumerator|PWM0_IRQn = 28, /*!< 28 PWM0 */
DECL|PWM_PSEL_Type|typedef|} PWM_PSEL_Type; /*!< Size = 16 (0x10) */
DECL|PWM_SEQ_Type|typedef|} PWM_SEQ_Type; /*!< Size = 32 (0x20) */
DECL|PendSV_IRQn|enumerator|PendSV_IRQn = -2, /*!< -2 Pendable request for system service */
DECL|QDEC_IRQn|enumerator|QDEC_IRQn = 18, /*!< 18 QDEC */
DECL|QDEC_PSEL_Type|typedef|} QDEC_PSEL_Type; /*!< Size = 12 (0xc) */
DECL|RADIO_IRQn|enumerator|RADIO_IRQn = 1, /*!< 1 RADIO */
DECL|RAM|member|__IM uint32_t RAM; /*!< (@ 0x0000000C) RAM variant */
DECL|RAM|member|__IOM POWER_RAM_Type RAM[8]; /*!< (@ 0x00000900) Unspecified */
DECL|RATEOVERRIDE|member|__IOM uint32_t RATEOVERRIDE; /*!< (@ 0x0000051C) Data rate override setting. */
DECL|READY|member|__IM uint32_t READY; /*!< (@ 0x00000400) Ready flag */
DECL|REFRESH|member|__IOM uint32_t REFRESH; /*!< (@ 0x00000008) Description cluster[n]: Number of additional
DECL|REFSEL|member|__IOM uint32_t REFSEL; /*!< (@ 0x00000508) Reference source select for single-ended mode */
DECL|REPORTPER|member|__IOM uint32_t REPORTPER; /*!< (@ 0x00000510) Number of samples to be taken before REPORTRDY
DECL|REQSTATUS|member|__IM uint32_t REQSTATUS; /*!< (@ 0x00000404) Request status */
DECL|RESERVED10|member|__IM uint32_t RESERVED10;
DECL|RESERVED10|member|__IM uint32_t RESERVED10[10];
DECL|RESERVED10|member|__IM uint32_t RESERVED10[14];
DECL|RESERVED10|member|__IM uint32_t RESERVED10[31];
DECL|RESERVED10|member|__IM uint32_t RESERVED10[39];
DECL|RESERVED10|member|__IM uint32_t RESERVED10[7];
DECL|RESERVED11|member|__IM uint32_t RESERVED11;
DECL|RESERVED11|member|__IM uint32_t RESERVED11;
DECL|RESERVED11|member|__IM uint32_t RESERVED11;
DECL|RESERVED11|member|__IM uint32_t RESERVED11;
DECL|RESERVED11|member|__IM uint32_t RESERVED11[3];
DECL|RESERVED11|member|__IM uint32_t RESERVED11[4];
DECL|RESERVED12|member|__IM uint32_t RESERVED12;
DECL|RESERVED12|member|__IM uint32_t RESERVED12[3];
DECL|RESERVED12|member|__IM uint32_t RESERVED12[3];
DECL|RESERVED12|member|__IM uint32_t RESERVED12[5];
DECL|RESERVED12|member|__IM uint32_t RESERVED12[618];
DECL|RESERVED12|member|__IM uint32_t RESERVED12[9];
DECL|RESERVED13|member|__IM uint32_t RESERVED13;
DECL|RESERVED13|member|__IM uint32_t RESERVED13;
DECL|RESERVED13|member|__IM uint32_t RESERVED13[26];
DECL|RESERVED13|member|__IM uint32_t RESERVED13[3];
DECL|RESERVED13|member|__IM uint32_t RESERVED13[3];
DECL|RESERVED14|member|__IM uint32_t RESERVED14;
DECL|RESERVED14|member|__IM uint32_t RESERVED14[13];
DECL|RESERVED14|member|__IM uint32_t RESERVED14[14];
DECL|RESERVED14|member|__IM uint32_t RESERVED14[24];
DECL|RESERVED15|member|__IM uint32_t RESERVED15;
DECL|RESERVED15|member|__IM uint32_t RESERVED15[7];
DECL|RESERVED16|member|__IM uint32_t RESERVED16[10];
DECL|RESERVED1|member|__IM uint32_t RESERVED1;
DECL|RESERVED1|member|__IM uint32_t RESERVED1;
DECL|RESERVED1|member|__IM uint32_t RESERVED1;
DECL|RESERVED1|member|__IM uint32_t RESERVED1;
DECL|RESERVED1|member|__IM uint32_t RESERVED1[106];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[112];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[118];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[125];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[127];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[128];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[128];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[14];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[18];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[2];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[2];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[34];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[4];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[52];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[54];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[58];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[59];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[60];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[60];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[61];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[61];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[63];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[64];
DECL|RESERVED1|member|__IM uint32_t RESERVED1[64];
DECL|RESERVED2|member|__IM uint32_t RESERVED2;
DECL|RESERVED2|member|__IM uint32_t RESERVED2;
DECL|RESERVED2|member|__IM uint32_t RESERVED2;
DECL|RESERVED2|member|__IM uint32_t RESERVED2[109];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[124];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[125];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[126];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[126];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[127];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[148];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[2];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[2];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[32];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[3];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[42];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[56];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[56];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[61];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[61];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[63];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[64];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[64];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[64];
DECL|RESERVED2|member|__IM uint32_t RESERVED2[6];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[122];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[125];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[126];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[13];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[21];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[23];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[2];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[2];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[3];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[50];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[51];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[56];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[5];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[5];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[61];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[61];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[61];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[62];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[63];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[63];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[63];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[63];
DECL|RESERVED3|member|__IM uint32_t RESERVED3[64];
DECL|RESERVED4|member|__IM uint32_t RESERVED4;
DECL|RESERVED4|member|__IM uint32_t RESERVED4;
DECL|RESERVED4|member|__IM uint32_t RESERVED4[110];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[125];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[126];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[185];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[2];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[3];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[53];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[5];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[60];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[61];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[63];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[63];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[63];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[64];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[7];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[7];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[7];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[8];
DECL|RESERVED4|member|__IM uint32_t RESERVED4[97];
DECL|RESERVED5|member|__IM uint32_t RESERVED5;
DECL|RESERVED5|member|__IM uint32_t RESERVED5;
DECL|RESERVED5|member|__IM uint32_t RESERVED5;
DECL|RESERVED5|member|__IM uint32_t RESERVED5;
DECL|RESERVED5|member|__IM uint32_t RESERVED5[129];
DECL|RESERVED5|member|__IM uint32_t RESERVED5[13];
DECL|RESERVED5|member|__IM uint32_t RESERVED5[24];
DECL|RESERVED5|member|__IM uint32_t RESERVED5[2];
DECL|RESERVED5|member|__IM uint32_t RESERVED5[2];
DECL|RESERVED5|member|__IM uint32_t RESERVED5[61];
DECL|RESERVED5|member|__IM uint32_t RESERVED5[62];
DECL|RESERVED5|member|__IM uint32_t RESERVED5[63];
DECL|RESERVED5|member|__IM uint32_t RESERVED5[64];
DECL|RESERVED5|member|__IM uint32_t RESERVED5[6];
DECL|RESERVED5|member|__IM uint32_t RESERVED5[8];
DECL|RESERVED5|member|__IM uint32_t RESERVED5[8];
DECL|RESERVED5|member|__IM uint32_t RESERVED5[9];
DECL|RESERVED6|member|__IM uint32_t RESERVED6;
DECL|RESERVED6|member|__IM uint32_t RESERVED6;
DECL|RESERVED6|member|__IM uint32_t RESERVED6[10];
DECL|RESERVED6|member|__IM uint32_t RESERVED6[11];
DECL|RESERVED6|member|__IM uint32_t RESERVED6[12];
DECL|RESERVED6|member|__IM uint32_t RESERVED6[2];
DECL|RESERVED6|member|__IM uint32_t RESERVED6[3];
DECL|RESERVED6|member|__IM uint32_t RESERVED6[4];
DECL|RESERVED6|member|__IM uint32_t RESERVED6[61];
DECL|RESERVED6|member|__IM uint32_t RESERVED6[7];
DECL|RESERVED7|member|__IM uint32_t RESERVED7[15];
DECL|RESERVED7|member|__IM uint32_t RESERVED7[2];
DECL|RESERVED7|member|__IM uint32_t RESERVED7[37];
DECL|RESERVED7|member|__IM uint32_t RESERVED7[39];
DECL|RESERVED7|member|__IM uint32_t RESERVED7[41];
DECL|RESERVED7|member|__IM uint32_t RESERVED7[44];
DECL|RESERVED7|member|__IM uint32_t RESERVED7[60];
DECL|RESERVED8|member|__IM uint32_t RESERVED8;
DECL|RESERVED8|member|__IM uint32_t RESERVED8[21];
DECL|RESERVED8|member|__IM uint32_t RESERVED8[47];
DECL|RESERVED8|member|__IM uint32_t RESERVED8[63];
DECL|RESERVED8|member|__IM uint32_t RESERVED8[63];
DECL|RESERVED8|member|__IM uint32_t RESERVED8[63];
DECL|RESERVED8|member|__IM uint32_t RESERVED8[64];
DECL|RESERVED9|member|__IM uint32_t RESERVED9;
DECL|RESERVED9|member|__IM uint32_t RESERVED9[110];
DECL|RESERVED9|member|__IM uint32_t RESERVED9[113];
DECL|RESERVED9|member|__IM uint32_t RESERVED9[125];
DECL|RESERVED9|member|__IM uint32_t RESERVED9[225];
DECL|RESERVED9|member|__IM uint32_t RESERVED9[2];
DECL|RESERVED9|member|__IM uint32_t RESERVED9[93];
DECL|RESERVED|member|__IM uint32_t RESERVED;
DECL|RESERVED|member|__IM uint32_t RESERVED;
DECL|RESERVED|member|__IM uint32_t RESERVED;
DECL|RESERVED|member|__IM uint32_t RESERVED;
DECL|RESERVED|member|__IM uint32_t RESERVED;
DECL|RESERVED|member|__IM uint32_t RESERVED[11];
DECL|RESERVED|member|__IM uint32_t RESERVED[256];
DECL|RESERVED|member|__IM uint32_t RESERVED[308];
DECL|RESERVED|member|__IM uint32_t RESERVED[30];
DECL|RESERVED|member|__IM uint32_t RESERVED[321];
DECL|RESERVED|member|__IM uint32_t RESERVED[384];
DECL|RESERVED|member|__IM uint32_t RESERVED[48];
DECL|RESERVED|member|__IM uint32_t RESERVED[4];
DECL|RESERVED|member|__IM uint32_t RESERVED[4];
DECL|RESERVED|member|__IM uint32_t RESERVED[4];
DECL|RESERVED|member|__IM uint32_t RESERVED[4];
DECL|RESERVED|member|__IM uint32_t RESERVED[55];
DECL|RESERVED|member|__IM uint32_t RESERVED[57];
DECL|RESERVED|member|__IM uint32_t RESERVED[59];
DECL|RESERVED|member|__IM uint32_t RESERVED[5];
DECL|RESERVED|member|__IM uint32_t RESERVED[60];
DECL|RESERVED|member|__IM uint32_t RESERVED[60];
DECL|RESERVED|member|__IM uint32_t RESERVED[60];
DECL|RESERVED|member|__IM uint32_t RESERVED[61];
DECL|RESERVED|member|__IM uint32_t RESERVED[62];
DECL|RESERVED|member|__IM uint32_t RESERVED[62];
DECL|RESERVED|member|__IM uint32_t RESERVED[62];
DECL|RESERVED|member|__IM uint32_t RESERVED[62];
DECL|RESERVED|member|__IM uint32_t RESERVED[63];
DECL|RESERVED|member|__IM uint32_t RESERVED[7];
DECL|RESERVED|member|__IM uint32_t RESERVED[9];
DECL|RESETREAS|member|__IOM uint32_t RESETREAS; /*!< (@ 0x00000400) Reset reason */
DECL|RESOLUTION|member|__IOM uint32_t RESOLUTION; /*!< (@ 0x000005F0) Resolution configuration */
DECL|RESULT|member|__IM uint32_t RESULT; /*!< (@ 0x00000400) Compare result */
DECL|RESULT|member|__IOM SAADC_RESULT_Type RESULT; /*!< (@ 0x0000062C) RESULT EasyDMA channel */
DECL|RNG_IRQn|enumerator|RNG_IRQn = 13, /*!< 13 RNG */
DECL|RREN|member|__IOM uint32_t RREN; /*!< (@ 0x00000508) Enable register for reload request registers */
DECL|RR|member|__OM uint32_t RR[8]; /*!< (@ 0x00000600) Description collection[n]: Reload request n */
DECL|RSSISAMPLE|member|__IM uint32_t RSSISAMPLE; /*!< (@ 0x00000548) RSSI sample */
DECL|RTC0_IRQn|enumerator|RTC0_IRQn = 11, /*!< 11 RTC0 */
DECL|RTC1_IRQn|enumerator|RTC1_IRQn = 17, /*!< 17 RTC1 */
DECL|RTS|member|__IOM uint32_t RTS; /*!< (@ 0x00000000) Pin select for RTS signal */
DECL|RUNSTATUS|member|__IM uint32_t RUNSTATUS; /*!< (@ 0x00000400) Run status */
DECL|RXADDRESSES|member|__IOM uint32_t RXADDRESSES; /*!< (@ 0x00000530) Receive address select */
DECL|RXCRC|member|__IM uint32_t RXCRC; /*!< (@ 0x0000040C) CRC field of previously received packet */
DECL|RXD|member|__IOM SPIM_RXD_Type RXD; /*!< (@ 0x00000534) RXD EasyDMA channel */
DECL|RXD|member|__IOM SPIS_RXD_Type RXD; /*!< (@ 0x00000534) Unspecified */
DECL|RXD|member|__IOM TWIM_RXD_Type RXD; /*!< (@ 0x00000534) RXD EasyDMA channel */
DECL|RXD|member|__IOM TWIS_RXD_Type RXD; /*!< (@ 0x00000534) RXD EasyDMA channel */
DECL|RXD|member|__IOM UARTE_RXD_Type RXD; /*!< (@ 0x00000534) RXD EasyDMA channel */
DECL|RXD|member|__IOM uint32_t RXD; /*!< (@ 0x0000000C) Pin select for RXD signal */
DECL|RXMATCH|member|__IM uint32_t RXMATCH; /*!< (@ 0x00000408) Received address */
DECL|Reset_IRQn|enumerator|Reset_IRQn = -15, /*!< -15 Reset Vector, invoked on Power up and warm reset */
DECL|SAADC_CH_Type|typedef|} SAADC_CH_Type; /*!< Size = 16 (0x10) */
DECL|SAADC_EVENTS_CH_Type|typedef|} SAADC_EVENTS_CH_Type; /*!< Size = 8 (0x8) */
DECL|SAADC_IRQn|enumerator|SAADC_IRQn = 7, /*!< 7 SAADC */
DECL|SAADC_RESULT_Type|typedef|} SAADC_RESULT_Type; /*!< Size = 12 (0xc) */
DECL|SAMPLEPER|member|__IOM uint32_t SAMPLEPER; /*!< (@ 0x00000508) Sample period */
DECL|SAMPLERATE|member|__IOM uint32_t SAMPLERATE; /*!< (@ 0x000005F8) Controls normal or continuous sample rate */
DECL|SAMPLE|member|__IM int32_t SAMPLE; /*!< (@ 0x0000050C) Motion sample value */
DECL|SAMPLE|member|__IOM PDM_SAMPLE_Type SAMPLE; /*!< (@ 0x00000560) Unspecified */
DECL|SCK|member|__IOM uint32_t SCK; /*!< (@ 0x00000000) Pin select for SCK */
DECL|SCK|member|__IOM uint32_t SCK; /*!< (@ 0x00000000) Pin select for SCK */
DECL|SCL|member|__IOM uint32_t SCL; /*!< (@ 0x00000000) Pin select for SCL signal */
DECL|SCL|member|__IOM uint32_t SCL; /*!< (@ 0x00000000) Pin select for SCL signal */
DECL|SCRATCHPTR|member|__IOM uint32_t SCRATCHPTR; /*!< (@ 0x00000514) Pointer to data area used for temporary storage */
DECL|SCRATCHPTR|member|__IOM uint32_t SCRATCHPTR; /*!< (@ 0x00000514) Pointer to data area used for temporary storage */
DECL|SDA|member|__IOM uint32_t SDA; /*!< (@ 0x00000004) Pin select for SDA signal */
DECL|SDA|member|__IOM uint32_t SDA; /*!< (@ 0x00000004) Pin select for SDA signal */
DECL|SEMSTAT|member|__IM uint32_t SEMSTAT; /*!< (@ 0x00000400) Semaphore status register */
DECL|SEQ|member|__IOM PWM_SEQ_Type SEQ[2]; /*!< (@ 0x00000520) Unspecified */
DECL|SHORTS|member|__IOM uint32_t SHORTS; /*!< (@ 0x00000200) Shortcut register */
DECL|SHORTS|member|__IOM uint32_t SHORTS; /*!< (@ 0x00000200) Shortcut register */
DECL|SHORTS|member|__IOM uint32_t SHORTS; /*!< (@ 0x00000200) Shortcut register */
DECL|SHORTS|member|__IOM uint32_t SHORTS; /*!< (@ 0x00000200) Shortcut register */
DECL|SHORTS|member|__IOM uint32_t SHORTS; /*!< (@ 0x00000200) Shortcut register */
DECL|SHORTS|member|__IOM uint32_t SHORTS; /*!< (@ 0x00000200) Shortcut register */
DECL|SHORTS|member|__IOM uint32_t SHORTS; /*!< (@ 0x00000200) Shortcut register */
DECL|SHORTS|member|__IOM uint32_t SHORTS; /*!< (@ 0x00000200) Shortcut register */
DECL|SHORTS|member|__IOM uint32_t SHORTS; /*!< (@ 0x00000200) Shortcut register */
DECL|SHORTS|member|__IOM uint32_t SHORTS; /*!< (@ 0x00000200) Shortcut register */
DECL|SHORTS|member|__IOM uint32_t SHORTS; /*!< (@ 0x00000200) Shortcut register */
DECL|SHORTS|member|__IOM uint32_t SHORTS; /*!< (@ 0x00000200) Shortcut register */
DECL|SPIM0_SPIS0_IRQn|enumerator|SPIM0_SPIS0_IRQn = 4, /*!< 4 SPIM0_SPIS0 */
DECL|SPIM_PSEL_Type|typedef|} SPIM_PSEL_Type; /*!< Size = 12 (0xc) */
DECL|SPIM_RXD_Type|typedef|} SPIM_RXD_Type; /*!< Size = 16 (0x10) */
DECL|SPIM_TXD_Type|typedef|} SPIM_TXD_Type; /*!< Size = 16 (0x10) */
DECL|SPIS_PSEL_Type|typedef|} SPIS_PSEL_Type; /*!< Size = 16 (0x10) */
DECL|SPIS_RXD_Type|typedef|} SPIS_RXD_Type; /*!< Size = 12 (0xc) */
DECL|SPIS_TXD_Type|typedef|} SPIS_TXD_Type; /*!< Size = 12 (0xc) */
DECL|STATE|member|__IM uint32_t STATE; /*!< (@ 0x00000550) Current radio state */
DECL|STATUS|member|__IM uint32_t STATUS; /*!< (@ 0x00000400) Resolution status */
DECL|STATUS|member|__IM uint32_t STATUS; /*!< (@ 0x00000400) Status */
DECL|STATUS|member|__IOM uint32_t STATUS; /*!< (@ 0x00000440) Status from last transaction */
DECL|SVCall_IRQn|enumerator|SVCall_IRQn = -5, /*!< -5 System Service Call via SVC instruction */
DECL|SWI0_EGU0_IRQn|enumerator|SWI0_EGU0_IRQn = 20, /*!< 20 SWI0_EGU0 */
DECL|SWI1_EGU1_IRQn|enumerator|SWI1_EGU1_IRQn = 21, /*!< 21 SWI1_EGU1 */
DECL|SWI2_IRQn|enumerator|SWI2_IRQn = 22, /*!< 22 SWI2 */
DECL|SWI3_IRQn|enumerator|SWI3_IRQn = 23, /*!< 23 SWI3 */
DECL|SWI4_IRQn|enumerator|SWI4_IRQn = 24, /*!< 24 SWI4 */
DECL|SWI5_IRQn|enumerator|SWI5_IRQn = 25, /*!< 25 SWI5 */
DECL|SYSTEMOFF|member|__OM uint32_t SYSTEMOFF; /*!< (@ 0x00000500) System OFF register */
DECL|SysTick_IRQn|enumerator|SysTick_IRQn = -1, /*!< -1 System Tick Timer */
DECL|T0|member|__IM uint32_t T0; /*!< (@ 0x00000030) Segment end T0 */
DECL|T0|member|__IOM uint32_t T0; /*!< (@ 0x00000560) End point of 1st piece wise linear function */
DECL|T1|member|__IM uint32_t T1; /*!< (@ 0x00000034) Segment end T1 */
DECL|T1|member|__IOM uint32_t T1; /*!< (@ 0x00000564) End point of 2nd piece wise linear function */
DECL|T2|member|__IM uint32_t T2; /*!< (@ 0x00000038) Segment end T2 */
DECL|T2|member|__IOM uint32_t T2; /*!< (@ 0x00000568) End point of 3rd piece wise linear function */
DECL|T3|member|__IM uint32_t T3; /*!< (@ 0x0000003C) Segment end T3 */
DECL|T3|member|__IOM uint32_t T3; /*!< (@ 0x0000056C) End point of 4th piece wise linear function */
DECL|T4|member|__IM uint32_t T4; /*!< (@ 0x00000040) Segment end T4 */
DECL|T4|member|__IOM uint32_t T4; /*!< (@ 0x00000570) End point of 5th piece wise linear function */
DECL|TASKS_ACQUIRE|member|__OM uint32_t TASKS_ACQUIRE; /*!< (@ 0x00000024) Acquire SPI semaphore */
DECL|TASKS_BCSTART|member|__OM uint32_t TASKS_BCSTART; /*!< (@ 0x0000001C) Start the bit counter */
DECL|TASKS_BCSTOP|member|__OM uint32_t TASKS_BCSTOP; /*!< (@ 0x00000020) Stop the bit counter */
DECL|TASKS_CALIBRATEOFFSET|member|__OM uint32_t TASKS_CALIBRATEOFFSET; /*!< (@ 0x0000000C) Starts offset auto-calibration */
DECL|TASKS_CAL|member|__OM uint32_t TASKS_CAL; /*!< (@ 0x00000010) Start calibration of LFRC oscillator */
DECL|TASKS_CAPTURE|member|__OM uint32_t TASKS_CAPTURE[6]; /*!< (@ 0x00000040) Description collection[n]: Capture Timer value
DECL|TASKS_CHG|member|__IOM PPI_TASKS_CHG_Type TASKS_CHG[6]; /*!< (@ 0x00000000) Channel group tasks */
DECL|TASKS_CLEAR|member|__OM uint32_t TASKS_CLEAR; /*!< (@ 0x00000008) Clear RTC COUNTER */
DECL|TASKS_CLEAR|member|__OM uint32_t TASKS_CLEAR; /*!< (@ 0x0000000C) Clear time */
DECL|TASKS_CLR|member|__OM uint32_t TASKS_CLR[8]; /*!< (@ 0x00000060) Description collection[n]: Task for writing to
DECL|TASKS_CONSTLAT|member|__OM uint32_t TASKS_CONSTLAT; /*!< (@ 0x00000078) Enable constant latency mode */
DECL|TASKS_COUNT|member|__OM uint32_t TASKS_COUNT; /*!< (@ 0x00000008) Increment Timer (Counter mode only) */
DECL|TASKS_CRYPT|member|__OM uint32_t TASKS_CRYPT; /*!< (@ 0x00000004) Start encryption/decryption. This operation will
DECL|TASKS_CTSTART|member|__OM uint32_t TASKS_CTSTART; /*!< (@ 0x00000014) Start calibration timer */
DECL|TASKS_CTSTOP|member|__OM uint32_t TASKS_CTSTOP; /*!< (@ 0x00000018) Stop calibration timer */
DECL|TASKS_DISABLE|member|__OM uint32_t TASKS_DISABLE; /*!< (@ 0x00000010) Disable RADIO */
DECL|TASKS_FLUSHRX|member|__OM uint32_t TASKS_FLUSHRX; /*!< (@ 0x0000002C) Flush RX FIFO into RX buffer */
DECL|TASKS_HFCLKSTART|member|__OM uint32_t TASKS_HFCLKSTART; /*!< (@ 0x00000000) Start HFCLK crystal oscillator */
DECL|TASKS_HFCLKSTOP|member|__OM uint32_t TASKS_HFCLKSTOP; /*!< (@ 0x00000004) Stop HFCLK crystal oscillator */
DECL|TASKS_KSGEN|member|__OM uint32_t TASKS_KSGEN; /*!< (@ 0x00000000) Start generation of key-stream. This operation
DECL|TASKS_LFCLKSTART|member|__OM uint32_t TASKS_LFCLKSTART; /*!< (@ 0x00000008) Start LFCLK source */
DECL|TASKS_LFCLKSTOP|member|__OM uint32_t TASKS_LFCLKSTOP; /*!< (@ 0x0000000C) Stop LFCLK source */
DECL|TASKS_LOWPWR|member|__OM uint32_t TASKS_LOWPWR; /*!< (@ 0x0000007C) Enable low power mode (variable latency) */
DECL|TASKS_NEXTSTEP|member|__OM uint32_t TASKS_NEXTSTEP; /*!< (@ 0x00000010) Steps by one value in the current sequence on
DECL|TASKS_OUT|member|__OM uint32_t TASKS_OUT[8]; /*!< (@ 0x00000000) Description collection[n]: Task for writing to
DECL|TASKS_PREPARERX|member|__OM uint32_t TASKS_PREPARERX; /*!< (@ 0x00000030) Prepare the TWI slave to respond to a write command */
DECL|TASKS_PREPARETX|member|__OM uint32_t TASKS_PREPARETX; /*!< (@ 0x00000034) Prepare the TWI slave to respond to a read command */
DECL|TASKS_RATEOVERRIDE|member|__OM uint32_t TASKS_RATEOVERRIDE; /*!< (@ 0x0000000C) Override DATARATE setting in MODE register with
DECL|TASKS_RDCLRACC|member|__OM uint32_t TASKS_RDCLRACC; /*!< (@ 0x0000000C) Read and clear ACC */
DECL|TASKS_RDCLRDBL|member|__OM uint32_t TASKS_RDCLRDBL; /*!< (@ 0x00000010) Read and clear ACCDBL */
DECL|TASKS_READCLRACC|member|__OM uint32_t TASKS_READCLRACC; /*!< (@ 0x00000008) Read and clear ACC and ACCDBL */
DECL|TASKS_RELEASE|member|__OM uint32_t TASKS_RELEASE; /*!< (@ 0x00000028) Release SPI semaphore, enabling the SPI slave
DECL|TASKS_RESUME|member|__OM uint32_t TASKS_RESUME; /*!< (@ 0x00000020) Resume SPI transaction */
DECL|TASKS_RESUME|member|__OM uint32_t TASKS_RESUME; /*!< (@ 0x00000020) Resume TWI transaction */
DECL|TASKS_RESUME|member|__OM uint32_t TASKS_RESUME; /*!< (@ 0x00000020) Resume TWI transaction */
DECL|TASKS_RSSISTART|member|__OM uint32_t TASKS_RSSISTART; /*!< (@ 0x00000014) Start the RSSI and take one single sample of
DECL|TASKS_RSSISTOP|member|__OM uint32_t TASKS_RSSISTOP; /*!< (@ 0x00000018) Stop the RSSI measurement */
DECL|TASKS_RXEN|member|__OM uint32_t TASKS_RXEN; /*!< (@ 0x00000004) Enable RADIO in RX mode */
DECL|TASKS_SAMPLE|member|__OM uint32_t TASKS_SAMPLE; /*!< (@ 0x00000004) Take one ADC sample, if scan is enabled all channels
DECL|TASKS_SAMPLE|member|__OM uint32_t TASKS_SAMPLE; /*!< (@ 0x00000008) Sample comparator value */
DECL|TASKS_SEQSTART|member|__OM uint32_t TASKS_SEQSTART[2]; /*!< (@ 0x00000008) Description collection[n]: Loads the first PWM
DECL|TASKS_SET|member|__OM uint32_t TASKS_SET[8]; /*!< (@ 0x00000030) Description collection[n]: Task for writing to
DECL|TASKS_SHUTDOWN|member|__OM uint32_t TASKS_SHUTDOWN; /*!< (@ 0x00000010) Deprecated register - Shut down timer */
DECL|TASKS_STARTECB|member|__OM uint32_t TASKS_STARTECB; /*!< (@ 0x00000000) Start ECB block encrypt */
DECL|TASKS_STARTRX|member|__OM uint32_t TASKS_STARTRX; /*!< (@ 0x00000000) Start TWI receive sequence */
DECL|TASKS_STARTRX|member|__OM uint32_t TASKS_STARTRX; /*!< (@ 0x00000000) Start UART receiver */
DECL|TASKS_STARTTX|member|__OM uint32_t TASKS_STARTTX; /*!< (@ 0x00000008) Start TWI transmit sequence */
DECL|TASKS_STARTTX|member|__OM uint32_t TASKS_STARTTX; /*!< (@ 0x00000008) Start UART transmitter */
DECL|TASKS_START|member|__OM uint32_t TASKS_START; /*!< (@ 0x00000000) Start RTC COUNTER */
DECL|TASKS_START|member|__OM uint32_t TASKS_START; /*!< (@ 0x00000000) Start Timer */
DECL|TASKS_START|member|__OM uint32_t TASKS_START; /*!< (@ 0x00000000) Start comparator */
DECL|TASKS_START|member|__OM uint32_t TASKS_START; /*!< (@ 0x00000000) Start resolving addresses based on IRKs specified
DECL|TASKS_START|member|__OM uint32_t TASKS_START; /*!< (@ 0x00000000) Start temperature measurement */
DECL|TASKS_START|member|__OM uint32_t TASKS_START; /*!< (@ 0x00000000) Start the ADC and prepare the result buffer in
DECL|TASKS_START|member|__OM uint32_t TASKS_START; /*!< (@ 0x00000000) Start the watchdog */
DECL|TASKS_START|member|__OM uint32_t TASKS_START; /*!< (@ 0x00000000) Starts continuous PDM transfer */
DECL|TASKS_START|member|__OM uint32_t TASKS_START; /*!< (@ 0x00000000) Task starting the quadrature decoder */
DECL|TASKS_START|member|__OM uint32_t TASKS_START; /*!< (@ 0x00000000) Task starting the random number generator */
DECL|TASKS_START|member|__OM uint32_t TASKS_START; /*!< (@ 0x00000008) Start RADIO */
DECL|TASKS_START|member|__OM uint32_t TASKS_START; /*!< (@ 0x00000010) Start SPI transaction */
DECL|TASKS_STOPECB|member|__OM uint32_t TASKS_STOPECB; /*!< (@ 0x00000004) Abort a possible executing ECB operation */
DECL|TASKS_STOPRX|member|__OM uint32_t TASKS_STOPRX; /*!< (@ 0x00000004) Stop UART receiver */
DECL|TASKS_STOPTX|member|__OM uint32_t TASKS_STOPTX; /*!< (@ 0x0000000C) Stop UART transmitter */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000004) Stop RTC COUNTER */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000004) Stop Timer */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000004) Stop comparator */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000004) Stop temperature measurement */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000004) Stops PDM transfer */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000004) Stops PWM pulse generation on all channels at
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000004) Task stopping the quadrature decoder */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000004) Task stopping the random number generator */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000008) Stop encryption/decryption */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000008) Stop resolving addresses */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000008) Stop the ADC and terminate any on-going conversion */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x0000000C) Stop RADIO */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000014) Stop SPI transaction */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000014) Stop TWI transaction */
DECL|TASKS_STOP|member|__OM uint32_t TASKS_STOP; /*!< (@ 0x00000014) Stop TWI transaction. Must be issued while the
DECL|TASKS_SUSPEND|member|__OM uint32_t TASKS_SUSPEND; /*!< (@ 0x0000001C) Suspend SPI transaction */
DECL|TASKS_SUSPEND|member|__OM uint32_t TASKS_SUSPEND; /*!< (@ 0x0000001C) Suspend TWI transaction */
DECL|TASKS_SUSPEND|member|__OM uint32_t TASKS_SUSPEND; /*!< (@ 0x0000001C) Suspend TWI transaction */
DECL|TASKS_TRIGGER|member|__OM uint32_t TASKS_TRIGGER[16]; /*!< (@ 0x00000000) Description collection[n]: Trigger n for triggering
DECL|TASKS_TRIGOVRFLW|member|__OM uint32_t TASKS_TRIGOVRFLW; /*!< (@ 0x0000000C) Set COUNTER to 0xFFFFF0 */
DECL|TASKS_TXEN|member|__OM uint32_t TASKS_TXEN; /*!< (@ 0x00000000) Enable RADIO in TX mode */
DECL|TEMP_IRQn|enumerator|TEMP_IRQn = 12, /*!< 12 TEMP */
DECL|TEMP|member|__IM int32_t TEMP; /*!< (@ 0x00000508) Temperature in degC (0.25deg steps) */
DECL|TEMP|member|__IOM FICR_TEMP_Type TEMP; /*!< (@ 0x00000404) Registers storing factory TEMP module linearization
DECL|TEP|member|__IOM uint32_t TEP; /*!< (@ 0x00000000) Description cluster[n]: Channel n task end-point */
DECL|TEP|member|__IOM uint32_t TEP; /*!< (@ 0x00000004) Description cluster[n]: Channel n task end-point */
DECL|TH|member|__IOM uint32_t TH; /*!< (@ 0x00000530) Threshold configuration for hysteresis unit */
DECL|TIFS|member|__IOM uint32_t TIFS; /*!< (@ 0x00000544) Inter Frame Spacing in us */
DECL|TIMER0_IRQn|enumerator|TIMER0_IRQn = 8, /*!< 8 TIMER0 */
DECL|TIMER1_IRQn|enumerator|TIMER1_IRQn = 9, /*!< 9 TIMER1 */
DECL|TIMER2_IRQn|enumerator|TIMER2_IRQn = 10, /*!< 10 TIMER2 */
DECL|TWIM0_TWIS0_IRQn|enumerator|TWIM0_TWIS0_IRQn = 3, /*!< 3 TWIM0_TWIS0 */
DECL|TWIM_PSEL_Type|typedef|} TWIM_PSEL_Type; /*!< Size = 8 (0x8) */
DECL|TWIM_RXD_Type|typedef|} TWIM_RXD_Type; /*!< Size = 16 (0x10) */
DECL|TWIM_TXD_Type|typedef|} TWIM_TXD_Type; /*!< Size = 16 (0x10) */
DECL|TWIS_PSEL_Type|typedef|} TWIS_PSEL_Type; /*!< Size = 8 (0x8) */
DECL|TWIS_RXD_Type|typedef|} TWIS_RXD_Type; /*!< Size = 12 (0xc) */
DECL|TWIS_TXD_Type|typedef|} TWIS_TXD_Type; /*!< Size = 12 (0xc) */
DECL|TXADDRESS|member|__IOM uint32_t TXADDRESS; /*!< (@ 0x0000052C) Transmit address select */
DECL|TXD|member|__IOM SPIM_TXD_Type TXD; /*!< (@ 0x00000544) TXD EasyDMA channel */
DECL|TXD|member|__IOM SPIS_TXD_Type TXD; /*!< (@ 0x00000544) Unspecified */
DECL|TXD|member|__IOM TWIM_TXD_Type TXD; /*!< (@ 0x00000544) TXD EasyDMA channel */
DECL|TXD|member|__IOM TWIS_TXD_Type TXD; /*!< (@ 0x00000544) TXD EasyDMA channel */
DECL|TXD|member|__IOM UARTE_TXD_Type TXD; /*!< (@ 0x00000544) TXD EasyDMA channel */
DECL|TXD|member|__IOM uint32_t TXD; /*!< (@ 0x00000004) Pin select for TXD signal */
DECL|TXPOWER|member|__IOM uint32_t TXPOWER; /*!< (@ 0x0000050C) Output power */
DECL|UARTE0_IRQn|enumerator|UARTE0_IRQn = 2, /*!< 2 UARTE0 */
DECL|UARTE_PSEL_Type|typedef|} UARTE_PSEL_Type; /*!< Size = 16 (0x10) */
DECL|UARTE_RXD_Type|typedef|} UARTE_RXD_Type; /*!< Size = 12 (0xc) */
DECL|UARTE_TXD_Type|typedef|} UARTE_TXD_Type; /*!< Size = 12 (0xc) */
DECL|UNUSED0|member|__IOM uint32_t UNUSED0; /*!< (@ 0x00000000) Unspecified */
DECL|UNUSED0|member|__IOM uint32_t UNUSED0; /*!< (@ 0x00000540) Unspecified */
DECL|UNUSED0|member|__IOM uint32_t UNUSED0; /*!< (@ 0x0000060C) Unspecified */
DECL|UNUSED1|member|__IOM uint32_t UNUSED1; /*!< (@ 0x00000004) Unspecified */
DECL|UNUSED2|member|__IOM uint32_t UNUSED2; /*!< (@ 0x00000008) Unspecified */
DECL|UNUSED3|member|__IOM uint32_t UNUSED3; /*!< (@ 0x00000010) Unspecified */
DECL|UNUSED8|member|__IOM uint32_t UNUSED8[3]; /*!< (@ 0x00000014) Unspecified */
DECL|UNUSED|member|__IM uint32_t UNUSED; /*!< (@ 0x00000000) Unused. */
DECL|UsageFault_IRQn|enumerator|UsageFault_IRQn = -10, /*!< -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
DECL|VALUE|member|__IM uint32_t VALUE; /*!< (@ 0x00000508) Output random number */
DECL|VARIANT|member|__IM uint32_t VARIANT; /*!< (@ 0x00000004) Part variant, hardware version and production
DECL|WDT_IRQn|enumerator|WDT_IRQn = 16, /*!< 16 WDT */
DECL|__CM4_REV|macro|__CM4_REV
DECL|__FPU_PRESENT|macro|__FPU_PRESENT
DECL|__IM|macro|__IM
DECL|__IOM|macro|__IOM
DECL|__MPU_PRESENT|macro|__MPU_PRESENT
DECL|__NVIC_PRIO_BITS|macro|__NVIC_PRIO_BITS
DECL|__OM|macro|__OM
DECL|__Vendor_SysTickConfig|macro|__Vendor_SysTickConfig
