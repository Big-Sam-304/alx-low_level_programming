#include "main.h"

/**
 * is_prime_number - checks if a number is a prime
 * number or not
 * @n: integer
 * Return: 1 if integer n is a prime number, otherwise
 * return 0
 */

int is_prime_number(int n)
{
	if ((n <= 1) || (n % 2 == 0) || (n % 3 == 0))
	{
		return (0);
	}
	return (1);
}
