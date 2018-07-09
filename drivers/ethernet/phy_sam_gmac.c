DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
DECL|PHY_AUTONEG_TIMEOUT_MS|macro|PHY_AUTONEG_TIMEOUT_MS
DECL|mdio_bus_disable|function|static void mdio_bus_disable(Gmac *gmac)
DECL|mdio_bus_enable|function|static void mdio_bus_enable(Gmac *gmac)
DECL|mdio_bus_send|function|static int mdio_bus_send(Gmac *gmac, u8_t phy_addr, u8_t reg_addr, u8_t rw, u16_t data)
DECL|mdio_bus_wait|function|static int mdio_bus_wait(Gmac *gmac)
DECL|phy_read|function|static int phy_read(const struct phy_sam_gmac_dev *phy, u8_t reg_addr, u32_t *value)
DECL|phy_sam_gmac_auto_negotiate|function|int phy_sam_gmac_auto_negotiate(const struct phy_sam_gmac_dev *phy,u32_t *status)
DECL|phy_sam_gmac_id_get|function|u32_t phy_sam_gmac_id_get(const struct phy_sam_gmac_dev *phy)
DECL|phy_sam_gmac_init|function|int phy_sam_gmac_init(const struct phy_sam_gmac_dev *phy)
DECL|phy_soft_reset|function|static int phy_soft_reset(const struct phy_sam_gmac_dev *phy)
DECL|phy_write|function|static int phy_write(const struct phy_sam_gmac_dev *phy, u8_t reg_addr, u32_t value)
