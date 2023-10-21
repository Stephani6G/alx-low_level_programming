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
	int i;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (i = 0 ; src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = '\0';
	return (dest);
}
