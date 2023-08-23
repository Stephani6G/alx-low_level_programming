#include "main.h"
#include <stdio.h>

/**
 * print_array - Print elements of a array f integers, followed by a new line
 * @a: array name.
 * @n: elements of the array.
 *
 * Return: Always void.
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (b = 0; b < n ; b++)
	{
		if (b != (n - 1))
		{
			printf("%d, ", a[b]);
		}
		else
		{
			printf("%d", a[b]);
		}
	}
	printf("\n");
}
