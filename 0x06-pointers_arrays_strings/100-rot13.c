#include "main.h"

/**
 * rot13 - function that encode a string using rot13
 * @a: Pointer to arrayy
 *
 * Return: Array encode in rot13
 */
char *rot13(char *a)
{
	int i, x;
	char alpha[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char ch[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		for (x = 0 ; x <= 52 ; x++)
		{
			if (a[i] == alpha[x])
			{
				a[i] = ch[x];
				break;
			}
		}
	}
	return (a);
}
