DECL|PHY_EnableLoopback|function|status_t PHY_EnableLoopback(ENET_Type *base, uint32_t phyAddr, phy_loop_t mode, bool enable)
DECL|PHY_GetLinkSpeedDuplex|function|status_t PHY_GetLinkSpeedDuplex(ENET_Type *base, uint32_t phyAddr, phy_speed_t *speed, phy_duplex_t *duplex)
DECL|PHY_GetLinkStatus|function|status_t PHY_GetLinkStatus(ENET_Type *base, uint32_t phyAddr, bool *status)
DECL|PHY_Init|function|status_t PHY_Init(ENET_Type *base, uint32_t phyAddr, uint32_t srcClock_Hz)
DECL|PHY_Read|function|status_t PHY_Read(ENET_Type *base, uint32_t phyAddr, uint32_t phyReg, uint32_t *dataPtr)
DECL|PHY_TIMEOUT_COUNT|macro|PHY_TIMEOUT_COUNT
DECL|PHY_Write|function|status_t PHY_Write(ENET_Type *base, uint32_t phyAddr, uint32_t phyReg, uint32_t data)
