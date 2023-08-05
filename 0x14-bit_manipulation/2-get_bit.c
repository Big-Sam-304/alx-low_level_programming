#include "main.h"



/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer to check bit at a specific index
 * @index: index, starting from 0, of the bit we want to get
 *
 * Return: the value of the bit at index 'index'
 * or -1 if an error occured.
 */



int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int mask;



	if (index >= sizeof(unsigned int) * 8)

	{

		return (-1);

	}



	mask = 1UL << index;



	if ((n & mask) == 0)

	{

		return (0);

	}

	else

	

		return (1);

	}

}


