#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees memory allocated to dog_t
 * @d: memory to free
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
