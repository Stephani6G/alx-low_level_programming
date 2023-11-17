#include "main.h"
#include <stdio.h>

/**
 * main -  program that prints its name, followed by a new line
 * If you rename the program it will print the new name without recompile
 * @argc: the number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0 success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
