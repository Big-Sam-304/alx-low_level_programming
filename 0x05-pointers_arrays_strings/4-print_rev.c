#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: String
 */

void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
