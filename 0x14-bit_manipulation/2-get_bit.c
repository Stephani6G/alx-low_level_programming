#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dig, lim = 1;

	dig = (sizeof(unsigned long int) * 8) - 1;
	if (n == 0)
		return (0);

	lim = lim << index;
	if (index > dig)
		return (-1);
	if (lim & n)
		return (1);
	else
		return (0);
}
