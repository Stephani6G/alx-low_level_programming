#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *		which contains a copy of the string given as a param
 * @str: string
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	while (str[j])
	{
		s[j] = str[j];
		j++;
	}
	s[j + i] = 0;
	return (s);
}
