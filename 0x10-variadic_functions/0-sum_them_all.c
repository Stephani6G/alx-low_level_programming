#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters
 * @n: the number of params
 * Return: If n == 0, return 0 otherwise 1
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int sum;
	unsigned int index;

	if (n == 0)
		return (0);
	va_start(num, n);
	index = 0;
	sum = 0;

	while (index < n)
	{
		sum += va_arg(num, int);
		index++;
	}
	va_end(num);

	return (sum);
}
