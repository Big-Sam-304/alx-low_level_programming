#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: string
 * @s2: string
 * Return: 0 if two strings are the same,
 * return -15 if s2 is greater than s1
 * return 15 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (i != '\0' || i != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-15);
		}
		else if (s1[i] > s2[i])
		{
			return (15);
		}
		i++;
	}
	return (0);
}
