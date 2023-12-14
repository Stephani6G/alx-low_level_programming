#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function that sets the value
 *		of a bit to 0 at a given index
 * @n: number to change
 * @index: index to change
 * Return: 1 if works, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int l;

	if (!n)
		return (-1);

	l = (sizeof(unsigned long int) * 8) - 1;

	if (index > l)
		return (-1);

	l = 1 << index;
	if ((l | *n) == *n)
		*n = *n ^ l;
	return (1);

}
