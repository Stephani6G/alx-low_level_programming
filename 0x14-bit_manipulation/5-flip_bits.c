#include "main.h"

/**
 * flip_bits - function counts the number of bits to change
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = 0;

	while (n || m)
	{
	if ((n & 1) != (m & 1))
	diff++;
		m = m >> 1;
		n = n >> 1;
	}
	return (diff);
}
