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
DECL|ehdrLoad|function|static int ehdrLoad(int fd /* file descriptor of file from which to read */)
DECL|ehdr|variable|ehdr
DECL|headerAbsoluteSymbolsDump|function|void headerAbsoluteSymbolsDump(int fd, /* file descriptor of file from which to read */ FILE *fp, /* file pointer to which to write */ Elf32_Off symTblOffset, /* symbol table offset */ Elf32_Word symTblSize, /* size of the symbol table */ char *pStringTable /* ptr to the string table */
DECL|headerPostscriptDump|function|void headerPostscriptDump(FILE *fp /* file pointer to which to write */ )
DECL|headerPreambleDump|function|void headerPreambleDump(FILE *fp, /* file pointer to which to write */char *filename /* name of the output file */ )
DECL|main|function|int main(int argc, char *argv[])
DECL|postscript|variable|postscript
DECL|preamble1|variable|preamble1
DECL|preamble2|variable|preamble2
DECL|shdrsLoad|function|int shdrsLoad(int fd /* file descriptor of file from which to read */ )
DECL|shdr|variable|shdr
DECL|strTblFind|function|int strTblFind(unsigned *pStrTblIx /* ptr to string table's index */ )
DECL|strTblLoad|function|int strTblLoad(int fd, /* file descriptor of file from which to read */ unsigned strTblIx, /* string table's index */ char **ppStringTable /* ptr to ptr to string table */ )
DECL|swabElfHdr|function|static void swabElfHdr(Elf32_Ehdr *pHdrToSwab)
DECL|swabElfSectionHdr|function|static void swabElfSectionHdr(Elf32_Shdr *pHdrToSwab)
DECL|swabElfSym|function|static void swabElfSym(Elf32_Sym *pHdrToSwab)
DECL|swabRequired|variable|swabRequired
DECL|symTblFind|function|int symTblFind(unsigned *pSymTblOffset, /* ptr to symbol table offset */ unsigned *pSymTblSize /* ptr to symbol table size */ )
DECL|usage|variable|usage
