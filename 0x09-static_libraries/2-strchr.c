#include "main.h"
/**
 * _strchr - Returns a pointer to the first occuence of a specified char
 * @s: String
 * @c: char
 * Return: First occurrence of c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
