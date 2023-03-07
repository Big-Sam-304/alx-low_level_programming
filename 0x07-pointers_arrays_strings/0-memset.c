#include "main.h"
/**
 * _memset - Fills the first n bytes of the memoty with a constant byte
 * @s: memory area
 * @b: constant
 * @n: integer
 * Return: s (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n-- > 0)
	{
		*s++ = b;
	}
	return (s);
}
