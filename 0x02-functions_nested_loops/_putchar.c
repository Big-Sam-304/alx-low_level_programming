#include "main.h"
#include <unistd.h>
/**
 * _putchar - Prints out the char c to stdout
 * @c: The character to print
 * Return: 0 (Success)
 * On error: -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
