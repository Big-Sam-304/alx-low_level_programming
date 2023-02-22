#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints out the n times table
 * starting with 0
 * @n: The int referenced to produce the times table
 */
void print_times_table(int n)
{
	if ((n > 15) || (n < 0))
	{
		return;
	}
	else
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%d", i * j);
				if (j != n)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
}
