DECL|disk_initialize|function|DSTATUS disk_initialize(BYTE pdrv)
DECL|disk_ioctl|function|DRESULT disk_ioctl(BYTE pdrv, BYTE cmd, void *buff)
DECL|disk_read|function|DRESULT disk_read(BYTE pdrv, BYTE *buff, DWORD sector, UINT count)
DECL|disk_status|function|DSTATUS disk_status(BYTE pdrv)
DECL|disk_write|function|DRESULT disk_write(BYTE pdrv, const BYTE *buff, DWORD sector, UINT count)
DECL|pdrv_str|variable|pdrv_str
