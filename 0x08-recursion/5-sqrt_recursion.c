#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to find the square root of.
 *
 * Return: On success returns the square root of n.
 * else returns -1 if n does not have a natural square root.
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
	else
	{
		return (_sqrt_helper(n, 1, n));
	}
}

/**
 * _sqrt_helper - returns the square root of n.
 * @start: lower base value.
 * @end: higher end value.
 * @n: number to find square root of.
 *
 * Return: the square root of n.
 */

int _sqrt_helper(int n, int start, int end)
{
	int mid;

	mid = ((start + end) / 2);

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		if ((mid + 1) * (mid + 1) > n)
		{
			return (mid);
		}
		else
		{
			return (_sqrt_helper(n, mid + 1, end));
		}
	}
	else
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
}
