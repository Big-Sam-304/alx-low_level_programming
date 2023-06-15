#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * str_len - calculates number of char in a string
 * @str1: first string
 * @str2: second string
 * @b: number of characters of the second string to concat.
 *
 * Return: total number of string one and/or two.
 */

int str_len(char *str1, char *str2, unsigned int b)
{
	unsigned int length_1, length_2, total;

	if (str1 == NULL)
	{
		str1 = "";
	}

	if (str2 == NULL)
	{
		str2 = "";
	}

	length_1 = strlen(str1);
	length_2 = strlen(str2);

	if (b >= length_2)
	{
		total = length_1 + length_2 + 1;
	}
	else
	{
		total = length_1 + b + 1;
	}

	return (total);
}

/**
 * string_nconcat - concatenates two srings
 * @s1: first string
 * @s2: second string
 * @n: length of second string to add to the first string
 *
 * Return: pointer to newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int total_len, len1, len2, i, j;

	len1 = strlen(s1);
	len2 = strlen(s2);

	total_len = str_len(s1, s2, n);

	str = malloc(sizeof(char) * total_len);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	if (n >= len2)
	{
		for (j = 0; j < len2; j++)
		{
			str[i + j] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			str[i + j] = s2[j];
		}
	}

	str[i + j] = '\0';

	return (str);
}
