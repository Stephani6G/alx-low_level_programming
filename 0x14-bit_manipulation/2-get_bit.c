#include "main.h"

/**
* get_bit - function that gets a bit at a given index
* @n: number to find bit in
* @index: index to search fot the bit
* Return: value of bit at index or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dig, l = 1;

	dig = (sizeof(unsigned long int) * 8) - 1;
	if (n == 0)
		return (0);
	l = l << index;
	if (index > dig)
		return (-1);
	if (l & n)
		return (1);
	else
		return (0);
}
