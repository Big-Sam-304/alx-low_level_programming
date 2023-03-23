#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b
 *
 * @a: First int
 * @b: second int
 *
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b.
 *
 * @a: First int
 * @b: Second int
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b.
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: integer.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b.
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: integer.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of
 * a by b.
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: integer.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	return (a % b);
}
