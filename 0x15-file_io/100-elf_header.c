#include "elf_header.h"
/**
 * is_elf - Checks ELF file
 * @e_in: A pointer to an array
 * Return: void
 * Description: If the file is not an ELF file - exit code 98
 */
void is_elf(unsigned char *e_in)
{
	int i;

	for (i = 0; i < 4; i++)

		if (e_in[i] != 127 &&
		    e_in[i] != 'E' &&
		    e_in[i] != 'L' &&
		    e_in[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
}

/**
 * printf_magic - Prints the magic numbers
 * @e_in: A pointer to an array
 * Return: void
 * Description: Magic numbers
 */
void printf_magic(unsigned char *e_in)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_in[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * printf_class - Prints the class
 * @e_in: A pointer to an array containing the ELF class
 * Return: void
 * Description: printf class
 */
void printf_class(unsigned char *e_in)
{
	printf("  Class:                             ");

	switch (e_in[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_in[EI_CLASS]);
	}
}

/**
 * printf_data - Prints the data of an ELF header
 * @e_in: A pointer to an array
 * Return: void
 * Description: printf data
 */
void printf_data(unsigned char *e_in)
{
	printf("  Data:                              ");

	switch (e_in[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_in[EI_CLASS]);
	}
}

/**
 * printf_version - Prints the version
 * @e_in: A pointer to an array
 * Return: void
 * Description: printf version
 */
void printf_version(unsigned char *e_in)
{
	printf("  Version:                           %d",
	       e_in[EI_VERSION]);

	switch (e_in[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * printf_osabi - Prints the OS/ABI
 * @e_in: A pointer to an array
 * Return: void
 * Description: printf version
 */
void printf_osabi(unsigned char *e_in)
{
	printf("  OS/ABI:                            ");

	switch (e_in[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
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
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_in[EI_OSABI]);
	}
}

/**
 * printf_abi - Prints the ABI version
 * @e_in: A pointer to an array
 * Return: void
 * Description: printf version
 */
void printf_abi(unsigned char *e_in)
{
	printf("  ABI Version:                       %d\n",
	       e_in[EI_ABIVERSION]);
}

/**
 * printf_type - Prints the type of an ELF header
 * @e_type: The ELF type
 * @e_in: A pointer to an array containing the ELF class
 */
void printf_type(unsigned int e_type, unsigned char *e_in)
{
	if (e_in[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * printf_entry - Prints the entry point of an ELF header
 * @e_entry: The address of the ELF entry point
 * @e_in: A pointer to an array containing the ELF class
 */
void printf_entry(unsigned long int e_entry, unsigned char *e_in)
{
	printf("  Entry point address:               ");

	if (e_in[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_in[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf_file - Closes an ELF file
 * @elf: The file descriptor of the ELF file
 * Return: void
 * Description: close elf file
 */
void close_elf_file(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays  ELF header information
 * @argc: arguments count
 * @argv: An array of  arguments pointers
 * Return: 0 on success
 * Description: desc will be here
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf_file(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf_file(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	is_elf(header->e_in);
	printf("ELF Header:\n");
	printf_magic(header->e_in);
	printf_class(header->e_in);
	printf_data(header->e_in);
	printf_version(header->e_in);
	printf_osabi(header->e_in);
	printf_abi(header->e_in);
	printf_type(header->e_type, header->e_in);
	printf_entry(header->e_entry, header->e_in);
	free(header);
	close_elf_file(o);
	return (0);
}
