#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number which we will manipulate its bit at a given index
 * @index: the index at which we will manipulate a bit starting
 * at zero
 *
 * Return: 1 if it worked or
 * -1 if an error occurred
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1 << index;

	if ((*n & mask) == 1)
	{
		*n = *n ^ mask;
	}

	return (1);
}
