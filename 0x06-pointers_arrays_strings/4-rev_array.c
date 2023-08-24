#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @y: array name
 * @n: elements of the array y
 *
 * Return: Array of reverse chars
 */

void reverse_array(int *y, int n)
{
	int a, t;
	int *k;

	k = &y[n - 1];
	for (a = 0 ; a < (n / 2) ; a++)
	{
		t = y[a];
		y[a] = *k;
		*k = t;
		k--;
	}
}
