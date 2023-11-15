#include "main.h"
#include <stdio.h>

/**
 * prime - function to check if a number is a  prime number
 * @i: numbers before n to divide
 * @num: number to evaluate
 * Return: 1 for  prime number. 0 for not prime
 */

int prime(int i, int num)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	if (num == i)
	{
		return (1);
	}
	else
	{
		return (prime(i + 1, num));
	}
}

/**
 * is_prime_number - function checked if is prime or not
 * @n: number to check
 * Return: 0 for not prime 1 is prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(2, n));
}
