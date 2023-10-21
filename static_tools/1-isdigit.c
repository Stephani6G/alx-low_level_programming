#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for digits 0 through 9
 * @c: is a character to use in the arguments
 *
 *Return: 1 if c is digit. 0 otherwise.
 */
int _isdigit(int c)
{
	int digit;

	if (c >= 48  && c <= 57)
	{
		digit = 1;
	}
	else
	{
		digit = 0;
	}
	return (digit);
}
