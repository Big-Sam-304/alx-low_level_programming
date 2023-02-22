#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to check the last digit
 *
 * Return: 0 (Success)
 */
int print_last_digit(int n)
{
	last_digit = n % 10;
	_putchar(last_digit);
	_putchar('\n');
	return (0);
}
