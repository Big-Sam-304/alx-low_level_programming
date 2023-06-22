#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - sums all its parameters
 * @n: first parameter
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	va_start (add, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, int);
	}
	va_end(add);

	return (sum);
}
