#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian,
 * 1 if little endian.
 */



int get_endianness(void)
{

	unsigned int num = 1;

	char *ptr;



	ptr = (char *)&num;



	return (*ptr == 1);

}


