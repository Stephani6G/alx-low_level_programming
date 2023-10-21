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
	unsigned int a, b;
	unsigned int count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0 ; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
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
