#include "main.h"

/**
 * _puts - Prints a string ollowed by a new line
 * @str: string
 *
 * Return: Always void 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
