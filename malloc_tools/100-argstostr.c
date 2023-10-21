#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return:  a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ar;
	int i, j;
	int k = 0;
	int all = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
		for (i = 0; i < ac; i++)
		{
		for (j = 0; av[i][j] != 0; j++)
		{
			continue;
		}
		all += j;
	}
	ar = malloc(sizeof(char) * (all + ac + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ar[k] = av[i][j];
			k++;
		}
		ar[k] = '\n';

		k++;
	}
	return (ar);
}
