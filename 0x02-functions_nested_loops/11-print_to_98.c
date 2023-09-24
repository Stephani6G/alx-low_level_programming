#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98 followed by a new line
 * @n: The first printed number
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		i = -1;
	}
	else if (n < 98)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	printf("%d", n);

	while (n != 98)
	{
		n = n + i;

		printf(", %d", n);
	}
	printf("\n");
}
