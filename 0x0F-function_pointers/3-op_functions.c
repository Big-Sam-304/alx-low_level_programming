#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difference between a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a  by b
 * @a: first integer
 * @b: second integer
 *
 * Return: result of division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder after division of a by b
 * @a: first number
 * @b: second number
 *
 * Return: the remainder after division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
