#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed in it
 * @argc: number of arguments passed in a program
 * @argv: pointer to array  of strings of arguments passed
 *
 * Return: On success(0)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
