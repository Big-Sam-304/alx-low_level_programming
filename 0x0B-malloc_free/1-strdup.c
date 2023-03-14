#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

	int j, len;

	len = len_string(str);

	if (str == NULL)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * len);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < len; j++)
	{
		arr[j] = str[j];
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

	for (i = 0 ; str[i]; i++)
	{
		count++;
	}
	return (count);
}
