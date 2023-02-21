#include <stdio.h>
/**
 * main - Prints out all combinations of 2 digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	
	}
	putchar('\n');
	return (0);
}
