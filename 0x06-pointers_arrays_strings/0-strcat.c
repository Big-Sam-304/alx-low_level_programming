#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: pointer of string
 *
 * @src: pointer to a string
 * Return: char (Success)
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
