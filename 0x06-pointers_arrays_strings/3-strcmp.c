#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: string
 * @s2: string
 * Return: 0 if two strings are the same,
 * return -(negative) if s2 is greater than s1
 * return +(positive) if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[1]);
		}
		i++;
	}
	if (s1[i] == '\0')
	{
		return (-1);
	}
	else if (s2[i] == '\0')
	{
		return (1);
	}
	return (0);
}
