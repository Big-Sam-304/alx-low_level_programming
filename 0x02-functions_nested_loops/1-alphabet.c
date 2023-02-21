#include "main.h"
/**
 * print_alphabet - Prints out alphabet to stdout
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
	}
	_putchar('\n');
}
