#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @n: integer
 * @a: array of integers
 */

void reverse_array(int *a, int n)
{
	int tmp, i, j;

	for (i = 0, j = n - 1; i < n, j >= 0; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
