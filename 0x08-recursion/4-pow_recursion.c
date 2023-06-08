#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: the value to be raised.
 * @y: the value of the exponent.
 *
 * Return: -1 if y is less than zero.
 * On success returns the value of x raised to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

