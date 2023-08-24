#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @a: Pointer to array
 *
 * Return: Array with capitalize every strings
 */
char *cap_string(char *a)
{
	int x, y, z;
	char b[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	x = 0;
	while (a[x] != '\0')
	{
		x++;
	}
	for (j = 0 ; y < x ; y++)
	{
		if (a[y] > 96 && a[y] < 123)
		{
			for (z = 0; z < 13; z++)
			{
				if (a[y - 1] == b[z])
				{
					a[y] = a[y] - 32;
				}
			}
		}
	}
	if (a[0] > 96 && a[0] < 123)
		a[0] = a[0] - 32;
	return (a);

}
