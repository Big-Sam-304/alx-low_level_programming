#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as parameter.
 * @str: string to be copied.
 *
 * Return: a pointer to newly allocated space in memory
 * else returns NULL
 */

char *_strdup(char *str)
{
	unsigned int i, size;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	size = 0;

	while (str[size] != '\0')
	{
		size += 1;
	}
	size += 1;

	array = (char *)malloc(size * (sizeof(char)));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}
