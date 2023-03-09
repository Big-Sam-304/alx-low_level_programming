#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root
 * of a number
 * @n: integer
 * Return: -1 if n does not have have a natural square
 * root, else return square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, n / 2));
}

/**
 * sqrt_helper - calculates the natural square root of n
 * @n: integer
 * @g: integer
 * Return: -1 if n does not have a natural square root
 * else, return square root of n
 */

int sqrt_helper(int n, int g)
{
	int new_guess;

	new_guess = (g + (n / g)) / 2;
	if (new_guess == g)
	{
		if (n % g == 0)
		{
			return (g);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		return (sqrt_helper(n, new_guess));
	}
}
