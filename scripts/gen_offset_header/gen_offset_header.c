DECL|DBG_PRINT|macro|DBG_PRINT
DECL|DBG_PRINT|macro|DBG_PRINT
DECL|DEBUG|macro|DEBUG
DECL|OPEN_FLAGS|macro|OPEN_FLAGS
DECL|OPEN_FLAGS|macro|OPEN_FLAGS
DECL|STRUCT_OFF_SUFFIX|macro|STRUCT_OFF_SUFFIX
DECL|STRUCT_SIZ_SUFFIX|macro|STRUCT_SIZ_SUFFIX
DECL|SWAB_Elf32_Addr|macro|SWAB_Elf32_Addr
DECL|SWAB_Elf32_Half|macro|SWAB_Elf32_Half
DECL|SWAB_Elf32_Off|macro|SWAB_Elf32_Off
DECL|SWAB_Elf32_Sword|macro|SWAB_Elf32_Sword
DECL|SWAB_Elf32_Word|macro|SWAB_Elf32_Word
DECL|ehdrLoad|function|static int ehdrLoad(int fd)
DECL|ehdr|variable|ehdr
DECL|headerAbsoluteSymbolsDump|function|static void headerAbsoluteSymbolsDump(int fd, FILE *fp, Elf32_Off symTblOffset,Elf32_Word symTblSize, char *pStringTable)
DECL|headerPostscriptDump|function|static void headerPostscriptDump(FILE *fp)
DECL|headerPreambleDump|function|static void headerPreambleDump(FILE *fp, char *filename)
DECL|main|function|int main(int argc, char *argv[])
DECL|postscript|variable|postscript
DECL|preamble1|variable|preamble1
DECL|preamble2|variable|preamble2
DECL|shdrsLoad|function|static int shdrsLoad(int fd)
DECL|shdr|variable|shdr
DECL|strTblFind|function|static int strTblFind(unsigned *pStrTblIx)
DECL|strTblLoad|function|static int strTblLoad(int fd, unsigned strTblIx, char **ppStringTable)
DECL|swabElfHdr|function|static void swabElfHdr(Elf32_Ehdr *pHdrToSwab)
DECL|swabElfSectionHdr|function|static void swabElfSectionHdr(Elf32_Shdr *pHdrToSwab)
DECL|swabElfSym|function|static void swabElfSym(Elf32_Sym *pHdrToSwab)
DECL|swabRequired|variable|swabRequired
DECL|symTblFind|function|static int symTblFind(unsigned *pSymTblOffset, unsigned *pSymTblSize)
DECL|usage|variable|usage
