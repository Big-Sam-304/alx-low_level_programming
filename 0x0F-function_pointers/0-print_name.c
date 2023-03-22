#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: Name to be printed
 *
 * Return: Nothing.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
