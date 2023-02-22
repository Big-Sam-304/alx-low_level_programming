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
		int j;

		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
