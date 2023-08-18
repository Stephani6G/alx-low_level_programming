#include "main.h"

/**
 * print_triangle - print a triangle foloowed by new line
 * @size: Size of the triangl
 * main - check the code
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int r;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1 ; r <= size ; r++)
		{
			for (c = 1 ; c <= size ; c++)
			{
				if (c <= size - r)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
