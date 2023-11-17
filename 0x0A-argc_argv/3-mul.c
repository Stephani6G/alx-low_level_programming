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
	int a, b, c;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}
