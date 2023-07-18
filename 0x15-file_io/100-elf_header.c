#include "main.h"
#include <string.h>

#define ELF_MAGIC "\x7F\x45\x4C\x46"

/**
 * print_error - print error
 * @msg: message to print
 *
 * Return: nothing
 */

void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * elf_info - displays information contained in the ELF header at
 * the start of an ELF file
 * @elf_filename: the name of the ELF file to display information
 *
 * Return: 0 on success
 */

int elf_info(const char *elf_filename)
{
	int fd;
	Elf64 elf_header;

	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: Cannot open file");
	}

	if (read(fd, &elf_header, sizeof(Elf64)) != sizeof(Elf64))
	{
		close(fd);
		print_error("Error: Cannot read ELF header");
	}

	if (memcmp(elf_header.e_ident, ELF_MAGIC, sizeof(ELF_MAGIC) - 1) != 0)
	{
		close(fd);
		print_error("Error: This is not an ELF file");
	}
	close(fd);

	return (0);
}

/**
 * main - prints information contained in ELF header
 * @argc: number of arguments passed to the program
 * @argv: pointeto an array of the arguments passed
 *
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	unsigned long int i;
	Elf64 elf_header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	if (elf_info(argv[1]) == 98)
	{
		exit(98);
	}

	printf("Magic: ");
	for (i = 0; i < sizeof(ELF_MAGIC) - 1; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\nClass: %d\n", elf_header.e_ident[4]);
	printf("Data: %d\n", elf_header.e_ident[5]);
	printf("Version: %d\n", elf_header.e_ident[6]);
	printf("OS/ABI: %d\n", elf_header.e_ident[7]);
	printf("Version: %d\n", elf_header.e_ident[8]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header.e_entry);

	return (0);

}

