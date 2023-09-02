#include "main.h"

/**
* _memset -  a function that fills memory with a constant byte
* @s:  memory area pointer
* @b: constant byte
* @n: number of bytes
*
* Return:  s memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; a < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
