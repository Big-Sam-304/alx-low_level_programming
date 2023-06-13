#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all args in the program
 * @ac: number of args
 * @av: array of the args in the program
 *
 * Return: pointer to the concatenated string
 * else return NULL
 */

char *argstostr(int ac, char **av)
{
	int args_length, i, index, total_length = 0;

	char *concat_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		args_length = 0;
		while (av[i][args_length] != '\0')
		{
			args_length++;
		}
		total_length += args_length + 1;
	}

	concat_str = malloc((total_length) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}

	index = 0;
	for (i = 0; i < ac; i++)
	{
		args_length = 0;
		while (av[i][args_length] != '\0')
		{
			concat_str[index] = av[i][args_length];
			index++;
			args_length++;
		}
		concat_str[index] = '\n';
		index++;
	}
	concat_str[index] = '\0';
	return (concat_str);
}
