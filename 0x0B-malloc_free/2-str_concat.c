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
	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = ""
	}
	int i, j, len1, len2;

	char *new_arr;

	len1 = len(s1);
	len2 = len(s2);

	new_arr = (char *) malloc((len1 + len2 + 1) * sizeof(char));
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


int len(*str1)
{
	int i;

	i = 0;

	while (str1[i] != '\0')
	{
		i++;
	}

	return (i);
}

