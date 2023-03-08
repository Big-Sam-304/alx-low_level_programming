#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Given number
 * Return: positive integer (Success) else return: -1 (Error)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
