#include "main.h"
#include <stdio>
/**
 * print_array - Prints an array of integers
 * @a: array identifier
 * @n: elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	/*sum = 0;*/

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
