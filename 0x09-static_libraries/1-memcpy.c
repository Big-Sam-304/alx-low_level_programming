#include "main.h"
/**
 * _memcpy - Copies n bytes frome one memory area to another
 * @dest: memory area
 * @src: second memory area
 * @n: integer
 * Return: s (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
