#include <stdio.h>
#include "main.h"

/**
 * main - prints out it's own name
 * @argc: counter
 * @argv: holds all the arguments
 * Return: 0 (success)
 */

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
