#include "main.h"

/**
 * print_line - Prints a line
 * @n: Number of lin
 * main - check the code
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 1 ; l <= n ; l++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
