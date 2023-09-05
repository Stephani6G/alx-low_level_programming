#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function  creates an array of charsand initializes it
 * @size: size of array
 * @c: specific char to initialize
 * Return:  a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int j;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(c) * size);

	if (s == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		s[j] = c;

	return (s);
}
