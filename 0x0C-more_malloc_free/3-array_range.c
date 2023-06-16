#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array of int
 * @max: maximum value of the array of int
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *numbers;

	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;

	numbers = malloc(sizeof(int) * size);

	if (numbers == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		numbers[i] = min;
		min++;
	}
	return (numbers);
}
