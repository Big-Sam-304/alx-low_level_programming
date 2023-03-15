#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * passed to it.
 * @argc: number of arguments
 * @argv: string
 * Return: 0 (Success)
 */

int main(int argc, __attribute__ ((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
