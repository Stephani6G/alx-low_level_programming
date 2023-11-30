#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 *
 * @n: number of strings passed to  the function
 * Return: If separator is NULL, don’t print it
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int index;
	char *str;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = (va_arg(strings, char*));
		if (str != NULL)
			printf("%s", str);

		else
			printf("(nil)");

		if (separator != NULL && index < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
