#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to check the last digit
 *
 * Return: 0 (Success)
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar(last_digit + '0');
	_putchar('\n');
	return (0);
}
