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
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
