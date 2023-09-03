#include "main.h"
#include <stdio.h>

/**
* _strspn - a function that gets the length of a prefix substring
* @s: The string
*
* @accept: gives bytes to s
* Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0 ; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
			{
				count++;
				break;
			}
		}
		if (s[a] != accept[b])
		{
			break;
		}
	}
	return (count);
}
