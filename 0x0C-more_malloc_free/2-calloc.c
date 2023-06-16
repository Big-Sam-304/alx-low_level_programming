#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: elements of the array.
 * @size: number of bytes of the array
 *
 * Return: pointer to the newly allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;

	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, total_size);

	return (ptr);
}
