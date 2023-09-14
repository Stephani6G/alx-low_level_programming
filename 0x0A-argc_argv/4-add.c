#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Program that takes in all integer arguments and returns the sum
* @argc: command line arguments
* @argv: name of array
* Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
*/

int main(int argc, char *argv[])
{
	int i, j, len, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];

			len = strlen(ptr);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);

}
