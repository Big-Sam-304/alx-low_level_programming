#include "main.h"
/**
 * _puts - prints out a string, followed
 * by a new line to stdout
 * @str: string pointer
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
		s++;
	}
}
