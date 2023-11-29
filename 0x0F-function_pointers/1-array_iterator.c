#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function given as a parameter
 * @size: size of array
 * @action:  a pointer to the function you need to use
 * @array: the array of the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
