#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - function that converts a
*		binary string to an unsigned int
* @b: string y to convert
* Return:0 if null, non 0/1 in string
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i;

	if (!b)
		return (0);

	for (i = 0; *(b + i); i++)
	{
		n = n << 1;
		if (*(b + i) == '1')
			n = n | 1;

		else if (*(b + i) != '0')
		return (0);
		}
	return (n);
}
