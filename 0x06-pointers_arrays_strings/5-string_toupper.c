#include "main.h"

/**
 * string_toupper - hanges all lowercase letters of a string to uppercase
 * @a: Pointer to array 
 *
 * Return: Array of UPPER chars
 */
char *string_toupper(char *a)
{
	int b, c;

	b = 0;
	while (a[b] != '\0')
	{
		b++;
	}
	for (c = 0 ; c < b ; c++)
	{
		if (a[c] > 96 && a[c] < 123)
		{
			a[c] = a[c] - 32;
		}
		else
		{
			a[c] = a[c];
		}
	}
	return (a);
}
