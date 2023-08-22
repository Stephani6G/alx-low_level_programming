#include "main.h"

/**
 * _atoi - string to integer
 * @s: string
 * main - check the code
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int c, d, e, f;

	c = e = 0;
	f = 1
	while ((*(s + c) < '0' || *(s + c) > '9') && (*(s + c) != '\0'))
	{
		if (*(s + c) == '-')
			f *= -1;
		c++;
	}
	d = c;
	while ((*(s + d) >= '0') && (*(s + d) <= '9'))
	{
		e = e * 10 + f * (*(s + d) - '0');
		d++;
	}
	return (e);
}
