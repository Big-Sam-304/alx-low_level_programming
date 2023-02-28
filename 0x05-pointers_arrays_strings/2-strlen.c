#include "main.h"
/**
 * _strlen - Get's the length of a string
 * @s: string var
 */

int _strlen(char *s)
{
	int length, i;

	while (*s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
