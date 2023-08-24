#include "main.h"

/**
* infinite_add -  function that adds two numbers
* @n1: Pointer to the first character of num 1
* @n2: Pointer to the first character of num 2
* @r:  buffer that the function will use to store the result
* @n: Buffer size
*
* Return: Pointer to the result of the string
*/
char *infinite_add(char *n1, char *n2, char *r, int n)
{
	int y = 0, z = 0;
	int add = 0;
	int x = n - 2;

	while (n1[y + 1] != 0)
		y++;
	while (n2[z + 1] != 0)
		z++;
	r[n - 1] = 0;

	while (x >= 0 && (y >= 0 || z >= 0))
	{
		add += (y < 0 ? '0' : n1:[y]) + (z < 0 ? '0' : n2[z]);
		add -= 2 * '0';
		r[x] = add % 10 + '0';
		add /= 10;
		x--;
		y--;
		z--;
	}

	if ((x < y || x < z) || (x < 0 && add))
	return (0);

	add ? r[x] = add + '0' : 1;
	x += add ? 0 : 1;

	return (r + i);
}
