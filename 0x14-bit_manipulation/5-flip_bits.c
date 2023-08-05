#include "main.h"

/**
 * flip_bits - counts the number of bits we need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number.
 *
 * Return: the number of bits that need to be flipped
 */



unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int xor_mn;

	unsigned int counter = 0;



	xor_mn = m ^ n;



	while (xor_mn != 0)

	{

		counter += xor_mn & 1;



		xor_mn >>= 1;

	}



	return (counter);

}


