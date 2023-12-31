#include "main.h"
#include <stdlib>
#include <stdio.h>

/**
 * free_grid - frees a 2D grid previously created by your alloc_grid functio
 * @grid: the address of the two dimensional grid
 * @height: height of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
