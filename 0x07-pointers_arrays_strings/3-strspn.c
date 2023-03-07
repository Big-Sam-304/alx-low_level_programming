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
	int count;

	count = 0;
	while (*s)
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				count++;
				break;
			}
			*accept++;
		}
		if (*accept == '\0')
		{
			return (count);
		}
		*s++;
	}
	return (count);
}
