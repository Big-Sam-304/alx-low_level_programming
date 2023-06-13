#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: a pointer to a newly allocated space in memory
 * else return NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size1, size2;
	char *concat;

	size1 = string_size(s1);
	size2 = string_size(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else if (s2 == NULL && s1 == NULL)
	{
		return (NULL);
	}

	concat = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';

	return (concat);
}

/**
 * string_size - returns the length of the string
 * @str1: string to find the length of
 *
 * Return: length of string - 1
 */

int string_size(char *str1)
{
	unsigned int size1;

	size1 = 0;

	while (str1[size1] != '\0')
	{
		size1++;
	}

	return (size1);
}
