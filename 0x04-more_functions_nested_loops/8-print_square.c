#include "main.h"

/**
 * print_square - Prints a square lowed by a new line
 * @size: Size of the square printed by function
 * main - check the code
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int c;
	int r;

	if (size > 0)
	{
		for (c = 1 ; c <= size ; c++)
		{
			for (r = 1 ; r <= size ; r++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
