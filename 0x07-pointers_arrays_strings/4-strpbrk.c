#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: gives bytes to s
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (i  0; s[a]; a++)
	{
		for (j = 0; accept[j]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (accept[b])
			return (s + a);
	}
	return (0);
}
