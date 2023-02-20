#include <stdio.h>
/**
 * main - Prints out the base 10 digits using putchar
 * Return: 0 (Successful)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
