#include "main.h"

/**
* print_number - prints an integer
*
* @n: number to print
* Return: void
*/

void print_number(int n)
{
	int ndigit = 0;
	int N = n;
	int i, j, Ldigit, next, K;

	while (N != 0)
	{
		N = N / 10;
		ndigit++;
	}
	N = n;
	if (n < 0)
	{
		Ldigit = -(N + 10) % 10;
		if (Ldigit < 0)
		{
			Ldigit = -N;
		}
		N = -(N + Ldigit) / 10;
		_putchar('-');
	}

	else
	{
		Ldigit = N % 10;
		N = (N - Ldigit) / 10;
	}

	for (i = ndigit - 1; i >= 1; --i)
	{
		K = N;
		for (j = (i - 1); j > 0; --j)
		{
			K = K / 10;
		}
		next = K % 10;
		_putchar(next + '0');
	}
	_putchar(Ldigit + '0');
}
