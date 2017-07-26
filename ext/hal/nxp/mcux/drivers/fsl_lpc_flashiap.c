DECL|FLASHIAP_BlankCheckSector|function|status_t FLASHIAP_BlankCheckSector(uint32_t startSector, uint32_t endSector)
DECL|FLASHIAP_Compare|function|status_t FLASHIAP_Compare(uint32_t dstAddr, uint32_t *srcAddr, uint32_t numOfBytes)
DECL|FLASHIAP_CopyRamToFlash|function|status_t FLASHIAP_CopyRamToFlash(uint32_t dstAddr, uint32_t *srcAddr, uint32_t numOfBytes, uint32_t systemCoreClock)
DECL|FLASHIAP_ErasePage|function|status_t FLASHIAP_ErasePage(uint32_t startPage, uint32_t endPage, uint32_t systemCoreClock)
DECL|FLASHIAP_EraseSector|function|status_t FLASHIAP_EraseSector(uint32_t startSector, uint32_t endSector, uint32_t systemCoreClock)
DECL|FLASHIAP_PrepareSectorForWrite|function|status_t FLASHIAP_PrepareSectorForWrite(uint32_t startSector, uint32_t endSector)
DECL|HZ_TO_KHZ_DIV|macro|HZ_TO_KHZ_DIV
DECL|translate_iap_status|function|static status_t translate_iap_status(uint32_t status)
