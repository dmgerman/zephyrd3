DECL|SPI|macro|SPI
DECL|disk_initialize|function|DSTATUS disk_initialize (BYTE pdrv/* Physical drive nmuber to identify the drive */ )
DECL|disk_ioctl|function|DRESULT disk_ioctl (BYTE pdrv,/* Physical drive nmuber (0..) */ BYTE cmd,/* Control code */ void *buff/* Buffer to send/receive control data */ )
DECL|disk_read|function|DRESULT disk_read (BYTE pdrv,/* Physical drive nmuber to identify the drive */ BYTE *buff,/* Data buffer to store read data */ DWORD sector,/* Sector address in LBA */ UINT count/* Number of sectors to read */
DECL|disk_status|function|DSTATUS disk_status (BYTE pdrv/* Physical drive nmuber to identify the drive */ )
DECL|disk_write|function|DRESULT disk_write (BYTE pdrv,/* Physical drive nmuber to identify the drive */ const BYTE *buff,/* Data to be written */ DWORD sector,/* Sector address in LBA */ UINT count/* Number of sectors to write */
