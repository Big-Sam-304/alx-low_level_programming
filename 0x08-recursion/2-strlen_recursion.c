#include "main.h"

/**
 * _strlen_recursion - Check code
 * @s: String
 * Return: count (success)
 */

int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s == '\0')
	{
		return (0);
	}
	count++;
	_strlen_recursion(s + 1);

	return (count);
}
