#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - checks whether a machine is big endian or little
 *
 * Return: 1 if little endian, 0 otherwise
 */

int get_endianness(void)
{
	int test = 256;
	void *i = &test;

	if ((*((char *)i + 1) & 1) != 0)
		return (1);

	else
		return (0);
	return (1);
}
