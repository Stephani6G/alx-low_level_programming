#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: first value
 * @max: last value
 * Return:  the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ar, size;
	unsigned int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ar = malloc(sizeof(int) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = min++;

	return (ar);
}
