#include "main.h"
#include <stdlib.>
#include <stdio.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements of an array
 * @size: size of array in bytes
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(size * nmemb);

	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb * size; i++)
	{
		n[i] = 0;
	}
	return ((void *)n);
}
