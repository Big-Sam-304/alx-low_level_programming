#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Prints strings followed by a new line.
 *
 * @separate: string to be printed between the strings.
 * @n: number of srings passed to the argument.
 *
 */

void print_strings(const char *separate, const unsigned int n, ...)
{
	unsigned int i;

	const char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separate != NULL && i < n - 1)
		{
			printf("%s", separate);
		}
	}
	printf("\n");

	va_end(args);
}
