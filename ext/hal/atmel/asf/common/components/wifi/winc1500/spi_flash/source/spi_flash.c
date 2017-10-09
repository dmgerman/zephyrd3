DECL|CORTUS_SHARE_MEM_BASE|macro|CORTUS_SHARE_MEM_BASE
DECL|DUMMY_REGISTER|macro|DUMMY_REGISTER
DECL|FLASH_BLOCK_SIZE|macro|FLASH_BLOCK_SIZE
DECL|FLASH_PAGE_SZ|macro|FLASH_PAGE_SZ
DECL|FLASH_SECTOR_SZ|macro|FLASH_SECTOR_SZ
DECL|GET_UINT32|macro|GET_UINT32
DECL|HOST_SHARE_MEM_BASE|macro|HOST_SHARE_MEM_BASE
DECL|NMI_SPI_FLASH_ADDR|macro|NMI_SPI_FLASH_ADDR
DECL|SPI_FLASH_BASE|macro|SPI_FLASH_BASE
DECL|SPI_FLASH_BUF1|macro|SPI_FLASH_BUF1
DECL|SPI_FLASH_BUF2|macro|SPI_FLASH_BUF2
DECL|SPI_FLASH_BUF_DIR|macro|SPI_FLASH_BUF_DIR
DECL|SPI_FLASH_CMD_CNT|macro|SPI_FLASH_CMD_CNT
DECL|SPI_FLASH_DATA_CNT|macro|SPI_FLASH_DATA_CNT
DECL|SPI_FLASH_DMA_ADDR|macro|SPI_FLASH_DMA_ADDR
DECL|SPI_FLASH_MODE|macro|SPI_FLASH_MODE
DECL|SPI_FLASH_MSB_CTL|macro|SPI_FLASH_MSB_CTL
DECL|SPI_FLASH_TR_DONE|macro|SPI_FLASH_TR_DONE
DECL|SPI_FLASH_TX_CTL|macro|SPI_FLASH_TX_CTL
DECL|TIMEOUT|macro|TIMEOUT
DECL|spi_flash_clear_security_flags|function|static sint8 spi_flash_clear_security_flags(void)
DECL|spi_flash_enable|function|sint8 spi_flash_enable(uint8 enable)
DECL|spi_flash_enter_low_power_mode|function|static void spi_flash_enter_low_power_mode(void) {
DECL|spi_flash_erase|function|sint8 spi_flash_erase(uint32 u32Offset, uint32 u32Sz)
DECL|spi_flash_gang_unblock|function|static sint8 spi_flash_gang_unblock(void)
DECL|spi_flash_get_size|function|uint32 spi_flash_get_size(void)
DECL|spi_flash_leave_low_power_mode|function|static void spi_flash_leave_low_power_mode(void) {
DECL|spi_flash_load_to_cortus_mem|function|static sint8 spi_flash_load_to_cortus_mem(uint32 u32MemAdr, uint32 u32FlashAdr, uint32 u32Sz)
DECL|spi_flash_page_program|function|static sint8 spi_flash_page_program(uint32 u32MemAdr, uint32 u32FlashAdr, uint32 u32Sz)
DECL|spi_flash_pp|function|static sint8 spi_flash_pp(uint32 u32Offset, uint8 *pu8Buf, uint16 u16Sz)
DECL|spi_flash_rdid|function|static uint32 spi_flash_rdid(void)
DECL|spi_flash_read_internal|function|static sint8 spi_flash_read_internal(uint8 *pu8Buf, uint32 u32Addr, uint32 u32Sz)
DECL|spi_flash_read_security_reg|function|static uint8 spi_flash_read_security_reg(void)
DECL|spi_flash_read_status_reg|function|static sint8 spi_flash_read_status_reg(uint8 * val)
DECL|spi_flash_read|function|sint8 spi_flash_read(uint8 *pu8Buf, uint32 u32offset, uint32 u32Sz)
DECL|spi_flash_sector_erase|function|static sint8 spi_flash_sector_erase(uint32 u32FlashAdr)
DECL|spi_flash_write_disable|function|static sint8 spi_flash_write_disable(void)
DECL|spi_flash_write_enable|function|static sint8 spi_flash_write_enable(void)
DECL|spi_flash_write|function|sint8 spi_flash_write(uint8* pu8Buf, uint32 u32Offset, uint32 u32Sz)
