#include "main.h"

void print_prev_digits(int n);

/**
* print_number - prints an integer
*
* @n: number to print
* Return: void
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (n > 9 || n < -9)
		print_prev_digits(n);
	if (n < 0)
		_putchar(((n % 10) * -1) + '0');
	else
		_putchar((n % 10) + '0');
}

