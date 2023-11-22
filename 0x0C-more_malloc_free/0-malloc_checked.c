#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  malloc_checked - a function that allocates memory
 * @b: the size of the byte
 * Return: process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
