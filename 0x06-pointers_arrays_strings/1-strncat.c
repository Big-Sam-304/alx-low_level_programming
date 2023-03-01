#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: integer
 * Return: dest (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*p++ = src[i];
	}
	*p = '\0';
	return (dest);
}
