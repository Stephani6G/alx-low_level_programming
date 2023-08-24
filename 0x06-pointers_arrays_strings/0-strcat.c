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
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}

	for (b = 0 ; src[b] != '\0'; a++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
