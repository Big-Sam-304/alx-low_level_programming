#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * num_words - counts the number of words in a string
 * @s1: pointer to the string to count the words of
 *
 * Return: The number of words in the string.
 */

int num_words(char *s1)
{
	int counter, i, len;

	counter = 0;

	len = strlen(s1);
	for (i = 0; i < len; i++)
	{
		if (s1[i] != ' ')
		{
			counter++;

			while (s1[i] != ' ' && s1[i] != '\0')
			{
				i++;
			}
		}
	}
	return (counter);
}

/**
 * strtow - splits a string into words(strings)
 * @str: string to be split.
 *
 * Return: pointer to the array of words
 * else return NULL
 */

char **strtow(char *str)
{
	int index, number_words;

	char **words, *word;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	number_words = num_words(str);

	words = malloc(sizeof(char *) * (number_words + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	index = 0;
	word = strtok(str, " ");
	while (word != NULL)
	{
		words[index] = malloc(sizeof(char) * (strlen(word) + 1));
		if (words[index] == NULL)
		{
			for (; index >= 0; index--)
			{
				free(words[index]);
			}
			free(words);
			return (NULL);
		}
		strcpy(words[index], word);
		index++;
		word = strtok(NULL, " ");
	}
	words[number_words] = NULL;
	return (words);
}
