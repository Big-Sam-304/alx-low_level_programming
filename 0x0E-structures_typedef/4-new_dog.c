#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - gives the length of a string, excluding the NULL char
 * @str: string to find the length of
 *
 * Return: length of the string (SUCCESS)
 */

int _strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _str_cpy - copies a string including the terminating byte NULL
 * @src: source of string to be copied
 * @dest: where the string will be copied to
 *
 * Return: pointer to dest
 */

char *_str_cpy(char *src, char *dest)
{
	int len, i;

	len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new 'dog'
 * @name: name of dog
 * @age: age of dog in years
 * @owner: owner of dog;
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		return (NULL);
	}

	dog->age = age;

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		return (NULL);
	}

	_str_cpy(name, dog->name);
	_str_cpy(owner, dog->owner);

	return (dog);
}
