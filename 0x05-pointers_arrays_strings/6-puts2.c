#include "main.h"
/**
 * puts2 - prints out characters in a string.
 * @str: String
 */

void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i - 1; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
