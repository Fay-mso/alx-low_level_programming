#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
* error_exit - Print an error message and exit with the specified code.
* @code: Exit code
* @message: Error message
*/
void error_exit(int code, const char *message)
{
fprintf(stderr, "%s\n", message);
exit(code);
}

/**
* print_elf_header_info - Print the information contained in the ELF header.
* @header: Pointer to the ELF header structure
*/
void print_elf_header_info(const Elf64_Ehdr *header)
{
int i;
printf("Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
printf("Class: ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("Invalid class\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("Unknown class\n");
}
printf("Data:                              ");
switch (header->e_ident[EI_DATA])
{
case ELFDATANONE:
printf("Invalid data encoding\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("Unknown data encoding\n");
}
printf("Version:                           %d\n", header->e_ident[EI_VERSION]);
printf("OS/ABI: ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX System V ABI\n");
break;
case ELFOSABI_HPUX:
printf("HP-UX ABI\n");
break;
case ELFOSABI_NETBSD:
printf("NetBSD ABI\n");
break;
case ELFOSABI_LINUX:
printf("Linux ABI\n");
break;
case ELFOSABI_SOLARIS:
printf("Solaris ABI\n");
break;
case ELFOSABI_IRIX:
printf("IRIX ABI\n");
break;
case ELFOSABI_FREEBSD:
printf("FreeBSD ABI\n");
break;
case ELFOSABI_TRU64:
printf("TRU64 UNIX ABI\n");
break;
case ELFOSABI_ARM:
printf("ARM architecture ABI\n");
break;
case ELFOSABI_STANDALONE:
printf("Stand-alone (embedded) ABI\n");
break;
default:
printf("Unknown OS/ABI\n");
}
printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type:                              ");
switch (header->e_type)
{
case ET_NONE:
printf("No file type\n");
break;
case ET_REL:
printf("Relocatable file\n");
break;
case ET_EXEC:
printf("Executable file\n");
break;
case ET_DYN:
printf("Shared object file\n");
break;
case ET_CORE:
printf("Core file\n");
break;
default:
printf("Unknown\n");
break;
}
printf("Entry point address:               0x%lx\n", 
(unsigned long)header->e_entry);
printf("Format:                            ELF64\n");
}
/**
* main - Entry point
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;
if (argc != 2)
error_exit(98, "Usage: elf_header elf_filename");
fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_exit(98, "Error: Cannot open file");
if (read(fd, &header, sizeof(header)) != sizeof(header))
error_exit(98, "Error: Cannot read ELF header");
if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
error_exit(98, "Error: Not an ELF file");
print_elf_header_info(&header);
if (close(fd) == -1)
error_exit(100, "Error: Cannot close file descriptor");
return 0;
}

