DECL|DisableInterrupts|macro|DisableInterrupts
DECL|EnableInterrupts|macro|EnableInterrupts
DECL|K20_WDOG_t|typedef|} K20_WDOG_t;
DECL|WDOG_REFRESH_1|macro|WDOG_REFRESH_1
DECL|WDOG_REFRESH_2|macro|WDOG_REFRESH_2
DECL|WDOG_STCTRLH_t|typedef|} WDOG_STCTRLH_t;
DECL|WDOG_UNLOCK_1|macro|WDOG_UNLOCK_1
DECL|WDOG_UNLOCK_2|macro|WDOG_UNLOCK_2
DECL|_K20WDOG_H_|macro|_K20WDOG_H_
DECL|allowupdate|member|uint8_t allowupdate : 1 __packed;
DECL|bytesel|member|uint8_t bytesel : 2 __packed;
DECL|clksrc|member|uint8_t clksrc : 1 __packed;
DECL|dbgen|member|uint8_t dbgen : 1 __packed;
DECL|disestwdog|member|uint8_t disestwdog : 1 __packed;
DECL|field|member|} field;
DECL|irqrsten|member|uint8_t irqrsten : 1 __packed;
DECL|presc|member|uint16_t presc; /* 0x16 */
DECL|refresh|member|uint16_t refresh; /* 0x0C */
DECL|res_15|member|uint8_t res_15 : 1 __packed;
DECL|res_8_9|member|uint8_t res_8_9 : 2 __packed;
DECL|rstcnt|member|uint16_t rstcnt; /* 0x14 */
DECL|stctrlh|member|WDOG_STCTRLH_t stctrlh; /* 0x00 */
DECL|stctrll|member|uint16_t stctrll; /* 0x02 */
DECL|stopen|member|uint8_t stopen : 1 __packed;
DECL|testsel|member|uint8_t testsel : 1 __packed;
DECL|testwdog|member|uint8_t testwdog : 1 __packed;
DECL|tmrouth|member|uint16_t tmrouth; /* 0x10 */
DECL|tmroutl|member|uint16_t tmroutl; /* 0x12 */
DECL|tovalh|member|uint16_t tovalh; /* 0x04 */
DECL|tovall|member|uint16_t tovall; /* 0x06 */
DECL|unlock|member|uint16_t unlock; /* 0x0E */
DECL|value|member|uint16_t value; /* reset= 0x01D3 */
DECL|waiten|member|uint8_t waiten : 1 __packed;
DECL|wdog_disable|function|static ALWAYS_INLINE void wdog_disable(K20_WDOG_t *wdog_p)
DECL|wdog_unlock|function|static ALWAYS_INLINE void wdog_unlock(K20_WDOG_t *wdog_p)
DECL|wdogen|member|uint8_t wdogen : 1 __packed;
DECL|winen|member|uint8_t winen : 1 __packed;
DECL|winh|member|uint16_t winh; /* 0x08 */
DECL|winl|member|uint16_t winl; /* 0x0A */
