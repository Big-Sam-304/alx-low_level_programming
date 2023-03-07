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
	int count, i;

	count = 0;
	while (*s)
	{
		for (i = 0; *accept != '\0'; i++)
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
		}
		if (*accept == '\0')
		{
			return (count);
		}
		*s++;
	}
	return (count);
}
