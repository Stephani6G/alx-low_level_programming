#include "main.h"

/**
 * *_strncpy - function that copies the string pointed to by src.
 * @dest: destination array name.
 * @src: elements of the array
 * @n: no. of bytes of src array
 *
 * Return: Array of char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n ; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
	_putchar('\n');
}
