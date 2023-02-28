#include "main.h"
/**
 * puts2 - prints out characters in a string.
 * @str: String
 */

void puts2(char *str)
{
	int i;

	i = 0;

	_putchar(str[i]);

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
