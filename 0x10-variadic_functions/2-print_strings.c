#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings to be printed
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char*);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(str);
}
