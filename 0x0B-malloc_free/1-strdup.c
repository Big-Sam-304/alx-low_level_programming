#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space
 * in memory.
 * @str: string to be copied.
 * Return: char
 *
 */

char *_strdup(char *str)
{
	char *arr;

	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * len_string);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= len_string; j++)
	{
		arr[i] = str[i];
	}
	return (arr);
}

/**
 * len_string - Returns the length of string str
 * @str: string to work with
 * Return: an int, length of string
 */

int len_string(char *str)
{
	int i, count;

	i = 0;
	count = 1;

	for ( ; i != '\0'; i++)
	{
		count++;
	}
	return (count);
}
