#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of its own main function
 * @num_bytes: number of bytes
 *
 * Return: nothing
 */

void print_opcodes(int num_bytes);

void print_opcodes(int num_bytes)
{
	unsigned char *ptr = (unsigned char *)print_opcodes;

	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[i]);
	}
	printf("\n");
}

/**
 * main - prints opcodes
 * @argc: number of arguments provided to the program
 * @argv: array of strings provided to the program
 *
 * Return: on success(0)
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes(num_bytes);

	return (0);
}
