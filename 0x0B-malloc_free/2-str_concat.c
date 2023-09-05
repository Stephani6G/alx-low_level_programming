#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -  a function that concatenates two string
 * @s1: srting one
 * @s2: string two
 * Return: NULL on failure or  empty string if passed
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int stop;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (k = 0; k < i; k++)
	s[k] = s1[k];

	stop = j;

	for (j = 0; j <= stop; k++, j++)
		s[k] = s2[j];

	return (s);
}

