#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main -  A function that prints the result of operations
* @argc: The number of arguments
* @argv: Argument vector
* Return: 0 Success always
*/

int main(int argc, char *argv[])
{

	int i, j, k;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	k = (*p)(i, j);

	printf("%d\n", k);
	return (0);
}
