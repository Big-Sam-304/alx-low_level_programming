#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: int to allocate memory for
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *digit;

	digit = malloc(b);

	if (digit == NULL)
	{
		exit(98);
	}
	return (digit);
}
