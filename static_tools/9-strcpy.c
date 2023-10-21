#include "main.h"

/**
 * *_strcpy - function that copies the tring pointed to by src, including null
 * @dest: array name to pointeer
 * @src: elements of the array dest
 *
 * Return: Always void.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
	_putchar('\n');
}
