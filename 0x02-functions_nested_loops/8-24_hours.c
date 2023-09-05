#include "main.h"

/**
 * main - check the code
 * jack_bauer - function that prints every minute of the da
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i, j, k, m;

	while (i <= 23)
	{
	while (j <= 59)
	{
	k = i % 10;
	m = j % 10;
	_putchar(i / 10 + '0');
	_putchar(k + '0');
	_putchar(':');
	_putchar(j / 10 + '0');
	_putchar(m + '0');
	j++;
	_putchar('\n');
	}

	i++;
	j = 0;
	}

}
