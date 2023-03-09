#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String
 * Return: 1 if a string is a palindrome or else
 * return 0 if not
 */

int is_palindrome(char *s)
{
	if (str_len(s) <= 1)
	{
		return (1);
	}
	return (helper_palindrome(s, 0, str_len(s)));
}

/**
 * str_len - Checks the length of the string
 * @s: String
 * Return: string length
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_len(s + 1));
	}
}
/**
 * helper_palindrome - checks whether a string is a palindrome
 * @s: string
 * @i: rucursive iterator
 * @j: string length
 * Return: 1 if palindrome, else return 0
 */

int helper_palindrome(char *s, int i, int j)
{
	if (*(s + i) != *(s + (j - 1)))
	{
		return (0);
	}
	if (i >= j)
	{
		return (1);
	}
	return (helper_palindrome(s, i + 1, j - 1));
}
