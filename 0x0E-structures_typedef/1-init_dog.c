#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type dog.
 * @name: name of dog
 * @age: age of dog in years
 * @owner: the one who possesses it.
 * @d: woof
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	unsigned long int i, j;

	for (i = 0; name[i] != '\0' && i < sizeof(d->name) - 1; i++)
	{
		d->name[i] = name[i];
	}

	d->name[i] = '\0';

	d->age = age;

	for (j = 0; owner[j] != '\0' && j < sizeof(d->owner) - 1; j++)
	{
		d->owner[j] = owner[j];
	}

	d->owner[j] = '\0';
}
