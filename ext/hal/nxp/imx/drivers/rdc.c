DECL|RDC_GetMrAccess|function|uint8_t RDC_GetMrAccess(RDC_Type * base, uint32_t mr, uint32_t *startAddr, uint32_t *endAddr)
DECL|RDC_GetViolationStatus|function|bool RDC_GetViolationStatus(RDC_Type * base, uint32_t mr, uint32_t *violationAddr, uint32_t *violationDomain)
DECL|RDC_SetMrAccess|function|void RDC_SetMrAccess(RDC_Type * base, uint32_t mr, uint32_t startAddr, uint32_t endAddr, uint8_t perm, bool enable, bool lock)
