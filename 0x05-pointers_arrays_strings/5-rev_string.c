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

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
	_putchar('\n');
}
