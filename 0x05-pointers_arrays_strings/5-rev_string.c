#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int str;

	str = 0;
	while (*s != '\0')
	{
		str++;
		s++;
	}
	int i, len;

	len = str;

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
