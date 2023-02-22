#include "main.h"
/**
 * print_alphabet_x10 - Prints out a letter
 * 10 times before moving to a new line.
 */
void print_alphabet_x10(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		int i;

		for (i = 0; i < 10; i++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
