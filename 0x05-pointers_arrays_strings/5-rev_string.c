#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 *
 * Return: Always void.
 */
void rev_string(char *s)
{
	int a, b;
	char *end_ptr, ch;

	end_ptr = s;

	for (a = 0 ; *end_ptr != '\0' ; a++)
	{
		end_ptr++;
	}
	end_ptr = end_ptr - 1;

	for (b = 0; b < a / 2 ; b++)
	{
		ch = *end_ptr;
		*end_ptr = *(s + b);
		*(s + b) = ch;
		end_ptr--;
	}
}

