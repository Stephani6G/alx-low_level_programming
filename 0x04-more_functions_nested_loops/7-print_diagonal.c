#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the termina
 * main - check the code
 * @n: is the number of times the character \ should be printed
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int row;
	int col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1 ; row <= n ; row++)
		{
			for (col = 1 ; col <= row - 1 ; col++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
