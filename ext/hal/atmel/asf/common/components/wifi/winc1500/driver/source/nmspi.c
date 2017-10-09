DECL|CMD_DMA_EXT_READ|macro|CMD_DMA_EXT_READ
DECL|CMD_DMA_EXT_READ|macro|CMD_DMA_EXT_READ
DECL|CMD_DMA_EXT_WRITE|macro|CMD_DMA_EXT_WRITE
DECL|CMD_DMA_EXT_WRITE|macro|CMD_DMA_EXT_WRITE
DECL|CMD_DMA_READ|macro|CMD_DMA_READ
DECL|CMD_DMA_READ|macro|CMD_DMA_READ
DECL|CMD_DMA_WRITE|macro|CMD_DMA_WRITE
DECL|CMD_DMA_WRITE|macro|CMD_DMA_WRITE
DECL|CMD_INTERNAL_READ|macro|CMD_INTERNAL_READ
DECL|CMD_INTERNAL_READ|macro|CMD_INTERNAL_READ
DECL|CMD_INTERNAL_WRITE|macro|CMD_INTERNAL_WRITE
DECL|CMD_INTERNAL_WRITE|macro|CMD_INTERNAL_WRITE
DECL|CMD_REPEAT|macro|CMD_REPEAT
DECL|CMD_REPEAT|macro|CMD_REPEAT
DECL|CMD_RESET|macro|CMD_RESET
DECL|CMD_RESET|macro|CMD_RESET
DECL|CMD_SINGLE_READ|macro|CMD_SINGLE_READ
DECL|CMD_SINGLE_READ|macro|CMD_SINGLE_READ
DECL|CMD_SINGLE_WRITE|macro|CMD_SINGLE_WRITE
DECL|CMD_SINGLE_WRITE|macro|CMD_SINGLE_WRITE
DECL|CMD_TERMINATE|macro|CMD_TERMINATE
DECL|CMD_TERMINATE|macro|CMD_TERMINATE
DECL|DATA_PKT_SZ_1K|macro|DATA_PKT_SZ_1K
DECL|DATA_PKT_SZ_1K|macro|DATA_PKT_SZ_1K
DECL|DATA_PKT_SZ_256|macro|DATA_PKT_SZ_256
DECL|DATA_PKT_SZ_256|macro|DATA_PKT_SZ_256
DECL|DATA_PKT_SZ_4K|macro|DATA_PKT_SZ_4K
DECL|DATA_PKT_SZ_4K|macro|DATA_PKT_SZ_4K
DECL|DATA_PKT_SZ_512|macro|DATA_PKT_SZ_512
DECL|DATA_PKT_SZ_512|macro|DATA_PKT_SZ_512
DECL|DATA_PKT_SZ_8K|macro|DATA_PKT_SZ_8K
DECL|DATA_PKT_SZ_8K|macro|DATA_PKT_SZ_8K
DECL|DATA_PKT_SZ|macro|DATA_PKT_SZ
DECL|DATA_PKT_SZ|macro|DATA_PKT_SZ
DECL|NMI_CHIPID|macro|NMI_CHIPID
DECL|NMI_INTR_ENABLE|macro|NMI_INTR_ENABLE
DECL|NMI_INTR_REG_BASE|macro|NMI_INTR_REG_BASE
DECL|NMI_PERIPH_REG_BASE|macro|NMI_PERIPH_REG_BASE
DECL|NMI_PIN_MUX_0|macro|NMI_PIN_MUX_0
DECL|NMI_SPI_CTL|macro|NMI_SPI_CTL
DECL|NMI_SPI_INTR_CTL|macro|NMI_SPI_INTR_CTL
DECL|NMI_SPI_MASTER_DMA_ADDR|macro|NMI_SPI_MASTER_DMA_ADDR
DECL|NMI_SPI_MASTER_DMA_COUNT|macro|NMI_SPI_MASTER_DMA_COUNT
DECL|NMI_SPI_MISC_CTRL|macro|NMI_SPI_MISC_CTRL
DECL|NMI_SPI_PROTOCOL_CONFIG|macro|NMI_SPI_PROTOCOL_CONFIG
DECL|NMI_SPI_PROTOCOL_OFFSET|macro|NMI_SPI_PROTOCOL_OFFSET
DECL|NMI_SPI_REG_BASE|macro|NMI_SPI_REG_BASE
DECL|NMI_SPI_SLAVE_DMA_ADDR|macro|NMI_SPI_SLAVE_DMA_ADDR
DECL|NMI_SPI_SLAVE_DMA_COUNT|macro|NMI_SPI_SLAVE_DMA_COUNT
DECL|NMI_SPI_TX_MODE|macro|NMI_SPI_TX_MODE
DECL|NUM_CRC_BYTES|macro|NUM_CRC_BYTES
DECL|NUM_DATA_BYTES|macro|NUM_DATA_BYTES
DECL|NUM_DATA_HDR_BYTES|macro|NUM_DATA_HDR_BYTES
DECL|NUM_DUMMY_BYTES|macro|NUM_DUMMY_BYTES
DECL|NUM_DUMMY_BYTES|macro|NUM_DUMMY_BYTES
DECL|NUM_RSP_BYTES|macro|NUM_RSP_BYTES
DECL|NUM_SKIP_BYTES|macro|NUM_SKIP_BYTES
DECL|N_FAIL|macro|N_FAIL
DECL|N_OK|macro|N_OK
DECL|N_RESET|macro|N_RESET
DECL|N_RETRY|macro|N_RETRY
DECL|SPI_BASE|macro|SPI_BASE
DECL|SPI_RESP_RETRY_COUNT|macro|SPI_RESP_RETRY_COUNT
DECL|SPI_RETRY_COUNT|macro|SPI_RETRY_COUNT
DECL|USE_OLD_SPI_SW|macro|USE_OLD_SPI_SW
DECL|crc7_byte|function|static uint8 crc7_byte(uint8 crc, uint8 data)
DECL|crc7_syndrome_table|variable|crc7_syndrome_table
DECL|crc7|function|static uint8 crc7(uint8 crc, const uint8 *buffer, uint32 len)
DECL|gu8Crc_off|variable|gu8Crc_off
DECL|nm_spi_deinit|function|sint8 nm_spi_deinit(void)
DECL|nm_spi_init|function|sint8 nm_spi_init(void)
DECL|nm_spi_read_block|function|sint8 nm_spi_read_block(uint32 u32Addr, uint8 *puBuf, uint16 u16Sz)
DECL|nm_spi_read_reg_with_ret|function|sint8 nm_spi_read_reg_with_ret(uint32 u32Addr, uint32* pu32RetVal)
DECL|nm_spi_read_reg|function|uint32 nm_spi_read_reg(uint32 u32Addr)
DECL|nm_spi_read|function|static sint8 nm_spi_read(uint32 addr, uint8 *buf, uint16 size)
DECL|nm_spi_reset|function|sint8 nm_spi_reset(void)
DECL|nm_spi_write_block|function|sint8 nm_spi_write_block(uint32 u32Addr, uint8 *puBuf, uint16 u16Sz)
DECL|nm_spi_write_reg|function|sint8 nm_spi_write_reg(uint32 u32Addr, uint32 u32Val)
DECL|nm_spi_write|function|static sint8 nm_spi_write(uint32 addr, uint8 *buf, uint16 size)
DECL|nmi_spi_read|function|static sint8 nmi_spi_read(uint8* b, uint16 sz)
DECL|nmi_spi_rw|function|static sint8 nmi_spi_rw(uint8 *bin,uint8* bout,uint16 sz)
DECL|nmi_spi_write|function|static sint8 nmi_spi_write(uint8* b, uint16 sz)
DECL|spi_cmd_complete|function|static int spi_cmd_complete(uint8_t cmd, uint32_t adr, uint8_t *b, uint32_t sz, uint8_t clockless)
DECL|spi_cmd_rsp|function|static sint8 spi_cmd_rsp(uint8 cmd)
DECL|spi_cmd|function|static sint8 spi_cmd(uint8 cmd, uint32 adr, uint32 u32data, uint32 sz,uint8 clockless)
DECL|spi_data_read|function|static sint8 spi_data_read(uint8 *b, uint16 sz,uint8 clockless)
DECL|spi_data_rsp|function|static sint8 spi_data_rsp(uint8 cmd)
DECL|spi_data_write|function|static sint8 spi_data_write(uint8 *b, uint16 sz)
DECL|spi_init_pkt_sz|function|static void spi_init_pkt_sz(void)
DECL|spi_read_reg|function|static sint8 spi_read_reg(uint32 addr, uint32 *u32data)
DECL|spi_write_reg|function|static sint8 spi_write_reg(uint32 addr, uint32 u32data)
