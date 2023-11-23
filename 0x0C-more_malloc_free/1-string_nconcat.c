#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: 1st string to concentrate
 * @s2: 2nd string to concentrate
 * @n: number of bytes
 * Return: pointer a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer = NULL;
	unsigned int i;
	unsigned int j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (s1 == NULL)
		s1 = "";
	while (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	pointer = malloc(sizeof(char) * (len1 + n + 1));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < len1; i++)
	{
		pointer[i] = s1[i];
	}
	for (j = 0 ; j < n; j++)
		pointer[i + j] = s2[j];

	pointer[i + j] = '\0';

	return (pointer);
}
