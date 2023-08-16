include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int)
{
	int ld  = n % 10;
	
	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');
	
	return (ld);
}
