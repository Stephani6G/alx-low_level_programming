#include "main.h"

/**
 * puts2 - Prints very other character of a string, starting with the first cha
 * @str: Variable string
 *
 * Return: Always void.
 */
void puts2(char *str)
{
	int s, n;
	char u, *count;

	s = 0;
	count = str;
	while (*count != '\0')
	{
		count++;
		s++;
	}
	for (n = 0 ; n < s ; n++)
	{
		if (n % 2 == 0)
		{
			u = *(str + n);
			_putchar(u);
		}
	}
	_putchar(10);
}
