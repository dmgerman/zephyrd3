DECL|EI_ABIVERSION|macro|EI_ABIVERSION
DECL|EI_CLASS|macro|EI_CLASS
DECL|EI_DATA|macro|EI_DATA
DECL|EI_MAG0|macro|EI_MAG0
DECL|EI_MAG1|macro|EI_MAG1
DECL|EI_MAG2|macro|EI_MAG2
DECL|EI_MAG3|macro|EI_MAG3
DECL|EI_NIDENT|macro|EI_NIDENT
DECL|EI_NIDENT|macro|EI_NIDENT
DECL|EI_OSABI|macro|EI_OSABI
DECL|EI_PAD|macro|EI_PAD
DECL|EI_VERSION|macro|EI_VERSION
DECL|ELF32_R_SYM|macro|ELF32_R_SYM
DECL|ELF32_R_TYPE|macro|ELF32_R_TYPE
DECL|ELFCLASS32|macro|ELFCLASS32
DECL|ELFCLASS64|macro|ELFCLASS64
DECL|ELFCLASSNONE|macro|ELFCLASSNONE
DECL|ELFDATA2LSB|macro|ELFDATA2LSB
DECL|ELFDATA2MSB|macro|ELFDATA2MSB
DECL|ELFDATANONE|macro|ELFDATANONE
DECL|ELFMAG0|macro|ELFMAG0
DECL|ELFMAG1|macro|ELFMAG1
DECL|ELFMAG2|macro|ELFMAG2
DECL|ELFMAG3|macro|ELFMAG3
DECL|ELFOSABI_NONE|macro|ELFOSABI_NONE
DECL|ELF_LOADER_H_|macro|ELF_LOADER_H_
DECL|EM_ARM|macro|EM_ARM
DECL|ET_CORE|macro|ET_CORE
DECL|ET_DYN|macro|ET_DYN
DECL|ET_EXEC|macro|ET_EXEC
DECL|ET_HIOS|macro|ET_HIOS
DECL|ET_HIPROC|macro|ET_HIPROC
DECL|ET_LOOS|macro|ET_LOOS
DECL|ET_LOPROC|macro|ET_LOPROC
DECL|ET_NONE|macro|ET_NONE
DECL|ET_REL|macro|ET_REL
DECL|EV_CURRENT|macro|EV_CURRENT
DECL|Elf32_Addr|typedef|typedef uintptr_t Elf32_Addr;
DECL|Elf32_Ehdr|typedef|} Elf32_Ehdr;
DECL|Elf32_Half|typedef|typedef unsigned short Elf32_Half;
DECL|Elf32_Off|typedef|typedef unsigned int Elf32_Off;
DECL|Elf32_Rela|typedef|} Elf32_Rela;
DECL|Elf32_Rel|typedef|} Elf32_Rel;
DECL|Elf32_Shdr|typedef|} Elf32_Shdr;
DECL|Elf32_Sword|typedef|typedef signed int Elf32_Sword;
DECL|Elf32_Sym|typedef|} Elf32_Sym;
DECL|Elf32_Word|typedef|typedef unsigned int Elf32_Word;
DECL|R_ARM_ABS32|macro|R_ARM_ABS32
DECL|R_ARM_GLOB_DAT|macro|R_ARM_GLOB_DAT
DECL|R_ARM_JUMP_SLOT|macro|R_ARM_JUMP_SLOT
DECL|R_ARM_RELATIVE|macro|R_ARM_RELATIVE
DECL|SHF_ALLOC|macro|SHF_ALLOC
DECL|SHF_EXECINSTR|macro|SHF_EXECINSTR
DECL|SHF_MASKPROC|macro|SHF_MASKPROC
DECL|SHF_WRITE|macro|SHF_WRITE
DECL|SHT_DYNAMIC|macro|SHT_DYNAMIC
DECL|SHT_DYNSYM|macro|SHT_DYNSYM
DECL|SHT_FINI_ARRAY|macro|SHT_FINI_ARRAY
DECL|SHT_GROUP|macro|SHT_GROUP
DECL|SHT_HASH|macro|SHT_HASH
DECL|SHT_HIOS|macro|SHT_HIOS
DECL|SHT_HIPROC|macro|SHT_HIPROC
DECL|SHT_HIUSER|macro|SHT_HIUSER
DECL|SHT_INIT_ARRAY|macro|SHT_INIT_ARRAY
DECL|SHT_LOOS|macro|SHT_LOOS
DECL|SHT_LOPROC|macro|SHT_LOPROC
DECL|SHT_LOUSER|macro|SHT_LOUSER
DECL|SHT_NOBITS|macro|SHT_NOBITS
DECL|SHT_NOTE|macro|SHT_NOTE
DECL|SHT_NULL|macro|SHT_NULL
DECL|SHT_PREINIT_ARRAY|macro|SHT_PREINIT_ARRAY
DECL|SHT_PROGBITS|macro|SHT_PROGBITS
DECL|SHT_RELA|macro|SHT_RELA
DECL|SHT_REL|macro|SHT_REL
DECL|SHT_SHLIB|macro|SHT_SHLIB
DECL|SHT_STRTAB|macro|SHT_STRTAB
DECL|SHT_SYMTAB_SHNDX|macro|SHT_SYMTAB_SHNDX
DECL|SHT_SYMTAB|macro|SHT_SYMTAB
DECL|dynstr_addr|member|unsigned char *dynstr_addr;
DECL|dynstr|member|Elf32_Shdr *dynstr;
DECL|dynsym_addr|member|unsigned char *dynsym_addr;
DECL|dynsym|member|Elf32_Shdr *dynsym;
DECL|e_ehsize|member|Elf32_Half e_ehsize;
DECL|e_entry|member|Elf32_Addr e_entry;
DECL|e_flags|member|Elf32_Word e_flags;
DECL|e_ident|member|unsigned char e_ident[EI_NIDENT];
DECL|e_machine|member|Elf32_Half e_machine;
DECL|e_phentsize|member|Elf32_Half e_phentsize;
DECL|e_phnum|member|Elf32_Half e_phnum;
DECL|e_phoff|member|Elf32_Off e_phoff;
DECL|e_shentsize|member|Elf32_Half e_shentsize;
DECL|e_shnum|member|Elf32_Half e_shnum;
DECL|e_shoff|member|Elf32_Off e_shoff;
DECL|e_shstrndx|member|Elf32_Half e_shstrndx;
DECL|e_type|member|Elf32_Half e_type;
DECL|e_version|member|Elf32_Word e_version;
DECL|elf_decode_info|struct|struct elf_decode_info {
DECL|elf_header|member|Elf32_Ehdr elf_header;
DECL|firmware|member|char *firmware;
DECL|r_addend|member|Elf32_Sword r_addend;
DECL|r_info|member|Elf32_Word r_info;
DECL|r_info|member|Elf32_Word r_info;
DECL|r_offset|member|Elf32_Addr r_offset;
DECL|r_offset|member|Elf32_Addr r_offset;
DECL|rel_dyn|member|Elf32_Shdr *rel_dyn;
DECL|rel_plt|member|Elf32_Shdr *rel_plt;
DECL|rsc|member|Elf32_Shdr *rsc;
DECL|section_headers_start|member|unsigned char *section_headers_start;
DECL|sh_addralign|member|Elf32_Word sh_addralign;
DECL|sh_addr|member|Elf32_Addr sh_addr;
DECL|sh_entsize|member|Elf32_Word sh_entsize;
DECL|sh_flags|member|Elf32_Word sh_flags;
DECL|sh_info|member|Elf32_Word sh_info;
DECL|sh_link|member|Elf32_Word sh_link;
DECL|sh_name|member|Elf32_Word sh_name;
DECL|sh_offset|member|Elf32_Off sh_offset;
DECL|sh_size|member|Elf32_Word sh_size;
DECL|sh_type|member|Elf32_Word sh_type;
DECL|shstrtab|member|char *shstrtab;
DECL|st_info|member|unsigned char st_info;
DECL|st_name|member|Elf32_Word st_name;
DECL|st_other|member|unsigned char st_other;
DECL|st_shndx|member|Elf32_Half st_shndx;
DECL|st_size|member|Elf32_Word st_size;
DECL|st_value|member|Elf32_Addr st_value;
