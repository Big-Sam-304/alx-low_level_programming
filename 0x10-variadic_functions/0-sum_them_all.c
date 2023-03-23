#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: numbers of variables type integer.
 *
 * Return: The sum of all the variables.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x;

	va_list args;

	va_start(args, n);

	x = 0;

	for (i = 0; i < n; i++)
	{
		x = x + va_arg(args, int);
	}
	return (x);
}
