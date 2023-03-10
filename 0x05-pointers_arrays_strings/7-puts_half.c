#include "main.h"
/**
 * puts_half - Prints half a string
 * @str: string
 */

void puts_half(char *str)
{
	int len, mid, length_of_the_string, i, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		mid = len / 2;
		for (i = mid; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		length_of_the_string = len;

		n = (length_of_the_string - 1) / 2;
		for (i = n + 1; i <= length_of_the_string - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
