#include "main.h"
/**
 * _puts - prints out a string, followed
 * by a new line to stdout
 * @str: string pointer
 *
 * Return: nothing.
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
