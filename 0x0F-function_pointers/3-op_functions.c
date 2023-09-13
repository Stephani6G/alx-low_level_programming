#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - adds two numbers
* @a: The first number
* @b: The second number
*
* Return: The sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - difference of two numbers
* @a: The first number
* @b: The second number
*
* Return: The difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - mulitiplies two numbers
* @a: The first number
* @b: The second number
*
* Return: The product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides two numbers
* @a: The first number
* @b: The second number
*
* Return: The quotient of a and b
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - the remainder of the division
* @a: The first number
* @b: The second number
*
* Return: The remainder of the division
*/

int op_mod(int a, int b)
{
	return (a % b);
}
