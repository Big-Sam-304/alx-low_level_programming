#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * multiply - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: multiple of the two integers
 */

int multiply(int a, int b)
{
	return (a * b);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments of the program
 * @argv: pointer to the array of strings input(ed) in the program
 *
 * Return: multiple of two positive integers
 */

int main(int argc, char **argv)
{
	char *num_str1, *num_str2;

	int result, num_1, num_2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num_str1 = argv[1];
	num_str2 = argv[2];

	num_1 = atoi(num_str1);
	num_2 = atoi(num_str2);

	result = multiply(num_1, num_2);

	return (result);
}
