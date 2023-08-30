#include "main.h"

/**
 * _pow_recursion - function that return  value of x raised to the power of y
 * @x: integer base
 * @y: integer power
 * Return: If y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
