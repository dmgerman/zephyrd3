DECL|IntDefaultHandler|function|IntDefaultHandler(void)
DECL|IntDisable|function|IntDisable(unsigned long ulInterrupt)
DECL|IntEnable|function|IntEnable(unsigned long ulInterrupt)
DECL|IntMasterDisable|function|IntMasterDisable(void)
DECL|IntMasterEnable|function|IntMasterEnable(void)
DECL|IntPendClear|function|IntPendClear(unsigned long ulInterrupt)
DECL|IntPendSet|function|IntPendSet(unsigned long ulInterrupt)
DECL|IntPriorityGet|function|IntPriorityGet(unsigned long ulInterrupt)
DECL|IntPriorityGroupingGet|function|IntPriorityGroupingGet(void)
DECL|IntPriorityGroupingSet|function|IntPriorityGroupingSet(unsigned long ulBits)
DECL|IntPriorityMaskGet|function|IntPriorityMaskGet(void)
DECL|IntPriorityMaskSet|function|IntPriorityMaskSet(unsigned long ulPriorityMask)
DECL|IntPrioritySet|function|IntPrioritySet(unsigned long ulInterrupt, unsigned char ucPriority)
DECL|IntRegister|function|IntRegister(unsigned long ulInterrupt, void (*pfnHandler)(void))
DECL|IntUnregister|function|IntUnregister(unsigned long ulInterrupt)
DECL|IntVTableBaseSet|function|IntVTableBaseSet(unsigned long ulVtableBase)
DECL|g_pulDisRegs|variable|g_pulDisRegs
DECL|g_pulEnRegs|variable|g_pulEnRegs
DECL|g_pulPendRegs|variable|g_pulPendRegs
DECL|g_pulPriority|variable|g_pulPriority
DECL|g_pulRegs|variable|g_pulRegs
DECL|g_pulUnpendRegs|variable|g_pulUnpendRegs
