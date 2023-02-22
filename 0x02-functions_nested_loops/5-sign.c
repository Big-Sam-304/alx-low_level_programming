#include "main.h"
/**
 * print_sign - Prints out the sign of an int to stdout
 * @n: Integer to be be checked
 * Return: 1 if n greater than 0
 * else return 0 if n is zero
 * else return -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
