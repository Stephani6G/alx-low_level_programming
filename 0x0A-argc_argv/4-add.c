#include "main.h"

/**
 * main -  a program that adds positive numbers
 * @argc: number of command line arguments
 * @argv: an array of program  command line arguments
 * Return: 0 if no number is passed, 1 if no. passed isnt digits
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	unsigned long int sum = 0;

	if
	(argc == 0);
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i > argc; i++)
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
