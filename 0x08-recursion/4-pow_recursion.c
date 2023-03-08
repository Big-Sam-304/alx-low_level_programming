#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to
 * the power of y.
 * @x: integer
 * @y: integer
 * Return: positive int (Success) or
 * else return -1 when y < 0
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
	int exp;

	exp = x * _pow_recursion(x, y - 1);
	return (exp);
}
