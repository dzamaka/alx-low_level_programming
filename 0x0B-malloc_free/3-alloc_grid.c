#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - creates a 2 dimentional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL on failure
 * on success, pointer to the array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(sizeof(int) * width);
		if (grid[w] == NULL)
		{
			while (w >= 0)
				free(grid[w--]);
			free(grid);
			return (NULL);
		}

		for (h == 0; h < width; h++)
			grid[h][w] = 0;
	}

	return (grid);
}
