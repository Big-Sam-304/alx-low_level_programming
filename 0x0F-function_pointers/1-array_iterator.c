#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter on each element
 * of an array
 * @size: size of the array
 * @array: array to print elements thereof
 * @action: pointer to a function to be used
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
