#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees grid created by alloc_grid
 * @grid: grid to be freed
 * @height: int to be freed
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL || height != 0)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[j]);
		}
		free(grid);
	}
}
