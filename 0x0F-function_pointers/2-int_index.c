#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: pointer to the array to search an integer
 * @size: number of elements in the array
 * @cmp: a pointer to the function used to compare values
 *
 * Return: index of the first element for which cmp function
 * does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
