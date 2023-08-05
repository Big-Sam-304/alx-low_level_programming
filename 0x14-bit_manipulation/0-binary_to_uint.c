#include "main.h"
#include <string.h>



/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 *
 * Return: converted number or 0 if
 * there is one or more chars in the string b that is not 0 and 1;
 * b is NULL.
 */



unsigned int binary_to_uint(const char *b)
{

	unsigned int num, base;

	size_t len, i, j;



	if (b == NULL)

	{

		return (0);

	}



	len = strlen(b);



	for (i = 0; i < len; i++)

	{

		if (b[i] != '1' && b[i] != '0')

		{

			return (0);

		}

	}



	base = 1;

	num = 0;



	for (j = len; j > 0; j--)

	{

		num += (b[j - 1] - '0') * base;

		base *= 2;

	}



	return (num);

}


