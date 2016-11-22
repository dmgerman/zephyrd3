DECL|BufferSize|member|unsigned BufferSize;
DECL|Cnt|member|unsigned Cnt;
DECL|FORMAT_FLAG_ALTERNATE|macro|FORMAT_FLAG_ALTERNATE
DECL|FORMAT_FLAG_LEFT_JUSTIFY|macro|FORMAT_FLAG_LEFT_JUSTIFY
DECL|FORMAT_FLAG_PAD_ZERO|macro|FORMAT_FLAG_PAD_ZERO
DECL|FORMAT_FLAG_PRINT_SIGN|macro|FORMAT_FLAG_PRINT_SIGN
DECL|RTTBufferIndex|member|unsigned RTTBufferIndex;
DECL|ReturnValue|member|int ReturnValue;
DECL|SEGGER_RTT_PRINTF_BUFFER_SIZE|macro|SEGGER_RTT_PRINTF_BUFFER_SIZE
DECL|SEGGER_RTT_PRINTF_DESC|typedef|} SEGGER_RTT_PRINTF_DESC;
DECL|SEGGER_RTT_printf|function|int SEGGER_RTT_printf(unsigned BufferIndex, const char * sFormat, ...) {
DECL|SEGGER_RTT_vprintf|function|int SEGGER_RTT_vprintf(unsigned BufferIndex, const char * sFormat, va_list * pParamList) {
DECL|_PrintInt|function|static void _PrintInt(SEGGER_RTT_PRINTF_DESC * pBufferDesc, int v, unsigned Base, unsigned NumDigits, unsigned FieldWidth, unsigned FormatFlags) {
DECL|_PrintUnsigned|function|static void _PrintUnsigned(SEGGER_RTT_PRINTF_DESC * pBufferDesc, unsigned v, unsigned Base, unsigned NumDigits, unsigned FieldWidth, unsigned FormatFlags) {
DECL|_StoreChar|function|static void _StoreChar(SEGGER_RTT_PRINTF_DESC * p, char c) {
DECL|pBuffer|member|char* pBuffer;
