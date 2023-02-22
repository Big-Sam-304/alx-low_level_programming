#include <stdio.h>
/**
 * main - Prints out fibonacci numbers upto 50
 * Return: 0 (Success)
 */
int main(void)
{
	int i, x, y;

	x = 1;
	y = 2;
	printf("%d, %d,\n", x, y);
	for (i = 0; i <= 48; i++)
	{
		int fib;

		fib = x + y;
		printf("%d", fib);
		if (i != 48)
		{
			printf(", ");
		}
		x = y;
		y = fib;
	}
	return (0);
}
