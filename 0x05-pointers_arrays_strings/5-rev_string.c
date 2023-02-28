#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int str, i, j, len;

	char tmp;

	str = 0;
	while (s[str] != '\0')
	{
		str++;
	}
	len = str;

	for (i = 0, j = len; i < j; i++, j--)
	{
		s[i] = tmp;
		s[i] = s[j];
		s[j] = tmp;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
