#include "main.h"

/**
 * print_error_and_exit - Prints error message
 * to stderr and exits with status code 98.
 * @msg: The error message.
 */
void print_error_and_exit(char *msg)
{
    dprintf(2, "%s\n", msg);
    exit(98);
}

/**
 * read_elf_header - Reads the ELF header
 * from the file descriptor and prints it.
 * @fd: The file descriptor of the ELF file.
 */
void read_elf_header(int fd)
{
	Elf64_Ehdr header;
	ssize_t read_result;

	lseek(fd, 0, SEEK_SET);
	read_result = read(fd, &header, sizeof(header));
	if (read_result == -1)
		print_error_and_exit("Error: Can't read from file");

	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
			header.e_ident[EI_MAG0], header.e_ident[EI_MAG1], header.e_ident[EI_MAG2], header.e_ident[EI_MAG3],
			header.e_ident[EI_MAG4], header.e_ident[EI_MAG5], header.e_ident[EI_MAG6], header.e_ident[EI_MAG7],
			header.e_ident[EI_MAG8], header.e_ident[EI_MAG9], header.e_ident[EI_MAG10], header.e_ident[EI_MAG11],
			header.e_ident[EI_MAG12], header.e_ident[EI_MAG13], header.e_ident[EI_MAG14], header.e_ident[EI_MAG15]);

	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
			break;
	}

	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_ident[EI_DATA]);
			break;
	}

	printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);

	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
			break;
	}

	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);

	printf("  Type:                              ");
	switch (header.e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_type);
			break;
	}

	printf("  Entry point address:               %#lx\n", header.e_entry);
}

/**
 * main - Displays information contained in the ELF header at the start of an ELF file.
 * @ac: The number of arguments.
 * @av: An array of arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int ac, char **av)
{
	int fd;

	if (ac != 2)
		print_error_and_exit("Usage: elf_header elf_filename");

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		print_error_and_exit("Error: Can't read from file");

	read_elf_header(fd);

	if (close(fd) == -1)
		print_error_and_exit("Error: Can't close file descriptor");

	return (0);
}

