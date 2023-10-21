#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: max number of bytes
 * Return: if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer = NULL;
	unsigned int i, j;
	unsigned int length1 = 0;
	unsigned int length2 = 0;

	while (s1 == NULL)
		s1 = "";
	while (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	if (n >= length2)
		n = length2;
	pointer = malloc(sizeof(char) * (length1 + n + 1));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < length1; i++)
	{
		pointer[i] = s1[i];
	}
	for (j = 0 ; j < n; j++)
		pointer[i + j] = s2[j];

	pointer[i + j] = '\0';

	return (pointer);
}
