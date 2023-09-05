#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - eturns a pointer to a newly allocated space memory with copy of s
 * @str: the string given as a parameter.
 * Return: NULL if str = NULL or On success,the duplicated string
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != 0 '\0'; i++)
		;

	s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		s[j] = str[j];

	return (s);

