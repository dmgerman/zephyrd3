DECL|A0|member|__I uint32_t A0; /*!< Slope definition A0 */
DECL|A0|member|__IO uint32_t A0; /*!< Slope of 1st piece wise linear function */
DECL|A1|member|__I uint32_t A1; /*!< Slope definition A1 */
DECL|A1|member|__IO uint32_t A1; /*!< Slope of 2nd piece wise linear function */
DECL|A2|member|__I uint32_t A2; /*!< Slope definition A2 */
DECL|A2|member|__IO uint32_t A2; /*!< Slope of 3rd piece wise linear function */
DECL|A3|member|__I uint32_t A3; /*!< Slope definition A3 */
DECL|A3|member|__IO uint32_t A3; /*!< Slope of 4th piece wise linear function */
DECL|A4|member|__I uint32_t A4; /*!< Slope definition A4 */
DECL|A4|member|__IO uint32_t A4; /*!< Slope of 5th piece wise linear function */
DECL|A5|member|__I uint32_t A5; /*!< Slope definition A5 */
DECL|A5|member|__IO uint32_t A5; /*!< Slope of 6th piece wise linear function */
DECL|ACCDBLREAD|member|__I uint32_t ACCDBLREAD; /*!< Snapshot of the ACCDBL, updated by the READCLRACC or RDCLRDBL
DECL|ACCDBL|member|__I uint32_t ACCDBL; /*!< Register accumulating the number of detected double transitions */
DECL|ACCREAD|member|__I int32_t ACCREAD; /*!< Snapshot of the ACC register, updated by the READCLRACC or RDCLRACC
DECL|ACC|member|__I int32_t ACC; /*!< Register accumulating the valid transitions */
DECL|ADDRESS|member|__IO uint32_t ADDRESS; /*!< Address used in the TWI transfer */
DECL|ADDRESS|member|__IO uint32_t ADDRESS[2]; /*!< Description collection[0]: TWI slave address 0 */
DECL|ADDRPTR|member|__IO uint32_t ADDRPTR; /*!< Pointer to the resolvable address */
DECL|AMOUNT|member|__I uint32_t AMOUNT; /*!< Number of buffer words transferred since last START */
DECL|AMOUNT|member|__I uint32_t AMOUNT; /*!< Number of bytes received in last granted transaction */
DECL|AMOUNT|member|__I uint32_t AMOUNT; /*!< Number of bytes transferred in the last RXD transaction */
DECL|AMOUNT|member|__I uint32_t AMOUNT; /*!< Number of bytes transferred in the last TXD transaction */
DECL|AMOUNT|member|__I uint32_t AMOUNT; /*!< Number of bytes transferred in the last transaction */
DECL|AMOUNT|member|__I uint32_t AMOUNT; /*!< Number of bytes transferred in the last transaction */
DECL|AMOUNT|member|__I uint32_t AMOUNT; /*!< Number of bytes transferred in the last transaction */
DECL|AMOUNT|member|__I uint32_t AMOUNT; /*!< Number of bytes transferred in the last transaction */
DECL|AMOUNT|member|__I uint32_t AMOUNT; /*!< Number of bytes transferred in the last transaction */
DECL|AMOUNT|member|__I uint32_t AMOUNT; /*!< Number of bytes transferred in the last transaction */
DECL|AMOUNT|member|__I uint32_t AMOUNT; /*!< Number of bytes transmitted in last granted transaction */
DECL|APPROTECT|member|__IO uint32_t APPROTECT; /*!< Access port protection */
DECL|A|member|__IO uint32_t A; /*!< Pin select for A signal */
DECL|B0|member|__I uint32_t B0; /*!< Y-intercept B0 */
DECL|B0|member|__IO uint32_t B0; /*!< y-intercept of 1st piece wise linear function */
DECL|B1|member|__I uint32_t B1; /*!< Y-intercept B1 */
DECL|B1|member|__IO uint32_t B1; /*!< y-intercept of 2nd piece wise linear function */
DECL|B2|member|__I uint32_t B2; /*!< Y-intercept B2 */
DECL|B2|member|__IO uint32_t B2; /*!< y-intercept of 3rd piece wise linear function */
DECL|B3|member|__I uint32_t B3; /*!< Y-intercept B3 */
DECL|B3|member|__IO uint32_t B3; /*!< y-intercept of 4th piece wise linear function */
DECL|B4|member|__I uint32_t B4; /*!< Y-intercept B4 */
DECL|B4|member|__IO uint32_t B4; /*!< y-intercept of 5th piece wise linear function */
DECL|B5|member|__I uint32_t B5; /*!< Y-intercept B5 */
DECL|B5|member|__IO uint32_t B5; /*!< y-intercept of 6th piece wise linear function */
DECL|BASE0|member|__IO uint32_t BASE0; /*!< Base address 0 */
DECL|BASE1|member|__IO uint32_t BASE1; /*!< Base address 1 */
DECL|BAUDRATE|member|__IO uint32_t BAUDRATE; /*!< Baud rate. Accuracy depends on the HFCLK source selected. */
DECL|BCC|member|__IO uint32_t BCC; /*!< Bit counter compare */
DECL|BITMODE|member|__IO uint32_t BITMODE; /*!< Configure the number of bits used by the TIMER */
DECL|BusFault_IRQn|enumerator|BusFault_IRQn = -11, /*!< 5 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory
DECL|B|member|__IO uint32_t B; /*!< Pin select for B signal */
DECL|CCM_AAR_IRQn|enumerator|CCM_AAR_IRQn = 15, /*!< 15 CCM_AAR */
DECL|CC|member|__IO uint32_t CC[4]; /*!< Description collection[0]: Compare register 0 */
DECL|CC|member|__IO uint32_t CC[6]; /*!< Description collection[0]: Capture/Compare register 0 */
DECL|CHENCLR|member|__IO uint32_t CHENCLR; /*!< Channel enable clear register */
DECL|CHENSET|member|__IO uint32_t CHENSET; /*!< Channel enable set register */
DECL|CHEN|member|__IO uint32_t CHEN; /*!< Channel enable register */
DECL|CHG|member|__IO uint32_t CHG[6]; /*!< Description collection[0]: Channel group 0 */
DECL|CH|member|PPI_CH_Type CH[20]; /*!< PPI Channel */
DECL|CH|member|SAADC_CH_Type CH[8]; /*!< Unspecified */
DECL|CLK|member|__IO uint32_t CLK; /*!< Pin number configuration for PDM CLK signal */
DECL|CNFPTR|member|__IO uint32_t CNFPTR; /*!< Pointer to data structure holding AES key and NONCE vector */
DECL|CNT|member|__IO uint32_t CNT; /*!< Description cluster[0]: Amount of values (duty cycles) in this
DECL|CODEPAGESIZE|member|__I uint32_t CODEPAGESIZE; /*!< Code memory page size */
DECL|CODESIZE|member|__I uint32_t CODESIZE; /*!< Code memory size */
DECL|COMP_IRQn|enumerator|COMP_IRQn = 19, /*!< 19 COMP */
DECL|CONFIG0|member|__IO uint32_t CONFIG0; /*!< Block protect configuration register 0 */
DECL|CONFIG1|member|__IO uint32_t CONFIG1; /*!< Block protect configuration register 1 */
DECL|CONFIG|member|__IO uint32_t CONFIG; /*!< Configuration of parity and hardware flow control */
DECL|CONFIG|member|__IO uint32_t CONFIG; /*!< Configuration register */
DECL|CONFIG|member|__IO uint32_t CONFIG; /*!< Configuration register */
DECL|CONFIG|member|__IO uint32_t CONFIG; /*!< Configuration register */
DECL|CONFIG|member|__IO uint32_t CONFIG; /*!< Configuration register */
DECL|CONFIG|member|__IO uint32_t CONFIG; /*!< Configuration register */
DECL|CONFIG|member|__IO uint32_t CONFIG; /*!< Configuration register for the address match mechanism */
DECL|CONFIG|member|__IO uint32_t CONFIG; /*!< Description cluster[0]: Input configuration for CH[0] */
DECL|CONFIG|member|__IO uint32_t CONFIG[8]; /*!< Description collection[0]: Configuration for OUT[n], SET[n]
DECL|COUNTERTOP|member|__IO uint32_t COUNTERTOP; /*!< Value up to which the pulse generator counter counts */
DECL|COUNTER|member|__I uint32_t COUNTER; /*!< Current COUNTER value */
DECL|CRCCNF|member|__IO uint32_t CRCCNF; /*!< CRC configuration */
DECL|CRCINIT|member|__IO uint32_t CRCINIT; /*!< CRC initial value */
DECL|CRCPOLY|member|__IO uint32_t CRCPOLY; /*!< CRC polynomial */
DECL|CRCSTATUS|member|__I uint32_t CRCSTATUS; /*!< CRC status */
DECL|CRV|member|__IO uint32_t CRV; /*!< Counter reload value */
DECL|CSN|member|__IO uint32_t CSN; /*!< Pin select for CSN signal */
DECL|CTIV|member|__IO uint32_t CTIV; /*!< Calibration timer interval */
DECL|CTS|member|__IO uint32_t CTS; /*!< Pin select for CTS signal */
DECL|CUSTOMER|member|__IO uint32_t CUSTOMER[32]; /*!< Description collection[0]: Reserved for customer */
DECL|DAB|member|__IO uint32_t DAB[8]; /*!< Description collection[0]: Device address base segment 0 */
DECL|DACNF|member|__IO uint32_t DACNF; /*!< Device address match configuration */
DECL|DAI|member|__I uint32_t DAI; /*!< Device address match index */
DECL|DAP|member|__IO uint32_t DAP[8]; /*!< Description collection[0]: Device address prefix 0 */
DECL|DATAWHITEIV|member|__IO uint32_t DATAWHITEIV; /*!< Data whitening initial value */
DECL|DBFEN|member|__IO uint32_t DBFEN; /*!< Enable input debounce filters */
DECL|DCDCEN|member|__IO uint32_t DCDCEN; /*!< DC/DC enable register */
DECL|DECODER|member|__IO uint32_t DECODER; /*!< Configuration of the decoder */
DECL|DEF|member|__IO uint32_t DEF; /*!< Default character. Character clocked out in case of an ignored
DECL|DETECTMODE|member|__IO uint32_t DETECTMODE; /*!< Select between default DETECT signal behaviour and LDETECT mode */
DECL|DEVICEADDRTYPE|member|__I uint32_t DEVICEADDRTYPE; /*!< Device address type */
DECL|DEVICEADDR|member|__I uint32_t DEVICEADDR[2]; /*!< Description collection[0]: Device address 0 */
DECL|DEVICEID|member|__I uint32_t DEVICEID[2]; /*!< Description collection[0]: Device identifier */
DECL|DIN|member|__IO uint32_t DIN; /*!< Pin number configuration for PDM DIN signal */
DECL|DIRCLR|member|__IO uint32_t DIRCLR; /*!< DIR clear register */
DECL|DIRSET|member|__IO uint32_t DIRSET; /*!< DIR set register */
DECL|DIR|member|__IO uint32_t DIR; /*!< Direction of GPIO pins */
DECL|DISABLEINDEBUG|member|__IO uint32_t DISABLEINDEBUG; /*!< Disable protection mechanism in debug mode */
DECL|DIS|member|__O uint32_t DIS; /*!< Description cluster[0]: Disable channel group 0 */
DECL|DebugMonitor_IRQn|enumerator|DebugMonitor_IRQn = -4, /*!< 12 Debug Monitor */
DECL|ECBDATAPTR|member|__IO uint32_t ECBDATAPTR; /*!< ECB block encrypt memory pointers */
DECL|ECB_IRQn|enumerator|ECB_IRQn = 14, /*!< 14 ECB */
DECL|EEP|member|__IO uint32_t EEP; /*!< Description cluster[0]: Channel 0 event end-point */
DECL|ENABLE|member|__IO uint32_t ENABLE; /*!< COMP enable */
DECL|ENABLE|member|__IO uint32_t ENABLE; /*!< Enable */
DECL|ENABLE|member|__IO uint32_t ENABLE; /*!< Enable AAR */
DECL|ENABLE|member|__IO uint32_t ENABLE; /*!< Enable SPI slave */
DECL|ENABLE|member|__IO uint32_t ENABLE; /*!< Enable SPIM */
DECL|ENABLE|member|__IO uint32_t ENABLE; /*!< Enable TWIM */
DECL|ENABLE|member|__IO uint32_t ENABLE; /*!< Enable TWIS */
DECL|ENABLE|member|__IO uint32_t ENABLE; /*!< Enable UART */
DECL|ENABLE|member|__IO uint32_t ENABLE; /*!< Enable or disable ADC */
DECL|ENABLE|member|__IO uint32_t ENABLE; /*!< Enable the quadrature decoder */
DECL|ENABLE|member|__IO uint32_t ENABLE; /*!< PDM module enable register */
DECL|ENABLE|member|__IO uint32_t ENABLE; /*!< PWM module enable register */
DECL|ENDDELAY|member|__IO uint32_t ENDDELAY; /*!< Description cluster[0]: Time added after the sequence */
DECL|EN|member|__O uint32_t EN; /*!< Description cluster[0]: Enable channel group 0 */
DECL|ERASEALL|member|__IO uint32_t ERASEALL; /*!< Register for erasing all non-volatile user memory */
DECL|ERASEPAGE|member|__IO uint32_t ERASEPAGE; /*!< Register for erasing a page in code area */
DECL|ERASEPCR0|member|__IO uint32_t ERASEPCR0; /*!< Deprecated register - Register for erasing a page in code area.
DECL|ERASEPCR1|member|__IO uint32_t ERASEPCR1; /*!< Deprecated register - Register for erasing a page in code area.
DECL|ERASEUICR|member|__IO uint32_t ERASEUICR; /*!< Register for erasing user information configuration registers */
DECL|ERRORSRC|member|__IO uint32_t ERRORSRC; /*!< Error source */
DECL|ERRORSRC|member|__IO uint32_t ERRORSRC; /*!< Error source */
DECL|ERRORSRC|member|__IO uint32_t ERRORSRC; /*!< Error source Note : this register is read / write one to clear. */
DECL|ER|member|__I uint32_t ER[4]; /*!< Description collection[0]: Encryption root, word 0 */
DECL|EVENTS_ACCOF|member|__IO uint32_t EVENTS_ACCOF; /*!< ACC or ACCDBL register overflow */
DECL|EVENTS_ACQUIRED|member|__IO uint32_t EVENTS_ACQUIRED; /*!< Semaphore acquired */
DECL|EVENTS_ADDRESS|member|__IO uint32_t EVENTS_ADDRESS; /*!< Address sent or received */
DECL|EVENTS_BCMATCH|member|__IO uint32_t EVENTS_BCMATCH; /*!< Bit counter reached bit count value. */
DECL|EVENTS_CALIBRATEDONE|member|__IO uint32_t EVENTS_CALIBRATEDONE; /*!< Calibration is complete */
DECL|EVENTS_CH|member|SAADC_EVENTS_CH_Type EVENTS_CH[8]; /*!< Unspecified */
DECL|EVENTS_COMPARE|member|__IO uint32_t EVENTS_COMPARE[4]; /*!< Description collection[0]: Compare event on CC[0] match */
DECL|EVENTS_COMPARE|member|__IO uint32_t EVENTS_COMPARE[6]; /*!< Description collection[0]: Compare event on CC[0] match */
DECL|EVENTS_CRCERROR|member|__IO uint32_t EVENTS_CRCERROR; /*!< Packet received with CRC error */
DECL|EVENTS_CRCOK|member|__IO uint32_t EVENTS_CRCOK; /*!< Packet received with CRC ok */
DECL|EVENTS_CROSS|member|__IO uint32_t EVENTS_CROSS; /*!< Downward or upward crossing */
DECL|EVENTS_CTS|member|__IO uint32_t EVENTS_CTS; /*!< CTS is activated (set low). Clear To Send. */
DECL|EVENTS_CTTO|member|__IO uint32_t EVENTS_CTTO; /*!< Calibration timer timeout */
DECL|EVENTS_DATARDY|member|__IO uint32_t EVENTS_DATARDY; /*!< Temperature measurement complete, data ready */
DECL|EVENTS_DBLRDY|member|__IO uint32_t EVENTS_DBLRDY; /*!< Double displacement(s) detected */
DECL|EVENTS_DEVMATCH|member|__IO uint32_t EVENTS_DEVMATCH; /*!< A device address match occurred on the last received packet */
DECL|EVENTS_DEVMISS|member|__IO uint32_t EVENTS_DEVMISS; /*!< No device address match occurred on the last received packet */
DECL|EVENTS_DISABLED|member|__IO uint32_t EVENTS_DISABLED; /*!< RADIO has been disabled */
DECL|EVENTS_DONE|member|__IO uint32_t EVENTS_DONE; /*!< A conversion task has been completed. Depending on the mode,
DECL|EVENTS_DONE|member|__IO uint32_t EVENTS_DONE; /*!< Calibration of LFCLK RC oscillator complete event */
DECL|EVENTS_DOWN|member|__IO uint32_t EVENTS_DOWN; /*!< Downward crossing */
DECL|EVENTS_ENDCRYPT|member|__IO uint32_t EVENTS_ENDCRYPT; /*!< Encrypt/decrypt complete */
DECL|EVENTS_ENDECB|member|__IO uint32_t EVENTS_ENDECB; /*!< ECB block encrypt complete */
DECL|EVENTS_ENDKSGEN|member|__IO uint32_t EVENTS_ENDKSGEN; /*!< Key-stream generation complete */
DECL|EVENTS_ENDRX|member|__IO uint32_t EVENTS_ENDRX; /*!< End of RXD buffer reached */
DECL|EVENTS_ENDRX|member|__IO uint32_t EVENTS_ENDRX; /*!< End of RXD buffer reached */
DECL|EVENTS_ENDRX|member|__IO uint32_t EVENTS_ENDRX; /*!< Receive buffer is filled up */
DECL|EVENTS_ENDTX|member|__IO uint32_t EVENTS_ENDTX; /*!< End of TXD buffer reached */
DECL|EVENTS_ENDTX|member|__IO uint32_t EVENTS_ENDTX; /*!< Last TX byte transmitted */
DECL|EVENTS_END|member|__IO uint32_t EVENTS_END; /*!< Address resolution procedure complete */
DECL|EVENTS_END|member|__IO uint32_t EVENTS_END; /*!< End of RXD buffer and TXD buffer reached */
DECL|EVENTS_END|member|__IO uint32_t EVENTS_END; /*!< Granted transaction completed */
DECL|EVENTS_END|member|__IO uint32_t EVENTS_END; /*!< Packet sent or received */
DECL|EVENTS_END|member|__IO uint32_t EVENTS_END; /*!< The ADC has filled up the Result buffer */
DECL|EVENTS_END|member|__IO uint32_t EVENTS_END; /*!< The PDM has written the last sample specified by SAMPLE.MAXCNT
DECL|EVENTS_ERRORECB|member|__IO uint32_t EVENTS_ERRORECB; /*!< ECB block encrypt aborted because of a STOPECB task or due to
DECL|EVENTS_ERROR|member|__IO uint32_t EVENTS_ERROR; /*!< Deprecated register - CCM error event */
DECL|EVENTS_ERROR|member|__IO uint32_t EVENTS_ERROR; /*!< Error detected */
DECL|EVENTS_ERROR|member|__IO uint32_t EVENTS_ERROR; /*!< TWI error */
DECL|EVENTS_ERROR|member|__IO uint32_t EVENTS_ERROR; /*!< TWI error */
DECL|EVENTS_HFCLKSTARTED|member|__IO uint32_t EVENTS_HFCLKSTARTED; /*!< HFCLK oscillator started */
DECL|EVENTS_IN|member|__IO uint32_t EVENTS_IN[8]; /*!< Description collection[0]: Event generated from pin specified
DECL|EVENTS_LASTRX|member|__IO uint32_t EVENTS_LASTRX; /*!< Byte boundary, starting to receive the last byte */
DECL|EVENTS_LASTTX|member|__IO uint32_t EVENTS_LASTTX; /*!< Byte boundary, starting to transmit the last byte */
DECL|EVENTS_LFCLKSTARTED|member|__IO uint32_t EVENTS_LFCLKSTARTED; /*!< LFCLK started */
DECL|EVENTS_LOOPSDONE|member|__IO uint32_t EVENTS_LOOPSDONE; /*!< Concatenated sequences have been played the amount of times
DECL|EVENTS_NCTS|member|__IO uint32_t EVENTS_NCTS; /*!< CTS is deactivated (set high). Not Clear To Send. */
DECL|EVENTS_NOTRESOLVED|member|__IO uint32_t EVENTS_NOTRESOLVED; /*!< Address not resolved */
DECL|EVENTS_OVRFLW|member|__IO uint32_t EVENTS_OVRFLW; /*!< Event on COUNTER overflow */
DECL|EVENTS_PAYLOAD|member|__IO uint32_t EVENTS_PAYLOAD; /*!< Packet payload sent or received */
DECL|EVENTS_POFWARN|member|__IO uint32_t EVENTS_POFWARN; /*!< Power failure warning */
DECL|EVENTS_PORT|member|__IO uint32_t EVENTS_PORT; /*!< Event generated from multiple input GPIO pins with SENSE mechanism
DECL|EVENTS_PWMPERIODEND|member|__IO uint32_t EVENTS_PWMPERIODEND; /*!< Emitted at the end of each PWM period */
DECL|EVENTS_READY|member|__IO uint32_t EVENTS_READY; /*!< COMP is ready and output is valid */
DECL|EVENTS_READY|member|__IO uint32_t EVENTS_READY; /*!< RADIO has ramped up and is ready to be started */
DECL|EVENTS_READ|member|__IO uint32_t EVENTS_READ; /*!< Read command received */
DECL|EVENTS_REPORTRDY|member|__IO uint32_t EVENTS_REPORTRDY; /*!< Non-null report ready */
DECL|EVENTS_RESOLVED|member|__IO uint32_t EVENTS_RESOLVED; /*!< Address resolved */
DECL|EVENTS_RESULTDONE|member|__IO uint32_t EVENTS_RESULTDONE; /*!< A result is ready to get transferred to RAM. */
DECL|EVENTS_RSSIEND|member|__IO uint32_t EVENTS_RSSIEND; /*!< Sampling of receive signal strength complete. */
DECL|EVENTS_RXDRDY|member|__IO uint32_t EVENTS_RXDRDY; /*!< Data received in RXD (but potentially not yet transferred to
DECL|EVENTS_RXSTARTED|member|__IO uint32_t EVENTS_RXSTARTED; /*!< Receive sequence started */
DECL|EVENTS_RXSTARTED|member|__IO uint32_t EVENTS_RXSTARTED; /*!< Receive sequence started */
DECL|EVENTS_RXSTARTED|member|__IO uint32_t EVENTS_RXSTARTED; /*!< UART receiver has started */
DECL|EVENTS_RXTO|member|__IO uint32_t EVENTS_RXTO; /*!< Receiver timeout */
DECL|EVENTS_SAMPLERDY|member|__IO uint32_t EVENTS_SAMPLERDY; /*!< Event being generated for every new sample value written to
DECL|EVENTS_SEQEND|member|__IO uint32_t EVENTS_SEQEND[2]; /*!< Description collection[0]: Emitted at end of every sequence
DECL|EVENTS_SEQSTARTED|member|__IO uint32_t EVENTS_SEQSTARTED[2]; /*!< Description collection[0]: First PWM period started on sequence
DECL|EVENTS_SLEEPENTER|member|__IO uint32_t EVENTS_SLEEPENTER; /*!< CPU entered WFI/WFE sleep */
DECL|EVENTS_SLEEPEXIT|member|__IO uint32_t EVENTS_SLEEPEXIT; /*!< CPU exited WFI/WFE sleep */
DECL|EVENTS_STARTED|member|__IO uint32_t EVENTS_STARTED; /*!< PDM transfer has started */
DECL|EVENTS_STARTED|member|__IO uint32_t EVENTS_STARTED; /*!< The ADC has started */
DECL|EVENTS_STARTED|member|__IO uint32_t EVENTS_STARTED; /*!< Transaction started */
DECL|EVENTS_STOPPED|member|__IO uint32_t EVENTS_STOPPED; /*!< PDM transfer has finished */
DECL|EVENTS_STOPPED|member|__IO uint32_t EVENTS_STOPPED; /*!< QDEC has been stopped */
DECL|EVENTS_STOPPED|member|__IO uint32_t EVENTS_STOPPED; /*!< Response to STOP task, emitted when PWM pulses are no longer
DECL|EVENTS_STOPPED|member|__IO uint32_t EVENTS_STOPPED; /*!< SPI transaction has stopped */
DECL|EVENTS_STOPPED|member|__IO uint32_t EVENTS_STOPPED; /*!< TWI stopped */
DECL|EVENTS_STOPPED|member|__IO uint32_t EVENTS_STOPPED; /*!< TWI stopped */
DECL|EVENTS_STOPPED|member|__IO uint32_t EVENTS_STOPPED; /*!< The ADC has stopped */
DECL|EVENTS_SUSPENDED|member|__IO uint32_t EVENTS_SUSPENDED; /*!< Last byte has been sent out after the SUSPEND task has been
DECL|EVENTS_TICK|member|__IO uint32_t EVENTS_TICK; /*!< Event on COUNTER increment */
DECL|EVENTS_TIMEOUT|member|__IO uint32_t EVENTS_TIMEOUT; /*!< Watchdog timeout */
DECL|EVENTS_TRIGGERED|member|__IO uint32_t EVENTS_TRIGGERED[16]; /*!< Description collection[0]: Event number 0 generated by triggering
DECL|EVENTS_TXDRDY|member|__IO uint32_t EVENTS_TXDRDY; /*!< Data sent from TXD */
DECL|EVENTS_TXSTARTED|member|__IO uint32_t EVENTS_TXSTARTED; /*!< Transmit sequence started */
DECL|EVENTS_TXSTARTED|member|__IO uint32_t EVENTS_TXSTARTED; /*!< Transmit sequence started */
DECL|EVENTS_TXSTARTED|member|__IO uint32_t EVENTS_TXSTARTED; /*!< UART transmitter has started */
DECL|EVENTS_TXSTOPPED|member|__IO uint32_t EVENTS_TXSTOPPED; /*!< Transmitter stopped */
DECL|EVENTS_UP|member|__IO uint32_t EVENTS_UP; /*!< Upward crossing */
DECL|EVENTS_VALRDY|member|__IO uint32_t EVENTS_VALRDY; /*!< Event being generated for every new random number written to
DECL|EVENTS_WRITE|member|__IO uint32_t EVENTS_WRITE; /*!< Write command received */
DECL|EVTENCLR|member|__IO uint32_t EVTENCLR; /*!< Disable event routing */
DECL|EVTENSET|member|__IO uint32_t EVTENSET; /*!< Enable event routing */
DECL|EVTEN|member|__IO uint32_t EVTEN; /*!< Enable or disable event routing */
DECL|EXTREFSEL|member|__IO uint32_t EXTREFSEL; /*!< External reference select */
DECL|FICR_INFO_Type|typedef|} FICR_INFO_Type;
DECL|FICR_TEMP_Type|typedef|} FICR_TEMP_Type;
DECL|FLASH|member|__I uint32_t FLASH; /*!< Flash variant */
DECL|FORK|member|PPI_FORK_Type FORK[32]; /*!< Fork */
DECL|FREQUENCY|member|__IO uint32_t FREQUENCY; /*!< Frequency */
DECL|FREQUENCY|member|__IO uint32_t FREQUENCY; /*!< SPI frequency. Accuracy depends on the HFCLK source selected. */
DECL|FREQUENCY|member|__IO uint32_t FREQUENCY; /*!< TWI frequency. Accuracy depends on the HFCLK source selected. */
DECL|GAINL|member|__IO uint32_t GAINL; /*!< Left output gain adjustment */
DECL|GAINR|member|__IO uint32_t GAINR; /*!< Right output gain adjustment */
DECL|GPIOTE_IRQn|enumerator|GPIOTE_IRQn = 6, /*!< 6 GPIOTE */
DECL|GPREGRET2|member|__IO uint32_t GPREGRET2; /*!< General purpose retention register */
DECL|GPREGRET|member|__IO uint32_t GPREGRET; /*!< General purpose retention register */
DECL|HFCLKRUN|member|__I uint32_t HFCLKRUN; /*!< Status indicating that HFCLKSTART task has been triggered */
DECL|HFCLKSTAT|member|__I uint32_t HFCLKSTAT; /*!< HFCLK status */
DECL|HYST|member|__IO uint32_t HYST; /*!< Comparator hysteresis enable */
DECL|HardFault_IRQn|enumerator|HardFault_IRQn = -13, /*!< 3 Hard Fault, all classes of Fault */
DECL|INFO|member|FICR_INFO_Type INFO; /*!< Device info */
DECL|INPTR|member|__IO uint32_t INPTR; /*!< Input pointer */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENCLR|member|__IO uint32_t INTENCLR; /*!< Disable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTENSET|member|__IO uint32_t INTENSET; /*!< Enable interrupt */
DECL|INTEN|member|__IO uint32_t INTEN; /*!< Enable or disable interrupt */
DECL|INTEN|member|__IO uint32_t INTEN; /*!< Enable or disable interrupt */
DECL|INTEN|member|__IO uint32_t INTEN; /*!< Enable or disable interrupt */
DECL|INTEN|member|__IO uint32_t INTEN; /*!< Enable or disable interrupt */
DECL|INTEN|member|__IO uint32_t INTEN; /*!< Enable or disable interrupt */
DECL|INTEN|member|__IO uint32_t INTEN; /*!< Enable or disable interrupt */
DECL|INTEN|member|__IO uint32_t INTEN; /*!< Enable or disable interrupt */
DECL|INTEN|member|__IO uint32_t INTEN; /*!< Enable or disable interrupt */
DECL|IN|member|__I uint32_t IN; /*!< Read GPIO port */
DECL|IRKPTR|member|__IO uint32_t IRKPTR; /*!< Pointer to IRK data structure */
DECL|IRQn_Type|typedef|} IRQn_Type;
DECL|IR|member|__I uint32_t IR[4]; /*!< Description collection[0]: Identity root, word 0 */
DECL|LATCH|member|__IO uint32_t LATCH; /*!< Latch register indicating what GPIO pins that have met the criteria
DECL|LEDPOL|member|__IO uint32_t LEDPOL; /*!< LED output pin polarity */
DECL|LEDPRE|member|__IO uint32_t LEDPRE; /*!< Time period the LED is switched ON prior to sampling */
DECL|LED|member|__IO uint32_t LED; /*!< Pin select for LED signal */
DECL|LFCLKRUN|member|__I uint32_t LFCLKRUN; /*!< Status indicating that LFCLKSTART task has been triggered */
DECL|LFCLKSRCCOPY|member|__I uint32_t LFCLKSRCCOPY; /*!< Copy of LFCLKSRC register, set when LFCLKSTART task was triggered */
DECL|LFCLKSRC|member|__IO uint32_t LFCLKSRC; /*!< Clock source for the LFCLK */
DECL|LFCLKSTAT|member|__I uint32_t LFCLKSTAT; /*!< LFCLK status */
DECL|LIMITH|member|__IO uint32_t LIMITH; /*!< Description cluster[0]: Last results is equal or above CH[0].LIMIT.HIGH */
DECL|LIMITL|member|__IO uint32_t LIMITL; /*!< Description cluster[0]: Last results is equal or below CH[0].LIMIT.LOW */
DECL|LIMIT|member|__IO uint32_t LIMIT; /*!< Description cluster[0]: High/low limits for event monitoring
DECL|LIST|member|__IO uint32_t LIST; /*!< EasyDMA list type */
DECL|LIST|member|__IO uint32_t LIST; /*!< EasyDMA list type */
DECL|LIST|member|__IO uint32_t LIST; /*!< EasyDMA list type */
DECL|LIST|member|__IO uint32_t LIST; /*!< EasyDMA list type */
DECL|LOOP|member|__IO uint32_t LOOP; /*!< Amount of playback of a loop */
DECL|MATCH|member|__I uint32_t MATCH; /*!< Status register indicating which address had a match */
DECL|MAXCNT|member|__IO uint32_t MAXCNT; /*!< Maximum number of buffer words to transfer */
DECL|MAXCNT|member|__IO uint32_t MAXCNT; /*!< Maximum number of bytes in RXD buffer */
DECL|MAXCNT|member|__IO uint32_t MAXCNT; /*!< Maximum number of bytes in TXD buffer */
DECL|MAXCNT|member|__IO uint32_t MAXCNT; /*!< Maximum number of bytes in receive buffer */
DECL|MAXCNT|member|__IO uint32_t MAXCNT; /*!< Maximum number of bytes in receive buffer */
DECL|MAXCNT|member|__IO uint32_t MAXCNT; /*!< Maximum number of bytes in receive buffer */
DECL|MAXCNT|member|__IO uint32_t MAXCNT; /*!< Maximum number of bytes in receive buffer */
DECL|MAXCNT|member|__IO uint32_t MAXCNT; /*!< Maximum number of bytes in transmit buffer */
DECL|MAXCNT|member|__IO uint32_t MAXCNT; /*!< Maximum number of bytes in transmit buffer */
DECL|MAXCNT|member|__IO uint32_t MAXCNT; /*!< Maximum number of bytes in transmit buffer */
DECL|MAXCNT|member|__IO uint32_t MAXCNT; /*!< Maximum number of bytes in transmit buffer */
DECL|MAXCNT|member|__IO uint32_t MAXCNT; /*!< Number of samples to allocate memory for in EasyDMA mode */
DECL|MAXPACKETSIZE|member|__IO uint32_t MAXPACKETSIZE; /*!< Length of key-stream generated when MODE.LENGTH = Extended. */
DECL|MICSTATUS|member|__I uint32_t MICSTATUS; /*!< MIC check result */
DECL|MISO|member|__IO uint32_t MISO; /*!< Pin select for MISO signal */
DECL|MISO|member|__IO uint32_t MISO; /*!< Pin select for MISO signal */
DECL|MODECNF0|member|__IO uint32_t MODECNF0; /*!< Radio mode configuration register 0 */
DECL|MODE|member|__IO uint32_t MODE; /*!< Data rate and modulation */
DECL|MODE|member|__IO uint32_t MODE; /*!< Defines the routing of the connected PDM microphones' signals */
DECL|MODE|member|__IO uint32_t MODE; /*!< Mode configuration */
DECL|MODE|member|__IO uint32_t MODE; /*!< Operation mode */
DECL|MODE|member|__IO uint32_t MODE; /*!< Selects operating mode of the wave counter */
DECL|MODE|member|__IO uint32_t MODE; /*!< Timer mode selection */
DECL|MOSI|member|__IO uint32_t MOSI; /*!< Pin select for MOSI signal */
DECL|MOSI|member|__IO uint32_t MOSI; /*!< Pin select for MOSI signal */
DECL|MemoryManagement_IRQn|enumerator|MemoryManagement_IRQn = -12, /*!< 4 Memory Management, MPU mismatch, including Access Violation
DECL|NIRK|member|__IO uint32_t NIRK; /*!< Number of IRKs */
DECL|NRF52810_H|macro|NRF52810_H
DECL|NRFFW|member|__IO uint32_t NRFFW[15]; /*!< Description collection[0]: Reserved for Nordic firmware design */
DECL|NRFHW|member|__IO uint32_t NRFHW[12]; /*!< Description collection[0]: Reserved for Nordic hardware design */
DECL|NRF_AAR_BASE|macro|NRF_AAR_BASE
DECL|NRF_AAR_Type|typedef|} NRF_AAR_Type;
DECL|NRF_AAR|macro|NRF_AAR
DECL|NRF_BPROT_BASE|macro|NRF_BPROT_BASE
DECL|NRF_BPROT_Type|typedef|} NRF_BPROT_Type;
DECL|NRF_BPROT|macro|NRF_BPROT
DECL|NRF_CCM_BASE|macro|NRF_CCM_BASE
DECL|NRF_CCM_Type|typedef|} NRF_CCM_Type;
DECL|NRF_CCM|macro|NRF_CCM
DECL|NRF_CLOCK_BASE|macro|NRF_CLOCK_BASE
DECL|NRF_CLOCK_Type|typedef|} NRF_CLOCK_Type;
DECL|NRF_CLOCK|macro|NRF_CLOCK
DECL|NRF_COMP_BASE|macro|NRF_COMP_BASE
DECL|NRF_COMP_Type|typedef|} NRF_COMP_Type;
DECL|NRF_COMP|macro|NRF_COMP
DECL|NRF_ECB_BASE|macro|NRF_ECB_BASE
DECL|NRF_ECB_Type|typedef|} NRF_ECB_Type;
DECL|NRF_ECB|macro|NRF_ECB
DECL|NRF_EGU0_BASE|macro|NRF_EGU0_BASE
DECL|NRF_EGU0|macro|NRF_EGU0
DECL|NRF_EGU1_BASE|macro|NRF_EGU1_BASE
DECL|NRF_EGU1|macro|NRF_EGU1
DECL|NRF_EGU_Type|typedef|} NRF_EGU_Type;
DECL|NRF_FICR_BASE|macro|NRF_FICR_BASE
DECL|NRF_FICR_Type|typedef|} NRF_FICR_Type;
DECL|NRF_FICR|macro|NRF_FICR
DECL|NRF_GPIOTE_BASE|macro|NRF_GPIOTE_BASE
DECL|NRF_GPIOTE_Type|typedef|} NRF_GPIOTE_Type;
DECL|NRF_GPIOTE|macro|NRF_GPIOTE
DECL|NRF_GPIO_Type|typedef|} NRF_GPIO_Type;
DECL|NRF_NVMC_BASE|macro|NRF_NVMC_BASE
DECL|NRF_NVMC_Type|typedef|} NRF_NVMC_Type;
DECL|NRF_NVMC|macro|NRF_NVMC
DECL|NRF_P0_BASE|macro|NRF_P0_BASE
DECL|NRF_P0|macro|NRF_P0
DECL|NRF_PDM_BASE|macro|NRF_PDM_BASE
DECL|NRF_PDM_Type|typedef|} NRF_PDM_Type;
DECL|NRF_PDM|macro|NRF_PDM
DECL|NRF_POWER_BASE|macro|NRF_POWER_BASE
DECL|NRF_POWER_Type|typedef|} NRF_POWER_Type;
DECL|NRF_POWER|macro|NRF_POWER
DECL|NRF_PPI_BASE|macro|NRF_PPI_BASE
DECL|NRF_PPI_Type|typedef|} NRF_PPI_Type;
DECL|NRF_PPI|macro|NRF_PPI
DECL|NRF_PWM0_BASE|macro|NRF_PWM0_BASE
DECL|NRF_PWM0|macro|NRF_PWM0
DECL|NRF_PWM_Type|typedef|} NRF_PWM_Type;
DECL|NRF_QDEC_BASE|macro|NRF_QDEC_BASE
DECL|NRF_QDEC_Type|typedef|} NRF_QDEC_Type;
DECL|NRF_QDEC|macro|NRF_QDEC
DECL|NRF_RADIO_BASE|macro|NRF_RADIO_BASE
DECL|NRF_RADIO_Type|typedef|} NRF_RADIO_Type;
DECL|NRF_RADIO|macro|NRF_RADIO
DECL|NRF_RNG_BASE|macro|NRF_RNG_BASE
DECL|NRF_RNG_Type|typedef|} NRF_RNG_Type;
DECL|NRF_RNG|macro|NRF_RNG
DECL|NRF_RTC0_BASE|macro|NRF_RTC0_BASE
DECL|NRF_RTC0|macro|NRF_RTC0
DECL|NRF_RTC1_BASE|macro|NRF_RTC1_BASE
DECL|NRF_RTC1|macro|NRF_RTC1
DECL|NRF_RTC_Type|typedef|} NRF_RTC_Type;
DECL|NRF_SAADC_BASE|macro|NRF_SAADC_BASE
DECL|NRF_SAADC_Type|typedef|} NRF_SAADC_Type;
DECL|NRF_SAADC|macro|NRF_SAADC
DECL|NRF_SPIM0_BASE|macro|NRF_SPIM0_BASE
DECL|NRF_SPIM0|macro|NRF_SPIM0
DECL|NRF_SPIM_Type|typedef|} NRF_SPIM_Type;
DECL|NRF_SPIS0_BASE|macro|NRF_SPIS0_BASE
DECL|NRF_SPIS0|macro|NRF_SPIS0
DECL|NRF_SPIS_Type|typedef|} NRF_SPIS_Type;
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
DECL|NRF_SWI_Type|typedef|} NRF_SWI_Type;
DECL|NRF_TEMP_BASE|macro|NRF_TEMP_BASE
DECL|NRF_TEMP_Type|typedef|} NRF_TEMP_Type;
DECL|NRF_TEMP|macro|NRF_TEMP
DECL|NRF_TIMER0_BASE|macro|NRF_TIMER0_BASE
DECL|NRF_TIMER0|macro|NRF_TIMER0
DECL|NRF_TIMER1_BASE|macro|NRF_TIMER1_BASE
DECL|NRF_TIMER1|macro|NRF_TIMER1
DECL|NRF_TIMER2_BASE|macro|NRF_TIMER2_BASE
DECL|NRF_TIMER2|macro|NRF_TIMER2
DECL|NRF_TIMER_Type|typedef|} NRF_TIMER_Type;
DECL|NRF_TWIM0_BASE|macro|NRF_TWIM0_BASE
DECL|NRF_TWIM0|macro|NRF_TWIM0
DECL|NRF_TWIM_Type|typedef|} NRF_TWIM_Type;
DECL|NRF_TWIS0_BASE|macro|NRF_TWIS0_BASE
DECL|NRF_TWIS0|macro|NRF_TWIS0
DECL|NRF_TWIS_Type|typedef|} NRF_TWIS_Type;
DECL|NRF_UARTE0_BASE|macro|NRF_UARTE0_BASE
DECL|NRF_UARTE0|macro|NRF_UARTE0
DECL|NRF_UARTE_Type|typedef|} NRF_UARTE_Type;
DECL|NRF_UICR_BASE|macro|NRF_UICR_BASE
DECL|NRF_UICR_Type|typedef|} NRF_UICR_Type;
DECL|NRF_UICR|macro|NRF_UICR
DECL|NRF_WDT_BASE|macro|NRF_WDT_BASE
DECL|NRF_WDT_Type|typedef|} NRF_WDT_Type;
DECL|NRF_WDT|macro|NRF_WDT
DECL|NonMaskableInt_IRQn|enumerator|NonMaskableInt_IRQn = -14, /*!< 2 Non maskable Interrupt, cannot be stopped or preempted */
DECL|ORC|member|__IO uint32_t ORC; /*!< Over-read character */
DECL|ORC|member|__IO uint32_t ORC; /*!< Over-read character. Character clocked out in case and over-read
DECL|ORC|member|__IO uint32_t ORC; /*!< Over-read character. Character sent out in case of an over-read
DECL|OUTCLR|member|__IO uint32_t OUTCLR; /*!< Clear individual bits in GPIO port */
DECL|OUTPTR|member|__IO uint32_t OUTPTR; /*!< Output pointer */
DECL|OUTSET|member|__IO uint32_t OUTSET; /*!< Set individual bits in GPIO port */
DECL|OUT|member|__IO uint32_t OUT; /*!< Write GPIO port */
DECL|OUT|member|__IO uint32_t OUT[4]; /*!< Description collection[0]: Output pin select for PWM channel
DECL|OVERSAMPLE|member|__IO uint32_t OVERSAMPLE; /*!< Oversampling configuration. OVERSAMPLE should not be combined
DECL|PACKAGE|member|__I uint32_t PACKAGE; /*!< Package option */
DECL|PACKETPTR|member|__IO uint32_t PACKETPTR; /*!< Packet pointer */
DECL|PART|member|__I uint32_t PART; /*!< Part code */
DECL|PCNF0|member|__IO uint32_t PCNF0; /*!< Packet configuration register 0 */
DECL|PCNF1|member|__IO uint32_t PCNF1; /*!< Packet configuration register 1 */
DECL|PDMCLKCTRL|member|__IO uint32_t PDMCLKCTRL; /*!< PDM clock generator control */
DECL|PDM_IRQn|enumerator|PDM_IRQn = 29 /*!< 29 PDM */
DECL|PDM_PSEL_Type|typedef|} PDM_PSEL_Type;
DECL|PDM_SAMPLE_Type|typedef|} PDM_SAMPLE_Type;
DECL|PIN_CNF|member|__IO uint32_t PIN_CNF[32]; /*!< Description collection[0]: Configuration of GPIO pins */
DECL|POFCON|member|__IO uint32_t POFCON; /*!< Power failure comparator configuration */
DECL|POWERCLR|member|__O uint32_t POWERCLR; /*!< Description cluster[0]: RAM0 power control clear register */
DECL|POWERSET|member|__O uint32_t POWERSET; /*!< Description cluster[0]: RAM0 power control set register */
DECL|POWER_CLOCK_IRQn|enumerator|POWER_CLOCK_IRQn = 0, /*!< 0 POWER_CLOCK */
DECL|POWER_RAM_Type|typedef|} POWER_RAM_Type;
DECL|POWER|member|__IO uint32_t POWER; /*!< Description cluster[0]: RAM0 power control register */
DECL|POWER|member|__IO uint32_t POWER; /*!< Peripheral power control */
DECL|PPI_CH_Type|typedef|} PPI_CH_Type;
DECL|PPI_FORK_Type|typedef|} PPI_FORK_Type;
DECL|PPI_TASKS_CHG_Type|typedef|} PPI_TASKS_CHG_Type;
DECL|PREFIX0|member|__IO uint32_t PREFIX0; /*!< Prefixes bytes for logical addresses 0-3 */
DECL|PREFIX1|member|__IO uint32_t PREFIX1; /*!< Prefixes bytes for logical addresses 4-7 */
DECL|PRESCALER|member|__IO uint32_t PRESCALER; /*!< 12 bit prescaler for COUNTER frequency (32768/(PRESCALER+1)).Must
DECL|PRESCALER|member|__IO uint32_t PRESCALER; /*!< Configuration for PWM_CLK */
DECL|PRESCALER|member|__IO uint32_t PRESCALER; /*!< Timer prescaler register */
DECL|PSELN|member|__IO uint32_t PSELN; /*!< Description cluster[0]: Input negative pin selection for CH[0] */
DECL|PSELP|member|__IO uint32_t PSELP; /*!< Description cluster[0]: Input positive pin selection for CH[0] */
DECL|PSELRESET|member|__IO uint32_t PSELRESET[2]; /*!< Description collection[0]: Mapping of the nRESET function (see
DECL|PSEL|member|PDM_PSEL_Type PSEL; /*!< Unspecified */
DECL|PSEL|member|PWM_PSEL_Type PSEL; /*!< Unspecified */
DECL|PSEL|member|QDEC_PSEL_Type PSEL; /*!< Unspecified */
DECL|PSEL|member|SPIM_PSEL_Type PSEL; /*!< Unspecified */
DECL|PSEL|member|SPIS_PSEL_Type PSEL; /*!< Unspecified */
DECL|PSEL|member|TWIM_PSEL_Type PSEL; /*!< Unspecified */
DECL|PSEL|member|TWIS_PSEL_Type PSEL; /*!< Unspecified */
DECL|PSEL|member|UARTE_PSEL_Type PSEL; /*!< Unspecified */
DECL|PSEL|member|__IO uint32_t PSEL; /*!< Pin select */
DECL|PTR|member|__IO uint32_t PTR; /*!< Data pointer */
DECL|PTR|member|__IO uint32_t PTR; /*!< Data pointer */
DECL|PTR|member|__IO uint32_t PTR; /*!< Data pointer */
DECL|PTR|member|__IO uint32_t PTR; /*!< Data pointer */
DECL|PTR|member|__IO uint32_t PTR; /*!< Data pointer */
DECL|PTR|member|__IO uint32_t PTR; /*!< Data pointer */
DECL|PTR|member|__IO uint32_t PTR; /*!< Data pointer */
DECL|PTR|member|__IO uint32_t PTR; /*!< Description cluster[0]: Beginning address in Data RAM of this
DECL|PTR|member|__IO uint32_t PTR; /*!< RAM address pointer to write samples to with EasyDMA */
DECL|PTR|member|__IO uint32_t PTR; /*!< RXD Data pointer */
DECL|PTR|member|__IO uint32_t PTR; /*!< RXD data pointer */
DECL|PTR|member|__IO uint32_t PTR; /*!< TXD Data pointer */
DECL|PTR|member|__IO uint32_t PTR; /*!< TXD data pointer */
DECL|PWM0_IRQn|enumerator|PWM0_IRQn = 28, /*!< 28 PWM0 */
DECL|PWM_PSEL_Type|typedef|} PWM_PSEL_Type;
DECL|PWM_SEQ_Type|typedef|} PWM_SEQ_Type;
DECL|PendSV_IRQn|enumerator|PendSV_IRQn = -2, /*!< 14 Pendable request for system service */
DECL|QDEC_IRQn|enumerator|QDEC_IRQn = 18, /*!< 18 QDEC */
DECL|QDEC_PSEL_Type|typedef|} QDEC_PSEL_Type;
DECL|RADIO_IRQn|enumerator|RADIO_IRQn = 1, /*!< 1 RADIO */
DECL|RAM|member|POWER_RAM_Type RAM[8]; /*!< Unspecified */
DECL|RAM|member|__I uint32_t RAM; /*!< RAM variant */
DECL|RATEOVERRIDE|member|__IO uint32_t RATEOVERRIDE; /*!< Data rate override setting. */
DECL|READY|member|__I uint32_t READY; /*!< Ready flag */
DECL|REFRESH|member|__IO uint32_t REFRESH; /*!< Description cluster[0]: Amount of additional PWM periods between
DECL|REFSEL|member|__IO uint32_t REFSEL; /*!< Reference source select for single-ended mode */
DECL|REPORTPER|member|__IO uint32_t REPORTPER; /*!< Number of samples to be taken before REPORTRDY and DBLRDY events
DECL|REQSTATUS|member|__I uint32_t REQSTATUS; /*!< Request status */
DECL|RESERVED0|member|__I uint32_t RESERVED0;
DECL|RESERVED0|member|__I uint32_t RESERVED0;
DECL|RESERVED0|member|__I uint32_t RESERVED0;
DECL|RESERVED0|member|__I uint32_t RESERVED0;
DECL|RESERVED0|member|__I uint32_t RESERVED0;
DECL|RESERVED0|member|__I uint32_t RESERVED0[11];
DECL|RESERVED0|member|__I uint32_t RESERVED0[256];
DECL|RESERVED0|member|__I uint32_t RESERVED0[308];
DECL|RESERVED0|member|__I uint32_t RESERVED0[30];
DECL|RESERVED0|member|__I uint32_t RESERVED0[321];
DECL|RESERVED0|member|__I uint32_t RESERVED0[384];
DECL|RESERVED0|member|__I uint32_t RESERVED0[48];
DECL|RESERVED0|member|__I uint32_t RESERVED0[4];
DECL|RESERVED0|member|__I uint32_t RESERVED0[4];
DECL|RESERVED0|member|__I uint32_t RESERVED0[4];
DECL|RESERVED0|member|__I uint32_t RESERVED0[55];
DECL|RESERVED0|member|__I uint32_t RESERVED0[57];
DECL|RESERVED0|member|__I uint32_t RESERVED0[59];
DECL|RESERVED0|member|__I uint32_t RESERVED0[5];
DECL|RESERVED0|member|__I uint32_t RESERVED0[60];
DECL|RESERVED0|member|__I uint32_t RESERVED0[60];
DECL|RESERVED0|member|__I uint32_t RESERVED0[60];
DECL|RESERVED0|member|__I uint32_t RESERVED0[61];
DECL|RESERVED0|member|__I uint32_t RESERVED0[62];
DECL|RESERVED0|member|__I uint32_t RESERVED0[62];
DECL|RESERVED0|member|__I uint32_t RESERVED0[62];
DECL|RESERVED0|member|__I uint32_t RESERVED0[62];
DECL|RESERVED0|member|__I uint32_t RESERVED0[63];
DECL|RESERVED0|member|__I uint32_t RESERVED0[7];
DECL|RESERVED0|member|__I uint32_t RESERVED0[9];
DECL|RESERVED10|member|__I uint32_t RESERVED10;
DECL|RESERVED10|member|__I uint32_t RESERVED10[10];
DECL|RESERVED10|member|__I uint32_t RESERVED10[14];
DECL|RESERVED10|member|__I uint32_t RESERVED10[31];
DECL|RESERVED10|member|__I uint32_t RESERVED10[39];
DECL|RESERVED10|member|__I uint32_t RESERVED10[7];
DECL|RESERVED11|member|__I uint32_t RESERVED11;
DECL|RESERVED11|member|__I uint32_t RESERVED11;
DECL|RESERVED11|member|__I uint32_t RESERVED11;
DECL|RESERVED11|member|__I uint32_t RESERVED11;
DECL|RESERVED11|member|__I uint32_t RESERVED11[3];
DECL|RESERVED11|member|__I uint32_t RESERVED11[4];
DECL|RESERVED12|member|__I uint32_t RESERVED12;
DECL|RESERVED12|member|__I uint32_t RESERVED12[3];
DECL|RESERVED12|member|__I uint32_t RESERVED12[3];
DECL|RESERVED12|member|__I uint32_t RESERVED12[5];
DECL|RESERVED12|member|__I uint32_t RESERVED12[618];
DECL|RESERVED12|member|__I uint32_t RESERVED12[9];
DECL|RESERVED13|member|__I uint32_t RESERVED13;
DECL|RESERVED13|member|__I uint32_t RESERVED13;
DECL|RESERVED13|member|__I uint32_t RESERVED13[26];
DECL|RESERVED13|member|__I uint32_t RESERVED13[3];
DECL|RESERVED13|member|__I uint32_t RESERVED13[3];
DECL|RESERVED14|member|__I uint32_t RESERVED14;
DECL|RESERVED14|member|__I uint32_t RESERVED14[13];
DECL|RESERVED14|member|__I uint32_t RESERVED14[14];
DECL|RESERVED14|member|__I uint32_t RESERVED14[24];
DECL|RESERVED15|member|__I uint32_t RESERVED15;
DECL|RESERVED15|member|__I uint32_t RESERVED15[7];
DECL|RESERVED16|member|__I uint32_t RESERVED16[10];
DECL|RESERVED1|member|__I uint32_t RESERVED1;
DECL|RESERVED1|member|__I uint32_t RESERVED1;
DECL|RESERVED1|member|__I uint32_t RESERVED1;
DECL|RESERVED1|member|__I uint32_t RESERVED1;
DECL|RESERVED1|member|__I uint32_t RESERVED1[106];
DECL|RESERVED1|member|__I uint32_t RESERVED1[112];
DECL|RESERVED1|member|__I uint32_t RESERVED1[118];
DECL|RESERVED1|member|__I uint32_t RESERVED1[125];
DECL|RESERVED1|member|__I uint32_t RESERVED1[127];
DECL|RESERVED1|member|__I uint32_t RESERVED1[128];
DECL|RESERVED1|member|__I uint32_t RESERVED1[128];
DECL|RESERVED1|member|__I uint32_t RESERVED1[14];
DECL|RESERVED1|member|__I uint32_t RESERVED1[18];
DECL|RESERVED1|member|__I uint32_t RESERVED1[2];
DECL|RESERVED1|member|__I uint32_t RESERVED1[2];
DECL|RESERVED1|member|__I uint32_t RESERVED1[34];
DECL|RESERVED1|member|__I uint32_t RESERVED1[4];
DECL|RESERVED1|member|__I uint32_t RESERVED1[4];
DECL|RESERVED1|member|__I uint32_t RESERVED1[52];
DECL|RESERVED1|member|__I uint32_t RESERVED1[54];
DECL|RESERVED1|member|__I uint32_t RESERVED1[58];
DECL|RESERVED1|member|__I uint32_t RESERVED1[59];
DECL|RESERVED1|member|__I uint32_t RESERVED1[60];
DECL|RESERVED1|member|__I uint32_t RESERVED1[60];
DECL|RESERVED1|member|__I uint32_t RESERVED1[61];
DECL|RESERVED1|member|__I uint32_t RESERVED1[61];
DECL|RESERVED1|member|__I uint32_t RESERVED1[63];
DECL|RESERVED1|member|__I uint32_t RESERVED1[64];
DECL|RESERVED1|member|__I uint32_t RESERVED1[64];
DECL|RESERVED2|member|__I uint32_t RESERVED2;
DECL|RESERVED2|member|__I uint32_t RESERVED2;
DECL|RESERVED2|member|__I uint32_t RESERVED2;
DECL|RESERVED2|member|__I uint32_t RESERVED2[109];
DECL|RESERVED2|member|__I uint32_t RESERVED2[124];
DECL|RESERVED2|member|__I uint32_t RESERVED2[125];
DECL|RESERVED2|member|__I uint32_t RESERVED2[126];
DECL|RESERVED2|member|__I uint32_t RESERVED2[126];
DECL|RESERVED2|member|__I uint32_t RESERVED2[127];
DECL|RESERVED2|member|__I uint32_t RESERVED2[148];
DECL|RESERVED2|member|__I uint32_t RESERVED2[2];
DECL|RESERVED2|member|__I uint32_t RESERVED2[2];
DECL|RESERVED2|member|__I uint32_t RESERVED2[32];
DECL|RESERVED2|member|__I uint32_t RESERVED2[3];
DECL|RESERVED2|member|__I uint32_t RESERVED2[42];
DECL|RESERVED2|member|__I uint32_t RESERVED2[56];
DECL|RESERVED2|member|__I uint32_t RESERVED2[56];
DECL|RESERVED2|member|__I uint32_t RESERVED2[61];
DECL|RESERVED2|member|__I uint32_t RESERVED2[61];
DECL|RESERVED2|member|__I uint32_t RESERVED2[63];
DECL|RESERVED2|member|__I uint32_t RESERVED2[64];
DECL|RESERVED2|member|__I uint32_t RESERVED2[64];
DECL|RESERVED2|member|__I uint32_t RESERVED2[64];
DECL|RESERVED2|member|__I uint32_t RESERVED2[6];
DECL|RESERVED3|member|__I uint32_t RESERVED3[122];
DECL|RESERVED3|member|__I uint32_t RESERVED3[125];
DECL|RESERVED3|member|__I uint32_t RESERVED3[126];
DECL|RESERVED3|member|__I uint32_t RESERVED3[13];
DECL|RESERVED3|member|__I uint32_t RESERVED3[21];
DECL|RESERVED3|member|__I uint32_t RESERVED3[23];
DECL|RESERVED3|member|__I uint32_t RESERVED3[2];
DECL|RESERVED3|member|__I uint32_t RESERVED3[2];
DECL|RESERVED3|member|__I uint32_t RESERVED3[3];
DECL|RESERVED3|member|__I uint32_t RESERVED3[50];
DECL|RESERVED3|member|__I uint32_t RESERVED3[51];
DECL|RESERVED3|member|__I uint32_t RESERVED3[56];
DECL|RESERVED3|member|__I uint32_t RESERVED3[5];
DECL|RESERVED3|member|__I uint32_t RESERVED3[5];
DECL|RESERVED3|member|__I uint32_t RESERVED3[61];
DECL|RESERVED3|member|__I uint32_t RESERVED3[61];
DECL|RESERVED3|member|__I uint32_t RESERVED3[61];
DECL|RESERVED3|member|__I uint32_t RESERVED3[62];
DECL|RESERVED3|member|__I uint32_t RESERVED3[63];
DECL|RESERVED3|member|__I uint32_t RESERVED3[63];
DECL|RESERVED3|member|__I uint32_t RESERVED3[63];
DECL|RESERVED3|member|__I uint32_t RESERVED3[63];
DECL|RESERVED3|member|__I uint32_t RESERVED3[64];
DECL|RESERVED4|member|__I uint32_t RESERVED4;
DECL|RESERVED4|member|__I uint32_t RESERVED4;
DECL|RESERVED4|member|__I uint32_t RESERVED4[110];
DECL|RESERVED4|member|__I uint32_t RESERVED4[125];
DECL|RESERVED4|member|__I uint32_t RESERVED4[126];
DECL|RESERVED4|member|__I uint32_t RESERVED4[185];
DECL|RESERVED4|member|__I uint32_t RESERVED4[2];
DECL|RESERVED4|member|__I uint32_t RESERVED4[3];
DECL|RESERVED4|member|__I uint32_t RESERVED4[53];
DECL|RESERVED4|member|__I uint32_t RESERVED4[5];
DECL|RESERVED4|member|__I uint32_t RESERVED4[60];
DECL|RESERVED4|member|__I uint32_t RESERVED4[61];
DECL|RESERVED4|member|__I uint32_t RESERVED4[63];
DECL|RESERVED4|member|__I uint32_t RESERVED4[63];
DECL|RESERVED4|member|__I uint32_t RESERVED4[63];
DECL|RESERVED4|member|__I uint32_t RESERVED4[64];
DECL|RESERVED4|member|__I uint32_t RESERVED4[7];
DECL|RESERVED4|member|__I uint32_t RESERVED4[7];
DECL|RESERVED4|member|__I uint32_t RESERVED4[7];
DECL|RESERVED4|member|__I uint32_t RESERVED4[8];
DECL|RESERVED4|member|__I uint32_t RESERVED4[97];
DECL|RESERVED5|member|__I uint32_t RESERVED5;
DECL|RESERVED5|member|__I uint32_t RESERVED5;
DECL|RESERVED5|member|__I uint32_t RESERVED5;
DECL|RESERVED5|member|__I uint32_t RESERVED5;
DECL|RESERVED5|member|__I uint32_t RESERVED5[129];
DECL|RESERVED5|member|__I uint32_t RESERVED5[13];
DECL|RESERVED5|member|__I uint32_t RESERVED5[24];
DECL|RESERVED5|member|__I uint32_t RESERVED5[2];
DECL|RESERVED5|member|__I uint32_t RESERVED5[2];
DECL|RESERVED5|member|__I uint32_t RESERVED5[61];
DECL|RESERVED5|member|__I uint32_t RESERVED5[62];
DECL|RESERVED5|member|__I uint32_t RESERVED5[63];
DECL|RESERVED5|member|__I uint32_t RESERVED5[64];
DECL|RESERVED5|member|__I uint32_t RESERVED5[6];
DECL|RESERVED5|member|__I uint32_t RESERVED5[8];
DECL|RESERVED5|member|__I uint32_t RESERVED5[8];
DECL|RESERVED5|member|__I uint32_t RESERVED5[9];
DECL|RESERVED6|member|__I uint32_t RESERVED6;
DECL|RESERVED6|member|__I uint32_t RESERVED6;
DECL|RESERVED6|member|__I uint32_t RESERVED6[10];
DECL|RESERVED6|member|__I uint32_t RESERVED6[11];
DECL|RESERVED6|member|__I uint32_t RESERVED6[12];
DECL|RESERVED6|member|__I uint32_t RESERVED6[2];
DECL|RESERVED6|member|__I uint32_t RESERVED6[3];
DECL|RESERVED6|member|__I uint32_t RESERVED6[4];
DECL|RESERVED6|member|__I uint32_t RESERVED6[61];
DECL|RESERVED6|member|__I uint32_t RESERVED6[7];
DECL|RESERVED7|member|__I uint32_t RESERVED7[15];
DECL|RESERVED7|member|__I uint32_t RESERVED7[2];
DECL|RESERVED7|member|__I uint32_t RESERVED7[37];
DECL|RESERVED7|member|__I uint32_t RESERVED7[39];
DECL|RESERVED7|member|__I uint32_t RESERVED7[41];
DECL|RESERVED7|member|__I uint32_t RESERVED7[44];
DECL|RESERVED7|member|__I uint32_t RESERVED7[60];
DECL|RESERVED8|member|__I uint32_t RESERVED8;
DECL|RESERVED8|member|__I uint32_t RESERVED8[21];
DECL|RESERVED8|member|__I uint32_t RESERVED8[47];
DECL|RESERVED8|member|__I uint32_t RESERVED8[63];
DECL|RESERVED8|member|__I uint32_t RESERVED8[63];
DECL|RESERVED8|member|__I uint32_t RESERVED8[63];
DECL|RESERVED8|member|__I uint32_t RESERVED8[64];
DECL|RESERVED9|member|__I uint32_t RESERVED9;
DECL|RESERVED9|member|__I uint32_t RESERVED9[110];
DECL|RESERVED9|member|__I uint32_t RESERVED9[113];
DECL|RESERVED9|member|__I uint32_t RESERVED9[125];
DECL|RESERVED9|member|__I uint32_t RESERVED9[225];
DECL|RESERVED9|member|__I uint32_t RESERVED9[2];
DECL|RESERVED9|member|__I uint32_t RESERVED9[93];
DECL|RESETREAS|member|__IO uint32_t RESETREAS; /*!< Reset reason */
DECL|RESOLUTION|member|__IO uint32_t RESOLUTION; /*!< Resolution configuration */
DECL|RESULT|member|SAADC_RESULT_Type RESULT; /*!< RESULT EasyDMA channel */
DECL|RESULT|member|__I uint32_t RESULT; /*!< Compare result */
DECL|RNG_IRQn|enumerator|RNG_IRQn = 13, /*!< 13 RNG */
DECL|RREN|member|__IO uint32_t RREN; /*!< Enable register for reload request registers */
DECL|RR|member|__O uint32_t RR[8]; /*!< Description collection[0]: Reload request 0 */
DECL|RSSISAMPLE|member|__I uint32_t RSSISAMPLE; /*!< RSSI sample */
DECL|RTC0_IRQn|enumerator|RTC0_IRQn = 11, /*!< 11 RTC0 */
DECL|RTC1_IRQn|enumerator|RTC1_IRQn = 17, /*!< 17 RTC1 */
DECL|RTS|member|__IO uint32_t RTS; /*!< Pin select for RTS signal */
DECL|RUNSTATUS|member|__I uint32_t RUNSTATUS; /*!< Run status */
DECL|RXADDRESSES|member|__IO uint32_t RXADDRESSES; /*!< Receive address select */
DECL|RXCRC|member|__I uint32_t RXCRC; /*!< CRC field of previously received packet */
DECL|RXD|member|SPIM_RXD_Type RXD; /*!< RXD EasyDMA channel */
DECL|RXD|member|SPIS_RXD_Type RXD; /*!< Unspecified */
DECL|RXD|member|TWIM_RXD_Type RXD; /*!< RXD EasyDMA channel */
DECL|RXD|member|TWIS_RXD_Type RXD; /*!< RXD EasyDMA channel */
DECL|RXD|member|UARTE_RXD_Type RXD; /*!< RXD EasyDMA channel */
DECL|RXD|member|__IO uint32_t RXD; /*!< Pin select for RXD signal */
DECL|RXMATCH|member|__I uint32_t RXMATCH; /*!< Received address */
DECL|Reset_IRQn|enumerator|Reset_IRQn = -15, /*!< 1 Reset Vector, invoked on Power up and warm reset */
DECL|SAADC_CH_Type|typedef|} SAADC_CH_Type;
DECL|SAADC_EVENTS_CH_Type|typedef|} SAADC_EVENTS_CH_Type;
DECL|SAADC_IRQn|enumerator|SAADC_IRQn = 7, /*!< 7 SAADC */
DECL|SAADC_RESULT_Type|typedef|} SAADC_RESULT_Type;
DECL|SAMPLEPER|member|__IO uint32_t SAMPLEPER; /*!< Sample period */
DECL|SAMPLERATE|member|__IO uint32_t SAMPLERATE; /*!< Controls normal or continuous sample rate */
DECL|SAMPLE|member|PDM_SAMPLE_Type SAMPLE; /*!< Unspecified */
DECL|SAMPLE|member|__I int32_t SAMPLE; /*!< Motion sample value */
DECL|SCK|member|__IO uint32_t SCK; /*!< Pin select for SCK */
DECL|SCK|member|__IO uint32_t SCK; /*!< Pin select for SCK */
DECL|SCL|member|__IO uint32_t SCL; /*!< Pin select for SCL signal */
DECL|SCL|member|__IO uint32_t SCL; /*!< Pin select for SCL signal */
DECL|SCRATCHPTR|member|__IO uint32_t SCRATCHPTR; /*!< Pointer to data area used for temporary storage */
DECL|SCRATCHPTR|member|__IO uint32_t SCRATCHPTR; /*!< Pointer to data area used for temporary storage */
DECL|SDA|member|__IO uint32_t SDA; /*!< Pin select for SDA signal */
DECL|SDA|member|__IO uint32_t SDA; /*!< Pin select for SDA signal */
DECL|SEMSTAT|member|__I uint32_t SEMSTAT; /*!< Semaphore status register */
DECL|SEQ|member|PWM_SEQ_Type SEQ[2]; /*!< Unspecified */
DECL|SHORTS|member|__IO uint32_t SHORTS; /*!< Shortcut register */
DECL|SHORTS|member|__IO uint32_t SHORTS; /*!< Shortcut register */
DECL|SHORTS|member|__IO uint32_t SHORTS; /*!< Shortcut register */
DECL|SHORTS|member|__IO uint32_t SHORTS; /*!< Shortcut register */
DECL|SHORTS|member|__IO uint32_t SHORTS; /*!< Shortcut register */
DECL|SHORTS|member|__IO uint32_t SHORTS; /*!< Shortcut register */
DECL|SHORTS|member|__IO uint32_t SHORTS; /*!< Shortcut register */
DECL|SHORTS|member|__IO uint32_t SHORTS; /*!< Shortcut register */
DECL|SHORTS|member|__IO uint32_t SHORTS; /*!< Shortcut register */
DECL|SHORTS|member|__IO uint32_t SHORTS; /*!< Shortcut register */
DECL|SHORTS|member|__IO uint32_t SHORTS; /*!< Shortcut register */
DECL|SHORTS|member|__IO uint32_t SHORTS; /*!< Shortcut register */
DECL|SPIM0_SPIS0_IRQn|enumerator|SPIM0_SPIS0_IRQn = 4, /*!< 4 SPIM0_SPIS0 */
DECL|SPIM_PSEL_Type|typedef|} SPIM_PSEL_Type;
DECL|SPIM_RXD_Type|typedef|} SPIM_RXD_Type;
DECL|SPIM_TXD_Type|typedef|} SPIM_TXD_Type;
DECL|SPIS_PSEL_Type|typedef|} SPIS_PSEL_Type;
DECL|SPIS_RXD_Type|typedef|} SPIS_RXD_Type;
DECL|SPIS_TXD_Type|typedef|} SPIS_TXD_Type;
DECL|STATE|member|__I uint32_t STATE; /*!< Current radio state */
DECL|STATUS|member|__I uint32_t STATUS; /*!< Resolution status */
DECL|STATUS|member|__I uint32_t STATUS; /*!< Status */
DECL|STATUS|member|__IO uint32_t STATUS; /*!< Status from last transaction */
DECL|SVCall_IRQn|enumerator|SVCall_IRQn = -5, /*!< 11 System Service Call via SVC instruction */
DECL|SWI0_EGU0_IRQn|enumerator|SWI0_EGU0_IRQn = 20, /*!< 20 SWI0_EGU0 */
DECL|SWI1_EGU1_IRQn|enumerator|SWI1_EGU1_IRQn = 21, /*!< 21 SWI1_EGU1 */
DECL|SWI2_IRQn|enumerator|SWI2_IRQn = 22, /*!< 22 SWI2 */
DECL|SWI3_IRQn|enumerator|SWI3_IRQn = 23, /*!< 23 SWI3 */
DECL|SWI4_IRQn|enumerator|SWI4_IRQn = 24, /*!< 24 SWI4 */
DECL|SWI5_IRQn|enumerator|SWI5_IRQn = 25, /*!< 25 SWI5 */
DECL|SYSTEMOFF|member|__O uint32_t SYSTEMOFF; /*!< System OFF register */
DECL|SysTick_IRQn|enumerator|SysTick_IRQn = -1, /*!< 15 System Tick Timer */
DECL|T0|member|__I uint32_t T0; /*!< Segment end T0 */
DECL|T0|member|__IO uint32_t T0; /*!< End point of 1st piece wise linear function */
DECL|T1|member|__I uint32_t T1; /*!< Segment end T1 */
DECL|T1|member|__IO uint32_t T1; /*!< End point of 2nd piece wise linear function */
DECL|T2|member|__I uint32_t T2; /*!< Segment end T2 */
DECL|T2|member|__IO uint32_t T2; /*!< End point of 3rd piece wise linear function */
DECL|T3|member|__I uint32_t T3; /*!< Segment end T3 */
DECL|T3|member|__IO uint32_t T3; /*!< End point of 4th piece wise linear function */
DECL|T4|member|__I uint32_t T4; /*!< Segment end T4 */
DECL|T4|member|__IO uint32_t T4; /*!< End point of 5th piece wise linear function */
DECL|TASKS_ACQUIRE|member|__O uint32_t TASKS_ACQUIRE; /*!< Acquire SPI semaphore */
DECL|TASKS_BCSTART|member|__O uint32_t TASKS_BCSTART; /*!< Start the bit counter */
DECL|TASKS_BCSTOP|member|__O uint32_t TASKS_BCSTOP; /*!< Stop the bit counter */
DECL|TASKS_CALIBRATEOFFSET|member|__O uint32_t TASKS_CALIBRATEOFFSET; /*!< Starts offset auto-calibration */
DECL|TASKS_CAL|member|__O uint32_t TASKS_CAL; /*!< Start calibration of LFRC oscillator */
DECL|TASKS_CAPTURE|member|__O uint32_t TASKS_CAPTURE[6]; /*!< Description collection[0]: Capture Timer value to CC[0] register */
DECL|TASKS_CHG|member|PPI_TASKS_CHG_Type TASKS_CHG[6]; /*!< Channel group tasks */
DECL|TASKS_CLEAR|member|__O uint32_t TASKS_CLEAR; /*!< Clear RTC COUNTER */
DECL|TASKS_CLEAR|member|__O uint32_t TASKS_CLEAR; /*!< Clear time */
DECL|TASKS_CLR|member|__O uint32_t TASKS_CLR[8]; /*!< Description collection[0]: Task for writing to pin specified
DECL|TASKS_CONSTLAT|member|__O uint32_t TASKS_CONSTLAT; /*!< Enable constant latency mode */
DECL|TASKS_COUNT|member|__O uint32_t TASKS_COUNT; /*!< Increment Timer (Counter mode only) */
DECL|TASKS_CRYPT|member|__O uint32_t TASKS_CRYPT; /*!< Start encryption/decryption. This operation will stop by itself
DECL|TASKS_CTSTART|member|__O uint32_t TASKS_CTSTART; /*!< Start calibration timer */
DECL|TASKS_CTSTOP|member|__O uint32_t TASKS_CTSTOP; /*!< Stop calibration timer */
DECL|TASKS_DISABLE|member|__O uint32_t TASKS_DISABLE; /*!< Disable RADIO */
DECL|TASKS_FLUSHRX|member|__O uint32_t TASKS_FLUSHRX; /*!< Flush RX FIFO into RX buffer */
DECL|TASKS_HFCLKSTART|member|__O uint32_t TASKS_HFCLKSTART; /*!< Start HFCLK crystal oscillator */
DECL|TASKS_HFCLKSTOP|member|__O uint32_t TASKS_HFCLKSTOP; /*!< Stop HFCLK crystal oscillator */
DECL|TASKS_KSGEN|member|__O uint32_t TASKS_KSGEN; /*!< Start generation of key-stream. This operation will stop by
DECL|TASKS_LFCLKSTART|member|__O uint32_t TASKS_LFCLKSTART; /*!< Start LFCLK source */
DECL|TASKS_LFCLKSTOP|member|__O uint32_t TASKS_LFCLKSTOP; /*!< Stop LFCLK source */
DECL|TASKS_LOWPWR|member|__O uint32_t TASKS_LOWPWR; /*!< Enable low power mode (variable latency) */
DECL|TASKS_NEXTSTEP|member|__O uint32_t TASKS_NEXTSTEP; /*!< Steps by one value in the current sequence on all enabled channels
DECL|TASKS_OUT|member|__O uint32_t TASKS_OUT[8]; /*!< Description collection[0]: Task for writing to pin specified
DECL|TASKS_PREPARERX|member|__O uint32_t TASKS_PREPARERX; /*!< Prepare the TWI slave to respond to a write command */
DECL|TASKS_PREPARETX|member|__O uint32_t TASKS_PREPARETX; /*!< Prepare the TWI slave to respond to a read command */
DECL|TASKS_RATEOVERRIDE|member|__O uint32_t TASKS_RATEOVERRIDE; /*!< Override DATARATE setting in MODE register with the contents
DECL|TASKS_RDCLRACC|member|__O uint32_t TASKS_RDCLRACC; /*!< Read and clear ACC */
DECL|TASKS_RDCLRDBL|member|__O uint32_t TASKS_RDCLRDBL; /*!< Read and clear ACCDBL */
DECL|TASKS_READCLRACC|member|__O uint32_t TASKS_READCLRACC; /*!< Read and clear ACC and ACCDBL */
DECL|TASKS_RELEASE|member|__O uint32_t TASKS_RELEASE; /*!< Release SPI semaphore, enabling the SPI slave to acquire it */
DECL|TASKS_RESUME|member|__O uint32_t TASKS_RESUME; /*!< Resume SPI transaction */
DECL|TASKS_RESUME|member|__O uint32_t TASKS_RESUME; /*!< Resume TWI transaction */
DECL|TASKS_RESUME|member|__O uint32_t TASKS_RESUME; /*!< Resume TWI transaction */
DECL|TASKS_RSSISTART|member|__O uint32_t TASKS_RSSISTART; /*!< Start the RSSI and take one single sample of the receive signal
DECL|TASKS_RSSISTOP|member|__O uint32_t TASKS_RSSISTOP; /*!< Stop the RSSI measurement */
DECL|TASKS_RXEN|member|__O uint32_t TASKS_RXEN; /*!< Enable RADIO in RX mode */
DECL|TASKS_SAMPLE|member|__O uint32_t TASKS_SAMPLE; /*!< Sample comparator value */
DECL|TASKS_SAMPLE|member|__O uint32_t TASKS_SAMPLE; /*!< Take one ADC sample, if scan is enabled all channels are sampled */
DECL|TASKS_SEQSTART|member|__O uint32_t TASKS_SEQSTART[2]; /*!< Description collection[0]: Loads the first PWM value on all
DECL|TASKS_SET|member|__O uint32_t TASKS_SET[8]; /*!< Description collection[0]: Task for writing to pin specified
DECL|TASKS_SHUTDOWN|member|__O uint32_t TASKS_SHUTDOWN; /*!< Deprecated register - Shut down timer */
DECL|TASKS_STARTECB|member|__O uint32_t TASKS_STARTECB; /*!< Start ECB block encrypt */
DECL|TASKS_STARTRX|member|__O uint32_t TASKS_STARTRX; /*!< Start TWI receive sequence */
DECL|TASKS_STARTRX|member|__O uint32_t TASKS_STARTRX; /*!< Start UART receiver */
DECL|TASKS_STARTTX|member|__O uint32_t TASKS_STARTTX; /*!< Start TWI transmit sequence */
DECL|TASKS_STARTTX|member|__O uint32_t TASKS_STARTTX; /*!< Start UART transmitter */
DECL|TASKS_START|member|__O uint32_t TASKS_START; /*!< Start RADIO */
DECL|TASKS_START|member|__O uint32_t TASKS_START; /*!< Start RTC COUNTER */
DECL|TASKS_START|member|__O uint32_t TASKS_START; /*!< Start SPI transaction */
DECL|TASKS_START|member|__O uint32_t TASKS_START; /*!< Start Timer */
DECL|TASKS_START|member|__O uint32_t TASKS_START; /*!< Start comparator */
DECL|TASKS_START|member|__O uint32_t TASKS_START; /*!< Start resolving addresses based on IRKs specified in the IRK
DECL|TASKS_START|member|__O uint32_t TASKS_START; /*!< Start temperature measurement */
DECL|TASKS_START|member|__O uint32_t TASKS_START; /*!< Start the ADC and prepare the result buffer in RAM */
DECL|TASKS_START|member|__O uint32_t TASKS_START; /*!< Start the watchdog */
DECL|TASKS_START|member|__O uint32_t TASKS_START; /*!< Starts continuous PDM transfer */
DECL|TASKS_START|member|__O uint32_t TASKS_START; /*!< Task starting the quadrature decoder */
DECL|TASKS_START|member|__O uint32_t TASKS_START; /*!< Task starting the random number generator */
DECL|TASKS_STOPECB|member|__O uint32_t TASKS_STOPECB; /*!< Abort a possible executing ECB operation */
DECL|TASKS_STOPRX|member|__O uint32_t TASKS_STOPRX; /*!< Stop UART receiver */
DECL|TASKS_STOPTX|member|__O uint32_t TASKS_STOPTX; /*!< Stop UART transmitter */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stop RADIO */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stop RTC COUNTER */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stop SPI transaction */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stop TWI transaction */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stop TWI transaction. Must be issued while the TWI master is
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stop Timer */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stop comparator */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stop encryption/decryption */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stop resolving addresses */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stop temperature measurement */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stop the ADC and terminate any on-going conversion */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stops PDM transfer */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Stops PWM pulse generation on all channels at the end of current
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Task stopping the quadrature decoder */
DECL|TASKS_STOP|member|__O uint32_t TASKS_STOP; /*!< Task stopping the random number generator */
DECL|TASKS_SUSPEND|member|__O uint32_t TASKS_SUSPEND; /*!< Suspend SPI transaction */
DECL|TASKS_SUSPEND|member|__O uint32_t TASKS_SUSPEND; /*!< Suspend TWI transaction */
DECL|TASKS_SUSPEND|member|__O uint32_t TASKS_SUSPEND; /*!< Suspend TWI transaction */
DECL|TASKS_TRIGGER|member|__O uint32_t TASKS_TRIGGER[16]; /*!< Description collection[0]: Trigger 0 for triggering the corresponding
DECL|TASKS_TRIGOVRFLW|member|__O uint32_t TASKS_TRIGOVRFLW; /*!< Set COUNTER to 0xFFFFF0 */
DECL|TASKS_TXEN|member|__O uint32_t TASKS_TXEN; /*!< Enable RADIO in TX mode */
DECL|TEMP_IRQn|enumerator|TEMP_IRQn = 12, /*!< 12 TEMP */
DECL|TEMP|member|FICR_TEMP_Type TEMP; /*!< Registers storing factory TEMP module linearization coefficients */
DECL|TEMP|member|__I int32_t TEMP; /*!< Temperature in degC (0.25deg steps) */
DECL|TEP|member|__IO uint32_t TEP; /*!< Description cluster[0]: Channel 0 task end-point */
DECL|TEP|member|__IO uint32_t TEP; /*!< Description cluster[0]: Channel 0 task end-point */
DECL|TH|member|__IO uint32_t TH; /*!< Threshold configuration for hysteresis unit */
DECL|TIFS|member|__IO uint32_t TIFS; /*!< Inter Frame Spacing in us */
DECL|TIMER0_IRQn|enumerator|TIMER0_IRQn = 8, /*!< 8 TIMER0 */
DECL|TIMER1_IRQn|enumerator|TIMER1_IRQn = 9, /*!< 9 TIMER1 */
DECL|TIMER2_IRQn|enumerator|TIMER2_IRQn = 10, /*!< 10 TIMER2 */
DECL|TWIM0_TWIS0_IRQn|enumerator|TWIM0_TWIS0_IRQn = 3, /*!< 3 TWIM0_TWIS0 */
DECL|TWIM_PSEL_Type|typedef|} TWIM_PSEL_Type;
DECL|TWIM_RXD_Type|typedef|} TWIM_RXD_Type;
DECL|TWIM_TXD_Type|typedef|} TWIM_TXD_Type;
DECL|TWIS_PSEL_Type|typedef|} TWIS_PSEL_Type;
DECL|TWIS_RXD_Type|typedef|} TWIS_RXD_Type;
DECL|TWIS_TXD_Type|typedef|} TWIS_TXD_Type;
DECL|TXADDRESS|member|__IO uint32_t TXADDRESS; /*!< Transmit address select */
DECL|TXD|member|SPIM_TXD_Type TXD; /*!< TXD EasyDMA channel */
DECL|TXD|member|SPIS_TXD_Type TXD; /*!< Unspecified */
DECL|TXD|member|TWIM_TXD_Type TXD; /*!< TXD EasyDMA channel */
DECL|TXD|member|TWIS_TXD_Type TXD; /*!< TXD EasyDMA channel */
DECL|TXD|member|UARTE_TXD_Type TXD; /*!< TXD EasyDMA channel */
DECL|TXD|member|__IO uint32_t TXD; /*!< Pin select for TXD signal */
DECL|TXPOWER|member|__IO uint32_t TXPOWER; /*!< Output power */
DECL|UARTE0_IRQn|enumerator|UARTE0_IRQn = 2, /*!< 2 UARTE0 */
DECL|UARTE_PSEL_Type|typedef|} UARTE_PSEL_Type;
DECL|UARTE_RXD_Type|typedef|} UARTE_RXD_Type;
DECL|UARTE_TXD_Type|typedef|} UARTE_TXD_Type;
DECL|UNUSED0|member|__IO uint32_t UNUSED0; /*!< Unspecified */
DECL|UNUSED0|member|__IO uint32_t UNUSED0; /*!< Unspecified */
DECL|UNUSED0|member|__IO uint32_t UNUSED0; /*!< Unspecified */
DECL|UNUSED0|member|__IO uint32_t UNUSED0[3]; /*!< Description collection[0]: Unspecified */
DECL|UNUSED1|member|__IO uint32_t UNUSED1; /*!< Unspecified */
DECL|UNUSED2|member|__IO uint32_t UNUSED2; /*!< Unspecified */
DECL|UNUSED3|member|__IO uint32_t UNUSED3; /*!< Unspecified */
DECL|UNUSED|member|__I uint32_t UNUSED; /*!< Unused. */
DECL|UsageFault_IRQn|enumerator|UsageFault_IRQn = -10, /*!< 6 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
DECL|VALUE|member|__I uint32_t VALUE; /*!< Output random number */
DECL|VARIANT|member|__I uint32_t VARIANT; /*!< Part variant, hardware version and production configuration */
DECL|WDT_IRQn|enumerator|WDT_IRQn = 16, /*!< 16 WDT */
DECL|__CM4_REV|macro|__CM4_REV
DECL|__FPU_PRESENT|macro|__FPU_PRESENT
DECL|__MPU_PRESENT|macro|__MPU_PRESENT
DECL|__NVIC_PRIO_BITS|macro|__NVIC_PRIO_BITS
DECL|__Vendor_SysTickConfig|macro|__Vendor_SysTickConfig
