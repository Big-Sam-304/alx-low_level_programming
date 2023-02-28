#include "main.h"
/**
 * _strlen - Get's the length of a string
 * @s: string var
 */

int _strlen(char *s)
{
	int length, i;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
