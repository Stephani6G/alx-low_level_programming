#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - unction that creates an array of chars
 *		nd initializes it with a specific char
 * @size: size of array
 * @c: specific char
 * Return: pointer to array or  NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(c) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
