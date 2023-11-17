#include "main.h"
#include <stdio.h>

/**
 * main -  a program that multiplies two numbers
 * @argc: number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: product of the numbers or 1 on error
 */

int main(int argc, char *argv[])
{
	int index;
	int j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);

	}
	else
	{
		j = 1;
		for (index = 1; index < 3; index++)
			j *= atoi([index]);
		printf("%d\n", j);
	}
	return (0);
}
