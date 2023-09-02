#include "main.h"

/**
* _memcpy - copies n bytes from memory area
* @dst: memory area
* @src:memory area
* n: number of bytes
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x = *(src + x;
		x++;
	}
	return (dest);
}
