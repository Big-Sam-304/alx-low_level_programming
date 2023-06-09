#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: count of number of arguments passed
 * @argv: numbers to be multiplied
 *
 * Return: On suceess(0)
 * else (1)
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
	}
	printf("%d\n", mul);

	return (0);
}
