#include "main.h"

/**
 * factorial - function that return factorial of a given number
 * @n: integer factorial
 *
 * Return: If n is lower than 0 return -1 to indicate an error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
