#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: the resulting string
 * @src: appends the src string to the dest string
 * @n: bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int i;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (i = 0 ; i < n && src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = '\0';
	return (dest);
	_putchar('\n');
}



