#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 *
 * @format: a list of types arguments passed to
 * the function
 *
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c_val;
	int i_val;
	float f_val;
	char *s_val, *separate = "";
	int i = 0;

	va_start(args, format);

	if (format)
	{

		while (format && format[i])
		{
			switch (format[i])
			{
				case 'c':
					c_val = va_arg(args, int);
					printf("%s%c", separate, c_val);
					break;

				case 'i':
					i_val = va_arg(args, int);
					printf("%s%d", separate, i_val);
					break;

				case 'f':
					f_val = va_arg(args, double);
					printf("%s%f", separate, f_val);
					break;

				case 's':
					s_val = va_arg(args, char*);

					if (s_val)
					{
						printf("%s%s", separate, s_val);
					}
					else
					{
						printf("(nil)");
					}
					break;

				default:
					break;
			}
			separate = ", ";

			i++;
		}
	}
	printf("\n");
	va_end(args);
}
