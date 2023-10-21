#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s:  length of a srting
 * main - check the code
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int y = 0;

	while (*s != '\0')
	{
		y++;
		s++;
	}
	return (y);
}
