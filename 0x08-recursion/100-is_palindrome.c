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

	if (s[0] == s[str_len(s) - 1])
	{
		return (is_palindrome(s + 1) && is_palindrome(s[str_len(s) - 2]));

	}
	else
	{
		return (0);
	}
}

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
