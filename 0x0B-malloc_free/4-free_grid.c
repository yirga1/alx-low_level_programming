#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your
 * alloc_grid function.
 * @grid: the grid we'll free up
 * @height: the number of rows in the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[j]);
		i++;
	}
	free(grid);
}

