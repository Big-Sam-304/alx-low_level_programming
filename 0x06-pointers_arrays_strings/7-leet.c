#include "main.h"
/**
 * leet - encodes a tring into 1337
 * @s: string
 * Return: s (success)
 */

char *leet(char *s)
{
	int i, j;

	char leet_char, leet_num;

	leet_char[5] = {'A', 'E', 'O', 'T', 'L'};
	leet_num[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == leet_char[j] || s[i] == leet_char[j] - 32)
			{
				s[i] = leet_num[j];
				break;
			}
		}
	}
	return (s);
}
