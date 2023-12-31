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
	int *ptr = NULL;
	int i;
	unsigned int j = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min ; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
