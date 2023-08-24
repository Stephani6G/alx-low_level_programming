#include "main.h"
/**
 * _strcat - FUNCTION THAT concatenates two strings
 * @dest: the resulting string 
 * @src: appends the src string to the dest string
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[j] != '\0')
	{
		dest[a] = src [b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
