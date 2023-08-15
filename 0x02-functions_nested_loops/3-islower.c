#include "main.h"
/**
 * -islower - a function that checks for lowercase character
 * description - a function that checks for lowercase chara
 * Return - 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
