#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: byte size of each array
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return ((void *)p);
}
