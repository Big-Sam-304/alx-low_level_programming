#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success) else return 1 (error)
 */

int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;

	/*Check if any arguments were passed*/
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/*Loop through each argument and add up the numbers*/
	for (i = 1; i < argc; i++)
	{
		/*Loop through each character of the argument to check if it's a digit*/
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/*If the argument is all digits, add it to the sum*/
		sum += atoi(argv[i]);
	}
	/* Print the sum*/
	printf("%d\n", sum);
	return (0);
}

