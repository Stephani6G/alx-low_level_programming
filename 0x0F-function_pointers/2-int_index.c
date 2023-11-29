#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: number of elements in the array
 * @array: array to search in
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function
 *		does not return 0 If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array && size > 0 && cmp)
	{
		j = 0;
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);

			if (j == 1)
				return (i);
		}
		return (-1);

	}
	return (-1);
}
