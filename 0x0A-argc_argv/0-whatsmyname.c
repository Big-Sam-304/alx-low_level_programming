#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: count of the number of variables in command line
 * @argv: array of strings in command line.
 *
 * Return: 0 (success)
 */

int main (int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
