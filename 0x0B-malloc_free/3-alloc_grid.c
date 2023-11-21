#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid -function that returns a pointer to a 2D
 *		array of integers.
 * @width: width of the array of integers
 * @height: height of the array of array of integers
 * Return: on succces pointer to arry ,NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(grid[k]);
			free(grid);
			return (NULL);
		}
	}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				*(grid[i] + j) = 0;
		}
		return (grid);
}
