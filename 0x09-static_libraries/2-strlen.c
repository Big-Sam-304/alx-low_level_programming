#include "main.h"
/**
 * _strlen - Get's the length of a string
 * @s: pointer s
 *
 * Return: length of string s
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
