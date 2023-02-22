#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints out all natural numbers
 * from n to 98
 * @n: The int from which we begin to print
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		printf("%d is larger than 98\n", n);
	}
	else
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
}
