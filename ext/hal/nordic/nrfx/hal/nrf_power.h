DECL|NRF_POWER_EVENT_POFWARN|enumerator|NRF_POWER_EVENT_POFWARN = offsetof(NRF_POWER_Type, EVENTS_POFWARN ), /**< Power failure warning */
DECL|NRF_POWER_EVENT_SLEEPENTER|enumerator|NRF_POWER_EVENT_SLEEPENTER = offsetof(NRF_POWER_Type, EVENTS_SLEEPENTER ), /**< CPU entered WFI/WFE sleep */
DECL|NRF_POWER_EVENT_SLEEPEXIT|enumerator|NRF_POWER_EVENT_SLEEPEXIT = offsetof(NRF_POWER_Type, EVENTS_SLEEPEXIT ), /**< CPU exited WFI/WFE sleep */
DECL|NRF_POWER_EVENT_USBDETECTED|enumerator|NRF_POWER_EVENT_USBDETECTED = offsetof(NRF_POWER_Type, EVENTS_USBDETECTED), /**< Voltage supply detected on VBUS */
DECL|NRF_POWER_EVENT_USBPWRRDY|enumerator|NRF_POWER_EVENT_USBPWRRDY = offsetof(NRF_POWER_Type, EVENTS_USBPWRRDY ), /**< USB 3.3&nbsp;V supply ready */
DECL|NRF_POWER_EVENT_USBREMOVED|enumerator|NRF_POWER_EVENT_USBREMOVED = offsetof(NRF_POWER_Type, EVENTS_USBREMOVED ), /**< Voltage supply removed from VBUS */
DECL|NRF_POWER_HAS_RAMPOWER_REGS|macro|NRF_POWER_HAS_RAMPOWER_REGS
DECL|NRF_POWER_HAS_RAMPOWER_REGS|macro|NRF_POWER_HAS_RAMPOWER_REGS
DECL|NRF_POWER_HAS_RAMSTATUS|macro|NRF_POWER_HAS_RAMSTATUS
DECL|NRF_POWER_HAS_RAMSTATUS|macro|NRF_POWER_HAS_RAMSTATUS
DECL|NRF_POWER_HAS_SLEEPEVT|macro|NRF_POWER_HAS_SLEEPEVT
DECL|NRF_POWER_HAS_SLEEPEVT|macro|NRF_POWER_HAS_SLEEPEVT
DECL|NRF_POWER_HAS_USBREG|macro|NRF_POWER_HAS_USBREG
DECL|NRF_POWER_HAS_USBREG|macro|NRF_POWER_HAS_USBREG
DECL|NRF_POWER_HAS_VDDH|macro|NRF_POWER_HAS_VDDH
DECL|NRF_POWER_HAS_VDDH|macro|NRF_POWER_HAS_VDDH
DECL|NRF_POWER_H__|macro|NRF_POWER_H__
DECL|NRF_POWER_INT_POFWARN_MASK|enumerator|NRF_POWER_INT_POFWARN_MASK = POWER_INTENSET_POFWARN_Msk , /**< Write '1' to Enable interrupt for POFWARN event */
DECL|NRF_POWER_INT_SLEEPENTER_MASK|enumerator|NRF_POWER_INT_SLEEPENTER_MASK = POWER_INTENSET_SLEEPENTER_Msk , /**< Write '1' to Enable interrupt for SLEEPENTER event */
DECL|NRF_POWER_INT_SLEEPEXIT_MASK|enumerator|NRF_POWER_INT_SLEEPEXIT_MASK = POWER_INTENSET_SLEEPEXIT_Msk , /**< Write '1' to Enable interrupt for SLEEPEXIT event */
DECL|NRF_POWER_INT_USBDETECTED_MASK|enumerator|NRF_POWER_INT_USBDETECTED_MASK = POWER_INTENSET_USBDETECTED_Msk, /**< Write '1' to Enable interrupt for USBDETECTED event */
DECL|NRF_POWER_INT_USBPWRRDY_MASK|enumerator|NRF_POWER_INT_USBPWRRDY_MASK = POWER_INTENSET_USBPWRRDY_Msk , /**< Write '1' to Enable interrupt for USBPWRRDY event */
DECL|NRF_POWER_INT_USBREMOVED_MASK|enumerator|NRF_POWER_INT_USBREMOVED_MASK = POWER_INTENSET_USBREMOVED_Msk , /**< Write '1' to Enable interrupt for USBREMOVED event */
DECL|NRF_POWER_MAINREGSTATUS_HIGH|enumerator|NRF_POWER_MAINREGSTATUS_HIGH = POWER_MAINREGSTATUS_MAINREGSTATUS_High /**< High voltage mode. Voltage supplied on VDDH. */
DECL|NRF_POWER_MAINREGSTATUS_NORMAL|enumerator|NRF_POWER_MAINREGSTATUS_NORMAL = POWER_MAINREGSTATUS_MAINREGSTATUS_Normal, /**< Normal voltage mode. Voltage supplied on VDD. */
DECL|NRF_POWER_OFFRAM0_MASK|enumerator|NRF_POWER_OFFRAM0_MASK = 1U << NRF_POWER_OFFRAM0, /**< Keep retention on RAM block 0 when RAM block is switched off */
DECL|NRF_POWER_OFFRAM0|enumerator|NRF_POWER_OFFRAM0, /**< Keep retention on RAM block 0 when RAM block is switched off */
DECL|NRF_POWER_OFFRAM1_MASK|enumerator|NRF_POWER_OFFRAM1_MASK = 1U << NRF_POWER_OFFRAM1, /**< Keep retention on RAM block 1 when RAM block is switched off */
DECL|NRF_POWER_OFFRAM1|enumerator|NRF_POWER_OFFRAM1, /**< Keep retention on RAM block 1 when RAM block is switched off */
DECL|NRF_POWER_OFFRAM2_MASK|enumerator|NRF_POWER_OFFRAM2_MASK = 1U << NRF_POWER_OFFRAM2, /**< Keep retention on RAM block 2 when RAM block is switched off */
DECL|NRF_POWER_OFFRAM2|enumerator|NRF_POWER_OFFRAM2, /**< Keep retention on RAM block 2 when RAM block is switched off */
DECL|NRF_POWER_OFFRAM3_MASK|enumerator|NRF_POWER_OFFRAM3_MASK = 1U << NRF_POWER_OFFRAM3, /**< Keep retention on RAM block 3 when RAM block is switched off */
DECL|NRF_POWER_OFFRAM3|enumerator|NRF_POWER_OFFRAM3, /**< Keep retention on RAM block 3 when RAM block is switched off */
DECL|NRF_POWER_ONRAM0_MASK|enumerator|NRF_POWER_ONRAM0_MASK = 1U << NRF_POWER_ONRAM0, /**< Keep RAM block 0 on or off in system ON Mode */
DECL|NRF_POWER_ONRAM0|enumerator|NRF_POWER_ONRAM0, /**< Keep RAM block 0 on or off in system ON Mode */
DECL|NRF_POWER_ONRAM1_MASK|enumerator|NRF_POWER_ONRAM1_MASK = 1U << NRF_POWER_ONRAM1, /**< Keep RAM block 1 on or off in system ON Mode */
DECL|NRF_POWER_ONRAM1|enumerator|NRF_POWER_ONRAM1, /**< Keep RAM block 1 on or off in system ON Mode */
DECL|NRF_POWER_ONRAM2_MASK|enumerator|NRF_POWER_ONRAM2_MASK = 1U << NRF_POWER_ONRAM2, /**< Keep RAM block 2 on or off in system ON Mode */
DECL|NRF_POWER_ONRAM2|enumerator|NRF_POWER_ONRAM2, /**< Keep RAM block 2 on or off in system ON Mode */
DECL|NRF_POWER_ONRAM3_MASK|enumerator|NRF_POWER_ONRAM3_MASK = 1U << NRF_POWER_ONRAM3, /**< Keep RAM block 3 on or off in system ON Mode */
DECL|NRF_POWER_ONRAM3|enumerator|NRF_POWER_ONRAM3, /**< Keep RAM block 3 on or off in system ON Mode */
DECL|NRF_POWER_POFTHRVDDH_V27|enumerator|NRF_POWER_POFTHRVDDH_V27 = POWER_POFCON_THRESHOLDVDDH_V27, /**< Set threshold to 2.7&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V28|enumerator|NRF_POWER_POFTHRVDDH_V28 = POWER_POFCON_THRESHOLDVDDH_V28, /**< Set threshold to 2.8&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V29|enumerator|NRF_POWER_POFTHRVDDH_V29 = POWER_POFCON_THRESHOLDVDDH_V29, /**< Set threshold to 2.9&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V30|enumerator|NRF_POWER_POFTHRVDDH_V30 = POWER_POFCON_THRESHOLDVDDH_V30, /**< Set threshold to 3.0&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V31|enumerator|NRF_POWER_POFTHRVDDH_V31 = POWER_POFCON_THRESHOLDVDDH_V31, /**< Set threshold to 3.1&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V32|enumerator|NRF_POWER_POFTHRVDDH_V32 = POWER_POFCON_THRESHOLDVDDH_V32, /**< Set threshold to 3.2&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V33|enumerator|NRF_POWER_POFTHRVDDH_V33 = POWER_POFCON_THRESHOLDVDDH_V33, /**< Set threshold to 3.3&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V34|enumerator|NRF_POWER_POFTHRVDDH_V34 = POWER_POFCON_THRESHOLDVDDH_V34, /**< Set threshold to 3.4&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V35|enumerator|NRF_POWER_POFTHRVDDH_V35 = POWER_POFCON_THRESHOLDVDDH_V35, /**< Set threshold to 3.5&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V36|enumerator|NRF_POWER_POFTHRVDDH_V36 = POWER_POFCON_THRESHOLDVDDH_V36, /**< Set threshold to 3.6&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V37|enumerator|NRF_POWER_POFTHRVDDH_V37 = POWER_POFCON_THRESHOLDVDDH_V37, /**< Set threshold to 3.7&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V38|enumerator|NRF_POWER_POFTHRVDDH_V38 = POWER_POFCON_THRESHOLDVDDH_V38, /**< Set threshold to 3.8&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V39|enumerator|NRF_POWER_POFTHRVDDH_V39 = POWER_POFCON_THRESHOLDVDDH_V39, /**< Set threshold to 3.9&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V40|enumerator|NRF_POWER_POFTHRVDDH_V40 = POWER_POFCON_THRESHOLDVDDH_V40, /**< Set threshold to 4.0&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V41|enumerator|NRF_POWER_POFTHRVDDH_V41 = POWER_POFCON_THRESHOLDVDDH_V41, /**< Set threshold to 4.1&nbsp;V */
DECL|NRF_POWER_POFTHRVDDH_V42|enumerator|NRF_POWER_POFTHRVDDH_V42 = POWER_POFCON_THRESHOLDVDDH_V42, /**< Set threshold to 4.2&nbsp;V */
DECL|NRF_POWER_POFTHR_V17|enumerator|NRF_POWER_POFTHR_V17 = POWER_POFCON_THRESHOLD_V17, /**< Set threshold to 1.7&nbsp;V */
DECL|NRF_POWER_POFTHR_V18|enumerator|NRF_POWER_POFTHR_V18 = POWER_POFCON_THRESHOLD_V18, /**< Set threshold to 1.8&nbsp;V */
DECL|NRF_POWER_POFTHR_V19|enumerator|NRF_POWER_POFTHR_V19 = POWER_POFCON_THRESHOLD_V19, /**< Set threshold to 1.9&nbsp;V */
DECL|NRF_POWER_POFTHR_V20|enumerator|NRF_POWER_POFTHR_V20 = POWER_POFCON_THRESHOLD_V20, /**< Set threshold to 2.0&nbsp;V */
DECL|NRF_POWER_POFTHR_V21|enumerator|NRF_POWER_POFTHR_V21 = POWER_POFCON_THRESHOLD_V21, /**< Set threshold to 2.1&nbsp;V */
DECL|NRF_POWER_POFTHR_V22|enumerator|NRF_POWER_POFTHR_V22 = POWER_POFCON_THRESHOLD_V22, /**< Set threshold to 2.2&nbsp;V */
DECL|NRF_POWER_POFTHR_V23|enumerator|NRF_POWER_POFTHR_V23 = POWER_POFCON_THRESHOLD_V23, /**< Set threshold to 2.3&nbsp;V */
DECL|NRF_POWER_POFTHR_V24|enumerator|NRF_POWER_POFTHR_V24 = POWER_POFCON_THRESHOLD_V24, /**< Set threshold to 2.4&nbsp;V */
DECL|NRF_POWER_POFTHR_V25|enumerator|NRF_POWER_POFTHR_V25 = POWER_POFCON_THRESHOLD_V25, /**< Set threshold to 2.5&nbsp;V */
DECL|NRF_POWER_POFTHR_V26|enumerator|NRF_POWER_POFTHR_V26 = POWER_POFCON_THRESHOLD_V26, /**< Set threshold to 2.6&nbsp;V */
DECL|NRF_POWER_POFTHR_V27|enumerator|NRF_POWER_POFTHR_V27 = POWER_POFCON_THRESHOLD_V27, /**< Set threshold to 2.7&nbsp;V */
DECL|NRF_POWER_POFTHR_V28|enumerator|NRF_POWER_POFTHR_V28 = POWER_POFCON_THRESHOLD_V28, /**< Set threshold to 2.8&nbsp;V */
DECL|NRF_POWER_RAMBLOCK0_MASK|enumerator|NRF_POWER_RAMBLOCK0_MASK = POWER_RAMSTATUS_RAMBLOCK0_Msk,
DECL|NRF_POWER_RAMBLOCK0|enumerator|NRF_POWER_RAMBLOCK0 = POWER_RAMSTATUS_RAMBLOCK0_Pos,
DECL|NRF_POWER_RAMBLOCK1_MASK|enumerator|NRF_POWER_RAMBLOCK1_MASK = POWER_RAMSTATUS_RAMBLOCK1_Msk,
DECL|NRF_POWER_RAMBLOCK1|enumerator|NRF_POWER_RAMBLOCK1 = POWER_RAMSTATUS_RAMBLOCK1_Pos,
DECL|NRF_POWER_RAMBLOCK2_MASK|enumerator|NRF_POWER_RAMBLOCK2_MASK = POWER_RAMSTATUS_RAMBLOCK2_Msk,
DECL|NRF_POWER_RAMBLOCK2|enumerator|NRF_POWER_RAMBLOCK2 = POWER_RAMSTATUS_RAMBLOCK2_Pos,
DECL|NRF_POWER_RAMBLOCK3_MASK|enumerator|NRF_POWER_RAMBLOCK3_MASK = POWER_RAMSTATUS_RAMBLOCK3_Msk
DECL|NRF_POWER_RAMBLOCK3|enumerator|NRF_POWER_RAMBLOCK3 = POWER_RAMSTATUS_RAMBLOCK3_Pos
DECL|NRF_POWER_RAMPOWER_S0POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S0POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S0POWER ,
DECL|NRF_POWER_RAMPOWER_S0POWER|enumerator|NRF_POWER_RAMPOWER_S0POWER = POWER_RAM_POWER_S0POWER_Pos,
DECL|NRF_POWER_RAMPOWER_S0RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S0RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S0RETENTION ,
DECL|NRF_POWER_RAMPOWER_S0RETENTION|enumerator|NRF_POWER_RAMPOWER_S0RETENTION = POWER_RAM_POWER_S0RETENTION_Pos,
DECL|NRF_POWER_RAMPOWER_S10POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S10POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S10POWER,
DECL|NRF_POWER_RAMPOWER_S10POWER|enumerator|NRF_POWER_RAMPOWER_S10POWER, /**< Keep RAM section S10 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S10RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S10RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S10RETENTION,
DECL|NRF_POWER_RAMPOWER_S10RETENTION|enumerator|NRF_POWER_RAMPOWER_S10RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S11POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S11POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S11POWER,
DECL|NRF_POWER_RAMPOWER_S11POWER|enumerator|NRF_POWER_RAMPOWER_S11POWER, /**< Keep RAM section S11 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S11RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S11RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S11RETENTION,
DECL|NRF_POWER_RAMPOWER_S11RETENTION|enumerator|NRF_POWER_RAMPOWER_S11RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S12POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S12POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S12POWER,
DECL|NRF_POWER_RAMPOWER_S12POWER|enumerator|NRF_POWER_RAMPOWER_S12POWER, /**< Keep RAM section S12 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S12RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S12RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S12RETENTION,
DECL|NRF_POWER_RAMPOWER_S12RETENTION|enumerator|NRF_POWER_RAMPOWER_S12RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S13POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S13POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S13POWER,
DECL|NRF_POWER_RAMPOWER_S13POWER|enumerator|NRF_POWER_RAMPOWER_S13POWER, /**< Keep RAM section S13 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S13RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S13RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S13RETENTION,
DECL|NRF_POWER_RAMPOWER_S13RETENTION|enumerator|NRF_POWER_RAMPOWER_S13RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S14POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S14POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S14POWER,
DECL|NRF_POWER_RAMPOWER_S14POWER|enumerator|NRF_POWER_RAMPOWER_S14POWER, /**< Keep RAM section S14 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S14RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S14RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S14RETENTION,
DECL|NRF_POWER_RAMPOWER_S14RETENTION|enumerator|NRF_POWER_RAMPOWER_S14RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S15POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S15POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S15POWER,
DECL|NRF_POWER_RAMPOWER_S15POWER|enumerator|NRF_POWER_RAMPOWER_S15POWER, /**< Keep RAM section S15 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S15RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S15RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S15RETENTION,
DECL|NRF_POWER_RAMPOWER_S15RETENTION|enumerator|NRF_POWER_RAMPOWER_S15RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S1POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S1POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S1POWER ,
DECL|NRF_POWER_RAMPOWER_S1POWER|enumerator|NRF_POWER_RAMPOWER_S1POWER, /**< Keep RAM section S1 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S1RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S1RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S1RETENTION ,
DECL|NRF_POWER_RAMPOWER_S1RETENTION|enumerator|NRF_POWER_RAMPOWER_S1RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S2POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S2POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S2POWER ,
DECL|NRF_POWER_RAMPOWER_S2POWER|enumerator|NRF_POWER_RAMPOWER_S2POWER, /**< Keep RAM section S2 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S2RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S2RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S2RETENTION ,
DECL|NRF_POWER_RAMPOWER_S2RETENTION|enumerator|NRF_POWER_RAMPOWER_S2RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S3POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S3POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S3POWER ,
DECL|NRF_POWER_RAMPOWER_S3POWER|enumerator|NRF_POWER_RAMPOWER_S3POWER, /**< Keep RAM section S3 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S3RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S3RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S3RETENTION ,
DECL|NRF_POWER_RAMPOWER_S3RETENTION|enumerator|NRF_POWER_RAMPOWER_S3RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S4POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S4POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S4POWER ,
DECL|NRF_POWER_RAMPOWER_S4POWER|enumerator|NRF_POWER_RAMPOWER_S4POWER, /**< Keep RAM section S4 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S4RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S4RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S4RETENTION ,
DECL|NRF_POWER_RAMPOWER_S4RETENTION|enumerator|NRF_POWER_RAMPOWER_S4RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S5POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S5POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S5POWER ,
DECL|NRF_POWER_RAMPOWER_S5POWER|enumerator|NRF_POWER_RAMPOWER_S5POWER, /**< Keep RAM section S5 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S5RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S5RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S5RETENTION ,
DECL|NRF_POWER_RAMPOWER_S5RETENTION|enumerator|NRF_POWER_RAMPOWER_S5RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S6POWER|enumerator|NRF_POWER_RAMPOWER_S6POWER, /**< Keep RAM section S6 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S6RETENTION|enumerator|NRF_POWER_RAMPOWER_S6RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S7POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S7POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S7POWER ,
DECL|NRF_POWER_RAMPOWER_S7POWER|enumerator|NRF_POWER_RAMPOWER_S7POWER, /**< Keep RAM section S7 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S7RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S7RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S7RETENTION ,
DECL|NRF_POWER_RAMPOWER_S7RETENTION|enumerator|NRF_POWER_RAMPOWER_S7RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S8POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S8POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S8POWER ,
DECL|NRF_POWER_RAMPOWER_S8POWER|enumerator|NRF_POWER_RAMPOWER_S8POWER, /**< Keep RAM section S8 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S8RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S8RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S8RETENTION ,
DECL|NRF_POWER_RAMPOWER_S8RETENTION|enumerator|NRF_POWER_RAMPOWER_S8RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RAMPOWER_S9POWER_MASK|enumerator|NRF_POWER_RAMPOWER_S9POWER_MASK = 1UL << NRF_POWER_RAMPOWER_S9POWER ,
DECL|NRF_POWER_RAMPOWER_S9POWER|enumerator|NRF_POWER_RAMPOWER_S9POWER, /**< Keep RAM section S9 ON in System ON mode */
DECL|NRF_POWER_RAMPOWER_S9RETENTION_MASK|enumerator|NRF_POWER_RAMPOWER_S9RETENTION_MASK = 1UL << NRF_POWER_RAMPOWER_S9RETENTION ,
DECL|NRF_POWER_RAMPOWER_S9RETENTION|enumerator|NRF_POWER_RAMPOWER_S9RETENTION, /**< Keep section retention in OFF mode when section is OFF */
DECL|NRF_POWER_RESETREAS_DIF_MASK|enumerator|NRF_POWER_RESETREAS_DIF_MASK = POWER_RESETREAS_DIF_Msk , /*!< Bit mask of DIF field. */ //!< NRF_POWER_RESETREAS_DIF_MASK
DECL|NRF_POWER_RESETREAS_DOG_MASK|enumerator|NRF_POWER_RESETREAS_DOG_MASK = POWER_RESETREAS_DOG_Msk , /*!< Bit mask of DOG field. */ //!< NRF_POWER_RESETREAS_DOG_MASK
DECL|NRF_POWER_RESETREAS_LOCKUP_MASK|enumerator|NRF_POWER_RESETREAS_LOCKUP_MASK = POWER_RESETREAS_LOCKUP_Msk , /*!< Bit mask of LOCKUP field. */ //!< NRF_POWER_RESETREAS_LOCKUP_MASK
DECL|NRF_POWER_RESETREAS_LPCOMP_MASK|enumerator|NRF_POWER_RESETREAS_LPCOMP_MASK = POWER_RESETREAS_LPCOMP_Msk , /*!< Bit mask of LPCOMP field. */ //!< NRF_POWER_RESETREAS_LPCOMP_MASK
DECL|NRF_POWER_RESETREAS_NFC_MASK|enumerator|NRF_POWER_RESETREAS_NFC_MASK = POWER_RESETREAS_NFC_Msk , /*!< Bit mask of NFC field. */
DECL|NRF_POWER_RESETREAS_OFF_MASK|enumerator|NRF_POWER_RESETREAS_OFF_MASK = POWER_RESETREAS_OFF_Msk , /*!< Bit mask of OFF field. */ //!< NRF_POWER_RESETREAS_OFF_MASK
DECL|NRF_POWER_RESETREAS_RESETPIN_MASK|enumerator|NRF_POWER_RESETREAS_RESETPIN_MASK = POWER_RESETREAS_RESETPIN_Msk, /*!< Bit mask of RESETPIN field. *///!< NRF_POWER_RESETREAS_RESETPIN_MASK
DECL|NRF_POWER_RESETREAS_SREQ_MASK|enumerator|NRF_POWER_RESETREAS_SREQ_MASK = POWER_RESETREAS_SREQ_Msk , /*!< Bit mask of SREQ field. */ //!< NRF_POWER_RESETREAS_SREQ_MASK
DECL|NRF_POWER_RESETREAS_VBUS_MASK|enumerator|NRF_POWER_RESETREAS_VBUS_MASK = POWER_RESETREAS_VBUS_Msk , /*!< Bit mask of VBUS field. */
DECL|NRF_POWER_TASK_CONSTLAT|enumerator|NRF_POWER_TASK_CONSTLAT = offsetof(NRF_POWER_Type, TASKS_CONSTLAT), /**< Enable constant latency mode */
DECL|NRF_POWER_TASK_LOWPWR|enumerator|NRF_POWER_TASK_LOWPWR = offsetof(NRF_POWER_Type, TASKS_LOWPWR ), /**< Enable low power mode (variable latency) */
DECL|NRF_POWER_USBREGSTATUS_OUTPUTRDY_MASK|enumerator|NRF_POWER_USBREGSTATUS_OUTPUTRDY_MASK = POWER_USBREGSTATUS_OUTPUTRDY_Msk /**< USB 3.3&nbsp;V supply ready */
DECL|NRF_POWER_USBREGSTATUS_VBUSDETECT_MASK|enumerator|NRF_POWER_USBREGSTATUS_VBUSDETECT_MASK = POWER_USBREGSTATUS_VBUSDETECT_Msk, /**< USB detected or removed */
DECL|nrf_power_dcdcen_get|function|__STATIC_INLINE bool nrf_power_dcdcen_get(void)
DECL|nrf_power_dcdcen_set|function|__STATIC_INLINE void nrf_power_dcdcen_set(bool enable)
DECL|nrf_power_dcdcen_vddh_get|function|bool nrf_power_dcdcen_vddh_get(void)
DECL|nrf_power_dcdcen_vddh_set|function|__STATIC_INLINE void nrf_power_dcdcen_vddh_set(bool enable)
DECL|nrf_power_event_address_get|function|uint32_t nrf_power_event_address_get(nrf_power_event_t event)
DECL|nrf_power_event_check|function|bool nrf_power_event_check(nrf_power_event_t event)
DECL|nrf_power_event_clear|function|void nrf_power_event_clear(nrf_power_event_t event)
DECL|nrf_power_event_get_and_clear|function|bool nrf_power_event_get_and_clear(nrf_power_event_t event)
DECL|nrf_power_event_t|typedef|}nrf_power_event_t; /*lint -restore */
DECL|nrf_power_gpregret2_get|function|__STATIC_INLINE uint8_t nrf_power_gpregret2_get(void)
DECL|nrf_power_gpregret2_set|function|void nrf_power_gpregret2_set(uint8_t val)
DECL|nrf_power_gpregret_get|function|__STATIC_INLINE uint8_t nrf_power_gpregret_get(void)
DECL|nrf_power_gpregret_set|function|__STATIC_INLINE void nrf_power_gpregret_set(uint8_t val)
DECL|nrf_power_int_disable|function|void nrf_power_int_disable(uint32_t int_mask)
DECL|nrf_power_int_enable_check|function|bool nrf_power_int_enable_check(uint32_t int_mask)
DECL|nrf_power_int_enable_get|function|uint32_t nrf_power_int_enable_get(void)
DECL|nrf_power_int_enable|function|void nrf_power_int_enable(uint32_t int_mask)
DECL|nrf_power_int_mask_t|typedef|}nrf_power_int_mask_t;
DECL|nrf_power_mainregstatus_get|function|nrf_power_mainregstatus_t nrf_power_mainregstatus_get(void)
DECL|nrf_power_mainregstatus_t|typedef|}nrf_power_mainregstatus_t;
DECL|nrf_power_onoffram_mask_t|typedef|}nrf_power_onoffram_mask_t;
DECL|nrf_power_onoffram_t|typedef|}nrf_power_onoffram_t;
DECL|nrf_power_pof_thr_t|typedef|}nrf_power_pof_thr_t;
DECL|nrf_power_pof_thrvddh_t|typedef|}nrf_power_pof_thrvddh_t;
DECL|nrf_power_pofcon_get|function|__STATIC_INLINE nrf_power_pof_thr_t nrf_power_pofcon_get(bool * p_enabled)
DECL|nrf_power_pofcon_set|function|__STATIC_INLINE void nrf_power_pofcon_set(bool enabled, nrf_power_pof_thr_t thr)
DECL|nrf_power_pofcon_vddh_get|function|__STATIC_INLINE nrf_power_pof_thrvddh_t nrf_power_pofcon_vddh_get(void)
DECL|nrf_power_pofcon_vddh_set|function|__STATIC_INLINE void nrf_power_pofcon_vddh_set(nrf_power_pof_thrvddh_t thr)
DECL|nrf_power_ramblock_mask_t|typedef|}nrf_power_ramblock_mask_t;
DECL|nrf_power_ramblock_t|typedef|}nrf_power_ramblock_t;
DECL|nrf_power_rampower_mask_get|function|__STATIC_INLINE uint32_t nrf_power_rampower_mask_get(uint8_t block)
DECL|nrf_power_rampower_mask_off|function|__STATIC_INLINE void nrf_power_rampower_mask_off(uint8_t block, uint32_t section_mask)
DECL|nrf_power_rampower_mask_on|function|__STATIC_INLINE void nrf_power_rampower_mask_on(uint8_t block, uint32_t section_mask)
DECL|nrf_power_rampower_mask_t|typedef|}nrf_power_rampower_mask_t;
DECL|nrf_power_rampower_t|typedef|}nrf_power_rampower_t;
DECL|nrf_power_ramstatus_get|function|__STATIC_INLINE uint32_t nrf_power_ramstatus_get(void)
DECL|nrf_power_regptr_get_c|function|__STATIC_INLINE volatile const uint32_t * nrf_power_regptr_get_c( uint32_t offset)
DECL|nrf_power_regptr_get|function|__STATIC_INLINE volatile uint32_t * nrf_power_regptr_get(uint32_t offset)
DECL|nrf_power_resetreas_clear|function|__STATIC_INLINE void nrf_power_resetreas_clear(uint32_t mask)
DECL|nrf_power_resetreas_get|function|__STATIC_INLINE uint32_t nrf_power_resetreas_get(void)
DECL|nrf_power_resetreas_mask_t|typedef|}nrf_power_resetreas_mask_t;
DECL|nrf_power_system_off|function|__STATIC_INLINE void nrf_power_system_off(void)
DECL|nrf_power_task_address_get|function|uint32_t nrf_power_task_address_get(nrf_power_task_t task)
DECL|nrf_power_task_trigger|function|void nrf_power_task_trigger(nrf_power_task_t task)
DECL|nrf_power_task_t|typedef|}nrf_power_task_t; /*lint -restore */
DECL|nrf_power_usbregstatus_get|function|__STATIC_INLINE uint32_t nrf_power_usbregstatus_get(void)
DECL|nrf_power_usbregstatus_mask_t|typedef|}nrf_power_usbregstatus_mask_t;
DECL|nrf_power_usbregstatus_outrdy_get|function|__STATIC_INLINE bool nrf_power_usbregstatus_outrdy_get(void)
DECL|nrf_power_usbregstatus_vbusdet_get|function|__STATIC_INLINE bool nrf_power_usbregstatus_vbusdet_get(void)
