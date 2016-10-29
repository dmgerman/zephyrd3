DECL|FIBER2_PRIORITY|macro|FIBER2_PRIORITY
DECL|FIBER2_STACKSIZE|macro|FIBER2_STACKSIZE
DECL|FIBER_PRIORITY|macro|FIBER_PRIORITY
DECL|FIBER_STACKSIZE|macro|FIBER_STACKSIZE
DECL|LONG_TIMEOUT|macro|LONG_TIMEOUT
DECL|MID_TIMEOUT|macro|MID_TIMEOUT
DECL|SHORT_TIMEOUT|macro|SHORT_TIMEOUT
DECL|SIX_SECONDS|macro|SIX_SECONDS
DECL|TWO_SECONDS|macro|TWO_SECONDS
DECL|basicTimerWait|function|int basicTimerWait(timer_start_func startRtn, timer_test_func testRtn, struct nano_timer *pTimer, void *pTimerData, int ticks)
DECL|busyWaitTimers|function|int busyWaitTimers(timer_test_func testRtn)
DECL|fiber2Entry|function|static void fiber2Entry(int arg1, int arg2)
DECL|fiber2Stack|variable|fiber2Stack
DECL|fiberDetectedError|variable|fiberDetectedError
DECL|fiberEntry|function|static void fiberEntry(int arg1, int arg2)
DECL|fiberStack|variable|fiberStack
DECL|initNanoObjects|function|void initNanoObjects(void)
DECL|longTimerData|variable|longTimerData
DECL|longTimer|variable|longTimer
DECL|main|function|void main(void)
DECL|midTimerData|variable|midTimerData
DECL|midTimer|variable|midTimer
DECL|shortTimerData|variable|shortTimerData
DECL|shortTimer|variable|shortTimer
DECL|startTimers|function|void startTimers(timer_start_func startRtn)
DECL|stopTimers|function|int stopTimers(timer_stop_func stopRtn, timer_test_func testRtn)
DECL|sys_cycle_get_32Test|function|int sys_cycle_get_32Test(void)
DECL|timerData|variable|timerData
DECL|timer_start_func|typedef|typedef void (*timer_start_func)(struct nano_timer *, int);
DECL|timer_stop_func|typedef|typedef void (*timer_stop_func)(struct nano_timer *);
DECL|timer_test_func|typedef|typedef void* (*timer_test_func)(struct nano_timer *, int32_t);
DECL|timer|variable|timer
DECL|wakeFiber|variable|wakeFiber
DECL|wakeTask|variable|wakeTask
