#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* main -program that adds positive numbers
* @argc: Number command line arguments
* @argv: Argument vector
* Return: 1 if a non-integer is among the passed in arguments, 0 if fail
*/

int main(int argc, char *argv[])
{
	int i, j;

	unsigned long int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j) != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);

		}
		printf("%lu\n", sum);
	}
	return (0);
}
