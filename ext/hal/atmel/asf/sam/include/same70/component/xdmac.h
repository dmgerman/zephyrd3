DECL|BID|member|uint32_t BID:1; /**< bit: 0 End of Block Interrupt Disable Bit */
DECL|BIE|member|uint32_t BIE:1; /**< bit: 0 End of Block Interrupt Enable Bit */
DECL|BIM|member|uint32_t BIM:1; /**< bit: 0 End of Block Interrupt Mask Bit */
DECL|BIS|member|uint32_t BIS:1; /**< bit: 0 End of Block Interrupt Status Bit */
DECL|BLEN|member|uint32_t BLEN:12; /**< bit: 0..11 Channel x Block Length */
DECL|BXKBEN|member|uint32_t BXKBEN:1; /**< bit: 8 Boundary X Kilobyte Enable */
DECL|CGDISFIFO|member|uint32_t CGDISFIFO:1; /**< bit: 2 FIFO Clock Gating Disable */
DECL|CGDISIF|member|uint32_t CGDISIF:1; /**< bit: 3 Bus Interface Clock Gating Disable */
DECL|CGDISPIPE|member|uint32_t CGDISPIPE:1; /**< bit: 1 Pipeline Clock Gating Disable */
DECL|CGDISREG|member|uint32_t CGDISREG:1; /**< bit: 0 Configuration Registers Clock Gating Disable */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|CSIZE|member|uint32_t CSIZE:3; /**< bit: 8..10 Channel x Chunk Size */
DECL|DAM|member|uint32_t DAM:2; /**< bit: 18..19 Channel x Destination Addressing Mode */
DECL|DA|member|uint32_t DA:32; /**< bit: 0..31 Channel x Destination Address */
DECL|DDS_MSP|member|uint32_t DDS_MSP:16; /**< bit: 16..31 Channel x Destination Data Stride or Memory Set Pattern */
DECL|DI0|member|uint32_t DI0:1; /**< bit: 0 XDMAC Channel 0 Disable Bit */
DECL|DI10|member|uint32_t DI10:1; /**< bit: 10 XDMAC Channel 10 Disable Bit */
DECL|DI11|member|uint32_t DI11:1; /**< bit: 11 XDMAC Channel 11 Disable Bit */
DECL|DI12|member|uint32_t DI12:1; /**< bit: 12 XDMAC Channel 12 Disable Bit */
DECL|DI13|member|uint32_t DI13:1; /**< bit: 13 XDMAC Channel 13 Disable Bit */
DECL|DI14|member|uint32_t DI14:1; /**< bit: 14 XDMAC Channel 14 Disable Bit */
DECL|DI15|member|uint32_t DI15:1; /**< bit: 15 XDMAC Channel 15 Disable Bit */
DECL|DI16|member|uint32_t DI16:1; /**< bit: 16 XDMAC Channel 16 Disable Bit */
DECL|DI17|member|uint32_t DI17:1; /**< bit: 17 XDMAC Channel 17 Disable Bit */
DECL|DI18|member|uint32_t DI18:1; /**< bit: 18 XDMAC Channel 18 Disable Bit */
DECL|DI19|member|uint32_t DI19:1; /**< bit: 19 XDMAC Channel 19 Disable Bit */
DECL|DI1|member|uint32_t DI1:1; /**< bit: 1 XDMAC Channel 1 Disable Bit */
DECL|DI20|member|uint32_t DI20:1; /**< bit: 20 XDMAC Channel 20 Disable Bit */
DECL|DI21|member|uint32_t DI21:1; /**< bit: 21 XDMAC Channel 21 Disable Bit */
DECL|DI22|member|uint32_t DI22:1; /**< bit: 22 XDMAC Channel 22 Disable Bit */
DECL|DI23|member|uint32_t DI23:1; /**< bit: 23 XDMAC Channel 23 Disable Bit */
DECL|DI2|member|uint32_t DI2:1; /**< bit: 2 XDMAC Channel 2 Disable Bit */
DECL|DI3|member|uint32_t DI3:1; /**< bit: 3 XDMAC Channel 3 Disable Bit */
DECL|DI4|member|uint32_t DI4:1; /**< bit: 4 XDMAC Channel 4 Disable Bit */
DECL|DI5|member|uint32_t DI5:1; /**< bit: 5 XDMAC Channel 5 Disable Bit */
DECL|DI6|member|uint32_t DI6:1; /**< bit: 6 XDMAC Channel 6 Disable Bit */
DECL|DI7|member|uint32_t DI7:1; /**< bit: 7 XDMAC Channel 7 Disable Bit */
DECL|DI8|member|uint32_t DI8:1; /**< bit: 8 XDMAC Channel 8 Disable Bit */
DECL|DI9|member|uint32_t DI9:1; /**< bit: 9 XDMAC Channel 9 Disable Bit */
DECL|DID|member|uint32_t DID:1; /**< bit: 2 End of Disable Interrupt Disable Bit */
DECL|DIE|member|uint32_t DIE:1; /**< bit: 2 End of Disable Interrupt Enable Bit */
DECL|DIF|member|uint32_t DIF:1; /**< bit: 14 Channel x Destination Interface Identifier */
DECL|DIM|member|uint32_t DIM:1; /**< bit: 2 End of Disable Interrupt Mask Bit */
DECL|DIS|member|uint32_t DIS:1; /**< bit: 2 End of Disable Interrupt Status Bit */
DECL|DI|member|uint32_t DI:24; /**< bit: 0..23 XDMAC Channel 23 Disable Bit */
DECL|DSYNC|member|uint32_t DSYNC:1; /**< bit: 4 Channel x Synchronization */
DECL|DUBS|member|uint32_t DUBS:24; /**< bit: 0..23 Channel x Destination Microblock Stride */
DECL|DWIDTH|member|uint32_t DWIDTH:2; /**< bit: 11..12 Channel x Data Width */
DECL|EN0|member|uint32_t EN0:1; /**< bit: 0 XDMAC Channel 0 Enable Bit */
DECL|EN10|member|uint32_t EN10:1; /**< bit: 10 XDMAC Channel 10 Enable Bit */
DECL|EN11|member|uint32_t EN11:1; /**< bit: 11 XDMAC Channel 11 Enable Bit */
DECL|EN12|member|uint32_t EN12:1; /**< bit: 12 XDMAC Channel 12 Enable Bit */
DECL|EN13|member|uint32_t EN13:1; /**< bit: 13 XDMAC Channel 13 Enable Bit */
DECL|EN14|member|uint32_t EN14:1; /**< bit: 14 XDMAC Channel 14 Enable Bit */
DECL|EN15|member|uint32_t EN15:1; /**< bit: 15 XDMAC Channel 15 Enable Bit */
DECL|EN16|member|uint32_t EN16:1; /**< bit: 16 XDMAC Channel 16 Enable Bit */
DECL|EN17|member|uint32_t EN17:1; /**< bit: 17 XDMAC Channel 17 Enable Bit */
DECL|EN18|member|uint32_t EN18:1; /**< bit: 18 XDMAC Channel 18 Enable Bit */
DECL|EN19|member|uint32_t EN19:1; /**< bit: 19 XDMAC Channel 19 Enable Bit */
DECL|EN1|member|uint32_t EN1:1; /**< bit: 1 XDMAC Channel 1 Enable Bit */
DECL|EN20|member|uint32_t EN20:1; /**< bit: 20 XDMAC Channel 20 Enable Bit */
DECL|EN21|member|uint32_t EN21:1; /**< bit: 21 XDMAC Channel 21 Enable Bit */
DECL|EN22|member|uint32_t EN22:1; /**< bit: 22 XDMAC Channel 22 Enable Bit */
DECL|EN23|member|uint32_t EN23:1; /**< bit: 23 XDMAC Channel 23 Enable Bit */
DECL|EN2|member|uint32_t EN2:1; /**< bit: 2 XDMAC Channel 2 Enable Bit */
DECL|EN3|member|uint32_t EN3:1; /**< bit: 3 XDMAC Channel 3 Enable Bit */
DECL|EN4|member|uint32_t EN4:1; /**< bit: 4 XDMAC Channel 4 Enable Bit */
DECL|EN5|member|uint32_t EN5:1; /**< bit: 5 XDMAC Channel 5 Enable Bit */
DECL|EN6|member|uint32_t EN6:1; /**< bit: 6 XDMAC Channel 6 Enable Bit */
DECL|EN7|member|uint32_t EN7:1; /**< bit: 7 XDMAC Channel 7 Enable Bit */
DECL|EN8|member|uint32_t EN8:1; /**< bit: 8 XDMAC Channel 8 Enable Bit */
DECL|EN9|member|uint32_t EN9:1; /**< bit: 9 XDMAC Channel 9 Enable Bit */
DECL|EN|member|uint32_t EN:24; /**< bit: 0..23 XDMAC Channel 23 Enable Bit */
DECL|FID|member|uint32_t FID:1; /**< bit: 3 End of Flush Interrupt Disable Bit */
DECL|FIE|member|uint32_t FIE:1; /**< bit: 3 End of Flush Interrupt Enable Bit */
DECL|FIFO_SZ|member|uint32_t FIFO_SZ:11; /**< bit: 5..15 Number of Bytes */
DECL|FIM|member|uint32_t FIM:1; /**< bit: 3 End of Flush Interrupt Mask Bit */
DECL|FIS|member|uint32_t FIS:1; /**< bit: 3 End of Flush Interrupt Status Bit */
DECL|ID0|member|uint32_t ID0:1; /**< bit: 0 XDMAC Channel 0 Interrupt Disable Bit */
DECL|ID10|member|uint32_t ID10:1; /**< bit: 10 XDMAC Channel 10 Interrupt Disable Bit */
DECL|ID11|member|uint32_t ID11:1; /**< bit: 11 XDMAC Channel 11 Interrupt Disable Bit */
DECL|ID12|member|uint32_t ID12:1; /**< bit: 12 XDMAC Channel 12 Interrupt Disable Bit */
DECL|ID13|member|uint32_t ID13:1; /**< bit: 13 XDMAC Channel 13 Interrupt Disable Bit */
DECL|ID14|member|uint32_t ID14:1; /**< bit: 14 XDMAC Channel 14 Interrupt Disable Bit */
DECL|ID15|member|uint32_t ID15:1; /**< bit: 15 XDMAC Channel 15 Interrupt Disable Bit */
DECL|ID16|member|uint32_t ID16:1; /**< bit: 16 XDMAC Channel 16 Interrupt Disable Bit */
DECL|ID17|member|uint32_t ID17:1; /**< bit: 17 XDMAC Channel 17 Interrupt Disable Bit */
DECL|ID18|member|uint32_t ID18:1; /**< bit: 18 XDMAC Channel 18 Interrupt Disable Bit */
DECL|ID19|member|uint32_t ID19:1; /**< bit: 19 XDMAC Channel 19 Interrupt Disable Bit */
DECL|ID1|member|uint32_t ID1:1; /**< bit: 1 XDMAC Channel 1 Interrupt Disable Bit */
DECL|ID20|member|uint32_t ID20:1; /**< bit: 20 XDMAC Channel 20 Interrupt Disable Bit */
DECL|ID21|member|uint32_t ID21:1; /**< bit: 21 XDMAC Channel 21 Interrupt Disable Bit */
DECL|ID22|member|uint32_t ID22:1; /**< bit: 22 XDMAC Channel 22 Interrupt Disable Bit */
DECL|ID23|member|uint32_t ID23:1; /**< bit: 23 XDMAC Channel 23 Interrupt Disable Bit */
DECL|ID2|member|uint32_t ID2:1; /**< bit: 2 XDMAC Channel 2 Interrupt Disable Bit */
DECL|ID3|member|uint32_t ID3:1; /**< bit: 3 XDMAC Channel 3 Interrupt Disable Bit */
DECL|ID4|member|uint32_t ID4:1; /**< bit: 4 XDMAC Channel 4 Interrupt Disable Bit */
DECL|ID5|member|uint32_t ID5:1; /**< bit: 5 XDMAC Channel 5 Interrupt Disable Bit */
DECL|ID6|member|uint32_t ID6:1; /**< bit: 6 XDMAC Channel 6 Interrupt Disable Bit */
DECL|ID7|member|uint32_t ID7:1; /**< bit: 7 XDMAC Channel 7 Interrupt Disable Bit */
DECL|ID8|member|uint32_t ID8:1; /**< bit: 8 XDMAC Channel 8 Interrupt Disable Bit */
DECL|ID9|member|uint32_t ID9:1; /**< bit: 9 XDMAC Channel 9 Interrupt Disable Bit */
DECL|ID|member|uint32_t ID:24; /**< bit: 0..23 XDMAC Channel 23 Interrupt Disable Bit */
DECL|IE0|member|uint32_t IE0:1; /**< bit: 0 XDMAC Channel 0 Interrupt Enable Bit */
DECL|IE10|member|uint32_t IE10:1; /**< bit: 10 XDMAC Channel 10 Interrupt Enable Bit */
DECL|IE11|member|uint32_t IE11:1; /**< bit: 11 XDMAC Channel 11 Interrupt Enable Bit */
DECL|IE12|member|uint32_t IE12:1; /**< bit: 12 XDMAC Channel 12 Interrupt Enable Bit */
DECL|IE13|member|uint32_t IE13:1; /**< bit: 13 XDMAC Channel 13 Interrupt Enable Bit */
DECL|IE14|member|uint32_t IE14:1; /**< bit: 14 XDMAC Channel 14 Interrupt Enable Bit */
DECL|IE15|member|uint32_t IE15:1; /**< bit: 15 XDMAC Channel 15 Interrupt Enable Bit */
DECL|IE16|member|uint32_t IE16:1; /**< bit: 16 XDMAC Channel 16 Interrupt Enable Bit */
DECL|IE17|member|uint32_t IE17:1; /**< bit: 17 XDMAC Channel 17 Interrupt Enable Bit */
DECL|IE18|member|uint32_t IE18:1; /**< bit: 18 XDMAC Channel 18 Interrupt Enable Bit */
DECL|IE19|member|uint32_t IE19:1; /**< bit: 19 XDMAC Channel 19 Interrupt Enable Bit */
DECL|IE1|member|uint32_t IE1:1; /**< bit: 1 XDMAC Channel 1 Interrupt Enable Bit */
DECL|IE20|member|uint32_t IE20:1; /**< bit: 20 XDMAC Channel 20 Interrupt Enable Bit */
DECL|IE21|member|uint32_t IE21:1; /**< bit: 21 XDMAC Channel 21 Interrupt Enable Bit */
DECL|IE22|member|uint32_t IE22:1; /**< bit: 22 XDMAC Channel 22 Interrupt Enable Bit */
DECL|IE23|member|uint32_t IE23:1; /**< bit: 23 XDMAC Channel 23 Interrupt Enable Bit */
DECL|IE2|member|uint32_t IE2:1; /**< bit: 2 XDMAC Channel 2 Interrupt Enable Bit */
DECL|IE3|member|uint32_t IE3:1; /**< bit: 3 XDMAC Channel 3 Interrupt Enable Bit */
DECL|IE4|member|uint32_t IE4:1; /**< bit: 4 XDMAC Channel 4 Interrupt Enable Bit */
DECL|IE5|member|uint32_t IE5:1; /**< bit: 5 XDMAC Channel 5 Interrupt Enable Bit */
DECL|IE6|member|uint32_t IE6:1; /**< bit: 6 XDMAC Channel 6 Interrupt Enable Bit */
DECL|IE7|member|uint32_t IE7:1; /**< bit: 7 XDMAC Channel 7 Interrupt Enable Bit */
DECL|IE8|member|uint32_t IE8:1; /**< bit: 8 XDMAC Channel 8 Interrupt Enable Bit */
DECL|IE9|member|uint32_t IE9:1; /**< bit: 9 XDMAC Channel 9 Interrupt Enable Bit */
DECL|IE|member|uint32_t IE:24; /**< bit: 0..23 XDMAC Channel 23 Interrupt Enable Bit */
DECL|IM0|member|uint32_t IM0:1; /**< bit: 0 XDMAC Channel 0 Interrupt Mask Bit */
DECL|IM10|member|uint32_t IM10:1; /**< bit: 10 XDMAC Channel 10 Interrupt Mask Bit */
DECL|IM11|member|uint32_t IM11:1; /**< bit: 11 XDMAC Channel 11 Interrupt Mask Bit */
DECL|IM12|member|uint32_t IM12:1; /**< bit: 12 XDMAC Channel 12 Interrupt Mask Bit */
DECL|IM13|member|uint32_t IM13:1; /**< bit: 13 XDMAC Channel 13 Interrupt Mask Bit */
DECL|IM14|member|uint32_t IM14:1; /**< bit: 14 XDMAC Channel 14 Interrupt Mask Bit */
DECL|IM15|member|uint32_t IM15:1; /**< bit: 15 XDMAC Channel 15 Interrupt Mask Bit */
DECL|IM16|member|uint32_t IM16:1; /**< bit: 16 XDMAC Channel 16 Interrupt Mask Bit */
DECL|IM17|member|uint32_t IM17:1; /**< bit: 17 XDMAC Channel 17 Interrupt Mask Bit */
DECL|IM18|member|uint32_t IM18:1; /**< bit: 18 XDMAC Channel 18 Interrupt Mask Bit */
DECL|IM19|member|uint32_t IM19:1; /**< bit: 19 XDMAC Channel 19 Interrupt Mask Bit */
DECL|IM1|member|uint32_t IM1:1; /**< bit: 1 XDMAC Channel 1 Interrupt Mask Bit */
DECL|IM20|member|uint32_t IM20:1; /**< bit: 20 XDMAC Channel 20 Interrupt Mask Bit */
DECL|IM21|member|uint32_t IM21:1; /**< bit: 21 XDMAC Channel 21 Interrupt Mask Bit */
DECL|IM22|member|uint32_t IM22:1; /**< bit: 22 XDMAC Channel 22 Interrupt Mask Bit */
DECL|IM23|member|uint32_t IM23:1; /**< bit: 23 XDMAC Channel 23 Interrupt Mask Bit */
DECL|IM2|member|uint32_t IM2:1; /**< bit: 2 XDMAC Channel 2 Interrupt Mask Bit */
DECL|IM3|member|uint32_t IM3:1; /**< bit: 3 XDMAC Channel 3 Interrupt Mask Bit */
DECL|IM4|member|uint32_t IM4:1; /**< bit: 4 XDMAC Channel 4 Interrupt Mask Bit */
DECL|IM5|member|uint32_t IM5:1; /**< bit: 5 XDMAC Channel 5 Interrupt Mask Bit */
DECL|IM6|member|uint32_t IM6:1; /**< bit: 6 XDMAC Channel 6 Interrupt Mask Bit */
DECL|IM7|member|uint32_t IM7:1; /**< bit: 7 XDMAC Channel 7 Interrupt Mask Bit */
DECL|IM8|member|uint32_t IM8:1; /**< bit: 8 XDMAC Channel 8 Interrupt Mask Bit */
DECL|IM9|member|uint32_t IM9:1; /**< bit: 9 XDMAC Channel 9 Interrupt Mask Bit */
DECL|IM|member|uint32_t IM:24; /**< bit: 0..23 XDMAC Channel 23 Interrupt Mask Bit */
DECL|INITD|member|uint32_t INITD:1; /**< bit: 21 Channel Initialization Terminated (this bit is read-only) */
DECL|IS0|member|uint32_t IS0:1; /**< bit: 0 XDMAC Channel 0 Interrupt Status Bit */
DECL|IS10|member|uint32_t IS10:1; /**< bit: 10 XDMAC Channel 10 Interrupt Status Bit */
DECL|IS11|member|uint32_t IS11:1; /**< bit: 11 XDMAC Channel 11 Interrupt Status Bit */
DECL|IS12|member|uint32_t IS12:1; /**< bit: 12 XDMAC Channel 12 Interrupt Status Bit */
DECL|IS13|member|uint32_t IS13:1; /**< bit: 13 XDMAC Channel 13 Interrupt Status Bit */
DECL|IS14|member|uint32_t IS14:1; /**< bit: 14 XDMAC Channel 14 Interrupt Status Bit */
DECL|IS15|member|uint32_t IS15:1; /**< bit: 15 XDMAC Channel 15 Interrupt Status Bit */
DECL|IS16|member|uint32_t IS16:1; /**< bit: 16 XDMAC Channel 16 Interrupt Status Bit */
DECL|IS17|member|uint32_t IS17:1; /**< bit: 17 XDMAC Channel 17 Interrupt Status Bit */
DECL|IS18|member|uint32_t IS18:1; /**< bit: 18 XDMAC Channel 18 Interrupt Status Bit */
DECL|IS19|member|uint32_t IS19:1; /**< bit: 19 XDMAC Channel 19 Interrupt Status Bit */
DECL|IS1|member|uint32_t IS1:1; /**< bit: 1 XDMAC Channel 1 Interrupt Status Bit */
DECL|IS20|member|uint32_t IS20:1; /**< bit: 20 XDMAC Channel 20 Interrupt Status Bit */
DECL|IS21|member|uint32_t IS21:1; /**< bit: 21 XDMAC Channel 21 Interrupt Status Bit */
DECL|IS22|member|uint32_t IS22:1; /**< bit: 22 XDMAC Channel 22 Interrupt Status Bit */
DECL|IS23|member|uint32_t IS23:1; /**< bit: 23 XDMAC Channel 23 Interrupt Status Bit */
DECL|IS2|member|uint32_t IS2:1; /**< bit: 2 XDMAC Channel 2 Interrupt Status Bit */
DECL|IS3|member|uint32_t IS3:1; /**< bit: 3 XDMAC Channel 3 Interrupt Status Bit */
DECL|IS4|member|uint32_t IS4:1; /**< bit: 4 XDMAC Channel 4 Interrupt Status Bit */
DECL|IS5|member|uint32_t IS5:1; /**< bit: 5 XDMAC Channel 5 Interrupt Status Bit */
DECL|IS6|member|uint32_t IS6:1; /**< bit: 6 XDMAC Channel 6 Interrupt Status Bit */
DECL|IS7|member|uint32_t IS7:1; /**< bit: 7 XDMAC Channel 7 Interrupt Status Bit */
DECL|IS8|member|uint32_t IS8:1; /**< bit: 8 XDMAC Channel 8 Interrupt Status Bit */
DECL|IS9|member|uint32_t IS9:1; /**< bit: 9 XDMAC Channel 9 Interrupt Status Bit */
DECL|IS|member|uint32_t IS:24; /**< bit: 0..23 XDMAC Channel 23 Interrupt Status Bit */
DECL|LID|member|uint32_t LID:1; /**< bit: 1 End of Linked List Interrupt Disable Bit */
DECL|LIE|member|uint32_t LIE:1; /**< bit: 1 End of Linked List Interrupt Enable Bit */
DECL|LIM|member|uint32_t LIM:1; /**< bit: 1 End of Linked List Interrupt Mask Bit */
DECL|LIS|member|uint32_t LIS:1; /**< bit: 1 End of Linked List Interrupt Status Bit */
DECL|MBSIZE|member|uint32_t MBSIZE:2; /**< bit: 1..2 Channel x Memory Burst Size */
DECL|MEMSET|member|uint32_t MEMSET:1; /**< bit: 7 Channel x Fill Block of memory */
DECL|NB_CH|member|uint32_t NB_CH:5; /**< bit: 0..4 Number of Channels Minus One */
DECL|NB_REQ|member|uint32_t NB_REQ:7; /**< bit: 16..22 Number of Peripheral Requests Minus One */
DECL|NDAIF|member|uint32_t NDAIF:1; /**< bit: 0 Channel x Next Descriptor Interface */
DECL|NDA|member|uint32_t NDA:30; /**< bit: 2..31 Channel x Next Descriptor Address */
DECL|NDDUP|member|uint32_t NDDUP:1; /**< bit: 2 Channel x Next Descriptor Destination Update */
DECL|NDE|member|uint32_t NDE:1; /**< bit: 0 Channel x Next Descriptor Enable */
DECL|NDSUP|member|uint32_t NDSUP:1; /**< bit: 1 Channel x Next Descriptor Source Update */
DECL|NDVIEW|member|uint32_t NDVIEW:2; /**< bit: 3..4 Channel x Next Descriptor View */
DECL|PERID|member|uint32_t PERID:7; /**< bit: 24..30 Channel x Peripheral Hardware Request Line Identifier */
DECL|PW0|member|uint32_t PW0:4; /**< bit: 0..3 Pool Weight 0 */
DECL|PW1|member|uint32_t PW1:4; /**< bit: 4..7 Pool Weight 1 */
DECL|PW2|member|uint32_t PW2:4; /**< bit: 8..11 Pool Weight 2 */
DECL|PW3|member|uint32_t PW3:4; /**< bit: 12..15 Pool Weight 3 */
DECL|RBEID|member|uint32_t RBEID:1; /**< bit: 4 Read Bus Error Interrupt Disable Bit */
DECL|RBEIM|member|uint32_t RBEIM:1; /**< bit: 4 Read Bus Error Interrupt Mask Bit */
DECL|RBEIS|member|uint32_t RBEIS:1; /**< bit: 4 Read Bus Error Interrupt Status Bit */
DECL|RBIE|member|uint32_t RBIE:1; /**< bit: 4 Read Bus Error Interrupt Enable Bit */
DECL|RDIP|member|uint32_t RDIP:1; /**< bit: 22 Read in Progress (this bit is read-only) */
DECL|REV_XDMAC|macro|REV_XDMAC
DECL|ROID|member|uint32_t ROID:1; /**< bit: 6 Request Overflow Error Interrupt Disable Bit */
DECL|ROIE|member|uint32_t ROIE:1; /**< bit: 6 Request Overflow Error Interrupt Enable Bit */
DECL|ROIM|member|uint32_t ROIM:1; /**< bit: 6 Request Overflow Error Interrupt Mask Bit */
DECL|ROIS|member|uint32_t ROIS:1; /**< bit: 6 Request Overflow Error Interrupt Status Bit */
DECL|RS0|member|uint32_t RS0:1; /**< bit: 0 XDMAC Channel 0 Read Suspend Bit */
DECL|RS10|member|uint32_t RS10:1; /**< bit: 10 XDMAC Channel 10 Read Suspend Bit */
DECL|RS11|member|uint32_t RS11:1; /**< bit: 11 XDMAC Channel 11 Read Suspend Bit */
DECL|RS12|member|uint32_t RS12:1; /**< bit: 12 XDMAC Channel 12 Read Suspend Bit */
DECL|RS13|member|uint32_t RS13:1; /**< bit: 13 XDMAC Channel 13 Read Suspend Bit */
DECL|RS14|member|uint32_t RS14:1; /**< bit: 14 XDMAC Channel 14 Read Suspend Bit */
DECL|RS15|member|uint32_t RS15:1; /**< bit: 15 XDMAC Channel 15 Read Suspend Bit */
DECL|RS16|member|uint32_t RS16:1; /**< bit: 16 XDMAC Channel 16 Read Suspend Bit */
DECL|RS17|member|uint32_t RS17:1; /**< bit: 17 XDMAC Channel 17 Read Suspend Bit */
DECL|RS18|member|uint32_t RS18:1; /**< bit: 18 XDMAC Channel 18 Read Suspend Bit */
DECL|RS19|member|uint32_t RS19:1; /**< bit: 19 XDMAC Channel 19 Read Suspend Bit */
DECL|RS1|member|uint32_t RS1:1; /**< bit: 1 XDMAC Channel 1 Read Suspend Bit */
DECL|RS20|member|uint32_t RS20:1; /**< bit: 20 XDMAC Channel 20 Read Suspend Bit */
DECL|RS21|member|uint32_t RS21:1; /**< bit: 21 XDMAC Channel 21 Read Suspend Bit */
DECL|RS22|member|uint32_t RS22:1; /**< bit: 22 XDMAC Channel 22 Read Suspend Bit */
DECL|RS23|member|uint32_t RS23:1; /**< bit: 23 XDMAC Channel 23 Read Suspend Bit */
DECL|RS2|member|uint32_t RS2:1; /**< bit: 2 XDMAC Channel 2 Read Suspend Bit */
DECL|RS3|member|uint32_t RS3:1; /**< bit: 3 XDMAC Channel 3 Read Suspend Bit */
DECL|RS4|member|uint32_t RS4:1; /**< bit: 4 XDMAC Channel 4 Read Suspend Bit */
DECL|RS5|member|uint32_t RS5:1; /**< bit: 5 XDMAC Channel 5 Read Suspend Bit */
DECL|RS6|member|uint32_t RS6:1; /**< bit: 6 XDMAC Channel 6 Read Suspend Bit */
DECL|RS7|member|uint32_t RS7:1; /**< bit: 7 XDMAC Channel 7 Read Suspend Bit */
DECL|RS8|member|uint32_t RS8:1; /**< bit: 8 XDMAC Channel 8 Read Suspend Bit */
DECL|RS9|member|uint32_t RS9:1; /**< bit: 9 XDMAC Channel 9 Read Suspend Bit */
DECL|RS|member|uint32_t RS:24; /**< bit: 0..23 XDMAC Channel 23 Read Suspend Bit */
DECL|RWR0|member|uint32_t RWR0:1; /**< bit: 0 XDMAC Channel 0 Read Write Resume Bit */
DECL|RWR10|member|uint32_t RWR10:1; /**< bit: 10 XDMAC Channel 10 Read Write Resume Bit */
DECL|RWR11|member|uint32_t RWR11:1; /**< bit: 11 XDMAC Channel 11 Read Write Resume Bit */
DECL|RWR12|member|uint32_t RWR12:1; /**< bit: 12 XDMAC Channel 12 Read Write Resume Bit */
DECL|RWR13|member|uint32_t RWR13:1; /**< bit: 13 XDMAC Channel 13 Read Write Resume Bit */
DECL|RWR14|member|uint32_t RWR14:1; /**< bit: 14 XDMAC Channel 14 Read Write Resume Bit */
DECL|RWR15|member|uint32_t RWR15:1; /**< bit: 15 XDMAC Channel 15 Read Write Resume Bit */
DECL|RWR16|member|uint32_t RWR16:1; /**< bit: 16 XDMAC Channel 16 Read Write Resume Bit */
DECL|RWR17|member|uint32_t RWR17:1; /**< bit: 17 XDMAC Channel 17 Read Write Resume Bit */
DECL|RWR18|member|uint32_t RWR18:1; /**< bit: 18 XDMAC Channel 18 Read Write Resume Bit */
DECL|RWR19|member|uint32_t RWR19:1; /**< bit: 19 XDMAC Channel 19 Read Write Resume Bit */
DECL|RWR1|member|uint32_t RWR1:1; /**< bit: 1 XDMAC Channel 1 Read Write Resume Bit */
DECL|RWR20|member|uint32_t RWR20:1; /**< bit: 20 XDMAC Channel 20 Read Write Resume Bit */
DECL|RWR21|member|uint32_t RWR21:1; /**< bit: 21 XDMAC Channel 21 Read Write Resume Bit */
DECL|RWR22|member|uint32_t RWR22:1; /**< bit: 22 XDMAC Channel 22 Read Write Resume Bit */
DECL|RWR23|member|uint32_t RWR23:1; /**< bit: 23 XDMAC Channel 23 Read Write Resume Bit */
DECL|RWR2|member|uint32_t RWR2:1; /**< bit: 2 XDMAC Channel 2 Read Write Resume Bit */
DECL|RWR3|member|uint32_t RWR3:1; /**< bit: 3 XDMAC Channel 3 Read Write Resume Bit */
DECL|RWR4|member|uint32_t RWR4:1; /**< bit: 4 XDMAC Channel 4 Read Write Resume Bit */
DECL|RWR5|member|uint32_t RWR5:1; /**< bit: 5 XDMAC Channel 5 Read Write Resume Bit */
DECL|RWR6|member|uint32_t RWR6:1; /**< bit: 6 XDMAC Channel 6 Read Write Resume Bit */
DECL|RWR7|member|uint32_t RWR7:1; /**< bit: 7 XDMAC Channel 7 Read Write Resume Bit */
DECL|RWR8|member|uint32_t RWR8:1; /**< bit: 8 XDMAC Channel 8 Read Write Resume Bit */
DECL|RWR9|member|uint32_t RWR9:1; /**< bit: 9 XDMAC Channel 9 Read Write Resume Bit */
DECL|RWR|member|uint32_t RWR:24; /**< bit: 0..23 XDMAC Channel 23 Read Write Resume Bit */
DECL|RWS0|member|uint32_t RWS0:1; /**< bit: 0 XDMAC Channel 0 Read Write Suspend Bit */
DECL|RWS10|member|uint32_t RWS10:1; /**< bit: 10 XDMAC Channel 10 Read Write Suspend Bit */
DECL|RWS11|member|uint32_t RWS11:1; /**< bit: 11 XDMAC Channel 11 Read Write Suspend Bit */
DECL|RWS12|member|uint32_t RWS12:1; /**< bit: 12 XDMAC Channel 12 Read Write Suspend Bit */
DECL|RWS13|member|uint32_t RWS13:1; /**< bit: 13 XDMAC Channel 13 Read Write Suspend Bit */
DECL|RWS14|member|uint32_t RWS14:1; /**< bit: 14 XDMAC Channel 14 Read Write Suspend Bit */
DECL|RWS15|member|uint32_t RWS15:1; /**< bit: 15 XDMAC Channel 15 Read Write Suspend Bit */
DECL|RWS16|member|uint32_t RWS16:1; /**< bit: 16 XDMAC Channel 16 Read Write Suspend Bit */
DECL|RWS17|member|uint32_t RWS17:1; /**< bit: 17 XDMAC Channel 17 Read Write Suspend Bit */
DECL|RWS18|member|uint32_t RWS18:1; /**< bit: 18 XDMAC Channel 18 Read Write Suspend Bit */
DECL|RWS19|member|uint32_t RWS19:1; /**< bit: 19 XDMAC Channel 19 Read Write Suspend Bit */
DECL|RWS1|member|uint32_t RWS1:1; /**< bit: 1 XDMAC Channel 1 Read Write Suspend Bit */
DECL|RWS20|member|uint32_t RWS20:1; /**< bit: 20 XDMAC Channel 20 Read Write Suspend Bit */
DECL|RWS21|member|uint32_t RWS21:1; /**< bit: 21 XDMAC Channel 21 Read Write Suspend Bit */
DECL|RWS22|member|uint32_t RWS22:1; /**< bit: 22 XDMAC Channel 22 Read Write Suspend Bit */
DECL|RWS23|member|uint32_t RWS23:1; /**< bit: 23 XDMAC Channel 23 Read Write Suspend Bit */
DECL|RWS2|member|uint32_t RWS2:1; /**< bit: 2 XDMAC Channel 2 Read Write Suspend Bit */
DECL|RWS3|member|uint32_t RWS3:1; /**< bit: 3 XDMAC Channel 3 Read Write Suspend Bit */
DECL|RWS4|member|uint32_t RWS4:1; /**< bit: 4 XDMAC Channel 4 Read Write Suspend Bit */
DECL|RWS5|member|uint32_t RWS5:1; /**< bit: 5 XDMAC Channel 5 Read Write Suspend Bit */
DECL|RWS6|member|uint32_t RWS6:1; /**< bit: 6 XDMAC Channel 6 Read Write Suspend Bit */
DECL|RWS7|member|uint32_t RWS7:1; /**< bit: 7 XDMAC Channel 7 Read Write Suspend Bit */
DECL|RWS8|member|uint32_t RWS8:1; /**< bit: 8 XDMAC Channel 8 Read Write Suspend Bit */
DECL|RWS9|member|uint32_t RWS9:1; /**< bit: 9 XDMAC Channel 9 Read Write Suspend Bit */
DECL|RWS|member|uint32_t RWS:24; /**< bit: 0..23 XDMAC Channel 23 Read Write Suspend Bit */
DECL|Reserved1|member|RoReg8 Reserved1[0x08];
DECL|Reserved1|member|RoReg8 Reserved1[0x08];
DECL|Reserved1|member|RoReg8 Reserved1[0x0C];
DECL|Reserved1|member|__I uint32_t Reserved1[3];
DECL|SAM|member|uint32_t SAM:2; /**< bit: 16..17 Channel x Source Addressing Mode */
DECL|SA|member|uint32_t SA:32; /**< bit: 0..31 Channel x Source Address */
DECL|SDS_MSP|member|uint32_t SDS_MSP:16; /**< bit: 0..15 Channel x Source Data stride or Memory Set Pattern */
DECL|SIF|member|uint32_t SIF:1; /**< bit: 13 Channel x Source Interface Identifier */
DECL|ST0|member|uint32_t ST0:1; /**< bit: 0 XDMAC Channel 0 Status Bit */
DECL|ST10|member|uint32_t ST10:1; /**< bit: 10 XDMAC Channel 10 Status Bit */
DECL|ST11|member|uint32_t ST11:1; /**< bit: 11 XDMAC Channel 11 Status Bit */
DECL|ST12|member|uint32_t ST12:1; /**< bit: 12 XDMAC Channel 12 Status Bit */
DECL|ST13|member|uint32_t ST13:1; /**< bit: 13 XDMAC Channel 13 Status Bit */
DECL|ST14|member|uint32_t ST14:1; /**< bit: 14 XDMAC Channel 14 Status Bit */
DECL|ST15|member|uint32_t ST15:1; /**< bit: 15 XDMAC Channel 15 Status Bit */
DECL|ST16|member|uint32_t ST16:1; /**< bit: 16 XDMAC Channel 16 Status Bit */
DECL|ST17|member|uint32_t ST17:1; /**< bit: 17 XDMAC Channel 17 Status Bit */
DECL|ST18|member|uint32_t ST18:1; /**< bit: 18 XDMAC Channel 18 Status Bit */
DECL|ST19|member|uint32_t ST19:1; /**< bit: 19 XDMAC Channel 19 Status Bit */
DECL|ST1|member|uint32_t ST1:1; /**< bit: 1 XDMAC Channel 1 Status Bit */
DECL|ST20|member|uint32_t ST20:1; /**< bit: 20 XDMAC Channel 20 Status Bit */
DECL|ST21|member|uint32_t ST21:1; /**< bit: 21 XDMAC Channel 21 Status Bit */
DECL|ST22|member|uint32_t ST22:1; /**< bit: 22 XDMAC Channel 22 Status Bit */
DECL|ST23|member|uint32_t ST23:1; /**< bit: 23 XDMAC Channel 23 Status Bit */
DECL|ST2|member|uint32_t ST2:1; /**< bit: 2 XDMAC Channel 2 Status Bit */
DECL|ST3|member|uint32_t ST3:1; /**< bit: 3 XDMAC Channel 3 Status Bit */
DECL|ST4|member|uint32_t ST4:1; /**< bit: 4 XDMAC Channel 4 Status Bit */
DECL|ST5|member|uint32_t ST5:1; /**< bit: 5 XDMAC Channel 5 Status Bit */
DECL|ST6|member|uint32_t ST6:1; /**< bit: 6 XDMAC Channel 6 Status Bit */
DECL|ST7|member|uint32_t ST7:1; /**< bit: 7 XDMAC Channel 7 Status Bit */
DECL|ST8|member|uint32_t ST8:1; /**< bit: 8 XDMAC Channel 8 Status Bit */
DECL|ST9|member|uint32_t ST9:1; /**< bit: 9 XDMAC Channel 9 Status Bit */
DECL|ST|member|uint32_t ST:24; /**< bit: 0..23 XDMAC Channel 23 Status Bit */
DECL|SUBS|member|uint32_t SUBS:24; /**< bit: 0..23 Channel x Source Microblock Stride */
DECL|SWF0|member|uint32_t SWF0:1; /**< bit: 0 XDMAC Channel 0 Software Flush Request Bit */
DECL|SWF10|member|uint32_t SWF10:1; /**< bit: 10 XDMAC Channel 10 Software Flush Request Bit */
DECL|SWF11|member|uint32_t SWF11:1; /**< bit: 11 XDMAC Channel 11 Software Flush Request Bit */
DECL|SWF12|member|uint32_t SWF12:1; /**< bit: 12 XDMAC Channel 12 Software Flush Request Bit */
DECL|SWF13|member|uint32_t SWF13:1; /**< bit: 13 XDMAC Channel 13 Software Flush Request Bit */
DECL|SWF14|member|uint32_t SWF14:1; /**< bit: 14 XDMAC Channel 14 Software Flush Request Bit */
DECL|SWF15|member|uint32_t SWF15:1; /**< bit: 15 XDMAC Channel 15 Software Flush Request Bit */
DECL|SWF16|member|uint32_t SWF16:1; /**< bit: 16 XDMAC Channel 16 Software Flush Request Bit */
DECL|SWF17|member|uint32_t SWF17:1; /**< bit: 17 XDMAC Channel 17 Software Flush Request Bit */
DECL|SWF18|member|uint32_t SWF18:1; /**< bit: 18 XDMAC Channel 18 Software Flush Request Bit */
DECL|SWF19|member|uint32_t SWF19:1; /**< bit: 19 XDMAC Channel 19 Software Flush Request Bit */
DECL|SWF1|member|uint32_t SWF1:1; /**< bit: 1 XDMAC Channel 1 Software Flush Request Bit */
DECL|SWF20|member|uint32_t SWF20:1; /**< bit: 20 XDMAC Channel 20 Software Flush Request Bit */
DECL|SWF21|member|uint32_t SWF21:1; /**< bit: 21 XDMAC Channel 21 Software Flush Request Bit */
DECL|SWF22|member|uint32_t SWF22:1; /**< bit: 22 XDMAC Channel 22 Software Flush Request Bit */
DECL|SWF23|member|uint32_t SWF23:1; /**< bit: 23 XDMAC Channel 23 Software Flush Request Bit */
DECL|SWF2|member|uint32_t SWF2:1; /**< bit: 2 XDMAC Channel 2 Software Flush Request Bit */
DECL|SWF3|member|uint32_t SWF3:1; /**< bit: 3 XDMAC Channel 3 Software Flush Request Bit */
DECL|SWF4|member|uint32_t SWF4:1; /**< bit: 4 XDMAC Channel 4 Software Flush Request Bit */
DECL|SWF5|member|uint32_t SWF5:1; /**< bit: 5 XDMAC Channel 5 Software Flush Request Bit */
DECL|SWF6|member|uint32_t SWF6:1; /**< bit: 6 XDMAC Channel 6 Software Flush Request Bit */
DECL|SWF7|member|uint32_t SWF7:1; /**< bit: 7 XDMAC Channel 7 Software Flush Request Bit */
DECL|SWF8|member|uint32_t SWF8:1; /**< bit: 8 XDMAC Channel 8 Software Flush Request Bit */
DECL|SWF9|member|uint32_t SWF9:1; /**< bit: 9 XDMAC Channel 9 Software Flush Request Bit */
DECL|SWF|member|uint32_t SWF:24; /**< bit: 0..23 XDMAC Channel 23 Software Flush Request Bit */
DECL|SWREQ0|member|uint32_t SWREQ0:1; /**< bit: 0 XDMAC Channel 0 Software Request Bit */
DECL|SWREQ10|member|uint32_t SWREQ10:1; /**< bit: 10 XDMAC Channel 10 Software Request Bit */
DECL|SWREQ11|member|uint32_t SWREQ11:1; /**< bit: 11 XDMAC Channel 11 Software Request Bit */
DECL|SWREQ12|member|uint32_t SWREQ12:1; /**< bit: 12 XDMAC Channel 12 Software Request Bit */
DECL|SWREQ13|member|uint32_t SWREQ13:1; /**< bit: 13 XDMAC Channel 13 Software Request Bit */
DECL|SWREQ14|member|uint32_t SWREQ14:1; /**< bit: 14 XDMAC Channel 14 Software Request Bit */
DECL|SWREQ15|member|uint32_t SWREQ15:1; /**< bit: 15 XDMAC Channel 15 Software Request Bit */
DECL|SWREQ16|member|uint32_t SWREQ16:1; /**< bit: 16 XDMAC Channel 16 Software Request Bit */
DECL|SWREQ17|member|uint32_t SWREQ17:1; /**< bit: 17 XDMAC Channel 17 Software Request Bit */
DECL|SWREQ18|member|uint32_t SWREQ18:1; /**< bit: 18 XDMAC Channel 18 Software Request Bit */
DECL|SWREQ19|member|uint32_t SWREQ19:1; /**< bit: 19 XDMAC Channel 19 Software Request Bit */
DECL|SWREQ1|member|uint32_t SWREQ1:1; /**< bit: 1 XDMAC Channel 1 Software Request Bit */
DECL|SWREQ20|member|uint32_t SWREQ20:1; /**< bit: 20 XDMAC Channel 20 Software Request Bit */
DECL|SWREQ21|member|uint32_t SWREQ21:1; /**< bit: 21 XDMAC Channel 21 Software Request Bit */
DECL|SWREQ22|member|uint32_t SWREQ22:1; /**< bit: 22 XDMAC Channel 22 Software Request Bit */
DECL|SWREQ23|member|uint32_t SWREQ23:1; /**< bit: 23 XDMAC Channel 23 Software Request Bit */
DECL|SWREQ2|member|uint32_t SWREQ2:1; /**< bit: 2 XDMAC Channel 2 Software Request Bit */
DECL|SWREQ3|member|uint32_t SWREQ3:1; /**< bit: 3 XDMAC Channel 3 Software Request Bit */
DECL|SWREQ4|member|uint32_t SWREQ4:1; /**< bit: 4 XDMAC Channel 4 Software Request Bit */
DECL|SWREQ5|member|uint32_t SWREQ5:1; /**< bit: 5 XDMAC Channel 5 Software Request Bit */
DECL|SWREQ6|member|uint32_t SWREQ6:1; /**< bit: 6 XDMAC Channel 6 Software Request Bit */
DECL|SWREQ7|member|uint32_t SWREQ7:1; /**< bit: 7 XDMAC Channel 7 Software Request Bit */
DECL|SWREQ8|member|uint32_t SWREQ8:1; /**< bit: 8 XDMAC Channel 8 Software Request Bit */
DECL|SWREQ9|member|uint32_t SWREQ9:1; /**< bit: 9 XDMAC Channel 9 Software Request Bit */
DECL|SWREQ|member|uint32_t SWREQ:1; /**< bit: 6 Channel x Software Request Trigger */
DECL|SWREQ|member|uint32_t SWREQ:24; /**< bit: 0..23 XDMAC Channel 23 Software Request Bit */
DECL|SWRS0|member|uint32_t SWRS0:1; /**< bit: 0 XDMAC Channel 0 Software Request Status Bit */
DECL|SWRS10|member|uint32_t SWRS10:1; /**< bit: 10 XDMAC Channel 10 Software Request Status Bit */
DECL|SWRS11|member|uint32_t SWRS11:1; /**< bit: 11 XDMAC Channel 11 Software Request Status Bit */
DECL|SWRS12|member|uint32_t SWRS12:1; /**< bit: 12 XDMAC Channel 12 Software Request Status Bit */
DECL|SWRS13|member|uint32_t SWRS13:1; /**< bit: 13 XDMAC Channel 13 Software Request Status Bit */
DECL|SWRS14|member|uint32_t SWRS14:1; /**< bit: 14 XDMAC Channel 14 Software Request Status Bit */
DECL|SWRS15|member|uint32_t SWRS15:1; /**< bit: 15 XDMAC Channel 15 Software Request Status Bit */
DECL|SWRS16|member|uint32_t SWRS16:1; /**< bit: 16 XDMAC Channel 16 Software Request Status Bit */
DECL|SWRS17|member|uint32_t SWRS17:1; /**< bit: 17 XDMAC Channel 17 Software Request Status Bit */
DECL|SWRS18|member|uint32_t SWRS18:1; /**< bit: 18 XDMAC Channel 18 Software Request Status Bit */
DECL|SWRS19|member|uint32_t SWRS19:1; /**< bit: 19 XDMAC Channel 19 Software Request Status Bit */
DECL|SWRS1|member|uint32_t SWRS1:1; /**< bit: 1 XDMAC Channel 1 Software Request Status Bit */
DECL|SWRS20|member|uint32_t SWRS20:1; /**< bit: 20 XDMAC Channel 20 Software Request Status Bit */
DECL|SWRS21|member|uint32_t SWRS21:1; /**< bit: 21 XDMAC Channel 21 Software Request Status Bit */
DECL|SWRS22|member|uint32_t SWRS22:1; /**< bit: 22 XDMAC Channel 22 Software Request Status Bit */
DECL|SWRS23|member|uint32_t SWRS23:1; /**< bit: 23 XDMAC Channel 23 Software Request Status Bit */
DECL|SWRS2|member|uint32_t SWRS2:1; /**< bit: 2 XDMAC Channel 2 Software Request Status Bit */
DECL|SWRS3|member|uint32_t SWRS3:1; /**< bit: 3 XDMAC Channel 3 Software Request Status Bit */
DECL|SWRS4|member|uint32_t SWRS4:1; /**< bit: 4 XDMAC Channel 4 Software Request Status Bit */
DECL|SWRS5|member|uint32_t SWRS5:1; /**< bit: 5 XDMAC Channel 5 Software Request Status Bit */
DECL|SWRS6|member|uint32_t SWRS6:1; /**< bit: 6 XDMAC Channel 6 Software Request Status Bit */
DECL|SWRS7|member|uint32_t SWRS7:1; /**< bit: 7 XDMAC Channel 7 Software Request Status Bit */
DECL|SWRS8|member|uint32_t SWRS8:1; /**< bit: 8 XDMAC Channel 8 Software Request Status Bit */
DECL|SWRS9|member|uint32_t SWRS9:1; /**< bit: 9 XDMAC Channel 9 Software Request Status Bit */
DECL|SWRS|member|uint32_t SWRS:24; /**< bit: 0..23 XDMAC Channel 23 Software Request Status Bit */
DECL|TYPE|member|uint32_t TYPE:1; /**< bit: 0 Channel x Transfer Type */
DECL|UBLEN|member|uint32_t UBLEN:24; /**< bit: 0..23 Channel x Microblock Length */
DECL|WBEID|member|uint32_t WBEID:1; /**< bit: 5 Write Bus Error Interrupt Disable Bit */
DECL|WBEIM|member|uint32_t WBEIM:1; /**< bit: 5 Write Bus Error Interrupt Mask Bit */
DECL|WBEIS|member|uint32_t WBEIS:1; /**< bit: 5 Write Bus Error Interrupt Status Bit */
DECL|WBIE|member|uint32_t WBIE:1; /**< bit: 5 Write Bus Error Interrupt Enable Bit */
DECL|WRIP|member|uint32_t WRIP:1; /**< bit: 23 Write in Progress (this bit is read-only) */
DECL|WS0|member|uint32_t WS0:1; /**< bit: 0 XDMAC Channel 0 Write Suspend Bit */
DECL|WS10|member|uint32_t WS10:1; /**< bit: 10 XDMAC Channel 10 Write Suspend Bit */
DECL|WS11|member|uint32_t WS11:1; /**< bit: 11 XDMAC Channel 11 Write Suspend Bit */
DECL|WS12|member|uint32_t WS12:1; /**< bit: 12 XDMAC Channel 12 Write Suspend Bit */
DECL|WS13|member|uint32_t WS13:1; /**< bit: 13 XDMAC Channel 13 Write Suspend Bit */
DECL|WS14|member|uint32_t WS14:1; /**< bit: 14 XDMAC Channel 14 Write Suspend Bit */
DECL|WS15|member|uint32_t WS15:1; /**< bit: 15 XDMAC Channel 15 Write Suspend Bit */
DECL|WS16|member|uint32_t WS16:1; /**< bit: 16 XDMAC Channel 16 Write Suspend Bit */
DECL|WS17|member|uint32_t WS17:1; /**< bit: 17 XDMAC Channel 17 Write Suspend Bit */
DECL|WS18|member|uint32_t WS18:1; /**< bit: 18 XDMAC Channel 18 Write Suspend Bit */
DECL|WS19|member|uint32_t WS19:1; /**< bit: 19 XDMAC Channel 19 Write Suspend Bit */
DECL|WS1|member|uint32_t WS1:1; /**< bit: 1 XDMAC Channel 1 Write Suspend Bit */
DECL|WS20|member|uint32_t WS20:1; /**< bit: 20 XDMAC Channel 20 Write Suspend Bit */
DECL|WS21|member|uint32_t WS21:1; /**< bit: 21 XDMAC Channel 21 Write Suspend Bit */
DECL|WS22|member|uint32_t WS22:1; /**< bit: 22 XDMAC Channel 22 Write Suspend Bit */
DECL|WS23|member|uint32_t WS23:1; /**< bit: 23 XDMAC Channel 23 Write Suspend Bit */
DECL|WS2|member|uint32_t WS2:1; /**< bit: 2 XDMAC Channel 2 Write Suspend Bit */
DECL|WS3|member|uint32_t WS3:1; /**< bit: 3 XDMAC Channel 3 Write Suspend Bit */
DECL|WS4|member|uint32_t WS4:1; /**< bit: 4 XDMAC Channel 4 Write Suspend Bit */
DECL|WS5|member|uint32_t WS5:1; /**< bit: 5 XDMAC Channel 5 Write Suspend Bit */
DECL|WS6|member|uint32_t WS6:1; /**< bit: 6 XDMAC Channel 6 Write Suspend Bit */
DECL|WS7|member|uint32_t WS7:1; /**< bit: 7 XDMAC Channel 7 Write Suspend Bit */
DECL|WS8|member|uint32_t WS8:1; /**< bit: 8 XDMAC Channel 8 Write Suspend Bit */
DECL|WS9|member|uint32_t WS9:1; /**< bit: 9 XDMAC Channel 9 Write Suspend Bit */
DECL|WS|member|uint32_t WS:24; /**< bit: 0..23 XDMAC Channel 23 Write Suspend Bit */
DECL|XDMACCHID_NUMBER|macro|XDMACCHID_NUMBER
DECL|XDMAC_11161|macro|XDMAC_11161
DECL|XDMAC_CBC_BLEN_Msk|macro|XDMAC_CBC_BLEN_Msk
DECL|XDMAC_CBC_BLEN_Pos|macro|XDMAC_CBC_BLEN_Pos
DECL|XDMAC_CBC_BLEN|macro|XDMAC_CBC_BLEN
DECL|XDMAC_CBC_MASK|macro|XDMAC_CBC_MASK
DECL|XDMAC_CBC_Msk|macro|XDMAC_CBC_Msk
DECL|XDMAC_CBC_OFFSET|macro|XDMAC_CBC_OFFSET
DECL|XDMAC_CBC_Type|typedef|} XDMAC_CBC_Type;
DECL|XDMAC_CBC|member|__IO XDMAC_CBC_Type XDMAC_CBC; /**< Offset: 0x24 (R/W 32) Channel Block Control Register (chid = 0) */
DECL|XDMAC_CBC|member|__IO uint32_t XDMAC_CBC; /**< (XDMAC_CHID Offset: 0x24) Channel Block Control Register (chid = 0) */
DECL|XDMAC_CC_CSIZE_CHK_16_Val|macro|XDMAC_CC_CSIZE_CHK_16_Val
DECL|XDMAC_CC_CSIZE_CHK_16|macro|XDMAC_CC_CSIZE_CHK_16
DECL|XDMAC_CC_CSIZE_CHK_1_Val|macro|XDMAC_CC_CSIZE_CHK_1_Val
DECL|XDMAC_CC_CSIZE_CHK_1|macro|XDMAC_CC_CSIZE_CHK_1
DECL|XDMAC_CC_CSIZE_CHK_2_Val|macro|XDMAC_CC_CSIZE_CHK_2_Val
DECL|XDMAC_CC_CSIZE_CHK_2|macro|XDMAC_CC_CSIZE_CHK_2
DECL|XDMAC_CC_CSIZE_CHK_4_Val|macro|XDMAC_CC_CSIZE_CHK_4_Val
DECL|XDMAC_CC_CSIZE_CHK_4|macro|XDMAC_CC_CSIZE_CHK_4
DECL|XDMAC_CC_CSIZE_CHK_8_Val|macro|XDMAC_CC_CSIZE_CHK_8_Val
DECL|XDMAC_CC_CSIZE_CHK_8|macro|XDMAC_CC_CSIZE_CHK_8
DECL|XDMAC_CC_CSIZE_Msk|macro|XDMAC_CC_CSIZE_Msk
DECL|XDMAC_CC_CSIZE_Pos|macro|XDMAC_CC_CSIZE_Pos
DECL|XDMAC_CC_CSIZE|macro|XDMAC_CC_CSIZE
DECL|XDMAC_CC_DAM_FIXED_AM_Val|macro|XDMAC_CC_DAM_FIXED_AM_Val
DECL|XDMAC_CC_DAM_FIXED_AM|macro|XDMAC_CC_DAM_FIXED_AM
DECL|XDMAC_CC_DAM_INCREMENTED_AM_Val|macro|XDMAC_CC_DAM_INCREMENTED_AM_Val
DECL|XDMAC_CC_DAM_INCREMENTED_AM|macro|XDMAC_CC_DAM_INCREMENTED_AM
DECL|XDMAC_CC_DAM_Msk|macro|XDMAC_CC_DAM_Msk
DECL|XDMAC_CC_DAM_Pos|macro|XDMAC_CC_DAM_Pos
DECL|XDMAC_CC_DAM_UBS_AM_Val|macro|XDMAC_CC_DAM_UBS_AM_Val
DECL|XDMAC_CC_DAM_UBS_AM|macro|XDMAC_CC_DAM_UBS_AM
DECL|XDMAC_CC_DAM_UBS_DS_AM_Val|macro|XDMAC_CC_DAM_UBS_DS_AM_Val
DECL|XDMAC_CC_DAM_UBS_DS_AM|macro|XDMAC_CC_DAM_UBS_DS_AM
DECL|XDMAC_CC_DAM|macro|XDMAC_CC_DAM
DECL|XDMAC_CC_DIF_AHB_IF0_Val|macro|XDMAC_CC_DIF_AHB_IF0_Val
DECL|XDMAC_CC_DIF_AHB_IF0|macro|XDMAC_CC_DIF_AHB_IF0
DECL|XDMAC_CC_DIF_AHB_IF1_Val|macro|XDMAC_CC_DIF_AHB_IF1_Val
DECL|XDMAC_CC_DIF_AHB_IF1|macro|XDMAC_CC_DIF_AHB_IF1
DECL|XDMAC_CC_DIF_Msk|macro|XDMAC_CC_DIF_Msk
DECL|XDMAC_CC_DIF_Pos|macro|XDMAC_CC_DIF_Pos
DECL|XDMAC_CC_DIF|macro|XDMAC_CC_DIF
DECL|XDMAC_CC_DSYNC_MEM2PER_Val|macro|XDMAC_CC_DSYNC_MEM2PER_Val
DECL|XDMAC_CC_DSYNC_MEM2PER|macro|XDMAC_CC_DSYNC_MEM2PER
DECL|XDMAC_CC_DSYNC_Msk|macro|XDMAC_CC_DSYNC_Msk
DECL|XDMAC_CC_DSYNC_PER2MEM_Val|macro|XDMAC_CC_DSYNC_PER2MEM_Val
DECL|XDMAC_CC_DSYNC_PER2MEM|macro|XDMAC_CC_DSYNC_PER2MEM
DECL|XDMAC_CC_DSYNC_Pos|macro|XDMAC_CC_DSYNC_Pos
DECL|XDMAC_CC_DSYNC|macro|XDMAC_CC_DSYNC
DECL|XDMAC_CC_DWIDTH_BYTE_Val|macro|XDMAC_CC_DWIDTH_BYTE_Val
DECL|XDMAC_CC_DWIDTH_BYTE|macro|XDMAC_CC_DWIDTH_BYTE
DECL|XDMAC_CC_DWIDTH_HALFWORD_Val|macro|XDMAC_CC_DWIDTH_HALFWORD_Val
DECL|XDMAC_CC_DWIDTH_HALFWORD|macro|XDMAC_CC_DWIDTH_HALFWORD
DECL|XDMAC_CC_DWIDTH_Msk|macro|XDMAC_CC_DWIDTH_Msk
DECL|XDMAC_CC_DWIDTH_Pos|macro|XDMAC_CC_DWIDTH_Pos
DECL|XDMAC_CC_DWIDTH_WORD_Val|macro|XDMAC_CC_DWIDTH_WORD_Val
DECL|XDMAC_CC_DWIDTH_WORD|macro|XDMAC_CC_DWIDTH_WORD
DECL|XDMAC_CC_DWIDTH|macro|XDMAC_CC_DWIDTH
DECL|XDMAC_CC_INITD_IN_PROGRESS_Val|macro|XDMAC_CC_INITD_IN_PROGRESS_Val
DECL|XDMAC_CC_INITD_IN_PROGRESS|macro|XDMAC_CC_INITD_IN_PROGRESS
DECL|XDMAC_CC_INITD_Msk|macro|XDMAC_CC_INITD_Msk
DECL|XDMAC_CC_INITD_Pos|macro|XDMAC_CC_INITD_Pos
DECL|XDMAC_CC_INITD_TERMINATED_Val|macro|XDMAC_CC_INITD_TERMINATED_Val
DECL|XDMAC_CC_INITD_TERMINATED|macro|XDMAC_CC_INITD_TERMINATED
DECL|XDMAC_CC_INITD|macro|XDMAC_CC_INITD
DECL|XDMAC_CC_MASK|macro|XDMAC_CC_MASK
DECL|XDMAC_CC_MBSIZE_EIGHT_Val|macro|XDMAC_CC_MBSIZE_EIGHT_Val
DECL|XDMAC_CC_MBSIZE_EIGHT|macro|XDMAC_CC_MBSIZE_EIGHT
DECL|XDMAC_CC_MBSIZE_FOUR_Val|macro|XDMAC_CC_MBSIZE_FOUR_Val
DECL|XDMAC_CC_MBSIZE_FOUR|macro|XDMAC_CC_MBSIZE_FOUR
DECL|XDMAC_CC_MBSIZE_Msk|macro|XDMAC_CC_MBSIZE_Msk
DECL|XDMAC_CC_MBSIZE_Pos|macro|XDMAC_CC_MBSIZE_Pos
DECL|XDMAC_CC_MBSIZE_SINGLE_Val|macro|XDMAC_CC_MBSIZE_SINGLE_Val
DECL|XDMAC_CC_MBSIZE_SINGLE|macro|XDMAC_CC_MBSIZE_SINGLE
DECL|XDMAC_CC_MBSIZE_SIXTEEN_Val|macro|XDMAC_CC_MBSIZE_SIXTEEN_Val
DECL|XDMAC_CC_MBSIZE_SIXTEEN|macro|XDMAC_CC_MBSIZE_SIXTEEN
DECL|XDMAC_CC_MBSIZE|macro|XDMAC_CC_MBSIZE
DECL|XDMAC_CC_MEMSET_HW_MODE_Val|macro|XDMAC_CC_MEMSET_HW_MODE_Val
DECL|XDMAC_CC_MEMSET_HW_MODE|macro|XDMAC_CC_MEMSET_HW_MODE
DECL|XDMAC_CC_MEMSET_Msk|macro|XDMAC_CC_MEMSET_Msk
DECL|XDMAC_CC_MEMSET_NORMAL_MODE_Val|macro|XDMAC_CC_MEMSET_NORMAL_MODE_Val
DECL|XDMAC_CC_MEMSET_NORMAL_MODE|macro|XDMAC_CC_MEMSET_NORMAL_MODE
DECL|XDMAC_CC_MEMSET_Pos|macro|XDMAC_CC_MEMSET_Pos
DECL|XDMAC_CC_MEMSET|macro|XDMAC_CC_MEMSET
DECL|XDMAC_CC_Msk|macro|XDMAC_CC_Msk
DECL|XDMAC_CC_OFFSET|macro|XDMAC_CC_OFFSET
DECL|XDMAC_CC_PERID_Msk|macro|XDMAC_CC_PERID_Msk
DECL|XDMAC_CC_PERID_Pos|macro|XDMAC_CC_PERID_Pos
DECL|XDMAC_CC_PERID|macro|XDMAC_CC_PERID
DECL|XDMAC_CC_RDIP_DONE_Val|macro|XDMAC_CC_RDIP_DONE_Val
DECL|XDMAC_CC_RDIP_DONE|macro|XDMAC_CC_RDIP_DONE
DECL|XDMAC_CC_RDIP_IN_PROGRESS_Val|macro|XDMAC_CC_RDIP_IN_PROGRESS_Val
DECL|XDMAC_CC_RDIP_IN_PROGRESS|macro|XDMAC_CC_RDIP_IN_PROGRESS
DECL|XDMAC_CC_RDIP_Msk|macro|XDMAC_CC_RDIP_Msk
DECL|XDMAC_CC_RDIP_Pos|macro|XDMAC_CC_RDIP_Pos
DECL|XDMAC_CC_RDIP|macro|XDMAC_CC_RDIP
DECL|XDMAC_CC_SAM_FIXED_AM_Val|macro|XDMAC_CC_SAM_FIXED_AM_Val
DECL|XDMAC_CC_SAM_FIXED_AM|macro|XDMAC_CC_SAM_FIXED_AM
DECL|XDMAC_CC_SAM_INCREMENTED_AM_Val|macro|XDMAC_CC_SAM_INCREMENTED_AM_Val
DECL|XDMAC_CC_SAM_INCREMENTED_AM|macro|XDMAC_CC_SAM_INCREMENTED_AM
DECL|XDMAC_CC_SAM_Msk|macro|XDMAC_CC_SAM_Msk
DECL|XDMAC_CC_SAM_Pos|macro|XDMAC_CC_SAM_Pos
DECL|XDMAC_CC_SAM_UBS_AM_Val|macro|XDMAC_CC_SAM_UBS_AM_Val
DECL|XDMAC_CC_SAM_UBS_AM|macro|XDMAC_CC_SAM_UBS_AM
DECL|XDMAC_CC_SAM_UBS_DS_AM_Val|macro|XDMAC_CC_SAM_UBS_DS_AM_Val
DECL|XDMAC_CC_SAM_UBS_DS_AM|macro|XDMAC_CC_SAM_UBS_DS_AM
DECL|XDMAC_CC_SAM|macro|XDMAC_CC_SAM
DECL|XDMAC_CC_SIF_AHB_IF0_Val|macro|XDMAC_CC_SIF_AHB_IF0_Val
DECL|XDMAC_CC_SIF_AHB_IF0|macro|XDMAC_CC_SIF_AHB_IF0
DECL|XDMAC_CC_SIF_AHB_IF1_Val|macro|XDMAC_CC_SIF_AHB_IF1_Val
DECL|XDMAC_CC_SIF_AHB_IF1|macro|XDMAC_CC_SIF_AHB_IF1
DECL|XDMAC_CC_SIF_Msk|macro|XDMAC_CC_SIF_Msk
DECL|XDMAC_CC_SIF_Pos|macro|XDMAC_CC_SIF_Pos
DECL|XDMAC_CC_SIF|macro|XDMAC_CC_SIF
DECL|XDMAC_CC_SWREQ_HWR_CONNECTED_Val|macro|XDMAC_CC_SWREQ_HWR_CONNECTED_Val
DECL|XDMAC_CC_SWREQ_HWR_CONNECTED|macro|XDMAC_CC_SWREQ_HWR_CONNECTED
DECL|XDMAC_CC_SWREQ_Msk|macro|XDMAC_CC_SWREQ_Msk
DECL|XDMAC_CC_SWREQ_Pos|macro|XDMAC_CC_SWREQ_Pos
DECL|XDMAC_CC_SWREQ_SWR_CONNECTED_Val|macro|XDMAC_CC_SWREQ_SWR_CONNECTED_Val
DECL|XDMAC_CC_SWREQ_SWR_CONNECTED|macro|XDMAC_CC_SWREQ_SWR_CONNECTED
DECL|XDMAC_CC_SWREQ|macro|XDMAC_CC_SWREQ
DECL|XDMAC_CC_TYPE_MEM_TRAN_Val|macro|XDMAC_CC_TYPE_MEM_TRAN_Val
DECL|XDMAC_CC_TYPE_MEM_TRAN|macro|XDMAC_CC_TYPE_MEM_TRAN
DECL|XDMAC_CC_TYPE_Msk|macro|XDMAC_CC_TYPE_Msk
DECL|XDMAC_CC_TYPE_PER_TRAN_Val|macro|XDMAC_CC_TYPE_PER_TRAN_Val
DECL|XDMAC_CC_TYPE_PER_TRAN|macro|XDMAC_CC_TYPE_PER_TRAN
DECL|XDMAC_CC_TYPE_Pos|macro|XDMAC_CC_TYPE_Pos
DECL|XDMAC_CC_TYPE|macro|XDMAC_CC_TYPE
DECL|XDMAC_CC_Type|typedef|} XDMAC_CC_Type;
DECL|XDMAC_CC_WRIP_DONE_Val|macro|XDMAC_CC_WRIP_DONE_Val
DECL|XDMAC_CC_WRIP_DONE|macro|XDMAC_CC_WRIP_DONE
DECL|XDMAC_CC_WRIP_IN_PROGRESS_Val|macro|XDMAC_CC_WRIP_IN_PROGRESS_Val
DECL|XDMAC_CC_WRIP_IN_PROGRESS|macro|XDMAC_CC_WRIP_IN_PROGRESS
DECL|XDMAC_CC_WRIP_Msk|macro|XDMAC_CC_WRIP_Msk
DECL|XDMAC_CC_WRIP_Pos|macro|XDMAC_CC_WRIP_Pos
DECL|XDMAC_CC_WRIP|macro|XDMAC_CC_WRIP
DECL|XDMAC_CC|member|__IO XDMAC_CC_Type XDMAC_CC; /**< Offset: 0x28 (R/W 32) Channel Configuration Register (chid = 0) */
DECL|XDMAC_CC|member|__IO uint32_t XDMAC_CC; /**< (XDMAC_CHID Offset: 0x28) Channel Configuration Register (chid = 0) */
DECL|XDMAC_CDA_DA_Msk|macro|XDMAC_CDA_DA_Msk
DECL|XDMAC_CDA_DA_Pos|macro|XDMAC_CDA_DA_Pos
DECL|XDMAC_CDA_DA|macro|XDMAC_CDA_DA
DECL|XDMAC_CDA_MASK|macro|XDMAC_CDA_MASK
DECL|XDMAC_CDA_Msk|macro|XDMAC_CDA_Msk
DECL|XDMAC_CDA_OFFSET|macro|XDMAC_CDA_OFFSET
DECL|XDMAC_CDA_Type|typedef|} XDMAC_CDA_Type;
DECL|XDMAC_CDA|member|__IO XDMAC_CDA_Type XDMAC_CDA; /**< Offset: 0x14 (R/W 32) Channel Destination Address Register (chid = 0) */
DECL|XDMAC_CDA|member|__IO uint32_t XDMAC_CDA; /**< (XDMAC_CHID Offset: 0x14) Channel Destination Address Register (chid = 0) */
DECL|XDMAC_CDS_MSP_DDS_MSP_Msk|macro|XDMAC_CDS_MSP_DDS_MSP_Msk
DECL|XDMAC_CDS_MSP_DDS_MSP_Pos|macro|XDMAC_CDS_MSP_DDS_MSP_Pos
DECL|XDMAC_CDS_MSP_DDS_MSP|macro|XDMAC_CDS_MSP_DDS_MSP
DECL|XDMAC_CDS_MSP_MASK|macro|XDMAC_CDS_MSP_MASK
DECL|XDMAC_CDS_MSP_Msk|macro|XDMAC_CDS_MSP_Msk
DECL|XDMAC_CDS_MSP_OFFSET|macro|XDMAC_CDS_MSP_OFFSET
DECL|XDMAC_CDS_MSP_SDS_MSP_Msk|macro|XDMAC_CDS_MSP_SDS_MSP_Msk
DECL|XDMAC_CDS_MSP_SDS_MSP_Pos|macro|XDMAC_CDS_MSP_SDS_MSP_Pos
DECL|XDMAC_CDS_MSP_SDS_MSP|macro|XDMAC_CDS_MSP_SDS_MSP
DECL|XDMAC_CDS_MSP_Type|typedef|} XDMAC_CDS_MSP_Type;
DECL|XDMAC_CDS_MSP|member|__IO XDMAC_CDS_MSP_Type XDMAC_CDS_MSP; /**< Offset: 0x2C (R/W 32) Channel Data Stride Memory Set Pattern (chid = 0) */
DECL|XDMAC_CDS_MSP|member|__IO uint32_t XDMAC_CDS_MSP; /**< (XDMAC_CHID Offset: 0x2C) Channel Data Stride Memory Set Pattern (chid = 0) */
DECL|XDMAC_CDUS_DUBS_Msk|macro|XDMAC_CDUS_DUBS_Msk
DECL|XDMAC_CDUS_DUBS_Pos|macro|XDMAC_CDUS_DUBS_Pos
DECL|XDMAC_CDUS_DUBS|macro|XDMAC_CDUS_DUBS
DECL|XDMAC_CDUS_MASK|macro|XDMAC_CDUS_MASK
DECL|XDMAC_CDUS_Msk|macro|XDMAC_CDUS_Msk
DECL|XDMAC_CDUS_OFFSET|macro|XDMAC_CDUS_OFFSET
DECL|XDMAC_CDUS_Type|typedef|} XDMAC_CDUS_Type;
DECL|XDMAC_CDUS|member|__IO XDMAC_CDUS_Type XDMAC_CDUS; /**< Offset: 0x34 (R/W 32) Channel Destination Microblock Stride (chid = 0) */
DECL|XDMAC_CDUS|member|__IO uint32_t XDMAC_CDUS; /**< (XDMAC_CHID Offset: 0x34) Channel Destination Microblock Stride (chid = 0) */
DECL|XDMAC_CHID|member|XdmacChid XDMAC_CHID[24]; /**< Offset: 0x50 Channel Interrupt Enable Register (chid = 0) */
DECL|XDMAC_CHID|member|XdmacChid XDMAC_CHID[XDMACCHID_NUMBER]; /**< Offset: 0x50 Channel Interrupt Enable Register (chid = 0) */
DECL|XDMAC_CID_BID_Msk|macro|XDMAC_CID_BID_Msk
DECL|XDMAC_CID_BID_Pos|macro|XDMAC_CID_BID_Pos
DECL|XDMAC_CID_BID|macro|XDMAC_CID_BID
DECL|XDMAC_CID_DID_Msk|macro|XDMAC_CID_DID_Msk
DECL|XDMAC_CID_DID_Pos|macro|XDMAC_CID_DID_Pos
DECL|XDMAC_CID_DID|macro|XDMAC_CID_DID
DECL|XDMAC_CID_FID_Msk|macro|XDMAC_CID_FID_Msk
DECL|XDMAC_CID_FID_Pos|macro|XDMAC_CID_FID_Pos
DECL|XDMAC_CID_FID|macro|XDMAC_CID_FID
DECL|XDMAC_CID_LID_Msk|macro|XDMAC_CID_LID_Msk
DECL|XDMAC_CID_LID_Pos|macro|XDMAC_CID_LID_Pos
DECL|XDMAC_CID_LID|macro|XDMAC_CID_LID
DECL|XDMAC_CID_MASK|macro|XDMAC_CID_MASK
DECL|XDMAC_CID_Msk|macro|XDMAC_CID_Msk
DECL|XDMAC_CID_OFFSET|macro|XDMAC_CID_OFFSET
DECL|XDMAC_CID_RBEID_Msk|macro|XDMAC_CID_RBEID_Msk
DECL|XDMAC_CID_RBEID_Pos|macro|XDMAC_CID_RBEID_Pos
DECL|XDMAC_CID_RBEID|macro|XDMAC_CID_RBEID
DECL|XDMAC_CID_ROID_Msk|macro|XDMAC_CID_ROID_Msk
DECL|XDMAC_CID_ROID_Pos|macro|XDMAC_CID_ROID_Pos
DECL|XDMAC_CID_ROID|macro|XDMAC_CID_ROID
DECL|XDMAC_CID_Type|typedef|} XDMAC_CID_Type;
DECL|XDMAC_CID_WBEID_Msk|macro|XDMAC_CID_WBEID_Msk
DECL|XDMAC_CID_WBEID_Pos|macro|XDMAC_CID_WBEID_Pos
DECL|XDMAC_CID_WBEID|macro|XDMAC_CID_WBEID
DECL|XDMAC_CID|member|__O XDMAC_CID_Type XDMAC_CID; /**< Offset: 0x04 ( /W 32) Channel Interrupt Disable Register (chid = 0) */
DECL|XDMAC_CID|member|__O uint32_t XDMAC_CID; /**< (XDMAC_CHID Offset: 0x04) Channel Interrupt Disable Register (chid = 0) */
DECL|XDMAC_CIE_BIE_Msk|macro|XDMAC_CIE_BIE_Msk
DECL|XDMAC_CIE_BIE_Pos|macro|XDMAC_CIE_BIE_Pos
DECL|XDMAC_CIE_BIE|macro|XDMAC_CIE_BIE
DECL|XDMAC_CIE_DIE_Msk|macro|XDMAC_CIE_DIE_Msk
DECL|XDMAC_CIE_DIE_Pos|macro|XDMAC_CIE_DIE_Pos
DECL|XDMAC_CIE_DIE|macro|XDMAC_CIE_DIE
DECL|XDMAC_CIE_FIE_Msk|macro|XDMAC_CIE_FIE_Msk
DECL|XDMAC_CIE_FIE_Pos|macro|XDMAC_CIE_FIE_Pos
DECL|XDMAC_CIE_FIE|macro|XDMAC_CIE_FIE
DECL|XDMAC_CIE_LIE_Msk|macro|XDMAC_CIE_LIE_Msk
DECL|XDMAC_CIE_LIE_Pos|macro|XDMAC_CIE_LIE_Pos
DECL|XDMAC_CIE_LIE|macro|XDMAC_CIE_LIE
DECL|XDMAC_CIE_MASK|macro|XDMAC_CIE_MASK
DECL|XDMAC_CIE_Msk|macro|XDMAC_CIE_Msk
DECL|XDMAC_CIE_OFFSET|macro|XDMAC_CIE_OFFSET
DECL|XDMAC_CIE_RBIE_Msk|macro|XDMAC_CIE_RBIE_Msk
DECL|XDMAC_CIE_RBIE_Pos|macro|XDMAC_CIE_RBIE_Pos
DECL|XDMAC_CIE_RBIE|macro|XDMAC_CIE_RBIE
DECL|XDMAC_CIE_ROIE_Msk|macro|XDMAC_CIE_ROIE_Msk
DECL|XDMAC_CIE_ROIE_Pos|macro|XDMAC_CIE_ROIE_Pos
DECL|XDMAC_CIE_ROIE|macro|XDMAC_CIE_ROIE
DECL|XDMAC_CIE_Type|typedef|} XDMAC_CIE_Type;
DECL|XDMAC_CIE_WBIE_Msk|macro|XDMAC_CIE_WBIE_Msk
DECL|XDMAC_CIE_WBIE_Pos|macro|XDMAC_CIE_WBIE_Pos
DECL|XDMAC_CIE_WBIE|macro|XDMAC_CIE_WBIE
DECL|XDMAC_CIE|member|__O XDMAC_CIE_Type XDMAC_CIE; /**< Offset: 0x00 ( /W 32) Channel Interrupt Enable Register (chid = 0) */
DECL|XDMAC_CIE|member|__O uint32_t XDMAC_CIE; /**< (XDMAC_CHID Offset: 0x00) Channel Interrupt Enable Register (chid = 0) */
DECL|XDMAC_CIM_BIM_Msk|macro|XDMAC_CIM_BIM_Msk
DECL|XDMAC_CIM_BIM_Pos|macro|XDMAC_CIM_BIM_Pos
DECL|XDMAC_CIM_BIM|macro|XDMAC_CIM_BIM
DECL|XDMAC_CIM_DIM_Msk|macro|XDMAC_CIM_DIM_Msk
DECL|XDMAC_CIM_DIM_Pos|macro|XDMAC_CIM_DIM_Pos
DECL|XDMAC_CIM_DIM|macro|XDMAC_CIM_DIM
DECL|XDMAC_CIM_FIM_Msk|macro|XDMAC_CIM_FIM_Msk
DECL|XDMAC_CIM_FIM_Pos|macro|XDMAC_CIM_FIM_Pos
DECL|XDMAC_CIM_FIM|macro|XDMAC_CIM_FIM
DECL|XDMAC_CIM_LIM_Msk|macro|XDMAC_CIM_LIM_Msk
DECL|XDMAC_CIM_LIM_Pos|macro|XDMAC_CIM_LIM_Pos
DECL|XDMAC_CIM_LIM|macro|XDMAC_CIM_LIM
DECL|XDMAC_CIM_MASK|macro|XDMAC_CIM_MASK
DECL|XDMAC_CIM_Msk|macro|XDMAC_CIM_Msk
DECL|XDMAC_CIM_OFFSET|macro|XDMAC_CIM_OFFSET
DECL|XDMAC_CIM_RBEIM_Msk|macro|XDMAC_CIM_RBEIM_Msk
DECL|XDMAC_CIM_RBEIM_Pos|macro|XDMAC_CIM_RBEIM_Pos
DECL|XDMAC_CIM_RBEIM|macro|XDMAC_CIM_RBEIM
DECL|XDMAC_CIM_ROIM_Msk|macro|XDMAC_CIM_ROIM_Msk
DECL|XDMAC_CIM_ROIM_Pos|macro|XDMAC_CIM_ROIM_Pos
DECL|XDMAC_CIM_ROIM|macro|XDMAC_CIM_ROIM
DECL|XDMAC_CIM_Type|typedef|} XDMAC_CIM_Type;
DECL|XDMAC_CIM_WBEIM_Msk|macro|XDMAC_CIM_WBEIM_Msk
DECL|XDMAC_CIM_WBEIM_Pos|macro|XDMAC_CIM_WBEIM_Pos
DECL|XDMAC_CIM_WBEIM|macro|XDMAC_CIM_WBEIM
DECL|XDMAC_CIM|member|__O XDMAC_CIM_Type XDMAC_CIM; /**< Offset: 0x08 ( /W 32) Channel Interrupt Mask Register (chid = 0) */
DECL|XDMAC_CIM|member|__O uint32_t XDMAC_CIM; /**< (XDMAC_CHID Offset: 0x08) Channel Interrupt Mask Register (chid = 0) */
DECL|XDMAC_CIS_BIS_Msk|macro|XDMAC_CIS_BIS_Msk
DECL|XDMAC_CIS_BIS_Pos|macro|XDMAC_CIS_BIS_Pos
DECL|XDMAC_CIS_BIS|macro|XDMAC_CIS_BIS
DECL|XDMAC_CIS_DIS_Msk|macro|XDMAC_CIS_DIS_Msk
DECL|XDMAC_CIS_DIS_Pos|macro|XDMAC_CIS_DIS_Pos
DECL|XDMAC_CIS_DIS|macro|XDMAC_CIS_DIS
DECL|XDMAC_CIS_FIS_Msk|macro|XDMAC_CIS_FIS_Msk
DECL|XDMAC_CIS_FIS_Pos|macro|XDMAC_CIS_FIS_Pos
DECL|XDMAC_CIS_FIS|macro|XDMAC_CIS_FIS
DECL|XDMAC_CIS_LIS_Msk|macro|XDMAC_CIS_LIS_Msk
DECL|XDMAC_CIS_LIS_Pos|macro|XDMAC_CIS_LIS_Pos
DECL|XDMAC_CIS_LIS|macro|XDMAC_CIS_LIS
DECL|XDMAC_CIS_MASK|macro|XDMAC_CIS_MASK
DECL|XDMAC_CIS_Msk|macro|XDMAC_CIS_Msk
DECL|XDMAC_CIS_OFFSET|macro|XDMAC_CIS_OFFSET
DECL|XDMAC_CIS_RBEIS_Msk|macro|XDMAC_CIS_RBEIS_Msk
DECL|XDMAC_CIS_RBEIS_Pos|macro|XDMAC_CIS_RBEIS_Pos
DECL|XDMAC_CIS_RBEIS|macro|XDMAC_CIS_RBEIS
DECL|XDMAC_CIS_ROIS_Msk|macro|XDMAC_CIS_ROIS_Msk
DECL|XDMAC_CIS_ROIS_Pos|macro|XDMAC_CIS_ROIS_Pos
DECL|XDMAC_CIS_ROIS|macro|XDMAC_CIS_ROIS
DECL|XDMAC_CIS_Type|typedef|} XDMAC_CIS_Type;
DECL|XDMAC_CIS_WBEIS_Msk|macro|XDMAC_CIS_WBEIS_Msk
DECL|XDMAC_CIS_WBEIS_Pos|macro|XDMAC_CIS_WBEIS_Pos
DECL|XDMAC_CIS_WBEIS|macro|XDMAC_CIS_WBEIS
DECL|XDMAC_CIS|member|__I XDMAC_CIS_Type XDMAC_CIS; /**< Offset: 0x0C (R/ 32) Channel Interrupt Status Register (chid = 0) */
DECL|XDMAC_CIS|member|__I uint32_t XDMAC_CIS; /**< (XDMAC_CHID Offset: 0x0C) Channel Interrupt Status Register (chid = 0) */
DECL|XDMAC_CNDA_MASK|macro|XDMAC_CNDA_MASK
DECL|XDMAC_CNDA_Msk|macro|XDMAC_CNDA_Msk
DECL|XDMAC_CNDA_NDAIF_Msk|macro|XDMAC_CNDA_NDAIF_Msk
DECL|XDMAC_CNDA_NDAIF_Pos|macro|XDMAC_CNDA_NDAIF_Pos
DECL|XDMAC_CNDA_NDAIF|macro|XDMAC_CNDA_NDAIF
DECL|XDMAC_CNDA_NDA_Msk|macro|XDMAC_CNDA_NDA_Msk
DECL|XDMAC_CNDA_NDA_Pos|macro|XDMAC_CNDA_NDA_Pos
DECL|XDMAC_CNDA_NDA|macro|XDMAC_CNDA_NDA
DECL|XDMAC_CNDA_OFFSET|macro|XDMAC_CNDA_OFFSET
DECL|XDMAC_CNDA_Type|typedef|} XDMAC_CNDA_Type;
DECL|XDMAC_CNDA|member|__IO XDMAC_CNDA_Type XDMAC_CNDA; /**< Offset: 0x18 (R/W 32) Channel Next Descriptor Address Register (chid = 0) */
DECL|XDMAC_CNDA|member|__IO uint32_t XDMAC_CNDA; /**< (XDMAC_CHID Offset: 0x18) Channel Next Descriptor Address Register (chid = 0) */
DECL|XDMAC_CNDC_MASK|macro|XDMAC_CNDC_MASK
DECL|XDMAC_CNDC_Msk|macro|XDMAC_CNDC_Msk
DECL|XDMAC_CNDC_NDDUP_DST_PARAMS_UNCHANGED_Val|macro|XDMAC_CNDC_NDDUP_DST_PARAMS_UNCHANGED_Val
DECL|XDMAC_CNDC_NDDUP_DST_PARAMS_UNCHANGED|macro|XDMAC_CNDC_NDDUP_DST_PARAMS_UNCHANGED
DECL|XDMAC_CNDC_NDDUP_DST_PARAMS_UPDATED_Val|macro|XDMAC_CNDC_NDDUP_DST_PARAMS_UPDATED_Val
DECL|XDMAC_CNDC_NDDUP_DST_PARAMS_UPDATED|macro|XDMAC_CNDC_NDDUP_DST_PARAMS_UPDATED
DECL|XDMAC_CNDC_NDDUP_Msk|macro|XDMAC_CNDC_NDDUP_Msk
DECL|XDMAC_CNDC_NDDUP_Pos|macro|XDMAC_CNDC_NDDUP_Pos
DECL|XDMAC_CNDC_NDDUP|macro|XDMAC_CNDC_NDDUP
DECL|XDMAC_CNDC_NDE_DSCR_FETCH_DIS_Val|macro|XDMAC_CNDC_NDE_DSCR_FETCH_DIS_Val
DECL|XDMAC_CNDC_NDE_DSCR_FETCH_DIS|macro|XDMAC_CNDC_NDE_DSCR_FETCH_DIS
DECL|XDMAC_CNDC_NDE_DSCR_FETCH_EN_Val|macro|XDMAC_CNDC_NDE_DSCR_FETCH_EN_Val
DECL|XDMAC_CNDC_NDE_DSCR_FETCH_EN|macro|XDMAC_CNDC_NDE_DSCR_FETCH_EN
DECL|XDMAC_CNDC_NDE_Msk|macro|XDMAC_CNDC_NDE_Msk
DECL|XDMAC_CNDC_NDE_Pos|macro|XDMAC_CNDC_NDE_Pos
DECL|XDMAC_CNDC_NDE|macro|XDMAC_CNDC_NDE
DECL|XDMAC_CNDC_NDSUP_Msk|macro|XDMAC_CNDC_NDSUP_Msk
DECL|XDMAC_CNDC_NDSUP_Pos|macro|XDMAC_CNDC_NDSUP_Pos
DECL|XDMAC_CNDC_NDSUP_SRC_PARAMS_UNCHANGED_Val|macro|XDMAC_CNDC_NDSUP_SRC_PARAMS_UNCHANGED_Val
DECL|XDMAC_CNDC_NDSUP_SRC_PARAMS_UNCHANGED|macro|XDMAC_CNDC_NDSUP_SRC_PARAMS_UNCHANGED
DECL|XDMAC_CNDC_NDSUP_SRC_PARAMS_UPDATED_Val|macro|XDMAC_CNDC_NDSUP_SRC_PARAMS_UPDATED_Val
DECL|XDMAC_CNDC_NDSUP_SRC_PARAMS_UPDATED|macro|XDMAC_CNDC_NDSUP_SRC_PARAMS_UPDATED
DECL|XDMAC_CNDC_NDSUP|macro|XDMAC_CNDC_NDSUP
DECL|XDMAC_CNDC_NDVIEW_Msk|macro|XDMAC_CNDC_NDVIEW_Msk
DECL|XDMAC_CNDC_NDVIEW_NDV0_Val|macro|XDMAC_CNDC_NDVIEW_NDV0_Val
DECL|XDMAC_CNDC_NDVIEW_NDV0|macro|XDMAC_CNDC_NDVIEW_NDV0
DECL|XDMAC_CNDC_NDVIEW_NDV1_Val|macro|XDMAC_CNDC_NDVIEW_NDV1_Val
DECL|XDMAC_CNDC_NDVIEW_NDV1|macro|XDMAC_CNDC_NDVIEW_NDV1
DECL|XDMAC_CNDC_NDVIEW_NDV2_Val|macro|XDMAC_CNDC_NDVIEW_NDV2_Val
DECL|XDMAC_CNDC_NDVIEW_NDV2|macro|XDMAC_CNDC_NDVIEW_NDV2
DECL|XDMAC_CNDC_NDVIEW_NDV3_Val|macro|XDMAC_CNDC_NDVIEW_NDV3_Val
DECL|XDMAC_CNDC_NDVIEW_NDV3|macro|XDMAC_CNDC_NDVIEW_NDV3
DECL|XDMAC_CNDC_NDVIEW_Pos|macro|XDMAC_CNDC_NDVIEW_Pos
DECL|XDMAC_CNDC_NDVIEW|macro|XDMAC_CNDC_NDVIEW
DECL|XDMAC_CNDC_OFFSET|macro|XDMAC_CNDC_OFFSET
DECL|XDMAC_CNDC_Type|typedef|} XDMAC_CNDC_Type;
DECL|XDMAC_CNDC|member|__IO XDMAC_CNDC_Type XDMAC_CNDC; /**< Offset: 0x1C (R/W 32) Channel Next Descriptor Control Register (chid = 0) */
DECL|XDMAC_CNDC|member|__IO uint32_t XDMAC_CNDC; /**< (XDMAC_CHID Offset: 0x1C) Channel Next Descriptor Control Register (chid = 0) */
DECL|XDMAC_CSA_MASK|macro|XDMAC_CSA_MASK
DECL|XDMAC_CSA_Msk|macro|XDMAC_CSA_Msk
DECL|XDMAC_CSA_OFFSET|macro|XDMAC_CSA_OFFSET
DECL|XDMAC_CSA_SA_Msk|macro|XDMAC_CSA_SA_Msk
DECL|XDMAC_CSA_SA_Pos|macro|XDMAC_CSA_SA_Pos
DECL|XDMAC_CSA_SA|macro|XDMAC_CSA_SA
DECL|XDMAC_CSA_Type|typedef|} XDMAC_CSA_Type;
DECL|XDMAC_CSA|member|__IO XDMAC_CSA_Type XDMAC_CSA; /**< Offset: 0x10 (R/W 32) Channel Source Address Register (chid = 0) */
DECL|XDMAC_CSA|member|__IO uint32_t XDMAC_CSA; /**< (XDMAC_CHID Offset: 0x10) Channel Source Address Register (chid = 0) */
DECL|XDMAC_CSUS_MASK|macro|XDMAC_CSUS_MASK
DECL|XDMAC_CSUS_Msk|macro|XDMAC_CSUS_Msk
DECL|XDMAC_CSUS_OFFSET|macro|XDMAC_CSUS_OFFSET
DECL|XDMAC_CSUS_SUBS_Msk|macro|XDMAC_CSUS_SUBS_Msk
DECL|XDMAC_CSUS_SUBS_Pos|macro|XDMAC_CSUS_SUBS_Pos
DECL|XDMAC_CSUS_SUBS|macro|XDMAC_CSUS_SUBS
DECL|XDMAC_CSUS_Type|typedef|} XDMAC_CSUS_Type;
DECL|XDMAC_CSUS|member|__IO XDMAC_CSUS_Type XDMAC_CSUS; /**< Offset: 0x30 (R/W 32) Channel Source Microblock Stride (chid = 0) */
DECL|XDMAC_CSUS|member|__IO uint32_t XDMAC_CSUS; /**< (XDMAC_CHID Offset: 0x30) Channel Source Microblock Stride (chid = 0) */
DECL|XDMAC_CUBC_MASK|macro|XDMAC_CUBC_MASK
DECL|XDMAC_CUBC_Msk|macro|XDMAC_CUBC_Msk
DECL|XDMAC_CUBC_OFFSET|macro|XDMAC_CUBC_OFFSET
DECL|XDMAC_CUBC_Type|typedef|} XDMAC_CUBC_Type;
DECL|XDMAC_CUBC_UBLEN_Msk|macro|XDMAC_CUBC_UBLEN_Msk
DECL|XDMAC_CUBC_UBLEN_Pos|macro|XDMAC_CUBC_UBLEN_Pos
DECL|XDMAC_CUBC_UBLEN|macro|XDMAC_CUBC_UBLEN
DECL|XDMAC_CUBC|member|__IO XDMAC_CUBC_Type XDMAC_CUBC; /**< Offset: 0x20 (R/W 32) Channel Microblock Control Register (chid = 0) */
DECL|XDMAC_CUBC|member|__IO uint32_t XDMAC_CUBC; /**< (XDMAC_CHID Offset: 0x20) Channel Microblock Control Register (chid = 0) */
DECL|XDMAC_GCFG_BXKBEN_Msk|macro|XDMAC_GCFG_BXKBEN_Msk
DECL|XDMAC_GCFG_BXKBEN_Pos|macro|XDMAC_GCFG_BXKBEN_Pos
DECL|XDMAC_GCFG_BXKBEN|macro|XDMAC_GCFG_BXKBEN
DECL|XDMAC_GCFG_CGDISFIFO_Msk|macro|XDMAC_GCFG_CGDISFIFO_Msk
DECL|XDMAC_GCFG_CGDISFIFO_Pos|macro|XDMAC_GCFG_CGDISFIFO_Pos
DECL|XDMAC_GCFG_CGDISFIFO|macro|XDMAC_GCFG_CGDISFIFO
DECL|XDMAC_GCFG_CGDISIF_Msk|macro|XDMAC_GCFG_CGDISIF_Msk
DECL|XDMAC_GCFG_CGDISIF_Pos|macro|XDMAC_GCFG_CGDISIF_Pos
DECL|XDMAC_GCFG_CGDISIF|macro|XDMAC_GCFG_CGDISIF
DECL|XDMAC_GCFG_CGDISPIPE_Msk|macro|XDMAC_GCFG_CGDISPIPE_Msk
DECL|XDMAC_GCFG_CGDISPIPE_Pos|macro|XDMAC_GCFG_CGDISPIPE_Pos
DECL|XDMAC_GCFG_CGDISPIPE|macro|XDMAC_GCFG_CGDISPIPE
DECL|XDMAC_GCFG_CGDISREG_Msk|macro|XDMAC_GCFG_CGDISREG_Msk
DECL|XDMAC_GCFG_CGDISREG_Pos|macro|XDMAC_GCFG_CGDISREG_Pos
DECL|XDMAC_GCFG_CGDISREG|macro|XDMAC_GCFG_CGDISREG
DECL|XDMAC_GCFG_MASK|macro|XDMAC_GCFG_MASK
DECL|XDMAC_GCFG_Msk|macro|XDMAC_GCFG_Msk
DECL|XDMAC_GCFG_OFFSET|macro|XDMAC_GCFG_OFFSET
DECL|XDMAC_GCFG_Type|typedef|} XDMAC_GCFG_Type;
DECL|XDMAC_GCFG|member|__I XDMAC_GCFG_Type XDMAC_GCFG; /**< Offset: 0x04 (R/ 32) Global Configuration Register */
DECL|XDMAC_GCFG|member|__I uint32_t XDMAC_GCFG; /**< (XDMAC Offset: 0x04) Global Configuration Register */
DECL|XDMAC_GD_DI0_Msk|macro|XDMAC_GD_DI0_Msk
DECL|XDMAC_GD_DI0_Pos|macro|XDMAC_GD_DI0_Pos
DECL|XDMAC_GD_DI0|macro|XDMAC_GD_DI0
DECL|XDMAC_GD_DI10_Msk|macro|XDMAC_GD_DI10_Msk
DECL|XDMAC_GD_DI10_Pos|macro|XDMAC_GD_DI10_Pos
DECL|XDMAC_GD_DI10|macro|XDMAC_GD_DI10
DECL|XDMAC_GD_DI11_Msk|macro|XDMAC_GD_DI11_Msk
DECL|XDMAC_GD_DI11_Pos|macro|XDMAC_GD_DI11_Pos
DECL|XDMAC_GD_DI11|macro|XDMAC_GD_DI11
DECL|XDMAC_GD_DI12_Msk|macro|XDMAC_GD_DI12_Msk
DECL|XDMAC_GD_DI12_Pos|macro|XDMAC_GD_DI12_Pos
DECL|XDMAC_GD_DI12|macro|XDMAC_GD_DI12
DECL|XDMAC_GD_DI13_Msk|macro|XDMAC_GD_DI13_Msk
DECL|XDMAC_GD_DI13_Pos|macro|XDMAC_GD_DI13_Pos
DECL|XDMAC_GD_DI13|macro|XDMAC_GD_DI13
DECL|XDMAC_GD_DI14_Msk|macro|XDMAC_GD_DI14_Msk
DECL|XDMAC_GD_DI14_Pos|macro|XDMAC_GD_DI14_Pos
DECL|XDMAC_GD_DI14|macro|XDMAC_GD_DI14
DECL|XDMAC_GD_DI15_Msk|macro|XDMAC_GD_DI15_Msk
DECL|XDMAC_GD_DI15_Pos|macro|XDMAC_GD_DI15_Pos
DECL|XDMAC_GD_DI15|macro|XDMAC_GD_DI15
DECL|XDMAC_GD_DI16_Msk|macro|XDMAC_GD_DI16_Msk
DECL|XDMAC_GD_DI16_Pos|macro|XDMAC_GD_DI16_Pos
DECL|XDMAC_GD_DI16|macro|XDMAC_GD_DI16
DECL|XDMAC_GD_DI17_Msk|macro|XDMAC_GD_DI17_Msk
DECL|XDMAC_GD_DI17_Pos|macro|XDMAC_GD_DI17_Pos
DECL|XDMAC_GD_DI17|macro|XDMAC_GD_DI17
DECL|XDMAC_GD_DI18_Msk|macro|XDMAC_GD_DI18_Msk
DECL|XDMAC_GD_DI18_Pos|macro|XDMAC_GD_DI18_Pos
DECL|XDMAC_GD_DI18|macro|XDMAC_GD_DI18
DECL|XDMAC_GD_DI19_Msk|macro|XDMAC_GD_DI19_Msk
DECL|XDMAC_GD_DI19_Pos|macro|XDMAC_GD_DI19_Pos
DECL|XDMAC_GD_DI19|macro|XDMAC_GD_DI19
DECL|XDMAC_GD_DI1_Msk|macro|XDMAC_GD_DI1_Msk
DECL|XDMAC_GD_DI1_Pos|macro|XDMAC_GD_DI1_Pos
DECL|XDMAC_GD_DI1|macro|XDMAC_GD_DI1
DECL|XDMAC_GD_DI20_Msk|macro|XDMAC_GD_DI20_Msk
DECL|XDMAC_GD_DI20_Pos|macro|XDMAC_GD_DI20_Pos
DECL|XDMAC_GD_DI20|macro|XDMAC_GD_DI20
DECL|XDMAC_GD_DI21_Msk|macro|XDMAC_GD_DI21_Msk
DECL|XDMAC_GD_DI21_Pos|macro|XDMAC_GD_DI21_Pos
DECL|XDMAC_GD_DI21|macro|XDMAC_GD_DI21
DECL|XDMAC_GD_DI22_Msk|macro|XDMAC_GD_DI22_Msk
DECL|XDMAC_GD_DI22_Pos|macro|XDMAC_GD_DI22_Pos
DECL|XDMAC_GD_DI22|macro|XDMAC_GD_DI22
DECL|XDMAC_GD_DI23_Msk|macro|XDMAC_GD_DI23_Msk
DECL|XDMAC_GD_DI23_Pos|macro|XDMAC_GD_DI23_Pos
DECL|XDMAC_GD_DI23|macro|XDMAC_GD_DI23
DECL|XDMAC_GD_DI2_Msk|macro|XDMAC_GD_DI2_Msk
DECL|XDMAC_GD_DI2_Pos|macro|XDMAC_GD_DI2_Pos
DECL|XDMAC_GD_DI2|macro|XDMAC_GD_DI2
DECL|XDMAC_GD_DI3_Msk|macro|XDMAC_GD_DI3_Msk
DECL|XDMAC_GD_DI3_Pos|macro|XDMAC_GD_DI3_Pos
DECL|XDMAC_GD_DI3|macro|XDMAC_GD_DI3
DECL|XDMAC_GD_DI4_Msk|macro|XDMAC_GD_DI4_Msk
DECL|XDMAC_GD_DI4_Pos|macro|XDMAC_GD_DI4_Pos
DECL|XDMAC_GD_DI4|macro|XDMAC_GD_DI4
DECL|XDMAC_GD_DI5_Msk|macro|XDMAC_GD_DI5_Msk
DECL|XDMAC_GD_DI5_Pos|macro|XDMAC_GD_DI5_Pos
DECL|XDMAC_GD_DI5|macro|XDMAC_GD_DI5
DECL|XDMAC_GD_DI6_Msk|macro|XDMAC_GD_DI6_Msk
DECL|XDMAC_GD_DI6_Pos|macro|XDMAC_GD_DI6_Pos
DECL|XDMAC_GD_DI6|macro|XDMAC_GD_DI6
DECL|XDMAC_GD_DI7_Msk|macro|XDMAC_GD_DI7_Msk
DECL|XDMAC_GD_DI7_Pos|macro|XDMAC_GD_DI7_Pos
DECL|XDMAC_GD_DI7|macro|XDMAC_GD_DI7
DECL|XDMAC_GD_DI8_Msk|macro|XDMAC_GD_DI8_Msk
DECL|XDMAC_GD_DI8_Pos|macro|XDMAC_GD_DI8_Pos
DECL|XDMAC_GD_DI8|macro|XDMAC_GD_DI8
DECL|XDMAC_GD_DI9_Msk|macro|XDMAC_GD_DI9_Msk
DECL|XDMAC_GD_DI9_Pos|macro|XDMAC_GD_DI9_Pos
DECL|XDMAC_GD_DI9|macro|XDMAC_GD_DI9
DECL|XDMAC_GD_DI_Msk|macro|XDMAC_GD_DI_Msk
DECL|XDMAC_GD_DI_Pos|macro|XDMAC_GD_DI_Pos
DECL|XDMAC_GD_DI|macro|XDMAC_GD_DI
DECL|XDMAC_GD_MASK|macro|XDMAC_GD_MASK
DECL|XDMAC_GD_Msk|macro|XDMAC_GD_Msk
DECL|XDMAC_GD_OFFSET|macro|XDMAC_GD_OFFSET
DECL|XDMAC_GD_Type|typedef|} XDMAC_GD_Type;
DECL|XDMAC_GD|member|__O XDMAC_GD_Type XDMAC_GD; /**< Offset: 0x20 ( /W 32) Global Channel Disable Register */
DECL|XDMAC_GD|member|__O uint32_t XDMAC_GD; /**< (XDMAC Offset: 0x20) Global Channel Disable Register */
DECL|XDMAC_GE_EN0_Msk|macro|XDMAC_GE_EN0_Msk
DECL|XDMAC_GE_EN0_Pos|macro|XDMAC_GE_EN0_Pos
DECL|XDMAC_GE_EN0|macro|XDMAC_GE_EN0
DECL|XDMAC_GE_EN10_Msk|macro|XDMAC_GE_EN10_Msk
DECL|XDMAC_GE_EN10_Pos|macro|XDMAC_GE_EN10_Pos
DECL|XDMAC_GE_EN10|macro|XDMAC_GE_EN10
DECL|XDMAC_GE_EN11_Msk|macro|XDMAC_GE_EN11_Msk
DECL|XDMAC_GE_EN11_Pos|macro|XDMAC_GE_EN11_Pos
DECL|XDMAC_GE_EN11|macro|XDMAC_GE_EN11
DECL|XDMAC_GE_EN12_Msk|macro|XDMAC_GE_EN12_Msk
DECL|XDMAC_GE_EN12_Pos|macro|XDMAC_GE_EN12_Pos
DECL|XDMAC_GE_EN12|macro|XDMAC_GE_EN12
DECL|XDMAC_GE_EN13_Msk|macro|XDMAC_GE_EN13_Msk
DECL|XDMAC_GE_EN13_Pos|macro|XDMAC_GE_EN13_Pos
DECL|XDMAC_GE_EN13|macro|XDMAC_GE_EN13
DECL|XDMAC_GE_EN14_Msk|macro|XDMAC_GE_EN14_Msk
DECL|XDMAC_GE_EN14_Pos|macro|XDMAC_GE_EN14_Pos
DECL|XDMAC_GE_EN14|macro|XDMAC_GE_EN14
DECL|XDMAC_GE_EN15_Msk|macro|XDMAC_GE_EN15_Msk
DECL|XDMAC_GE_EN15_Pos|macro|XDMAC_GE_EN15_Pos
DECL|XDMAC_GE_EN15|macro|XDMAC_GE_EN15
DECL|XDMAC_GE_EN16_Msk|macro|XDMAC_GE_EN16_Msk
DECL|XDMAC_GE_EN16_Pos|macro|XDMAC_GE_EN16_Pos
DECL|XDMAC_GE_EN16|macro|XDMAC_GE_EN16
DECL|XDMAC_GE_EN17_Msk|macro|XDMAC_GE_EN17_Msk
DECL|XDMAC_GE_EN17_Pos|macro|XDMAC_GE_EN17_Pos
DECL|XDMAC_GE_EN17|macro|XDMAC_GE_EN17
DECL|XDMAC_GE_EN18_Msk|macro|XDMAC_GE_EN18_Msk
DECL|XDMAC_GE_EN18_Pos|macro|XDMAC_GE_EN18_Pos
DECL|XDMAC_GE_EN18|macro|XDMAC_GE_EN18
DECL|XDMAC_GE_EN19_Msk|macro|XDMAC_GE_EN19_Msk
DECL|XDMAC_GE_EN19_Pos|macro|XDMAC_GE_EN19_Pos
DECL|XDMAC_GE_EN19|macro|XDMAC_GE_EN19
DECL|XDMAC_GE_EN1_Msk|macro|XDMAC_GE_EN1_Msk
DECL|XDMAC_GE_EN1_Pos|macro|XDMAC_GE_EN1_Pos
DECL|XDMAC_GE_EN1|macro|XDMAC_GE_EN1
DECL|XDMAC_GE_EN20_Msk|macro|XDMAC_GE_EN20_Msk
DECL|XDMAC_GE_EN20_Pos|macro|XDMAC_GE_EN20_Pos
DECL|XDMAC_GE_EN20|macro|XDMAC_GE_EN20
DECL|XDMAC_GE_EN21_Msk|macro|XDMAC_GE_EN21_Msk
DECL|XDMAC_GE_EN21_Pos|macro|XDMAC_GE_EN21_Pos
DECL|XDMAC_GE_EN21|macro|XDMAC_GE_EN21
DECL|XDMAC_GE_EN22_Msk|macro|XDMAC_GE_EN22_Msk
DECL|XDMAC_GE_EN22_Pos|macro|XDMAC_GE_EN22_Pos
DECL|XDMAC_GE_EN22|macro|XDMAC_GE_EN22
DECL|XDMAC_GE_EN23_Msk|macro|XDMAC_GE_EN23_Msk
DECL|XDMAC_GE_EN23_Pos|macro|XDMAC_GE_EN23_Pos
DECL|XDMAC_GE_EN23|macro|XDMAC_GE_EN23
DECL|XDMAC_GE_EN2_Msk|macro|XDMAC_GE_EN2_Msk
DECL|XDMAC_GE_EN2_Pos|macro|XDMAC_GE_EN2_Pos
DECL|XDMAC_GE_EN2|macro|XDMAC_GE_EN2
DECL|XDMAC_GE_EN3_Msk|macro|XDMAC_GE_EN3_Msk
DECL|XDMAC_GE_EN3_Pos|macro|XDMAC_GE_EN3_Pos
DECL|XDMAC_GE_EN3|macro|XDMAC_GE_EN3
DECL|XDMAC_GE_EN4_Msk|macro|XDMAC_GE_EN4_Msk
DECL|XDMAC_GE_EN4_Pos|macro|XDMAC_GE_EN4_Pos
DECL|XDMAC_GE_EN4|macro|XDMAC_GE_EN4
DECL|XDMAC_GE_EN5_Msk|macro|XDMAC_GE_EN5_Msk
DECL|XDMAC_GE_EN5_Pos|macro|XDMAC_GE_EN5_Pos
DECL|XDMAC_GE_EN5|macro|XDMAC_GE_EN5
DECL|XDMAC_GE_EN6_Msk|macro|XDMAC_GE_EN6_Msk
DECL|XDMAC_GE_EN6_Pos|macro|XDMAC_GE_EN6_Pos
DECL|XDMAC_GE_EN6|macro|XDMAC_GE_EN6
DECL|XDMAC_GE_EN7_Msk|macro|XDMAC_GE_EN7_Msk
DECL|XDMAC_GE_EN7_Pos|macro|XDMAC_GE_EN7_Pos
DECL|XDMAC_GE_EN7|macro|XDMAC_GE_EN7
DECL|XDMAC_GE_EN8_Msk|macro|XDMAC_GE_EN8_Msk
DECL|XDMAC_GE_EN8_Pos|macro|XDMAC_GE_EN8_Pos
DECL|XDMAC_GE_EN8|macro|XDMAC_GE_EN8
DECL|XDMAC_GE_EN9_Msk|macro|XDMAC_GE_EN9_Msk
DECL|XDMAC_GE_EN9_Pos|macro|XDMAC_GE_EN9_Pos
DECL|XDMAC_GE_EN9|macro|XDMAC_GE_EN9
DECL|XDMAC_GE_EN_Msk|macro|XDMAC_GE_EN_Msk
DECL|XDMAC_GE_EN_Pos|macro|XDMAC_GE_EN_Pos
DECL|XDMAC_GE_EN|macro|XDMAC_GE_EN
DECL|XDMAC_GE_MASK|macro|XDMAC_GE_MASK
DECL|XDMAC_GE_Msk|macro|XDMAC_GE_Msk
DECL|XDMAC_GE_OFFSET|macro|XDMAC_GE_OFFSET
DECL|XDMAC_GE_Type|typedef|} XDMAC_GE_Type;
DECL|XDMAC_GE|member|__O XDMAC_GE_Type XDMAC_GE; /**< Offset: 0x1C ( /W 32) Global Channel Enable Register */
DECL|XDMAC_GE|member|__O uint32_t XDMAC_GE; /**< (XDMAC Offset: 0x1C) Global Channel Enable Register */
DECL|XDMAC_GID_ID0_Msk|macro|XDMAC_GID_ID0_Msk
DECL|XDMAC_GID_ID0_Pos|macro|XDMAC_GID_ID0_Pos
DECL|XDMAC_GID_ID0|macro|XDMAC_GID_ID0
DECL|XDMAC_GID_ID10_Msk|macro|XDMAC_GID_ID10_Msk
DECL|XDMAC_GID_ID10_Pos|macro|XDMAC_GID_ID10_Pos
DECL|XDMAC_GID_ID10|macro|XDMAC_GID_ID10
DECL|XDMAC_GID_ID11_Msk|macro|XDMAC_GID_ID11_Msk
DECL|XDMAC_GID_ID11_Pos|macro|XDMAC_GID_ID11_Pos
DECL|XDMAC_GID_ID11|macro|XDMAC_GID_ID11
DECL|XDMAC_GID_ID12_Msk|macro|XDMAC_GID_ID12_Msk
DECL|XDMAC_GID_ID12_Pos|macro|XDMAC_GID_ID12_Pos
DECL|XDMAC_GID_ID12|macro|XDMAC_GID_ID12
DECL|XDMAC_GID_ID13_Msk|macro|XDMAC_GID_ID13_Msk
DECL|XDMAC_GID_ID13_Pos|macro|XDMAC_GID_ID13_Pos
DECL|XDMAC_GID_ID13|macro|XDMAC_GID_ID13
DECL|XDMAC_GID_ID14_Msk|macro|XDMAC_GID_ID14_Msk
DECL|XDMAC_GID_ID14_Pos|macro|XDMAC_GID_ID14_Pos
DECL|XDMAC_GID_ID14|macro|XDMAC_GID_ID14
DECL|XDMAC_GID_ID15_Msk|macro|XDMAC_GID_ID15_Msk
DECL|XDMAC_GID_ID15_Pos|macro|XDMAC_GID_ID15_Pos
DECL|XDMAC_GID_ID15|macro|XDMAC_GID_ID15
DECL|XDMAC_GID_ID16_Msk|macro|XDMAC_GID_ID16_Msk
DECL|XDMAC_GID_ID16_Pos|macro|XDMAC_GID_ID16_Pos
DECL|XDMAC_GID_ID16|macro|XDMAC_GID_ID16
DECL|XDMAC_GID_ID17_Msk|macro|XDMAC_GID_ID17_Msk
DECL|XDMAC_GID_ID17_Pos|macro|XDMAC_GID_ID17_Pos
DECL|XDMAC_GID_ID17|macro|XDMAC_GID_ID17
DECL|XDMAC_GID_ID18_Msk|macro|XDMAC_GID_ID18_Msk
DECL|XDMAC_GID_ID18_Pos|macro|XDMAC_GID_ID18_Pos
DECL|XDMAC_GID_ID18|macro|XDMAC_GID_ID18
DECL|XDMAC_GID_ID19_Msk|macro|XDMAC_GID_ID19_Msk
DECL|XDMAC_GID_ID19_Pos|macro|XDMAC_GID_ID19_Pos
DECL|XDMAC_GID_ID19|macro|XDMAC_GID_ID19
DECL|XDMAC_GID_ID1_Msk|macro|XDMAC_GID_ID1_Msk
DECL|XDMAC_GID_ID1_Pos|macro|XDMAC_GID_ID1_Pos
DECL|XDMAC_GID_ID1|macro|XDMAC_GID_ID1
DECL|XDMAC_GID_ID20_Msk|macro|XDMAC_GID_ID20_Msk
DECL|XDMAC_GID_ID20_Pos|macro|XDMAC_GID_ID20_Pos
DECL|XDMAC_GID_ID20|macro|XDMAC_GID_ID20
DECL|XDMAC_GID_ID21_Msk|macro|XDMAC_GID_ID21_Msk
DECL|XDMAC_GID_ID21_Pos|macro|XDMAC_GID_ID21_Pos
DECL|XDMAC_GID_ID21|macro|XDMAC_GID_ID21
DECL|XDMAC_GID_ID22_Msk|macro|XDMAC_GID_ID22_Msk
DECL|XDMAC_GID_ID22_Pos|macro|XDMAC_GID_ID22_Pos
DECL|XDMAC_GID_ID22|macro|XDMAC_GID_ID22
DECL|XDMAC_GID_ID23_Msk|macro|XDMAC_GID_ID23_Msk
DECL|XDMAC_GID_ID23_Pos|macro|XDMAC_GID_ID23_Pos
DECL|XDMAC_GID_ID23|macro|XDMAC_GID_ID23
DECL|XDMAC_GID_ID2_Msk|macro|XDMAC_GID_ID2_Msk
DECL|XDMAC_GID_ID2_Pos|macro|XDMAC_GID_ID2_Pos
DECL|XDMAC_GID_ID2|macro|XDMAC_GID_ID2
DECL|XDMAC_GID_ID3_Msk|macro|XDMAC_GID_ID3_Msk
DECL|XDMAC_GID_ID3_Pos|macro|XDMAC_GID_ID3_Pos
DECL|XDMAC_GID_ID3|macro|XDMAC_GID_ID3
DECL|XDMAC_GID_ID4_Msk|macro|XDMAC_GID_ID4_Msk
DECL|XDMAC_GID_ID4_Pos|macro|XDMAC_GID_ID4_Pos
DECL|XDMAC_GID_ID4|macro|XDMAC_GID_ID4
DECL|XDMAC_GID_ID5_Msk|macro|XDMAC_GID_ID5_Msk
DECL|XDMAC_GID_ID5_Pos|macro|XDMAC_GID_ID5_Pos
DECL|XDMAC_GID_ID5|macro|XDMAC_GID_ID5
DECL|XDMAC_GID_ID6_Msk|macro|XDMAC_GID_ID6_Msk
DECL|XDMAC_GID_ID6_Pos|macro|XDMAC_GID_ID6_Pos
DECL|XDMAC_GID_ID6|macro|XDMAC_GID_ID6
DECL|XDMAC_GID_ID7_Msk|macro|XDMAC_GID_ID7_Msk
DECL|XDMAC_GID_ID7_Pos|macro|XDMAC_GID_ID7_Pos
DECL|XDMAC_GID_ID7|macro|XDMAC_GID_ID7
DECL|XDMAC_GID_ID8_Msk|macro|XDMAC_GID_ID8_Msk
DECL|XDMAC_GID_ID8_Pos|macro|XDMAC_GID_ID8_Pos
DECL|XDMAC_GID_ID8|macro|XDMAC_GID_ID8
DECL|XDMAC_GID_ID9_Msk|macro|XDMAC_GID_ID9_Msk
DECL|XDMAC_GID_ID9_Pos|macro|XDMAC_GID_ID9_Pos
DECL|XDMAC_GID_ID9|macro|XDMAC_GID_ID9
DECL|XDMAC_GID_ID_Msk|macro|XDMAC_GID_ID_Msk
DECL|XDMAC_GID_ID_Pos|macro|XDMAC_GID_ID_Pos
DECL|XDMAC_GID_ID|macro|XDMAC_GID_ID
DECL|XDMAC_GID_MASK|macro|XDMAC_GID_MASK
DECL|XDMAC_GID_Msk|macro|XDMAC_GID_Msk
DECL|XDMAC_GID_OFFSET|macro|XDMAC_GID_OFFSET
DECL|XDMAC_GID_Type|typedef|} XDMAC_GID_Type;
DECL|XDMAC_GID|member|__O XDMAC_GID_Type XDMAC_GID; /**< Offset: 0x10 ( /W 32) Global Interrupt Disable Register */
DECL|XDMAC_GID|member|__O uint32_t XDMAC_GID; /**< (XDMAC Offset: 0x10) Global Interrupt Disable Register */
DECL|XDMAC_GIE_IE0_Msk|macro|XDMAC_GIE_IE0_Msk
DECL|XDMAC_GIE_IE0_Pos|macro|XDMAC_GIE_IE0_Pos
DECL|XDMAC_GIE_IE0|macro|XDMAC_GIE_IE0
DECL|XDMAC_GIE_IE10_Msk|macro|XDMAC_GIE_IE10_Msk
DECL|XDMAC_GIE_IE10_Pos|macro|XDMAC_GIE_IE10_Pos
DECL|XDMAC_GIE_IE10|macro|XDMAC_GIE_IE10
DECL|XDMAC_GIE_IE11_Msk|macro|XDMAC_GIE_IE11_Msk
DECL|XDMAC_GIE_IE11_Pos|macro|XDMAC_GIE_IE11_Pos
DECL|XDMAC_GIE_IE11|macro|XDMAC_GIE_IE11
DECL|XDMAC_GIE_IE12_Msk|macro|XDMAC_GIE_IE12_Msk
DECL|XDMAC_GIE_IE12_Pos|macro|XDMAC_GIE_IE12_Pos
DECL|XDMAC_GIE_IE12|macro|XDMAC_GIE_IE12
DECL|XDMAC_GIE_IE13_Msk|macro|XDMAC_GIE_IE13_Msk
DECL|XDMAC_GIE_IE13_Pos|macro|XDMAC_GIE_IE13_Pos
DECL|XDMAC_GIE_IE13|macro|XDMAC_GIE_IE13
DECL|XDMAC_GIE_IE14_Msk|macro|XDMAC_GIE_IE14_Msk
DECL|XDMAC_GIE_IE14_Pos|macro|XDMAC_GIE_IE14_Pos
DECL|XDMAC_GIE_IE14|macro|XDMAC_GIE_IE14
DECL|XDMAC_GIE_IE15_Msk|macro|XDMAC_GIE_IE15_Msk
DECL|XDMAC_GIE_IE15_Pos|macro|XDMAC_GIE_IE15_Pos
DECL|XDMAC_GIE_IE15|macro|XDMAC_GIE_IE15
DECL|XDMAC_GIE_IE16_Msk|macro|XDMAC_GIE_IE16_Msk
DECL|XDMAC_GIE_IE16_Pos|macro|XDMAC_GIE_IE16_Pos
DECL|XDMAC_GIE_IE16|macro|XDMAC_GIE_IE16
DECL|XDMAC_GIE_IE17_Msk|macro|XDMAC_GIE_IE17_Msk
DECL|XDMAC_GIE_IE17_Pos|macro|XDMAC_GIE_IE17_Pos
DECL|XDMAC_GIE_IE17|macro|XDMAC_GIE_IE17
DECL|XDMAC_GIE_IE18_Msk|macro|XDMAC_GIE_IE18_Msk
DECL|XDMAC_GIE_IE18_Pos|macro|XDMAC_GIE_IE18_Pos
DECL|XDMAC_GIE_IE18|macro|XDMAC_GIE_IE18
DECL|XDMAC_GIE_IE19_Msk|macro|XDMAC_GIE_IE19_Msk
DECL|XDMAC_GIE_IE19_Pos|macro|XDMAC_GIE_IE19_Pos
DECL|XDMAC_GIE_IE19|macro|XDMAC_GIE_IE19
DECL|XDMAC_GIE_IE1_Msk|macro|XDMAC_GIE_IE1_Msk
DECL|XDMAC_GIE_IE1_Pos|macro|XDMAC_GIE_IE1_Pos
DECL|XDMAC_GIE_IE1|macro|XDMAC_GIE_IE1
DECL|XDMAC_GIE_IE20_Msk|macro|XDMAC_GIE_IE20_Msk
DECL|XDMAC_GIE_IE20_Pos|macro|XDMAC_GIE_IE20_Pos
DECL|XDMAC_GIE_IE20|macro|XDMAC_GIE_IE20
DECL|XDMAC_GIE_IE21_Msk|macro|XDMAC_GIE_IE21_Msk
DECL|XDMAC_GIE_IE21_Pos|macro|XDMAC_GIE_IE21_Pos
DECL|XDMAC_GIE_IE21|macro|XDMAC_GIE_IE21
DECL|XDMAC_GIE_IE22_Msk|macro|XDMAC_GIE_IE22_Msk
DECL|XDMAC_GIE_IE22_Pos|macro|XDMAC_GIE_IE22_Pos
DECL|XDMAC_GIE_IE22|macro|XDMAC_GIE_IE22
DECL|XDMAC_GIE_IE23_Msk|macro|XDMAC_GIE_IE23_Msk
DECL|XDMAC_GIE_IE23_Pos|macro|XDMAC_GIE_IE23_Pos
DECL|XDMAC_GIE_IE23|macro|XDMAC_GIE_IE23
DECL|XDMAC_GIE_IE2_Msk|macro|XDMAC_GIE_IE2_Msk
DECL|XDMAC_GIE_IE2_Pos|macro|XDMAC_GIE_IE2_Pos
DECL|XDMAC_GIE_IE2|macro|XDMAC_GIE_IE2
DECL|XDMAC_GIE_IE3_Msk|macro|XDMAC_GIE_IE3_Msk
DECL|XDMAC_GIE_IE3_Pos|macro|XDMAC_GIE_IE3_Pos
DECL|XDMAC_GIE_IE3|macro|XDMAC_GIE_IE3
DECL|XDMAC_GIE_IE4_Msk|macro|XDMAC_GIE_IE4_Msk
DECL|XDMAC_GIE_IE4_Pos|macro|XDMAC_GIE_IE4_Pos
DECL|XDMAC_GIE_IE4|macro|XDMAC_GIE_IE4
DECL|XDMAC_GIE_IE5_Msk|macro|XDMAC_GIE_IE5_Msk
DECL|XDMAC_GIE_IE5_Pos|macro|XDMAC_GIE_IE5_Pos
DECL|XDMAC_GIE_IE5|macro|XDMAC_GIE_IE5
DECL|XDMAC_GIE_IE6_Msk|macro|XDMAC_GIE_IE6_Msk
DECL|XDMAC_GIE_IE6_Pos|macro|XDMAC_GIE_IE6_Pos
DECL|XDMAC_GIE_IE6|macro|XDMAC_GIE_IE6
DECL|XDMAC_GIE_IE7_Msk|macro|XDMAC_GIE_IE7_Msk
DECL|XDMAC_GIE_IE7_Pos|macro|XDMAC_GIE_IE7_Pos
DECL|XDMAC_GIE_IE7|macro|XDMAC_GIE_IE7
DECL|XDMAC_GIE_IE8_Msk|macro|XDMAC_GIE_IE8_Msk
DECL|XDMAC_GIE_IE8_Pos|macro|XDMAC_GIE_IE8_Pos
DECL|XDMAC_GIE_IE8|macro|XDMAC_GIE_IE8
DECL|XDMAC_GIE_IE9_Msk|macro|XDMAC_GIE_IE9_Msk
DECL|XDMAC_GIE_IE9_Pos|macro|XDMAC_GIE_IE9_Pos
DECL|XDMAC_GIE_IE9|macro|XDMAC_GIE_IE9
DECL|XDMAC_GIE_IE_Msk|macro|XDMAC_GIE_IE_Msk
DECL|XDMAC_GIE_IE_Pos|macro|XDMAC_GIE_IE_Pos
DECL|XDMAC_GIE_IE|macro|XDMAC_GIE_IE
DECL|XDMAC_GIE_MASK|macro|XDMAC_GIE_MASK
DECL|XDMAC_GIE_Msk|macro|XDMAC_GIE_Msk
DECL|XDMAC_GIE_OFFSET|macro|XDMAC_GIE_OFFSET
DECL|XDMAC_GIE_Type|typedef|} XDMAC_GIE_Type;
DECL|XDMAC_GIE|member|__O XDMAC_GIE_Type XDMAC_GIE; /**< Offset: 0x0C ( /W 32) Global Interrupt Enable Register */
DECL|XDMAC_GIE|member|__O uint32_t XDMAC_GIE; /**< (XDMAC Offset: 0x0C) Global Interrupt Enable Register */
DECL|XDMAC_GIM_IM0_Msk|macro|XDMAC_GIM_IM0_Msk
DECL|XDMAC_GIM_IM0_Pos|macro|XDMAC_GIM_IM0_Pos
DECL|XDMAC_GIM_IM0|macro|XDMAC_GIM_IM0
DECL|XDMAC_GIM_IM10_Msk|macro|XDMAC_GIM_IM10_Msk
DECL|XDMAC_GIM_IM10_Pos|macro|XDMAC_GIM_IM10_Pos
DECL|XDMAC_GIM_IM10|macro|XDMAC_GIM_IM10
DECL|XDMAC_GIM_IM11_Msk|macro|XDMAC_GIM_IM11_Msk
DECL|XDMAC_GIM_IM11_Pos|macro|XDMAC_GIM_IM11_Pos
DECL|XDMAC_GIM_IM11|macro|XDMAC_GIM_IM11
DECL|XDMAC_GIM_IM12_Msk|macro|XDMAC_GIM_IM12_Msk
DECL|XDMAC_GIM_IM12_Pos|macro|XDMAC_GIM_IM12_Pos
DECL|XDMAC_GIM_IM12|macro|XDMAC_GIM_IM12
DECL|XDMAC_GIM_IM13_Msk|macro|XDMAC_GIM_IM13_Msk
DECL|XDMAC_GIM_IM13_Pos|macro|XDMAC_GIM_IM13_Pos
DECL|XDMAC_GIM_IM13|macro|XDMAC_GIM_IM13
DECL|XDMAC_GIM_IM14_Msk|macro|XDMAC_GIM_IM14_Msk
DECL|XDMAC_GIM_IM14_Pos|macro|XDMAC_GIM_IM14_Pos
DECL|XDMAC_GIM_IM14|macro|XDMAC_GIM_IM14
DECL|XDMAC_GIM_IM15_Msk|macro|XDMAC_GIM_IM15_Msk
DECL|XDMAC_GIM_IM15_Pos|macro|XDMAC_GIM_IM15_Pos
DECL|XDMAC_GIM_IM15|macro|XDMAC_GIM_IM15
DECL|XDMAC_GIM_IM16_Msk|macro|XDMAC_GIM_IM16_Msk
DECL|XDMAC_GIM_IM16_Pos|macro|XDMAC_GIM_IM16_Pos
DECL|XDMAC_GIM_IM16|macro|XDMAC_GIM_IM16
DECL|XDMAC_GIM_IM17_Msk|macro|XDMAC_GIM_IM17_Msk
DECL|XDMAC_GIM_IM17_Pos|macro|XDMAC_GIM_IM17_Pos
DECL|XDMAC_GIM_IM17|macro|XDMAC_GIM_IM17
DECL|XDMAC_GIM_IM18_Msk|macro|XDMAC_GIM_IM18_Msk
DECL|XDMAC_GIM_IM18_Pos|macro|XDMAC_GIM_IM18_Pos
DECL|XDMAC_GIM_IM18|macro|XDMAC_GIM_IM18
DECL|XDMAC_GIM_IM19_Msk|macro|XDMAC_GIM_IM19_Msk
DECL|XDMAC_GIM_IM19_Pos|macro|XDMAC_GIM_IM19_Pos
DECL|XDMAC_GIM_IM19|macro|XDMAC_GIM_IM19
DECL|XDMAC_GIM_IM1_Msk|macro|XDMAC_GIM_IM1_Msk
DECL|XDMAC_GIM_IM1_Pos|macro|XDMAC_GIM_IM1_Pos
DECL|XDMAC_GIM_IM1|macro|XDMAC_GIM_IM1
DECL|XDMAC_GIM_IM20_Msk|macro|XDMAC_GIM_IM20_Msk
DECL|XDMAC_GIM_IM20_Pos|macro|XDMAC_GIM_IM20_Pos
DECL|XDMAC_GIM_IM20|macro|XDMAC_GIM_IM20
DECL|XDMAC_GIM_IM21_Msk|macro|XDMAC_GIM_IM21_Msk
DECL|XDMAC_GIM_IM21_Pos|macro|XDMAC_GIM_IM21_Pos
DECL|XDMAC_GIM_IM21|macro|XDMAC_GIM_IM21
DECL|XDMAC_GIM_IM22_Msk|macro|XDMAC_GIM_IM22_Msk
DECL|XDMAC_GIM_IM22_Pos|macro|XDMAC_GIM_IM22_Pos
DECL|XDMAC_GIM_IM22|macro|XDMAC_GIM_IM22
DECL|XDMAC_GIM_IM23_Msk|macro|XDMAC_GIM_IM23_Msk
DECL|XDMAC_GIM_IM23_Pos|macro|XDMAC_GIM_IM23_Pos
DECL|XDMAC_GIM_IM23|macro|XDMAC_GIM_IM23
DECL|XDMAC_GIM_IM2_Msk|macro|XDMAC_GIM_IM2_Msk
DECL|XDMAC_GIM_IM2_Pos|macro|XDMAC_GIM_IM2_Pos
DECL|XDMAC_GIM_IM2|macro|XDMAC_GIM_IM2
DECL|XDMAC_GIM_IM3_Msk|macro|XDMAC_GIM_IM3_Msk
DECL|XDMAC_GIM_IM3_Pos|macro|XDMAC_GIM_IM3_Pos
DECL|XDMAC_GIM_IM3|macro|XDMAC_GIM_IM3
DECL|XDMAC_GIM_IM4_Msk|macro|XDMAC_GIM_IM4_Msk
DECL|XDMAC_GIM_IM4_Pos|macro|XDMAC_GIM_IM4_Pos
DECL|XDMAC_GIM_IM4|macro|XDMAC_GIM_IM4
DECL|XDMAC_GIM_IM5_Msk|macro|XDMAC_GIM_IM5_Msk
DECL|XDMAC_GIM_IM5_Pos|macro|XDMAC_GIM_IM5_Pos
DECL|XDMAC_GIM_IM5|macro|XDMAC_GIM_IM5
DECL|XDMAC_GIM_IM6_Msk|macro|XDMAC_GIM_IM6_Msk
DECL|XDMAC_GIM_IM6_Pos|macro|XDMAC_GIM_IM6_Pos
DECL|XDMAC_GIM_IM6|macro|XDMAC_GIM_IM6
DECL|XDMAC_GIM_IM7_Msk|macro|XDMAC_GIM_IM7_Msk
DECL|XDMAC_GIM_IM7_Pos|macro|XDMAC_GIM_IM7_Pos
DECL|XDMAC_GIM_IM7|macro|XDMAC_GIM_IM7
DECL|XDMAC_GIM_IM8_Msk|macro|XDMAC_GIM_IM8_Msk
DECL|XDMAC_GIM_IM8_Pos|macro|XDMAC_GIM_IM8_Pos
DECL|XDMAC_GIM_IM8|macro|XDMAC_GIM_IM8
DECL|XDMAC_GIM_IM9_Msk|macro|XDMAC_GIM_IM9_Msk
DECL|XDMAC_GIM_IM9_Pos|macro|XDMAC_GIM_IM9_Pos
DECL|XDMAC_GIM_IM9|macro|XDMAC_GIM_IM9
DECL|XDMAC_GIM_IM_Msk|macro|XDMAC_GIM_IM_Msk
DECL|XDMAC_GIM_IM_Pos|macro|XDMAC_GIM_IM_Pos
DECL|XDMAC_GIM_IM|macro|XDMAC_GIM_IM
DECL|XDMAC_GIM_MASK|macro|XDMAC_GIM_MASK
DECL|XDMAC_GIM_Msk|macro|XDMAC_GIM_Msk
DECL|XDMAC_GIM_OFFSET|macro|XDMAC_GIM_OFFSET
DECL|XDMAC_GIM_Type|typedef|} XDMAC_GIM_Type;
DECL|XDMAC_GIM|member|__I XDMAC_GIM_Type XDMAC_GIM; /**< Offset: 0x14 (R/ 32) Global Interrupt Mask Register */
DECL|XDMAC_GIM|member|__I uint32_t XDMAC_GIM; /**< (XDMAC Offset: 0x14) Global Interrupt Mask Register */
DECL|XDMAC_GIS_IS0_Msk|macro|XDMAC_GIS_IS0_Msk
DECL|XDMAC_GIS_IS0_Pos|macro|XDMAC_GIS_IS0_Pos
DECL|XDMAC_GIS_IS0|macro|XDMAC_GIS_IS0
DECL|XDMAC_GIS_IS10_Msk|macro|XDMAC_GIS_IS10_Msk
DECL|XDMAC_GIS_IS10_Pos|macro|XDMAC_GIS_IS10_Pos
DECL|XDMAC_GIS_IS10|macro|XDMAC_GIS_IS10
DECL|XDMAC_GIS_IS11_Msk|macro|XDMAC_GIS_IS11_Msk
DECL|XDMAC_GIS_IS11_Pos|macro|XDMAC_GIS_IS11_Pos
DECL|XDMAC_GIS_IS11|macro|XDMAC_GIS_IS11
DECL|XDMAC_GIS_IS12_Msk|macro|XDMAC_GIS_IS12_Msk
DECL|XDMAC_GIS_IS12_Pos|macro|XDMAC_GIS_IS12_Pos
DECL|XDMAC_GIS_IS12|macro|XDMAC_GIS_IS12
DECL|XDMAC_GIS_IS13_Msk|macro|XDMAC_GIS_IS13_Msk
DECL|XDMAC_GIS_IS13_Pos|macro|XDMAC_GIS_IS13_Pos
DECL|XDMAC_GIS_IS13|macro|XDMAC_GIS_IS13
DECL|XDMAC_GIS_IS14_Msk|macro|XDMAC_GIS_IS14_Msk
DECL|XDMAC_GIS_IS14_Pos|macro|XDMAC_GIS_IS14_Pos
DECL|XDMAC_GIS_IS14|macro|XDMAC_GIS_IS14
DECL|XDMAC_GIS_IS15_Msk|macro|XDMAC_GIS_IS15_Msk
DECL|XDMAC_GIS_IS15_Pos|macro|XDMAC_GIS_IS15_Pos
DECL|XDMAC_GIS_IS15|macro|XDMAC_GIS_IS15
DECL|XDMAC_GIS_IS16_Msk|macro|XDMAC_GIS_IS16_Msk
DECL|XDMAC_GIS_IS16_Pos|macro|XDMAC_GIS_IS16_Pos
DECL|XDMAC_GIS_IS16|macro|XDMAC_GIS_IS16
DECL|XDMAC_GIS_IS17_Msk|macro|XDMAC_GIS_IS17_Msk
DECL|XDMAC_GIS_IS17_Pos|macro|XDMAC_GIS_IS17_Pos
DECL|XDMAC_GIS_IS17|macro|XDMAC_GIS_IS17
DECL|XDMAC_GIS_IS18_Msk|macro|XDMAC_GIS_IS18_Msk
DECL|XDMAC_GIS_IS18_Pos|macro|XDMAC_GIS_IS18_Pos
DECL|XDMAC_GIS_IS18|macro|XDMAC_GIS_IS18
DECL|XDMAC_GIS_IS19_Msk|macro|XDMAC_GIS_IS19_Msk
DECL|XDMAC_GIS_IS19_Pos|macro|XDMAC_GIS_IS19_Pos
DECL|XDMAC_GIS_IS19|macro|XDMAC_GIS_IS19
DECL|XDMAC_GIS_IS1_Msk|macro|XDMAC_GIS_IS1_Msk
DECL|XDMAC_GIS_IS1_Pos|macro|XDMAC_GIS_IS1_Pos
DECL|XDMAC_GIS_IS1|macro|XDMAC_GIS_IS1
DECL|XDMAC_GIS_IS20_Msk|macro|XDMAC_GIS_IS20_Msk
DECL|XDMAC_GIS_IS20_Pos|macro|XDMAC_GIS_IS20_Pos
DECL|XDMAC_GIS_IS20|macro|XDMAC_GIS_IS20
DECL|XDMAC_GIS_IS21_Msk|macro|XDMAC_GIS_IS21_Msk
DECL|XDMAC_GIS_IS21_Pos|macro|XDMAC_GIS_IS21_Pos
DECL|XDMAC_GIS_IS21|macro|XDMAC_GIS_IS21
DECL|XDMAC_GIS_IS22_Msk|macro|XDMAC_GIS_IS22_Msk
DECL|XDMAC_GIS_IS22_Pos|macro|XDMAC_GIS_IS22_Pos
DECL|XDMAC_GIS_IS22|macro|XDMAC_GIS_IS22
DECL|XDMAC_GIS_IS23_Msk|macro|XDMAC_GIS_IS23_Msk
DECL|XDMAC_GIS_IS23_Pos|macro|XDMAC_GIS_IS23_Pos
DECL|XDMAC_GIS_IS23|macro|XDMAC_GIS_IS23
DECL|XDMAC_GIS_IS2_Msk|macro|XDMAC_GIS_IS2_Msk
DECL|XDMAC_GIS_IS2_Pos|macro|XDMAC_GIS_IS2_Pos
DECL|XDMAC_GIS_IS2|macro|XDMAC_GIS_IS2
DECL|XDMAC_GIS_IS3_Msk|macro|XDMAC_GIS_IS3_Msk
DECL|XDMAC_GIS_IS3_Pos|macro|XDMAC_GIS_IS3_Pos
DECL|XDMAC_GIS_IS3|macro|XDMAC_GIS_IS3
DECL|XDMAC_GIS_IS4_Msk|macro|XDMAC_GIS_IS4_Msk
DECL|XDMAC_GIS_IS4_Pos|macro|XDMAC_GIS_IS4_Pos
DECL|XDMAC_GIS_IS4|macro|XDMAC_GIS_IS4
DECL|XDMAC_GIS_IS5_Msk|macro|XDMAC_GIS_IS5_Msk
DECL|XDMAC_GIS_IS5_Pos|macro|XDMAC_GIS_IS5_Pos
DECL|XDMAC_GIS_IS5|macro|XDMAC_GIS_IS5
DECL|XDMAC_GIS_IS6_Msk|macro|XDMAC_GIS_IS6_Msk
DECL|XDMAC_GIS_IS6_Pos|macro|XDMAC_GIS_IS6_Pos
DECL|XDMAC_GIS_IS6|macro|XDMAC_GIS_IS6
DECL|XDMAC_GIS_IS7_Msk|macro|XDMAC_GIS_IS7_Msk
DECL|XDMAC_GIS_IS7_Pos|macro|XDMAC_GIS_IS7_Pos
DECL|XDMAC_GIS_IS7|macro|XDMAC_GIS_IS7
DECL|XDMAC_GIS_IS8_Msk|macro|XDMAC_GIS_IS8_Msk
DECL|XDMAC_GIS_IS8_Pos|macro|XDMAC_GIS_IS8_Pos
DECL|XDMAC_GIS_IS8|macro|XDMAC_GIS_IS8
DECL|XDMAC_GIS_IS9_Msk|macro|XDMAC_GIS_IS9_Msk
DECL|XDMAC_GIS_IS9_Pos|macro|XDMAC_GIS_IS9_Pos
DECL|XDMAC_GIS_IS9|macro|XDMAC_GIS_IS9
DECL|XDMAC_GIS_IS_Msk|macro|XDMAC_GIS_IS_Msk
DECL|XDMAC_GIS_IS_Pos|macro|XDMAC_GIS_IS_Pos
DECL|XDMAC_GIS_IS|macro|XDMAC_GIS_IS
DECL|XDMAC_GIS_MASK|macro|XDMAC_GIS_MASK
DECL|XDMAC_GIS_Msk|macro|XDMAC_GIS_Msk
DECL|XDMAC_GIS_OFFSET|macro|XDMAC_GIS_OFFSET
DECL|XDMAC_GIS_Type|typedef|} XDMAC_GIS_Type;
DECL|XDMAC_GIS|member|__I XDMAC_GIS_Type XDMAC_GIS; /**< Offset: 0x18 (R/ 32) Global Interrupt Status Register */
DECL|XDMAC_GIS|member|__I uint32_t XDMAC_GIS; /**< (XDMAC Offset: 0x18) Global Interrupt Status Register */
DECL|XDMAC_GRS_MASK|macro|XDMAC_GRS_MASK
DECL|XDMAC_GRS_Msk|macro|XDMAC_GRS_Msk
DECL|XDMAC_GRS_OFFSET|macro|XDMAC_GRS_OFFSET
DECL|XDMAC_GRS_RS0_Msk|macro|XDMAC_GRS_RS0_Msk
DECL|XDMAC_GRS_RS0_Pos|macro|XDMAC_GRS_RS0_Pos
DECL|XDMAC_GRS_RS0|macro|XDMAC_GRS_RS0
DECL|XDMAC_GRS_RS10_Msk|macro|XDMAC_GRS_RS10_Msk
DECL|XDMAC_GRS_RS10_Pos|macro|XDMAC_GRS_RS10_Pos
DECL|XDMAC_GRS_RS10|macro|XDMAC_GRS_RS10
DECL|XDMAC_GRS_RS11_Msk|macro|XDMAC_GRS_RS11_Msk
DECL|XDMAC_GRS_RS11_Pos|macro|XDMAC_GRS_RS11_Pos
DECL|XDMAC_GRS_RS11|macro|XDMAC_GRS_RS11
DECL|XDMAC_GRS_RS12_Msk|macro|XDMAC_GRS_RS12_Msk
DECL|XDMAC_GRS_RS12_Pos|macro|XDMAC_GRS_RS12_Pos
DECL|XDMAC_GRS_RS12|macro|XDMAC_GRS_RS12
DECL|XDMAC_GRS_RS13_Msk|macro|XDMAC_GRS_RS13_Msk
DECL|XDMAC_GRS_RS13_Pos|macro|XDMAC_GRS_RS13_Pos
DECL|XDMAC_GRS_RS13|macro|XDMAC_GRS_RS13
DECL|XDMAC_GRS_RS14_Msk|macro|XDMAC_GRS_RS14_Msk
DECL|XDMAC_GRS_RS14_Pos|macro|XDMAC_GRS_RS14_Pos
DECL|XDMAC_GRS_RS14|macro|XDMAC_GRS_RS14
DECL|XDMAC_GRS_RS15_Msk|macro|XDMAC_GRS_RS15_Msk
DECL|XDMAC_GRS_RS15_Pos|macro|XDMAC_GRS_RS15_Pos
DECL|XDMAC_GRS_RS15|macro|XDMAC_GRS_RS15
DECL|XDMAC_GRS_RS16_Msk|macro|XDMAC_GRS_RS16_Msk
DECL|XDMAC_GRS_RS16_Pos|macro|XDMAC_GRS_RS16_Pos
DECL|XDMAC_GRS_RS16|macro|XDMAC_GRS_RS16
DECL|XDMAC_GRS_RS17_Msk|macro|XDMAC_GRS_RS17_Msk
DECL|XDMAC_GRS_RS17_Pos|macro|XDMAC_GRS_RS17_Pos
DECL|XDMAC_GRS_RS17|macro|XDMAC_GRS_RS17
DECL|XDMAC_GRS_RS18_Msk|macro|XDMAC_GRS_RS18_Msk
DECL|XDMAC_GRS_RS18_Pos|macro|XDMAC_GRS_RS18_Pos
DECL|XDMAC_GRS_RS18|macro|XDMAC_GRS_RS18
DECL|XDMAC_GRS_RS19_Msk|macro|XDMAC_GRS_RS19_Msk
DECL|XDMAC_GRS_RS19_Pos|macro|XDMAC_GRS_RS19_Pos
DECL|XDMAC_GRS_RS19|macro|XDMAC_GRS_RS19
DECL|XDMAC_GRS_RS1_Msk|macro|XDMAC_GRS_RS1_Msk
DECL|XDMAC_GRS_RS1_Pos|macro|XDMAC_GRS_RS1_Pos
DECL|XDMAC_GRS_RS1|macro|XDMAC_GRS_RS1
DECL|XDMAC_GRS_RS20_Msk|macro|XDMAC_GRS_RS20_Msk
DECL|XDMAC_GRS_RS20_Pos|macro|XDMAC_GRS_RS20_Pos
DECL|XDMAC_GRS_RS20|macro|XDMAC_GRS_RS20
DECL|XDMAC_GRS_RS21_Msk|macro|XDMAC_GRS_RS21_Msk
DECL|XDMAC_GRS_RS21_Pos|macro|XDMAC_GRS_RS21_Pos
DECL|XDMAC_GRS_RS21|macro|XDMAC_GRS_RS21
DECL|XDMAC_GRS_RS22_Msk|macro|XDMAC_GRS_RS22_Msk
DECL|XDMAC_GRS_RS22_Pos|macro|XDMAC_GRS_RS22_Pos
DECL|XDMAC_GRS_RS22|macro|XDMAC_GRS_RS22
DECL|XDMAC_GRS_RS23_Msk|macro|XDMAC_GRS_RS23_Msk
DECL|XDMAC_GRS_RS23_Pos|macro|XDMAC_GRS_RS23_Pos
DECL|XDMAC_GRS_RS23|macro|XDMAC_GRS_RS23
DECL|XDMAC_GRS_RS2_Msk|macro|XDMAC_GRS_RS2_Msk
DECL|XDMAC_GRS_RS2_Pos|macro|XDMAC_GRS_RS2_Pos
DECL|XDMAC_GRS_RS2|macro|XDMAC_GRS_RS2
DECL|XDMAC_GRS_RS3_Msk|macro|XDMAC_GRS_RS3_Msk
DECL|XDMAC_GRS_RS3_Pos|macro|XDMAC_GRS_RS3_Pos
DECL|XDMAC_GRS_RS3|macro|XDMAC_GRS_RS3
DECL|XDMAC_GRS_RS4_Msk|macro|XDMAC_GRS_RS4_Msk
DECL|XDMAC_GRS_RS4_Pos|macro|XDMAC_GRS_RS4_Pos
DECL|XDMAC_GRS_RS4|macro|XDMAC_GRS_RS4
DECL|XDMAC_GRS_RS5_Msk|macro|XDMAC_GRS_RS5_Msk
DECL|XDMAC_GRS_RS5_Pos|macro|XDMAC_GRS_RS5_Pos
DECL|XDMAC_GRS_RS5|macro|XDMAC_GRS_RS5
DECL|XDMAC_GRS_RS6_Msk|macro|XDMAC_GRS_RS6_Msk
DECL|XDMAC_GRS_RS6_Pos|macro|XDMAC_GRS_RS6_Pos
DECL|XDMAC_GRS_RS6|macro|XDMAC_GRS_RS6
DECL|XDMAC_GRS_RS7_Msk|macro|XDMAC_GRS_RS7_Msk
DECL|XDMAC_GRS_RS7_Pos|macro|XDMAC_GRS_RS7_Pos
DECL|XDMAC_GRS_RS7|macro|XDMAC_GRS_RS7
DECL|XDMAC_GRS_RS8_Msk|macro|XDMAC_GRS_RS8_Msk
DECL|XDMAC_GRS_RS8_Pos|macro|XDMAC_GRS_RS8_Pos
DECL|XDMAC_GRS_RS8|macro|XDMAC_GRS_RS8
DECL|XDMAC_GRS_RS9_Msk|macro|XDMAC_GRS_RS9_Msk
DECL|XDMAC_GRS_RS9_Pos|macro|XDMAC_GRS_RS9_Pos
DECL|XDMAC_GRS_RS9|macro|XDMAC_GRS_RS9
DECL|XDMAC_GRS_RS_Msk|macro|XDMAC_GRS_RS_Msk
DECL|XDMAC_GRS_RS_Pos|macro|XDMAC_GRS_RS_Pos
DECL|XDMAC_GRS_RS|macro|XDMAC_GRS_RS
DECL|XDMAC_GRS_Type|typedef|} XDMAC_GRS_Type;
DECL|XDMAC_GRS|member|__IO XDMAC_GRS_Type XDMAC_GRS; /**< Offset: 0x28 (R/W 32) Global Channel Read Suspend Register */
DECL|XDMAC_GRS|member|__IO uint32_t XDMAC_GRS; /**< (XDMAC Offset: 0x28) Global Channel Read Suspend Register */
DECL|XDMAC_GRWR_MASK|macro|XDMAC_GRWR_MASK
DECL|XDMAC_GRWR_Msk|macro|XDMAC_GRWR_Msk
DECL|XDMAC_GRWR_OFFSET|macro|XDMAC_GRWR_OFFSET
DECL|XDMAC_GRWR_RWR0_Msk|macro|XDMAC_GRWR_RWR0_Msk
DECL|XDMAC_GRWR_RWR0_Pos|macro|XDMAC_GRWR_RWR0_Pos
DECL|XDMAC_GRWR_RWR0|macro|XDMAC_GRWR_RWR0
DECL|XDMAC_GRWR_RWR10_Msk|macro|XDMAC_GRWR_RWR10_Msk
DECL|XDMAC_GRWR_RWR10_Pos|macro|XDMAC_GRWR_RWR10_Pos
DECL|XDMAC_GRWR_RWR10|macro|XDMAC_GRWR_RWR10
DECL|XDMAC_GRWR_RWR11_Msk|macro|XDMAC_GRWR_RWR11_Msk
DECL|XDMAC_GRWR_RWR11_Pos|macro|XDMAC_GRWR_RWR11_Pos
DECL|XDMAC_GRWR_RWR11|macro|XDMAC_GRWR_RWR11
DECL|XDMAC_GRWR_RWR12_Msk|macro|XDMAC_GRWR_RWR12_Msk
DECL|XDMAC_GRWR_RWR12_Pos|macro|XDMAC_GRWR_RWR12_Pos
DECL|XDMAC_GRWR_RWR12|macro|XDMAC_GRWR_RWR12
DECL|XDMAC_GRWR_RWR13_Msk|macro|XDMAC_GRWR_RWR13_Msk
DECL|XDMAC_GRWR_RWR13_Pos|macro|XDMAC_GRWR_RWR13_Pos
DECL|XDMAC_GRWR_RWR13|macro|XDMAC_GRWR_RWR13
DECL|XDMAC_GRWR_RWR14_Msk|macro|XDMAC_GRWR_RWR14_Msk
DECL|XDMAC_GRWR_RWR14_Pos|macro|XDMAC_GRWR_RWR14_Pos
DECL|XDMAC_GRWR_RWR14|macro|XDMAC_GRWR_RWR14
DECL|XDMAC_GRWR_RWR15_Msk|macro|XDMAC_GRWR_RWR15_Msk
DECL|XDMAC_GRWR_RWR15_Pos|macro|XDMAC_GRWR_RWR15_Pos
DECL|XDMAC_GRWR_RWR15|macro|XDMAC_GRWR_RWR15
DECL|XDMAC_GRWR_RWR16_Msk|macro|XDMAC_GRWR_RWR16_Msk
DECL|XDMAC_GRWR_RWR16_Pos|macro|XDMAC_GRWR_RWR16_Pos
DECL|XDMAC_GRWR_RWR16|macro|XDMAC_GRWR_RWR16
DECL|XDMAC_GRWR_RWR17_Msk|macro|XDMAC_GRWR_RWR17_Msk
DECL|XDMAC_GRWR_RWR17_Pos|macro|XDMAC_GRWR_RWR17_Pos
DECL|XDMAC_GRWR_RWR17|macro|XDMAC_GRWR_RWR17
DECL|XDMAC_GRWR_RWR18_Msk|macro|XDMAC_GRWR_RWR18_Msk
DECL|XDMAC_GRWR_RWR18_Pos|macro|XDMAC_GRWR_RWR18_Pos
DECL|XDMAC_GRWR_RWR18|macro|XDMAC_GRWR_RWR18
DECL|XDMAC_GRWR_RWR19_Msk|macro|XDMAC_GRWR_RWR19_Msk
DECL|XDMAC_GRWR_RWR19_Pos|macro|XDMAC_GRWR_RWR19_Pos
DECL|XDMAC_GRWR_RWR19|macro|XDMAC_GRWR_RWR19
DECL|XDMAC_GRWR_RWR1_Msk|macro|XDMAC_GRWR_RWR1_Msk
DECL|XDMAC_GRWR_RWR1_Pos|macro|XDMAC_GRWR_RWR1_Pos
DECL|XDMAC_GRWR_RWR1|macro|XDMAC_GRWR_RWR1
DECL|XDMAC_GRWR_RWR20_Msk|macro|XDMAC_GRWR_RWR20_Msk
DECL|XDMAC_GRWR_RWR20_Pos|macro|XDMAC_GRWR_RWR20_Pos
DECL|XDMAC_GRWR_RWR20|macro|XDMAC_GRWR_RWR20
DECL|XDMAC_GRWR_RWR21_Msk|macro|XDMAC_GRWR_RWR21_Msk
DECL|XDMAC_GRWR_RWR21_Pos|macro|XDMAC_GRWR_RWR21_Pos
DECL|XDMAC_GRWR_RWR21|macro|XDMAC_GRWR_RWR21
DECL|XDMAC_GRWR_RWR22_Msk|macro|XDMAC_GRWR_RWR22_Msk
DECL|XDMAC_GRWR_RWR22_Pos|macro|XDMAC_GRWR_RWR22_Pos
DECL|XDMAC_GRWR_RWR22|macro|XDMAC_GRWR_RWR22
DECL|XDMAC_GRWR_RWR23_Msk|macro|XDMAC_GRWR_RWR23_Msk
DECL|XDMAC_GRWR_RWR23_Pos|macro|XDMAC_GRWR_RWR23_Pos
DECL|XDMAC_GRWR_RWR23|macro|XDMAC_GRWR_RWR23
DECL|XDMAC_GRWR_RWR2_Msk|macro|XDMAC_GRWR_RWR2_Msk
DECL|XDMAC_GRWR_RWR2_Pos|macro|XDMAC_GRWR_RWR2_Pos
DECL|XDMAC_GRWR_RWR2|macro|XDMAC_GRWR_RWR2
DECL|XDMAC_GRWR_RWR3_Msk|macro|XDMAC_GRWR_RWR3_Msk
DECL|XDMAC_GRWR_RWR3_Pos|macro|XDMAC_GRWR_RWR3_Pos
DECL|XDMAC_GRWR_RWR3|macro|XDMAC_GRWR_RWR3
DECL|XDMAC_GRWR_RWR4_Msk|macro|XDMAC_GRWR_RWR4_Msk
DECL|XDMAC_GRWR_RWR4_Pos|macro|XDMAC_GRWR_RWR4_Pos
DECL|XDMAC_GRWR_RWR4|macro|XDMAC_GRWR_RWR4
DECL|XDMAC_GRWR_RWR5_Msk|macro|XDMAC_GRWR_RWR5_Msk
DECL|XDMAC_GRWR_RWR5_Pos|macro|XDMAC_GRWR_RWR5_Pos
DECL|XDMAC_GRWR_RWR5|macro|XDMAC_GRWR_RWR5
DECL|XDMAC_GRWR_RWR6_Msk|macro|XDMAC_GRWR_RWR6_Msk
DECL|XDMAC_GRWR_RWR6_Pos|macro|XDMAC_GRWR_RWR6_Pos
DECL|XDMAC_GRWR_RWR6|macro|XDMAC_GRWR_RWR6
DECL|XDMAC_GRWR_RWR7_Msk|macro|XDMAC_GRWR_RWR7_Msk
DECL|XDMAC_GRWR_RWR7_Pos|macro|XDMAC_GRWR_RWR7_Pos
DECL|XDMAC_GRWR_RWR7|macro|XDMAC_GRWR_RWR7
DECL|XDMAC_GRWR_RWR8_Msk|macro|XDMAC_GRWR_RWR8_Msk
DECL|XDMAC_GRWR_RWR8_Pos|macro|XDMAC_GRWR_RWR8_Pos
DECL|XDMAC_GRWR_RWR8|macro|XDMAC_GRWR_RWR8
DECL|XDMAC_GRWR_RWR9_Msk|macro|XDMAC_GRWR_RWR9_Msk
DECL|XDMAC_GRWR_RWR9_Pos|macro|XDMAC_GRWR_RWR9_Pos
DECL|XDMAC_GRWR_RWR9|macro|XDMAC_GRWR_RWR9
DECL|XDMAC_GRWR_RWR_Msk|macro|XDMAC_GRWR_RWR_Msk
DECL|XDMAC_GRWR_RWR_Pos|macro|XDMAC_GRWR_RWR_Pos
DECL|XDMAC_GRWR_RWR|macro|XDMAC_GRWR_RWR
DECL|XDMAC_GRWR_Type|typedef|} XDMAC_GRWR_Type;
DECL|XDMAC_GRWR|member|__O XDMAC_GRWR_Type XDMAC_GRWR; /**< Offset: 0x34 ( /W 32) Global Channel Read Write Resume Register */
DECL|XDMAC_GRWR|member|__O uint32_t XDMAC_GRWR; /**< (XDMAC Offset: 0x34) Global Channel Read Write Resume Register */
DECL|XDMAC_GRWS_MASK|macro|XDMAC_GRWS_MASK
DECL|XDMAC_GRWS_Msk|macro|XDMAC_GRWS_Msk
DECL|XDMAC_GRWS_OFFSET|macro|XDMAC_GRWS_OFFSET
DECL|XDMAC_GRWS_RWS0_Msk|macro|XDMAC_GRWS_RWS0_Msk
DECL|XDMAC_GRWS_RWS0_Pos|macro|XDMAC_GRWS_RWS0_Pos
DECL|XDMAC_GRWS_RWS0|macro|XDMAC_GRWS_RWS0
DECL|XDMAC_GRWS_RWS10_Msk|macro|XDMAC_GRWS_RWS10_Msk
DECL|XDMAC_GRWS_RWS10_Pos|macro|XDMAC_GRWS_RWS10_Pos
DECL|XDMAC_GRWS_RWS10|macro|XDMAC_GRWS_RWS10
DECL|XDMAC_GRWS_RWS11_Msk|macro|XDMAC_GRWS_RWS11_Msk
DECL|XDMAC_GRWS_RWS11_Pos|macro|XDMAC_GRWS_RWS11_Pos
DECL|XDMAC_GRWS_RWS11|macro|XDMAC_GRWS_RWS11
DECL|XDMAC_GRWS_RWS12_Msk|macro|XDMAC_GRWS_RWS12_Msk
DECL|XDMAC_GRWS_RWS12_Pos|macro|XDMAC_GRWS_RWS12_Pos
DECL|XDMAC_GRWS_RWS12|macro|XDMAC_GRWS_RWS12
DECL|XDMAC_GRWS_RWS13_Msk|macro|XDMAC_GRWS_RWS13_Msk
DECL|XDMAC_GRWS_RWS13_Pos|macro|XDMAC_GRWS_RWS13_Pos
DECL|XDMAC_GRWS_RWS13|macro|XDMAC_GRWS_RWS13
DECL|XDMAC_GRWS_RWS14_Msk|macro|XDMAC_GRWS_RWS14_Msk
DECL|XDMAC_GRWS_RWS14_Pos|macro|XDMAC_GRWS_RWS14_Pos
DECL|XDMAC_GRWS_RWS14|macro|XDMAC_GRWS_RWS14
DECL|XDMAC_GRWS_RWS15_Msk|macro|XDMAC_GRWS_RWS15_Msk
DECL|XDMAC_GRWS_RWS15_Pos|macro|XDMAC_GRWS_RWS15_Pos
DECL|XDMAC_GRWS_RWS15|macro|XDMAC_GRWS_RWS15
DECL|XDMAC_GRWS_RWS16_Msk|macro|XDMAC_GRWS_RWS16_Msk
DECL|XDMAC_GRWS_RWS16_Pos|macro|XDMAC_GRWS_RWS16_Pos
DECL|XDMAC_GRWS_RWS16|macro|XDMAC_GRWS_RWS16
DECL|XDMAC_GRWS_RWS17_Msk|macro|XDMAC_GRWS_RWS17_Msk
DECL|XDMAC_GRWS_RWS17_Pos|macro|XDMAC_GRWS_RWS17_Pos
DECL|XDMAC_GRWS_RWS17|macro|XDMAC_GRWS_RWS17
DECL|XDMAC_GRWS_RWS18_Msk|macro|XDMAC_GRWS_RWS18_Msk
DECL|XDMAC_GRWS_RWS18_Pos|macro|XDMAC_GRWS_RWS18_Pos
DECL|XDMAC_GRWS_RWS18|macro|XDMAC_GRWS_RWS18
DECL|XDMAC_GRWS_RWS19_Msk|macro|XDMAC_GRWS_RWS19_Msk
DECL|XDMAC_GRWS_RWS19_Pos|macro|XDMAC_GRWS_RWS19_Pos
DECL|XDMAC_GRWS_RWS19|macro|XDMAC_GRWS_RWS19
DECL|XDMAC_GRWS_RWS1_Msk|macro|XDMAC_GRWS_RWS1_Msk
DECL|XDMAC_GRWS_RWS1_Pos|macro|XDMAC_GRWS_RWS1_Pos
DECL|XDMAC_GRWS_RWS1|macro|XDMAC_GRWS_RWS1
DECL|XDMAC_GRWS_RWS20_Msk|macro|XDMAC_GRWS_RWS20_Msk
DECL|XDMAC_GRWS_RWS20_Pos|macro|XDMAC_GRWS_RWS20_Pos
DECL|XDMAC_GRWS_RWS20|macro|XDMAC_GRWS_RWS20
DECL|XDMAC_GRWS_RWS21_Msk|macro|XDMAC_GRWS_RWS21_Msk
DECL|XDMAC_GRWS_RWS21_Pos|macro|XDMAC_GRWS_RWS21_Pos
DECL|XDMAC_GRWS_RWS21|macro|XDMAC_GRWS_RWS21
DECL|XDMAC_GRWS_RWS22_Msk|macro|XDMAC_GRWS_RWS22_Msk
DECL|XDMAC_GRWS_RWS22_Pos|macro|XDMAC_GRWS_RWS22_Pos
DECL|XDMAC_GRWS_RWS22|macro|XDMAC_GRWS_RWS22
DECL|XDMAC_GRWS_RWS23_Msk|macro|XDMAC_GRWS_RWS23_Msk
DECL|XDMAC_GRWS_RWS23_Pos|macro|XDMAC_GRWS_RWS23_Pos
DECL|XDMAC_GRWS_RWS23|macro|XDMAC_GRWS_RWS23
DECL|XDMAC_GRWS_RWS2_Msk|macro|XDMAC_GRWS_RWS2_Msk
DECL|XDMAC_GRWS_RWS2_Pos|macro|XDMAC_GRWS_RWS2_Pos
DECL|XDMAC_GRWS_RWS2|macro|XDMAC_GRWS_RWS2
DECL|XDMAC_GRWS_RWS3_Msk|macro|XDMAC_GRWS_RWS3_Msk
DECL|XDMAC_GRWS_RWS3_Pos|macro|XDMAC_GRWS_RWS3_Pos
DECL|XDMAC_GRWS_RWS3|macro|XDMAC_GRWS_RWS3
DECL|XDMAC_GRWS_RWS4_Msk|macro|XDMAC_GRWS_RWS4_Msk
DECL|XDMAC_GRWS_RWS4_Pos|macro|XDMAC_GRWS_RWS4_Pos
DECL|XDMAC_GRWS_RWS4|macro|XDMAC_GRWS_RWS4
DECL|XDMAC_GRWS_RWS5_Msk|macro|XDMAC_GRWS_RWS5_Msk
DECL|XDMAC_GRWS_RWS5_Pos|macro|XDMAC_GRWS_RWS5_Pos
DECL|XDMAC_GRWS_RWS5|macro|XDMAC_GRWS_RWS5
DECL|XDMAC_GRWS_RWS6_Msk|macro|XDMAC_GRWS_RWS6_Msk
DECL|XDMAC_GRWS_RWS6_Pos|macro|XDMAC_GRWS_RWS6_Pos
DECL|XDMAC_GRWS_RWS6|macro|XDMAC_GRWS_RWS6
DECL|XDMAC_GRWS_RWS7_Msk|macro|XDMAC_GRWS_RWS7_Msk
DECL|XDMAC_GRWS_RWS7_Pos|macro|XDMAC_GRWS_RWS7_Pos
DECL|XDMAC_GRWS_RWS7|macro|XDMAC_GRWS_RWS7
DECL|XDMAC_GRWS_RWS8_Msk|macro|XDMAC_GRWS_RWS8_Msk
DECL|XDMAC_GRWS_RWS8_Pos|macro|XDMAC_GRWS_RWS8_Pos
DECL|XDMAC_GRWS_RWS8|macro|XDMAC_GRWS_RWS8
DECL|XDMAC_GRWS_RWS9_Msk|macro|XDMAC_GRWS_RWS9_Msk
DECL|XDMAC_GRWS_RWS9_Pos|macro|XDMAC_GRWS_RWS9_Pos
DECL|XDMAC_GRWS_RWS9|macro|XDMAC_GRWS_RWS9
DECL|XDMAC_GRWS_RWS_Msk|macro|XDMAC_GRWS_RWS_Msk
DECL|XDMAC_GRWS_RWS_Pos|macro|XDMAC_GRWS_RWS_Pos
DECL|XDMAC_GRWS_RWS|macro|XDMAC_GRWS_RWS
DECL|XDMAC_GRWS_Type|typedef|} XDMAC_GRWS_Type;
DECL|XDMAC_GRWS|member|__O XDMAC_GRWS_Type XDMAC_GRWS; /**< Offset: 0x30 ( /W 32) Global Channel Read Write Suspend Register */
DECL|XDMAC_GRWS|member|__O uint32_t XDMAC_GRWS; /**< (XDMAC Offset: 0x30) Global Channel Read Write Suspend Register */
DECL|XDMAC_GSWF_MASK|macro|XDMAC_GSWF_MASK
DECL|XDMAC_GSWF_Msk|macro|XDMAC_GSWF_Msk
DECL|XDMAC_GSWF_OFFSET|macro|XDMAC_GSWF_OFFSET
DECL|XDMAC_GSWF_SWF0_Msk|macro|XDMAC_GSWF_SWF0_Msk
DECL|XDMAC_GSWF_SWF0_Pos|macro|XDMAC_GSWF_SWF0_Pos
DECL|XDMAC_GSWF_SWF0|macro|XDMAC_GSWF_SWF0
DECL|XDMAC_GSWF_SWF10_Msk|macro|XDMAC_GSWF_SWF10_Msk
DECL|XDMAC_GSWF_SWF10_Pos|macro|XDMAC_GSWF_SWF10_Pos
DECL|XDMAC_GSWF_SWF10|macro|XDMAC_GSWF_SWF10
DECL|XDMAC_GSWF_SWF11_Msk|macro|XDMAC_GSWF_SWF11_Msk
DECL|XDMAC_GSWF_SWF11_Pos|macro|XDMAC_GSWF_SWF11_Pos
DECL|XDMAC_GSWF_SWF11|macro|XDMAC_GSWF_SWF11
DECL|XDMAC_GSWF_SWF12_Msk|macro|XDMAC_GSWF_SWF12_Msk
DECL|XDMAC_GSWF_SWF12_Pos|macro|XDMAC_GSWF_SWF12_Pos
DECL|XDMAC_GSWF_SWF12|macro|XDMAC_GSWF_SWF12
DECL|XDMAC_GSWF_SWF13_Msk|macro|XDMAC_GSWF_SWF13_Msk
DECL|XDMAC_GSWF_SWF13_Pos|macro|XDMAC_GSWF_SWF13_Pos
DECL|XDMAC_GSWF_SWF13|macro|XDMAC_GSWF_SWF13
DECL|XDMAC_GSWF_SWF14_Msk|macro|XDMAC_GSWF_SWF14_Msk
DECL|XDMAC_GSWF_SWF14_Pos|macro|XDMAC_GSWF_SWF14_Pos
DECL|XDMAC_GSWF_SWF14|macro|XDMAC_GSWF_SWF14
DECL|XDMAC_GSWF_SWF15_Msk|macro|XDMAC_GSWF_SWF15_Msk
DECL|XDMAC_GSWF_SWF15_Pos|macro|XDMAC_GSWF_SWF15_Pos
DECL|XDMAC_GSWF_SWF15|macro|XDMAC_GSWF_SWF15
DECL|XDMAC_GSWF_SWF16_Msk|macro|XDMAC_GSWF_SWF16_Msk
DECL|XDMAC_GSWF_SWF16_Pos|macro|XDMAC_GSWF_SWF16_Pos
DECL|XDMAC_GSWF_SWF16|macro|XDMAC_GSWF_SWF16
DECL|XDMAC_GSWF_SWF17_Msk|macro|XDMAC_GSWF_SWF17_Msk
DECL|XDMAC_GSWF_SWF17_Pos|macro|XDMAC_GSWF_SWF17_Pos
DECL|XDMAC_GSWF_SWF17|macro|XDMAC_GSWF_SWF17
DECL|XDMAC_GSWF_SWF18_Msk|macro|XDMAC_GSWF_SWF18_Msk
DECL|XDMAC_GSWF_SWF18_Pos|macro|XDMAC_GSWF_SWF18_Pos
DECL|XDMAC_GSWF_SWF18|macro|XDMAC_GSWF_SWF18
DECL|XDMAC_GSWF_SWF19_Msk|macro|XDMAC_GSWF_SWF19_Msk
DECL|XDMAC_GSWF_SWF19_Pos|macro|XDMAC_GSWF_SWF19_Pos
DECL|XDMAC_GSWF_SWF19|macro|XDMAC_GSWF_SWF19
DECL|XDMAC_GSWF_SWF1_Msk|macro|XDMAC_GSWF_SWF1_Msk
DECL|XDMAC_GSWF_SWF1_Pos|macro|XDMAC_GSWF_SWF1_Pos
DECL|XDMAC_GSWF_SWF1|macro|XDMAC_GSWF_SWF1
DECL|XDMAC_GSWF_SWF20_Msk|macro|XDMAC_GSWF_SWF20_Msk
DECL|XDMAC_GSWF_SWF20_Pos|macro|XDMAC_GSWF_SWF20_Pos
DECL|XDMAC_GSWF_SWF20|macro|XDMAC_GSWF_SWF20
DECL|XDMAC_GSWF_SWF21_Msk|macro|XDMAC_GSWF_SWF21_Msk
DECL|XDMAC_GSWF_SWF21_Pos|macro|XDMAC_GSWF_SWF21_Pos
DECL|XDMAC_GSWF_SWF21|macro|XDMAC_GSWF_SWF21
DECL|XDMAC_GSWF_SWF22_Msk|macro|XDMAC_GSWF_SWF22_Msk
DECL|XDMAC_GSWF_SWF22_Pos|macro|XDMAC_GSWF_SWF22_Pos
DECL|XDMAC_GSWF_SWF22|macro|XDMAC_GSWF_SWF22
DECL|XDMAC_GSWF_SWF23_Msk|macro|XDMAC_GSWF_SWF23_Msk
DECL|XDMAC_GSWF_SWF23_Pos|macro|XDMAC_GSWF_SWF23_Pos
DECL|XDMAC_GSWF_SWF23|macro|XDMAC_GSWF_SWF23
DECL|XDMAC_GSWF_SWF2_Msk|macro|XDMAC_GSWF_SWF2_Msk
DECL|XDMAC_GSWF_SWF2_Pos|macro|XDMAC_GSWF_SWF2_Pos
DECL|XDMAC_GSWF_SWF2|macro|XDMAC_GSWF_SWF2
DECL|XDMAC_GSWF_SWF3_Msk|macro|XDMAC_GSWF_SWF3_Msk
DECL|XDMAC_GSWF_SWF3_Pos|macro|XDMAC_GSWF_SWF3_Pos
DECL|XDMAC_GSWF_SWF3|macro|XDMAC_GSWF_SWF3
DECL|XDMAC_GSWF_SWF4_Msk|macro|XDMAC_GSWF_SWF4_Msk
DECL|XDMAC_GSWF_SWF4_Pos|macro|XDMAC_GSWF_SWF4_Pos
DECL|XDMAC_GSWF_SWF4|macro|XDMAC_GSWF_SWF4
DECL|XDMAC_GSWF_SWF5_Msk|macro|XDMAC_GSWF_SWF5_Msk
DECL|XDMAC_GSWF_SWF5_Pos|macro|XDMAC_GSWF_SWF5_Pos
DECL|XDMAC_GSWF_SWF5|macro|XDMAC_GSWF_SWF5
DECL|XDMAC_GSWF_SWF6_Msk|macro|XDMAC_GSWF_SWF6_Msk
DECL|XDMAC_GSWF_SWF6_Pos|macro|XDMAC_GSWF_SWF6_Pos
DECL|XDMAC_GSWF_SWF6|macro|XDMAC_GSWF_SWF6
DECL|XDMAC_GSWF_SWF7_Msk|macro|XDMAC_GSWF_SWF7_Msk
DECL|XDMAC_GSWF_SWF7_Pos|macro|XDMAC_GSWF_SWF7_Pos
DECL|XDMAC_GSWF_SWF7|macro|XDMAC_GSWF_SWF7
DECL|XDMAC_GSWF_SWF8_Msk|macro|XDMAC_GSWF_SWF8_Msk
DECL|XDMAC_GSWF_SWF8_Pos|macro|XDMAC_GSWF_SWF8_Pos
DECL|XDMAC_GSWF_SWF8|macro|XDMAC_GSWF_SWF8
DECL|XDMAC_GSWF_SWF9_Msk|macro|XDMAC_GSWF_SWF9_Msk
DECL|XDMAC_GSWF_SWF9_Pos|macro|XDMAC_GSWF_SWF9_Pos
DECL|XDMAC_GSWF_SWF9|macro|XDMAC_GSWF_SWF9
DECL|XDMAC_GSWF_SWF_Msk|macro|XDMAC_GSWF_SWF_Msk
DECL|XDMAC_GSWF_SWF_Pos|macro|XDMAC_GSWF_SWF_Pos
DECL|XDMAC_GSWF_SWF|macro|XDMAC_GSWF_SWF
DECL|XDMAC_GSWF_Type|typedef|} XDMAC_GSWF_Type;
DECL|XDMAC_GSWF|member|__O XDMAC_GSWF_Type XDMAC_GSWF; /**< Offset: 0x40 ( /W 32) Global Channel Software Flush Request Register */
DECL|XDMAC_GSWF|member|__O uint32_t XDMAC_GSWF; /**< (XDMAC Offset: 0x40) Global Channel Software Flush Request Register */
DECL|XDMAC_GSWR_MASK|macro|XDMAC_GSWR_MASK
DECL|XDMAC_GSWR_Msk|macro|XDMAC_GSWR_Msk
DECL|XDMAC_GSWR_OFFSET|macro|XDMAC_GSWR_OFFSET
DECL|XDMAC_GSWR_SWREQ0_Msk|macro|XDMAC_GSWR_SWREQ0_Msk
DECL|XDMAC_GSWR_SWREQ0_Pos|macro|XDMAC_GSWR_SWREQ0_Pos
DECL|XDMAC_GSWR_SWREQ0|macro|XDMAC_GSWR_SWREQ0
DECL|XDMAC_GSWR_SWREQ10_Msk|macro|XDMAC_GSWR_SWREQ10_Msk
DECL|XDMAC_GSWR_SWREQ10_Pos|macro|XDMAC_GSWR_SWREQ10_Pos
DECL|XDMAC_GSWR_SWREQ10|macro|XDMAC_GSWR_SWREQ10
DECL|XDMAC_GSWR_SWREQ11_Msk|macro|XDMAC_GSWR_SWREQ11_Msk
DECL|XDMAC_GSWR_SWREQ11_Pos|macro|XDMAC_GSWR_SWREQ11_Pos
DECL|XDMAC_GSWR_SWREQ11|macro|XDMAC_GSWR_SWREQ11
DECL|XDMAC_GSWR_SWREQ12_Msk|macro|XDMAC_GSWR_SWREQ12_Msk
DECL|XDMAC_GSWR_SWREQ12_Pos|macro|XDMAC_GSWR_SWREQ12_Pos
DECL|XDMAC_GSWR_SWREQ12|macro|XDMAC_GSWR_SWREQ12
DECL|XDMAC_GSWR_SWREQ13_Msk|macro|XDMAC_GSWR_SWREQ13_Msk
DECL|XDMAC_GSWR_SWREQ13_Pos|macro|XDMAC_GSWR_SWREQ13_Pos
DECL|XDMAC_GSWR_SWREQ13|macro|XDMAC_GSWR_SWREQ13
DECL|XDMAC_GSWR_SWREQ14_Msk|macro|XDMAC_GSWR_SWREQ14_Msk
DECL|XDMAC_GSWR_SWREQ14_Pos|macro|XDMAC_GSWR_SWREQ14_Pos
DECL|XDMAC_GSWR_SWREQ14|macro|XDMAC_GSWR_SWREQ14
DECL|XDMAC_GSWR_SWREQ15_Msk|macro|XDMAC_GSWR_SWREQ15_Msk
DECL|XDMAC_GSWR_SWREQ15_Pos|macro|XDMAC_GSWR_SWREQ15_Pos
DECL|XDMAC_GSWR_SWREQ15|macro|XDMAC_GSWR_SWREQ15
DECL|XDMAC_GSWR_SWREQ16_Msk|macro|XDMAC_GSWR_SWREQ16_Msk
DECL|XDMAC_GSWR_SWREQ16_Pos|macro|XDMAC_GSWR_SWREQ16_Pos
DECL|XDMAC_GSWR_SWREQ16|macro|XDMAC_GSWR_SWREQ16
DECL|XDMAC_GSWR_SWREQ17_Msk|macro|XDMAC_GSWR_SWREQ17_Msk
DECL|XDMAC_GSWR_SWREQ17_Pos|macro|XDMAC_GSWR_SWREQ17_Pos
DECL|XDMAC_GSWR_SWREQ17|macro|XDMAC_GSWR_SWREQ17
DECL|XDMAC_GSWR_SWREQ18_Msk|macro|XDMAC_GSWR_SWREQ18_Msk
DECL|XDMAC_GSWR_SWREQ18_Pos|macro|XDMAC_GSWR_SWREQ18_Pos
DECL|XDMAC_GSWR_SWREQ18|macro|XDMAC_GSWR_SWREQ18
DECL|XDMAC_GSWR_SWREQ19_Msk|macro|XDMAC_GSWR_SWREQ19_Msk
DECL|XDMAC_GSWR_SWREQ19_Pos|macro|XDMAC_GSWR_SWREQ19_Pos
DECL|XDMAC_GSWR_SWREQ19|macro|XDMAC_GSWR_SWREQ19
DECL|XDMAC_GSWR_SWREQ1_Msk|macro|XDMAC_GSWR_SWREQ1_Msk
DECL|XDMAC_GSWR_SWREQ1_Pos|macro|XDMAC_GSWR_SWREQ1_Pos
DECL|XDMAC_GSWR_SWREQ1|macro|XDMAC_GSWR_SWREQ1
DECL|XDMAC_GSWR_SWREQ20_Msk|macro|XDMAC_GSWR_SWREQ20_Msk
DECL|XDMAC_GSWR_SWREQ20_Pos|macro|XDMAC_GSWR_SWREQ20_Pos
DECL|XDMAC_GSWR_SWREQ20|macro|XDMAC_GSWR_SWREQ20
DECL|XDMAC_GSWR_SWREQ21_Msk|macro|XDMAC_GSWR_SWREQ21_Msk
DECL|XDMAC_GSWR_SWREQ21_Pos|macro|XDMAC_GSWR_SWREQ21_Pos
DECL|XDMAC_GSWR_SWREQ21|macro|XDMAC_GSWR_SWREQ21
DECL|XDMAC_GSWR_SWREQ22_Msk|macro|XDMAC_GSWR_SWREQ22_Msk
DECL|XDMAC_GSWR_SWREQ22_Pos|macro|XDMAC_GSWR_SWREQ22_Pos
DECL|XDMAC_GSWR_SWREQ22|macro|XDMAC_GSWR_SWREQ22
DECL|XDMAC_GSWR_SWREQ23_Msk|macro|XDMAC_GSWR_SWREQ23_Msk
DECL|XDMAC_GSWR_SWREQ23_Pos|macro|XDMAC_GSWR_SWREQ23_Pos
DECL|XDMAC_GSWR_SWREQ23|macro|XDMAC_GSWR_SWREQ23
DECL|XDMAC_GSWR_SWREQ2_Msk|macro|XDMAC_GSWR_SWREQ2_Msk
DECL|XDMAC_GSWR_SWREQ2_Pos|macro|XDMAC_GSWR_SWREQ2_Pos
DECL|XDMAC_GSWR_SWREQ2|macro|XDMAC_GSWR_SWREQ2
DECL|XDMAC_GSWR_SWREQ3_Msk|macro|XDMAC_GSWR_SWREQ3_Msk
DECL|XDMAC_GSWR_SWREQ3_Pos|macro|XDMAC_GSWR_SWREQ3_Pos
DECL|XDMAC_GSWR_SWREQ3|macro|XDMAC_GSWR_SWREQ3
DECL|XDMAC_GSWR_SWREQ4_Msk|macro|XDMAC_GSWR_SWREQ4_Msk
DECL|XDMAC_GSWR_SWREQ4_Pos|macro|XDMAC_GSWR_SWREQ4_Pos
DECL|XDMAC_GSWR_SWREQ4|macro|XDMAC_GSWR_SWREQ4
DECL|XDMAC_GSWR_SWREQ5_Msk|macro|XDMAC_GSWR_SWREQ5_Msk
DECL|XDMAC_GSWR_SWREQ5_Pos|macro|XDMAC_GSWR_SWREQ5_Pos
DECL|XDMAC_GSWR_SWREQ5|macro|XDMAC_GSWR_SWREQ5
DECL|XDMAC_GSWR_SWREQ6_Msk|macro|XDMAC_GSWR_SWREQ6_Msk
DECL|XDMAC_GSWR_SWREQ6_Pos|macro|XDMAC_GSWR_SWREQ6_Pos
DECL|XDMAC_GSWR_SWREQ6|macro|XDMAC_GSWR_SWREQ6
DECL|XDMAC_GSWR_SWREQ7_Msk|macro|XDMAC_GSWR_SWREQ7_Msk
DECL|XDMAC_GSWR_SWREQ7_Pos|macro|XDMAC_GSWR_SWREQ7_Pos
DECL|XDMAC_GSWR_SWREQ7|macro|XDMAC_GSWR_SWREQ7
DECL|XDMAC_GSWR_SWREQ8_Msk|macro|XDMAC_GSWR_SWREQ8_Msk
DECL|XDMAC_GSWR_SWREQ8_Pos|macro|XDMAC_GSWR_SWREQ8_Pos
DECL|XDMAC_GSWR_SWREQ8|macro|XDMAC_GSWR_SWREQ8
DECL|XDMAC_GSWR_SWREQ9_Msk|macro|XDMAC_GSWR_SWREQ9_Msk
DECL|XDMAC_GSWR_SWREQ9_Pos|macro|XDMAC_GSWR_SWREQ9_Pos
DECL|XDMAC_GSWR_SWREQ9|macro|XDMAC_GSWR_SWREQ9
DECL|XDMAC_GSWR_SWREQ_Msk|macro|XDMAC_GSWR_SWREQ_Msk
DECL|XDMAC_GSWR_SWREQ_Pos|macro|XDMAC_GSWR_SWREQ_Pos
DECL|XDMAC_GSWR_SWREQ|macro|XDMAC_GSWR_SWREQ
DECL|XDMAC_GSWR_Type|typedef|} XDMAC_GSWR_Type;
DECL|XDMAC_GSWR|member|__O XDMAC_GSWR_Type XDMAC_GSWR; /**< Offset: 0x38 ( /W 32) Global Channel Software Request Register */
DECL|XDMAC_GSWR|member|__O uint32_t XDMAC_GSWR; /**< (XDMAC Offset: 0x38) Global Channel Software Request Register */
DECL|XDMAC_GSWS_MASK|macro|XDMAC_GSWS_MASK
DECL|XDMAC_GSWS_Msk|macro|XDMAC_GSWS_Msk
DECL|XDMAC_GSWS_OFFSET|macro|XDMAC_GSWS_OFFSET
DECL|XDMAC_GSWS_SWRS0_Msk|macro|XDMAC_GSWS_SWRS0_Msk
DECL|XDMAC_GSWS_SWRS0_Pos|macro|XDMAC_GSWS_SWRS0_Pos
DECL|XDMAC_GSWS_SWRS0|macro|XDMAC_GSWS_SWRS0
DECL|XDMAC_GSWS_SWRS10_Msk|macro|XDMAC_GSWS_SWRS10_Msk
DECL|XDMAC_GSWS_SWRS10_Pos|macro|XDMAC_GSWS_SWRS10_Pos
DECL|XDMAC_GSWS_SWRS10|macro|XDMAC_GSWS_SWRS10
DECL|XDMAC_GSWS_SWRS11_Msk|macro|XDMAC_GSWS_SWRS11_Msk
DECL|XDMAC_GSWS_SWRS11_Pos|macro|XDMAC_GSWS_SWRS11_Pos
DECL|XDMAC_GSWS_SWRS11|macro|XDMAC_GSWS_SWRS11
DECL|XDMAC_GSWS_SWRS12_Msk|macro|XDMAC_GSWS_SWRS12_Msk
DECL|XDMAC_GSWS_SWRS12_Pos|macro|XDMAC_GSWS_SWRS12_Pos
DECL|XDMAC_GSWS_SWRS12|macro|XDMAC_GSWS_SWRS12
DECL|XDMAC_GSWS_SWRS13_Msk|macro|XDMAC_GSWS_SWRS13_Msk
DECL|XDMAC_GSWS_SWRS13_Pos|macro|XDMAC_GSWS_SWRS13_Pos
DECL|XDMAC_GSWS_SWRS13|macro|XDMAC_GSWS_SWRS13
DECL|XDMAC_GSWS_SWRS14_Msk|macro|XDMAC_GSWS_SWRS14_Msk
DECL|XDMAC_GSWS_SWRS14_Pos|macro|XDMAC_GSWS_SWRS14_Pos
DECL|XDMAC_GSWS_SWRS14|macro|XDMAC_GSWS_SWRS14
DECL|XDMAC_GSWS_SWRS15_Msk|macro|XDMAC_GSWS_SWRS15_Msk
DECL|XDMAC_GSWS_SWRS15_Pos|macro|XDMAC_GSWS_SWRS15_Pos
DECL|XDMAC_GSWS_SWRS15|macro|XDMAC_GSWS_SWRS15
DECL|XDMAC_GSWS_SWRS16_Msk|macro|XDMAC_GSWS_SWRS16_Msk
DECL|XDMAC_GSWS_SWRS16_Pos|macro|XDMAC_GSWS_SWRS16_Pos
DECL|XDMAC_GSWS_SWRS16|macro|XDMAC_GSWS_SWRS16
DECL|XDMAC_GSWS_SWRS17_Msk|macro|XDMAC_GSWS_SWRS17_Msk
DECL|XDMAC_GSWS_SWRS17_Pos|macro|XDMAC_GSWS_SWRS17_Pos
DECL|XDMAC_GSWS_SWRS17|macro|XDMAC_GSWS_SWRS17
DECL|XDMAC_GSWS_SWRS18_Msk|macro|XDMAC_GSWS_SWRS18_Msk
DECL|XDMAC_GSWS_SWRS18_Pos|macro|XDMAC_GSWS_SWRS18_Pos
DECL|XDMAC_GSWS_SWRS18|macro|XDMAC_GSWS_SWRS18
DECL|XDMAC_GSWS_SWRS19_Msk|macro|XDMAC_GSWS_SWRS19_Msk
DECL|XDMAC_GSWS_SWRS19_Pos|macro|XDMAC_GSWS_SWRS19_Pos
DECL|XDMAC_GSWS_SWRS19|macro|XDMAC_GSWS_SWRS19
DECL|XDMAC_GSWS_SWRS1_Msk|macro|XDMAC_GSWS_SWRS1_Msk
DECL|XDMAC_GSWS_SWRS1_Pos|macro|XDMAC_GSWS_SWRS1_Pos
DECL|XDMAC_GSWS_SWRS1|macro|XDMAC_GSWS_SWRS1
DECL|XDMAC_GSWS_SWRS20_Msk|macro|XDMAC_GSWS_SWRS20_Msk
DECL|XDMAC_GSWS_SWRS20_Pos|macro|XDMAC_GSWS_SWRS20_Pos
DECL|XDMAC_GSWS_SWRS20|macro|XDMAC_GSWS_SWRS20
DECL|XDMAC_GSWS_SWRS21_Msk|macro|XDMAC_GSWS_SWRS21_Msk
DECL|XDMAC_GSWS_SWRS21_Pos|macro|XDMAC_GSWS_SWRS21_Pos
DECL|XDMAC_GSWS_SWRS21|macro|XDMAC_GSWS_SWRS21
DECL|XDMAC_GSWS_SWRS22_Msk|macro|XDMAC_GSWS_SWRS22_Msk
DECL|XDMAC_GSWS_SWRS22_Pos|macro|XDMAC_GSWS_SWRS22_Pos
DECL|XDMAC_GSWS_SWRS22|macro|XDMAC_GSWS_SWRS22
DECL|XDMAC_GSWS_SWRS23_Msk|macro|XDMAC_GSWS_SWRS23_Msk
DECL|XDMAC_GSWS_SWRS23_Pos|macro|XDMAC_GSWS_SWRS23_Pos
DECL|XDMAC_GSWS_SWRS23|macro|XDMAC_GSWS_SWRS23
DECL|XDMAC_GSWS_SWRS2_Msk|macro|XDMAC_GSWS_SWRS2_Msk
DECL|XDMAC_GSWS_SWRS2_Pos|macro|XDMAC_GSWS_SWRS2_Pos
DECL|XDMAC_GSWS_SWRS2|macro|XDMAC_GSWS_SWRS2
DECL|XDMAC_GSWS_SWRS3_Msk|macro|XDMAC_GSWS_SWRS3_Msk
DECL|XDMAC_GSWS_SWRS3_Pos|macro|XDMAC_GSWS_SWRS3_Pos
DECL|XDMAC_GSWS_SWRS3|macro|XDMAC_GSWS_SWRS3
DECL|XDMAC_GSWS_SWRS4_Msk|macro|XDMAC_GSWS_SWRS4_Msk
DECL|XDMAC_GSWS_SWRS4_Pos|macro|XDMAC_GSWS_SWRS4_Pos
DECL|XDMAC_GSWS_SWRS4|macro|XDMAC_GSWS_SWRS4
DECL|XDMAC_GSWS_SWRS5_Msk|macro|XDMAC_GSWS_SWRS5_Msk
DECL|XDMAC_GSWS_SWRS5_Pos|macro|XDMAC_GSWS_SWRS5_Pos
DECL|XDMAC_GSWS_SWRS5|macro|XDMAC_GSWS_SWRS5
DECL|XDMAC_GSWS_SWRS6_Msk|macro|XDMAC_GSWS_SWRS6_Msk
DECL|XDMAC_GSWS_SWRS6_Pos|macro|XDMAC_GSWS_SWRS6_Pos
DECL|XDMAC_GSWS_SWRS6|macro|XDMAC_GSWS_SWRS6
DECL|XDMAC_GSWS_SWRS7_Msk|macro|XDMAC_GSWS_SWRS7_Msk
DECL|XDMAC_GSWS_SWRS7_Pos|macro|XDMAC_GSWS_SWRS7_Pos
DECL|XDMAC_GSWS_SWRS7|macro|XDMAC_GSWS_SWRS7
DECL|XDMAC_GSWS_SWRS8_Msk|macro|XDMAC_GSWS_SWRS8_Msk
DECL|XDMAC_GSWS_SWRS8_Pos|macro|XDMAC_GSWS_SWRS8_Pos
DECL|XDMAC_GSWS_SWRS8|macro|XDMAC_GSWS_SWRS8
DECL|XDMAC_GSWS_SWRS9_Msk|macro|XDMAC_GSWS_SWRS9_Msk
DECL|XDMAC_GSWS_SWRS9_Pos|macro|XDMAC_GSWS_SWRS9_Pos
DECL|XDMAC_GSWS_SWRS9|macro|XDMAC_GSWS_SWRS9
DECL|XDMAC_GSWS_SWRS_Msk|macro|XDMAC_GSWS_SWRS_Msk
DECL|XDMAC_GSWS_SWRS_Pos|macro|XDMAC_GSWS_SWRS_Pos
DECL|XDMAC_GSWS_SWRS|macro|XDMAC_GSWS_SWRS
DECL|XDMAC_GSWS_Type|typedef|} XDMAC_GSWS_Type;
DECL|XDMAC_GSWS|member|__I XDMAC_GSWS_Type XDMAC_GSWS; /**< Offset: 0x3C (R/ 32) Global Channel Software Request Status Register */
DECL|XDMAC_GSWS|member|__I uint32_t XDMAC_GSWS; /**< (XDMAC Offset: 0x3C) Global Channel Software Request Status Register */
DECL|XDMAC_GS_MASK|macro|XDMAC_GS_MASK
DECL|XDMAC_GS_Msk|macro|XDMAC_GS_Msk
DECL|XDMAC_GS_OFFSET|macro|XDMAC_GS_OFFSET
DECL|XDMAC_GS_ST0_Msk|macro|XDMAC_GS_ST0_Msk
DECL|XDMAC_GS_ST0_Pos|macro|XDMAC_GS_ST0_Pos
DECL|XDMAC_GS_ST0|macro|XDMAC_GS_ST0
DECL|XDMAC_GS_ST10_Msk|macro|XDMAC_GS_ST10_Msk
DECL|XDMAC_GS_ST10_Pos|macro|XDMAC_GS_ST10_Pos
DECL|XDMAC_GS_ST10|macro|XDMAC_GS_ST10
DECL|XDMAC_GS_ST11_Msk|macro|XDMAC_GS_ST11_Msk
DECL|XDMAC_GS_ST11_Pos|macro|XDMAC_GS_ST11_Pos
DECL|XDMAC_GS_ST11|macro|XDMAC_GS_ST11
DECL|XDMAC_GS_ST12_Msk|macro|XDMAC_GS_ST12_Msk
DECL|XDMAC_GS_ST12_Pos|macro|XDMAC_GS_ST12_Pos
DECL|XDMAC_GS_ST12|macro|XDMAC_GS_ST12
DECL|XDMAC_GS_ST13_Msk|macro|XDMAC_GS_ST13_Msk
DECL|XDMAC_GS_ST13_Pos|macro|XDMAC_GS_ST13_Pos
DECL|XDMAC_GS_ST13|macro|XDMAC_GS_ST13
DECL|XDMAC_GS_ST14_Msk|macro|XDMAC_GS_ST14_Msk
DECL|XDMAC_GS_ST14_Pos|macro|XDMAC_GS_ST14_Pos
DECL|XDMAC_GS_ST14|macro|XDMAC_GS_ST14
DECL|XDMAC_GS_ST15_Msk|macro|XDMAC_GS_ST15_Msk
DECL|XDMAC_GS_ST15_Pos|macro|XDMAC_GS_ST15_Pos
DECL|XDMAC_GS_ST15|macro|XDMAC_GS_ST15
DECL|XDMAC_GS_ST16_Msk|macro|XDMAC_GS_ST16_Msk
DECL|XDMAC_GS_ST16_Pos|macro|XDMAC_GS_ST16_Pos
DECL|XDMAC_GS_ST16|macro|XDMAC_GS_ST16
DECL|XDMAC_GS_ST17_Msk|macro|XDMAC_GS_ST17_Msk
DECL|XDMAC_GS_ST17_Pos|macro|XDMAC_GS_ST17_Pos
DECL|XDMAC_GS_ST17|macro|XDMAC_GS_ST17
DECL|XDMAC_GS_ST18_Msk|macro|XDMAC_GS_ST18_Msk
DECL|XDMAC_GS_ST18_Pos|macro|XDMAC_GS_ST18_Pos
DECL|XDMAC_GS_ST18|macro|XDMAC_GS_ST18
DECL|XDMAC_GS_ST19_Msk|macro|XDMAC_GS_ST19_Msk
DECL|XDMAC_GS_ST19_Pos|macro|XDMAC_GS_ST19_Pos
DECL|XDMAC_GS_ST19|macro|XDMAC_GS_ST19
DECL|XDMAC_GS_ST1_Msk|macro|XDMAC_GS_ST1_Msk
DECL|XDMAC_GS_ST1_Pos|macro|XDMAC_GS_ST1_Pos
DECL|XDMAC_GS_ST1|macro|XDMAC_GS_ST1
DECL|XDMAC_GS_ST20_Msk|macro|XDMAC_GS_ST20_Msk
DECL|XDMAC_GS_ST20_Pos|macro|XDMAC_GS_ST20_Pos
DECL|XDMAC_GS_ST20|macro|XDMAC_GS_ST20
DECL|XDMAC_GS_ST21_Msk|macro|XDMAC_GS_ST21_Msk
DECL|XDMAC_GS_ST21_Pos|macro|XDMAC_GS_ST21_Pos
DECL|XDMAC_GS_ST21|macro|XDMAC_GS_ST21
DECL|XDMAC_GS_ST22_Msk|macro|XDMAC_GS_ST22_Msk
DECL|XDMAC_GS_ST22_Pos|macro|XDMAC_GS_ST22_Pos
DECL|XDMAC_GS_ST22|macro|XDMAC_GS_ST22
DECL|XDMAC_GS_ST23_Msk|macro|XDMAC_GS_ST23_Msk
DECL|XDMAC_GS_ST23_Pos|macro|XDMAC_GS_ST23_Pos
DECL|XDMAC_GS_ST23|macro|XDMAC_GS_ST23
DECL|XDMAC_GS_ST2_Msk|macro|XDMAC_GS_ST2_Msk
DECL|XDMAC_GS_ST2_Pos|macro|XDMAC_GS_ST2_Pos
DECL|XDMAC_GS_ST2|macro|XDMAC_GS_ST2
DECL|XDMAC_GS_ST3_Msk|macro|XDMAC_GS_ST3_Msk
DECL|XDMAC_GS_ST3_Pos|macro|XDMAC_GS_ST3_Pos
DECL|XDMAC_GS_ST3|macro|XDMAC_GS_ST3
DECL|XDMAC_GS_ST4_Msk|macro|XDMAC_GS_ST4_Msk
DECL|XDMAC_GS_ST4_Pos|macro|XDMAC_GS_ST4_Pos
DECL|XDMAC_GS_ST4|macro|XDMAC_GS_ST4
DECL|XDMAC_GS_ST5_Msk|macro|XDMAC_GS_ST5_Msk
DECL|XDMAC_GS_ST5_Pos|macro|XDMAC_GS_ST5_Pos
DECL|XDMAC_GS_ST5|macro|XDMAC_GS_ST5
DECL|XDMAC_GS_ST6_Msk|macro|XDMAC_GS_ST6_Msk
DECL|XDMAC_GS_ST6_Pos|macro|XDMAC_GS_ST6_Pos
DECL|XDMAC_GS_ST6|macro|XDMAC_GS_ST6
DECL|XDMAC_GS_ST7_Msk|macro|XDMAC_GS_ST7_Msk
DECL|XDMAC_GS_ST7_Pos|macro|XDMAC_GS_ST7_Pos
DECL|XDMAC_GS_ST7|macro|XDMAC_GS_ST7
DECL|XDMAC_GS_ST8_Msk|macro|XDMAC_GS_ST8_Msk
DECL|XDMAC_GS_ST8_Pos|macro|XDMAC_GS_ST8_Pos
DECL|XDMAC_GS_ST8|macro|XDMAC_GS_ST8
DECL|XDMAC_GS_ST9_Msk|macro|XDMAC_GS_ST9_Msk
DECL|XDMAC_GS_ST9_Pos|macro|XDMAC_GS_ST9_Pos
DECL|XDMAC_GS_ST9|macro|XDMAC_GS_ST9
DECL|XDMAC_GS_ST_Msk|macro|XDMAC_GS_ST_Msk
DECL|XDMAC_GS_ST_Pos|macro|XDMAC_GS_ST_Pos
DECL|XDMAC_GS_ST|macro|XDMAC_GS_ST
DECL|XDMAC_GS_Type|typedef|} XDMAC_GS_Type;
DECL|XDMAC_GS|member|__I XDMAC_GS_Type XDMAC_GS; /**< Offset: 0x24 (R/ 32) Global Channel Status Register */
DECL|XDMAC_GS|member|__I uint32_t XDMAC_GS; /**< (XDMAC Offset: 0x24) Global Channel Status Register */
DECL|XDMAC_GTYPE_FIFO_SZ_Msk|macro|XDMAC_GTYPE_FIFO_SZ_Msk
DECL|XDMAC_GTYPE_FIFO_SZ_Pos|macro|XDMAC_GTYPE_FIFO_SZ_Pos
DECL|XDMAC_GTYPE_FIFO_SZ|macro|XDMAC_GTYPE_FIFO_SZ
DECL|XDMAC_GTYPE_MASK|macro|XDMAC_GTYPE_MASK
DECL|XDMAC_GTYPE_Msk|macro|XDMAC_GTYPE_Msk
DECL|XDMAC_GTYPE_NB_CH_Msk|macro|XDMAC_GTYPE_NB_CH_Msk
DECL|XDMAC_GTYPE_NB_CH_Pos|macro|XDMAC_GTYPE_NB_CH_Pos
DECL|XDMAC_GTYPE_NB_CH|macro|XDMAC_GTYPE_NB_CH
DECL|XDMAC_GTYPE_NB_REQ_Msk|macro|XDMAC_GTYPE_NB_REQ_Msk
DECL|XDMAC_GTYPE_NB_REQ_Pos|macro|XDMAC_GTYPE_NB_REQ_Pos
DECL|XDMAC_GTYPE_NB_REQ|macro|XDMAC_GTYPE_NB_REQ
DECL|XDMAC_GTYPE_OFFSET|macro|XDMAC_GTYPE_OFFSET
DECL|XDMAC_GTYPE_Type|typedef|} XDMAC_GTYPE_Type;
DECL|XDMAC_GTYPE|member|__IO XDMAC_GTYPE_Type XDMAC_GTYPE; /**< Offset: 0x00 (R/W 32) Global Type Register */
DECL|XDMAC_GTYPE|member|__IO uint32_t XDMAC_GTYPE; /**< (XDMAC Offset: 0x00) Global Type Register */
DECL|XDMAC_GWAC_MASK|macro|XDMAC_GWAC_MASK
DECL|XDMAC_GWAC_Msk|macro|XDMAC_GWAC_Msk
DECL|XDMAC_GWAC_OFFSET|macro|XDMAC_GWAC_OFFSET
DECL|XDMAC_GWAC_PW0_Msk|macro|XDMAC_GWAC_PW0_Msk
DECL|XDMAC_GWAC_PW0_Pos|macro|XDMAC_GWAC_PW0_Pos
DECL|XDMAC_GWAC_PW0|macro|XDMAC_GWAC_PW0
DECL|XDMAC_GWAC_PW1_Msk|macro|XDMAC_GWAC_PW1_Msk
DECL|XDMAC_GWAC_PW1_Pos|macro|XDMAC_GWAC_PW1_Pos
DECL|XDMAC_GWAC_PW1|macro|XDMAC_GWAC_PW1
DECL|XDMAC_GWAC_PW2_Msk|macro|XDMAC_GWAC_PW2_Msk
DECL|XDMAC_GWAC_PW2_Pos|macro|XDMAC_GWAC_PW2_Pos
DECL|XDMAC_GWAC_PW2|macro|XDMAC_GWAC_PW2
DECL|XDMAC_GWAC_PW3_Msk|macro|XDMAC_GWAC_PW3_Msk
DECL|XDMAC_GWAC_PW3_Pos|macro|XDMAC_GWAC_PW3_Pos
DECL|XDMAC_GWAC_PW3|macro|XDMAC_GWAC_PW3
DECL|XDMAC_GWAC_Type|typedef|} XDMAC_GWAC_Type;
DECL|XDMAC_GWAC|member|__IO XDMAC_GWAC_Type XDMAC_GWAC; /**< Offset: 0x08 (R/W 32) Global Weighted Arbiter Configuration Register */
DECL|XDMAC_GWAC|member|__IO uint32_t XDMAC_GWAC; /**< (XDMAC Offset: 0x08) Global Weighted Arbiter Configuration Register */
DECL|XDMAC_GWS_MASK|macro|XDMAC_GWS_MASK
DECL|XDMAC_GWS_Msk|macro|XDMAC_GWS_Msk
DECL|XDMAC_GWS_OFFSET|macro|XDMAC_GWS_OFFSET
DECL|XDMAC_GWS_Type|typedef|} XDMAC_GWS_Type;
DECL|XDMAC_GWS_WS0_Msk|macro|XDMAC_GWS_WS0_Msk
DECL|XDMAC_GWS_WS0_Pos|macro|XDMAC_GWS_WS0_Pos
DECL|XDMAC_GWS_WS0|macro|XDMAC_GWS_WS0
DECL|XDMAC_GWS_WS10_Msk|macro|XDMAC_GWS_WS10_Msk
DECL|XDMAC_GWS_WS10_Pos|macro|XDMAC_GWS_WS10_Pos
DECL|XDMAC_GWS_WS10|macro|XDMAC_GWS_WS10
DECL|XDMAC_GWS_WS11_Msk|macro|XDMAC_GWS_WS11_Msk
DECL|XDMAC_GWS_WS11_Pos|macro|XDMAC_GWS_WS11_Pos
DECL|XDMAC_GWS_WS11|macro|XDMAC_GWS_WS11
DECL|XDMAC_GWS_WS12_Msk|macro|XDMAC_GWS_WS12_Msk
DECL|XDMAC_GWS_WS12_Pos|macro|XDMAC_GWS_WS12_Pos
DECL|XDMAC_GWS_WS12|macro|XDMAC_GWS_WS12
DECL|XDMAC_GWS_WS13_Msk|macro|XDMAC_GWS_WS13_Msk
DECL|XDMAC_GWS_WS13_Pos|macro|XDMAC_GWS_WS13_Pos
DECL|XDMAC_GWS_WS13|macro|XDMAC_GWS_WS13
DECL|XDMAC_GWS_WS14_Msk|macro|XDMAC_GWS_WS14_Msk
DECL|XDMAC_GWS_WS14_Pos|macro|XDMAC_GWS_WS14_Pos
DECL|XDMAC_GWS_WS14|macro|XDMAC_GWS_WS14
DECL|XDMAC_GWS_WS15_Msk|macro|XDMAC_GWS_WS15_Msk
DECL|XDMAC_GWS_WS15_Pos|macro|XDMAC_GWS_WS15_Pos
DECL|XDMAC_GWS_WS15|macro|XDMAC_GWS_WS15
DECL|XDMAC_GWS_WS16_Msk|macro|XDMAC_GWS_WS16_Msk
DECL|XDMAC_GWS_WS16_Pos|macro|XDMAC_GWS_WS16_Pos
DECL|XDMAC_GWS_WS16|macro|XDMAC_GWS_WS16
DECL|XDMAC_GWS_WS17_Msk|macro|XDMAC_GWS_WS17_Msk
DECL|XDMAC_GWS_WS17_Pos|macro|XDMAC_GWS_WS17_Pos
DECL|XDMAC_GWS_WS17|macro|XDMAC_GWS_WS17
DECL|XDMAC_GWS_WS18_Msk|macro|XDMAC_GWS_WS18_Msk
DECL|XDMAC_GWS_WS18_Pos|macro|XDMAC_GWS_WS18_Pos
DECL|XDMAC_GWS_WS18|macro|XDMAC_GWS_WS18
DECL|XDMAC_GWS_WS19_Msk|macro|XDMAC_GWS_WS19_Msk
DECL|XDMAC_GWS_WS19_Pos|macro|XDMAC_GWS_WS19_Pos
DECL|XDMAC_GWS_WS19|macro|XDMAC_GWS_WS19
DECL|XDMAC_GWS_WS1_Msk|macro|XDMAC_GWS_WS1_Msk
DECL|XDMAC_GWS_WS1_Pos|macro|XDMAC_GWS_WS1_Pos
DECL|XDMAC_GWS_WS1|macro|XDMAC_GWS_WS1
DECL|XDMAC_GWS_WS20_Msk|macro|XDMAC_GWS_WS20_Msk
DECL|XDMAC_GWS_WS20_Pos|macro|XDMAC_GWS_WS20_Pos
DECL|XDMAC_GWS_WS20|macro|XDMAC_GWS_WS20
DECL|XDMAC_GWS_WS21_Msk|macro|XDMAC_GWS_WS21_Msk
DECL|XDMAC_GWS_WS21_Pos|macro|XDMAC_GWS_WS21_Pos
DECL|XDMAC_GWS_WS21|macro|XDMAC_GWS_WS21
DECL|XDMAC_GWS_WS22_Msk|macro|XDMAC_GWS_WS22_Msk
DECL|XDMAC_GWS_WS22_Pos|macro|XDMAC_GWS_WS22_Pos
DECL|XDMAC_GWS_WS22|macro|XDMAC_GWS_WS22
DECL|XDMAC_GWS_WS23_Msk|macro|XDMAC_GWS_WS23_Msk
DECL|XDMAC_GWS_WS23_Pos|macro|XDMAC_GWS_WS23_Pos
DECL|XDMAC_GWS_WS23|macro|XDMAC_GWS_WS23
DECL|XDMAC_GWS_WS2_Msk|macro|XDMAC_GWS_WS2_Msk
DECL|XDMAC_GWS_WS2_Pos|macro|XDMAC_GWS_WS2_Pos
DECL|XDMAC_GWS_WS2|macro|XDMAC_GWS_WS2
DECL|XDMAC_GWS_WS3_Msk|macro|XDMAC_GWS_WS3_Msk
DECL|XDMAC_GWS_WS3_Pos|macro|XDMAC_GWS_WS3_Pos
DECL|XDMAC_GWS_WS3|macro|XDMAC_GWS_WS3
DECL|XDMAC_GWS_WS4_Msk|macro|XDMAC_GWS_WS4_Msk
DECL|XDMAC_GWS_WS4_Pos|macro|XDMAC_GWS_WS4_Pos
DECL|XDMAC_GWS_WS4|macro|XDMAC_GWS_WS4
DECL|XDMAC_GWS_WS5_Msk|macro|XDMAC_GWS_WS5_Msk
DECL|XDMAC_GWS_WS5_Pos|macro|XDMAC_GWS_WS5_Pos
DECL|XDMAC_GWS_WS5|macro|XDMAC_GWS_WS5
DECL|XDMAC_GWS_WS6_Msk|macro|XDMAC_GWS_WS6_Msk
DECL|XDMAC_GWS_WS6_Pos|macro|XDMAC_GWS_WS6_Pos
DECL|XDMAC_GWS_WS6|macro|XDMAC_GWS_WS6
DECL|XDMAC_GWS_WS7_Msk|macro|XDMAC_GWS_WS7_Msk
DECL|XDMAC_GWS_WS7_Pos|macro|XDMAC_GWS_WS7_Pos
DECL|XDMAC_GWS_WS7|macro|XDMAC_GWS_WS7
DECL|XDMAC_GWS_WS8_Msk|macro|XDMAC_GWS_WS8_Msk
DECL|XDMAC_GWS_WS8_Pos|macro|XDMAC_GWS_WS8_Pos
DECL|XDMAC_GWS_WS8|macro|XDMAC_GWS_WS8
DECL|XDMAC_GWS_WS9_Msk|macro|XDMAC_GWS_WS9_Msk
DECL|XDMAC_GWS_WS9_Pos|macro|XDMAC_GWS_WS9_Pos
DECL|XDMAC_GWS_WS9|macro|XDMAC_GWS_WS9
DECL|XDMAC_GWS_WS_Msk|macro|XDMAC_GWS_WS_Msk
DECL|XDMAC_GWS_WS_Pos|macro|XDMAC_GWS_WS_Pos
DECL|XDMAC_GWS_WS|macro|XDMAC_GWS_WS
DECL|XDMAC_GWS|member|__IO XDMAC_GWS_Type XDMAC_GWS; /**< Offset: 0x2C (R/W 32) Global Channel Write Suspend Register */
DECL|XDMAC_GWS|member|__IO uint32_t XDMAC_GWS; /**< (XDMAC Offset: 0x2C) Global Channel Write Suspend Register */
DECL|XdmacChid|typedef|} XdmacChid;
DECL|XdmacChid|typedef|} XdmacChid;
DECL|Xdmac|typedef|} Xdmac;
DECL|Xdmac|typedef|} Xdmac;
DECL|_SAME70_XDMAC_COMPONENT_H_|macro|_SAME70_XDMAC_COMPONENT_H_
DECL|_SAME70_XDMAC_COMPONENT_|macro|_SAME70_XDMAC_COMPONENT_
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :16; /**< bit: 16..31 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 1 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 20 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 3 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 31 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 5 Reserved */
DECL|uint32_t|member|uint32_t :20; /**< bit: 12..31 Reserved */
DECL|uint32_t|member|uint32_t :23; /**< bit: 9..31 Reserved */
DECL|uint32_t|member|uint32_t :25; /**< bit: 7..31 Reserved */
DECL|uint32_t|member|uint32_t :25; /**< bit: 7..31 Reserved */
DECL|uint32_t|member|uint32_t :25; /**< bit: 7..31 Reserved */
DECL|uint32_t|member|uint32_t :25; /**< bit: 7..31 Reserved */
DECL|uint32_t|member|uint32_t :27; /**< bit: 5..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 4..7 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :9; /**< bit: 23..31 Reserved */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
DECL|vec|member|} vec; /**< Structure used for vec access */
