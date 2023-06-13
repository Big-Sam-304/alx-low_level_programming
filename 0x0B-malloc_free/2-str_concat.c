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
	unsigned int i, j, size, size_1, size_2;
	char *concat;

	size = 0;
	size_1 = 0;
	while (s1[size] != '\0')
	{
		size += 1;
	}
	while (s2[size_1] != '\0')
	{
		size_1 += 1;
	}
	size_1 += 1;
	size_2 = size_1 + size;

	if (s1[0] == '\0' || s2[0] == '\0')
	{
		return (NULL);
	}

	concat = (char *)malloc(size_2 * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j <= size_1; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';

	return (concat);
}

