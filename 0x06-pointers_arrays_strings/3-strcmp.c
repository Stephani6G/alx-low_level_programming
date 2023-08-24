#include "main.h"

/**
 * _strcmp - function that compare strings s1 and s2
 * @s1: array number 1
 * @s2: array  no 2
 *
 * Return: Array of characters.
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b;

	for (a = 0 ; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		b = s1[a] - s2[a];
		if (b != 0)
		{
			return (b);
		}
		else
		{
			continue;
		}
	}
	return (b);
}
