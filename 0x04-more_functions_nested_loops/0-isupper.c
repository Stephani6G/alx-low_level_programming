#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase character.
 * @c: a character argument
 *
 *Return: 1 if c is uppercase. 0 otherwise.
 */
int _isupper(int c)
{
	int upc;

	if (c > 64 && c < 91)
	{
		upc = 1;
	}
	else
	{
		upc = 0;
	}
	return (upc);
}
