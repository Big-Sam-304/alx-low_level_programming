#include "main.h"
/**
 * _strspn - Returns the number of bytes in the
 * initial first segment which consist of bytes
 * from second segment
 * @s: String
 * @accept: string
 * Return: counter
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int i;


	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (count);
			}
		}
		*s++;
	}
	_putchar('\0');
	return (count);
}
