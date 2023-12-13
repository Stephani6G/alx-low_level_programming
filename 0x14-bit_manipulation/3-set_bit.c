#include "main.h"

/**
 * set_bit - function that sets the
 *		value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index at which to set bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int l, dig;

	l = (sizeof(unsigned long int) * 8) - 1;

	if (index > l)
		return (-1);
	dig = 1 << index;
	*n = *n | dig;
	return (1);
}
