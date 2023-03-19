#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	char *new_arr;

	new_arr = (char *) malloc((len_1 + len_2 + 1) * sizeof(char));
	if (!new_arr)
	{
		return (NULL);
	}

	i = 0, j = 0;

	while (i != '\0')
	{
		new_arr[i] = s1[i];
		i++;
	}
	while (j != 0)
	{

		new_arr[i + j] = s2[j];
		j++;
	}
	new_arr[i + j] = '\0';

	return (new_arr);

}

/**
 * len - returns the length of  a string
 * @str1: string
 * Return: int, the length of string
 */


int len_1(char *s1)
{
	int i;

	i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	return (i);
}

int len_2(char *s2)
{
	int i;

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
	}
	return (i);
}
