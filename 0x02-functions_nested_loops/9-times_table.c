#include "main.h"
/**
 * times_table -Prints out the multiplication table
 */
void times_table(void)
{
	int i, j, product, ch1, ch2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product <= 9)
			{
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (product > 9)
			{
				ch1 = product / 10;
				ch2 = product % 10;
				_putchar(ch1 + '0');
				_putchar(ch2 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
