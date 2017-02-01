DECL|ALMIEN|member|uint32_t ALMIEN:1; /**< bit: 16 Alarm Interrupt Enable */
DECL|ALMS|member|uint32_t ALMS:1; /**< bit: 0 Real-time Alarm Status (cleared on read) */
DECL|ALMV|member|uint32_t ALMV:32; /**< bit: 0..31 Alarm Value */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|CRTV|member|uint32_t CRTV:32; /**< bit: 0..31 Current Real-time Value */
DECL|REV_RTT|macro|REV_RTT
DECL|RTC1HZ|member|uint32_t RTC1HZ:1; /**< bit: 24 Real-Time Clock 1Hz Clock Selection */
DECL|RTPRES|member|uint32_t RTPRES:16; /**< bit: 0..15 Real-time Timer Prescaler Value */
DECL|RTTDIS|member|uint32_t RTTDIS:1; /**< bit: 20 Real-time Timer Disable */
DECL|RTTINCIEN|member|uint32_t RTTINCIEN:1; /**< bit: 17 Real-time Timer Increment Interrupt Enable */
DECL|RTTINC|member|uint32_t RTTINC:1; /**< bit: 1 Prescaler Roll-over Status (cleared on read) */
DECL|RTTRST|member|uint32_t RTTRST:1; /**< bit: 18 Real-time Timer Restart */
DECL|RTT_6081|macro|RTT_6081
DECL|RTT_AR_ALMV_Msk|macro|RTT_AR_ALMV_Msk
DECL|RTT_AR_ALMV_Pos|macro|RTT_AR_ALMV_Pos
DECL|RTT_AR_ALMV|macro|RTT_AR_ALMV
DECL|RTT_AR_MASK|macro|RTT_AR_MASK
DECL|RTT_AR_Msk|macro|RTT_AR_Msk
DECL|RTT_AR_OFFSET|macro|RTT_AR_OFFSET
DECL|RTT_AR_Type|typedef|} RTT_AR_Type;
DECL|RTT_AR|member|__IO RTT_AR_Type RTT_AR; /**< Offset: 0x04 (R/W 32) Alarm Register */
DECL|RTT_AR|member|__IO uint32_t RTT_AR; /**< (RTT Offset: 0x04) Alarm Register */
DECL|RTT_MR_ALMIEN_Msk|macro|RTT_MR_ALMIEN_Msk
DECL|RTT_MR_ALMIEN_Pos|macro|RTT_MR_ALMIEN_Pos
DECL|RTT_MR_ALMIEN|macro|RTT_MR_ALMIEN
DECL|RTT_MR_MASK|macro|RTT_MR_MASK
DECL|RTT_MR_Msk|macro|RTT_MR_Msk
DECL|RTT_MR_OFFSET|macro|RTT_MR_OFFSET
DECL|RTT_MR_RTC1HZ_Msk|macro|RTT_MR_RTC1HZ_Msk
DECL|RTT_MR_RTC1HZ_Pos|macro|RTT_MR_RTC1HZ_Pos
DECL|RTT_MR_RTC1HZ|macro|RTT_MR_RTC1HZ
DECL|RTT_MR_RTPRES_Msk|macro|RTT_MR_RTPRES_Msk
DECL|RTT_MR_RTPRES_Pos|macro|RTT_MR_RTPRES_Pos
DECL|RTT_MR_RTPRES|macro|RTT_MR_RTPRES
DECL|RTT_MR_RTTDIS_Msk|macro|RTT_MR_RTTDIS_Msk
DECL|RTT_MR_RTTDIS_Pos|macro|RTT_MR_RTTDIS_Pos
DECL|RTT_MR_RTTDIS|macro|RTT_MR_RTTDIS
DECL|RTT_MR_RTTINCIEN_Msk|macro|RTT_MR_RTTINCIEN_Msk
DECL|RTT_MR_RTTINCIEN_Pos|macro|RTT_MR_RTTINCIEN_Pos
DECL|RTT_MR_RTTINCIEN|macro|RTT_MR_RTTINCIEN
DECL|RTT_MR_RTTRST_Msk|macro|RTT_MR_RTTRST_Msk
DECL|RTT_MR_RTTRST_Pos|macro|RTT_MR_RTTRST_Pos
DECL|RTT_MR_RTTRST|macro|RTT_MR_RTTRST
DECL|RTT_MR_Type|typedef|} RTT_MR_Type;
DECL|RTT_MR|member|__IO RTT_MR_Type RTT_MR; /**< Offset: 0x00 (R/W 32) Mode Register */
DECL|RTT_MR|member|__IO uint32_t RTT_MR; /**< (RTT Offset: 0x00) Mode Register */
DECL|RTT_SR_ALMS_Msk|macro|RTT_SR_ALMS_Msk
DECL|RTT_SR_ALMS_Pos|macro|RTT_SR_ALMS_Pos
DECL|RTT_SR_ALMS|macro|RTT_SR_ALMS
DECL|RTT_SR_MASK|macro|RTT_SR_MASK
DECL|RTT_SR_Msk|macro|RTT_SR_Msk
DECL|RTT_SR_OFFSET|macro|RTT_SR_OFFSET
DECL|RTT_SR_RTTINC_Msk|macro|RTT_SR_RTTINC_Msk
DECL|RTT_SR_RTTINC_Pos|macro|RTT_SR_RTTINC_Pos
DECL|RTT_SR_RTTINC|macro|RTT_SR_RTTINC
DECL|RTT_SR_Type|typedef|} RTT_SR_Type;
DECL|RTT_SR|member|__I RTT_SR_Type RTT_SR; /**< Offset: 0x0C (R/ 32) Status Register */
DECL|RTT_SR|member|__I uint32_t RTT_SR; /**< (RTT Offset: 0x0C) Status Register */
DECL|RTT_VR_CRTV_Msk|macro|RTT_VR_CRTV_Msk
DECL|RTT_VR_CRTV_Pos|macro|RTT_VR_CRTV_Pos
DECL|RTT_VR_CRTV|macro|RTT_VR_CRTV
DECL|RTT_VR_MASK|macro|RTT_VR_MASK
DECL|RTT_VR_Msk|macro|RTT_VR_Msk
DECL|RTT_VR_OFFSET|macro|RTT_VR_OFFSET
DECL|RTT_VR_Type|typedef|} RTT_VR_Type;
DECL|RTT_VR|member|__I RTT_VR_Type RTT_VR; /**< Offset: 0x08 (R/ 32) Value Register */
DECL|RTT_VR|member|__I uint32_t RTT_VR; /**< (RTT Offset: 0x08) Value Register */
DECL|Rtt|typedef|} Rtt;
DECL|Rtt|typedef|} Rtt;
DECL|_SAME70_RTT_COMPONENT_H_|macro|_SAME70_RTT_COMPONENT_H_
DECL|_SAME70_RTT_COMPONENT_|macro|_SAME70_RTT_COMPONENT_
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :1; /**< bit: 19 Reserved */
DECL|uint32_t|member|uint32_t :30; /**< bit: 2..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 21..23 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
