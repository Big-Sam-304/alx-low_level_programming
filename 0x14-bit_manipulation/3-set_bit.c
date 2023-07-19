#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the numer to tweak a bit at a given index
 * @index: index of the bit that we want to set, starting from zero
 *
 * Return: 1 if worked or
 * -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	*n = *n | mask;

	return (1);
}
