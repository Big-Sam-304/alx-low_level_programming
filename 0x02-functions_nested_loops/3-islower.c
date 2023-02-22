#include "main.h"
/**
 * _islower - Checks if a char is lowercase
 * or uppercase
 * @c: The character to check
 * Return: 1 (lowercase)
 * else: 0 (otherwise)
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

