#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory of a two dimensional array previously
 * allocated
 * @grid: the array to free memory from
 * @height: number of rows of the array
 *
 * Return: nothing
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
