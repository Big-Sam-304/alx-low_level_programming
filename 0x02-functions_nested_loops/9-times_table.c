#include "main.h"
/**
 * times_table -Prints out the multiplication table
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			_putchar(product + 0);
		}
		_putchar('\n');
	}
}
