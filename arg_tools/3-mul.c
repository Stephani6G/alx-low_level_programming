#include <stdio.h>
#include <stdlib.h>

/**
* main - Program that multiplies two numbers
* @argc: Number of command lines argument
* @argv: Character of arrays
*
* Return: Result of multiplication or 1 when does not receive two arguments
*/
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}
	return (0);
}
