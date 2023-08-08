#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * check_elf - checks if the file has an ELF header
 * if error exit on 98
 * @h_entry: the e_entry of the header of the file
*/
void check_elf(unsigned char *h_entry)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (h_entry[index] != 127 && h_entry[index] != 'E'
		&& h_entry[index] != 'L' && h_entry[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: not a ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_magic - prints the magic number of the elf header file
 * @h_entry: the e_entry of the elf file
*/
void print_magic(unsigned char *h_entry)
{
	int index;

	printf(" Magic: ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", h_entry[index]);
		if (index == 15)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}
/**
 * print_class - print the class of the ELF file
 * @h_ident: the ident entry of the header file
*/
void print_class(unsigned char *h_ident)
{
	printf(" Class: ");
	switch (h_ident[EI_CLASS])
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
			printf("<unknown: %x>\n", h_ident[EI_CLASS]);
	}
}
/**
 * print_endianness - prints the endianness
 * @h_ident: the identity of the elf file
*/
void print_endianness(unsigned char *h_ident)
{
	printf(" Data: ");
	switch (h_ident[EI_DATA])
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
			printf("<unknown %x>\n", h_ident[EI_DATA]);
	}
}
/**
 * print_version - prints the version of the elf file
 * @h_ident: the elf header identity
*/
void print_version(unsigned char *h_ident)
{
	printf(" Version: %d", h_ident[EI_VERSION]);
	switch (h_ident[EI_VERSION])
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
 * print_osabi - prints the os_abi of the elf file
 * @h_ident: the elf header ident
*/
void print_osabi(unsigned char *h_ident)
{
		printf(" OS/ABI: ");

	switch (h_ident[EI_OSABI])
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
		printf("<unknown: %x>\n", h_ident[EI_OSABI]);
	}

}
/**
 * print_abi - prints the abi version of the elf file
 * @h_ident: the ident part of the elf header
*/
void print_abi(unsigned char *h_ident)
{
	printf(" ABI Version: %d\n", h_ident[EI_ABIVERSION]);
}
/**
 * print_type - prints the type of ELF
 * @e: the type of elf file
 * @h_ident: the ident header of the elf file
*/
void print_type(unsigned int e, unsigned char *h_ident)
{
		if (h_ident[EI_DATA] == ELFDATA2MSB)
		e >>= 8;

	printf(" Type: ");

	switch (e)
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
		printf("<unknown: %x>\n", e);
	}
}
/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
/**
 * close_elf - closes a elf header file container , if it fails exit on 98
 * @fd: the file descriptor
*/
void close_elf(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot close file\n");
		exit(98);
	}
}
/**
 * main - prints the elf header of a file
 * @ac: the number of args this should only be one in this case
 * @av: the args
 * Return: 0 on success , exit 98 on failure
*/
int main(int ac, char *av[])
{
	Elf64_Ehdr *header;
	int fd, chars_read;


	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot open file\n");
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		dprintf(STDERR_FILENO, "Error: no storage for malloc\n");
		exit(98);
	}
	chars_read = read(fd, header, sizeof(Elf64_Ehdr));
	if (chars_read == -1)
	{
		free(header);
		dprintf(STDERR_FILENO, "Error: cannot read file\n");
		close(fd);
		exit(98);
	}
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_endianness(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);
	free(header);
	close_elf(fd);
	return (0);
}

