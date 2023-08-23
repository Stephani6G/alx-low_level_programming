#include "main.h"

/**
* _atoi - converts a string to an integer preceeded by infinite char
* @s: string to convert  to integer
*
* Return: value of integer
*/
int _atoi(char *s)
{
	int a, b, c, d;

	a = n = 0;
	d = a;
	while ((*(s + a) < '0' || *(s + a) > '9') && (*(s + a) != '\0'))
	{
		if (*(s + a) == '-')
			d *= -1;
		a++;
	}
	b = a;
	while ((*(s + b) >= '0') && (*(s + b) <= '9'))
	{
		c = c * 10 + d * (*(s + b) - '0');
		b++;
	}
	return (c);
}
