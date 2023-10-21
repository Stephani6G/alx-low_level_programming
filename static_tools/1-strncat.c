#include "main.h"
/**
 * _strncat - concatenate two string
 * @dest: destination of elements
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
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
