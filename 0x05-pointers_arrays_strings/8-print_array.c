#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints an array of integers
 * @a: array identifier
 * @n: elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	/*sum = 0;*/

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
