#include "main.h"

/**
 * leet - function that encodes a string to 1337
 * @a: Pointer to array
 *
 * Return: Array with string encoded into 1337
 */
char *leet(char *a)
{
	int x, y;
	char encode[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char ch[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (x = 0 ; a[x] != '\0' ; x++)
	{
		for (y = 0 ; y <= 10 ; y++)
		{
			if (a[x] == ch[y])
				a[x] = encode[y];
		}
	}
	return (a);
}
