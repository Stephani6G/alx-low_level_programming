#include "main.h"

/**
	 * puts_half - Prints half of a string, followed by a new line
 * @str: Variable string where s is length
 *
 * Return: Always void.
 */
void puts_half(char *str)
{
	int s = 0, n;

	while (str[s] != '\0')
	{
		s++;
	}
	if (s % 2 == 0)
	{
		for (n = s / 2 ; n < s ; n++)
		{
			_putchar(*(str + n));
		}
	}
	else
	{
		for (n = (s - (s - 1) / 2) ; n < s ; n++)
		{
			_putchar (*(str + n));
		}
	}
	_putchar(10);
}
