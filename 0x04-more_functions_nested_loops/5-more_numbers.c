#include "main.h"

/**
 * more_number 10 times the numbers, from 0 to 1
 * main - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int t;
	int num;

	for (t = 1 ; t <= 10 ; t++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if (num >= 10)
			{
				_putchar('0' + num / 10);
			}
			_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
