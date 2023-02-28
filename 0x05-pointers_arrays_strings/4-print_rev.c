#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: String
 */

void print_rev(char *s)
{
	int len, i, j;

	j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	len = j;
	for (i = len; i >= 1; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
