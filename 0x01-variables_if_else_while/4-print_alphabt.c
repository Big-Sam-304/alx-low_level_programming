#include <stdio.h>
/**
 * main - print a-z in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
	if ((c != 'q') && (c != 'e'))
	{
		putchar(c);
	}
	}
	putchar('\n');
	return (0);
}
