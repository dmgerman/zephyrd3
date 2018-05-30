DECL|DPORT_APPCPU_CLKGATE_EN|macro|DPORT_APPCPU_CLKGATE_EN
DECL|DPORT_APPCPU_CTRL_A|macro|DPORT_APPCPU_CTRL_A
DECL|DPORT_APPCPU_CTRL_B|macro|DPORT_APPCPU_CTRL_B
DECL|DPORT_APPCPU_CTRL_C|macro|DPORT_APPCPU_CTRL_C
DECL|DPORT_APPCPU_RESETTING|macro|DPORT_APPCPU_RESETTING
DECL|DPORT_APPCPU_RUNSTALL|macro|DPORT_APPCPU_RUNSTALL
DECL|DPORT_BASE|macro|DPORT_BASE
DECL|RTC_CNTL_BASE|macro|RTC_CNTL_BASE
DECL|RTC_CNTL_OPTIONS0|macro|RTC_CNTL_OPTIONS0
DECL|RTC_CNTL_SW_CPU_STALL|macro|RTC_CNTL_SW_CPU_STALL
DECL|RTC_CNTL_SW_STALL_APPCPU_C0|macro|RTC_CNTL_SW_STALL_APPCPU_C0
DECL|RTC_CNTL_SW_STALL_APPCPU_C1|macro|RTC_CNTL_SW_STALL_APPCPU_C1
DECL|_REG|macro|_REG
DECL|_arch_start_cpu|function|void _arch_start_cpu(int cpu_num, k_thread_stack_t *stack, int sz, void (*fn)(int, void *), void *arg)
DECL|alive|member|volatile int *alive;
DECL|appcpu_entry1|function|static void appcpu_entry1(void)
DECL|appcpu_entry2|function|static void appcpu_entry2(void)
DECL|appcpu_start|function|static void appcpu_start(void)
DECL|appcpu_top|variable|appcpu_top
DECL|arg|member|void *arg;
DECL|cpustart_rec|struct|struct cpustart_rec {
DECL|cpu|member|int cpu;
DECL|fn|member|void (*fn)(int, void *);
DECL|loglock|variable|loglock
DECL|smp_log|function|void smp_log(const char *msg)
DECL|stack_top|member|char *stack_top;
DECL|start_rec|variable|start_rec
DECL|vecbase|member|int vecbase;
