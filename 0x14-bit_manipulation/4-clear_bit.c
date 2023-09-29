#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to change
 * @index: index to change
 * Return: 1 if works, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int limit;

	if (!n)
		return (-1);

	limit = (sizeof(unsigned long int) * 8) - 1;

	if (index > limit)
		return (-1);

	limit = 1 << index;
	if ((limit | *n) == *n)
		*n = *n ^ limit;
	return (1);

}
