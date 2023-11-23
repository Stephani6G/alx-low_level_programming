#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum number of values
 * @max: maximu number of values
 * Return:  the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *pointer = NULL;
	int i;
	unsigned int j = 0;

	if (min > max)
		return (NULL);
	pointer = malloc(sizeof(int) * (max - min + 1));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		pointer[j] = i;
		j++;
	}
	return (pointer);
}
