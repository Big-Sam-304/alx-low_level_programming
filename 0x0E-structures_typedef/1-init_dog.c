#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

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
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->age = age;

	d->name = name;

	d->owner = owner;
}
