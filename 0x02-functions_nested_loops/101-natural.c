#include <stdio.h>

/**
 * main - displays all natural numbers that are
 * multiples of 3 or 5 up to, but excluding, 1024
 *
 * Return: 0  success
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; ++num)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
